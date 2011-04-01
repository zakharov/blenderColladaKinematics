#====================== BEGIN GPL LICENSE BLOCK ======================
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
#======================= END GPL LICENSE BLOCK ========================

import bpy
import time
import traceback
import sys
from rna_prop_ui import rna_idprop_ui_prop_get
from rigify.utils import MetarigError, new_bone, get_rig_type
from rigify.utils import ORG_PREFIX, MCH_PREFIX, DEF_PREFIX, WGT_PREFIX, ROOT_NAME, make_original_name
from rigify.utils import RIG_DIR
from rigify.utils import create_root_widget
from rigify.utils import random_string
from rigify.rig_ui_template import UI_SLIDERS, layers_ui
from rigify import rigs

RIG_MODULE = "rigs"
ORG_LAYER = [n == 31 for n in range(0, 32)]  # Armature layer that original bones should be moved to.
MCH_LAYER = [n == 30 for n in range(0, 32)]  # Armature layer that mechanism bones should be moved to.
DEF_LAYER = [n == 29 for n in range(0, 32)]  # Armature layer that deformation bones should be moved to.
ROOT_LAYER = [n == 28 for n in range(0, 32)]  # Armature layer that root bone should be moved to.


class Timer:
    def __init__(self):
        self.timez = time.time()

    def tick(self, string):
        t = time.time()
        print(string + "%.3f" % (t - self.timez))
        self.timez = t


