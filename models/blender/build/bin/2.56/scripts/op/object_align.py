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

# <pep8 compliant>

import bpy
from mathutils import Vector


def align_objects(align_x, align_y, align_z, align_mode, relative_to):

    cursor = bpy.context.scene.cursor_location

    Left_Up_Front_SEL = [0.0, 0.0, 0.0]
    Right_Down_Back_SEL = [0.0, 0.0, 0.0]

    flag_first = True

    objs = []

    for obj in bpy.context.selected_objects:
        matrix_world = obj.matrix_world
        bb_world = [Vector(v[:]) * matrix_world for v in obj.bound_box]
        objs.append((obj, bb_world))

    if not objs:
        return False

    for obj, bb_world in objs:
        Left_Up_Front = bb_world[1]
        Right_Down_Back = bb_world[7]

        # Active Center

        if obj == bpy.context.active_object:

            center_active_x = (Left_Up_Front[0] + Right_Down_Back[0]) / 2.0
            center_active_y = (Left_Up_Front[1] + Right_Down_Back[1]) / 2.0
            center_active_z = (Left_Up_Front[2] + Right_Down_Back[2]) / 2.0

            size_active_x = (Right_Down_Back[0] - Left_Up_Front[0]) / 2.0
            size_active_y = (Right_Down_Back[1] - Left_Up_Front[1]) / 2.0
            size_active_z = (Left_Up_Front[2] - Right_Down_Back[2]) / 2.0

        # Selection Center

        if flag_first:
            flag_first = False

            Left_Up_Front_SEL[0] = Left_Up_Front[0]
            Left_Up_Front_SEL[1] = Left_Up_Front[1]
            Left_Up_Front_SEL[2] = Left_Up_Front[2]

            Right_Down_Back_SEL[0] = Right_Down_Back[0]
            Right_Down_Back_SEL[1] = Right_Down_Back[1]
            Right_Down_Back_SEL[2] = Right_Down_Back[2]

        else:
            # X axis
            if Left_Up_Front[0] < Left_Up_Front_SEL[0]:
                Left_Up_Front_SEL[0] = Left_Up_Front[0]
            # Y axis
            if Left_Up_Front[1] < Left_Up_Front_SEL[1]:
                Left_Up_Front_SEL[1] = Left_Up_Front[1]
            # Z axis
            if Left_Up_Front[2] > Left_Up_Front_SEL[2]:
                Left_Up_Front_SEL[2] = Left_Up_Front[2]

            # X axis
            if Right_Down_Back[0] > Right_Down_Back_SEL[0]:
                Right_Down_Back_SEL[0] = Right_Down_Back[0]
            # Y axis
            if Right_Down_Back[1] > Right_Down_Back_SEL[1]:
                Right_Down_Back_SEL[1] = Right_Down_Back[1]
            # Z axis
            if Right_Down_Back[2] < Right_Down_Back_SEL[2]:
                Right_Down_Back_SEL[2] = Right_Down_Back[2]

    center_sel_x = (Left_Up_Front_SEL[0] + Right_Down_Back_SEL[0]) / 2.0
    center_sel_y = (Left_Up_Front_SEL[1] + Right_Down_Back_SEL[1]) / 2.0
    center_sel_z = (Left_Up_Front_SEL[2] + Right_Down_Back_SEL[2]) / 2.0

    # Main Loop

    for obj, bb_world in objs:

        loc_world = obj.location
        bb_world = [Vector(v[:]) * obj.matrix_world for v in obj.bound_box]

        Left_Up_Front = bb_world[1]
        Right_Down_Back = bb_world[7]

        center_x = (Left_Up_Front[0] + Right_Down_Back[0]) / 2.0
        center_y = (Left_Up_Front[1] + Right_Down_Back[1]) / 2.0
        center_z = (Left_Up_Front[2] + Right_Down_Back[2]) / 2.0

        positive_x = Right_Down_Back[0]
        positive_y = Right_Down_Back[1]
        positive_z = Left_Up_Front[2]

        negative_x = Left_Up_Front[0]
        negative_y = Left_Up_Front[1]
        negative_z = Right_Down_Back[2]

        obj_loc = obj.location

        if align_x:

            # Align Mode

            if relative_to == 'OPT_4':  # Active relative
                if align_mode == 'OPT_1':
                    obj_x = obj_loc[0] - negative_x - size_active_x

                elif align_mode == 'OPT_3':
                    obj_x = obj_loc[0] - positive_x + size_active_x

            else:  # Everything else relative
                if align_mode == 'OPT_1':
                    obj_x = obj_loc[0] - negative_x

                elif align_mode == 'OPT_3':
                    obj_x = obj_loc[0] - positive_x

            if align_mode == 'OPT_2':  # All relative
                obj_x = obj_loc[0] - center_x

            # Relative To

            if relative_to == 'OPT_1':
                loc_x = obj_x

            elif relative_to == 'OPT_2':
                loc_x = obj_x + cursor[0]

            elif relative_to == 'OPT_3':
                loc_x = obj_x + center_sel_x

            elif relative_to == 'OPT_4':
                loc_x = obj_x + center_active_x

            obj.location[0] = loc_x

        if align_y:
            # Align Mode

            if relative_to == 'OPT_4':  # Active relative
                if align_mode == 'OPT_1':
                    obj_y = obj_loc[1] - negative_y - size_active_y

                elif align_mode == 'OPT_3':
                    obj_y = obj_loc[1] - positive_y + size_active_y

            else:  # Everything else relative
                if align_mode == 'OPT_1':
                    obj_y = obj_loc[1] - negative_y

                elif align_mode == 'OPT_3':
                    obj_y = obj_loc[1] - positive_y

            if align_mode == 'OPT_2':  # All relative
                obj_y = obj_loc[1] - center_y

            # Relative To

            if relative_to == 'OPT_1':
                loc_y = obj_y

            elif relative_to == 'OPT_2':
                loc_y = obj_y + cursor[1]

            elif relative_to == 'OPT_3':
                loc_y = obj_y + center_sel_y

            elif relative_to == 'OPT_4':
                loc_y = obj_y + center_active_y

            obj.location[1] = loc_y

        if align_z:
            # Align Mode
            if relative_to == 'OPT_4':  # Active relative
                if align_mode == 'OPT_1':
                    obj_z = obj_loc[2] - negative_z - size_active_z

                elif align_mode == 'OPT_3':
                    obj_z = obj_loc[2] - positive_z + size_active_z

            else:  # Everything else relative
                if align_mode == 'OPT_1':
                    obj_z = obj_loc[2] - negative_z

                elif align_mode == 'OPT_3':
                    obj_z = obj_loc[2] - positive_z

            if align_mode == 'OPT_2':  # All relative
                obj_z = obj_loc[2] - center_z

            # Relative To

            if relative_to == 'OPT_1':
                loc_z = obj_z

            elif relative_to == 'OPT_2':
                loc_z = obj_z + cursor[2]

            elif relative_to == 'OPT_3':
                loc_z = obj_z + center_sel_z

            elif relative_to == 'OPT_4':
                loc_z = obj_z + center_active_z

            obj.location[2] = loc_z

    return True


