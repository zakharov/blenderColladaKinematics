# ##### BEGIN GPL LICENSE BLOCK #####
#
#  This program is free software; you can redistribute it and/or
#  modify it under the terms of the GNU General Public License
#  as published by the Free Software Foundation; either version 2
#  of the License, or (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software Foundation,
#  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
# ##### END GPL LICENSE BLOCK #####

bl_info = {
    "name": "3D Function Surfaces",
    "author": "Buerbaum Martin (Pontiac)",
    "version": (0, 3, 6),
    "blender": (2, 5, 6),
    "api": 34093,
    "location": "View3D > Add > Mesh >"\
        " Z Function Surface & XYZ Function Surface",
    "description": "Create Objects using Math Formulas",
    "warning": "",
    "wiki_url": "http://wiki.blender.org/index.php/Extensions:2.5/Py/"\
        "Scripts/Add_Mesh/Add_3d_Function_Surface",
    "tracker_url": "https://projects.blender.org/tracker/index.php?"\
        "func=detail&aid=21444",
    "category": "Add Mesh"}

"""
Z Function Surface

This script lets the user create a surface where the z coordinate
is a function of the x and y coordinates.

    z = f(x,y)

X,Y,Z Function Surface

This script lets the user create a surface where the x, y and z
coordinates are defiend by a function.

    x = f(u,v)
    y = f(u,v)
    z = f(u,v)

Usage:
You have to activated the script in the "Add-Ons" tab (user preferences).
The functionality can then be accessed via the
"Add Mesh" -> "Z Function Surface"
and
"Add Mesh" -> "X,Y,Z Function Surface"
menu.

Version history:
v0.3.6 - Various updates to match current Blender API.
    Removed recall functionality.
    Better code for align_matrix
    Hopefully fixed bug where uMax was never reached. May cause other stuff.
v0.3.5 - createFaces can now "Flip" faces and create fan/star like faces.
v0.3.4 - Updated store_recall_properties, apply_object_align
    and create_mesh_object.
    Changed how recall data is stored.
v0.3.3 - API change Mathutils -> mathutils (r557)
v0.3.2 - Various fixes&streamlining by ideasman42/Campbell Barton.
    r544 Compile expressions for faster execution
    r544 Use operator reports for errors too
    r544 Avoid type checks by converting to a float, errors
    converting to a float are reported too.
    Fixed an error Campbell overlooked (appending tuples to an
    array, not single values) Thamnks for the report wild_doogy.
    Added 'description' field, updated 'wiki_url'.
    Made the script PEP8 compatible again.
v0.3.1 - Use hidden "edit" property for "recall" operator.
    Bugfix: Z Function was mixing up div_x and div_y
v0.3 - X,Y,Z Function Surface (by Ed Mackey & tuga3d).
    Renamed old function to "Z Function Surface".
    Align the geometry to the view if the user preference says so.
    Store recall properties in newly created object.
v0.2.3 - Use bl_info for Add-On information.
v0.2.2 - Fixed Add-On registration text.
v0.2.1 - Fixed some new API stuff.
    Mainly we now have the register/unregister functions.
    Also the new() function for objects now accepts a mesh object.
    Changed the script so it can be managed from the "Add-Ons" tab
    in the user preferences.
    Added dummy "PLUGIN" icon.
    Corrected FSF address.
    Clean up of tooltips.
v0.2 - Added security check for eval() function
    Check return value of eval() for complex numbers.
v0.1.1 - Use 'CANCELLED' return value when failing.
    Updated web links.
v0.1 - Initial revision.
More Links:
http://gitorious.org/blender-scripts/blender-3d-function-surface
http://blenderartists.org/forum/showthread.php?t=179043
"""
import bpy
from mathutils import *
from math import *
from bpy.props import *

# List of safe functions for eval()
safe_list = ['math', 'acos', 'asin', 'atan', 'atan2', 'ceil', 'cos', 'cosh',
    'degrees', 'e', 'exp', 'fabs', 'floor', 'fmod', 'frexp', 'hypot',
    'ldexp', 'log', 'log10', 'modf', 'pi', 'pow', 'radians',
    'sin', 'sinh', 'sqrt', 'tan', 'tanh']

# Use the list to filter the local namespace
safe_dict = dict((k, globals().get(k, None)) for k in safe_list)


# Stores the values of a list of properties and the
# operator id in a property group ('recall_op') inside the object.
# Could (in theory) be used for non-objects.
# Note: Replaces any existing property group with the same name!
# ob ... Object to store the properties in.
# op ... The operator that should be used.
# op_args ... A dictionary with valid Blender
#             properties (operator arguments/parameters).