# TODO: generalize to take a group as input instead of an armature.
def generate_rig(context, metarig):
    """ Generates a rig from a metarig.

    """
    t = Timer()
    rig_id = random_string(12)  # Random so that different rigs don't collide id's

    # Initial configuration
    use_global_undo = context.user_preferences.edit.use_global_undo
    context.user_preferences.edit.use_global_undo = False
    mode_orig = context.mode
    rest_backup = metarig.data.pose_position
    metarig.data.pose_position = 'REST'

    bpy.ops.object.mode_set(mode='OBJECT')

    scene = context.scene

    #------------------------------------------
    # Create/find the rig object and set it up

    # Check if the generated rig already exists, so we can
    # regenerate in the same object.  If not, create a new
    # object to generate the rig in.
    print("Fetch rig.")
    try:
        name = metarig["rig_object_name"]
    except KeyError:
        name = "rig"

    try:
        obj = scene.objects[name]
    except KeyError:
        obj = bpy.data.objects.new(name, bpy.data.armatures.new(name))
        obj.draw_type = 'WIRE'
        scene.objects.link(obj)

    obj.data.pose_position = 'POSE'

    # Get rid of anim data in case the rig already existed
    print("Clear rig animation data.")
    obj.animation_data_clear()

    # Select generated rig object
    metarig.select = False
    obj.select = True
    scene.objects.active = obj

    # Remove all bones from the generated rig armature.
    bpy.ops.object.mode_set(mode='EDIT')
    for bone in obj.data.edit_bones:
        obj.data.edit_bones.remove(bone)
    bpy.ops.object.mode_set(mode='OBJECT')

    # Create temporary duplicates for merging
    temp_rig_1 = metarig.copy()
    temp_rig_1.data = metarig.data.copy()
    scene.objects.link(temp_rig_1)

    temp_rig_2 = metarig.copy()
    temp_rig_2.data = obj.data
    scene.objects.link(temp_rig_2)

    # Select the temp rigs for merging
    for objt in scene.objects:
        objt.select = False  # deselect all objects
    temp_rig_1.select = True
    temp_rig_2.select = True
    scene.objects.active = temp_rig_2

    # Merge the temporary rigs
    bpy.ops.object.join()

    # Delete the second temp rig
    bpy.ops.object.delete()

    # Select the generated rig
    for objt in scene.objects:
        objt.select = False  # deselect all objects
    obj.select = True
    scene.objects.active = obj

    # Copy over the pose_bone properties
    for bone in metarig.pose.bones:
        bone_gen = obj.pose.bones[bone.name]

        # Rotation mode and transform locks
        bone_gen.rotation_mode = bone.rotation_mode
        bone_gen.lock_rotation = tuple(bone.lock_rotation)
        bone_gen.lock_rotation_w = bone.lock_rotation_w
        bone_gen.lock_rotations_4d = bone.lock_rotations_4d
        bone_gen.lock_location = tuple(bone.lock_location)
        bone_gen.lock_scale = tuple(bone.lock_scale)

        # Custom properties
        for prop in bone.keys():
            bone_gen[prop] = bone[prop]

    # Copy over bone properties
    for bone in metarig.data.bones:
        bone_gen = obj.data.bones[bone.name]

        # B-bone stuff
        bone_gen.bbone_segments = bone.bbone_segments
        bone_gen.bbone_in = bone.bbone_in
        bone_gen.bbone_out = bone.bbone_out

    t.tick("Duplicate rig: ")
    #----------------------------------
    # Make a list of the original bones so we can keep track of them.
    original_bones = [bone.name for bone in obj.data.bones]

    # Add the ORG_PREFIX to the original bones.
    bpy.ops.object.mode_set(mode='OBJECT')
    for i in range(0, len(original_bones)):
        obj.data.bones[original_bones[i]].name = make_original_name(original_bones[i])
        original_bones[i] = make_original_name(original_bones[i])

    # Create a sorted list of the original bones, sorted in the order we're
    # going to traverse them for rigging.
    # (root-most -> leaf-most, alphabetical)
    bones_sorted = []
    for name in original_bones:
        bones_sorted += [name]
    bones_sorted.sort()  # first sort by names
    bones_sorted.sort(key=lambda bone: len(obj.pose.bones[bone].parent_recursive))  # then parents before children

    t.tick("Make list of org bones: ")
    #----------------------------------
    # Create the root bone.
    bpy.ops.object.mode_set(mode='EDIT')
    root_bone = new_bone(obj, ROOT_NAME)
    obj.data.edit_bones[root_bone].head = (0, 0, 0)
    obj.data.edit_bones[root_bone].tail = (0, 1, 0)
    obj.data.edit_bones[root_bone].roll = 0
    bpy.ops.object.mode_set(mode='OBJECT')
    obj.data.bones[root_bone].layers = ROOT_LAYER
    # Put the rig_name in the armature custom properties
    rna_idprop_ui_prop_get(obj.data, "rig_id", create=True)
    obj.data["rig_id"] = rig_id

    t.tick("Create root bone: ")
    #----------------------------------
    try:
        # Collect/initialize all the rigs.
        rigs = []
        deformation_rigs = []
        for bone in bones_sorted:
            bpy.ops.object.mode_set(mode='EDIT')
            rigs += get_bone_rigs(obj, bone)
        t.tick("Initialize rigs: ")

        # Generate all the rigs.
        ui_scripts = []
        for rig in rigs:
            # Go into editmode in the rig armature
            bpy.ops.object.mode_set(mode='OBJECT')
            context.scene.objects.active = obj
            obj.select = True
            bpy.ops.object.mode_set(mode='EDIT')
            scripts = rig.generate()
            if scripts != None:
                ui_scripts += [scripts[0]]
        t.tick("Generate rigs: ")
    except Exception as e:
        # Cleanup if something goes wrong
        print("Rigify: failed to generate rig.")
        context.user_preferences.edit.use_global_undo = use_global_undo
        metarig.data.pose_position = rest_backup
        obj.data.pose_position = 'POSE'
        bpy.ops.object.mode_set(mode='OBJECT')

        # Continue the exception
        raise e

    #----------------------------------
    bpy.ops.object.mode_set(mode='OBJECT')

    # Get a list of all the bones in the armature
    bones = [bone.name for bone in obj.data.bones]

    # Parent any free-floating bones to the root.
    bpy.ops.object.mode_set(mode='EDIT')
    for bone in bones:
        if obj.data.edit_bones[bone].parent == None:
            obj.data.edit_bones[bone].use_connect = False
            obj.data.edit_bones[bone].parent = obj.data.edit_bones[root_bone]
    bpy.ops.object.mode_set(mode='OBJECT')

    # Every bone that has a name starting with "DEF-" make deforming.  All the
    # others make non-deforming.
    for bone in bones:
        if obj.data.bones[bone].name.startswith(DEF_PREFIX):
            obj.data.bones[bone].use_deform = True
        else:
            obj.data.bones[bone].use_deform = False

    # Move all the original bones to their layer.
    for bone in original_bones:
        obj.data.bones[bone].layers = ORG_LAYER

    # Move all the bones with names starting with "MCH-" to their layer.
    for bone in bones:
        if obj.data.bones[bone].name.startswith(MCH_PREFIX):
            obj.data.bones[bone].layers = MCH_LAYER

    # Move all the bones with names starting with "DEF-" to their layer.
    for bone in bones:
        if obj.data.bones[bone].name.startswith(DEF_PREFIX):
            obj.data.bones[bone].layers = DEF_LAYER

    # Create root bone widget
    create_root_widget(obj, "root")

    # Assign shapes to bones
    # Object's with name WGT-<bone_name> get used as that bone's shape.
    for bone in bones:
        wgt_name = (WGT_PREFIX + obj.data.bones[bone].name)[:21]  # Object names are limited to 21 characters... arg
        if wgt_name in context.scene.objects:
            # Weird temp thing because it won't let me index by object name
            for ob in context.scene.objects:
                if ob.name == wgt_name:
                    obj.pose.bones[bone].custom_shape = ob
                    break
            # This is what it should do:
            # obj.pose.bones[bone].custom_shape = context.scene.objects[wgt_name]
    # Reveal all the layers with control bones on them
    vis_layers = [False for n in range(0, 32)]
    for bone in bones:
        for i in range(0, 32):
            vis_layers[i] = vis_layers[i] or obj.data.bones[bone].layers[i]
    for i in range(0, 32):
        vis_layers[i] = vis_layers[i] and not (ORG_LAYER[i] or MCH_LAYER[i] or DEF_LAYER[i])
    obj.data.layers = vis_layers

    # Generate the UI script
    if "rig_ui.py" in bpy.data.texts:
        script = bpy.data.texts["rig_ui.py"]
        script.clear()
    else:
        script = bpy.data.texts.new("rig_ui.py")
    script.write(UI_SLIDERS % rig_id)
    for s in ui_scripts:
        script.write("\n        " + s.replace("\n", "\n        ") + "\n")
    script.write(layers_ui(vis_layers))
    script.use_module = True

    t.tick("The rest: ")
    #----------------------------------
    # Deconfigure
    bpy.ops.object.mode_set(mode='OBJECT')
    metarig.data.pose_position = rest_backup
    obj.data.pose_position = 'POSE'
    context.user_preferences.edit.use_global_undo = use_global_undo


def get_bone_rigs(obj, bone_name, halt_on_missing=False):
    """ Fetch all the rigs specified on a bone.
    """
    rigs = []
    rig_type = obj.pose.bones[bone_name].rigify_type
    rig_type = rig_type.replace(" ", "")

    if rig_type == "":
        pass
    else:
        # Gather parameters
        try:
            params = obj.pose.bones[bone_name].rigify_parameters[0]
        except (KeyError, IndexError):
            params = None

        # Get the rig
        try:
            rig = get_rig_type(rig_type).Rig(obj, bone_name, params)
        except ImportError:
            message = "Rig Type Missing: python module for type '%s' not found (bone: %s)" % (t, bone_name)
            if halt_on_missing:
                raise MetarigError(message)
            else:
                print(message)
                print('print_exc():')
                traceback.print_exc(file=sys.stdout)
        else:
            rigs += [rig]
    return rigs


def param_matches_type(param_name, rig_type):
    """ Returns True if the parameter name is consistent with the rig type.
    """
    if param_name.rsplit(".", 1)[0] == rig_type:
        return True
    else:
        return False


def param_name(param_name, rig_type):
    """ Get the actual parameter name, sans-rig-type.
    """
    return param_name[len(rig_type) + 1:]