from bpy.props import *


class AlignObjects(bpy.types.Operator):
    '''Align Objects'''
    bl_idname = "object.align"
    bl_label = "Align Objects"
    bl_options = {'REGISTER', 'UNDO'}

    align_mode = bpy.props.EnumProperty(items=(
            ('OPT_1', "Negative Sides", ""),
            ('OPT_2', "Centers", ""),
            ('OPT_3', "Positive Sides", "")),
        name="Align Mode:",
        description="",
        default='OPT_2')

    relative_to = bpy.props.EnumProperty(items=(
            ('OPT_1', "Scene Origin", ""),
            ('OPT_2', "3D Cursor", ""),
            ('OPT_3', "Selection", ""),
            ('OPT_4', "Active", "")),
        name="Relative To:",
        description="",
        default='OPT_4')

    align_axis = EnumProperty(items=(
            ('X', "X", ""),
            ('Y', "Y", ""),
            ('Z', "Z", ""),
            ),
                name="Align",
                description="Align to axis",
                options={'ENUM_FLAG'})

    @classmethod
    def poll(cls, context):
        return context.mode == 'OBJECT'

    def execute(self, context):
        align_axis = self.align_axis
        ret = align_objects('X' in align_axis, 'Y' in align_axis, 'Z' in align_axis, self.align_mode, self.relative_to)

        if not ret:
            self.report({'WARNING'}, "No objects with bound-box selected")
            return {'CANCELLED'}
        else:
            return {'FINISHED'}


def menu_func(self, context):
    if context.mode == 'OBJECT':
        self.layout.operator(AlignObjects.bl_idname,
        text="Align Objects")


def register():
    bpy.utils.register_module(__name__)
    bpy.types.VIEW3D_MT_transform.append(menu_func)


def unregister():
    bpy.utils.unregister_module(__name__)
    bpy.types.VIEW3D_MT_transform.remove(menu_func)


if __name__ == "__main__":
    register()