# calculates the matrix for the new object
# depending on user pref
def align_matrix(context):
    loc = Matrix.Translation(context.scene.cursor_location)
    obj_align = context.user_preferences.edit.object_align

    if (context.space_data.type == 'VIEW_3D'
        and obj_align == 'VIEW'):
        viewMat = context.space_data.region_3d.view_matrix
        rot = viewMat.rotation_part().invert().resize4x4()
    else:
        rot = Matrix()
    align_matrix = loc * rot
    return align_matrix


# Create a new mesh (object) from verts/edges/faces.
# verts/edges/faces ... List of vertices/edges/faces for the
#                       new mesh (as used in from_pydata).
# name ... Name of the new mesh (& object).
# edit ... Replace existing mesh data.
# Note: Using "edit" will destroy/delete existing mesh data.
def create_mesh_object(context, verts, edges, faces, name, edit, align_matrix):
    scene = context.scene
    obj_act = scene.objects.active

    # Can't edit anything, unless we have an active obj.
    if edit and not obj_act:
        return None

    # Create new mesh
    mesh = bpy.data.meshes.new(name)

    # Make a mesh from a list of verts/edges/faces.
    mesh.from_pydata(verts, edges, faces)

    # Update mesh geometry after adding stuff.
    mesh.update()

    # Deselect all objects.
    bpy.ops.object.select_all(action='DESELECT')

    if edit:
        # Replace geometry of existing object

        # Use the active obj and select it.
        ob_new = obj_act
        ob_new.select = True

        if obj_act.mode == 'OBJECT':
            # Get existing mesh datablock.
            old_mesh = ob_new.data

            # Set object data to nothing
            ob_new.data = None

            # Clear users of existing mesh datablock.
            old_mesh.user_clear()

            # Remove old mesh datablock if no users are left.
            if (old_mesh.users == 0):
                bpy.data.meshes.remove(old_mesh)

            # Assign new mesh datablock.
            ob_new.data = mesh

    else:
        # Create new object
        ob_new = bpy.data.objects.new(name, mesh)

        # Link new object to the given scene and select it.
        scene.objects.link(ob_new)
        ob_new.select = True

        # Place the object at the 3D cursor location.
        # apply viewRotaion
        ob_new.matrix_world = align_matrix

    if obj_act and obj_act.mode == 'EDIT':
        if not edit:
            # We are in EditMode, switch to ObjectMode.
            bpy.ops.object.mode_set(mode='OBJECT')

            # Select the active object as well.
            obj_act.select = True

            # Apply location of new object.
            scene.update()

            # Join new object into the active.
            bpy.ops.object.join()

            # Switching back to EditMode.
            bpy.ops.object.mode_set(mode='EDIT')

            ob_new = obj_act

    else:
        # We are in ObjectMode.
        # Make the new object the active one.
        scene.objects.active = ob_new

    return ob_new


# A very simple "bridge" tool.
# Connects two equally long vertex rows with faces.
# Returns a list of the new faces (list of  lists)
#
# vertIdx1 ... First vertex list (list of vertex indices).
# vertIdx2 ... Second vertex list (list of vertex indices).
# closed ... Creates a loop (first & last are closed).
# flipped ... Invert the normal of the face(s).
#
# Note: You can set vertIdx1 to a single vertex index to create
#       a fan/star of faces.
# Note: If both vertex idx list are the same length they have
#       to have at least 2 vertices.
def createFaces(vertIdx1, vertIdx2, closed=False, flipped=False):
    faces = []

    if not vertIdx1 or not vertIdx2:
        return None

    if len(vertIdx1) < 2 and len(vertIdx2) < 2:
        return None

    fan = False
    if (len(vertIdx1) != len(vertIdx2)):
        if (len(vertIdx1) == 1 and len(vertIdx2) > 1):
            fan = True
        else:
            return None

    total = len(vertIdx2)

    if closed:
        # Bridge the start with the end.
        if flipped:
            face = [
                vertIdx1[0],
                vertIdx2[0],
                vertIdx2[total - 1]]
            if not fan:
                face.append(vertIdx1[total - 1])
            faces.append(face)

        else:
            face = [vertIdx2[0], vertIdx1[0]]
            if not fan:
                face.append(vertIdx1[total - 1])
            face.append(vertIdx2[total - 1])
            faces.append(face)

    # Bridge the rest of the faces.
    for num in range(total - 1):
        if flipped:
            if fan:
                face = [vertIdx2[num], vertIdx1[0], vertIdx2[num + 1]]
            else:
                face = [vertIdx2[num], vertIdx1[num],
                    vertIdx1[num + 1], vertIdx2[num + 1]]
            faces.append(face)
        else:
            if fan:
                face = [vertIdx1[0], vertIdx2[num], vertIdx2[num + 1]]
            else:
                face = [vertIdx1[num], vertIdx2[num],
                    vertIdx2[num + 1], vertIdx1[num + 1]]
            faces.append(face)

    return faces


