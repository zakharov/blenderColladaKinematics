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
    "name": "Export Pointcache (.pc2)",
    "author": "Florian Meyer (tstscr)",
    "version": (1, 0),
    "blender": (2, 5, 4),
    "api": 33047,
    "location": "File > Export",
    "description": "Export Mesh Pointcache to .pc2",
    "warning": "",
    "wiki_url": "http://wiki.blender.org/index.php/Extensions:2.5/Py/"\
        "Scripts/Import-Export/PC2_Pointcache_export",
    "tracker_url": "https://projects.blender.org/tracker/index.php?"\
        "func=detail&aid=24703",
    "category": "Import-Export"}

'''
Usage Notes:

in Maya Mel:
cacheFile -pc2 1 -pcf "<insert filepath of source>" -f "<insert target filename w/o extension>" -dir "<insert directory path for target>" -format "OneFile";

'''

import bpy
from bpy.props import *
import mathutils, math, struct
from os import remove
import time
from io_utils import ExportHelper

def getSampling(start, end, sampling):
    samples = [start - sampling
               + x * sampling
               for x in range(start, int((end-start)*1/sampling)+1)]
    return samples

def do_export(context, props, filepath):
    mat_x90 = mathutils.Matrix.Rotation(-math.pi/2, 4, 'X')
    ob = context.active_object
    sc = context.scene
    start = props.range_start
    end = props.range_end
    sampling = float(props.sampling)
    apply_modifiers = props.apply_modifiers
    me = ob.create_mesh(sc, apply_modifiers, 'PREVIEW')
    vertCount = len(me.vertices)
    sampletimes = getSampling(start, end, sampling)
    sampleCount = len(sampletimes)
    
    # Create the header
    headerFormat='<12ciiffi'
    headerStr = struct.pack(headerFormat, 'P','O','I','N','T','C','A','C','H','E','2','\0',
                            1, vertCount, start, sampling, sampleCount)

    file = open(filepath, "wb")
    file.write(headerStr)
    
    for frame in sampletimes:
        sc.frame_set(frame)
        me = ob.create_mesh(sc, apply_modifiers, 'PREVIEW')
        
        if len(me.vertices) != vertCount:
            file.close()
            try:
                remove(filepath)
            except:
                empty = open(filepath, 'w')
                empty.write('DUMMIFILE - export failed\n')
                empty.close()
            print('Export failed. Vertexcount of Object is not constant')
            return False
        
        if props.world_space:
            me.transform(ob.matrix_world)
        if props.rot_x90:
            me.transform(mat_x90)
        
        for v in me.vertices:
            thisVertex = struct.pack('<fff', float(v.co[0]),
                                             float(v.co[1]),
                                             float(v.co[2]))
            file.write(thisVertex)
    
    file.flush()
    file.close()
    return True


###### EXPORT OPERATOR #######
class Export_pc2(bpy.types.Operator, ExportHelper):
    '''Exports the active Object as a .pc2 Pointcache file.'''
    bl_idname = "export_shape.pc2"
    bl_label = "Export Pointcache (.pc2)"

    filename_ext = ".pc2"
    
    rot_x90 = BoolProperty(name="Convert to Y-up",
                            description="Rotate 90 degrees around X to convert to y-up",
                            default=True)
    world_space = BoolProperty(name="Export into Worldspace",
                            description="Transform the Vertexcoordinates into Worldspace",
                            default=False)
    apply_modifiers = BoolProperty(name="Apply Modifiers",
                            description="Applies the Modifiers",
                            default=True)
    range_start = IntProperty(name='Start Frame',
                            description='First frame to use for Export',
                            default=1)
    range_end = IntProperty(name='End Frame',
                            description='Last frame to use for Export',
                            default=250)    
    sampling = EnumProperty(name='Sampling',
                            description='Sampling --> frames per sample (0.1 yields 10 samples per frame)',
                            items=[
                            ('0.01', '0.01', ''),
                            ('0.05', '0.05', ''),
                            ('0.1', '0.1', ''),
                            ('0.2', '0.2', ''),
                            ('0.25', '0.25', ''),
                            ('0.5', '0.5', ''),
                            ('1', '1', ''),
                            ('2', '2', ''),
                            ('3', '3', ''),
                            ('4', '4', ''),
                            ('5', '5', ''),
                            ('10', '10', '')],
                            default='1')
    
    @classmethod
    def poll(cls, context):
        return context.active_object.type in ['MESH', 'CURVE', 'SURFACE', 'FONT']

    def execute(self, context):
        start_time = time.time()
        print('\n_____START_____')
        props = self.properties
        filepath = self.filepath
        filepath = bpy.path.ensure_ext(filepath, self.filename_ext)

        exported = do_export(context, props, filepath)
        
        if exported:
            print('finished export in %s seconds' %((time.time() - start_time)))
            print(filepath)
            
        return {'FINISHED'}

    def invoke(self, context, event):
        wm = context.window_manager

        if True:
            # File selector
            wm.fileselect_add(self) # will run self.execute()
            return {'RUNNING_MODAL'}
        elif True:
            # search the enum
            wm.invoke_search_popup(self)
            return {'RUNNING_MODAL'}
        elif False:
            # Redo popup
            return wm.invoke_props_popup(self, event) #
        elif False:
            return self.execute(context)


### REGISTER ###

def menu_func(self, context):
    self.layout.operator(Export_pc2.bl_idname, text="Pointcache (.pc2)")


def register():
    bpy.utils.register_module(__name__)

    bpy.types.INFO_MT_file_export.append(menu_func)
    #bpy.types.VIEW3D_PT_tools_objectmode.prepend(menu_func)

def unregister():
    bpy.utils.unregister_module(__name__)

    bpy.types.INFO_MT_file_export.remove(menu_func)
    #bpy.types.VIEW3D_PT_tools_objectmode.remove(menu_func)
    
if __name__ == "__main__":
    register()