class AddZFunctionSurface(bpy.types.Operator):
    '''Add a surface defined defined by a function z=f(x,y)'''
    bl_idname = "mesh.primitive_z_function_surface"
    bl_label = "Add Z Function Surface"
    bl_options = {'REGISTER', 'UNDO'}

    # edit - Whether to add or update.
    edit = BoolProperty(name="",
        description="",
        default=False,
        options={'HIDDEN'})

    equation = StringProperty(name="Z Equation",
        description="Equation for z=f(x,y)",
        default="1 - ( x**2 + y**2 )")

    div_x = IntProperty(name="X Subdivisions",
        description="Number of vertices in x direction.",
        default=16,
        min=3,
        max=256)
    div_y = IntProperty(name="Y Subdivisions",
        description="Number of vertices in y direction.",
        default=16,
        min=3,
        max=256)

    size_x = FloatProperty(name="X Size",
        description="Size of the x axis.",
        default=2.0,
        min=0.01,
        max=100.0,
        unit="LENGTH")
    size_y = FloatProperty(name="Y Size",
        description="Size of the y axis.",
        default=2.0,
        min=0.01,
        max=100.0,
        unit="LENGTH")
    align_matrix = Matrix()

    def execute(self, context):
        edit = self.edit
        equation = self.equation
        div_x = self.div_x
        div_y = self.div_y
        size_x = self.size_x
        size_y = self.size_y

        verts = []
        faces = []

        delta_x = size_x / float(div_x - 1)
        delta_y = size_y / float(div_y - 1)
        start_x = -(size_x / 2.0)
        start_y = -(size_y / 2.0)

        edgeloop_prev = []

        try:
            expr_args = (
                compile(equation, __file__, 'eval'),
                {"__builtins__": None},
                safe_dict)
        except:
            import traceback
            self.report({'ERROR'}, "Error parsing expression: "
                + traceback.format_exc(limit=1))
            return {'CANCELLED'}

        for row_x in range(div_x):
            edgeloop_cur = []
            x = start_x + row_x * delta_x

            for row_y in range(div_y):
                y = start_y + row_y * delta_y
                z = 0.0

                safe_dict['x'] = x
                safe_dict['y'] = y

                # Try to evaluate the equation.
                try:
                    z = float(eval(*expr_args))
                except:
                    import traceback
                    self.report({'ERROR'}, "Error evaluating expression: "
                        + traceback.format_exc(limit=1))
                    return {'CANCELLED'}

                edgeloop_cur.append(len(verts))
                verts.append((x, y, z))

            if len(edgeloop_prev) > 0:
                faces_row = createFaces(edgeloop_prev, edgeloop_cur)
                faces.extend(faces_row)

            edgeloop_prev = edgeloop_cur

        obj = create_mesh_object(context, verts, [], faces,
            "Z Function", edit, self.align_matrix)

        return {'FINISHED'}

    def invoke(self, context, event):
        self.align_matrix = align_matrix(context)
        self.execute(context)
        return {'FINISHED'}


def xyz_function_surface_faces(self, x_eq, y_eq, z_eq,
    range_u_min, range_u_max, range_u_step, wrap_u,
    range_v_min, range_v_max, range_v_step, wrap_v):

    verts = []
    faces = []

    # Distance of each step in Blender Units
    uStep = (range_u_max - range_u_min) / range_u_step
    vStep = (range_v_max - range_v_min) / range_v_step

    # Number of steps in the vertex creation loops
    uRange = range_u_step + 1
    vRange = range_v_step + 1

    try:
        expr_args_x = (
            compile(x_eq, __file__.replace(".py", "_x.py"), 'eval'),
            {"__builtins__": None},
            safe_dict)
        expr_args_y = (
            compile(y_eq, __file__.replace(".py", "_y.py"), 'eval'),
            {"__builtins__": None},
            safe_dict)
        expr_args_z = (
            compile(z_eq, __file__.replace(".py", "_z.py"), 'eval'),
            {"__builtins__": None},
            safe_dict)
    except:
        import traceback
        self.report({'ERROR'}, "Error parsing expression: "
            + traceback.format_exc(limit=1))
        return [], []

    for vN in range(vRange):
        v = range_v_min + (vN * vStep)

        for uN in range(uRange):
            u = range_u_min + (uN * uStep)

            safe_dict['u'] = u
            safe_dict['v'] = v

            # Try to evaluate the equation.
            try:
                verts.append((
                    float(eval(*expr_args_x)),
                    float(eval(*expr_args_y)),
                    float(eval(*expr_args_z))))

            except:
                import traceback
                self.report({'ERROR'}, "Error evaluating expression: "
                    + traceback.format_exc(limit=1))
                return [], []

    for vN in range(1, range_v_step + 1):
        vThis = vN

        if (vThis >= vRange):
            if wrap_v:
                vThis = 0
            else:
                continue

        for uN in range(1, range_u_step + 1):
            uThis = uN

            if (uThis >= uRange):
                if wrap_u:
                    uThis = 0
                else:
                    continue

            faces.append([(vThis * uRange) + uThis,
                (vThis * uRange) + uN - 1,
                ((vN - 1) * uRange) + uN - 1,
                ((vN - 1) * uRange) + uThis])

    return verts, faces


# Original Script "Parametric.py" by Ed Mackey.
# -> http://www.blinken.com/blender-plugins.php
# Partly converted for Blender 2.5 by tuga3d.
#
# Sphere:
# x = sin(2*pi*u)*sin(pi*v)
# y = cos(2*pi*u)*sin(pi*v)
# z = cos(pi*v)
# u_min = v_min = 0
# u_max = v_max = 1
#
# "Snail shell"
# x = 1.2**v*(sin(u)**2 *sin(v))
# y = 1.2**v*(sin(u)*cos(u))
# z = 1.2**v*(sin(u)**2 *cos(v))
# u_min = 0
# u_max = pi
# v_min = -pi/4,
# v max = 5*pi/2
class AddXYZFunctionSurface(bpy.types.Operator):
    '''Add a surface defined defined by 3 functions:''' \
    + ''' x=f(u,v), y=f(u,v) and z=f(u,v)'''
    bl_idname = "mesh.primitive_xyz_function_surface"
    bl_label = "Add X,Y,Z Function Surface"
    bl_options = {'REGISTER', 'UNDO'}

    # edit - Whether to add or update.
    edit = BoolProperty(name="",
        description="",
        default=False,
        options={'HIDDEN'})

    x_eq = StringProperty(name="X Equation",
        description="Equation for x=f(u,v)",
        default="1.2**v*(sin(u)**2 *sin(v))")

    y_eq = StringProperty(name="Y Equation",
        description="Equation for y=f(u,v)",
        default="1.2**v*(sin(u)*cos(u))")

    z_eq = StringProperty(name="Z Equation",
        description="Equation for z=f(u,v)",
        default="1.2**v*(sin(u)**2 *cos(v))")

    range_u_min = FloatProperty(name="U min",
        description="Minimum U value. Lower boundary of U range.",
        min=-100.00,
        max=0.00,
        default=0.00)

    range_u_max = FloatProperty(name="U max",
        description="Maximum U value. Upper boundary of U range.",
        min=0.00,
        max=100.00,
        default=pi)

    range_u_step = IntProperty(name="U step",
        description="U Subdivisions",
        min=1,
        max=1024,
        default=32)

    wrap_u = BoolProperty(name="U wrap",
        description="U Wrap around",
        default=True)

    range_v_min = FloatProperty(name="V min",
        description="Minimum V value. Lower boundary of V range.",
        min=-100.00,
        max=0.00,
        default=-pi / 4)

    range_v_max = FloatProperty(name="V max",
        description="Maximum V value. Upper boundary of V range.",
        min=0.00,
        max=100.00,
        default=5 * pi / 2)

    range_v_step = IntProperty(name="V step",
        description="V Subdivisions",
        min=1,
        max=1024,
        default=32)

    wrap_v = BoolProperty(name="V wrap",
        description="V Wrap around",
        default=False)

    align_matrix = Matrix()

    def execute(self, context):
        verts, faces = xyz_function_surface_faces(
                            self,
                            self.x_eq,
                            self.y_eq,
                            self.z_eq,
                            self.range_u_min,
                            self.range_u_max,
                            self.range_u_step,
                            self.wrap_u,
                            self.range_v_min,
                            self.range_v_max,
                            self.range_v_step,
                            self.wrap_v)

        if not verts:
            return {'CANCELLED'}

        obj = create_mesh_object(context, verts, [], faces,
            "XYZ Function", self.edit, self.align_matrix)

        return {'FINISHED'}

    def invoke(self, context, event):
        self.align_matrix = align_matrix(context)
        self.execute(context)
        return {'FINISHED'}


################################
import space_info


# Define "3D Function Surface" menu
def menu_func_z(self, context):
    self.layout.operator(AddZFunctionSurface.bl_idname,
        text="Z Function Surface",
        icon="PLUGIN")


def menu_func_xyz(self, context):
    self.layout.operator(AddXYZFunctionSurface.bl_idname,
        text="X,Y,Z Function Surface",
        icon="PLUGIN")


def register():
    # Add menus to the "Add Mesh" menu
    space_info.INFO_MT_mesh_add.append(menu_func_z)
    space_info.INFO_MT_mesh_add.append(menu_func_xyz)


def unregister():
    # Remove menus from the "Add Mesh" menu.
    space_info.INFO_MT_mesh_add.remove(menu_func_z)
    space_info.INFO_MT_mesh_add.remove(menu_func_xyz)

if __name__ == "__main__":
    register()