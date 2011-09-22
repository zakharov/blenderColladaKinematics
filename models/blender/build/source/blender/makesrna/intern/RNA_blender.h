
#ifndef __RNA_BLENDER_H__
#define __RNA_BLENDER_H__

/* Automatically generated function declarations for the Data API.
   Do not edit manually, changes will be overwritten.              */

#include "RNA_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define FOREACH_BEGIN(property, sptr, itemptr) \
	{ \
		CollectionPropertyIterator rna_macro_iter; \
		for(property##_begin(&rna_macro_iter, sptr); rna_macro_iter.valid; property##_next(&rna_macro_iter)) { \
			itemptr= rna_macro_iter.ptr;

#define FOREACH_END(property) \
		} \
		property##_end(&rna_macro_iter); \
	}

/**************** Action ****************/

extern StructRNA RNA_Action;
extern StructRNA RNA_ID;

void Action_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Action_fcurves_next(CollectionPropertyIterator *iter);
void Action_fcurves_end(CollectionPropertyIterator *iter);

void Action_frame_range_get(PointerRNA *ptr, float values[2]);

void Action_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Action_groups_next(CollectionPropertyIterator *iter);
void Action_groups_end(CollectionPropertyIterator *iter);

void Action_pose_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Action_pose_markers_next(CollectionPropertyIterator *iter);
void Action_pose_markers_end(CollectionPropertyIterator *iter);

/**************** Action Actuator ****************/

extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_Actuator;

PointerRNA ActionActuator_action_get(PointerRNA *ptr);

enum {
	ActionActuator_play_mode_PLAY = 0,
	ActionActuator_play_mode_FLIPPER = 2,
	ActionActuator_play_mode_LOOPSTOP = 3,
	ActionActuator_play_mode_LOOPEND = 4,
	ActionActuator_play_mode_PROPERTY = 6,
};

int ActionActuator_play_mode_get(PointerRNA *ptr);

int ActionActuator_frame_blend_in_get(PointerRNA *ptr);

int ActionActuator_use_continue_last_frame_get(PointerRNA *ptr);

float ActionActuator_frame_end_get(PointerRNA *ptr);

#define ActionActuator_frame_property_MAX 32

void ActionActuator_frame_property_get(PointerRNA *ptr, char *value);
int ActionActuator_frame_property_length(PointerRNA *ptr);

int ActionActuator_priority_get(PointerRNA *ptr);

#define ActionActuator_property_MAX 32

void ActionActuator_property_get(PointerRNA *ptr, char *value);
int ActionActuator_property_length(PointerRNA *ptr);

float ActionActuator_frame_start_get(PointerRNA *ptr);

/**************** Action Constraint ****************/

extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_Constraint;

PointerRNA ActionConstraint_action_get(PointerRNA *ptr);

int ActionConstraint_frame_end_get(PointerRNA *ptr);

float ActionConstraint_max_get(PointerRNA *ptr);

float ActionConstraint_min_get(PointerRNA *ptr);

int ActionConstraint_frame_start_get(PointerRNA *ptr);

#define ActionConstraint_subtarget_MAX 32

void ActionConstraint_subtarget_get(PointerRNA *ptr, char *value);
int ActionConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA ActionConstraint_target_get(PointerRNA *ptr);

enum {
	ActionConstraint_transform_channel_LOCATION_X = 20,
	ActionConstraint_transform_channel_LOCATION_Y = 21,
	ActionConstraint_transform_channel_LOCATION_Z = 22,
	ActionConstraint_transform_channel_ROTATION_X = 0,
	ActionConstraint_transform_channel_ROTATION_Y = 1,
	ActionConstraint_transform_channel_ROTATION_Z = 2,
	ActionConstraint_transform_channel_SCALE_X = 10,
	ActionConstraint_transform_channel_SCALE_Y = 11,
	ActionConstraint_transform_channel_SCALE_Z = 12,
};

int ActionConstraint_transform_channel_get(PointerRNA *ptr);

/**************** Action FCurves ****************/

extern StructRNA RNA_ActionFCurves;

PointerRNA ActionFCurves_rna_type_get(PointerRNA *ptr);

/**************** Action Group ****************/

extern StructRNA RNA_ActionGroup;

PointerRNA ActionGroup_rna_type_get(PointerRNA *ptr);

#define ActionGroup_name_MAX 64

void ActionGroup_name_get(PointerRNA *ptr, char *value);
int ActionGroup_name_length(PointerRNA *ptr);

void ActionGroup_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ActionGroup_channels_next(CollectionPropertyIterator *iter);
void ActionGroup_channels_end(CollectionPropertyIterator *iter);

int ActionGroup_custom_color_get(PointerRNA *ptr);

int ActionGroup_show_expanded_get(PointerRNA *ptr);

int ActionGroup_lock_get(PointerRNA *ptr);

int ActionGroup_select_get(PointerRNA *ptr);

/**************** Action Groups ****************/

extern StructRNA RNA_ActionGroups;

PointerRNA ActionGroups_rna_type_get(PointerRNA *ptr);

/**************** Action Pose Markers ****************/

extern StructRNA RNA_ActionPoseMarkers;

PointerRNA ActionPoseMarkers_rna_type_get(PointerRNA *ptr);

PointerRNA ActionPoseMarkers_active_get(PointerRNA *ptr);

int ActionPoseMarkers_active_index_get(PointerRNA *ptr);

/**************** Actuator ****************/

extern StructRNA RNA_Actuator;

PointerRNA Actuator_rna_type_get(PointerRNA *ptr);

#define Actuator_name_MAX 32

void Actuator_name_get(PointerRNA *ptr, char *value);
int Actuator_name_length(PointerRNA *ptr);

int Actuator_show_expanded_get(PointerRNA *ptr);

int Actuator_pin_get(PointerRNA *ptr);

enum {
	Actuator_type_ACTION = 15,
	Actuator_type_ARMATURE = 23,
	Actuator_type_CAMERA = 3,
	Actuator_type_CONSTRAINT = 9,
	Actuator_type_EDIT_OBJECT = 10,
	Actuator_type_FCURVE = 1,
	Actuator_type_FILTER_2D = 19,
	Actuator_type_GAME = 17,
	Actuator_type_MESSAGE = 14,
	Actuator_type_OBJECT = 0,
	Actuator_type_PARENT = 20,
	Actuator_type_PROPERTY = 6,
	Actuator_type_RANDOM = 13,
	Actuator_type_SCENE = 11,
	Actuator_type_SHAPE_ACTION = 21,
	Actuator_type_SOUND = 5,
	Actuator_type_STATE = 22,
	Actuator_type_VISIBILITY = 18,
};

int Actuator_type_get(PointerRNA *ptr);

/**************** Actuator Sensor ****************/

extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_Sensor;

#define ActuatorSensor_actuator_MAX 32

void ActuatorSensor_actuator_get(PointerRNA *ptr, char *value);
int ActuatorSensor_actuator_length(PointerRNA *ptr);

/**************** Addon ****************/

extern StructRNA RNA_Addon;

PointerRNA Addon_rna_type_get(PointerRNA *ptr);

#define Addon_module_MAX 64

void Addon_module_get(PointerRNA *ptr, char *value);
int Addon_module_length(PointerRNA *ptr);

/**************** User Add-Ons ****************/

extern StructRNA RNA_Addons;

PointerRNA Addons_rna_type_get(PointerRNA *ptr);

/**************** Always Sensor ****************/

extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_Sensor;

/**************** And Controller ****************/

extern StructRNA RNA_AndController;
extern StructRNA RNA_Controller;

/**************** Animation Data ****************/

extern StructRNA RNA_AnimData;

PointerRNA AnimData_rna_type_get(PointerRNA *ptr);

PointerRNA AnimData_action_get(PointerRNA *ptr);

enum {
	AnimData_action_blend_type_REPLACE = 0,
	AnimData_action_blend_type_ADD = 1,
	AnimData_action_blend_type_SUBTRACT = 2,
	AnimData_action_blend_type_MULITPLY = 3,
};

int AnimData_action_blend_type_get(PointerRNA *ptr);

enum {
	AnimData_action_extrapolation_NOTHING = 2,
	AnimData_action_extrapolation_HOLD = 0,
	AnimData_action_extrapolation_HOLD_FORWARD = 1,
};

int AnimData_action_extrapolation_get(PointerRNA *ptr);

float AnimData_action_influence_get(PointerRNA *ptr);

void AnimData_drivers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void AnimData_drivers_next(CollectionPropertyIterator *iter);
void AnimData_drivers_end(CollectionPropertyIterator *iter);

int AnimData_use_nla_get(PointerRNA *ptr);

void AnimData_nla_tracks_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void AnimData_nla_tracks_next(CollectionPropertyIterator *iter);
void AnimData_nla_tracks_end(CollectionPropertyIterator *iter);

/**************** Animation Visualisation ****************/

extern StructRNA RNA_AnimViz;

PointerRNA AnimViz_rna_type_get(PointerRNA *ptr);

PointerRNA AnimViz_motion_path_get(PointerRNA *ptr);

PointerRNA AnimViz_onion_skin_frames_get(PointerRNA *ptr);

/**************** Motion Path Settings ****************/

extern StructRNA RNA_AnimVizMotionPaths;

PointerRNA AnimVizMotionPaths_rna_type_get(PointerRNA *ptr);

int AnimVizMotionPaths_frame_after_get(PointerRNA *ptr);

int AnimVizMotionPaths_show_keyframe_action_all_get(PointerRNA *ptr);

enum {
	AnimVizMotionPaths_bake_location_HEADS = 2,
	AnimVizMotionPaths_bake_location_TAILS = 0,
};

int AnimVizMotionPaths_bake_location_get(PointerRNA *ptr);

int AnimVizMotionPaths_frame_before_get(PointerRNA *ptr);

int AnimVizMotionPaths_frame_end_get(PointerRNA *ptr);

int AnimVizMotionPaths_frame_step_get(PointerRNA *ptr);

int AnimVizMotionPaths_show_keyframe_highlight_get(PointerRNA *ptr);

enum {
	AnimVizMotionPaths_type_CURRENT_FRAME = 1,
	AnimVizMotionPaths_type_RANGE = 0,
};

int AnimVizMotionPaths_type_get(PointerRNA *ptr);

int AnimVizMotionPaths_show_frame_numbers_get(PointerRNA *ptr);

int AnimVizMotionPaths_show_keyframe_numbers_get(PointerRNA *ptr);

int AnimVizMotionPaths_frame_start_get(PointerRNA *ptr);

/**************** Onion Skinning Settings ****************/

extern StructRNA RNA_AnimVizOnionSkinning;

PointerRNA AnimVizOnionSkinning_rna_type_get(PointerRNA *ptr);

int AnimVizOnionSkinning_frame_after_get(PointerRNA *ptr);

int AnimVizOnionSkinning_frame_before_get(PointerRNA *ptr);

int AnimVizOnionSkinning_frame_end_get(PointerRNA *ptr);

int AnimVizOnionSkinning_frame_step_get(PointerRNA *ptr);

int AnimVizOnionSkinning_show_only_selected_get(PointerRNA *ptr);

int AnimVizOnionSkinning_frame_start_get(PointerRNA *ptr);

enum {
	AnimVizOnionSkinning_type_NONE = 0,
	AnimVizOnionSkinning_type_CURRENT_FRAME = 1,
	AnimVizOnionSkinning_type_RANGE = 2,
	AnimVizOnionSkinning_type_KEYS = 3,
};

int AnimVizOnionSkinning_type_get(PointerRNA *ptr);

/**************** Any Type ****************/

extern StructRNA RNA_AnyType;

PointerRNA AnyType_rna_type_get(PointerRNA *ptr);

/**************** Area ****************/

extern StructRNA RNA_Area;

PointerRNA Area_rna_type_get(PointerRNA *ptr);

PointerRNA Area_active_space_get(PointerRNA *ptr);

void Area_regions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Area_regions_next(CollectionPropertyIterator *iter);
void Area_regions_end(CollectionPropertyIterator *iter);

int Area_show_menus_get(PointerRNA *ptr);

void Area_spaces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Area_spaces_next(CollectionPropertyIterator *iter);
void Area_spaces_end(CollectionPropertyIterator *iter);

enum {
	Area_type_EMPTY = 0,
	Area_type_VIEW_3D = 1,
	Area_type_GRAPH_EDITOR = 2,
	Area_type_OUTLINER = 3,
	Area_type_PROPERTIES = 4,
	Area_type_FILE_BROWSER = 5,
	Area_type_IMAGE_EDITOR = 6,
	Area_type_INFO = 7,
	Area_type_SEQUENCE_EDITOR = 8,
	Area_type_TEXT_EDITOR = 9,
	Area_type_AUDIO_WINDOW = 11,
	Area_type_DOPESHEET_EDITOR = 12,
	Area_type_NLA_EDITOR = 13,
	Area_type_SCRIPTS_WINDOW = 14,
	Area_type_TIMELINE = 15,
	Area_type_NODE_EDITOR = 16,
	Area_type_LOGIC_EDITOR = 17,
	Area_type_CONSOLE = 18,
	Area_type_USER_PREFERENCES = 19,
};

int Area_type_get(PointerRNA *ptr);

/**************** Area Lamp ****************/

extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_ID;

int AreaLamp_use_dither_get(PointerRNA *ptr);

float AreaLamp_gamma_get(PointerRNA *ptr);

int AreaLamp_use_jitter_get(PointerRNA *ptr);

int AreaLamp_use_only_shadow_get(PointerRNA *ptr);

float AreaLamp_shadow_adaptive_threshold_get(PointerRNA *ptr);

void AreaLamp_shadow_color_get(PointerRNA *ptr, float values[3]);

int AreaLamp_use_shadow_layer_get(PointerRNA *ptr);

enum {
	AreaLamp_shadow_method_NOSHADOW = 0,
	AreaLamp_shadow_method_RAY_SHADOW = 8192,
};

int AreaLamp_shadow_method_get(PointerRNA *ptr);

int AreaLamp_shadow_ray_samples_x_get(PointerRNA *ptr);

int AreaLamp_shadow_ray_samples_y_get(PointerRNA *ptr);

enum {
	AreaLamp_shadow_ray_sample_method_ADAPTIVE_QMC = 1,
	AreaLamp_shadow_ray_sample_method_CONSTANT_QMC = 2,
	AreaLamp_shadow_ray_sample_method_CONSTANT_JITTERED = 0,
};

int AreaLamp_shadow_ray_sample_method_get(PointerRNA *ptr);

float AreaLamp_shadow_soft_size_get(PointerRNA *ptr);

enum {
	AreaLamp_shape_SQUARE = 0,
	AreaLamp_shape_RECTANGLE = 1,
};

int AreaLamp_shape_get(PointerRNA *ptr);

float AreaLamp_size_get(PointerRNA *ptr);

float AreaLamp_size_y_get(PointerRNA *ptr);

int AreaLamp_use_umbra_get(PointerRNA *ptr);

/**************** Armature ****************/

extern StructRNA RNA_Armature;
extern StructRNA RNA_ID;

PointerRNA Armature_animation_data_get(PointerRNA *ptr);

int Armature_use_auto_ik_get(PointerRNA *ptr);

void Armature_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Armature_bones_next(CollectionPropertyIterator *iter);
void Armature_bones_end(CollectionPropertyIterator *iter);

int Armature_use_deform_envelopes_get(PointerRNA *ptr);

int Armature_use_deform_vertex_groups_get(PointerRNA *ptr);

int Armature_use_deform_delay_get(PointerRNA *ptr);

int Armature_show_axes_get(PointerRNA *ptr);

int Armature_show_group_colors_get(PointerRNA *ptr);

int Armature_show_bone_custom_shapes_get(PointerRNA *ptr);

int Armature_show_only_ghost_selected_get(PointerRNA *ptr);

int Armature_show_names_get(PointerRNA *ptr);

enum {
	Armature_draw_type_OCTAHEDRAL = 0,
	Armature_draw_type_STICK = 1,
	Armature_draw_type_BBONE = 2,
	Armature_draw_type_ENVELOPE = 3,
};

int Armature_draw_type_get(PointerRNA *ptr);

void Armature_edit_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Armature_edit_bones_next(CollectionPropertyIterator *iter);
void Armature_edit_bones_end(CollectionPropertyIterator *iter);

enum {
	Armature_ghost_type_CURRENT_FRAME = 0,
	Armature_ghost_type_RANGE = 1,
	Armature_ghost_type_KEYS = 2,
};

int Armature_ghost_type_get(PointerRNA *ptr);

int Armature_ghost_frame_end_get(PointerRNA *ptr);

int Armature_ghost_size_get(PointerRNA *ptr);

int Armature_ghost_frame_start_get(PointerRNA *ptr);

int Armature_ghost_step_get(PointerRNA *ptr);

void Armature_layers_protected_get(PointerRNA *ptr, int values[32]);

enum {
	Armature_pose_position_POSE = 0,
	Armature_pose_position_REST = 1,
};

int Armature_pose_position_get(PointerRNA *ptr);

int Armature_use_deform_preserve_volume_get(PointerRNA *ptr);

void Armature_layers_get(PointerRNA *ptr, int values[32]);

int Armature_use_mirror_x_get(PointerRNA *ptr);

/**************** Armature Actuator ****************/

extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_Actuator;

#define ArmatureActuator_bone_MAX 32

void ArmatureActuator_bone_get(PointerRNA *ptr, char *value);
int ArmatureActuator_bone_length(PointerRNA *ptr);

#define ArmatureActuator_constraint_MAX 32

void ArmatureActuator_constraint_get(PointerRNA *ptr, char *value);
int ArmatureActuator_constraint_length(PointerRNA *ptr);

enum {
	ArmatureActuator_mode_RUN = 0,
	ArmatureActuator_mode_ENABLE = 1,
	ArmatureActuator_mode_DISABLE = 2,
	ArmatureActuator_mode_SETTARGET = 3,
	ArmatureActuator_mode_SETWEIGHT = 4,
};

int ArmatureActuator_mode_get(PointerRNA *ptr);

PointerRNA ArmatureActuator_secondary_target_get(PointerRNA *ptr);

PointerRNA ArmatureActuator_target_get(PointerRNA *ptr);

float ArmatureActuator_weight_get(PointerRNA *ptr);

/**************** Armature Bones ****************/

extern StructRNA RNA_ArmatureBones;

PointerRNA ArmatureBones_rna_type_get(PointerRNA *ptr);

PointerRNA ArmatureBones_active_get(PointerRNA *ptr);

/**************** Armature EditBones ****************/

extern StructRNA RNA_ArmatureEditBones;

PointerRNA ArmatureEditBones_rna_type_get(PointerRNA *ptr);

PointerRNA ArmatureEditBones_active_get(PointerRNA *ptr);

/**************** Armature Modifier ****************/

extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_Modifier;

int ArmatureModifier_invert_vertex_group_get(PointerRNA *ptr);

int ArmatureModifier_use_multi_modifier_get(PointerRNA *ptr);

PointerRNA ArmatureModifier_object_get(PointerRNA *ptr);

int ArmatureModifier_use_deform_preserve_volume_get(PointerRNA *ptr);

int ArmatureModifier_use_bone_envelopes_get(PointerRNA *ptr);

int ArmatureModifier_use_vertex_groups_get(PointerRNA *ptr);

#define ArmatureModifier_vertex_group_MAX 32

void ArmatureModifier_vertex_group_get(PointerRNA *ptr, char *value);
int ArmatureModifier_vertex_group_length(PointerRNA *ptr);

/**************** Armature Sensor ****************/

extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_Sensor;

#define ArmatureSensor_bone_MAX 32

void ArmatureSensor_bone_get(PointerRNA *ptr, char *value);
int ArmatureSensor_bone_length(PointerRNA *ptr);

float ArmatureSensor_value_get(PointerRNA *ptr);

#define ArmatureSensor_constraint_MAX 32

void ArmatureSensor_constraint_get(PointerRNA *ptr, char *value);
int ArmatureSensor_constraint_length(PointerRNA *ptr);

enum {
	ArmatureSensor_test_type_STATECHG = 0,
	ArmatureSensor_test_type_LINERRORBELOW = 1,
	ArmatureSensor_test_type_LINERRORABOVE = 2,
	ArmatureSensor_test_type_ROTERRORBELOW = 3,
	ArmatureSensor_test_type_ROTERRORABOVE = 4,
};

int ArmatureSensor_test_type_get(PointerRNA *ptr);

/**************** Array Modifier ****************/

extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_Modifier;

int ArrayModifier_use_constant_offset_get(PointerRNA *ptr);

void ArrayModifier_constant_offset_displace_get(PointerRNA *ptr, float values[3]);

int ArrayModifier_count_get(PointerRNA *ptr);

PointerRNA ArrayModifier_curve_get(PointerRNA *ptr);

PointerRNA ArrayModifier_end_cap_get(PointerRNA *ptr);

enum {
	ArrayModifier_fit_type_FIXED_COUNT = 0,
	ArrayModifier_fit_type_FIT_LENGTH = 1,
	ArrayModifier_fit_type_FIT_CURVE = 2,
};

int ArrayModifier_fit_type_get(PointerRNA *ptr);

float ArrayModifier_fit_length_get(PointerRNA *ptr);

float ArrayModifier_merge_threshold_get(PointerRNA *ptr);

int ArrayModifier_use_merge_vertices_get(PointerRNA *ptr);

int ArrayModifier_use_merge_vertices_cap_get(PointerRNA *ptr);

int ArrayModifier_use_object_offset_get(PointerRNA *ptr);

PointerRNA ArrayModifier_offset_object_get(PointerRNA *ptr);

int ArrayModifier_use_relative_offset_get(PointerRNA *ptr);

void ArrayModifier_relative_offset_displace_get(PointerRNA *ptr, float values[3]);

PointerRNA ArrayModifier_start_cap_get(PointerRNA *ptr);

/**************** Background Image ****************/

extern StructRNA RNA_BackgroundImage;

PointerRNA BackgroundImage_rna_type_get(PointerRNA *ptr);

PointerRNA BackgroundImage_image_get(PointerRNA *ptr);

enum {
	BackgroundImage_view_axis_LEFT = 8,
	BackgroundImage_view_axis_RIGHT = 16,
	BackgroundImage_view_axis_BACK = 4,
	BackgroundImage_view_axis_FRONT = 2,
	BackgroundImage_view_axis_BOTTOM = 64,
	BackgroundImage_view_axis_TOP = 32,
	BackgroundImage_view_axis_ALL = 0,
	BackgroundImage_view_axis_CAMERA = 256,
};

int BackgroundImage_view_axis_get(PointerRNA *ptr);

PointerRNA BackgroundImage_image_user_get(PointerRNA *ptr);

float BackgroundImage_opacity_get(PointerRNA *ptr);

int BackgroundImage_show_expanded_get(PointerRNA *ptr);

float BackgroundImage_size_get(PointerRNA *ptr);

float BackgroundImage_offset_x_get(PointerRNA *ptr);

float BackgroundImage_offset_y_get(PointerRNA *ptr);

/**************** Bevel Modifier ****************/

extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_Modifier;

float BevelModifier_angle_limit_get(PointerRNA *ptr);

enum {
	BevelModifier_edge_weight_method_AVERAGE = 0,
	BevelModifier_edge_weight_method_SHARPEST = 128,
	BevelModifier_edge_weight_method_LARGEST = 256,
};

int BevelModifier_edge_weight_method_get(PointerRNA *ptr);

enum {
	BevelModifier_limit_method_NONE = 0,
	BevelModifier_limit_method_ANGLE = 8,
	BevelModifier_limit_method_WEIGHT = 16,
};

int BevelModifier_limit_method_get(PointerRNA *ptr);

int BevelModifier_use_only_vertices_get(PointerRNA *ptr);

float BevelModifier_width_get(PointerRNA *ptr);

/**************** Bezier Curve Point ****************/

extern StructRNA RNA_BezierSplinePoint;

PointerRNA BezierSplinePoint_rna_type_get(PointerRNA *ptr);

float BezierSplinePoint_radius_get(PointerRNA *ptr);

void BezierSplinePoint_co_get(PointerRNA *ptr, float values[3]);

int BezierSplinePoint_select_control_point_get(PointerRNA *ptr);

void BezierSplinePoint_handle_left_get(PointerRNA *ptr, float values[3]);

enum {
	BezierSplinePoint_handle_left_type_FREE = 0,
	BezierSplinePoint_handle_left_type_AUTO = 1,
	BezierSplinePoint_handle_left_type_VECTOR = 2,
	BezierSplinePoint_handle_left_type_ALIGNED = 3,
};

int BezierSplinePoint_handle_left_type_get(PointerRNA *ptr);

int BezierSplinePoint_select_left_handle_get(PointerRNA *ptr);

void BezierSplinePoint_handle_right_get(PointerRNA *ptr, float values[3]);

enum {
	BezierSplinePoint_handle_right_type_FREE = 0,
	BezierSplinePoint_handle_right_type_AUTO = 1,
	BezierSplinePoint_handle_right_type_VECTOR = 2,
	BezierSplinePoint_handle_right_type_ALIGNED = 3,
};

int BezierSplinePoint_handle_right_type_get(PointerRNA *ptr);

int BezierSplinePoint_select_right_handle_get(PointerRNA *ptr);

int BezierSplinePoint_hide_get(PointerRNA *ptr);

float BezierSplinePoint_tilt_get(PointerRNA *ptr);

float BezierSplinePoint_weight_get(PointerRNA *ptr);

/**************** Blendfile Data ****************/

extern StructRNA RNA_BlendData;

PointerRNA BlendData_rna_type_get(PointerRNA *ptr);

void BlendData_actions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_actions_next(CollectionPropertyIterator *iter);
void BlendData_actions_end(CollectionPropertyIterator *iter);

void BlendData_armatures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_armatures_next(CollectionPropertyIterator *iter);
void BlendData_armatures_end(CollectionPropertyIterator *iter);

void BlendData_brushes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_brushes_next(CollectionPropertyIterator *iter);
void BlendData_brushes_end(CollectionPropertyIterator *iter);

void BlendData_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_cameras_next(CollectionPropertyIterator *iter);
void BlendData_cameras_end(CollectionPropertyIterator *iter);

void BlendData_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_curves_next(CollectionPropertyIterator *iter);
void BlendData_curves_end(CollectionPropertyIterator *iter);

int BlendData_is_dirty_get(PointerRNA *ptr);

#define BlendData_filepath_MAX 240

void BlendData_filepath_get(PointerRNA *ptr, char *value);
int BlendData_filepath_length(PointerRNA *ptr);

void BlendData_grease_pencil_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_grease_pencil_next(CollectionPropertyIterator *iter);
void BlendData_grease_pencil_end(CollectionPropertyIterator *iter);

void BlendData_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_groups_next(CollectionPropertyIterator *iter);
void BlendData_groups_end(CollectionPropertyIterator *iter);

void BlendData_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_images_next(CollectionPropertyIterator *iter);
void BlendData_images_end(CollectionPropertyIterator *iter);

void BlendData_shape_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_shape_keys_next(CollectionPropertyIterator *iter);
void BlendData_shape_keys_end(CollectionPropertyIterator *iter);

void BlendData_lamps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_lamps_next(CollectionPropertyIterator *iter);
void BlendData_lamps_end(CollectionPropertyIterator *iter);

void BlendData_lattices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_lattices_next(CollectionPropertyIterator *iter);
void BlendData_lattices_end(CollectionPropertyIterator *iter);

void BlendData_libraries_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_libraries_next(CollectionPropertyIterator *iter);
void BlendData_libraries_end(CollectionPropertyIterator *iter);

void BlendData_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_materials_next(CollectionPropertyIterator *iter);
void BlendData_materials_end(CollectionPropertyIterator *iter);

void BlendData_meshes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_meshes_next(CollectionPropertyIterator *iter);
void BlendData_meshes_end(CollectionPropertyIterator *iter);

void BlendData_metaballs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_metaballs_next(CollectionPropertyIterator *iter);
void BlendData_metaballs_end(CollectionPropertyIterator *iter);

void BlendData_node_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_node_groups_next(CollectionPropertyIterator *iter);
void BlendData_node_groups_end(CollectionPropertyIterator *iter);

void BlendData_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_objects_next(CollectionPropertyIterator *iter);
void BlendData_objects_end(CollectionPropertyIterator *iter);

void BlendData_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_particles_next(CollectionPropertyIterator *iter);
void BlendData_particles_end(CollectionPropertyIterator *iter);

void BlendData_scenes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_scenes_next(CollectionPropertyIterator *iter);
void BlendData_scenes_end(CollectionPropertyIterator *iter);

void BlendData_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_screens_next(CollectionPropertyIterator *iter);
void BlendData_screens_end(CollectionPropertyIterator *iter);

void BlendData_scripts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_scripts_next(CollectionPropertyIterator *iter);
void BlendData_scripts_end(CollectionPropertyIterator *iter);

void BlendData_sounds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_sounds_next(CollectionPropertyIterator *iter);
void BlendData_sounds_end(CollectionPropertyIterator *iter);

void BlendData_texts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_texts_next(CollectionPropertyIterator *iter);
void BlendData_texts_end(CollectionPropertyIterator *iter);

void BlendData_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_textures_next(CollectionPropertyIterator *iter);
void BlendData_textures_end(CollectionPropertyIterator *iter);

void BlendData_fonts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_fonts_next(CollectionPropertyIterator *iter);
void BlendData_fonts_end(CollectionPropertyIterator *iter);

void BlendData_window_managers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_window_managers_next(CollectionPropertyIterator *iter);
void BlendData_window_managers_end(CollectionPropertyIterator *iter);

void BlendData_worlds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlendData_worlds_next(CollectionPropertyIterator *iter);
void BlendData_worlds_end(CollectionPropertyIterator *iter);

/**************** Main Actions ****************/

extern StructRNA RNA_BlendDataActions;

PointerRNA BlendDataActions_rna_type_get(PointerRNA *ptr);

/**************** Main Armatures ****************/

extern StructRNA RNA_BlendDataArmatures;

PointerRNA BlendDataArmatures_rna_type_get(PointerRNA *ptr);

/**************** Main Brushes ****************/

extern StructRNA RNA_BlendDataBrushes;

PointerRNA BlendDataBrushes_rna_type_get(PointerRNA *ptr);

/**************** Main Cameras ****************/

extern StructRNA RNA_BlendDataCameras;

PointerRNA BlendDataCameras_rna_type_get(PointerRNA *ptr);

/**************** Main Curves ****************/

extern StructRNA RNA_BlendDataCurves;

PointerRNA BlendDataCurves_rna_type_get(PointerRNA *ptr);

/**************** Main Fonts ****************/

extern StructRNA RNA_BlendDataFonts;

PointerRNA BlendDataFonts_rna_type_get(PointerRNA *ptr);

/**************** Main Grease Pencils ****************/

extern StructRNA RNA_BlendDataGreasePencils;

PointerRNA BlendDataGreasePencils_rna_type_get(PointerRNA *ptr);

/**************** Main Groups ****************/

extern StructRNA RNA_BlendDataGroups;

PointerRNA BlendDataGroups_rna_type_get(PointerRNA *ptr);

/**************** Main Images ****************/

extern StructRNA RNA_BlendDataImages;

PointerRNA BlendDataImages_rna_type_get(PointerRNA *ptr);

/**************** Main Lamps ****************/

extern StructRNA RNA_BlendDataLamps;

PointerRNA BlendDataLamps_rna_type_get(PointerRNA *ptr);

/**************** Main Lattices ****************/

extern StructRNA RNA_BlendDataLattices;

PointerRNA BlendDataLattices_rna_type_get(PointerRNA *ptr);

/**************** Main Libraries ****************/

extern StructRNA RNA_BlendDataLibraries;

PointerRNA BlendDataLibraries_rna_type_get(PointerRNA *ptr);

/**************** Main Material ****************/

extern StructRNA RNA_BlendDataMaterials;

PointerRNA BlendDataMaterials_rna_type_get(PointerRNA *ptr);

/**************** Main Meshes ****************/

extern StructRNA RNA_BlendDataMeshes;

PointerRNA BlendDataMeshes_rna_type_get(PointerRNA *ptr);

/**************** Main MetaBall ****************/

extern StructRNA RNA_BlendDataMetaBalls;

PointerRNA BlendDataMetaBalls_rna_type_get(PointerRNA *ptr);

/**************** Main Node Trees ****************/

extern StructRNA RNA_BlendDataNodeTrees;

PointerRNA BlendDataNodeTrees_rna_type_get(PointerRNA *ptr);

/**************** Main Objects ****************/

extern StructRNA RNA_BlendDataObjects;

PointerRNA BlendDataObjects_rna_type_get(PointerRNA *ptr);

/**************** Main Particle Settings ****************/

extern StructRNA RNA_BlendDataParticles;

PointerRNA BlendDataParticles_rna_type_get(PointerRNA *ptr);

/**************** Main Scenes ****************/

extern StructRNA RNA_BlendDataScenes;

PointerRNA BlendDataScenes_rna_type_get(PointerRNA *ptr);

/**************** Main Screens ****************/

extern StructRNA RNA_BlendDataScreens;

PointerRNA BlendDataScreens_rna_type_get(PointerRNA *ptr);

/**************** Main Sounds ****************/

extern StructRNA RNA_BlendDataSounds;

PointerRNA BlendDataSounds_rna_type_get(PointerRNA *ptr);

/**************** Main Texts ****************/

extern StructRNA RNA_BlendDataTexts;

PointerRNA BlendDataTexts_rna_type_get(PointerRNA *ptr);

/**************** Main Textures ****************/

extern StructRNA RNA_BlendDataTextures;

PointerRNA BlendDataTextures_rna_type_get(PointerRNA *ptr);

/**************** Main Window Managers ****************/

extern StructRNA RNA_BlendDataWindowManagers;

PointerRNA BlendDataWindowManagers_rna_type_get(PointerRNA *ptr);

/**************** Main Worlds ****************/

extern StructRNA RNA_BlendDataWorlds;

PointerRNA BlendDataWorlds_rna_type_get(PointerRNA *ptr);

/**************** Blend Texture ****************/

extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

enum {
	BlendTexture_use_flip_axis_HORIZONTAL = 0,
	BlendTexture_use_flip_axis_VERTICAL = 2,
};

int BlendTexture_use_flip_axis_get(PointerRNA *ptr);

enum {
	BlendTexture_progression_LINEAR = 0,
	BlendTexture_progression_QUADRATIC = 1,
	BlendTexture_progression_EASING = 2,
	BlendTexture_progression_DIAGONAL = 3,
	BlendTexture_progression_SPHERICAL = 4,
	BlendTexture_progression_QUADRATIC_SPHERE = 5,
	BlendTexture_progression_RADIAL = 6,
};

int BlendTexture_progression_get(PointerRNA *ptr);

/**************** Blender RNA ****************/

extern StructRNA RNA_BlenderRNA;

PointerRNA BlenderRNA_rna_type_get(PointerRNA *ptr);

void BlenderRNA_structs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BlenderRNA_structs_next(CollectionPropertyIterator *iter);
void BlenderRNA_structs_end(CollectionPropertyIterator *iter);

/**************** Boid Rule ****************/

extern StructRNA RNA_BoidRule;

PointerRNA BoidRule_rna_type_get(PointerRNA *ptr);

#define BoidRule_name_MAX 32

void BoidRule_name_get(PointerRNA *ptr, char *value);
int BoidRule_name_length(PointerRNA *ptr);

int BoidRule_use_in_air_get(PointerRNA *ptr);

int BoidRule_use_on_land_get(PointerRNA *ptr);

enum {
	BoidRule_type_GOAL = 1,
	BoidRule_type_AVOID = 2,
	BoidRule_type_AVOID_COLLISION = 3,
	BoidRule_type_SEPARATE = 4,
	BoidRule_type_FLOCK = 5,
	BoidRule_type_FOLLOW_LEADER = 6,
	BoidRule_type_AVERAGE_SPEED = 7,
	BoidRule_type_FIGHT = 8,
};

int BoidRule_type_get(PointerRNA *ptr);

/**************** Average Speed ****************/

extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRule;

float BoidRuleAverageSpeed_level_get(PointerRNA *ptr);

float BoidRuleAverageSpeed_speed_get(PointerRNA *ptr);

float BoidRuleAverageSpeed_wander_get(PointerRNA *ptr);

/**************** Avoid ****************/

extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRule;

float BoidRuleAvoid_fear_factor_get(PointerRNA *ptr);

PointerRNA BoidRuleAvoid_object_get(PointerRNA *ptr);

int BoidRuleAvoid_use_predict_get(PointerRNA *ptr);

/**************** Avoid Collision ****************/

extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRule;

int BoidRuleAvoidCollision_use_avoid_get(PointerRNA *ptr);

int BoidRuleAvoidCollision_use_avoid_collision_get(PointerRNA *ptr);

float BoidRuleAvoidCollision_look_ahead_get(PointerRNA *ptr);

/**************** Fight ****************/

extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidRule;

float BoidRuleFight_distance_get(PointerRNA *ptr);

float BoidRuleFight_flee_distance_get(PointerRNA *ptr);

/**************** Follow Leader ****************/

extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRule;

float BoidRuleFollowLeader_distance_get(PointerRNA *ptr);

int BoidRuleFollowLeader_use_line_get(PointerRNA *ptr);

PointerRNA BoidRuleFollowLeader_object_get(PointerRNA *ptr);

int BoidRuleFollowLeader_queue_count_get(PointerRNA *ptr);

/**************** Goal ****************/

extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRule;

PointerRNA BoidRuleGoal_object_get(PointerRNA *ptr);

int BoidRuleGoal_use_predict_get(PointerRNA *ptr);

/**************** Boid Settings ****************/

extern StructRNA RNA_BoidSettings;

PointerRNA BoidSettings_rna_type_get(PointerRNA *ptr);

float BoidSettings_accuracy_get(PointerRNA *ptr);

PointerRNA BoidSettings_active_boid_state_get(PointerRNA *ptr);

int BoidSettings_active_boid_state_index_get(PointerRNA *ptr);

float BoidSettings_aggression_get(PointerRNA *ptr);

float BoidSettings_air_personal_space_get(PointerRNA *ptr);

int BoidSettings_use_climb_get(PointerRNA *ptr);

int BoidSettings_use_flight_get(PointerRNA *ptr);

int BoidSettings_use_land_get(PointerRNA *ptr);

float BoidSettings_bank_get(PointerRNA *ptr);

void BoidSettings_states_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BoidSettings_states_next(CollectionPropertyIterator *iter);
void BoidSettings_states_end(CollectionPropertyIterator *iter);

float BoidSettings_health_get(PointerRNA *ptr);

float BoidSettings_height_get(PointerRNA *ptr);

float BoidSettings_land_jump_speed_get(PointerRNA *ptr);

float BoidSettings_land_personal_space_get(PointerRNA *ptr);

float BoidSettings_land_stick_force_get(PointerRNA *ptr);

float BoidSettings_land_smooth_get(PointerRNA *ptr);

float BoidSettings_air_acc_max_get(PointerRNA *ptr);

float BoidSettings_air_ave_max_get(PointerRNA *ptr);

float BoidSettings_air_speed_max_get(PointerRNA *ptr);

float BoidSettings_land_acc_max_get(PointerRNA *ptr);

float BoidSettings_land_ave_max_get(PointerRNA *ptr);

float BoidSettings_land_speed_max_get(PointerRNA *ptr);

float BoidSettings_air_speed_min_get(PointerRNA *ptr);

float BoidSettings_pitch_get(PointerRNA *ptr);

float BoidSettings_range_get(PointerRNA *ptr);

float BoidSettings_strength_get(PointerRNA *ptr);

/**************** Boid State ****************/

extern StructRNA RNA_BoidState;

PointerRNA BoidState_rna_type_get(PointerRNA *ptr);

#define BoidState_name_MAX 32

void BoidState_name_get(PointerRNA *ptr, char *value);
int BoidState_name_length(PointerRNA *ptr);

PointerRNA BoidState_active_boid_rule_get(PointerRNA *ptr);

int BoidState_active_boid_rule_index_get(PointerRNA *ptr);

void BoidState_rules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void BoidState_rules_next(CollectionPropertyIterator *iter);
void BoidState_rules_end(CollectionPropertyIterator *iter);

float BoidState_falloff_get(PointerRNA *ptr);

enum {
	BoidState_ruleset_type_FUZZY = 0,
	BoidState_ruleset_type_RANDOM = 1,
	BoidState_ruleset_type_AVERAGE = 2,
};

int BoidState_ruleset_type_get(PointerRNA *ptr);

float BoidState_rule_fuzzy_get(PointerRNA *ptr);

float BoidState_volume_get(PointerRNA *ptr);

/**************** Bone ****************/

extern StructRNA RNA_Bone;

PointerRNA Bone_rna_type_get(PointerRNA *ptr);

#define Bone_name_MAX 32

void Bone_name_get(PointerRNA *ptr, char *value);
int Bone_name_length(PointerRNA *ptr);

void Bone_head_local_get(PointerRNA *ptr, float values[3]);

void Bone_tail_local_get(PointerRNA *ptr, float values[3]);

float Bone_bbone_x_get(PointerRNA *ptr);

float Bone_bbone_z_get(PointerRNA *ptr);

float Bone_bbone_in_get(PointerRNA *ptr);

float Bone_bbone_out_get(PointerRNA *ptr);

int Bone_bbone_segments_get(PointerRNA *ptr);

void Bone_matrix_local_get(PointerRNA *ptr, float values[16]);

void Bone_matrix_get(PointerRNA *ptr, float values[9]);

void Bone_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Bone_children_next(CollectionPropertyIterator *iter);
void Bone_children_end(CollectionPropertyIterator *iter);

int Bone_use_connect_get(PointerRNA *ptr);

int Bone_use_cyclic_offset_get(PointerRNA *ptr);

int Bone_use_deform_get(PointerRNA *ptr);

int Bone_show_wire_get(PointerRNA *ptr);

float Bone_envelope_distance_get(PointerRNA *ptr);

float Bone_envelope_weight_get(PointerRNA *ptr);

float Bone_head_radius_get(PointerRNA *ptr);

float Bone_tail_radius_get(PointerRNA *ptr);

void Bone_head_get(PointerRNA *ptr, float values[3]);

int Bone_hide_get(PointerRNA *ptr);

int Bone_use_inherit_rotation_get(PointerRNA *ptr);

int Bone_use_inherit_scale_get(PointerRNA *ptr);

void Bone_layers_get(PointerRNA *ptr, int values[32]);

int Bone_use_local_location_get(PointerRNA *ptr);

int Bone_use_envelope_multiply_get(PointerRNA *ptr);

PointerRNA Bone_parent_get(PointerRNA *ptr);

int Bone_select_get(PointerRNA *ptr);

int Bone_select_head_get(PointerRNA *ptr);

int Bone_select_tail_get(PointerRNA *ptr);

int Bone_hide_select_get(PointerRNA *ptr);

void Bone_tail_get(PointerRNA *ptr, float values[3]);

/**************** Bone Group ****************/

extern StructRNA RNA_BoneGroup;

PointerRNA BoneGroup_rna_type_get(PointerRNA *ptr);

#define BoneGroup_name_MAX 64

void BoneGroup_name_get(PointerRNA *ptr, char *value);
int BoneGroup_name_length(PointerRNA *ptr);

enum {
	BoneGroup_color_set_DEFAULT = 0,
	BoneGroup_color_set_THEME01 = 1,
	BoneGroup_color_set_THEME02 = 2,
	BoneGroup_color_set_THEME03 = 3,
	BoneGroup_color_set_THEME04 = 4,
	BoneGroup_color_set_THEME05 = 5,
	BoneGroup_color_set_THEME06 = 6,
	BoneGroup_color_set_THEME07 = 7,
	BoneGroup_color_set_THEME08 = 8,
	BoneGroup_color_set_THEME09 = 9,
	BoneGroup_color_set_THEME10 = 10,
	BoneGroup_color_set_THEME11 = 11,
	BoneGroup_color_set_THEME12 = 12,
	BoneGroup_color_set_THEME13 = 13,
	BoneGroup_color_set_THEME14 = 14,
	BoneGroup_color_set_THEME15 = 15,
	BoneGroup_color_set_THEME16 = 16,
	BoneGroup_color_set_THEME17 = 17,
	BoneGroup_color_set_THEME18 = 18,
	BoneGroup_color_set_THEME19 = 19,
	BoneGroup_color_set_THEME20 = 20,
	BoneGroup_color_set_CUSTOM = -1,
};

int BoneGroup_color_set_get(PointerRNA *ptr);

PointerRNA BoneGroup_colors_get(PointerRNA *ptr);

/**************** Bone Groups ****************/

extern StructRNA RNA_BoneGroups;

PointerRNA BoneGroups_rna_type_get(PointerRNA *ptr);

PointerRNA BoneGroups_active_get(PointerRNA *ptr);

int BoneGroups_active_index_get(PointerRNA *ptr);

/**************** Boolean Modifier ****************/

extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_Modifier;

PointerRNA BooleanModifier_object_get(PointerRNA *ptr);

enum {
	BooleanModifier_operation_INTERSECT = 0,
	BooleanModifier_operation_UNION = 1,
	BooleanModifier_operation_DIFFERENCE = 2,
};

int BooleanModifier_operation_get(PointerRNA *ptr);

/**************** Boolean Definition ****************/

extern StructRNA RNA_BooleanProperty;
extern StructRNA RNA_Property;

int BooleanProperty_array_length_get(PointerRNA *ptr);

int BooleanProperty_default_get(PointerRNA *ptr);

void BooleanProperty_default_array_get(PointerRNA *ptr, int values[3]);

/**************** Brush ****************/

extern StructRNA RNA_Brush;
extern StructRNA RNA_ID;

int Brush_use_accumulate_get(PointerRNA *ptr);

int Brush_use_adaptive_space_get(PointerRNA *ptr);

void Brush_cursor_color_add_get(PointerRNA *ptr, float values[3]);

int Brush_use_airbrush_get(PointerRNA *ptr);

int Brush_use_alpha_get(PointerRNA *ptr);

int Brush_use_anchor_get(PointerRNA *ptr);

float Brush_auto_smooth_factor_get(PointerRNA *ptr);

enum {
	Brush_blend_MIX = 0,
	Brush_blend_ADD = 1,
	Brush_blend_SUB = 2,
	Brush_blend_MUL = 3,
	Brush_blend_LIGHTEN = 4,
	Brush_blend_DARKEN = 5,
	Brush_blend_ERASE_ALPHA = 6,
	Brush_blend_ADD_ALPHA = 7,
};

int Brush_blend_get(PointerRNA *ptr);

#define Brush_icon_filepath_MAX 240

void Brush_icon_filepath_get(PointerRNA *ptr, char *value);
int Brush_icon_filepath_length(PointerRNA *ptr);

float Brush_clone_alpha_get(PointerRNA *ptr);

PointerRNA Brush_clone_image_get(PointerRNA *ptr);

void Brush_clone_offset_get(PointerRNA *ptr, float values[2]);

void Brush_color_get(PointerRNA *ptr, float values[3]);

float Brush_crease_pinch_factor_get(PointerRNA *ptr);

PointerRNA Brush_curve_get(PointerRNA *ptr);

int Brush_use_custom_icon_get(PointerRNA *ptr);

enum {
	Brush_direction_ADD = 0,
	Brush_direction_SUBTRACT = 512,
};

int Brush_direction_get(PointerRNA *ptr);

int Brush_use_edge_to_edge_get(PointerRNA *ptr);

enum {
	Brush_imagepaint_tool_DRAW = 0,
	Brush_imagepaint_tool_SOFTEN = 1,
	Brush_imagepaint_tool_SMEAR = 2,
	Brush_imagepaint_tool_CLONE = 3,
};

int Brush_imagepaint_tool_get(PointerRNA *ptr);

int Brush_use_inverse_smooth_pressure_get(PointerRNA *ptr);

float Brush_jitter_get(PointerRNA *ptr);

int Brush_use_pressure_jitter_get(PointerRNA *ptr);

float Brush_normal_weight_get(PointerRNA *ptr);

int Brush_use_original_normal_get(PointerRNA *ptr);

int Brush_use_persistent_get(PointerRNA *ptr);

float Brush_plane_offset_get(PointerRNA *ptr);

int Brush_use_offset_pressure_get(PointerRNA *ptr);

float Brush_plane_trim_get(PointerRNA *ptr);

int Brush_use_rake_get(PointerRNA *ptr);

int Brush_use_random_rotation_get(PointerRNA *ptr);

float Brush_rate_get(PointerRNA *ptr);

int Brush_use_restore_mesh_get(PointerRNA *ptr);

enum {
	Brush_sculpt_plane_AREA = 0,
	Brush_sculpt_plane_VIEW = 1,
	Brush_sculpt_plane_X = 2,
	Brush_sculpt_plane_Y = 3,
	Brush_sculpt_plane_Z = 4,
};

int Brush_sculpt_plane_get(PointerRNA *ptr);

enum {
	Brush_sculpt_tool_BLOB = 17,
	Brush_sculpt_tool_CLAY = 8,
	Brush_sculpt_tool_CREASE = 16,
	Brush_sculpt_tool_DRAW = 1,
	Brush_sculpt_tool_FILL = 9,
	Brush_sculpt_tool_FLATTEN = 7,
	Brush_sculpt_tool_GRAB = 5,
	Brush_sculpt_tool_INFLATE = 4,
	Brush_sculpt_tool_LAYER = 6,
	Brush_sculpt_tool_NUDGE = 11,
	Brush_sculpt_tool_PINCH = 3,
	Brush_sculpt_tool_ROTATE = 14,
	Brush_sculpt_tool_SCRAPE = 10,
	Brush_sculpt_tool_SMOOTH = 2,
	Brush_sculpt_tool_SNAKE_HOOK = 13,
	Brush_sculpt_tool_THUMB = 12,
};

int Brush_sculpt_tool_get(PointerRNA *ptr);

int Brush_size_get(PointerRNA *ptr);

int Brush_use_pressure_size_get(PointerRNA *ptr);

int Brush_use_smooth_stroke_get(PointerRNA *ptr);

float Brush_smooth_stroke_factor_get(PointerRNA *ptr);

int Brush_smooth_stroke_radius_get(PointerRNA *ptr);

int Brush_use_space_get(PointerRNA *ptr);

int Brush_spacing_get(PointerRNA *ptr);

int Brush_use_pressure_spacing_get(PointerRNA *ptr);

float Brush_strength_get(PointerRNA *ptr);

int Brush_use_pressure_strength_get(PointerRNA *ptr);

enum {
	Brush_stroke_method_DOTS = 0,
	Brush_stroke_method_DRAG_DOT = 8388608,
	Brush_stroke_method_SPACE = 1024,
	Brush_stroke_method_ANCHORED = 256,
	Brush_stroke_method_AIRBRUSH = 1,
};

int Brush_stroke_method_get(PointerRNA *ptr);

void Brush_cursor_color_subtract_get(PointerRNA *ptr, float values[3]);

PointerRNA Brush_texture_get(PointerRNA *ptr);

enum {
	Brush_texture_angle_source_random_USER = 0,
	Brush_texture_angle_source_random_RAKE = 128,
	Brush_texture_angle_source_random_RANDOM = 33554432,
};

int Brush_texture_angle_source_random_get(PointerRNA *ptr);

enum {
	Brush_texture_angle_source_no_random_USER = 0,
	Brush_texture_angle_source_no_random_RAKE = 128,
};

int Brush_texture_angle_source_no_random_get(PointerRNA *ptr);

int Brush_texture_overlay_alpha_get(PointerRNA *ptr);

float Brush_texture_sample_bias_get(PointerRNA *ptr);

PointerRNA Brush_texture_slot_get(PointerRNA *ptr);

float Brush_unprojected_radius_get(PointerRNA *ptr);

int Brush_use_space_atten_get(PointerRNA *ptr);

int Brush_use_locked_size_get(PointerRNA *ptr);

int Brush_use_frontface_get(PointerRNA *ptr);

int Brush_use_plane_trim_get(PointerRNA *ptr);

int Brush_use_paint_sculpt_get(PointerRNA *ptr);

int Brush_use_paint_texture_get(PointerRNA *ptr);

int Brush_use_texture_overlay_get(PointerRNA *ptr);

int Brush_use_paint_vertex_get(PointerRNA *ptr);

int Brush_use_paint_weight_get(PointerRNA *ptr);

enum {
	Brush_vertexpaint_tool_MIX = 0,
	Brush_vertexpaint_tool_ADD = 1,
	Brush_vertexpaint_tool_SUB = 2,
	Brush_vertexpaint_tool_MUL = 3,
	Brush_vertexpaint_tool_BLUR = 4,
	Brush_vertexpaint_tool_LIGHTEN = 5,
	Brush_vertexpaint_tool_DARKEN = 6,
};

int Brush_vertexpaint_tool_get(PointerRNA *ptr);

int Brush_use_wrap_get(PointerRNA *ptr);

/**************** Brush Texture Slot ****************/

extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_TextureSlot;

float BrushTextureSlot_angle_get(PointerRNA *ptr);

enum {
	BrushTextureSlot_map_mode_FIXED = 0,
	BrushTextureSlot_map_mode_TILED = 1,
	BrushTextureSlot_map_mode_3D = 2,
};

int BrushTextureSlot_map_mode_get(PointerRNA *ptr);

/**************** Build Modifier ****************/

extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_Modifier;

float BuildModifier_frame_duration_get(PointerRNA *ptr);

int BuildModifier_use_random_order_get(PointerRNA *ptr);

int BuildModifier_seed_get(PointerRNA *ptr);

float BuildModifier_frame_start_get(PointerRNA *ptr);

/**************** Camera ****************/

extern StructRNA RNA_Camera;
extern StructRNA RNA_ID;

float Camera_angle_get(PointerRNA *ptr);

PointerRNA Camera_animation_data_get(PointerRNA *ptr);

float Camera_clip_end_get(PointerRNA *ptr);

float Camera_clip_start_get(PointerRNA *ptr);

float Camera_dof_distance_get(PointerRNA *ptr);

PointerRNA Camera_dof_object_get(PointerRNA *ptr);

float Camera_draw_size_get(PointerRNA *ptr);

float Camera_lens_get(PointerRNA *ptr);

enum {
	Camera_lens_unit_MILLIMETERS = 0,
	Camera_lens_unit_DEGREES = 32,
};

int Camera_lens_unit_get(PointerRNA *ptr);

float Camera_ortho_scale_get(PointerRNA *ptr);

int Camera_use_panorama_get(PointerRNA *ptr);

float Camera_passepartout_alpha_get(PointerRNA *ptr);

float Camera_shift_x_get(PointerRNA *ptr);

float Camera_shift_y_get(PointerRNA *ptr);

int Camera_show_limits_get(PointerRNA *ptr);

int Camera_show_mist_get(PointerRNA *ptr);

int Camera_show_name_get(PointerRNA *ptr);

int Camera_show_passepartout_get(PointerRNA *ptr);

int Camera_show_title_safe_get(PointerRNA *ptr);

enum {
	Camera_type_PERSP = 0,
	Camera_type_ORTHO = 1,
};

int Camera_type_get(PointerRNA *ptr);

/**************** Camera Actuator ****************/

extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_Actuator;

enum {
	CameraActuator_axis_X = 120,
	CameraActuator_axis_Y = 121,
};

int CameraActuator_axis_get(PointerRNA *ptr);

PointerRNA CameraActuator_object_get(PointerRNA *ptr);

float CameraActuator_height_get(PointerRNA *ptr);

float CameraActuator_max_get(PointerRNA *ptr);

float CameraActuator_min_get(PointerRNA *ptr);

/**************** Cast Modifier ****************/

extern StructRNA RNA_CastModifier;
extern StructRNA RNA_Modifier;

enum {
	CastModifier_cast_type_SPHERE = 0,
	CastModifier_cast_type_CYLINDER = 1,
	CastModifier_cast_type_CUBOID = 2,
};

int CastModifier_cast_type_get(PointerRNA *ptr);

float CastModifier_factor_get(PointerRNA *ptr);

int CastModifier_use_radius_as_size_get(PointerRNA *ptr);

PointerRNA CastModifier_object_get(PointerRNA *ptr);

float CastModifier_radius_get(PointerRNA *ptr);

float CastModifier_size_get(PointerRNA *ptr);

int CastModifier_use_transform_get(PointerRNA *ptr);

#define CastModifier_vertex_group_MAX 32

void CastModifier_vertex_group_get(PointerRNA *ptr, char *value);
int CastModifier_vertex_group_length(PointerRNA *ptr);

int CastModifier_use_x_get(PointerRNA *ptr);

int CastModifier_use_y_get(PointerRNA *ptr);

int CastModifier_use_z_get(PointerRNA *ptr);

/**************** ChannelDriver Variables ****************/

extern StructRNA RNA_ChannelDriverVariables;

PointerRNA ChannelDriverVariables_rna_type_get(PointerRNA *ptr);

/**************** Child Of Constraint ****************/

extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_Constraint;

int ChildOfConstraint_use_location_x_get(PointerRNA *ptr);

int ChildOfConstraint_use_location_y_get(PointerRNA *ptr);

int ChildOfConstraint_use_location_z_get(PointerRNA *ptr);

int ChildOfConstraint_use_rotation_x_get(PointerRNA *ptr);

int ChildOfConstraint_use_rotation_y_get(PointerRNA *ptr);

int ChildOfConstraint_use_rotation_z_get(PointerRNA *ptr);

int ChildOfConstraint_use_scale_x_get(PointerRNA *ptr);

int ChildOfConstraint_use_scale_y_get(PointerRNA *ptr);

int ChildOfConstraint_use_scale_z_get(PointerRNA *ptr);

#define ChildOfConstraint_subtarget_MAX 32

void ChildOfConstraint_subtarget_get(PointerRNA *ptr, char *value);
int ChildOfConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA ChildOfConstraint_target_get(PointerRNA *ptr);

/**************** Child Particle ****************/

extern StructRNA RNA_ChildParticle;

PointerRNA ChildParticle_rna_type_get(PointerRNA *ptr);

/**************** Clamp To Constraint ****************/

extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_Constraint;

int ClampToConstraint_use_cyclic_get(PointerRNA *ptr);

enum {
	ClampToConstraint_main_axis_CLAMPTO_AUTO = 0,
	ClampToConstraint_main_axis_CLAMPTO_X = 1,
	ClampToConstraint_main_axis_CLAMPTO_Y = 2,
	ClampToConstraint_main_axis_CLAMPTO_Z = 3,
};

int ClampToConstraint_main_axis_get(PointerRNA *ptr);

PointerRNA ClampToConstraint_target_get(PointerRNA *ptr);

/**************** Cloth Collision Settings ****************/

extern StructRNA RNA_ClothCollisionSettings;

PointerRNA ClothCollisionSettings_rna_type_get(PointerRNA *ptr);

PointerRNA ClothCollisionSettings_group_get(PointerRNA *ptr);

int ClothCollisionSettings_collision_quality_get(PointerRNA *ptr);

int ClothCollisionSettings_use_collision_get(PointerRNA *ptr);

int ClothCollisionSettings_use_self_collision_get(PointerRNA *ptr);

float ClothCollisionSettings_friction_get(PointerRNA *ptr);

float ClothCollisionSettings_distance_min_get(PointerRNA *ptr);

int ClothCollisionSettings_self_collision_quality_get(PointerRNA *ptr);

float ClothCollisionSettings_self_friction_get(PointerRNA *ptr);

float ClothCollisionSettings_self_distance_min_get(PointerRNA *ptr);

/**************** Cloth Modifier ****************/

extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_Modifier;

PointerRNA ClothModifier_collision_settings_get(PointerRNA *ptr);

PointerRNA ClothModifier_settings_get(PointerRNA *ptr);

PointerRNA ClothModifier_point_cache_get(PointerRNA *ptr);

/**************** Cloth Settings ****************/

extern StructRNA RNA_ClothSettings;

PointerRNA ClothSettings_rna_type_get(PointerRNA *ptr);

float ClothSettings_air_damping_get(PointerRNA *ptr);

float ClothSettings_bending_stiffness_get(PointerRNA *ptr);

float ClothSettings_bending_stiffness_max_get(PointerRNA *ptr);

void ClothSettings_vertex_group_bending_get(PointerRNA *ptr, char *value);
int ClothSettings_vertex_group_bending_length(PointerRNA *ptr);

float ClothSettings_collider_friction_get(PointerRNA *ptr);

PointerRNA ClothSettings_effector_weights_get(PointerRNA *ptr);

float ClothSettings_goal_friction_get(PointerRNA *ptr);

float ClothSettings_goal_default_get(PointerRNA *ptr);

float ClothSettings_goal_max_get(PointerRNA *ptr);

float ClothSettings_goal_min_get(PointerRNA *ptr);

float ClothSettings_goal_spring_get(PointerRNA *ptr);

void ClothSettings_gravity_get(PointerRNA *ptr, float values[3]);

float ClothSettings_internal_friction_get(PointerRNA *ptr);

float ClothSettings_mass_get(PointerRNA *ptr);

void ClothSettings_vertex_group_mass_get(PointerRNA *ptr, char *value);
int ClothSettings_vertex_group_mass_length(PointerRNA *ptr);

int ClothSettings_use_pin_cloth_get(PointerRNA *ptr);

float ClothSettings_pin_stiffness_get(PointerRNA *ptr);

int ClothSettings_pre_roll_get(PointerRNA *ptr);

int ClothSettings_quality_get(PointerRNA *ptr);

PointerRNA ClothSettings_rest_shape_key_get(PointerRNA *ptr);

float ClothSettings_spring_damping_get(PointerRNA *ptr);

int ClothSettings_use_stiffness_scale_get(PointerRNA *ptr);

float ClothSettings_structural_stiffness_get(PointerRNA *ptr);

float ClothSettings_structural_stiffness_max_get(PointerRNA *ptr);

void ClothSettings_vertex_group_structural_stiffness_get(PointerRNA *ptr, char *value);
int ClothSettings_vertex_group_structural_stiffness_length(PointerRNA *ptr);

/**************** Clouds Texture ****************/

extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

enum {
	CloudsTexture_cloud_type_GREYSCALE = 0,
	CloudsTexture_cloud_type_COLOR = 1,
};

int CloudsTexture_cloud_type_get(PointerRNA *ptr);

float CloudsTexture_nabla_get(PointerRNA *ptr);

enum {
	CloudsTexture_noise_basis_BLENDER_ORIGINAL = 0,
	CloudsTexture_noise_basis_ORIGINAL_PERLIN = 1,
	CloudsTexture_noise_basis_IMPROVED_PERLIN = 2,
	CloudsTexture_noise_basis_VORONOI_F1 = 3,
	CloudsTexture_noise_basis_VORONOI_F2 = 4,
	CloudsTexture_noise_basis_VORONOI_F3 = 5,
	CloudsTexture_noise_basis_VORONOI_F4 = 6,
	CloudsTexture_noise_basis_VORONOI_F2_F1 = 7,
	CloudsTexture_noise_basis_VORONOI_CRACKLE = 8,
	CloudsTexture_noise_basis_CELL_NOISE = 14,
};

int CloudsTexture_noise_basis_get(PointerRNA *ptr);

int CloudsTexture_noise_depth_get(PointerRNA *ptr);

float CloudsTexture_noise_scale_get(PointerRNA *ptr);

enum {
	CloudsTexture_noise_type_SOFT_NOISE = 0,
	CloudsTexture_noise_type_HARD_NOISE = 1,
};

int CloudsTexture_noise_type_get(PointerRNA *ptr);

/**************** Collection Definition ****************/

extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Property;

PointerRNA CollectionProperty_fixed_type_get(PointerRNA *ptr);

/**************** Collision Modifier ****************/

extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_Modifier;

PointerRNA CollisionModifier_settings_get(PointerRNA *ptr);

/**************** Collision Sensor ****************/

extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_Sensor;

int CollisionSensor_use_material_get(PointerRNA *ptr);

#define CollisionSensor_material_MAX 32

void CollisionSensor_material_get(PointerRNA *ptr, char *value);
int CollisionSensor_material_length(PointerRNA *ptr);

#define CollisionSensor_property_MAX 32

void CollisionSensor_property_get(PointerRNA *ptr, char *value);
int CollisionSensor_property_length(PointerRNA *ptr);

int CollisionSensor_use_pulse_get(PointerRNA *ptr);

/**************** Collision Settings ****************/

extern StructRNA RNA_CollisionSettings;

PointerRNA CollisionSettings_rna_type_get(PointerRNA *ptr);

float CollisionSettings_absorption_get(PointerRNA *ptr);

float CollisionSettings_damping_get(PointerRNA *ptr);

float CollisionSettings_damping_factor_get(PointerRNA *ptr);

int CollisionSettings_use_get(PointerRNA *ptr);

float CollisionSettings_friction_factor_get(PointerRNA *ptr);

float CollisionSettings_thickness_inner_get(PointerRNA *ptr);

int CollisionSettings_use_particle_kill_get(PointerRNA *ptr);

float CollisionSettings_thickness_outer_get(PointerRNA *ptr);

float CollisionSettings_permeability_get(PointerRNA *ptr);

float CollisionSettings_damping_random_get(PointerRNA *ptr);

float CollisionSettings_friction_random_get(PointerRNA *ptr);

float CollisionSettings_stickness_get(PointerRNA *ptr);

/**************** Color Ramp ****************/

extern StructRNA RNA_ColorRamp;

PointerRNA ColorRamp_rna_type_get(PointerRNA *ptr);

void ColorRamp_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ColorRamp_elements_next(CollectionPropertyIterator *iter);
void ColorRamp_elements_end(CollectionPropertyIterator *iter);

enum {
	ColorRamp_interpolation_EASE = 1,
	ColorRamp_interpolation_CARDINAL = 3,
	ColorRamp_interpolation_LINEAR = 0,
	ColorRamp_interpolation_B_SPLINE = 2,
	ColorRamp_interpolation_CONSTANT = 4,
};

int ColorRamp_interpolation_get(PointerRNA *ptr);

/**************** Color Ramp Element ****************/

extern StructRNA RNA_ColorRampElement;

PointerRNA ColorRampElement_rna_type_get(PointerRNA *ptr);

void ColorRampElement_color_get(PointerRNA *ptr, float values[4]);

float ColorRampElement_position_get(PointerRNA *ptr);

/**************** Color Ramp Elements ****************/

extern StructRNA RNA_ColorRampElements;

PointerRNA ColorRampElements_rna_type_get(PointerRNA *ptr);

/**************** Color Sequence ****************/

extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_Sequence;

void ColorSequence_color_get(PointerRNA *ptr, float values[3]);

/**************** Compositor Node ****************/

extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNode_type_VIEWER = 201,
	CompositorNode_type_RGB = 202,
	CompositorNode_type_VALUE = 203,
	CompositorNode_type_MIX_RGB = 204,
	CompositorNode_type_VALTORGB = 205,
	CompositorNode_type_RGBTOBW = 206,
	CompositorNode_type_NORMAL = 207,
	CompositorNode_type_CURVE_VEC = 208,
	CompositorNode_type_CURVE_RGB = 209,
	CompositorNode_type_ALPHAOVER = 210,
	CompositorNode_type_BLUR = 211,
	CompositorNode_type_FILTER = 212,
	CompositorNode_type_MAP_VALUE = 213,
	CompositorNode_type_TIME = 214,
	CompositorNode_type_VECBLUR = 215,
	CompositorNode_type_SEPRGBA = 216,
	CompositorNode_type_SEPHSVA = 217,
	CompositorNode_type_SETALPHA = 218,
	CompositorNode_type_HUE_SAT = 219,
	CompositorNode_type_IMAGE = 220,
	CompositorNode_type_R_LAYERS = 221,
	CompositorNode_type_COMPOSITE = 222,
	CompositorNode_type_OUTPUT_FILE = 223,
	CompositorNode_type_TEXTURE = 224,
	CompositorNode_type_TRANSLATE = 225,
	CompositorNode_type_ZCOMBINE = 226,
	CompositorNode_type_COMBRGBA = 227,
	CompositorNode_type_DILATEERODE = 228,
	CompositorNode_type_ROTATE = 229,
	CompositorNode_type_SCALE = 230,
	CompositorNode_type_SEPYCCA = 231,
	CompositorNode_type_COMBYCCA = 232,
	CompositorNode_type_SEPYUVA = 233,
	CompositorNode_type_COMBYUVA = 234,
	CompositorNode_type_DIFF_MATTE = 235,
	CompositorNode_type_COLOR_SPILL = 236,
	CompositorNode_type_CHROMA_MATTE = 237,
	CompositorNode_type_CHANNEL_MATTE = 238,
	CompositorNode_type_FLIP = 239,
	CompositorNode_type_SPLITVIEWER = 240,
	CompositorNode_type_MAP_UV = 242,
	CompositorNode_type_ID_MASK = 243,
	CompositorNode_type_DEFOCUS = 244,
	CompositorNode_type_DISPLACE = 245,
	CompositorNode_type_COMBHSVA = 246,
	CompositorNode_type_MATH = 247,
	CompositorNode_type_LUMA_MATTE = 248,
	CompositorNode_type_BRIGHTCONTRAST = 249,
	CompositorNode_type_GAMMA = 250,
	CompositorNode_type_INVERT = 251,
	CompositorNode_type_NORMALIZE = 252,
	CompositorNode_type_CROP = 253,
	CompositorNode_type_DBLUR = 254,
	CompositorNode_type_BILATERALBLUR = 255,
	CompositorNode_type_PREMULKEY = 256,
	CompositorNode_type_DISTANCE_MATTE = 257,
	CompositorNode_type_LEVELS = 258,
	CompositorNode_type_COLOR_MATTE = 259,
	CompositorNode_type_COLORBALANCE = 260,
	CompositorNode_type_HUECORRECT = 261,
	CompositorNode_type_GLARE = 301,
	CompositorNode_type_TONEMAP = 302,
	CompositorNode_type_LENSDIST = 303,
	CompositorNode_type_SCRIPT = 123,
	CompositorNode_type_GROUP = 2,
};

int CompositorNode_type_get(PointerRNA *ptr);

/**************** Alpha Over ****************/

extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeAlphaOver_use_premultiply_get(PointerRNA *ptr);

float CompositorNodeAlphaOver_premul_get(PointerRNA *ptr);

/**************** Bilateral Blur ****************/

extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeBilateralblur_sigma_color_get(PointerRNA *ptr);

int CompositorNodeBilateralblur_iterations_get(PointerRNA *ptr);

float CompositorNodeBilateralblur_sigma_space_get(PointerRNA *ptr);

/**************** Blur ****************/

extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeBlur_aspect_correction_NONE = 0,
	CompositorNodeBlur_aspect_correction_Y = 1,
	CompositorNodeBlur_aspect_correction_X = 2,
};

int CompositorNodeBlur_aspect_correction_get(PointerRNA *ptr);

int CompositorNodeBlur_use_bokeh_get(PointerRNA *ptr);

float CompositorNodeBlur_factor_get(PointerRNA *ptr);

enum {
	CompositorNodeBlur_filter_type_FLAT = 0,
	CompositorNodeBlur_filter_type_TENT = 1,
	CompositorNodeBlur_filter_type_QUAD = 2,
	CompositorNodeBlur_filter_type_CUBIC = 3,
	CompositorNodeBlur_filter_type_GAUSS = 5,
	CompositorNodeBlur_filter_type_FAST_GAUSS = 7,
	CompositorNodeBlur_filter_type_CATROM = 4,
	CompositorNodeBlur_filter_type_MITCH = 6,
};

int CompositorNodeBlur_filter_type_get(PointerRNA *ptr);

int CompositorNodeBlur_use_gamma_correction_get(PointerRNA *ptr);

int CompositorNodeBlur_use_relative_get(PointerRNA *ptr);

float CompositorNodeBlur_factor_x_get(PointerRNA *ptr);

float CompositorNodeBlur_factor_y_get(PointerRNA *ptr);

int CompositorNodeBlur_size_x_get(PointerRNA *ptr);

int CompositorNodeBlur_size_y_get(PointerRNA *ptr);

/**************** Bright Contrast ****************/

extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Channel Key ****************/

extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeChannelMatte_limit_method_SINGLE = 0,
	CompositorNodeChannelMatte_limit_method_MAX = 1,
};

int CompositorNodeChannelMatte_limit_method_get(PointerRNA *ptr);

enum {
	CompositorNodeChannelMatte_matte_channel_R = 1,
	CompositorNodeChannelMatte_matte_channel_G = 2,
	CompositorNodeChannelMatte_matte_channel_B = 3,
};

int CompositorNodeChannelMatte_matte_channel_get(PointerRNA *ptr);

enum {
	CompositorNodeChannelMatte_color_space_RGB = 1,
	CompositorNodeChannelMatte_color_space_HSV = 2,
	CompositorNodeChannelMatte_color_space_YUV = 3,
	CompositorNodeChannelMatte_color_space_YCC = 4,
};

int CompositorNodeChannelMatte_color_space_get(PointerRNA *ptr);

float CompositorNodeChannelMatte_limit_max_get(PointerRNA *ptr);

enum {
	CompositorNodeChannelMatte_limit_channel_R = 1,
	CompositorNodeChannelMatte_limit_channel_G = 2,
	CompositorNodeChannelMatte_limit_channel_B = 3,
};

int CompositorNodeChannelMatte_limit_channel_get(PointerRNA *ptr);

float CompositorNodeChannelMatte_limit_min_get(PointerRNA *ptr);

/**************** Chroma Key ****************/

extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeChromaMatte_tolerance_get(PointerRNA *ptr);

float CompositorNodeChromaMatte_threshold_get(PointerRNA *ptr);

float CompositorNodeChromaMatte_gain_get(PointerRNA *ptr);

float CompositorNodeChromaMatte_lift_get(PointerRNA *ptr);

float CompositorNodeChromaMatte_shadow_adjust_get(PointerRNA *ptr);

/**************** Color Balance ****************/

extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeColorBalance_correction_method_LIFT_GAMMA_GAIN = 0,
	CompositorNodeColorBalance_correction_method_OFFSET_POWER_SLOPE = 1,
};

int CompositorNodeColorBalance_correction_method_get(PointerRNA *ptr);

void CompositorNodeColorBalance_gain_get(PointerRNA *ptr, float values[3]);

void CompositorNodeColorBalance_gamma_get(PointerRNA *ptr, float values[3]);

void CompositorNodeColorBalance_lift_get(PointerRNA *ptr, float values[3]);

void CompositorNodeColorBalance_offset_get(PointerRNA *ptr, float values[3]);

void CompositorNodeColorBalance_power_get(PointerRNA *ptr, float values[3]);

void CompositorNodeColorBalance_slope_get(PointerRNA *ptr, float values[3]);

/**************** Color Matte ****************/

extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeColorMatte_color_hue_get(PointerRNA *ptr);

float CompositorNodeColorMatte_color_saturation_get(PointerRNA *ptr);

float CompositorNodeColorMatte_color_value_get(PointerRNA *ptr);

/**************** Color Spill ****************/

extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeColorSpill_limit_method_SIMPLE = 0,
	CompositorNodeColorSpill_limit_method_AVERAGE = 1,
};

int CompositorNodeColorSpill_limit_method_get(PointerRNA *ptr);

float CompositorNodeColorSpill_unspill_blue_get(PointerRNA *ptr);

enum {
	CompositorNodeColorSpill_channel_R = 1,
	CompositorNodeColorSpill_channel_G = 2,
	CompositorNodeColorSpill_channel_B = 3,
};

int CompositorNodeColorSpill_channel_get(PointerRNA *ptr);

float CompositorNodeColorSpill_unspill_green_get(PointerRNA *ptr);

enum {
	CompositorNodeColorSpill_limit_channel_R = 1,
	CompositorNodeColorSpill_limit_channel_G = 2,
	CompositorNodeColorSpill_limit_channel_B = 3,
};

int CompositorNodeColorSpill_limit_channel_get(PointerRNA *ptr);

float CompositorNodeColorSpill_unspill_red_get(PointerRNA *ptr);

float CompositorNodeColorSpill_ratio_get(PointerRNA *ptr);

int CompositorNodeColorSpill_use_unspill_get(PointerRNA *ptr);

/**************** Combine HSVA ****************/

extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Combine RGBA ****************/

extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Combine YCCA ****************/

extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeCombYCCA_mode_ITUBT601 = 0,
	CompositorNodeCombYCCA_mode_ITUBT709 = 1,
	CompositorNodeCombYCCA_mode_JFIF = 2,
};

int CompositorNodeCombYCCA_mode_get(PointerRNA *ptr);

/**************** Combine YUVA ****************/

extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Composite ****************/

extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Crop ****************/

extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeCrop_use_crop_size_get(PointerRNA *ptr);

int CompositorNodeCrop_relative_get(PointerRNA *ptr);

int CompositorNodeCrop_min_x_get(PointerRNA *ptr);

float CompositorNodeCrop_rel_min_x_get(PointerRNA *ptr);

int CompositorNodeCrop_max_x_get(PointerRNA *ptr);

float CompositorNodeCrop_rel_max_x_get(PointerRNA *ptr);

int CompositorNodeCrop_min_y_get(PointerRNA *ptr);

float CompositorNodeCrop_rel_min_y_get(PointerRNA *ptr);

int CompositorNodeCrop_max_y_get(PointerRNA *ptr);

float CompositorNodeCrop_rel_max_y_get(PointerRNA *ptr);

/**************** RGB Curve ****************/

extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

PointerRNA CompositorNodeCurveRGB_mapping_get(PointerRNA *ptr);

/**************** Vector Curve ****************/

extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

PointerRNA CompositorNodeCurveVec_mapping_get(PointerRNA *ptr);

/**************** DBlur ****************/

extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeDBlur_angle_get(PointerRNA *ptr);

float CompositorNodeDBlur_center_x_get(PointerRNA *ptr);

float CompositorNodeDBlur_center_y_get(PointerRNA *ptr);

float CompositorNodeDBlur_distance_get(PointerRNA *ptr);

int CompositorNodeDBlur_iterations_get(PointerRNA *ptr);

float CompositorNodeDBlur_spin_get(PointerRNA *ptr);

int CompositorNodeDBlur_use_wrap_get(PointerRNA *ptr);

float CompositorNodeDBlur_zoom_get(PointerRNA *ptr);

/**************** Defocus ****************/

extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeDefocus_angle_get(PointerRNA *ptr);

enum {
	CompositorNodeDefocus_bokeh_OCTAGON = 8,
	CompositorNodeDefocus_bokeh_HEPTAGON = 7,
	CompositorNodeDefocus_bokeh_HEXAGON = 6,
	CompositorNodeDefocus_bokeh_PENTAGON = 5,
	CompositorNodeDefocus_bokeh_SQUARE = 4,
	CompositorNodeDefocus_bokeh_TRIANGLE = 3,
	CompositorNodeDefocus_bokeh_CIRCLE = 0,
};

int CompositorNodeDefocus_bokeh_get(PointerRNA *ptr);

int CompositorNodeDefocus_use_gamma_correction_get(PointerRNA *ptr);

float CompositorNodeDefocus_blur_max_get(PointerRNA *ptr);

int CompositorNodeDefocus_use_preview_get(PointerRNA *ptr);

int CompositorNodeDefocus_samples_get(PointerRNA *ptr);

float CompositorNodeDefocus_threshold_get(PointerRNA *ptr);

int CompositorNodeDefocus_use_zbuffer_get(PointerRNA *ptr);

float CompositorNodeDefocus_z_scale_get(PointerRNA *ptr);

float CompositorNodeDefocus_f_stop_get(PointerRNA *ptr);

/**************** Difference Key ****************/

extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeDiffMatte_falloff_get(PointerRNA *ptr);

float CompositorNodeDiffMatte_tolerance_get(PointerRNA *ptr);

/**************** Dilate/Erode ****************/

extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeDilateErode_distance_get(PointerRNA *ptr);

/**************** Displace ****************/

extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Distance Matte ****************/

extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeDistanceMatte_falloff_get(PointerRNA *ptr);

float CompositorNodeDistanceMatte_tolerance_get(PointerRNA *ptr);

/**************** Filter ****************/

extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeFilter_filter_type_SOFTEN = 0,
	CompositorNodeFilter_filter_type_SHARPEN = 1,
	CompositorNodeFilter_filter_type_LAPLACE = 2,
	CompositorNodeFilter_filter_type_SOBEL = 3,
	CompositorNodeFilter_filter_type_PREWITT = 4,
	CompositorNodeFilter_filter_type_KIRSCH = 5,
	CompositorNodeFilter_filter_type_SHADOW = 6,
};

int CompositorNodeFilter_filter_type_get(PointerRNA *ptr);

/**************** Flip ****************/

extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeFlip_axis_X = 0,
	CompositorNodeFlip_axis_Y = 1,
	CompositorNodeFlip_axis_XY = 2,
};

int CompositorNodeFlip_axis_get(PointerRNA *ptr);

/**************** Gamma ****************/

extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Glare ****************/

extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeGlare_angle_offset_get(PointerRNA *ptr);

float CompositorNodeGlare_color_modulation_get(PointerRNA *ptr);

float CompositorNodeGlare_fade_get(PointerRNA *ptr);

enum {
	CompositorNodeGlare_glare_type_GHOSTS = 3,
	CompositorNodeGlare_glare_type_STREAKS = 2,
	CompositorNodeGlare_glare_type_FOG_GLOW = 1,
	CompositorNodeGlare_glare_type_SIMPLE_STAR = 0,
};

int CompositorNodeGlare_glare_type_get(PointerRNA *ptr);

int CompositorNodeGlare_iterations_get(PointerRNA *ptr);

float CompositorNodeGlare_mix_get(PointerRNA *ptr);

enum {
	CompositorNodeGlare_quality_HIGH = 0,
	CompositorNodeGlare_quality_MEDIUM = 1,
	CompositorNodeGlare_quality_LOW = 2,
};

int CompositorNodeGlare_quality_get(PointerRNA *ptr);

int CompositorNodeGlare_use_rotate_45_get(PointerRNA *ptr);

int CompositorNodeGlare_size_get(PointerRNA *ptr);

int CompositorNodeGlare_streaks_get(PointerRNA *ptr);

float CompositorNodeGlare_threshold_get(PointerRNA *ptr);

/**************** Hue Correct ****************/

extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

PointerRNA CompositorNodeHueCorrect_mapping_get(PointerRNA *ptr);

/**************** Hue/Saturation ****************/

extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeHueSat_color_hue_get(PointerRNA *ptr);

float CompositorNodeHueSat_color_saturation_get(PointerRNA *ptr);

float CompositorNodeHueSat_color_value_get(PointerRNA *ptr);

/**************** ID Mask ****************/

extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeIDMask_index_get(PointerRNA *ptr);

/**************** Image ****************/

extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeImage_use_auto_refresh_get(PointerRNA *ptr);

int CompositorNodeImage_use_cyclic_get(PointerRNA *ptr);

int CompositorNodeImage_frame_duration_get(PointerRNA *ptr);

PointerRNA CompositorNodeImage_image_get(PointerRNA *ptr);

enum {
	CompositorNodeImage_layer_PLACEHOLDER = 0,
};

int CompositorNodeImage_layer_get(PointerRNA *ptr);

int CompositorNodeImage_frame_offset_get(PointerRNA *ptr);

int CompositorNodeImage_frame_start_get(PointerRNA *ptr);

/**************** Invert ****************/

extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeInvert_invert_alpha_get(PointerRNA *ptr);

int CompositorNodeInvert_invert_rgb_get(PointerRNA *ptr);

/**************** Lensdist ****************/

extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeLensdist_use_fit_get(PointerRNA *ptr);

int CompositorNodeLensdist_use_jitter_get(PointerRNA *ptr);

int CompositorNodeLensdist_use_projector_get(PointerRNA *ptr);

/**************** Levels ****************/

extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeLevels_channel_COMBINED_RGB = 1,
	CompositorNodeLevels_channel_RED = 2,
	CompositorNodeLevels_channel_GREEN = 3,
	CompositorNodeLevels_channel_BLUE = 4,
	CompositorNodeLevels_channel_LUMINANCE = 5,
};

int CompositorNodeLevels_channel_get(PointerRNA *ptr);

/**************** Luma Matte ****************/

extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeLumaMatte_limit_max_get(PointerRNA *ptr);

float CompositorNodeLumaMatte_limit_min_get(PointerRNA *ptr);

/**************** Map UV ****************/

extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeMapUV_alpha_get(PointerRNA *ptr);

/**************** Map Value ****************/

extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

void CompositorNodeMapValue_max_get(PointerRNA *ptr, float values[1]);

void CompositorNodeMapValue_min_get(PointerRNA *ptr, float values[1]);

void CompositorNodeMapValue_offset_get(PointerRNA *ptr, float values[1]);

void CompositorNodeMapValue_size_get(PointerRNA *ptr, float values[1]);

int CompositorNodeMapValue_use_max_get(PointerRNA *ptr);

int CompositorNodeMapValue_use_min_get(PointerRNA *ptr);

/**************** Math ****************/

extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeMath_operation_ADD = 0,
	CompositorNodeMath_operation_SUBTRACT = 1,
	CompositorNodeMath_operation_MULTIPLY = 2,
	CompositorNodeMath_operation_DIVIDE = 3,
	CompositorNodeMath_operation_SINE = 4,
	CompositorNodeMath_operation_COSINE = 5,
	CompositorNodeMath_operation_TANGENT = 6,
	CompositorNodeMath_operation_ARCSINE = 7,
	CompositorNodeMath_operation_ARCCOSINE = 8,
	CompositorNodeMath_operation_ARCTANGENT = 9,
	CompositorNodeMath_operation_POWER = 10,
	CompositorNodeMath_operation_LOGARITHM = 11,
	CompositorNodeMath_operation_MINIMUM = 12,
	CompositorNodeMath_operation_MAXIMUM = 13,
	CompositorNodeMath_operation_ROUND = 14,
	CompositorNodeMath_operation_LESS_THAN = 15,
	CompositorNodeMath_operation_GREATER_THAN = 16,
};

int CompositorNodeMath_operation_get(PointerRNA *ptr);

/**************** Mix RGB ****************/

extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeMixRGB_use_alpha_get(PointerRNA *ptr);

enum {
	CompositorNodeMixRGB_blend_type_MIX = 0,
	CompositorNodeMixRGB_blend_type_ADD = 1,
	CompositorNodeMixRGB_blend_type_SUBTRACT = 3,
	CompositorNodeMixRGB_blend_type_MULTIPLY = 2,
	CompositorNodeMixRGB_blend_type_SCREEN = 4,
	CompositorNodeMixRGB_blend_type_OVERLAY = 9,
	CompositorNodeMixRGB_blend_type_DIVIDE = 5,
	CompositorNodeMixRGB_blend_type_DIFFERENCE = 6,
	CompositorNodeMixRGB_blend_type_DARKEN = 7,
	CompositorNodeMixRGB_blend_type_LIGHTEN = 8,
	CompositorNodeMixRGB_blend_type_DODGE = 10,
	CompositorNodeMixRGB_blend_type_BURN = 11,
	CompositorNodeMixRGB_blend_type_COLOR = 15,
	CompositorNodeMixRGB_blend_type_VALUE = 14,
	CompositorNodeMixRGB_blend_type_SATURATION = 13,
	CompositorNodeMixRGB_blend_type_HUE = 12,
	CompositorNodeMixRGB_blend_type_SOFT_LIGHT = 16,
	CompositorNodeMixRGB_blend_type_LINEAR_LIGHT = 17,
};

int CompositorNodeMixRGB_blend_type_get(PointerRNA *ptr);

/**************** Normal ****************/

extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Normalize ****************/

extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Output File ****************/

extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeOutputFile_exr_codec_NONE = 0,
	CompositorNodeOutputFile_exr_codec_PXR24 = 1,
	CompositorNodeOutputFile_exr_codec_ZIP = 2,
	CompositorNodeOutputFile_exr_codec_PIZ = 3,
	CompositorNodeOutputFile_exr_codec_RLE = 4,
};

int CompositorNodeOutputFile_exr_codec_get(PointerRNA *ptr);

int CompositorNodeOutputFile_frame_end_get(PointerRNA *ptr);

#define CompositorNodeOutputFile_filepath_MAX 256

void CompositorNodeOutputFile_filepath_get(PointerRNA *ptr, char *value);
int CompositorNodeOutputFile_filepath_length(PointerRNA *ptr);

int CompositorNodeOutputFile_use_exr_half_get(PointerRNA *ptr);

enum {
	CompositorNodeOutputFile_image_type_TARGA = 0,
	CompositorNodeOutputFile_image_type_RAW_TARGA = 14,
	CompositorNodeOutputFile_image_type_PNG = 17,
	CompositorNodeOutputFile_image_type_BMP = 20,
	CompositorNodeOutputFile_image_type_JPEG = 4,
	CompositorNodeOutputFile_image_type_IRIS = 1,
	CompositorNodeOutputFile_image_type_RADIANCE_HDR = 21,
	CompositorNodeOutputFile_image_type_CINEON = 26,
	CompositorNodeOutputFile_image_type_DPX = 27,
	CompositorNodeOutputFile_image_type_OPENEXR = 23,
};

int CompositorNodeOutputFile_image_type_get(PointerRNA *ptr);

int CompositorNodeOutputFile_quality_get(PointerRNA *ptr);

int CompositorNodeOutputFile_frame_start_get(PointerRNA *ptr);

/**************** Premul Key ****************/

extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodePremulKey_mapping_KEY_TO_PREMUL = 0,
	CompositorNodePremulKey_mapping_PREMUL_TO_KEY = 1,
};

int CompositorNodePremulKey_mapping_get(PointerRNA *ptr);

/**************** RGB ****************/

extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** RGB to BW ****************/

extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Render Layers ****************/

extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeRLayers_layer_PLACEHOLDER = 0,
};

int CompositorNodeRLayers_layer_get(PointerRNA *ptr);

PointerRNA CompositorNodeRLayers_scene_get(PointerRNA *ptr);

/**************** Rotate ****************/

extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeRotate_filter_type_NEAREST = 0,
	CompositorNodeRotate_filter_type_BILINEAR = 1,
	CompositorNodeRotate_filter_type_BICUBIC = 2,
};

int CompositorNodeRotate_filter_type_get(PointerRNA *ptr);

/**************** Scale ****************/

extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeScale_space_RELATIVE = 0,
	CompositorNodeScale_space_ABSOLUTE = 1,
	CompositorNodeScale_space_SCENE_SIZE = 2,
	CompositorNodeScale_space_RENDER_SIZE = 3,
};

int CompositorNodeScale_space_get(PointerRNA *ptr);

/**************** Separate HSVA ****************/

extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Separate RGBA ****************/

extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Separate YCCA ****************/

extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeSepYCCA_mode_ITUBT601 = 0,
	CompositorNodeSepYCCA_mode_ITUBT709 = 1,
	CompositorNodeSepYCCA_mode_JFIF = 2,
};

int CompositorNodeSepYCCA_mode_get(PointerRNA *ptr);

/**************** Separate YUVA ****************/

extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Set Alpha ****************/

extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Split Viewer ****************/

extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

enum {
	CompositorNodeSplitViewer_axis_X = 0,
	CompositorNodeSplitViewer_axis_Y = 1,
};

int CompositorNodeSplitViewer_axis_get(PointerRNA *ptr);

int CompositorNodeSplitViewer_factor_get(PointerRNA *ptr);

/**************** Texture ****************/

extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeTexture_node_output_get(PointerRNA *ptr);

PointerRNA CompositorNodeTexture_texture_get(PointerRNA *ptr);

/**************** Time ****************/

extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

PointerRNA CompositorNodeTime_curve_get(PointerRNA *ptr);

int CompositorNodeTime_frame_end_get(PointerRNA *ptr);

int CompositorNodeTime_frame_start_get(PointerRNA *ptr);

/**************** Tonemap ****************/

extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeTonemap_adaptation_get(PointerRNA *ptr);

float CompositorNodeTonemap_correction_get(PointerRNA *ptr);

float CompositorNodeTonemap_contrast_get(PointerRNA *ptr);

float CompositorNodeTonemap_gamma_get(PointerRNA *ptr);

float CompositorNodeTonemap_intensity_get(PointerRNA *ptr);

float CompositorNodeTonemap_key_get(PointerRNA *ptr);

float CompositorNodeTonemap_offset_get(PointerRNA *ptr);

enum {
	CompositorNodeTonemap_tonemap_type_RD_PHOTORECEPTOR = 1,
	CompositorNodeTonemap_tonemap_type_RH_SIMPLE = 0,
};

int CompositorNodeTonemap_tonemap_type_get(PointerRNA *ptr);

/**************** Translate ****************/

extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Compositor Node Tree ****************/

extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_ID;

void CompositorNodeTree_nodes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void CompositorNodeTree_nodes_next(CollectionPropertyIterator *iter);
void CompositorNodeTree_nodes_end(CollectionPropertyIterator *iter);

/**************** Val to RGB ****************/

extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

PointerRNA CompositorNodeValToRGB_color_ramp_get(PointerRNA *ptr);

/**************** Value ****************/

extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Vector Blur ****************/

extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

float CompositorNodeVecBlur_factor_get(PointerRNA *ptr);

int CompositorNodeVecBlur_use_curved_get(PointerRNA *ptr);

int CompositorNodeVecBlur_speed_max_get(PointerRNA *ptr);

int CompositorNodeVecBlur_speed_min_get(PointerRNA *ptr);

int CompositorNodeVecBlur_samples_get(PointerRNA *ptr);

/**************** Viewer ****************/

extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

/**************** Z Combine ****************/

extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_Node;

int CompositorNodeZcombine_use_alpha_get(PointerRNA *ptr);

/**************** Compositor Nodes ****************/

extern StructRNA RNA_CompositorNodes;

PointerRNA CompositorNodes_rna_type_get(PointerRNA *ptr);

/**************** Console Input ****************/

extern StructRNA RNA_ConsoleLine;

PointerRNA ConsoleLine_rna_type_get(PointerRNA *ptr);

void ConsoleLine_body_get(PointerRNA *ptr, char *value);
int ConsoleLine_body_length(PointerRNA *ptr);

int ConsoleLine_current_character_get(PointerRNA *ptr);

/**************** Constraint ****************/

extern StructRNA RNA_Constraint;

PointerRNA Constraint_rna_type_get(PointerRNA *ptr);

#define Constraint_name_MAX 30

void Constraint_name_get(PointerRNA *ptr, char *value);
int Constraint_name_length(PointerRNA *ptr);

int Constraint_active_get(PointerRNA *ptr);

int Constraint_mute_get(PointerRNA *ptr);

int Constraint_is_valid_get(PointerRNA *ptr);

int Constraint_show_expanded_get(PointerRNA *ptr);

float Constraint_influence_get(PointerRNA *ptr);

float Constraint_error_location_get(PointerRNA *ptr);

enum {
	Constraint_owner_space_WORLD = 0,
	Constraint_owner_space_POSE = 2,
	Constraint_owner_space_LOCAL_WITH_PARENT = 3,
	Constraint_owner_space_LOCAL = 1,
};

int Constraint_owner_space_get(PointerRNA *ptr);

int Constraint_is_proxy_local_get(PointerRNA *ptr);

float Constraint_error_rotation_get(PointerRNA *ptr);

enum {
	Constraint_target_space_WORLD = 0,
	Constraint_target_space_POSE = 2,
	Constraint_target_space_LOCAL_WITH_PARENT = 3,
	Constraint_target_space_LOCAL = 1,
};

int Constraint_target_space_get(PointerRNA *ptr);

enum {
	Constraint_type_COPY_LOCATION = 9,
	Constraint_type_COPY_ROTATION = 8,
	Constraint_type_COPY_SCALE = 10,
	Constraint_type_COPY_TRANSFORMS = 23,
	Constraint_type_LIMIT_DISTANCE = 14,
	Constraint_type_LIMIT_LOCATION = 6,
	Constraint_type_LIMIT_ROTATION = 5,
	Constraint_type_LIMIT_SCALE = 7,
	Constraint_type_MAINTAIN_VOLUME = 24,
	Constraint_type_TRANSFORM = 19,
	Constraint_type_CLAMP_TO = 18,
	Constraint_type_DAMPED_TRACK = 21,
	Constraint_type_IK = 3,
	Constraint_type_LOCKED_TRACK = 13,
	Constraint_type_SPLINE_IK = 22,
	Constraint_type_STRETCH_TO = 15,
	Constraint_type_TRACK_TO = 2,
	Constraint_type_ACTION = 12,
	Constraint_type_CHILD_OF = 1,
	Constraint_type_FLOOR = 16,
	Constraint_type_FOLLOW_PATH = 4,
	Constraint_type_PIVOT = 25,
	Constraint_type_RIGID_BODY_JOINT = 17,
	Constraint_type_SCRIPT = 11,
	Constraint_type_SHRINKWRAP = 20,
};

int Constraint_type_get(PointerRNA *ptr);

/**************** Constraint Actuator ****************/

extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_Actuator;

enum {
	ConstraintActuator_mode_LOC = 0,
	ConstraintActuator_mode_DIST = 1,
	ConstraintActuator_mode_ORI = 2,
	ConstraintActuator_mode_FH = 3,
};

int ConstraintActuator_mode_get(PointerRNA *ptr);

int ConstraintActuator_damping_get(PointerRNA *ptr);

float ConstraintActuator_fh_damping_get(PointerRNA *ptr);

enum {
	ConstraintActuator_direction_NONE = 0,
	ConstraintActuator_direction_DIRPX = 1,
	ConstraintActuator_direction_DIRPY = 2,
	ConstraintActuator_direction_DIRPZ = 4,
	ConstraintActuator_direction_DIRNX = 8,
	ConstraintActuator_direction_DIRNY = 16,
	ConstraintActuator_direction_DIRNZ = 32,
};

int ConstraintActuator_direction_get(PointerRNA *ptr);

enum {
	ConstraintActuator_direction_axis_NONE = 0,
	ConstraintActuator_direction_axis_DIRPX = 1,
	ConstraintActuator_direction_axis_DIRPY = 2,
	ConstraintActuator_direction_axis_DIRPZ = 4,
	ConstraintActuator_direction_axis_DIRNX = 8,
	ConstraintActuator_direction_axis_DIRNY = 16,
	ConstraintActuator_direction_axis_DIRNZ = 32,
};

int ConstraintActuator_direction_axis_get(PointerRNA *ptr);

enum {
	ConstraintActuator_direction_axis_pos_NONE = 0,
	ConstraintActuator_direction_axis_pos_DIRPX = 1,
	ConstraintActuator_direction_axis_pos_DIRPY = 2,
	ConstraintActuator_direction_axis_pos_DIRPZ = 4,
};

int ConstraintActuator_direction_axis_pos_get(PointerRNA *ptr);

float ConstraintActuator_distance_get(PointerRNA *ptr);

float ConstraintActuator_fh_height_get(PointerRNA *ptr);

float ConstraintActuator_spring_get(PointerRNA *ptr);

int ConstraintActuator_use_force_distance_get(PointerRNA *ptr);

int ConstraintActuator_use_local_get(PointerRNA *ptr);

enum {
	ConstraintActuator_limit_NONE = 0,
	ConstraintActuator_limit_LOCX = 1,
	ConstraintActuator_limit_LOCY = 2,
	ConstraintActuator_limit_LOCZ = 4,
};

int ConstraintActuator_limit_get(PointerRNA *ptr);

int ConstraintActuator_use_material_detect_get(PointerRNA *ptr);

#define ConstraintActuator_material_MAX 32

void ConstraintActuator_material_get(PointerRNA *ptr, char *value);
int ConstraintActuator_material_length(PointerRNA *ptr);

float ConstraintActuator_limit_max_get(PointerRNA *ptr);

float ConstraintActuator_angle_max_get(PointerRNA *ptr);

float ConstraintActuator_limit_min_get(PointerRNA *ptr);

float ConstraintActuator_angle_min_get(PointerRNA *ptr);

int ConstraintActuator_use_normal_get(PointerRNA *ptr);

int ConstraintActuator_use_fh_normal_get(PointerRNA *ptr);

int ConstraintActuator_use_persistent_get(PointerRNA *ptr);

#define ConstraintActuator_property_MAX 32

void ConstraintActuator_property_get(PointerRNA *ptr, char *value);
int ConstraintActuator_property_length(PointerRNA *ptr);

float ConstraintActuator_range_get(PointerRNA *ptr);

void ConstraintActuator_rotation_max_get(PointerRNA *ptr, float values[3]);

int ConstraintActuator_use_fh_paralel_axis_get(PointerRNA *ptr);

int ConstraintActuator_damping_rotation_get(PointerRNA *ptr);

int ConstraintActuator_time_get(PointerRNA *ptr);

/**************** Constraint Target ****************/

extern StructRNA RNA_ConstraintTarget;

PointerRNA ConstraintTarget_rna_type_get(PointerRNA *ptr);

#define ConstraintTarget_subtarget_MAX 32

void ConstraintTarget_subtarget_get(PointerRNA *ptr, char *value);
int ConstraintTarget_subtarget_length(PointerRNA *ptr);

PointerRNA ConstraintTarget_target_get(PointerRNA *ptr);

/**************** Context ****************/

extern StructRNA RNA_Context;

PointerRNA Context_rna_type_get(PointerRNA *ptr);

PointerRNA Context_area_get(PointerRNA *ptr);

PointerRNA Context_blend_data_get(PointerRNA *ptr);

enum {
	Context_mode_EDIT_MESH = 0,
	Context_mode_EDIT_CURVE = 1,
	Context_mode_EDIT_SURFACE = 2,
	Context_mode_EDIT_TEXT = 3,
	Context_mode_EDIT_ARMATURE = 4,
	Context_mode_EDIT_METABALL = 5,
	Context_mode_EDIT_LATTICE = 6,
	Context_mode_POSE = 7,
	Context_mode_SCULPT = 8,
	Context_mode_PAINT_WEIGHT = 9,
	Context_mode_PAINT_VERTEX = 10,
	Context_mode_PAINT_TEXTURE = 11,
	Context_mode_PARTICLE = 12,
	Context_mode_OBJECT = 13,
};

int Context_mode_get(PointerRNA *ptr);

PointerRNA Context_region_get(PointerRNA *ptr);

PointerRNA Context_region_data_get(PointerRNA *ptr);

PointerRNA Context_scene_get(PointerRNA *ptr);

PointerRNA Context_screen_get(PointerRNA *ptr);

PointerRNA Context_space_data_get(PointerRNA *ptr);

PointerRNA Context_tool_settings_get(PointerRNA *ptr);

PointerRNA Context_user_preferences_get(PointerRNA *ptr);

PointerRNA Context_window_get(PointerRNA *ptr);

PointerRNA Context_window_manager_get(PointerRNA *ptr);

/**************** Control Fluid Simulation Settings ****************/

extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_FluidSettings;

float ControlFluidSettings_attraction_radius_get(PointerRNA *ptr);

float ControlFluidSettings_attraction_strength_get(PointerRNA *ptr);

int ControlFluidSettings_use_get(PointerRNA *ptr);

float ControlFluidSettings_end_time_get(PointerRNA *ptr);

float ControlFluidSettings_quality_get(PointerRNA *ptr);

int ControlFluidSettings_use_reverse_frames_get(PointerRNA *ptr);

float ControlFluidSettings_start_time_get(PointerRNA *ptr);

float ControlFluidSettings_velocity_radius_get(PointerRNA *ptr);

float ControlFluidSettings_velocity_strength_get(PointerRNA *ptr);

/**************** Controller ****************/

extern StructRNA RNA_Controller;

PointerRNA Controller_rna_type_get(PointerRNA *ptr);

#define Controller_name_MAX 32

void Controller_name_get(PointerRNA *ptr, char *value);
int Controller_name_length(PointerRNA *ptr);

int Controller_states_get(PointerRNA *ptr);

int Controller_show_expanded_get(PointerRNA *ptr);

int Controller_use_priority_get(PointerRNA *ptr);

enum {
	Controller_type_LOGIC_AND = 0,
	Controller_type_LOGIC_OR = 1,
	Controller_type_LOGIC_NAND = 4,
	Controller_type_LOGIC_NOR = 5,
	Controller_type_LOGIC_XOR = 6,
	Controller_type_LOGIC_XNOR = 7,
	Controller_type_EXPRESSION = 2,
	Controller_type_PYTHON = 3,
};

int Controller_type_get(PointerRNA *ptr);

/**************** Copy Location Constraint ****************/

extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_Constraint;

int CopyLocationConstraint_use_x_get(PointerRNA *ptr);

int CopyLocationConstraint_use_y_get(PointerRNA *ptr);

int CopyLocationConstraint_use_z_get(PointerRNA *ptr);

float CopyLocationConstraint_head_tail_get(PointerRNA *ptr);

int CopyLocationConstraint_invert_x_get(PointerRNA *ptr);

int CopyLocationConstraint_invert_y_get(PointerRNA *ptr);

int CopyLocationConstraint_invert_z_get(PointerRNA *ptr);

int CopyLocationConstraint_use_offset_get(PointerRNA *ptr);

#define CopyLocationConstraint_subtarget_MAX 32

void CopyLocationConstraint_subtarget_get(PointerRNA *ptr, char *value);
int CopyLocationConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA CopyLocationConstraint_target_get(PointerRNA *ptr);

/**************** Copy Rotation Constraint ****************/

extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_Constraint;

int CopyRotationConstraint_use_x_get(PointerRNA *ptr);

int CopyRotationConstraint_use_y_get(PointerRNA *ptr);

int CopyRotationConstraint_use_z_get(PointerRNA *ptr);

int CopyRotationConstraint_invert_x_get(PointerRNA *ptr);

int CopyRotationConstraint_invert_y_get(PointerRNA *ptr);

int CopyRotationConstraint_invert_z_get(PointerRNA *ptr);

int CopyRotationConstraint_use_offset_get(PointerRNA *ptr);

#define CopyRotationConstraint_subtarget_MAX 32

void CopyRotationConstraint_subtarget_get(PointerRNA *ptr, char *value);
int CopyRotationConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA CopyRotationConstraint_target_get(PointerRNA *ptr);

/**************** Copy Scale Constraint ****************/

extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_Constraint;

int CopyScaleConstraint_use_x_get(PointerRNA *ptr);

int CopyScaleConstraint_use_y_get(PointerRNA *ptr);

int CopyScaleConstraint_use_z_get(PointerRNA *ptr);

int CopyScaleConstraint_use_offset_get(PointerRNA *ptr);

#define CopyScaleConstraint_subtarget_MAX 32

void CopyScaleConstraint_subtarget_get(PointerRNA *ptr, char *value);
int CopyScaleConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA CopyScaleConstraint_target_get(PointerRNA *ptr);

/**************** Copy Transforms Constraint ****************/

extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_Constraint;

float CopyTransformsConstraint_head_tail_get(PointerRNA *ptr);

#define CopyTransformsConstraint_subtarget_MAX 32

void CopyTransformsConstraint_subtarget_get(PointerRNA *ptr, char *value);
int CopyTransformsConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA CopyTransformsConstraint_target_get(PointerRNA *ptr);

/**************** Curve ****************/

extern StructRNA RNA_Curve;
extern StructRNA RNA_ID;

PointerRNA Curve_animation_data_get(PointerRNA *ptr);

int Curve_use_auto_texspace_get(PointerRNA *ptr);

int Curve_use_fill_back_get(PointerRNA *ptr);

float Curve_bevel_depth_get(PointerRNA *ptr);

PointerRNA Curve_bevel_object_get(PointerRNA *ptr);

int Curve_bevel_resolution_get(PointerRNA *ptr);

int Curve_use_deform_bounds_get(PointerRNA *ptr);

enum {
	Curve_dimensions_2D = 0,
	Curve_dimensions_3D = 1,
};

int Curve_dimensions_get(PointerRNA *ptr);

int Curve_show_handles_get(PointerRNA *ptr);

int Curve_show_normal_face_get(PointerRNA *ptr);

float Curve_eval_time_get(PointerRNA *ptr);

float Curve_extrude_get(PointerRNA *ptr);

int Curve_use_fill_deform_get(PointerRNA *ptr);

int Curve_use_path_follow_get(PointerRNA *ptr);

int Curve_use_fill_front_get(PointerRNA *ptr);

void Curve_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Curve_materials_next(CollectionPropertyIterator *iter);
void Curve_materials_end(CollectionPropertyIterator *iter);

float Curve_offset_get(PointerRNA *ptr);

int Curve_use_time_offset_get(PointerRNA *ptr);

int Curve_use_path_get(PointerRNA *ptr);

int Curve_path_duration_get(PointerRNA *ptr);

int Curve_use_radius_get(PointerRNA *ptr);

int Curve_render_resolution_u_get(PointerRNA *ptr);

int Curve_render_resolution_v_get(PointerRNA *ptr);

int Curve_resolution_u_get(PointerRNA *ptr);

int Curve_resolution_v_get(PointerRNA *ptr);

PointerRNA Curve_shape_keys_get(PointerRNA *ptr);

void Curve_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Curve_splines_next(CollectionPropertyIterator *iter);
void Curve_splines_end(CollectionPropertyIterator *iter);

int Curve_use_stretch_get(PointerRNA *ptr);

PointerRNA Curve_taper_object_get(PointerRNA *ptr);

void Curve_texspace_location_get(PointerRNA *ptr, float values[3]);

void Curve_texspace_size_get(PointerRNA *ptr, float values[3]);

enum {
	Curve_twist_mode_Z_UP = 0,
	Curve_twist_mode_MINIMUM = 3,
	Curve_twist_mode_TANGENT = 4,
};

int Curve_twist_mode_get(PointerRNA *ptr);

float Curve_twist_smooth_get(PointerRNA *ptr);

int Curve_use_uv_as_generated_get(PointerRNA *ptr);

/**************** CurveMap ****************/

extern StructRNA RNA_CurveMap;

PointerRNA CurveMap_rna_type_get(PointerRNA *ptr);

enum {
	CurveMap_extend_HORIZONTAL = 0,
	CurveMap_extend_EXTRAPOLATED = 1,
};

int CurveMap_extend_get(PointerRNA *ptr);

void CurveMap_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void CurveMap_points_next(CollectionPropertyIterator *iter);
void CurveMap_points_end(CollectionPropertyIterator *iter);

/**************** CurveMapPoint ****************/

extern StructRNA RNA_CurveMapPoint;

PointerRNA CurveMapPoint_rna_type_get(PointerRNA *ptr);

enum {
	CurveMapPoint_handle_type_AUTO = 0,
	CurveMapPoint_handle_type_VECTOR = 2,
};

int CurveMapPoint_handle_type_get(PointerRNA *ptr);

void CurveMapPoint_location_get(PointerRNA *ptr, float values[2]);

int CurveMapPoint_select_get(PointerRNA *ptr);

/**************** CurveMapping ****************/

extern StructRNA RNA_CurveMapping;

PointerRNA CurveMapping_rna_type_get(PointerRNA *ptr);

void CurveMapping_black_level_get(PointerRNA *ptr, float values[3]);

int CurveMapping_use_clip_get(PointerRNA *ptr);

float CurveMapping_clip_max_x_get(PointerRNA *ptr);

float CurveMapping_clip_max_y_get(PointerRNA *ptr);

float CurveMapping_clip_min_x_get(PointerRNA *ptr);

float CurveMapping_clip_min_y_get(PointerRNA *ptr);

void CurveMapping_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void CurveMapping_curves_next(CollectionPropertyIterator *iter);
void CurveMapping_curves_end(CollectionPropertyIterator *iter);

void CurveMapping_white_level_get(PointerRNA *ptr, float values[3]);

/**************** Curve Modifier ****************/

extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_Modifier;

enum {
	CurveModifier_deform_axis_POS_X = 1,
	CurveModifier_deform_axis_POS_Y = 2,
	CurveModifier_deform_axis_POS_Z = 3,
	CurveModifier_deform_axis_NEG_X = 4,
	CurveModifier_deform_axis_NEG_Y = 5,
	CurveModifier_deform_axis_NEG_Z = 6,
};

int CurveModifier_deform_axis_get(PointerRNA *ptr);

PointerRNA CurveModifier_object_get(PointerRNA *ptr);

#define CurveModifier_vertex_group_MAX 32

void CurveModifier_vertex_group_get(PointerRNA *ptr, char *value);
int CurveModifier_vertex_group_length(PointerRNA *ptr);

/**************** Curve Splines ****************/

extern StructRNA RNA_CurveSplines;

PointerRNA CurveSplines_rna_type_get(PointerRNA *ptr);

PointerRNA CurveSplines_active_get(PointerRNA *ptr);

/**************** Damped Track Constraint ****************/

extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_Constraint;

#define DampedTrackConstraint_subtarget_MAX 32

void DampedTrackConstraint_subtarget_get(PointerRNA *ptr, char *value);
int DampedTrackConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA DampedTrackConstraint_target_get(PointerRNA *ptr);

enum {
	DampedTrackConstraint_track_axis_TRACK_X = 0,
	DampedTrackConstraint_track_axis_TRACK_Y = 1,
	DampedTrackConstraint_track_axis_TRACK_Z = 2,
	DampedTrackConstraint_track_axis_TRACK_NEGATIVE_X = 3,
	DampedTrackConstraint_track_axis_TRACK_NEGATIVE_Y = 4,
	DampedTrackConstraint_track_axis_TRACK_NEGATIVE_Z = 5,
};

int DampedTrackConstraint_track_axis_get(PointerRNA *ptr);

/**************** Decimate Modifier ****************/

extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_Modifier;

int DecimateModifier_face_count_get(PointerRNA *ptr);

float DecimateModifier_ratio_get(PointerRNA *ptr);

/**************** Delay Sensor ****************/

extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_Sensor;

int DelaySensor_delay_get(PointerRNA *ptr);

int DelaySensor_duration_get(PointerRNA *ptr);

int DelaySensor_use_repeat_get(PointerRNA *ptr);

/**************** Displace Modifier ****************/

extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_Modifier;

enum {
	DisplaceModifier_direction_X = 0,
	DisplaceModifier_direction_Y = 1,
	DisplaceModifier_direction_Z = 2,
	DisplaceModifier_direction_NORMAL = 3,
	DisplaceModifier_direction_RGB_TO_XYZ = 4,
};

int DisplaceModifier_direction_get(PointerRNA *ptr);

float DisplaceModifier_mid_level_get(PointerRNA *ptr);

float DisplaceModifier_strength_get(PointerRNA *ptr);

PointerRNA DisplaceModifier_texture_get(PointerRNA *ptr);

PointerRNA DisplaceModifier_texture_coordinate_object_get(PointerRNA *ptr);

enum {
	DisplaceModifier_texture_coords_LOCAL = 0,
	DisplaceModifier_texture_coords_GLOBAL = 1,
	DisplaceModifier_texture_coords_OBJECT = 2,
	DisplaceModifier_texture_coords_UV = 3,
};

int DisplaceModifier_texture_coords_get(PointerRNA *ptr);

#define DisplaceModifier_uv_layer_MAX 32

void DisplaceModifier_uv_layer_get(PointerRNA *ptr, char *value);
int DisplaceModifier_uv_layer_length(PointerRNA *ptr);

#define DisplaceModifier_vertex_group_MAX 32

void DisplaceModifier_vertex_group_get(PointerRNA *ptr, char *value);
int DisplaceModifier_vertex_group_length(PointerRNA *ptr);

/**************** Distorted Noise ****************/

extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

float DistortedNoiseTexture_distortion_get(PointerRNA *ptr);

float DistortedNoiseTexture_nabla_get(PointerRNA *ptr);

enum {
	DistortedNoiseTexture_noise_basis_BLENDER_ORIGINAL = 0,
	DistortedNoiseTexture_noise_basis_ORIGINAL_PERLIN = 1,
	DistortedNoiseTexture_noise_basis_IMPROVED_PERLIN = 2,
	DistortedNoiseTexture_noise_basis_VORONOI_F1 = 3,
	DistortedNoiseTexture_noise_basis_VORONOI_F2 = 4,
	DistortedNoiseTexture_noise_basis_VORONOI_F3 = 5,
	DistortedNoiseTexture_noise_basis_VORONOI_F4 = 6,
	DistortedNoiseTexture_noise_basis_VORONOI_F2_F1 = 7,
	DistortedNoiseTexture_noise_basis_VORONOI_CRACKLE = 8,
	DistortedNoiseTexture_noise_basis_CELL_NOISE = 14,
};

int DistortedNoiseTexture_noise_basis_get(PointerRNA *ptr);

enum {
	DistortedNoiseTexture_noise_distortion_BLENDER_ORIGINAL = 0,
	DistortedNoiseTexture_noise_distortion_ORIGINAL_PERLIN = 1,
	DistortedNoiseTexture_noise_distortion_IMPROVED_PERLIN = 2,
	DistortedNoiseTexture_noise_distortion_VORONOI_F1 = 3,
	DistortedNoiseTexture_noise_distortion_VORONOI_F2 = 4,
	DistortedNoiseTexture_noise_distortion_VORONOI_F3 = 5,
	DistortedNoiseTexture_noise_distortion_VORONOI_F4 = 6,
	DistortedNoiseTexture_noise_distortion_VORONOI_F2_F1 = 7,
	DistortedNoiseTexture_noise_distortion_VORONOI_CRACKLE = 8,
	DistortedNoiseTexture_noise_distortion_CELL_NOISE = 14,
};

int DistortedNoiseTexture_noise_distortion_get(PointerRNA *ptr);

float DistortedNoiseTexture_noise_scale_get(PointerRNA *ptr);

/**************** Domain Fluid Simulation Settings ****************/

extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidSettings;

float DomainFluidSettings_compressibility_get(PointerRNA *ptr);

float DomainFluidSettings_end_time_get(PointerRNA *ptr);

float DomainFluidSettings_generate_particles_get(PointerRNA *ptr);

int DomainFluidSettings_use_speed_vectors_get(PointerRNA *ptr);

void DomainFluidSettings_gravity_get(PointerRNA *ptr, float values[3]);

int DomainFluidSettings_grid_levels_get(PointerRNA *ptr);

void DomainFluidSettings_memory_estimate_get(PointerRNA *ptr, char *value);
int DomainFluidSettings_memory_estimate_length(PointerRNA *ptr);

int DomainFluidSettings_use_time_override_get(PointerRNA *ptr);

float DomainFluidSettings_partial_slip_factor_get(PointerRNA *ptr);

#define DomainFluidSettings_filepath_MAX 240

void DomainFluidSettings_filepath_get(PointerRNA *ptr, char *value);
int DomainFluidSettings_filepath_length(PointerRNA *ptr);

int DomainFluidSettings_preview_resolution_get(PointerRNA *ptr);

float DomainFluidSettings_simulation_scale_get(PointerRNA *ptr);

enum {
	DomainFluidSettings_render_display_mode_GEOMETRY = 1,
	DomainFluidSettings_render_display_mode_PREVIEW = 2,
	DomainFluidSettings_render_display_mode_FINAL = 3,
};

int DomainFluidSettings_render_display_mode_get(PointerRNA *ptr);

int DomainFluidSettings_resolution_get(PointerRNA *ptr);

int DomainFluidSettings_use_reverse_frames_get(PointerRNA *ptr);

enum {
	DomainFluidSettings_slip_type_NOSLIP = 512,
	DomainFluidSettings_slip_type_PARTIALSLIP = 1024,
	DomainFluidSettings_slip_type_FREESLIP = 2048,
};

int DomainFluidSettings_slip_type_get(PointerRNA *ptr);

float DomainFluidSettings_start_time_get(PointerRNA *ptr);

float DomainFluidSettings_surface_smooth_get(PointerRNA *ptr);

int DomainFluidSettings_surface_subdivisions_get(PointerRNA *ptr);

int DomainFluidSettings_tracer_particles_get(PointerRNA *ptr);

enum {
	DomainFluidSettings_viewport_display_mode_GEOMETRY = 1,
	DomainFluidSettings_viewport_display_mode_PREVIEW = 2,
	DomainFluidSettings_viewport_display_mode_FINAL = 3,
};

int DomainFluidSettings_viewport_display_mode_get(PointerRNA *ptr);

float DomainFluidSettings_viscosity_base_get(PointerRNA *ptr);

int DomainFluidSettings_viscosity_exponent_get(PointerRNA *ptr);

enum {
	DomainFluidSettings_viscosity_preset_MANUAL = 1,
	DomainFluidSettings_viscosity_preset_WATER = 2,
	DomainFluidSettings_viscosity_preset_OIL = 3,
	DomainFluidSettings_viscosity_preset_HONEY = 4,
};

int DomainFluidSettings_viscosity_preset_get(PointerRNA *ptr);

/**************** DopeSheet ****************/

extern StructRNA RNA_DopeSheet;

PointerRNA DopeSheet_rna_type_get(PointerRNA *ptr);

int DopeSheet_show_expanded_summary_get(PointerRNA *ptr);

int DopeSheet_show_armatures_get(PointerRNA *ptr);

int DopeSheet_show_cameras_get(PointerRNA *ptr);

int DopeSheet_show_curves_get(PointerRNA *ptr);

int DopeSheet_show_hidden_get(PointerRNA *ptr);

int DopeSheet_show_lamps_get(PointerRNA *ptr);

int DopeSheet_show_lattices_get(PointerRNA *ptr);

int DopeSheet_show_materials_get(PointerRNA *ptr);

int DopeSheet_show_meshes_get(PointerRNA *ptr);

int DopeSheet_show_metaballs_get(PointerRNA *ptr);

int DopeSheet_show_nodes_get(PointerRNA *ptr);

int DopeSheet_show_particles_get(PointerRNA *ptr);

int DopeSheet_show_scenes_get(PointerRNA *ptr);

int DopeSheet_show_shapekeys_get(PointerRNA *ptr);

int DopeSheet_show_summary_get(PointerRNA *ptr);

int DopeSheet_show_textures_get(PointerRNA *ptr);

int DopeSheet_show_transforms_get(PointerRNA *ptr);

int DopeSheet_show_worlds_get(PointerRNA *ptr);

PointerRNA DopeSheet_filter_group_get(PointerRNA *ptr);

int DopeSheet_show_missing_nla_get(PointerRNA *ptr);

int DopeSheet_show_only_group_objects_get(PointerRNA *ptr);

int DopeSheet_show_only_selected_get(PointerRNA *ptr);

PointerRNA DopeSheet_source_get(PointerRNA *ptr);

/**************** Driver ****************/

extern StructRNA RNA_Driver;

PointerRNA Driver_rna_type_get(PointerRNA *ptr);

#define Driver_expression_MAX 256

void Driver_expression_get(PointerRNA *ptr, char *value);
int Driver_expression_length(PointerRNA *ptr);

int Driver_is_valid_get(PointerRNA *ptr);

int Driver_show_debug_info_get(PointerRNA *ptr);

enum {
	Driver_type_AVERAGE = 0,
	Driver_type_SUM = 2,
	Driver_type_SCRIPTED = 1,
	Driver_type_MIN = 3,
	Driver_type_MAX = 4,
};

int Driver_type_get(PointerRNA *ptr);

void Driver_variables_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Driver_variables_next(CollectionPropertyIterator *iter);
void Driver_variables_end(CollectionPropertyIterator *iter);

/**************** Driver Target ****************/

extern StructRNA RNA_DriverTarget;

PointerRNA DriverTarget_rna_type_get(PointerRNA *ptr);

#define DriverTarget_bone_target_MAX 32

void DriverTarget_bone_target_get(PointerRNA *ptr, char *value);
int DriverTarget_bone_target_length(PointerRNA *ptr);

void DriverTarget_data_path_get(PointerRNA *ptr, char *value);
int DriverTarget_data_path_length(PointerRNA *ptr);

PointerRNA DriverTarget_id_get(PointerRNA *ptr);

enum {
	DriverTarget_id_type_ACTION = 17217,
	DriverTarget_id_type_ARMATURE = 21057,
	DriverTarget_id_type_BRUSH = 21058,
	DriverTarget_id_type_CAMERA = 16707,
	DriverTarget_id_type_CURVE = 21827,
	DriverTarget_id_type_FONT = 18006,
	DriverTarget_id_type_GREASEPENCIL = 17479,
	DriverTarget_id_type_GROUP = 21063,
	DriverTarget_id_type_IMAGE = 19785,
	DriverTarget_id_type_KEY = 17739,
	DriverTarget_id_type_LAMP = 16716,
	DriverTarget_id_type_LIBRARY = 18764,
	DriverTarget_id_type_LATTICE = 21580,
	DriverTarget_id_type_MATERIAL = 16717,
	DriverTarget_id_type_META = 16973,
	DriverTarget_id_type_MESH = 17741,
	DriverTarget_id_type_NODETREE = 21582,
	DriverTarget_id_type_OBJECT = 16975,
	DriverTarget_id_type_PARTICLE = 16720,
	DriverTarget_id_type_SCENE = 17235,
	DriverTarget_id_type_SCREEN = 21075,
	DriverTarget_id_type_SOUND = 20307,
	DriverTarget_id_type_TEXT = 22612,
	DriverTarget_id_type_TEXTURE = 17748,
	DriverTarget_id_type_WORLD = 20311,
	DriverTarget_id_type_WINDOWMANAGER = 19799,
};

int DriverTarget_id_type_get(PointerRNA *ptr);

int DriverTarget_use_local_space_transform_get(PointerRNA *ptr);

enum {
	DriverTarget_transform_type_LOC_X = 0,
	DriverTarget_transform_type_LOC_Y = 1,
	DriverTarget_transform_type_LOC_Z = 2,
	DriverTarget_transform_type_ROT_X = 3,
	DriverTarget_transform_type_ROT_Y = 4,
	DriverTarget_transform_type_ROT_Z = 5,
	DriverTarget_transform_type_SCALE_X = 6,
	DriverTarget_transform_type_SCALE_Y = 7,
	DriverTarget_transform_type_SCALE_Z = 8,
};

int DriverTarget_transform_type_get(PointerRNA *ptr);

/**************** Driver Variable ****************/

extern StructRNA RNA_DriverVariable;

PointerRNA DriverVariable_rna_type_get(PointerRNA *ptr);

#define DriverVariable_name_MAX 64

void DriverVariable_name_get(PointerRNA *ptr, char *value);
int DriverVariable_name_length(PointerRNA *ptr);

void DriverVariable_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void DriverVariable_targets_next(CollectionPropertyIterator *iter);
void DriverVariable_targets_end(CollectionPropertyIterator *iter);

enum {
	DriverVariable_type_SINGLE_PROP = 0,
	DriverVariable_type_TRANSFORMS = 3,
	DriverVariable_type_ROTATION_DIFF = 1,
	DriverVariable_type_LOC_DIFF = 2,
};

int DriverVariable_type_get(PointerRNA *ptr);

/**************** Object Duplicate ****************/

extern StructRNA RNA_DupliObject;

PointerRNA DupliObject_rna_type_get(PointerRNA *ptr);

PointerRNA DupliObject_object_get(PointerRNA *ptr);

void DupliObject_matrix_get(PointerRNA *ptr, float values[16]);

void DupliObject_matrix_original_get(PointerRNA *ptr, float values[16]);

/**************** EdgeSplit Modifier ****************/

extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_Modifier;

float EdgeSplitModifier_split_angle_get(PointerRNA *ptr);

int EdgeSplitModifier_use_edge_angle_get(PointerRNA *ptr);

int EdgeSplitModifier_use_edge_sharp_get(PointerRNA *ptr);

/**************** Edit Bone ****************/

extern StructRNA RNA_EditBone;

PointerRNA EditBone_rna_type_get(PointerRNA *ptr);

void EditBone_name_get(PointerRNA *ptr, char *value);
int EditBone_name_length(PointerRNA *ptr);

float EditBone_bbone_x_get(PointerRNA *ptr);

float EditBone_bbone_z_get(PointerRNA *ptr);

float EditBone_bbone_in_get(PointerRNA *ptr);

float EditBone_bbone_out_get(PointerRNA *ptr);

int EditBone_bbone_segments_get(PointerRNA *ptr);

int EditBone_use_connect_get(PointerRNA *ptr);

int EditBone_use_cyclic_offset_get(PointerRNA *ptr);

int EditBone_use_deform_get(PointerRNA *ptr);

int EditBone_show_wire_get(PointerRNA *ptr);

void EditBone_matrix_get(PointerRNA *ptr, float values[16]);

float EditBone_envelope_distance_get(PointerRNA *ptr);

float EditBone_envelope_weight_get(PointerRNA *ptr);

float EditBone_head_radius_get(PointerRNA *ptr);

float EditBone_tail_radius_get(PointerRNA *ptr);

void EditBone_head_get(PointerRNA *ptr, float values[3]);

int EditBone_select_head_get(PointerRNA *ptr);

int EditBone_hide_get(PointerRNA *ptr);

int EditBone_use_inherit_rotation_get(PointerRNA *ptr);

int EditBone_use_inherit_scale_get(PointerRNA *ptr);

void EditBone_layers_get(PointerRNA *ptr, int values[32]);

int EditBone_use_local_location_get(PointerRNA *ptr);

int EditBone_lock_get(PointerRNA *ptr);

int EditBone_use_envelope_multiply_get(PointerRNA *ptr);

PointerRNA EditBone_parent_get(PointerRNA *ptr);

float EditBone_roll_get(PointerRNA *ptr);

int EditBone_select_get(PointerRNA *ptr);

int EditBone_hide_select_get(PointerRNA *ptr);

void EditBone_tail_get(PointerRNA *ptr, float values[3]);

int EditBone_select_tail_get(PointerRNA *ptr);

/**************** Edit Object Actuator ****************/

extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_Actuator;

int EditObjectActuator_use_3d_tracking_get(PointerRNA *ptr);

void EditObjectActuator_angular_velocity_get(PointerRNA *ptr, float values[3]);

enum {
	EditObjectActuator_dynamic_operation_RESTOREDYN = 0,
	EditObjectActuator_dynamic_operation_SUSPENDDYN = 1,
	EditObjectActuator_dynamic_operation_ENABLERIGIDBODY = 2,
	EditObjectActuator_dynamic_operation_DISABLERIGIDBODY = 3,
	EditObjectActuator_dynamic_operation_SETMASS = 4,
};

int EditObjectActuator_dynamic_operation_get(PointerRNA *ptr);

enum {
	EditObjectActuator_mode_ADDOBJECT = 0,
	EditObjectActuator_mode_ENDOBJECT = 1,
	EditObjectActuator_mode_REPLACEMESH = 2,
	EditObjectActuator_mode_TRACKTO = 3,
	EditObjectActuator_mode_DYNAMICS = 4,
};

int EditObjectActuator_mode_get(PointerRNA *ptr);

int EditObjectActuator_use_replace_display_mesh_get(PointerRNA *ptr);

int EditObjectActuator_use_local_linear_velocity_get(PointerRNA *ptr);

int EditObjectActuator_use_local_angular_velocity_get(PointerRNA *ptr);

void EditObjectActuator_linear_velocity_get(PointerRNA *ptr, float values[3]);

float EditObjectActuator_mass_get(PointerRNA *ptr);

PointerRNA EditObjectActuator_mesh_get(PointerRNA *ptr);

PointerRNA EditObjectActuator_object_get(PointerRNA *ptr);

PointerRNA EditObjectActuator_track_object_get(PointerRNA *ptr);

int EditObjectActuator_use_replace_physics_mesh_get(PointerRNA *ptr);

int EditObjectActuator_time_get(PointerRNA *ptr);

/**************** Effect Sequence ****************/

extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_Sequence;

PointerRNA EffectSequence_color_balance_get(PointerRNA *ptr);

int EffectSequence_use_float_get(PointerRNA *ptr);

PointerRNA EffectSequence_crop_get(PointerRNA *ptr);

int EffectSequence_use_deinterlace_get(PointerRNA *ptr);

int EffectSequence_use_reverse_frames_get(PointerRNA *ptr);

int EffectSequence_use_flip_x_get(PointerRNA *ptr);

int EffectSequence_use_flip_y_get(PointerRNA *ptr);

float EffectSequence_color_multiply_get(PointerRNA *ptr);

int EffectSequence_use_premultiply_get(PointerRNA *ptr);

PointerRNA EffectSequence_proxy_get(PointerRNA *ptr);

int EffectSequence_use_proxy_custom_directory_get(PointerRNA *ptr);

int EffectSequence_use_proxy_custom_file_get(PointerRNA *ptr);

float EffectSequence_color_saturation_get(PointerRNA *ptr);

float EffectSequence_strobe_get(PointerRNA *ptr);

PointerRNA EffectSequence_transform_get(PointerRNA *ptr);

int EffectSequence_use_color_balance_get(PointerRNA *ptr);

int EffectSequence_use_crop_get(PointerRNA *ptr);

int EffectSequence_use_proxy_get(PointerRNA *ptr);

int EffectSequence_use_translation_get(PointerRNA *ptr);

/**************** Effector Weights ****************/

extern StructRNA RNA_EffectorWeights;

PointerRNA EffectorWeights_rna_type_get(PointerRNA *ptr);

float EffectorWeights_all_get(PointerRNA *ptr);

float EffectorWeights_boid_get(PointerRNA *ptr);

float EffectorWeights_charge_get(PointerRNA *ptr);

float EffectorWeights_curve_guide_get(PointerRNA *ptr);

float EffectorWeights_drag_get(PointerRNA *ptr);

PointerRNA EffectorWeights_group_get(PointerRNA *ptr);

float EffectorWeights_force_get(PointerRNA *ptr);

float EffectorWeights_gravity_get(PointerRNA *ptr);

float EffectorWeights_harmonic_get(PointerRNA *ptr);

float EffectorWeights_lennardjones_get(PointerRNA *ptr);

float EffectorWeights_magnetic_get(PointerRNA *ptr);

float EffectorWeights_texture_get(PointerRNA *ptr);

float EffectorWeights_turbulence_get(PointerRNA *ptr);

int EffectorWeights_apply_to_hair_growing_get(PointerRNA *ptr);

float EffectorWeights_vortex_get(PointerRNA *ptr);

float EffectorWeights_wind_get(PointerRNA *ptr);

/**************** Enum Definition ****************/

extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_Property;

enum {
	EnumProperty_default_DUMMY = 0,
};

int EnumProperty_default_get(PointerRNA *ptr);

enum {
	EnumProperty_default_flag_DUMMY = 0,
};

int EnumProperty_default_flag_get(PointerRNA *ptr);

void EnumProperty_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void EnumProperty_items_next(CollectionPropertyIterator *iter);
void EnumProperty_items_end(CollectionPropertyIterator *iter);

/**************** Enum Item Definition ****************/

extern StructRNA RNA_EnumPropertyItem;

PointerRNA EnumPropertyItem_rna_type_get(PointerRNA *ptr);

void EnumPropertyItem_name_get(PointerRNA *ptr, char *value);
int EnumPropertyItem_name_length(PointerRNA *ptr);

void EnumPropertyItem_description_get(PointerRNA *ptr, char *value);
int EnumPropertyItem_description_length(PointerRNA *ptr);

void EnumPropertyItem_identifier_get(PointerRNA *ptr, char *value);
int EnumPropertyItem_identifier_length(PointerRNA *ptr);

int EnumPropertyItem_value_get(PointerRNA *ptr);

/**************** EnvironmentMap ****************/

extern StructRNA RNA_EnvironmentMap;

PointerRNA EnvironmentMap_rna_type_get(PointerRNA *ptr);

float EnvironmentMap_clip_end_get(PointerRNA *ptr);

float EnvironmentMap_clip_start_get(PointerRNA *ptr);

int EnvironmentMap_depth_get(PointerRNA *ptr);

void EnvironmentMap_layers_ignore_get(PointerRNA *ptr, int values[20]);

enum {
	EnvironmentMap_mapping_CUBE = 0,
	EnvironmentMap_mapping_PLANE = 1,
};

int EnvironmentMap_mapping_get(PointerRNA *ptr);

int EnvironmentMap_resolution_get(PointerRNA *ptr);

enum {
	EnvironmentMap_source_STATIC = 0,
	EnvironmentMap_source_ANIMATED = 1,
	EnvironmentMap_source_IMAGE_FILE = 2,
};

int EnvironmentMap_source_get(PointerRNA *ptr);

PointerRNA EnvironmentMap_viewpoint_object_get(PointerRNA *ptr);

float EnvironmentMap_zoom_get(PointerRNA *ptr);

/**************** Environment Map ****************/

extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

PointerRNA EnvironmentMapTexture_environment_map_get(PointerRNA *ptr);

enum {
	EnvironmentMapTexture_filter_type_BOX = 0,
	EnvironmentMapTexture_filter_type_EWA = 1,
	EnvironmentMapTexture_filter_type_FELINE = 2,
	EnvironmentMapTexture_filter_type_AREA = 3,
};

int EnvironmentMapTexture_filter_type_get(PointerRNA *ptr);

int EnvironmentMapTexture_filter_eccentricity_get(PointerRNA *ptr);

int EnvironmentMapTexture_filter_probes_get(PointerRNA *ptr);

float EnvironmentMapTexture_filter_size_get(PointerRNA *ptr);

PointerRNA EnvironmentMapTexture_image_get(PointerRNA *ptr);

PointerRNA EnvironmentMapTexture_image_user_get(PointerRNA *ptr);

int EnvironmentMapTexture_use_mipmap_get(PointerRNA *ptr);

int EnvironmentMapTexture_use_mipmap_gauss_get(PointerRNA *ptr);

int EnvironmentMapTexture_use_filter_size_min_get(PointerRNA *ptr);

/**************** Event ****************/

extern StructRNA RNA_Event;

PointerRNA Event_rna_type_get(PointerRNA *ptr);

void Event_ascii_get(PointerRNA *ptr, char *value);
int Event_ascii_length(PointerRNA *ptr);

int Event_alt_get(PointerRNA *ptr);

int Event_ctrl_get(PointerRNA *ptr);

int Event_mouse_prev_x_get(PointerRNA *ptr);

int Event_mouse_prev_y_get(PointerRNA *ptr);

int Event_mouse_x_get(PointerRNA *ptr);

int Event_mouse_region_x_get(PointerRNA *ptr);

int Event_mouse_y_get(PointerRNA *ptr);

int Event_mouse_region_y_get(PointerRNA *ptr);

int Event_oskey_get(PointerRNA *ptr);

int Event_shift_get(PointerRNA *ptr);

enum {
	Event_type_NONE = 0,
	Event_type_LEFTMOUSE = 1,
	Event_type_MIDDLEMOUSE = 2,
	Event_type_RIGHTMOUSE = 3,
	Event_type_BUTTON4MOUSE = 7,
	Event_type_BUTTON5MOUSE = 8,
	Event_type_ACTIONMOUSE = 5,
	Event_type_SELECTMOUSE = 6,
	Event_type_MOUSEMOVE = 4,
	Event_type_INBETWEEN_MOUSEMOVE = 17,
	Event_type_TRACKPADPAN = 14,
	Event_type_TRACKPADZOOM = 15,
	Event_type_MOUSEROTATE = 16,
	Event_type_WHEELUPMOUSE = 10,
	Event_type_WHEELDOWNMOUSE = 11,
	Event_type_WHEELINMOUSE = 12,
	Event_type_WHEELOUTMOUSE = 13,
	Event_type_EVT_TWEAK_L = 20482,
	Event_type_EVT_TWEAK_M = 20483,
	Event_type_EVT_TWEAK_R = 20484,
	Event_type_EVT_TWEAK_A = 20485,
	Event_type_EVT_TWEAK_S = 20486,
	Event_type_A = 97,
	Event_type_B = 98,
	Event_type_C = 99,
	Event_type_D = 100,
	Event_type_E = 101,
	Event_type_F = 102,
	Event_type_G = 103,
	Event_type_H = 104,
	Event_type_I = 105,
	Event_type_J = 106,
	Event_type_K = 107,
	Event_type_L = 108,
	Event_type_M = 109,
	Event_type_N = 110,
	Event_type_O = 111,
	Event_type_P = 112,
	Event_type_Q = 113,
	Event_type_R = 114,
	Event_type_S = 115,
	Event_type_T = 116,
	Event_type_U = 117,
	Event_type_V = 118,
	Event_type_W = 119,
	Event_type_X = 120,
	Event_type_Y = 121,
	Event_type_Z = 122,
	Event_type_ZERO = 48,
	Event_type_ONE = 49,
	Event_type_TWO = 50,
	Event_type_THREE = 51,
	Event_type_FOUR = 52,
	Event_type_FIVE = 53,
	Event_type_SIX = 54,
	Event_type_SEVEN = 55,
	Event_type_EIGHT = 56,
	Event_type_NINE = 57,
	Event_type_LEFT_CTRL = 212,
	Event_type_LEFT_ALT = 213,
	Event_type_LEFT_SHIFT = 217,
	Event_type_RIGHT_ALT = 214,
	Event_type_RIGHT_CTRL = 215,
	Event_type_RIGHT_SHIFT = 216,
	Event_type_OSKEY = 172,
	Event_type_GRLESS = 173,
	Event_type_ESC = 218,
	Event_type_TAB = 219,
	Event_type_RET = 220,
	Event_type_SPACE = 221,
	Event_type_LINE_FEED = 222,
	Event_type_BACK_SPACE = 223,
	Event_type_DEL = 224,
	Event_type_SEMI_COLON = 225,
	Event_type_PERIOD = 226,
	Event_type_COMMA = 227,
	Event_type_QUOTE = 228,
	Event_type_ACCENT_GRAVE = 229,
	Event_type_MINUS = 230,
	Event_type_SLASH = 232,
	Event_type_BACK_SLASH = 233,
	Event_type_EQUAL = 234,
	Event_type_LEFT_BRACKET = 235,
	Event_type_RIGHT_BRACKET = 236,
	Event_type_LEFT_ARROW = 137,
	Event_type_DOWN_ARROW = 138,
	Event_type_RIGHT_ARROW = 139,
	Event_type_UP_ARROW = 140,
	Event_type_NUMPAD_2 = 152,
	Event_type_NUMPAD_4 = 154,
	Event_type_NUMPAD_6 = 156,
	Event_type_NUMPAD_8 = 158,
	Event_type_NUMPAD_1 = 151,
	Event_type_NUMPAD_3 = 153,
	Event_type_NUMPAD_5 = 155,
	Event_type_NUMPAD_7 = 157,
	Event_type_NUMPAD_9 = 159,
	Event_type_NUMPAD_PERIOD = 199,
	Event_type_NUMPAD_SLASH = 161,
	Event_type_NUMPAD_ASTERIX = 160,
	Event_type_NUMPAD_0 = 150,
	Event_type_NUMPAD_MINUS = 162,
	Event_type_NUMPAD_ENTER = 163,
	Event_type_NUMPAD_PLUS = 164,
	Event_type_F1 = 300,
	Event_type_F2 = 301,
	Event_type_F3 = 302,
	Event_type_F4 = 303,
	Event_type_F5 = 304,
	Event_type_F6 = 305,
	Event_type_F7 = 306,
	Event_type_F8 = 307,
	Event_type_F9 = 308,
	Event_type_F10 = 309,
	Event_type_F11 = 310,
	Event_type_F12 = 311,
	Event_type_F13 = 312,
	Event_type_F14 = 313,
	Event_type_F15 = 314,
	Event_type_F16 = 315,
	Event_type_F17 = 316,
	Event_type_F18 = 317,
	Event_type_F19 = 318,
	Event_type_PAUSE = 165,
	Event_type_INSERT = 166,
	Event_type_HOME = 167,
	Event_type_PAGE_UP = 168,
	Event_type_PAGE_DOWN = 169,
	Event_type_END = 170,
	Event_type_WINDOW_DEACTIVATE = 260,
	Event_type_TIMER = 272,
	Event_type_TIMER0 = 273,
	Event_type_TIMER1 = 274,
	Event_type_TIMER2 = 275,
};

int Event_type_get(PointerRNA *ptr);

enum {
	Event_value_ANY = -1,
	Event_value_NOTHING = 0,
	Event_value_PRESS = 1,
	Event_value_RELEASE = 2,
	Event_value_CLICK = 3,
	Event_value_DOUBLE_CLICK = 4,
};

int Event_value_get(PointerRNA *ptr);

/**************** Explode Modifier ****************/

extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_Modifier;

int ExplodeModifier_show_alive_get(PointerRNA *ptr);

int ExplodeModifier_show_dead_get(PointerRNA *ptr);

float ExplodeModifier_protect_get(PointerRNA *ptr);

int ExplodeModifier_use_size_get(PointerRNA *ptr);

int ExplodeModifier_use_edge_split_get(PointerRNA *ptr);

int ExplodeModifier_show_unborn_get(PointerRNA *ptr);

void ExplodeModifier_vertex_group_get(PointerRNA *ptr, char *value);
int ExplodeModifier_vertex_group_length(PointerRNA *ptr);

/**************** Expression Controller ****************/

extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_Controller;

#define ExpressionController_expression_MAX 128

void ExpressionController_expression_get(PointerRNA *ptr, char *value);
int ExpressionController_expression_length(PointerRNA *ptr);

/**************** F-Curve ****************/

extern StructRNA RNA_FCurve;

PointerRNA FCurve_rna_type_get(PointerRNA *ptr);

int FCurve_use_auto_handle_clamp_get(PointerRNA *ptr);

void FCurve_color_get(PointerRNA *ptr, float values[3]);

enum {
	FCurve_color_mode_AUTO_RAINBOW = 0,
	FCurve_color_mode_AUTO_RGB = 1,
	FCurve_color_mode_CUSTOM = 2,
};

int FCurve_color_mode_get(PointerRNA *ptr);

void FCurve_data_path_get(PointerRNA *ptr, char *value);
int FCurve_data_path_length(PointerRNA *ptr);

PointerRNA FCurve_driver_get(PointerRNA *ptr);

enum {
	FCurve_extrapolation_CONSTANT = 0,
	FCurve_extrapolation_LINEAR = 1,
};

int FCurve_extrapolation_get(PointerRNA *ptr);

PointerRNA FCurve_group_get(PointerRNA *ptr);

int FCurve_hide_get(PointerRNA *ptr);

void FCurve_keyframe_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void FCurve_keyframe_points_next(CollectionPropertyIterator *iter);
void FCurve_keyframe_points_end(CollectionPropertyIterator *iter);

int FCurve_lock_get(PointerRNA *ptr);

void FCurve_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void FCurve_modifiers_next(CollectionPropertyIterator *iter);
void FCurve_modifiers_end(CollectionPropertyIterator *iter);

int FCurve_mute_get(PointerRNA *ptr);

int FCurve_array_index_get(PointerRNA *ptr);

void FCurve_sampled_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void FCurve_sampled_points_next(CollectionPropertyIterator *iter);
void FCurve_sampled_points_end(CollectionPropertyIterator *iter);

int FCurve_select_get(PointerRNA *ptr);

int FCurve_is_valid_get(PointerRNA *ptr);

/**************** F-Curve Actuator ****************/

extern StructRNA RNA_FCurveActuator;
extern StructRNA RNA_Actuator;

int FCurveActuator_use_additive_get(PointerRNA *ptr);

int FCurveActuator_apply_to_children_get(PointerRNA *ptr);

float FCurveActuator_frame_end_get(PointerRNA *ptr);

enum {
	FCurveActuator_play_type_PLAY = 0,
	FCurveActuator_play_type_PINGPONG = 1,
	FCurveActuator_play_type_FLIPPER = 2,
	FCurveActuator_play_type_STOP = 3,
	FCurveActuator_play_type_END = 4,
	FCurveActuator_play_type_PROP = 6,
};

int FCurveActuator_play_type_get(PointerRNA *ptr);

int FCurveActuator_use_force_get(PointerRNA *ptr);

#define FCurveActuator_frame_property_MAX 32

void FCurveActuator_frame_property_get(PointerRNA *ptr, char *value);
int FCurveActuator_frame_property_length(PointerRNA *ptr);

int FCurveActuator_use_local_get(PointerRNA *ptr);

#define FCurveActuator_property_MAX 32

void FCurveActuator_property_get(PointerRNA *ptr, char *value);
int FCurveActuator_property_length(PointerRNA *ptr);

float FCurveActuator_frame_start_get(PointerRNA *ptr);

/**************** Keyframe Points ****************/

extern StructRNA RNA_FCurveKeyframePoints;

PointerRNA FCurveKeyframePoints_rna_type_get(PointerRNA *ptr);

/**************** F-Curve Modifiers ****************/

extern StructRNA RNA_FCurveModifiers;

PointerRNA FCurveModifiers_rna_type_get(PointerRNA *ptr);

PointerRNA FCurveModifiers_active_get(PointerRNA *ptr);

/**************** F-Curve Sample ****************/

extern StructRNA RNA_FCurveSample;

PointerRNA FCurveSample_rna_type_get(PointerRNA *ptr);

void FCurveSample_co_get(PointerRNA *ptr, float values[2]);

int FCurveSample_select_get(PointerRNA *ptr);

/**************** F-Modifier ****************/

extern StructRNA RNA_FModifier;

PointerRNA FModifier_rna_type_get(PointerRNA *ptr);

int FModifier_active_get(PointerRNA *ptr);

int FModifier_is_valid_get(PointerRNA *ptr);

int FModifier_show_expanded_get(PointerRNA *ptr);

int FModifier_mute_get(PointerRNA *ptr);

enum {
	FModifier_type_NULL = 0,
	FModifier_type_GENERATOR = 1,
	FModifier_type_FNGENERATOR = 2,
	FModifier_type_ENVELOPE = 3,
	FModifier_type_CYCLES = 4,
	FModifier_type_NOISE = 5,
	FModifier_type_FILTER = 6,
	FModifier_type_LIMITS = 8,
	FModifier_type_STEPPED = 9,
};

int FModifier_type_get(PointerRNA *ptr);

/**************** Cycles F-Modifier ****************/

extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifier;

int FModifierCycles_cycles_after_get(PointerRNA *ptr);

enum {
	FModifierCycles_mode_after_NONE = 0,
	FModifierCycles_mode_after_REPEAT = 1,
	FModifierCycles_mode_after_REPEAT_OFFSET = 2,
	FModifierCycles_mode_after_MIRROR = 3,
};

int FModifierCycles_mode_after_get(PointerRNA *ptr);

int FModifierCycles_cycles_before_get(PointerRNA *ptr);

enum {
	FModifierCycles_mode_before_NONE = 0,
	FModifierCycles_mode_before_REPEAT = 1,
	FModifierCycles_mode_before_REPEAT_OFFSET = 2,
	FModifierCycles_mode_before_MIRROR = 3,
};

int FModifierCycles_mode_before_get(PointerRNA *ptr);

/**************** Envelope F-Modifier ****************/

extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifier;

void FModifierEnvelope_control_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void FModifierEnvelope_control_points_next(CollectionPropertyIterator *iter);
void FModifierEnvelope_control_points_end(CollectionPropertyIterator *iter);

float FModifierEnvelope_default_max_get(PointerRNA *ptr);

float FModifierEnvelope_default_min_get(PointerRNA *ptr);

float FModifierEnvelope_reference_value_get(PointerRNA *ptr);

/**************** Envelope Control Point ****************/

extern StructRNA RNA_FModifierEnvelopeControlPoint;

PointerRNA FModifierEnvelopeControlPoint_rna_type_get(PointerRNA *ptr);

float FModifierEnvelopeControlPoint_frame_get(PointerRNA *ptr);

float FModifierEnvelopeControlPoint_max_get(PointerRNA *ptr);

float FModifierEnvelopeControlPoint_min_get(PointerRNA *ptr);

/**************** Built-In Function F-Modifier ****************/

extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifier;

int FModifierFunctionGenerator_use_additive_get(PointerRNA *ptr);

float FModifierFunctionGenerator_amplitude_get(PointerRNA *ptr);

float FModifierFunctionGenerator_phase_multiplier_get(PointerRNA *ptr);

float FModifierFunctionGenerator_phase_offset_get(PointerRNA *ptr);

enum {
	FModifierFunctionGenerator_function_type_SIN = 0,
	FModifierFunctionGenerator_function_type_COS = 1,
	FModifierFunctionGenerator_function_type_TAN = 2,
	FModifierFunctionGenerator_function_type_SQRT = 3,
	FModifierFunctionGenerator_function_type_LN = 4,
	FModifierFunctionGenerator_function_type_SINC = 5,
};

int FModifierFunctionGenerator_function_type_get(PointerRNA *ptr);

float FModifierFunctionGenerator_value_offset_get(PointerRNA *ptr);

/**************** Generator F-Curve Modifier ****************/

extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifier;

int FModifierGenerator_use_additive_get(PointerRNA *ptr);

void FModifierGenerator_coefficients_get(PointerRNA *ptr, float values[32]);

enum {
	FModifierGenerator_mode_POLYNOMIAL = 0,
	FModifierGenerator_mode_POLYNOMIAL_FACTORISED = 1,
};

int FModifierGenerator_mode_get(PointerRNA *ptr);

int FModifierGenerator_poly_order_get(PointerRNA *ptr);

/**************** Limits F-Modifier ****************/

extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifier;

int FModifierLimits_use_max_x_get(PointerRNA *ptr);

float FModifierLimits_max_x_get(PointerRNA *ptr);

int FModifierLimits_use_max_y_get(PointerRNA *ptr);

float FModifierLimits_max_y_get(PointerRNA *ptr);

int FModifierLimits_use_min_x_get(PointerRNA *ptr);

float FModifierLimits_min_x_get(PointerRNA *ptr);

int FModifierLimits_use_min_y_get(PointerRNA *ptr);

float FModifierLimits_min_y_get(PointerRNA *ptr);

/**************** Noise F-Modifier ****************/

extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifier;

enum {
	FModifierNoise_blend_type_REPLACE = 0,
	FModifierNoise_blend_type_ADD = 1,
	FModifierNoise_blend_type_SUBTRACT = 2,
	FModifierNoise_blend_type_MULTIPLY = 3,
};

int FModifierNoise_blend_type_get(PointerRNA *ptr);

int FModifierNoise_depth_get(PointerRNA *ptr);

float FModifierNoise_phase_get(PointerRNA *ptr);

float FModifierNoise_scale_get(PointerRNA *ptr);

float FModifierNoise_strength_get(PointerRNA *ptr);

/**************** Python F-Modifier ****************/

extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifier;

/**************** Stepped Interpolation F-Modifier ****************/

extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FModifier;

float FModifierStepped_frame_end_get(PointerRNA *ptr);

float FModifierStepped_frame_offset_get(PointerRNA *ptr);

float FModifierStepped_frame_start_get(PointerRNA *ptr);

float FModifierStepped_frame_step_get(PointerRNA *ptr);

int FModifierStepped_use_frame_end_get(PointerRNA *ptr);

int FModifierStepped_use_frame_start_get(PointerRNA *ptr);

/**************** Field Settings ****************/

extern StructRNA RNA_FieldSettings;

PointerRNA FieldSettings_rna_type_get(PointerRNA *ptr);

int FieldSettings_use_2d_force_get(PointerRNA *ptr);

int FieldSettings_use_absorption_get(PointerRNA *ptr);

int FieldSettings_use_guide_path_add_get(PointerRNA *ptr);

float FieldSettings_guide_clump_amount_get(PointerRNA *ptr);

float FieldSettings_guide_kink_amplitude_get(PointerRNA *ptr);

enum {
	FieldSettings_guide_kink_axis_X = 0,
	FieldSettings_guide_kink_axis_Y = 1,
	FieldSettings_guide_kink_axis_Z = 2,
};

int FieldSettings_guide_kink_axis_get(PointerRNA *ptr);

enum {
	FieldSettings_falloff_type_SPHERE = 0,
	FieldSettings_falloff_type_TUBE = 1,
	FieldSettings_falloff_type_CONE = 2,
};

int FieldSettings_falloff_type_get(PointerRNA *ptr);

float FieldSettings_falloff_power_get(PointerRNA *ptr);

float FieldSettings_flow_get(PointerRNA *ptr);

float FieldSettings_guide_free_get(PointerRNA *ptr);

float FieldSettings_guide_kink_frequency_get(PointerRNA *ptr);

float FieldSettings_harmonic_damping_get(PointerRNA *ptr);

float FieldSettings_inflow_get(PointerRNA *ptr);

enum {
	FieldSettings_guide_kink_type_NONE = 0,
	FieldSettings_guide_kink_type_CURL = 1,
	FieldSettings_guide_kink_type_RADIAL = 2,
	FieldSettings_guide_kink_type_WAVE = 3,
	FieldSettings_guide_kink_type_BRAID = 4,
	FieldSettings_guide_kink_type_ROTATION = 5,
	FieldSettings_guide_kink_type_ROLL = 6,
};

int FieldSettings_guide_kink_type_get(PointerRNA *ptr);

float FieldSettings_linear_drag_get(PointerRNA *ptr);

int FieldSettings_apply_to_location_get(PointerRNA *ptr);

float FieldSettings_distance_max_get(PointerRNA *ptr);

float FieldSettings_radial_max_get(PointerRNA *ptr);

float FieldSettings_distance_min_get(PointerRNA *ptr);

float FieldSettings_guide_minimum_get(PointerRNA *ptr);

float FieldSettings_radial_min_get(PointerRNA *ptr);

int FieldSettings_use_multiple_springs_get(PointerRNA *ptr);

float FieldSettings_texture_nabla_get(PointerRNA *ptr);

float FieldSettings_noise_get(PointerRNA *ptr);

float FieldSettings_quadratic_drag_get(PointerRNA *ptr);

float FieldSettings_radial_falloff_get(PointerRNA *ptr);

float FieldSettings_rest_length_get(PointerRNA *ptr);

int FieldSettings_use_root_coords_get(PointerRNA *ptr);

int FieldSettings_apply_to_rotation_get(PointerRNA *ptr);

int FieldSettings_seed_get(PointerRNA *ptr);

enum {
	FieldSettings_shape_POINT = 0,
	FieldSettings_shape_PLANE = 1,
	FieldSettings_shape_SURFACE = 2,
	FieldSettings_shape_POINTS = 3,
};

int FieldSettings_shape_get(PointerRNA *ptr);

float FieldSettings_guide_clump_shape_get(PointerRNA *ptr);

float FieldSettings_guide_kink_shape_get(PointerRNA *ptr);

float FieldSettings_size_get(PointerRNA *ptr);

float FieldSettings_strength_get(PointerRNA *ptr);

PointerRNA FieldSettings_texture_get(PointerRNA *ptr);

enum {
	FieldSettings_texture_mode_RGB = 0,
	FieldSettings_texture_mode_GRADIENT = 1,
	FieldSettings_texture_mode_CURL = 2,
};

int FieldSettings_texture_mode_get(PointerRNA *ptr);

enum {
	FieldSettings_type_NONE = 0,
	FieldSettings_type_FORCE = 1,
	FieldSettings_type_WIND = 4,
	FieldSettings_type_VORTEX = 2,
	FieldSettings_type_MAGNET = 3,
	FieldSettings_type_HARMONIC = 7,
	FieldSettings_type_CHARGE = 8,
	FieldSettings_type_LENNARDJ = 9,
	FieldSettings_type_TEXTURE = 6,
	FieldSettings_type_GUIDE = 5,
	FieldSettings_type_BOID = 10,
	FieldSettings_type_TURBULENCE = 11,
	FieldSettings_type_DRAG = 12,
};

int FieldSettings_type_get(PointerRNA *ptr);

int FieldSettings_use_object_coords_get(PointerRNA *ptr);

int FieldSettings_use_global_coords_get(PointerRNA *ptr);

int FieldSettings_use_max_distance_get(PointerRNA *ptr);

int FieldSettings_use_radial_max_get(PointerRNA *ptr);

int FieldSettings_use_min_distance_get(PointerRNA *ptr);

int FieldSettings_use_radial_min_get(PointerRNA *ptr);

int FieldSettings_use_guide_path_weight_get(PointerRNA *ptr);

enum {
	FieldSettings_z_direction_BOTH = 0,
	FieldSettings_z_direction_POSITIVE = 1,
	FieldSettings_z_direction_NEGATIVE = 2,
};

int FieldSettings_z_direction_get(PointerRNA *ptr);

/**************** File Select Parameters ****************/

extern StructRNA RNA_FileSelectParams;

PointerRNA FileSelectParams_rna_type_get(PointerRNA *ptr);

#define FileSelectParams_directory_MAX 240

void FileSelectParams_directory_get(PointerRNA *ptr, char *value);
int FileSelectParams_directory_length(PointerRNA *ptr);

enum {
	FileSelectParams_display_type_FILE_SHORTDISPLAY = 1,
	FileSelectParams_display_type_FILE_LONGDISPLAY = 2,
	FileSelectParams_display_type_FILE_IMGDISPLAY = 3,
};

int FileSelectParams_display_type_get(PointerRNA *ptr);

#define FileSelectParams_filter_glob_MAX 64

void FileSelectParams_filter_glob_get(PointerRNA *ptr, char *value);
int FileSelectParams_filter_glob_length(PointerRNA *ptr);

#define FileSelectParams_filename_MAX 80

void FileSelectParams_filename_get(PointerRNA *ptr, char *value);
int FileSelectParams_filename_length(PointerRNA *ptr);

int FileSelectParams_use_filter_blender_get(PointerRNA *ptr);

int FileSelectParams_use_filter_get(PointerRNA *ptr);

int FileSelectParams_use_filter_folder_get(PointerRNA *ptr);

int FileSelectParams_use_filter_font_get(PointerRNA *ptr);

int FileSelectParams_use_filter_image_get(PointerRNA *ptr);

int FileSelectParams_use_filter_movie_get(PointerRNA *ptr);

int FileSelectParams_use_filter_script_get(PointerRNA *ptr);

int FileSelectParams_use_filter_sound_get(PointerRNA *ptr);

int FileSelectParams_use_filter_text_get(PointerRNA *ptr);

int FileSelectParams_show_hidden_get(PointerRNA *ptr);

enum {
	FileSelectParams_sort_method_FILE_SORT_ALPHA = 1,
	FileSelectParams_sort_method_FILE_SORT_EXTENSION = 2,
	FileSelectParams_sort_method_FILE_SORT_TIME = 3,
	FileSelectParams_sort_method_FILE_SORT_SIZE = 4,
};

int FileSelectParams_sort_method_get(PointerRNA *ptr);

#define FileSelectParams_title_MAX 32

void FileSelectParams_title_get(PointerRNA *ptr, char *value);
int FileSelectParams_title_length(PointerRNA *ptr);

/**************** Filter 2D Actuator ****************/

extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_Actuator;

int Filter2DActuator_use_motion_blur_get(PointerRNA *ptr);

enum {
	Filter2DActuator_mode_ENABLE = -2,
	Filter2DActuator_mode_DISABLE = -1,
	Filter2DActuator_mode_REMOVE = 0,
	Filter2DActuator_mode_MOTIONBLUR = 1,
	Filter2DActuator_mode_BLUR = 2,
	Filter2DActuator_mode_SHARPEN = 3,
	Filter2DActuator_mode_DILATION = 4,
	Filter2DActuator_mode_EROSION = 5,
	Filter2DActuator_mode_LAPLACIAN = 6,
	Filter2DActuator_mode_SOBEL = 7,
	Filter2DActuator_mode_PREWITT = 8,
	Filter2DActuator_mode_GRAYSCALE = 9,
	Filter2DActuator_mode_SEPIA = 10,
	Filter2DActuator_mode_INVERT = 11,
	Filter2DActuator_mode_CUSTOMFILTER = 12,
};

int Filter2DActuator_mode_get(PointerRNA *ptr);

int Filter2DActuator_filter_pass_get(PointerRNA *ptr);

PointerRNA Filter2DActuator_glsl_shader_get(PointerRNA *ptr);

float Filter2DActuator_motion_blur_factor_get(PointerRNA *ptr);

/**************** Float Definition ****************/

extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_Property;

int FloatProperty_array_length_get(PointerRNA *ptr);

float FloatProperty_default_get(PointerRNA *ptr);

void FloatProperty_default_array_get(PointerRNA *ptr, float values[3]);

float FloatProperty_hard_max_get(PointerRNA *ptr);

float FloatProperty_hard_min_get(PointerRNA *ptr);

int FloatProperty_precision_get(PointerRNA *ptr);

float FloatProperty_soft_max_get(PointerRNA *ptr);

float FloatProperty_soft_min_get(PointerRNA *ptr);

float FloatProperty_step_get(PointerRNA *ptr);

/**************** Floor Constraint ****************/

extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_Constraint;

enum {
	FloorConstraint_floor_location_FLOOR_X = 0,
	FloorConstraint_floor_location_FLOOR_Y = 1,
	FloorConstraint_floor_location_FLOOR_Z = 2,
	FloorConstraint_floor_location_FLOOR_NEGATIVE_X = 3,
	FloorConstraint_floor_location_FLOOR_NEGATIVE_Y = 4,
	FloorConstraint_floor_location_FLOOR_NEGATIVE_Z = 5,
};

int FloorConstraint_floor_location_get(PointerRNA *ptr);

float FloorConstraint_offset_get(PointerRNA *ptr);

int FloorConstraint_use_sticky_get(PointerRNA *ptr);

#define FloorConstraint_subtarget_MAX 32

void FloorConstraint_subtarget_get(PointerRNA *ptr, char *value);
int FloorConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA FloorConstraint_target_get(PointerRNA *ptr);

int FloorConstraint_use_rotation_get(PointerRNA *ptr);

/**************** Fluid Fluid Simulation Settings ****************/

extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_FluidSettings;

int FluidFluidSettings_use_get(PointerRNA *ptr);

int FluidFluidSettings_use_animated_mesh_get(PointerRNA *ptr);

void FluidFluidSettings_initial_velocity_get(PointerRNA *ptr, float values[3]);

enum {
	FluidFluidSettings_volume_initialization_VOLUME = 1,
	FluidFluidSettings_volume_initialization_SHELL = 2,
	FluidFluidSettings_volume_initialization_BOTH = 3,
};

int FluidFluidSettings_volume_initialization_get(PointerRNA *ptr);

/**************** Fluid Simulation Settings ****************/

extern StructRNA RNA_FluidSettings;

PointerRNA FluidSettings_rna_type_get(PointerRNA *ptr);

enum {
	FluidSettings_type_NONE = 1,
	FluidSettings_type_DOMAIN = 2,
	FluidSettings_type_FLUID = 4,
	FluidSettings_type_OBSTACLE = 8,
	FluidSettings_type_INFLOW = 16,
	FluidSettings_type_OUTFLOW = 32,
	FluidSettings_type_PARTICLE = 64,
	FluidSettings_type_CONTROL = 128,
};

int FluidSettings_type_get(PointerRNA *ptr);

/**************** Fluid Simulation Modifier ****************/

extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_Modifier;

PointerRNA FluidSimulationModifier_settings_get(PointerRNA *ptr);

/**************** Follow Path Constraint ****************/

extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_Constraint;

int FollowPathConstraint_use_curve_radius_get(PointerRNA *ptr);

int FollowPathConstraint_use_fixed_location_get(PointerRNA *ptr);

int FollowPathConstraint_use_curve_follow_get(PointerRNA *ptr);

enum {
	FollowPathConstraint_forward_axis_FORWARD_X = 0,
	FollowPathConstraint_forward_axis_FORWARD_Y = 1,
	FollowPathConstraint_forward_axis_FORWARD_Z = 2,
	FollowPathConstraint_forward_axis_TRACK_NEGATIVE_X = 3,
	FollowPathConstraint_forward_axis_TRACK_NEGATIVE_Y = 4,
	FollowPathConstraint_forward_axis_TRACK_NEGATIVE_Z = 5,
};

int FollowPathConstraint_forward_axis_get(PointerRNA *ptr);

float FollowPathConstraint_offset_get(PointerRNA *ptr);

float FollowPathConstraint_offset_factor_get(PointerRNA *ptr);

PointerRNA FollowPathConstraint_target_get(PointerRNA *ptr);

enum {
	FollowPathConstraint_up_axis_UP_X = 0,
	FollowPathConstraint_up_axis_UP_Y = 1,
	FollowPathConstraint_up_axis_UP_Z = 2,
};

int FollowPathConstraint_up_axis_get(PointerRNA *ptr);

/**************** Function Definition ****************/

extern StructRNA RNA_Function;

PointerRNA Function_rna_type_get(PointerRNA *ptr);

void Function_description_get(PointerRNA *ptr, char *value);
int Function_description_length(PointerRNA *ptr);

void Function_identifier_get(PointerRNA *ptr, char *value);
int Function_identifier_length(PointerRNA *ptr);

int Function_use_self_get(PointerRNA *ptr);

void Function_parameters_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Function_parameters_next(CollectionPropertyIterator *iter);
void Function_parameters_end(CollectionPropertyIterator *iter);

int Function_is_registered_get(PointerRNA *ptr);

int Function_is_registered_optional_get(PointerRNA *ptr);

/**************** Grease Pencil Frame ****************/

extern StructRNA RNA_GPencilFrame;

PointerRNA GPencilFrame_rna_type_get(PointerRNA *ptr);

int GPencilFrame_frame_number_get(PointerRNA *ptr);

int GPencilFrame_is_edited_get(PointerRNA *ptr);

int GPencilFrame_select_get(PointerRNA *ptr);

void GPencilFrame_strokes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GPencilFrame_strokes_next(CollectionPropertyIterator *iter);
void GPencilFrame_strokes_end(CollectionPropertyIterator *iter);

/**************** Grease Pencil Layer ****************/

extern StructRNA RNA_GPencilLayer;

PointerRNA GPencilLayer_rna_type_get(PointerRNA *ptr);

int GPencilLayer_active_get(PointerRNA *ptr);

PointerRNA GPencilLayer_active_frame_get(PointerRNA *ptr);

void GPencilLayer_color_get(PointerRNA *ptr, float values[3]);

int GPencilLayer_lock_frame_get(PointerRNA *ptr);

void GPencilLayer_frames_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GPencilLayer_frames_next(CollectionPropertyIterator *iter);
void GPencilLayer_frames_end(CollectionPropertyIterator *iter);

int GPencilLayer_hide_get(PointerRNA *ptr);

#define GPencilLayer_info_MAX 128

void GPencilLayer_info_get(PointerRNA *ptr, char *value);
int GPencilLayer_info_length(PointerRNA *ptr);

int GPencilLayer_lock_get(PointerRNA *ptr);

int GPencilLayer_ghost_range_max_get(PointerRNA *ptr);

float GPencilLayer_alpha_get(PointerRNA *ptr);

int GPencilLayer_select_get(PointerRNA *ptr);

int GPencilLayer_show_points_get(PointerRNA *ptr);

int GPencilLayer_line_width_get(PointerRNA *ptr);

int GPencilLayer_use_onion_skinning_get(PointerRNA *ptr);

/**************** Grease Pencil Stroke ****************/

extern StructRNA RNA_GPencilStroke;

PointerRNA GPencilStroke_rna_type_get(PointerRNA *ptr);

void GPencilStroke_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GPencilStroke_points_next(CollectionPropertyIterator *iter);
void GPencilStroke_points_end(CollectionPropertyIterator *iter);

/**************** Grease Pencil Stroke Point ****************/

extern StructRNA RNA_GPencilStrokePoint;

PointerRNA GPencilStrokePoint_rna_type_get(PointerRNA *ptr);

void GPencilStrokePoint_co_get(PointerRNA *ptr, float values[3]);

float GPencilStrokePoint_pressure_get(PointerRNA *ptr);

/**************** Game Actuator ****************/

extern StructRNA RNA_GameActuator;
extern StructRNA RNA_Actuator;

#define GameActuator_filename_MAX 64

void GameActuator_filename_get(PointerRNA *ptr, char *value);
int GameActuator_filename_length(PointerRNA *ptr);

enum {
	GameActuator_mode_START = 0,
	GameActuator_mode_RESTART = 2,
	GameActuator_mode_QUIT = 3,
	GameActuator_mode_SAVECFG = 4,
	GameActuator_mode_LOADCFG = 5,
};

int GameActuator_mode_get(PointerRNA *ptr);

/**************** Game Boolean Property ****************/

extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameProperty;

int GameBooleanProperty_value_get(PointerRNA *ptr);

/**************** Game Float Property ****************/

extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameProperty;

float GameFloatProperty_value_get(PointerRNA *ptr);

/**************** Game Integer Property ****************/

extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameProperty;

int GameIntProperty_value_get(PointerRNA *ptr);

/**************** Game Object Settings ****************/

extern StructRNA RNA_GameObjectSettings;

PointerRNA GameObjectSettings_rna_type_get(PointerRNA *ptr);

int GameObjectSettings_use_actor_get(PointerRNA *ptr);

void GameObjectSettings_actuators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GameObjectSettings_actuators_next(CollectionPropertyIterator *iter);
void GameObjectSettings_actuators_end(CollectionPropertyIterator *iter);

int GameObjectSettings_use_all_states_get(PointerRNA *ptr);

int GameObjectSettings_use_anisotropic_friction_get(PointerRNA *ptr);

enum {
	GameObjectSettings_collision_bounds_type_BOX = 0,
	GameObjectSettings_collision_bounds_type_SPHERE = 1,
	GameObjectSettings_collision_bounds_type_CYLINDER = 2,
	GameObjectSettings_collision_bounds_type_CONE = 3,
	GameObjectSettings_collision_bounds_type_CONVEX_HULL = 5,
	GameObjectSettings_collision_bounds_type_TRIANGLE_MESH = 4,
	GameObjectSettings_collision_bounds_type_CAPSULE = 7,
};

int GameObjectSettings_collision_bounds_type_get(PointerRNA *ptr);

int GameObjectSettings_use_collision_compound_get(PointerRNA *ptr);

float GameObjectSettings_collision_margin_get(PointerRNA *ptr);

void GameObjectSettings_controllers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GameObjectSettings_controllers_next(CollectionPropertyIterator *iter);
void GameObjectSettings_controllers_end(CollectionPropertyIterator *iter);

float GameObjectSettings_damping_get(PointerRNA *ptr);

int GameObjectSettings_show_debug_state_get(PointerRNA *ptr);

float GameObjectSettings_form_factor_get(PointerRNA *ptr);

void GameObjectSettings_friction_coefficients_get(PointerRNA *ptr, float values[3]);

int GameObjectSettings_use_ghost_get(PointerRNA *ptr);

void GameObjectSettings_states_initial_get(PointerRNA *ptr, int values[30]);

int GameObjectSettings_lock_location_x_get(PointerRNA *ptr);

int GameObjectSettings_lock_rotation_x_get(PointerRNA *ptr);

int GameObjectSettings_lock_location_y_get(PointerRNA *ptr);

int GameObjectSettings_lock_rotation_y_get(PointerRNA *ptr);

int GameObjectSettings_lock_location_z_get(PointerRNA *ptr);

int GameObjectSettings_lock_rotation_z_get(PointerRNA *ptr);

int GameObjectSettings_use_activity_culling_get(PointerRNA *ptr);

float GameObjectSettings_mass_get(PointerRNA *ptr);

int GameObjectSettings_use_sleep_get(PointerRNA *ptr);

enum {
	GameObjectSettings_physics_type_NO_COLLISION = 0,
	GameObjectSettings_physics_type_STATIC = 1,
	GameObjectSettings_physics_type_DYNAMIC = 2,
	GameObjectSettings_physics_type_RIGID_BODY = 3,
	GameObjectSettings_physics_type_SOFT_BODY = 4,
	GameObjectSettings_physics_type_OCCLUDE = 5,
	GameObjectSettings_physics_type_SENSOR = 6,
};

int GameObjectSettings_physics_type_get(PointerRNA *ptr);

void GameObjectSettings_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GameObjectSettings_properties_next(CollectionPropertyIterator *iter);
void GameObjectSettings_properties_end(CollectionPropertyIterator *iter);

float GameObjectSettings_radius_get(PointerRNA *ptr);

int GameObjectSettings_use_rotate_from_normal_get(PointerRNA *ptr);

float GameObjectSettings_rotation_damping_get(PointerRNA *ptr);

void GameObjectSettings_sensors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GameObjectSettings_sensors_next(CollectionPropertyIterator *iter);
void GameObjectSettings_sensors_end(CollectionPropertyIterator *iter);

int GameObjectSettings_show_actuators_get(PointerRNA *ptr);

int GameObjectSettings_show_controllers_get(PointerRNA *ptr);

int GameObjectSettings_show_sensors_get(PointerRNA *ptr);

PointerRNA GameObjectSettings_soft_body_get(PointerRNA *ptr);

void GameObjectSettings_states_visible_get(PointerRNA *ptr, int values[30]);

int GameObjectSettings_show_state_panel_get(PointerRNA *ptr);

int GameObjectSettings_use_collision_bounds_get(PointerRNA *ptr);

int GameObjectSettings_use_material_physics_get(PointerRNA *ptr);

void GameObjectSettings_used_states_get(PointerRNA *ptr, int values[30]);

float GameObjectSettings_velocity_max_get(PointerRNA *ptr);

float GameObjectSettings_velocity_min_get(PointerRNA *ptr);

/**************** Game Property ****************/

extern StructRNA RNA_GameProperty;

PointerRNA GameProperty_rna_type_get(PointerRNA *ptr);

#define GameProperty_name_MAX 32

void GameProperty_name_get(PointerRNA *ptr, char *value);
int GameProperty_name_length(PointerRNA *ptr);

int GameProperty_show_debug_get(PointerRNA *ptr);

enum {
	GameProperty_type_BOOL = 0,
	GameProperty_type_INT = 1,
	GameProperty_type_FLOAT = 2,
	GameProperty_type_STRING = 3,
	GameProperty_type_TIMER = 5,
};

int GameProperty_type_get(PointerRNA *ptr);

/**************** Game Soft Body Settings ****************/

extern StructRNA RNA_GameSoftBodySettings;

PointerRNA GameSoftBodySettings_rna_type_get(PointerRNA *ptr);

int GameSoftBodySettings_use_bending_constraints_get(PointerRNA *ptr);

int GameSoftBodySettings_cluster_iterations_get(PointerRNA *ptr);

float GameSoftBodySettings_dynamic_friction_get(PointerRNA *ptr);

float GameSoftBodySettings_linear_stiffness_get(PointerRNA *ptr);

float GameSoftBodySettings_collision_margin_get(PointerRNA *ptr);

int GameSoftBodySettings_location_iterations_get(PointerRNA *ptr);

int GameSoftBodySettings_use_cluster_rigid_to_softbody_get(PointerRNA *ptr);

int GameSoftBodySettings_use_shape_match_get(PointerRNA *ptr);

int GameSoftBodySettings_use_cluster_soft_to_softbody_get(PointerRNA *ptr);

float GameSoftBodySettings_shape_threshold_get(PointerRNA *ptr);

float GameSoftBodySettings_weld_threshold_get(PointerRNA *ptr);

/**************** Game String Property ****************/

extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_GameProperty;

#define GameStringProperty_value_MAX 128

void GameStringProperty_value_get(PointerRNA *ptr, char *value);
int GameStringProperty_value_length(PointerRNA *ptr);

/**************** Game Timer Property ****************/

extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameProperty;

float GameTimerProperty_value_get(PointerRNA *ptr);

/**************** Glow Sequence ****************/

extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_Sequence;

float GlowSequence_blur_radius_get(PointerRNA *ptr);

float GlowSequence_boost_factor_get(PointerRNA *ptr);

float GlowSequence_clamp_get(PointerRNA *ptr);

int GlowSequence_use_only_boost_get(PointerRNA *ptr);

int GlowSequence_quality_get(PointerRNA *ptr);

float GlowSequence_threshold_get(PointerRNA *ptr);

/**************** Grease Pencil ****************/

extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_ID;

enum {
	GreasePencil_draw_mode_CURSOR = 16,
	GreasePencil_draw_mode_VIEW = 0,
	GreasePencil_draw_mode_SURFACE = 48,
	GreasePencil_draw_mode_STROKE = 80,
};

int GreasePencil_draw_mode_get(PointerRNA *ptr);

void GreasePencil_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void GreasePencil_layers_next(CollectionPropertyIterator *iter);
void GreasePencil_layers_end(CollectionPropertyIterator *iter);

int GreasePencil_use_stroke_endpoints_get(PointerRNA *ptr);

/**************** Group ****************/

extern StructRNA RNA_Group;
extern StructRNA RNA_ID;

void Group_layers_get(PointerRNA *ptr, int values[20]);

void Group_dupli_offset_get(PointerRNA *ptr, float values[3]);

void Group_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Group_objects_next(CollectionPropertyIterator *iter);
void Group_objects_end(CollectionPropertyIterator *iter);

/**************** Group Objects ****************/

extern StructRNA RNA_GroupObjects;

PointerRNA GroupObjects_rna_type_get(PointerRNA *ptr);

/**************** Header ****************/

extern StructRNA RNA_Header;

PointerRNA Header_rna_type_get(PointerRNA *ptr);

void Header_bl_idname_get(PointerRNA *ptr, char *value);
int Header_bl_idname_length(PointerRNA *ptr);

PointerRNA Header_layout_get(PointerRNA *ptr);

enum {
	Header_bl_space_type_EMPTY = 0,
	Header_bl_space_type_VIEW_3D = 1,
	Header_bl_space_type_GRAPH_EDITOR = 2,
	Header_bl_space_type_OUTLINER = 3,
	Header_bl_space_type_PROPERTIES = 4,
	Header_bl_space_type_FILE_BROWSER = 5,
	Header_bl_space_type_IMAGE_EDITOR = 6,
	Header_bl_space_type_INFO = 7,
	Header_bl_space_type_SEQUENCE_EDITOR = 8,
	Header_bl_space_type_TEXT_EDITOR = 9,
	Header_bl_space_type_AUDIO_WINDOW = 11,
	Header_bl_space_type_DOPESHEET_EDITOR = 12,
	Header_bl_space_type_NLA_EDITOR = 13,
	Header_bl_space_type_SCRIPTS_WINDOW = 14,
	Header_bl_space_type_TIMELINE = 15,
	Header_bl_space_type_NODE_EDITOR = 16,
	Header_bl_space_type_LOGIC_EDITOR = 17,
	Header_bl_space_type_CONSOLE = 18,
	Header_bl_space_type_USER_PREFERENCES = 19,
};

int Header_bl_space_type_get(PointerRNA *ptr);

/**************** Hemi Lamp ****************/

extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_ID;

/**************** Histogram ****************/

extern StructRNA RNA_Histogram;

PointerRNA Histogram_rna_type_get(PointerRNA *ptr);

enum {
	Histogram_mode_LUMA = 0,
	Histogram_mode_RGB = 1,
	Histogram_mode_R = 2,
	Histogram_mode_G = 3,
	Histogram_mode_B = 4,
};

int Histogram_mode_get(PointerRNA *ptr);

/**************** Hook Modifier ****************/

extern StructRNA RNA_HookModifier;
extern StructRNA RNA_Modifier;

float HookModifier_falloff_get(PointerRNA *ptr);

float HookModifier_force_get(PointerRNA *ptr);

PointerRNA HookModifier_object_get(PointerRNA *ptr);

#define HookModifier_subtarget_MAX 32

void HookModifier_subtarget_get(PointerRNA *ptr, char *value);
int HookModifier_subtarget_length(PointerRNA *ptr);

#define HookModifier_vertex_group_MAX 32

void HookModifier_vertex_group_get(PointerRNA *ptr, char *value);
int HookModifier_vertex_group_length(PointerRNA *ptr);

/**************** ID ****************/

extern StructRNA RNA_ID;

PointerRNA ID_rna_type_get(PointerRNA *ptr);

#define ID_name_MAX 22

void ID_name_get(PointerRNA *ptr, char *value);
int ID_name_length(PointerRNA *ptr);

int ID_use_fake_user_get(PointerRNA *ptr);

PointerRNA ID_library_get(PointerRNA *ptr);

int ID_tag_get(PointerRNA *ptr);

int ID_users_get(PointerRNA *ptr);

/**************** ID Materials ****************/

extern StructRNA RNA_IDMaterials;

PointerRNA IDMaterials_rna_type_get(PointerRNA *ptr);

/**************** IKParam ****************/

extern StructRNA RNA_IKParam;

PointerRNA IKParam_rna_type_get(PointerRNA *ptr);

enum {
	IKParam_ik_solver_LEGACY = 0,
	IKParam_ik_solver_ITASC = 1,
};

int IKParam_ik_solver_get(PointerRNA *ptr);

/**************** Image ****************/

extern StructRNA RNA_Image;
extern StructRNA RNA_ID;

int Image_use_animation_get(PointerRNA *ptr);

int Image_frame_end_get(PointerRNA *ptr);

int Image_fps_get(PointerRNA *ptr);

int Image_frame_start_get(PointerRNA *ptr);

int Image_bindcode_get(PointerRNA *ptr);

int Image_use_clamp_x_get(PointerRNA *ptr);

int Image_use_clamp_y_get(PointerRNA *ptr);

int Image_depth_get(PointerRNA *ptr);

int Image_is_dirty_get(PointerRNA *ptr);

void Image_display_aspect_get(PointerRNA *ptr, float values[2]);

enum {
	Image_field_order_EVEN = 0,
	Image_field_order_ODD = 2,
};

int Image_field_order_get(PointerRNA *ptr);

int Image_use_fields_get(PointerRNA *ptr);

enum {
	Image_file_format_BMP = 20,
	Image_file_format_IRIS = 1,
	Image_file_format_PNG = 17,
	Image_file_format_JPEG = 4,
	Image_file_format_JPEG2000 = 30,
	Image_file_format_TARGA = 0,
	Image_file_format_TARGA_RAW = 14,
	Image_file_format_CINEON = 26,
	Image_file_format_DPX = 27,
	Image_file_format_HDR = 21,
	Image_file_format_AVI_JPEG = 16,
	Image_file_format_AVI_RAW = 15,
	Image_file_format_FRAMESERVER = 25,
};

int Image_file_format_get(PointerRNA *ptr);

#define Image_filepath_MAX 240

void Image_filepath_get(PointerRNA *ptr, char *value);
int Image_filepath_length(PointerRNA *ptr);

#define Image_filepath_raw_MAX 240

void Image_filepath_raw_get(PointerRNA *ptr, char *value);
int Image_filepath_raw_length(PointerRNA *ptr);

int Image_generated_height_get(PointerRNA *ptr);

enum {
	Image_generated_type_BLANK = 0,
	Image_generated_type_UV_GRID = 1,
	Image_generated_type_COLOR_GRID = 2,
};

int Image_generated_type_get(PointerRNA *ptr);

int Image_generated_width_get(PointerRNA *ptr);

int Image_has_data_get(PointerRNA *ptr);

enum {
	Image_mapping_UV = 0,
	Image_mapping_REFLECTION = 16,
};

int Image_mapping_get(PointerRNA *ptr);

PointerRNA Image_packed_file_get(PointerRNA *ptr);

int Image_use_premultiply_get(PointerRNA *ptr);

void Image_size_get(PointerRNA *ptr, int values[2]);

enum {
	Image_source_FILE = 1,
	Image_source_SEQUENCE = 2,
	Image_source_MOVIE = 3,
	Image_source_GENERATED = 4,
	Image_source_VIEWER = 5,
};

int Image_source_get(PointerRNA *ptr);

int Image_use_tiles_get(PointerRNA *ptr);

int Image_tiles_x_get(PointerRNA *ptr);

int Image_tiles_y_get(PointerRNA *ptr);

enum {
	Image_type_IMAGE = 0,
	Image_type_MULTILAYER = 1,
	Image_type_UV_TEST = 2,
	Image_type_RENDER_RESULT = 4,
	Image_type_COMPOSITING = 5,
};

int Image_type_get(PointerRNA *ptr);

/**************** Image Paint ****************/

extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_Paint;

int ImagePaint_normal_angle_get(PointerRNA *ptr);

int ImagePaint_seam_bleed_get(PointerRNA *ptr);

int ImagePaint_use_clone_layer_get(PointerRNA *ptr);

int ImagePaint_use_backface_culling_get(PointerRNA *ptr);

int ImagePaint_invert_stencil_get(PointerRNA *ptr);

int ImagePaint_use_normal_falloff_get(PointerRNA *ptr);

int ImagePaint_use_occlude_get(PointerRNA *ptr);

int ImagePaint_use_projection_get(PointerRNA *ptr);

int ImagePaint_use_stencil_layer_get(PointerRNA *ptr);

void ImagePaint_screen_grab_size_get(PointerRNA *ptr, int values[2]);

/**************** Image Sequence ****************/

extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_Sequence;

int ImageSequence_animation_offset_end_get(PointerRNA *ptr);

int ImageSequence_animation_offset_start_get(PointerRNA *ptr);

PointerRNA ImageSequence_color_balance_get(PointerRNA *ptr);

int ImageSequence_use_float_get(PointerRNA *ptr);

PointerRNA ImageSequence_crop_get(PointerRNA *ptr);

int ImageSequence_use_deinterlace_get(PointerRNA *ptr);

#define ImageSequence_directory_MAX 160

void ImageSequence_directory_get(PointerRNA *ptr, char *value);
int ImageSequence_directory_length(PointerRNA *ptr);

void ImageSequence_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ImageSequence_elements_next(CollectionPropertyIterator *iter);
void ImageSequence_elements_end(CollectionPropertyIterator *iter);

int ImageSequence_use_reverse_frames_get(PointerRNA *ptr);

int ImageSequence_use_flip_x_get(PointerRNA *ptr);

int ImageSequence_use_flip_y_get(PointerRNA *ptr);

float ImageSequence_color_multiply_get(PointerRNA *ptr);

int ImageSequence_use_premultiply_get(PointerRNA *ptr);

PointerRNA ImageSequence_proxy_get(PointerRNA *ptr);

int ImageSequence_use_proxy_custom_directory_get(PointerRNA *ptr);

int ImageSequence_use_proxy_custom_file_get(PointerRNA *ptr);

float ImageSequence_color_saturation_get(PointerRNA *ptr);

float ImageSequence_strobe_get(PointerRNA *ptr);

PointerRNA ImageSequence_transform_get(PointerRNA *ptr);

int ImageSequence_use_color_balance_get(PointerRNA *ptr);

int ImageSequence_use_crop_get(PointerRNA *ptr);

int ImageSequence_use_proxy_get(PointerRNA *ptr);

int ImageSequence_use_translation_get(PointerRNA *ptr);

/**************** Image Texture ****************/

extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

int ImageTexture_use_calculate_alpha_get(PointerRNA *ptr);

float ImageTexture_checker_distance_get(PointerRNA *ptr);

int ImageTexture_use_checker_even_get(PointerRNA *ptr);

int ImageTexture_use_checker_odd_get(PointerRNA *ptr);

float ImageTexture_crop_max_x_get(PointerRNA *ptr);

float ImageTexture_crop_max_y_get(PointerRNA *ptr);

float ImageTexture_crop_min_x_get(PointerRNA *ptr);

float ImageTexture_crop_min_y_get(PointerRNA *ptr);

enum {
	ImageTexture_extension_EXTEND = 1,
	ImageTexture_extension_CLIP = 2,
	ImageTexture_extension_CLIP_CUBE = 4,
	ImageTexture_extension_REPEAT = 3,
	ImageTexture_extension_CHECKER = 5,
};

int ImageTexture_extension_get(PointerRNA *ptr);

enum {
	ImageTexture_filter_type_BOX = 0,
	ImageTexture_filter_type_EWA = 1,
	ImageTexture_filter_type_FELINE = 2,
	ImageTexture_filter_type_AREA = 3,
};

int ImageTexture_filter_type_get(PointerRNA *ptr);

int ImageTexture_filter_eccentricity_get(PointerRNA *ptr);

int ImageTexture_filter_probes_get(PointerRNA *ptr);

float ImageTexture_filter_size_get(PointerRNA *ptr);

int ImageTexture_use_flip_axis_get(PointerRNA *ptr);

PointerRNA ImageTexture_image_get(PointerRNA *ptr);

PointerRNA ImageTexture_image_user_get(PointerRNA *ptr);

int ImageTexture_use_interpolation_get(PointerRNA *ptr);

int ImageTexture_invert_alpha_get(PointerRNA *ptr);

int ImageTexture_use_mipmap_get(PointerRNA *ptr);

int ImageTexture_use_mipmap_gauss_get(PointerRNA *ptr);

int ImageTexture_use_filter_size_min_get(PointerRNA *ptr);

int ImageTexture_use_mirror_x_get(PointerRNA *ptr);

int ImageTexture_use_mirror_y_get(PointerRNA *ptr);

int ImageTexture_use_normal_map_get(PointerRNA *ptr);

int ImageTexture_repeat_x_get(PointerRNA *ptr);

int ImageTexture_repeat_y_get(PointerRNA *ptr);

int ImageTexture_use_alpha_get(PointerRNA *ptr);

/**************** Image User ****************/

extern StructRNA RNA_ImageUser;

PointerRNA ImageUser_rna_type_get(PointerRNA *ptr);

int ImageUser_use_auto_refresh_get(PointerRNA *ptr);

int ImageUser_use_cyclic_get(PointerRNA *ptr);

int ImageUser_fields_per_frame_get(PointerRNA *ptr);

int ImageUser_frame_duration_get(PointerRNA *ptr);

int ImageUser_multilayer_layer_get(PointerRNA *ptr);

int ImageUser_frame_offset_get(PointerRNA *ptr);

int ImageUser_multilayer_pass_get(PointerRNA *ptr);

int ImageUser_frame_start_get(PointerRNA *ptr);

/**************** Inflow Fluid Simulation Settings ****************/

extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_FluidSettings;

int InflowFluidSettings_use_get(PointerRNA *ptr);

int InflowFluidSettings_use_animated_mesh_get(PointerRNA *ptr);

void InflowFluidSettings_inflow_velocity_get(PointerRNA *ptr, float values[3]);

int InflowFluidSettings_use_local_coords_get(PointerRNA *ptr);

enum {
	InflowFluidSettings_volume_initialization_VOLUME = 1,
	InflowFluidSettings_volume_initialization_SHELL = 2,
	InflowFluidSettings_volume_initialization_BOTH = 3,
};

int InflowFluidSettings_volume_initialization_get(PointerRNA *ptr);

/**************** Int Definition ****************/

extern StructRNA RNA_IntProperty;
extern StructRNA RNA_Property;

int IntProperty_array_length_get(PointerRNA *ptr);

int IntProperty_default_get(PointerRNA *ptr);

void IntProperty_default_array_get(PointerRNA *ptr, int values[3]);

int IntProperty_hard_max_get(PointerRNA *ptr);

int IntProperty_hard_min_get(PointerRNA *ptr);

int IntProperty_soft_max_get(PointerRNA *ptr);

int IntProperty_soft_min_get(PointerRNA *ptr);

int IntProperty_step_get(PointerRNA *ptr);

/**************** bItasc ****************/

extern StructRNA RNA_Itasc;
extern StructRNA RNA_IKParam;

int Itasc_use_auto_step_get(PointerRNA *ptr);

float Itasc_damping_max_get(PointerRNA *ptr);

float Itasc_damping_epsilon_get(PointerRNA *ptr);

float Itasc_feedback_get(PointerRNA *ptr);

int Itasc_iterations_get(PointerRNA *ptr);

float Itasc_velocity_max_get(PointerRNA *ptr);

float Itasc_step_max_get(PointerRNA *ptr);

float Itasc_step_min_get(PointerRNA *ptr);

enum {
	Itasc_mode_ANIMATION = 0,
	Itasc_mode_SIMULATION = 8,
};

int Itasc_mode_get(PointerRNA *ptr);

int Itasc_step_count_get(PointerRNA *ptr);

float Itasc_precision_get(PointerRNA *ptr);

enum {
	Itasc_reiteration_method_NEVER = 0,
	Itasc_reiteration_method_INITIAL = 2,
	Itasc_reiteration_method_ALWAYS = 6,
};

int Itasc_reiteration_method_get(PointerRNA *ptr);

enum {
	Itasc_solver_SDLS = 0,
	Itasc_solver_DLS = 1,
};

int Itasc_solver_get(PointerRNA *ptr);

/**************** Joystick Sensor ****************/

extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_Sensor;

int JoystickSensor_use_all_events_get(PointerRNA *ptr);

enum {
	JoystickSensor_axis_direction_RIGHTAXIS = 0,
	JoystickSensor_axis_direction_UPAXIS = 1,
	JoystickSensor_axis_direction_LEFTAXIS = 2,
	JoystickSensor_axis_direction_DOWNAXIS = 3,
};

int JoystickSensor_axis_direction_get(PointerRNA *ptr);

int JoystickSensor_axis_number_get(PointerRNA *ptr);

int JoystickSensor_single_axis_number_get(PointerRNA *ptr);

int JoystickSensor_axis_threshold_get(PointerRNA *ptr);

int JoystickSensor_button_number_get(PointerRNA *ptr);

enum {
	JoystickSensor_event_type_BUTTON = 0,
	JoystickSensor_event_type_AXIS = 1,
	JoystickSensor_event_type_HAT = 2,
	JoystickSensor_event_type_AXIS_SINGLE = 3,
};

int JoystickSensor_event_type_get(PointerRNA *ptr);

enum {
	JoystickSensor_hat_direction_UP = 1,
	JoystickSensor_hat_direction_DOWN = 4,
	JoystickSensor_hat_direction_LEFT = 8,
	JoystickSensor_hat_direction_RIGHT = 2,
	JoystickSensor_hat_direction_UPRIGHT = 3,
	JoystickSensor_hat_direction_DOWNLEFT = 12,
	JoystickSensor_hat_direction_UPLEFT = 9,
	JoystickSensor_hat_direction_DOWNRIGHT = 6,
};

int JoystickSensor_hat_direction_get(PointerRNA *ptr);

int JoystickSensor_hat_number_get(PointerRNA *ptr);

int JoystickSensor_joystick_index_get(PointerRNA *ptr);

/**************** Key ****************/

extern StructRNA RNA_Key;
extern StructRNA RNA_ID;

PointerRNA Key_animation_data_get(PointerRNA *ptr);

void Key_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Key_keys_next(CollectionPropertyIterator *iter);
void Key_keys_end(CollectionPropertyIterator *iter);

PointerRNA Key_reference_key_get(PointerRNA *ptr);

int Key_use_relative_get(PointerRNA *ptr);

int Key_slurph_get(PointerRNA *ptr);

PointerRNA Key_user_get(PointerRNA *ptr);

/**************** Key Configuration ****************/

extern StructRNA RNA_KeyConfig;

PointerRNA KeyConfig_rna_type_get(PointerRNA *ptr);

#define KeyConfig_name_MAX 64

void KeyConfig_name_get(PointerRNA *ptr, char *value);
int KeyConfig_name_length(PointerRNA *ptr);

void KeyConfig_keymaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void KeyConfig_keymaps_next(CollectionPropertyIterator *iter);
void KeyConfig_keymaps_end(CollectionPropertyIterator *iter);

int KeyConfig_is_user_defined_get(PointerRNA *ptr);

/**************** KeyConfigs ****************/

extern StructRNA RNA_KeyConfigurations;

PointerRNA KeyConfigurations_rna_type_get(PointerRNA *ptr);

PointerRNA KeyConfigurations_active_get(PointerRNA *ptr);

PointerRNA KeyConfigurations_default_get(PointerRNA *ptr);

/**************** Key Map ****************/

extern StructRNA RNA_KeyMap;

PointerRNA KeyMap_rna_type_get(PointerRNA *ptr);

#define KeyMap_name_MAX 64

void KeyMap_name_get(PointerRNA *ptr, char *value);
int KeyMap_name_length(PointerRNA *ptr);

int KeyMap_show_expanded_children_get(PointerRNA *ptr);

void KeyMap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void KeyMap_items_next(CollectionPropertyIterator *iter);
void KeyMap_items_end(CollectionPropertyIterator *iter);

int KeyMap_show_expanded_items_get(PointerRNA *ptr);

int KeyMap_is_modal_get(PointerRNA *ptr);

enum {
	KeyMap_region_type_WINDOW = 0,
	KeyMap_region_type_HEADER = 1,
	KeyMap_region_type_CHANNELS = 2,
	KeyMap_region_type_TEMPORARY = 3,
	KeyMap_region_type_UI = 4,
	KeyMap_region_type_TOOLS = 5,
	KeyMap_region_type_TOOL_PROPS = 6,
	KeyMap_region_type_PREVIEW = 7,
};

int KeyMap_region_type_get(PointerRNA *ptr);

enum {
	KeyMap_space_type_EMPTY = 0,
	KeyMap_space_type_VIEW_3D = 1,
	KeyMap_space_type_GRAPH_EDITOR = 2,
	KeyMap_space_type_OUTLINER = 3,
	KeyMap_space_type_PROPERTIES = 4,
	KeyMap_space_type_FILE_BROWSER = 5,
	KeyMap_space_type_IMAGE_EDITOR = 6,
	KeyMap_space_type_INFO = 7,
	KeyMap_space_type_SEQUENCE_EDITOR = 8,
	KeyMap_space_type_TEXT_EDITOR = 9,
	KeyMap_space_type_AUDIO_WINDOW = 11,
	KeyMap_space_type_DOPESHEET_EDITOR = 12,
	KeyMap_space_type_NLA_EDITOR = 13,
	KeyMap_space_type_SCRIPTS_WINDOW = 14,
	KeyMap_space_type_TIMELINE = 15,
	KeyMap_space_type_NODE_EDITOR = 16,
	KeyMap_space_type_LOGIC_EDITOR = 17,
	KeyMap_space_type_CONSOLE = 18,
	KeyMap_space_type_USER_PREFERENCES = 19,
};

int KeyMap_space_type_get(PointerRNA *ptr);

int KeyMap_is_user_defined_get(PointerRNA *ptr);

/**************** Key Map Item ****************/

extern StructRNA RNA_KeyMapItem;

PointerRNA KeyMapItem_rna_type_get(PointerRNA *ptr);

void KeyMapItem_name_get(PointerRNA *ptr, char *value);
int KeyMapItem_name_length(PointerRNA *ptr);

int KeyMapItem_active_get(PointerRNA *ptr);

int KeyMapItem_alt_get(PointerRNA *ptr);

int KeyMapItem_any_get(PointerRNA *ptr);

int KeyMapItem_ctrl_get(PointerRNA *ptr);

int KeyMapItem_show_expanded_get(PointerRNA *ptr);

#define KeyMapItem_idname_MAX 64

void KeyMapItem_idname_get(PointerRNA *ptr, char *value);
int KeyMapItem_idname_length(PointerRNA *ptr);

enum {
	KeyMapItem_key_modifier_NONE = 0,
	KeyMapItem_key_modifier_LEFTMOUSE = 1,
	KeyMapItem_key_modifier_MIDDLEMOUSE = 2,
	KeyMapItem_key_modifier_RIGHTMOUSE = 3,
	KeyMapItem_key_modifier_BUTTON4MOUSE = 7,
	KeyMapItem_key_modifier_BUTTON5MOUSE = 8,
	KeyMapItem_key_modifier_ACTIONMOUSE = 5,
	KeyMapItem_key_modifier_SELECTMOUSE = 6,
	KeyMapItem_key_modifier_MOUSEMOVE = 4,
	KeyMapItem_key_modifier_INBETWEEN_MOUSEMOVE = 17,
	KeyMapItem_key_modifier_TRACKPADPAN = 14,
	KeyMapItem_key_modifier_TRACKPADZOOM = 15,
	KeyMapItem_key_modifier_MOUSEROTATE = 16,
	KeyMapItem_key_modifier_WHEELUPMOUSE = 10,
	KeyMapItem_key_modifier_WHEELDOWNMOUSE = 11,
	KeyMapItem_key_modifier_WHEELINMOUSE = 12,
	KeyMapItem_key_modifier_WHEELOUTMOUSE = 13,
	KeyMapItem_key_modifier_EVT_TWEAK_L = 20482,
	KeyMapItem_key_modifier_EVT_TWEAK_M = 20483,
	KeyMapItem_key_modifier_EVT_TWEAK_R = 20484,
	KeyMapItem_key_modifier_EVT_TWEAK_A = 20485,
	KeyMapItem_key_modifier_EVT_TWEAK_S = 20486,
	KeyMapItem_key_modifier_A = 97,
	KeyMapItem_key_modifier_B = 98,
	KeyMapItem_key_modifier_C = 99,
	KeyMapItem_key_modifier_D = 100,
	KeyMapItem_key_modifier_E = 101,
	KeyMapItem_key_modifier_F = 102,
	KeyMapItem_key_modifier_G = 103,
	KeyMapItem_key_modifier_H = 104,
	KeyMapItem_key_modifier_I = 105,
	KeyMapItem_key_modifier_J = 106,
	KeyMapItem_key_modifier_K = 107,
	KeyMapItem_key_modifier_L = 108,
	KeyMapItem_key_modifier_M = 109,
	KeyMapItem_key_modifier_N = 110,
	KeyMapItem_key_modifier_O = 111,
	KeyMapItem_key_modifier_P = 112,
	KeyMapItem_key_modifier_Q = 113,
	KeyMapItem_key_modifier_R = 114,
	KeyMapItem_key_modifier_S = 115,
	KeyMapItem_key_modifier_T = 116,
	KeyMapItem_key_modifier_U = 117,
	KeyMapItem_key_modifier_V = 118,
	KeyMapItem_key_modifier_W = 119,
	KeyMapItem_key_modifier_X = 120,
	KeyMapItem_key_modifier_Y = 121,
	KeyMapItem_key_modifier_Z = 122,
	KeyMapItem_key_modifier_ZERO = 48,
	KeyMapItem_key_modifier_ONE = 49,
	KeyMapItem_key_modifier_TWO = 50,
	KeyMapItem_key_modifier_THREE = 51,
	KeyMapItem_key_modifier_FOUR = 52,
	KeyMapItem_key_modifier_FIVE = 53,
	KeyMapItem_key_modifier_SIX = 54,
	KeyMapItem_key_modifier_SEVEN = 55,
	KeyMapItem_key_modifier_EIGHT = 56,
	KeyMapItem_key_modifier_NINE = 57,
	KeyMapItem_key_modifier_LEFT_CTRL = 212,
	KeyMapItem_key_modifier_LEFT_ALT = 213,
	KeyMapItem_key_modifier_LEFT_SHIFT = 217,
	KeyMapItem_key_modifier_RIGHT_ALT = 214,
	KeyMapItem_key_modifier_RIGHT_CTRL = 215,
	KeyMapItem_key_modifier_RIGHT_SHIFT = 216,
	KeyMapItem_key_modifier_OSKEY = 172,
	KeyMapItem_key_modifier_GRLESS = 173,
	KeyMapItem_key_modifier_ESC = 218,
	KeyMapItem_key_modifier_TAB = 219,
	KeyMapItem_key_modifier_RET = 220,
	KeyMapItem_key_modifier_SPACE = 221,
	KeyMapItem_key_modifier_LINE_FEED = 222,
	KeyMapItem_key_modifier_BACK_SPACE = 223,
	KeyMapItem_key_modifier_DEL = 224,
	KeyMapItem_key_modifier_SEMI_COLON = 225,
	KeyMapItem_key_modifier_PERIOD = 226,
	KeyMapItem_key_modifier_COMMA = 227,
	KeyMapItem_key_modifier_QUOTE = 228,
	KeyMapItem_key_modifier_ACCENT_GRAVE = 229,
	KeyMapItem_key_modifier_MINUS = 230,
	KeyMapItem_key_modifier_SLASH = 232,
	KeyMapItem_key_modifier_BACK_SLASH = 233,
	KeyMapItem_key_modifier_EQUAL = 234,
	KeyMapItem_key_modifier_LEFT_BRACKET = 235,
	KeyMapItem_key_modifier_RIGHT_BRACKET = 236,
	KeyMapItem_key_modifier_LEFT_ARROW = 137,
	KeyMapItem_key_modifier_DOWN_ARROW = 138,
	KeyMapItem_key_modifier_RIGHT_ARROW = 139,
	KeyMapItem_key_modifier_UP_ARROW = 140,
	KeyMapItem_key_modifier_NUMPAD_2 = 152,
	KeyMapItem_key_modifier_NUMPAD_4 = 154,
	KeyMapItem_key_modifier_NUMPAD_6 = 156,
	KeyMapItem_key_modifier_NUMPAD_8 = 158,
	KeyMapItem_key_modifier_NUMPAD_1 = 151,
	KeyMapItem_key_modifier_NUMPAD_3 = 153,
	KeyMapItem_key_modifier_NUMPAD_5 = 155,
	KeyMapItem_key_modifier_NUMPAD_7 = 157,
	KeyMapItem_key_modifier_NUMPAD_9 = 159,
	KeyMapItem_key_modifier_NUMPAD_PERIOD = 199,
	KeyMapItem_key_modifier_NUMPAD_SLASH = 161,
	KeyMapItem_key_modifier_NUMPAD_ASTERIX = 160,
	KeyMapItem_key_modifier_NUMPAD_0 = 150,
	KeyMapItem_key_modifier_NUMPAD_MINUS = 162,
	KeyMapItem_key_modifier_NUMPAD_ENTER = 163,
	KeyMapItem_key_modifier_NUMPAD_PLUS = 164,
	KeyMapItem_key_modifier_F1 = 300,
	KeyMapItem_key_modifier_F2 = 301,
	KeyMapItem_key_modifier_F3 = 302,
	KeyMapItem_key_modifier_F4 = 303,
	KeyMapItem_key_modifier_F5 = 304,
	KeyMapItem_key_modifier_F6 = 305,
	KeyMapItem_key_modifier_F7 = 306,
	KeyMapItem_key_modifier_F8 = 307,
	KeyMapItem_key_modifier_F9 = 308,
	KeyMapItem_key_modifier_F10 = 309,
	KeyMapItem_key_modifier_F11 = 310,
	KeyMapItem_key_modifier_F12 = 311,
	KeyMapItem_key_modifier_F13 = 312,
	KeyMapItem_key_modifier_F14 = 313,
	KeyMapItem_key_modifier_F15 = 314,
	KeyMapItem_key_modifier_F16 = 315,
	KeyMapItem_key_modifier_F17 = 316,
	KeyMapItem_key_modifier_F18 = 317,
	KeyMapItem_key_modifier_F19 = 318,
	KeyMapItem_key_modifier_PAUSE = 165,
	KeyMapItem_key_modifier_INSERT = 166,
	KeyMapItem_key_modifier_HOME = 167,
	KeyMapItem_key_modifier_PAGE_UP = 168,
	KeyMapItem_key_modifier_PAGE_DOWN = 169,
	KeyMapItem_key_modifier_END = 170,
	KeyMapItem_key_modifier_WINDOW_DEACTIVATE = 260,
	KeyMapItem_key_modifier_TIMER = 272,
	KeyMapItem_key_modifier_TIMER0 = 273,
	KeyMapItem_key_modifier_TIMER1 = 274,
	KeyMapItem_key_modifier_TIMER2 = 275,
};

int KeyMapItem_key_modifier_get(PointerRNA *ptr);

enum {
	KeyMapItem_map_type_KEYBOARD = 0,
	KeyMapItem_map_type_TWEAK = 2,
	KeyMapItem_map_type_MOUSE = 1,
	KeyMapItem_map_type_TEXTINPUT = 3,
	KeyMapItem_map_type_TIMER = 4,
};

int KeyMapItem_map_type_get(PointerRNA *ptr);

int KeyMapItem_oskey_get(PointerRNA *ptr);

PointerRNA KeyMapItem_properties_get(PointerRNA *ptr);

enum {
	KeyMapItem_propvalue_NONE = 0,
};

int KeyMapItem_propvalue_get(PointerRNA *ptr);

int KeyMapItem_shift_get(PointerRNA *ptr);

enum {
	KeyMapItem_type_NONE = 0,
	KeyMapItem_type_LEFTMOUSE = 1,
	KeyMapItem_type_MIDDLEMOUSE = 2,
	KeyMapItem_type_RIGHTMOUSE = 3,
	KeyMapItem_type_BUTTON4MOUSE = 7,
	KeyMapItem_type_BUTTON5MOUSE = 8,
	KeyMapItem_type_ACTIONMOUSE = 5,
	KeyMapItem_type_SELECTMOUSE = 6,
	KeyMapItem_type_MOUSEMOVE = 4,
	KeyMapItem_type_INBETWEEN_MOUSEMOVE = 17,
	KeyMapItem_type_TRACKPADPAN = 14,
	KeyMapItem_type_TRACKPADZOOM = 15,
	KeyMapItem_type_MOUSEROTATE = 16,
	KeyMapItem_type_WHEELUPMOUSE = 10,
	KeyMapItem_type_WHEELDOWNMOUSE = 11,
	KeyMapItem_type_WHEELINMOUSE = 12,
	KeyMapItem_type_WHEELOUTMOUSE = 13,
	KeyMapItem_type_EVT_TWEAK_L = 20482,
	KeyMapItem_type_EVT_TWEAK_M = 20483,
	KeyMapItem_type_EVT_TWEAK_R = 20484,
	KeyMapItem_type_EVT_TWEAK_A = 20485,
	KeyMapItem_type_EVT_TWEAK_S = 20486,
	KeyMapItem_type_A = 97,
	KeyMapItem_type_B = 98,
	KeyMapItem_type_C = 99,
	KeyMapItem_type_D = 100,
	KeyMapItem_type_E = 101,
	KeyMapItem_type_F = 102,
	KeyMapItem_type_G = 103,
	KeyMapItem_type_H = 104,
	KeyMapItem_type_I = 105,
	KeyMapItem_type_J = 106,
	KeyMapItem_type_K = 107,
	KeyMapItem_type_L = 108,
	KeyMapItem_type_M = 109,
	KeyMapItem_type_N = 110,
	KeyMapItem_type_O = 111,
	KeyMapItem_type_P = 112,
	KeyMapItem_type_Q = 113,
	KeyMapItem_type_R = 114,
	KeyMapItem_type_S = 115,
	KeyMapItem_type_T = 116,
	KeyMapItem_type_U = 117,
	KeyMapItem_type_V = 118,
	KeyMapItem_type_W = 119,
	KeyMapItem_type_X = 120,
	KeyMapItem_type_Y = 121,
	KeyMapItem_type_Z = 122,
	KeyMapItem_type_ZERO = 48,
	KeyMapItem_type_ONE = 49,
	KeyMapItem_type_TWO = 50,
	KeyMapItem_type_THREE = 51,
	KeyMapItem_type_FOUR = 52,
	KeyMapItem_type_FIVE = 53,
	KeyMapItem_type_SIX = 54,
	KeyMapItem_type_SEVEN = 55,
	KeyMapItem_type_EIGHT = 56,
	KeyMapItem_type_NINE = 57,
	KeyMapItem_type_LEFT_CTRL = 212,
	KeyMapItem_type_LEFT_ALT = 213,
	KeyMapItem_type_LEFT_SHIFT = 217,
	KeyMapItem_type_RIGHT_ALT = 214,
	KeyMapItem_type_RIGHT_CTRL = 215,
	KeyMapItem_type_RIGHT_SHIFT = 216,
	KeyMapItem_type_OSKEY = 172,
	KeyMapItem_type_GRLESS = 173,
	KeyMapItem_type_ESC = 218,
	KeyMapItem_type_TAB = 219,
	KeyMapItem_type_RET = 220,
	KeyMapItem_type_SPACE = 221,
	KeyMapItem_type_LINE_FEED = 222,
	KeyMapItem_type_BACK_SPACE = 223,
	KeyMapItem_type_DEL = 224,
	KeyMapItem_type_SEMI_COLON = 225,
	KeyMapItem_type_PERIOD = 226,
	KeyMapItem_type_COMMA = 227,
	KeyMapItem_type_QUOTE = 228,
	KeyMapItem_type_ACCENT_GRAVE = 229,
	KeyMapItem_type_MINUS = 230,
	KeyMapItem_type_SLASH = 232,
	KeyMapItem_type_BACK_SLASH = 233,
	KeyMapItem_type_EQUAL = 234,
	KeyMapItem_type_LEFT_BRACKET = 235,
	KeyMapItem_type_RIGHT_BRACKET = 236,
	KeyMapItem_type_LEFT_ARROW = 137,
	KeyMapItem_type_DOWN_ARROW = 138,
	KeyMapItem_type_RIGHT_ARROW = 139,
	KeyMapItem_type_UP_ARROW = 140,
	KeyMapItem_type_NUMPAD_2 = 152,
	KeyMapItem_type_NUMPAD_4 = 154,
	KeyMapItem_type_NUMPAD_6 = 156,
	KeyMapItem_type_NUMPAD_8 = 158,
	KeyMapItem_type_NUMPAD_1 = 151,
	KeyMapItem_type_NUMPAD_3 = 153,
	KeyMapItem_type_NUMPAD_5 = 155,
	KeyMapItem_type_NUMPAD_7 = 157,
	KeyMapItem_type_NUMPAD_9 = 159,
	KeyMapItem_type_NUMPAD_PERIOD = 199,
	KeyMapItem_type_NUMPAD_SLASH = 161,
	KeyMapItem_type_NUMPAD_ASTERIX = 160,
	KeyMapItem_type_NUMPAD_0 = 150,
	KeyMapItem_type_NUMPAD_MINUS = 162,
	KeyMapItem_type_NUMPAD_ENTER = 163,
	KeyMapItem_type_NUMPAD_PLUS = 164,
	KeyMapItem_type_F1 = 300,
	KeyMapItem_type_F2 = 301,
	KeyMapItem_type_F3 = 302,
	KeyMapItem_type_F4 = 303,
	KeyMapItem_type_F5 = 304,
	KeyMapItem_type_F6 = 305,
	KeyMapItem_type_F7 = 306,
	KeyMapItem_type_F8 = 307,
	KeyMapItem_type_F9 = 308,
	KeyMapItem_type_F10 = 309,
	KeyMapItem_type_F11 = 310,
	KeyMapItem_type_F12 = 311,
	KeyMapItem_type_F13 = 312,
	KeyMapItem_type_F14 = 313,
	KeyMapItem_type_F15 = 314,
	KeyMapItem_type_F16 = 315,
	KeyMapItem_type_F17 = 316,
	KeyMapItem_type_F18 = 317,
	KeyMapItem_type_F19 = 318,
	KeyMapItem_type_PAUSE = 165,
	KeyMapItem_type_INSERT = 166,
	KeyMapItem_type_HOME = 167,
	KeyMapItem_type_PAGE_UP = 168,
	KeyMapItem_type_PAGE_DOWN = 169,
	KeyMapItem_type_END = 170,
	KeyMapItem_type_WINDOW_DEACTIVATE = 260,
	KeyMapItem_type_TIMER = 272,
	KeyMapItem_type_TIMER0 = 273,
	KeyMapItem_type_TIMER1 = 274,
	KeyMapItem_type_TIMER2 = 275,
};

int KeyMapItem_type_get(PointerRNA *ptr);

int KeyMapItem_is_user_defined_get(PointerRNA *ptr);

enum {
	KeyMapItem_value_ANY = -1,
	KeyMapItem_value_NOTHING = 0,
	KeyMapItem_value_PRESS = 1,
	KeyMapItem_value_RELEASE = 2,
	KeyMapItem_value_CLICK = 3,
	KeyMapItem_value_DOUBLE_CLICK = 4,
};

int KeyMapItem_value_get(PointerRNA *ptr);

int KeyMapItem_id_get(PointerRNA *ptr);

/**************** KeyMap Items ****************/

extern StructRNA RNA_KeyMapItems;

PointerRNA KeyMapItems_rna_type_get(PointerRNA *ptr);

/**************** Key Maps ****************/

extern StructRNA RNA_KeyMaps;

PointerRNA KeyMaps_rna_type_get(PointerRNA *ptr);

/**************** Keyboard Sensor ****************/

extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_Sensor;

int KeyboardSensor_use_all_keys_get(PointerRNA *ptr);

enum {
	KeyboardSensor_key_NONE = 0,
	KeyboardSensor_key_LEFTMOUSE = 1,
	KeyboardSensor_key_MIDDLEMOUSE = 2,
	KeyboardSensor_key_RIGHTMOUSE = 3,
	KeyboardSensor_key_BUTTON4MOUSE = 7,
	KeyboardSensor_key_BUTTON5MOUSE = 8,
	KeyboardSensor_key_ACTIONMOUSE = 5,
	KeyboardSensor_key_SELECTMOUSE = 6,
	KeyboardSensor_key_MOUSEMOVE = 4,
	KeyboardSensor_key_INBETWEEN_MOUSEMOVE = 17,
	KeyboardSensor_key_TRACKPADPAN = 14,
	KeyboardSensor_key_TRACKPADZOOM = 15,
	KeyboardSensor_key_MOUSEROTATE = 16,
	KeyboardSensor_key_WHEELUPMOUSE = 10,
	KeyboardSensor_key_WHEELDOWNMOUSE = 11,
	KeyboardSensor_key_WHEELINMOUSE = 12,
	KeyboardSensor_key_WHEELOUTMOUSE = 13,
	KeyboardSensor_key_EVT_TWEAK_L = 20482,
	KeyboardSensor_key_EVT_TWEAK_M = 20483,
	KeyboardSensor_key_EVT_TWEAK_R = 20484,
	KeyboardSensor_key_EVT_TWEAK_A = 20485,
	KeyboardSensor_key_EVT_TWEAK_S = 20486,
	KeyboardSensor_key_A = 97,
	KeyboardSensor_key_B = 98,
	KeyboardSensor_key_C = 99,
	KeyboardSensor_key_D = 100,
	KeyboardSensor_key_E = 101,
	KeyboardSensor_key_F = 102,
	KeyboardSensor_key_G = 103,
	KeyboardSensor_key_H = 104,
	KeyboardSensor_key_I = 105,
	KeyboardSensor_key_J = 106,
	KeyboardSensor_key_K = 107,
	KeyboardSensor_key_L = 108,
	KeyboardSensor_key_M = 109,
	KeyboardSensor_key_N = 110,
	KeyboardSensor_key_O = 111,
	KeyboardSensor_key_P = 112,
	KeyboardSensor_key_Q = 113,
	KeyboardSensor_key_R = 114,
	KeyboardSensor_key_S = 115,
	KeyboardSensor_key_T = 116,
	KeyboardSensor_key_U = 117,
	KeyboardSensor_key_V = 118,
	KeyboardSensor_key_W = 119,
	KeyboardSensor_key_X = 120,
	KeyboardSensor_key_Y = 121,
	KeyboardSensor_key_Z = 122,
	KeyboardSensor_key_ZERO = 48,
	KeyboardSensor_key_ONE = 49,
	KeyboardSensor_key_TWO = 50,
	KeyboardSensor_key_THREE = 51,
	KeyboardSensor_key_FOUR = 52,
	KeyboardSensor_key_FIVE = 53,
	KeyboardSensor_key_SIX = 54,
	KeyboardSensor_key_SEVEN = 55,
	KeyboardSensor_key_EIGHT = 56,
	KeyboardSensor_key_NINE = 57,
	KeyboardSensor_key_LEFT_CTRL = 212,
	KeyboardSensor_key_LEFT_ALT = 213,
	KeyboardSensor_key_LEFT_SHIFT = 217,
	KeyboardSensor_key_RIGHT_ALT = 214,
	KeyboardSensor_key_RIGHT_CTRL = 215,
	KeyboardSensor_key_RIGHT_SHIFT = 216,
	KeyboardSensor_key_OSKEY = 172,
	KeyboardSensor_key_GRLESS = 173,
	KeyboardSensor_key_ESC = 218,
	KeyboardSensor_key_TAB = 219,
	KeyboardSensor_key_RET = 220,
	KeyboardSensor_key_SPACE = 221,
	KeyboardSensor_key_LINE_FEED = 222,
	KeyboardSensor_key_BACK_SPACE = 223,
	KeyboardSensor_key_DEL = 224,
	KeyboardSensor_key_SEMI_COLON = 225,
	KeyboardSensor_key_PERIOD = 226,
	KeyboardSensor_key_COMMA = 227,
	KeyboardSensor_key_QUOTE = 228,
	KeyboardSensor_key_ACCENT_GRAVE = 229,
	KeyboardSensor_key_MINUS = 230,
	KeyboardSensor_key_SLASH = 232,
	KeyboardSensor_key_BACK_SLASH = 233,
	KeyboardSensor_key_EQUAL = 234,
	KeyboardSensor_key_LEFT_BRACKET = 235,
	KeyboardSensor_key_RIGHT_BRACKET = 236,
	KeyboardSensor_key_LEFT_ARROW = 137,
	KeyboardSensor_key_DOWN_ARROW = 138,
	KeyboardSensor_key_RIGHT_ARROW = 139,
	KeyboardSensor_key_UP_ARROW = 140,
	KeyboardSensor_key_NUMPAD_2 = 152,
	KeyboardSensor_key_NUMPAD_4 = 154,
	KeyboardSensor_key_NUMPAD_6 = 156,
	KeyboardSensor_key_NUMPAD_8 = 158,
	KeyboardSensor_key_NUMPAD_1 = 151,
	KeyboardSensor_key_NUMPAD_3 = 153,
	KeyboardSensor_key_NUMPAD_5 = 155,
	KeyboardSensor_key_NUMPAD_7 = 157,
	KeyboardSensor_key_NUMPAD_9 = 159,
	KeyboardSensor_key_NUMPAD_PERIOD = 199,
	KeyboardSensor_key_NUMPAD_SLASH = 161,
	KeyboardSensor_key_NUMPAD_ASTERIX = 160,
	KeyboardSensor_key_NUMPAD_0 = 150,
	KeyboardSensor_key_NUMPAD_MINUS = 162,
	KeyboardSensor_key_NUMPAD_ENTER = 163,
	KeyboardSensor_key_NUMPAD_PLUS = 164,
	KeyboardSensor_key_F1 = 300,
	KeyboardSensor_key_F2 = 301,
	KeyboardSensor_key_F3 = 302,
	KeyboardSensor_key_F4 = 303,
	KeyboardSensor_key_F5 = 304,
	KeyboardSensor_key_F6 = 305,
	KeyboardSensor_key_F7 = 306,
	KeyboardSensor_key_F8 = 307,
	KeyboardSensor_key_F9 = 308,
	KeyboardSensor_key_F10 = 309,
	KeyboardSensor_key_F11 = 310,
	KeyboardSensor_key_F12 = 311,
	KeyboardSensor_key_F13 = 312,
	KeyboardSensor_key_F14 = 313,
	KeyboardSensor_key_F15 = 314,
	KeyboardSensor_key_F16 = 315,
	KeyboardSensor_key_F17 = 316,
	KeyboardSensor_key_F18 = 317,
	KeyboardSensor_key_F19 = 318,
	KeyboardSensor_key_PAUSE = 165,
	KeyboardSensor_key_INSERT = 166,
	KeyboardSensor_key_HOME = 167,
	KeyboardSensor_key_PAGE_UP = 168,
	KeyboardSensor_key_PAGE_DOWN = 169,
	KeyboardSensor_key_END = 170,
	KeyboardSensor_key_WINDOW_DEACTIVATE = 260,
	KeyboardSensor_key_TIMER = 272,
	KeyboardSensor_key_TIMER0 = 273,
	KeyboardSensor_key_TIMER1 = 274,
	KeyboardSensor_key_TIMER2 = 275,
};

int KeyboardSensor_key_get(PointerRNA *ptr);

#define KeyboardSensor_log_MAX 32

void KeyboardSensor_log_get(PointerRNA *ptr, char *value);
int KeyboardSensor_log_length(PointerRNA *ptr);

enum {
	KeyboardSensor_modifier_key_1_NONE = 0,
	KeyboardSensor_modifier_key_1_LEFTMOUSE = 1,
	KeyboardSensor_modifier_key_1_MIDDLEMOUSE = 2,
	KeyboardSensor_modifier_key_1_RIGHTMOUSE = 3,
	KeyboardSensor_modifier_key_1_BUTTON4MOUSE = 7,
	KeyboardSensor_modifier_key_1_BUTTON5MOUSE = 8,
	KeyboardSensor_modifier_key_1_ACTIONMOUSE = 5,
	KeyboardSensor_modifier_key_1_SELECTMOUSE = 6,
	KeyboardSensor_modifier_key_1_MOUSEMOVE = 4,
	KeyboardSensor_modifier_key_1_INBETWEEN_MOUSEMOVE = 17,
	KeyboardSensor_modifier_key_1_TRACKPADPAN = 14,
	KeyboardSensor_modifier_key_1_TRACKPADZOOM = 15,
	KeyboardSensor_modifier_key_1_MOUSEROTATE = 16,
	KeyboardSensor_modifier_key_1_WHEELUPMOUSE = 10,
	KeyboardSensor_modifier_key_1_WHEELDOWNMOUSE = 11,
	KeyboardSensor_modifier_key_1_WHEELINMOUSE = 12,
	KeyboardSensor_modifier_key_1_WHEELOUTMOUSE = 13,
	KeyboardSensor_modifier_key_1_EVT_TWEAK_L = 20482,
	KeyboardSensor_modifier_key_1_EVT_TWEAK_M = 20483,
	KeyboardSensor_modifier_key_1_EVT_TWEAK_R = 20484,
	KeyboardSensor_modifier_key_1_EVT_TWEAK_A = 20485,
	KeyboardSensor_modifier_key_1_EVT_TWEAK_S = 20486,
	KeyboardSensor_modifier_key_1_A = 97,
	KeyboardSensor_modifier_key_1_B = 98,
	KeyboardSensor_modifier_key_1_C = 99,
	KeyboardSensor_modifier_key_1_D = 100,
	KeyboardSensor_modifier_key_1_E = 101,
	KeyboardSensor_modifier_key_1_F = 102,
	KeyboardSensor_modifier_key_1_G = 103,
	KeyboardSensor_modifier_key_1_H = 104,
	KeyboardSensor_modifier_key_1_I = 105,
	KeyboardSensor_modifier_key_1_J = 106,
	KeyboardSensor_modifier_key_1_K = 107,
	KeyboardSensor_modifier_key_1_L = 108,
	KeyboardSensor_modifier_key_1_M = 109,
	KeyboardSensor_modifier_key_1_N = 110,
	KeyboardSensor_modifier_key_1_O = 111,
	KeyboardSensor_modifier_key_1_P = 112,
	KeyboardSensor_modifier_key_1_Q = 113,
	KeyboardSensor_modifier_key_1_R = 114,
	KeyboardSensor_modifier_key_1_S = 115,
	KeyboardSensor_modifier_key_1_T = 116,
	KeyboardSensor_modifier_key_1_U = 117,
	KeyboardSensor_modifier_key_1_V = 118,
	KeyboardSensor_modifier_key_1_W = 119,
	KeyboardSensor_modifier_key_1_X = 120,
	KeyboardSensor_modifier_key_1_Y = 121,
	KeyboardSensor_modifier_key_1_Z = 122,
	KeyboardSensor_modifier_key_1_ZERO = 48,
	KeyboardSensor_modifier_key_1_ONE = 49,
	KeyboardSensor_modifier_key_1_TWO = 50,
	KeyboardSensor_modifier_key_1_THREE = 51,
	KeyboardSensor_modifier_key_1_FOUR = 52,
	KeyboardSensor_modifier_key_1_FIVE = 53,
	KeyboardSensor_modifier_key_1_SIX = 54,
	KeyboardSensor_modifier_key_1_SEVEN = 55,
	KeyboardSensor_modifier_key_1_EIGHT = 56,
	KeyboardSensor_modifier_key_1_NINE = 57,
	KeyboardSensor_modifier_key_1_LEFT_CTRL = 212,
	KeyboardSensor_modifier_key_1_LEFT_ALT = 213,
	KeyboardSensor_modifier_key_1_LEFT_SHIFT = 217,
	KeyboardSensor_modifier_key_1_RIGHT_ALT = 214,
	KeyboardSensor_modifier_key_1_RIGHT_CTRL = 215,
	KeyboardSensor_modifier_key_1_RIGHT_SHIFT = 216,
	KeyboardSensor_modifier_key_1_OSKEY = 172,
	KeyboardSensor_modifier_key_1_GRLESS = 173,
	KeyboardSensor_modifier_key_1_ESC = 218,
	KeyboardSensor_modifier_key_1_TAB = 219,
	KeyboardSensor_modifier_key_1_RET = 220,
	KeyboardSensor_modifier_key_1_SPACE = 221,
	KeyboardSensor_modifier_key_1_LINE_FEED = 222,
	KeyboardSensor_modifier_key_1_BACK_SPACE = 223,
	KeyboardSensor_modifier_key_1_DEL = 224,
	KeyboardSensor_modifier_key_1_SEMI_COLON = 225,
	KeyboardSensor_modifier_key_1_PERIOD = 226,
	KeyboardSensor_modifier_key_1_COMMA = 227,
	KeyboardSensor_modifier_key_1_QUOTE = 228,
	KeyboardSensor_modifier_key_1_ACCENT_GRAVE = 229,
	KeyboardSensor_modifier_key_1_MINUS = 230,
	KeyboardSensor_modifier_key_1_SLASH = 232,
	KeyboardSensor_modifier_key_1_BACK_SLASH = 233,
	KeyboardSensor_modifier_key_1_EQUAL = 234,
	KeyboardSensor_modifier_key_1_LEFT_BRACKET = 235,
	KeyboardSensor_modifier_key_1_RIGHT_BRACKET = 236,
	KeyboardSensor_modifier_key_1_LEFT_ARROW = 137,
	KeyboardSensor_modifier_key_1_DOWN_ARROW = 138,
	KeyboardSensor_modifier_key_1_RIGHT_ARROW = 139,
	KeyboardSensor_modifier_key_1_UP_ARROW = 140,
	KeyboardSensor_modifier_key_1_NUMPAD_2 = 152,
	KeyboardSensor_modifier_key_1_NUMPAD_4 = 154,
	KeyboardSensor_modifier_key_1_NUMPAD_6 = 156,
	KeyboardSensor_modifier_key_1_NUMPAD_8 = 158,
	KeyboardSensor_modifier_key_1_NUMPAD_1 = 151,
	KeyboardSensor_modifier_key_1_NUMPAD_3 = 153,
	KeyboardSensor_modifier_key_1_NUMPAD_5 = 155,
	KeyboardSensor_modifier_key_1_NUMPAD_7 = 157,
	KeyboardSensor_modifier_key_1_NUMPAD_9 = 159,
	KeyboardSensor_modifier_key_1_NUMPAD_PERIOD = 199,
	KeyboardSensor_modifier_key_1_NUMPAD_SLASH = 161,
	KeyboardSensor_modifier_key_1_NUMPAD_ASTERIX = 160,
	KeyboardSensor_modifier_key_1_NUMPAD_0 = 150,
	KeyboardSensor_modifier_key_1_NUMPAD_MINUS = 162,
	KeyboardSensor_modifier_key_1_NUMPAD_ENTER = 163,
	KeyboardSensor_modifier_key_1_NUMPAD_PLUS = 164,
	KeyboardSensor_modifier_key_1_F1 = 300,
	KeyboardSensor_modifier_key_1_F2 = 301,
	KeyboardSensor_modifier_key_1_F3 = 302,
	KeyboardSensor_modifier_key_1_F4 = 303,
	KeyboardSensor_modifier_key_1_F5 = 304,
	KeyboardSensor_modifier_key_1_F6 = 305,
	KeyboardSensor_modifier_key_1_F7 = 306,
	KeyboardSensor_modifier_key_1_F8 = 307,
	KeyboardSensor_modifier_key_1_F9 = 308,
	KeyboardSensor_modifier_key_1_F10 = 309,
	KeyboardSensor_modifier_key_1_F11 = 310,
	KeyboardSensor_modifier_key_1_F12 = 311,
	KeyboardSensor_modifier_key_1_F13 = 312,
	KeyboardSensor_modifier_key_1_F14 = 313,
	KeyboardSensor_modifier_key_1_F15 = 314,
	KeyboardSensor_modifier_key_1_F16 = 315,
	KeyboardSensor_modifier_key_1_F17 = 316,
	KeyboardSensor_modifier_key_1_F18 = 317,
	KeyboardSensor_modifier_key_1_F19 = 318,
	KeyboardSensor_modifier_key_1_PAUSE = 165,
	KeyboardSensor_modifier_key_1_INSERT = 166,
	KeyboardSensor_modifier_key_1_HOME = 167,
	KeyboardSensor_modifier_key_1_PAGE_UP = 168,
	KeyboardSensor_modifier_key_1_PAGE_DOWN = 169,
	KeyboardSensor_modifier_key_1_END = 170,
	KeyboardSensor_modifier_key_1_WINDOW_DEACTIVATE = 260,
	KeyboardSensor_modifier_key_1_TIMER = 272,
	KeyboardSensor_modifier_key_1_TIMER0 = 273,
	KeyboardSensor_modifier_key_1_TIMER1 = 274,
	KeyboardSensor_modifier_key_1_TIMER2 = 275,
};

int KeyboardSensor_modifier_key_1_get(PointerRNA *ptr);

enum {
	KeyboardSensor_modifier_key_2_NONE = 0,
	KeyboardSensor_modifier_key_2_LEFTMOUSE = 1,
	KeyboardSensor_modifier_key_2_MIDDLEMOUSE = 2,
	KeyboardSensor_modifier_key_2_RIGHTMOUSE = 3,
	KeyboardSensor_modifier_key_2_BUTTON4MOUSE = 7,
	KeyboardSensor_modifier_key_2_BUTTON5MOUSE = 8,
	KeyboardSensor_modifier_key_2_ACTIONMOUSE = 5,
	KeyboardSensor_modifier_key_2_SELECTMOUSE = 6,
	KeyboardSensor_modifier_key_2_MOUSEMOVE = 4,
	KeyboardSensor_modifier_key_2_INBETWEEN_MOUSEMOVE = 17,
	KeyboardSensor_modifier_key_2_TRACKPADPAN = 14,
	KeyboardSensor_modifier_key_2_TRACKPADZOOM = 15,
	KeyboardSensor_modifier_key_2_MOUSEROTATE = 16,
	KeyboardSensor_modifier_key_2_WHEELUPMOUSE = 10,
	KeyboardSensor_modifier_key_2_WHEELDOWNMOUSE = 11,
	KeyboardSensor_modifier_key_2_WHEELINMOUSE = 12,
	KeyboardSensor_modifier_key_2_WHEELOUTMOUSE = 13,
	KeyboardSensor_modifier_key_2_EVT_TWEAK_L = 20482,
	KeyboardSensor_modifier_key_2_EVT_TWEAK_M = 20483,
	KeyboardSensor_modifier_key_2_EVT_TWEAK_R = 20484,
	KeyboardSensor_modifier_key_2_EVT_TWEAK_A = 20485,
	KeyboardSensor_modifier_key_2_EVT_TWEAK_S = 20486,
	KeyboardSensor_modifier_key_2_A = 97,
	KeyboardSensor_modifier_key_2_B = 98,
	KeyboardSensor_modifier_key_2_C = 99,
	KeyboardSensor_modifier_key_2_D = 100,
	KeyboardSensor_modifier_key_2_E = 101,
	KeyboardSensor_modifier_key_2_F = 102,
	KeyboardSensor_modifier_key_2_G = 103,
	KeyboardSensor_modifier_key_2_H = 104,
	KeyboardSensor_modifier_key_2_I = 105,
	KeyboardSensor_modifier_key_2_J = 106,
	KeyboardSensor_modifier_key_2_K = 107,
	KeyboardSensor_modifier_key_2_L = 108,
	KeyboardSensor_modifier_key_2_M = 109,
	KeyboardSensor_modifier_key_2_N = 110,
	KeyboardSensor_modifier_key_2_O = 111,
	KeyboardSensor_modifier_key_2_P = 112,
	KeyboardSensor_modifier_key_2_Q = 113,
	KeyboardSensor_modifier_key_2_R = 114,
	KeyboardSensor_modifier_key_2_S = 115,
	KeyboardSensor_modifier_key_2_T = 116,
	KeyboardSensor_modifier_key_2_U = 117,
	KeyboardSensor_modifier_key_2_V = 118,
	KeyboardSensor_modifier_key_2_W = 119,
	KeyboardSensor_modifier_key_2_X = 120,
	KeyboardSensor_modifier_key_2_Y = 121,
	KeyboardSensor_modifier_key_2_Z = 122,
	KeyboardSensor_modifier_key_2_ZERO = 48,
	KeyboardSensor_modifier_key_2_ONE = 49,
	KeyboardSensor_modifier_key_2_TWO = 50,
	KeyboardSensor_modifier_key_2_THREE = 51,
	KeyboardSensor_modifier_key_2_FOUR = 52,
	KeyboardSensor_modifier_key_2_FIVE = 53,
	KeyboardSensor_modifier_key_2_SIX = 54,
	KeyboardSensor_modifier_key_2_SEVEN = 55,
	KeyboardSensor_modifier_key_2_EIGHT = 56,
	KeyboardSensor_modifier_key_2_NINE = 57,
	KeyboardSensor_modifier_key_2_LEFT_CTRL = 212,
	KeyboardSensor_modifier_key_2_LEFT_ALT = 213,
	KeyboardSensor_modifier_key_2_LEFT_SHIFT = 217,
	KeyboardSensor_modifier_key_2_RIGHT_ALT = 214,
	KeyboardSensor_modifier_key_2_RIGHT_CTRL = 215,
	KeyboardSensor_modifier_key_2_RIGHT_SHIFT = 216,
	KeyboardSensor_modifier_key_2_OSKEY = 172,
	KeyboardSensor_modifier_key_2_GRLESS = 173,
	KeyboardSensor_modifier_key_2_ESC = 218,
	KeyboardSensor_modifier_key_2_TAB = 219,
	KeyboardSensor_modifier_key_2_RET = 220,
	KeyboardSensor_modifier_key_2_SPACE = 221,
	KeyboardSensor_modifier_key_2_LINE_FEED = 222,
	KeyboardSensor_modifier_key_2_BACK_SPACE = 223,
	KeyboardSensor_modifier_key_2_DEL = 224,
	KeyboardSensor_modifier_key_2_SEMI_COLON = 225,
	KeyboardSensor_modifier_key_2_PERIOD = 226,
	KeyboardSensor_modifier_key_2_COMMA = 227,
	KeyboardSensor_modifier_key_2_QUOTE = 228,
	KeyboardSensor_modifier_key_2_ACCENT_GRAVE = 229,
	KeyboardSensor_modifier_key_2_MINUS = 230,
	KeyboardSensor_modifier_key_2_SLASH = 232,
	KeyboardSensor_modifier_key_2_BACK_SLASH = 233,
	KeyboardSensor_modifier_key_2_EQUAL = 234,
	KeyboardSensor_modifier_key_2_LEFT_BRACKET = 235,
	KeyboardSensor_modifier_key_2_RIGHT_BRACKET = 236,
	KeyboardSensor_modifier_key_2_LEFT_ARROW = 137,
	KeyboardSensor_modifier_key_2_DOWN_ARROW = 138,
	KeyboardSensor_modifier_key_2_RIGHT_ARROW = 139,
	KeyboardSensor_modifier_key_2_UP_ARROW = 140,
	KeyboardSensor_modifier_key_2_NUMPAD_2 = 152,
	KeyboardSensor_modifier_key_2_NUMPAD_4 = 154,
	KeyboardSensor_modifier_key_2_NUMPAD_6 = 156,
	KeyboardSensor_modifier_key_2_NUMPAD_8 = 158,
	KeyboardSensor_modifier_key_2_NUMPAD_1 = 151,
	KeyboardSensor_modifier_key_2_NUMPAD_3 = 153,
	KeyboardSensor_modifier_key_2_NUMPAD_5 = 155,
	KeyboardSensor_modifier_key_2_NUMPAD_7 = 157,
	KeyboardSensor_modifier_key_2_NUMPAD_9 = 159,
	KeyboardSensor_modifier_key_2_NUMPAD_PERIOD = 199,
	KeyboardSensor_modifier_key_2_NUMPAD_SLASH = 161,
	KeyboardSensor_modifier_key_2_NUMPAD_ASTERIX = 160,
	KeyboardSensor_modifier_key_2_NUMPAD_0 = 150,
	KeyboardSensor_modifier_key_2_NUMPAD_MINUS = 162,
	KeyboardSensor_modifier_key_2_NUMPAD_ENTER = 163,
	KeyboardSensor_modifier_key_2_NUMPAD_PLUS = 164,
	KeyboardSensor_modifier_key_2_F1 = 300,
	KeyboardSensor_modifier_key_2_F2 = 301,
	KeyboardSensor_modifier_key_2_F3 = 302,
	KeyboardSensor_modifier_key_2_F4 = 303,
	KeyboardSensor_modifier_key_2_F5 = 304,
	KeyboardSensor_modifier_key_2_F6 = 305,
	KeyboardSensor_modifier_key_2_F7 = 306,
	KeyboardSensor_modifier_key_2_F8 = 307,
	KeyboardSensor_modifier_key_2_F9 = 308,
	KeyboardSensor_modifier_key_2_F10 = 309,
	KeyboardSensor_modifier_key_2_F11 = 310,
	KeyboardSensor_modifier_key_2_F12 = 311,
	KeyboardSensor_modifier_key_2_F13 = 312,
	KeyboardSensor_modifier_key_2_F14 = 313,
	KeyboardSensor_modifier_key_2_F15 = 314,
	KeyboardSensor_modifier_key_2_F16 = 315,
	KeyboardSensor_modifier_key_2_F17 = 316,
	KeyboardSensor_modifier_key_2_F18 = 317,
	KeyboardSensor_modifier_key_2_F19 = 318,
	KeyboardSensor_modifier_key_2_PAUSE = 165,
	KeyboardSensor_modifier_key_2_INSERT = 166,
	KeyboardSensor_modifier_key_2_HOME = 167,
	KeyboardSensor_modifier_key_2_PAGE_UP = 168,
	KeyboardSensor_modifier_key_2_PAGE_DOWN = 169,
	KeyboardSensor_modifier_key_2_END = 170,
	KeyboardSensor_modifier_key_2_WINDOW_DEACTIVATE = 260,
	KeyboardSensor_modifier_key_2_TIMER = 272,
	KeyboardSensor_modifier_key_2_TIMER0 = 273,
	KeyboardSensor_modifier_key_2_TIMER1 = 274,
	KeyboardSensor_modifier_key_2_TIMER2 = 275,
};

int KeyboardSensor_modifier_key_2_get(PointerRNA *ptr);

#define KeyboardSensor_target_MAX 32

void KeyboardSensor_target_get(PointerRNA *ptr, char *value);
int KeyboardSensor_target_length(PointerRNA *ptr);

/**************** Keyframe ****************/

extern StructRNA RNA_Keyframe;

PointerRNA Keyframe_rna_type_get(PointerRNA *ptr);

void Keyframe_co_get(PointerRNA *ptr, float values[2]);

void Keyframe_handle_left_get(PointerRNA *ptr, float values[2]);

enum {
	Keyframe_handle_left_type_FREE = 0,
	Keyframe_handle_left_type_AUTO = 1,
	Keyframe_handle_left_type_VECTOR = 2,
	Keyframe_handle_left_type_ALIGNED = 3,
};

int Keyframe_handle_left_type_get(PointerRNA *ptr);

int Keyframe_select_left_handle_get(PointerRNA *ptr);

void Keyframe_handle_right_get(PointerRNA *ptr, float values[2]);

enum {
	Keyframe_handle_right_type_FREE = 0,
	Keyframe_handle_right_type_AUTO = 1,
	Keyframe_handle_right_type_VECTOR = 2,
	Keyframe_handle_right_type_ALIGNED = 3,
};

int Keyframe_handle_right_type_get(PointerRNA *ptr);

int Keyframe_select_right_handle_get(PointerRNA *ptr);

enum {
	Keyframe_interpolation_CONSTANT = 0,
	Keyframe_interpolation_LINEAR = 1,
	Keyframe_interpolation_BEZIER = 2,
};

int Keyframe_interpolation_get(PointerRNA *ptr);

int Keyframe_select_control_point_get(PointerRNA *ptr);

enum {
	Keyframe_type_KEYFRAME = 0,
	Keyframe_type_BREAKDOWN = 2,
	Keyframe_type_EXTREME = 1,
	Keyframe_type_JITTER = 3,
};

int Keyframe_type_get(PointerRNA *ptr);

/**************** Keying Set ****************/

extern StructRNA RNA_KeyingSet;

PointerRNA KeyingSet_rna_type_get(PointerRNA *ptr);

#define KeyingSet_name_MAX 64

void KeyingSet_name_get(PointerRNA *ptr, char *value);
int KeyingSet_name_length(PointerRNA *ptr);

int KeyingSet_is_path_absolute_get(PointerRNA *ptr);

enum {
	KeyingSet_bl_options_INSERTKEY_NEEDED = 1,
	KeyingSet_bl_options_INSERTKEY_VISUAL = 2,
	KeyingSet_bl_options_INSERTKEY_XYZ_TO_RGB = 32,
};

int KeyingSet_bl_options_get(PointerRNA *ptr);

void KeyingSet_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void KeyingSet_paths_next(CollectionPropertyIterator *iter);
void KeyingSet_paths_end(CollectionPropertyIterator *iter);

PointerRNA KeyingSet_type_info_get(PointerRNA *ptr);

/**************** Keying Set Info ****************/

extern StructRNA RNA_KeyingSetInfo;

PointerRNA KeyingSetInfo_rna_type_get(PointerRNA *ptr);

void KeyingSetInfo_bl_label_get(PointerRNA *ptr, char *value);
int KeyingSetInfo_bl_label_length(PointerRNA *ptr);

enum {
	KeyingSetInfo_bl_options_INSERTKEY_NEEDED = 1,
	KeyingSetInfo_bl_options_INSERTKEY_VISUAL = 2,
	KeyingSetInfo_bl_options_INSERTKEY_XYZ_TO_RGB = 32,
};

int KeyingSetInfo_bl_options_get(PointerRNA *ptr);

void KeyingSetInfo_bl_idname_get(PointerRNA *ptr, char *value);
int KeyingSetInfo_bl_idname_length(PointerRNA *ptr);

/**************** Keying Set Path ****************/

extern StructRNA RNA_KeyingSetPath;

PointerRNA KeyingSetPath_rna_type_get(PointerRNA *ptr);

void KeyingSetPath_data_path_get(PointerRNA *ptr, char *value);
int KeyingSetPath_data_path_length(PointerRNA *ptr);

int KeyingSetPath_use_entire_array_get(PointerRNA *ptr);

#define KeyingSetPath_group_MAX 64

void KeyingSetPath_group_get(PointerRNA *ptr, char *value);
int KeyingSetPath_group_length(PointerRNA *ptr);

enum {
	KeyingSetPath_group_method_NAMED = 0,
	KeyingSetPath_group_method_NONE = 1,
	KeyingSetPath_group_method_KEYINGSET = 2,
};

int KeyingSetPath_group_method_get(PointerRNA *ptr);

enum {
	KeyingSetPath_id_type_ACTION = 17217,
	KeyingSetPath_id_type_ARMATURE = 21057,
	KeyingSetPath_id_type_BRUSH = 21058,
	KeyingSetPath_id_type_CAMERA = 16707,
	KeyingSetPath_id_type_CURVE = 21827,
	KeyingSetPath_id_type_FONT = 18006,
	KeyingSetPath_id_type_GREASEPENCIL = 17479,
	KeyingSetPath_id_type_GROUP = 21063,
	KeyingSetPath_id_type_IMAGE = 19785,
	KeyingSetPath_id_type_KEY = 17739,
	KeyingSetPath_id_type_LAMP = 16716,
	KeyingSetPath_id_type_LIBRARY = 18764,
	KeyingSetPath_id_type_LATTICE = 21580,
	KeyingSetPath_id_type_MATERIAL = 16717,
	KeyingSetPath_id_type_META = 16973,
	KeyingSetPath_id_type_MESH = 17741,
	KeyingSetPath_id_type_NODETREE = 21582,
	KeyingSetPath_id_type_OBJECT = 16975,
	KeyingSetPath_id_type_PARTICLE = 16720,
	KeyingSetPath_id_type_SCENE = 17235,
	KeyingSetPath_id_type_SCREEN = 21075,
	KeyingSetPath_id_type_SOUND = 20307,
	KeyingSetPath_id_type_TEXT = 22612,
	KeyingSetPath_id_type_TEXTURE = 17748,
	KeyingSetPath_id_type_WORLD = 20311,
	KeyingSetPath_id_type_WINDOWMANAGER = 19799,
};

int KeyingSetPath_id_type_get(PointerRNA *ptr);

PointerRNA KeyingSetPath_id_get(PointerRNA *ptr);

enum {
	KeyingSetPath_bl_options_INSERTKEY_NEEDED = 1,
	KeyingSetPath_bl_options_INSERTKEY_VISUAL = 2,
	KeyingSetPath_bl_options_INSERTKEY_XYZ_TO_RGB = 32,
};

int KeyingSetPath_bl_options_get(PointerRNA *ptr);

int KeyingSetPath_array_index_get(PointerRNA *ptr);

/**************** Keying set paths ****************/

extern StructRNA RNA_KeyingSetPaths;

PointerRNA KeyingSetPaths_rna_type_get(PointerRNA *ptr);

PointerRNA KeyingSetPaths_active_get(PointerRNA *ptr);

int KeyingSetPaths_active_index_get(PointerRNA *ptr);

/**************** Keying Sets ****************/

extern StructRNA RNA_KeyingSets;

PointerRNA KeyingSets_rna_type_get(PointerRNA *ptr);

PointerRNA KeyingSets_active_get(PointerRNA *ptr);

int KeyingSets_active_index_get(PointerRNA *ptr);

/**************** Keying Sets All ****************/

extern StructRNA RNA_KeyingSetsAll;

PointerRNA KeyingSetsAll_rna_type_get(PointerRNA *ptr);

PointerRNA KeyingSetsAll_active_get(PointerRNA *ptr);

int KeyingSetsAll_active_index_get(PointerRNA *ptr);

/**************** Kinematic Constraint ****************/

extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_Constraint;

enum {
	KinematicConstraint_reference_axis_BONE = 0,
	KinematicConstraint_reference_axis_TARGET = 16384,
};

int KinematicConstraint_reference_axis_get(PointerRNA *ptr);

int KinematicConstraint_chain_count_get(PointerRNA *ptr);

float KinematicConstraint_distance_get(PointerRNA *ptr);

enum {
	KinematicConstraint_ik_type_COPY_POSE = 0,
	KinematicConstraint_ik_type_DISTANCE = 1,
};

int KinematicConstraint_ik_type_get(PointerRNA *ptr);

int KinematicConstraint_iterations_get(PointerRNA *ptr);

enum {
	KinematicConstraint_limit_mode_LIMITDIST_INSIDE = 0,
	KinematicConstraint_limit_mode_LIMITDIST_OUTSIDE = 1,
	KinematicConstraint_limit_mode_LIMITDIST_ONSURFACE = 2,
};

int KinematicConstraint_limit_mode_get(PointerRNA *ptr);

int KinematicConstraint_lock_location_x_get(PointerRNA *ptr);

int KinematicConstraint_lock_rotation_x_get(PointerRNA *ptr);

int KinematicConstraint_lock_location_y_get(PointerRNA *ptr);

int KinematicConstraint_lock_rotation_y_get(PointerRNA *ptr);

int KinematicConstraint_lock_location_z_get(PointerRNA *ptr);

int KinematicConstraint_lock_rotation_z_get(PointerRNA *ptr);

float KinematicConstraint_orient_weight_get(PointerRNA *ptr);

float KinematicConstraint_pole_angle_get(PointerRNA *ptr);

#define KinematicConstraint_pole_subtarget_MAX 32

void KinematicConstraint_pole_subtarget_get(PointerRNA *ptr, char *value);
int KinematicConstraint_pole_subtarget_length(PointerRNA *ptr);

PointerRNA KinematicConstraint_pole_target_get(PointerRNA *ptr);

int KinematicConstraint_use_location_get(PointerRNA *ptr);

int KinematicConstraint_use_rotation_get(PointerRNA *ptr);

int KinematicConstraint_use_stretch_get(PointerRNA *ptr);

#define KinematicConstraint_subtarget_MAX 32

void KinematicConstraint_subtarget_get(PointerRNA *ptr, char *value);
int KinematicConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA KinematicConstraint_target_get(PointerRNA *ptr);

int KinematicConstraint_use_target_get(PointerRNA *ptr);

int KinematicConstraint_use_tail_get(PointerRNA *ptr);

float KinematicConstraint_weight_get(PointerRNA *ptr);

/**************** Lamp ****************/

extern StructRNA RNA_Lamp;
extern StructRNA RNA_ID;

PointerRNA Lamp_active_texture_get(PointerRNA *ptr);

int Lamp_active_texture_index_get(PointerRNA *ptr);

PointerRNA Lamp_animation_data_get(PointerRNA *ptr);

void Lamp_color_get(PointerRNA *ptr, float values[3]);

int Lamp_use_diffuse_get(PointerRNA *ptr);

float Lamp_distance_get(PointerRNA *ptr);

float Lamp_energy_get(PointerRNA *ptr);

int Lamp_use_own_layer_get(PointerRNA *ptr);

int Lamp_use_negative_get(PointerRNA *ptr);

int Lamp_use_specular_get(PointerRNA *ptr);

void Lamp_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Lamp_texture_slots_next(CollectionPropertyIterator *iter);
void Lamp_texture_slots_end(CollectionPropertyIterator *iter);

enum {
	Lamp_type_POINT = 0,
	Lamp_type_SUN = 1,
	Lamp_type_SPOT = 2,
	Lamp_type_HEMI = 3,
	Lamp_type_AREA = 4,
};

int Lamp_type_get(PointerRNA *ptr);

/**************** Lamp Sky Settings ****************/

extern StructRNA RNA_LampSkySettings;

PointerRNA LampSkySettings_rna_type_get(PointerRNA *ptr);

int LampSkySettings_use_atmosphere_get(PointerRNA *ptr);

float LampSkySettings_atmosphere_distance_factor_get(PointerRNA *ptr);

float LampSkySettings_atmosphere_extinction_get(PointerRNA *ptr);

float LampSkySettings_atmosphere_inscattering_get(PointerRNA *ptr);

float LampSkySettings_atmosphere_turbidity_get(PointerRNA *ptr);

float LampSkySettings_backscattered_light_get(PointerRNA *ptr);

float LampSkySettings_horizon_brightness_get(PointerRNA *ptr);

float LampSkySettings_spread_get(PointerRNA *ptr);

int LampSkySettings_use_sky_get(PointerRNA *ptr);

float LampSkySettings_sky_blend_get(PointerRNA *ptr);

enum {
	LampSkySettings_sky_blend_type_MIX = 0,
	LampSkySettings_sky_blend_type_ADD = 1,
	LampSkySettings_sky_blend_type_MULTIPLY = 2,
	LampSkySettings_sky_blend_type_SUBTRACT = 3,
	LampSkySettings_sky_blend_type_SCREEN = 4,
	LampSkySettings_sky_blend_type_DIVIDE = 5,
	LampSkySettings_sky_blend_type_DIFFERENCE = 6,
	LampSkySettings_sky_blend_type_DARKEN = 7,
	LampSkySettings_sky_blend_type_LIGHTEN = 8,
	LampSkySettings_sky_blend_type_OVERLAY = 9,
	LampSkySettings_sky_blend_type_DODGE = 10,
	LampSkySettings_sky_blend_type_BURN = 11,
	LampSkySettings_sky_blend_type_HUE = 12,
	LampSkySettings_sky_blend_type_SATURATION = 13,
	LampSkySettings_sky_blend_type_VALUE = 14,
	LampSkySettings_sky_blend_type_COLOR = 15,
};

int LampSkySettings_sky_blend_type_get(PointerRNA *ptr);

enum {
	LampSkySettings_sky_color_space_SMPTE = 0,
	LampSkySettings_sky_color_space_REC709 = 1,
	LampSkySettings_sky_color_space_CIE = 2,
};

int LampSkySettings_sky_color_space_get(PointerRNA *ptr);

float LampSkySettings_sky_exposure_get(PointerRNA *ptr);

float LampSkySettings_sun_brightness_get(PointerRNA *ptr);

float LampSkySettings_sun_intensity_get(PointerRNA *ptr);

float LampSkySettings_sun_size_get(PointerRNA *ptr);

/**************** Lamp Texture Slot ****************/

extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_TextureSlot;

int LampTextureSlot_use_map_color_get(PointerRNA *ptr);

float LampTextureSlot_color_factor_get(PointerRNA *ptr);

PointerRNA LampTextureSlot_object_get(PointerRNA *ptr);

int LampTextureSlot_use_map_shadow_get(PointerRNA *ptr);

float LampTextureSlot_shadow_factor_get(PointerRNA *ptr);

enum {
	LampTextureSlot_texture_coords_GLOBAL = 8,
	LampTextureSlot_texture_coords_VIEW = 128,
	LampTextureSlot_texture_coords_OBJECT = 32,
};

int LampTextureSlot_texture_coords_get(PointerRNA *ptr);

/**************** Texture Slots ****************/

extern StructRNA RNA_LampTextureSlots;

PointerRNA LampTextureSlots_rna_type_get(PointerRNA *ptr);

/**************** Lattice ****************/

extern StructRNA RNA_Lattice;
extern StructRNA RNA_ID;

PointerRNA Lattice_animation_data_get(PointerRNA *ptr);

enum {
	Lattice_interpolation_type_u_KEY_LINEAR = 0,
	Lattice_interpolation_type_u_KEY_CARDINAL = 1,
	Lattice_interpolation_type_u_KEY_BSPLINE = 2,
};

int Lattice_interpolation_type_u_get(PointerRNA *ptr);

enum {
	Lattice_interpolation_type_v_KEY_LINEAR = 0,
	Lattice_interpolation_type_v_KEY_CARDINAL = 1,
	Lattice_interpolation_type_v_KEY_BSPLINE = 2,
};

int Lattice_interpolation_type_v_get(PointerRNA *ptr);

enum {
	Lattice_interpolation_type_w_KEY_LINEAR = 0,
	Lattice_interpolation_type_w_KEY_CARDINAL = 1,
	Lattice_interpolation_type_w_KEY_BSPLINE = 2,
};

int Lattice_interpolation_type_w_get(PointerRNA *ptr);

int Lattice_use_outside_get(PointerRNA *ptr);

void Lattice_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Lattice_points_next(CollectionPropertyIterator *iter);
void Lattice_points_end(CollectionPropertyIterator *iter);

PointerRNA Lattice_shape_keys_get(PointerRNA *ptr);

int Lattice_points_u_get(PointerRNA *ptr);

int Lattice_points_v_get(PointerRNA *ptr);

#define Lattice_vertex_group_MAX 32

void Lattice_vertex_group_get(PointerRNA *ptr, char *value);
int Lattice_vertex_group_length(PointerRNA *ptr);

int Lattice_points_w_get(PointerRNA *ptr);

/**************** Lattice Modifier ****************/

extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_Modifier;

PointerRNA LatticeModifier_object_get(PointerRNA *ptr);

#define LatticeModifier_vertex_group_MAX 32

void LatticeModifier_vertex_group_get(PointerRNA *ptr, char *value);
int LatticeModifier_vertex_group_length(PointerRNA *ptr);

/**************** LatticePoint ****************/

extern StructRNA RNA_LatticePoint;

PointerRNA LatticePoint_rna_type_get(PointerRNA *ptr);

void LatticePoint_co_deform_get(PointerRNA *ptr, float values[3]);

void LatticePoint_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void LatticePoint_groups_next(CollectionPropertyIterator *iter);
void LatticePoint_groups_end(CollectionPropertyIterator *iter);

void LatticePoint_co_get(PointerRNA *ptr, float values[3]);

/**************** Library ****************/

extern StructRNA RNA_Library;
extern StructRNA RNA_ID;

#define Library_filepath_MAX 240

void Library_filepath_get(PointerRNA *ptr, char *value);
int Library_filepath_length(PointerRNA *ptr);

PointerRNA Library_parent_get(PointerRNA *ptr);

/**************** Limit Distance Constraint ****************/

extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_Constraint;

float LimitDistanceConstraint_distance_get(PointerRNA *ptr);

enum {
	LimitDistanceConstraint_limit_mode_LIMITDIST_INSIDE = 0,
	LimitDistanceConstraint_limit_mode_LIMITDIST_OUTSIDE = 1,
	LimitDistanceConstraint_limit_mode_LIMITDIST_ONSURFACE = 2,
};

int LimitDistanceConstraint_limit_mode_get(PointerRNA *ptr);

#define LimitDistanceConstraint_subtarget_MAX 32

void LimitDistanceConstraint_subtarget_get(PointerRNA *ptr, char *value);
int LimitDistanceConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA LimitDistanceConstraint_target_get(PointerRNA *ptr);

/**************** Limit Location Constraint ****************/

extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_Constraint;

int LimitLocationConstraint_use_transform_limit_get(PointerRNA *ptr);

int LimitLocationConstraint_use_max_x_get(PointerRNA *ptr);

float LimitLocationConstraint_max_x_get(PointerRNA *ptr);

int LimitLocationConstraint_use_max_y_get(PointerRNA *ptr);

float LimitLocationConstraint_max_y_get(PointerRNA *ptr);

int LimitLocationConstraint_use_max_z_get(PointerRNA *ptr);

float LimitLocationConstraint_max_z_get(PointerRNA *ptr);

int LimitLocationConstraint_use_min_x_get(PointerRNA *ptr);

float LimitLocationConstraint_min_x_get(PointerRNA *ptr);

int LimitLocationConstraint_use_min_y_get(PointerRNA *ptr);

float LimitLocationConstraint_min_y_get(PointerRNA *ptr);

int LimitLocationConstraint_use_min_z_get(PointerRNA *ptr);

float LimitLocationConstraint_min_z_get(PointerRNA *ptr);

/**************** Limit Rotation Constraint ****************/

extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_Constraint;

int LimitRotationConstraint_use_transform_limit_get(PointerRNA *ptr);

int LimitRotationConstraint_use_limit_x_get(PointerRNA *ptr);

int LimitRotationConstraint_use_limit_y_get(PointerRNA *ptr);

int LimitRotationConstraint_use_limit_z_get(PointerRNA *ptr);

float LimitRotationConstraint_max_x_get(PointerRNA *ptr);

float LimitRotationConstraint_max_y_get(PointerRNA *ptr);

float LimitRotationConstraint_max_z_get(PointerRNA *ptr);

float LimitRotationConstraint_min_x_get(PointerRNA *ptr);

float LimitRotationConstraint_min_y_get(PointerRNA *ptr);

float LimitRotationConstraint_min_z_get(PointerRNA *ptr);

/**************** Limit Size Constraint ****************/

extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_Constraint;

int LimitScaleConstraint_use_transform_limit_get(PointerRNA *ptr);

int LimitScaleConstraint_use_max_x_get(PointerRNA *ptr);

float LimitScaleConstraint_max_x_get(PointerRNA *ptr);

int LimitScaleConstraint_use_max_y_get(PointerRNA *ptr);

float LimitScaleConstraint_max_y_get(PointerRNA *ptr);

int LimitScaleConstraint_use_max_z_get(PointerRNA *ptr);

float LimitScaleConstraint_max_z_get(PointerRNA *ptr);

int LimitScaleConstraint_use_min_x_get(PointerRNA *ptr);

float LimitScaleConstraint_min_x_get(PointerRNA *ptr);

int LimitScaleConstraint_use_min_y_get(PointerRNA *ptr);

float LimitScaleConstraint_min_y_get(PointerRNA *ptr);

int LimitScaleConstraint_use_min_z_get(PointerRNA *ptr);

float LimitScaleConstraint_min_z_get(PointerRNA *ptr);

/**************** Locked Track Constraint ****************/

extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_Constraint;

enum {
	LockedTrackConstraint_lock_axis_LOCK_X = 0,
	LockedTrackConstraint_lock_axis_LOCK_Y = 1,
	LockedTrackConstraint_lock_axis_LOCK_Z = 2,
};

int LockedTrackConstraint_lock_axis_get(PointerRNA *ptr);

#define LockedTrackConstraint_subtarget_MAX 32

void LockedTrackConstraint_subtarget_get(PointerRNA *ptr, char *value);
int LockedTrackConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA LockedTrackConstraint_target_get(PointerRNA *ptr);

enum {
	LockedTrackConstraint_track_axis_TRACK_X = 0,
	LockedTrackConstraint_track_axis_TRACK_Y = 1,
	LockedTrackConstraint_track_axis_TRACK_Z = 2,
	LockedTrackConstraint_track_axis_TRACK_NEGATIVE_X = 3,
	LockedTrackConstraint_track_axis_TRACK_NEGATIVE_Y = 4,
	LockedTrackConstraint_track_axis_TRACK_NEGATIVE_Z = 5,
};

int LockedTrackConstraint_track_axis_get(PointerRNA *ptr);

/**************** Macro Operator ****************/

extern StructRNA RNA_Macro;

PointerRNA Macro_rna_type_get(PointerRNA *ptr);

void Macro_name_get(PointerRNA *ptr, char *value);
int Macro_name_length(PointerRNA *ptr);

enum {
	Macro_bl_options_REGISTER = 1,
	Macro_bl_options_UNDO = 2,
	Macro_bl_options_BLOCKING = 4,
	Macro_bl_options_MACRO = 8,
	Macro_bl_options_GRAB_POINTER = 16,
	Macro_bl_options_PRESET = 32,
};

int Macro_bl_options_get(PointerRNA *ptr);

PointerRNA Macro_properties_get(PointerRNA *ptr);

#define Macro_bl_description_MAX 1024

void Macro_bl_description_get(PointerRNA *ptr, char *value);
int Macro_bl_description_length(PointerRNA *ptr);

#define Macro_bl_idname_MAX 64

void Macro_bl_idname_get(PointerRNA *ptr, char *value);
int Macro_bl_idname_length(PointerRNA *ptr);

#define Macro_bl_label_MAX 1024

void Macro_bl_label_get(PointerRNA *ptr, char *value);
int Macro_bl_label_length(PointerRNA *ptr);

/**************** Magic Texture ****************/

extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

int MagicTexture_noise_depth_get(PointerRNA *ptr);

float MagicTexture_turbulence_get(PointerRNA *ptr);

/**************** Maintain Volume Constraint ****************/

extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_Constraint;

enum {
	MaintainVolumeConstraint_free_axis_SAMEVOL_X = 0,
	MaintainVolumeConstraint_free_axis_SAMEVOL_Y = 1,
	MaintainVolumeConstraint_free_axis_SAMEVOL_Z = 2,
};

int MaintainVolumeConstraint_free_axis_get(PointerRNA *ptr);

float MaintainVolumeConstraint_volume_get(PointerRNA *ptr);

/**************** Marble Texture ****************/

extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

float MarbleTexture_nabla_get(PointerRNA *ptr);

enum {
	MarbleTexture_noise_basis_BLENDER_ORIGINAL = 0,
	MarbleTexture_noise_basis_ORIGINAL_PERLIN = 1,
	MarbleTexture_noise_basis_IMPROVED_PERLIN = 2,
	MarbleTexture_noise_basis_VORONOI_F1 = 3,
	MarbleTexture_noise_basis_VORONOI_F2 = 4,
	MarbleTexture_noise_basis_VORONOI_F3 = 5,
	MarbleTexture_noise_basis_VORONOI_F4 = 6,
	MarbleTexture_noise_basis_VORONOI_F2_F1 = 7,
	MarbleTexture_noise_basis_VORONOI_CRACKLE = 8,
	MarbleTexture_noise_basis_CELL_NOISE = 14,
};

int MarbleTexture_noise_basis_get(PointerRNA *ptr);

enum {
	MarbleTexture_noisebasis_2_SIN = 0,
	MarbleTexture_noisebasis_2_SAW = 1,
	MarbleTexture_noisebasis_2_TRI = 2,
};

int MarbleTexture_noisebasis_2_get(PointerRNA *ptr);

int MarbleTexture_noise_depth_get(PointerRNA *ptr);

float MarbleTexture_noise_scale_get(PointerRNA *ptr);

enum {
	MarbleTexture_noise_type_SOFT_NOISE = 0,
	MarbleTexture_noise_type_HARD_NOISE = 1,
};

int MarbleTexture_noise_type_get(PointerRNA *ptr);

enum {
	MarbleTexture_marble_type_SOFT = 0,
	MarbleTexture_marble_type_SHARP = 1,
	MarbleTexture_marble_type_SHARPER = 2,
};

int MarbleTexture_marble_type_get(PointerRNA *ptr);

float MarbleTexture_turbulence_get(PointerRNA *ptr);

/**************** Mask Modifier ****************/

extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_Modifier;

PointerRNA MaskModifier_armature_get(PointerRNA *ptr);

int MaskModifier_invert_vertex_group_get(PointerRNA *ptr);

enum {
	MaskModifier_mode_VERTEX_GROUP = 0,
	MaskModifier_mode_ARMATURE = 1,
};

int MaskModifier_mode_get(PointerRNA *ptr);

#define MaskModifier_vertex_group_MAX 32

void MaskModifier_vertex_group_get(PointerRNA *ptr, char *value);
int MaskModifier_vertex_group_length(PointerRNA *ptr);

/**************** Material ****************/

extern StructRNA RNA_Material;
extern StructRNA RNA_ID;

PointerRNA Material_active_texture_get(PointerRNA *ptr);

int Material_active_texture_index_get(PointerRNA *ptr);

float Material_alpha_get(PointerRNA *ptr);

float Material_ambient_get(PointerRNA *ptr);

PointerRNA Material_animation_data_get(PointerRNA *ptr);

int Material_use_cast_approximate_get(PointerRNA *ptr);

int Material_use_cast_buffer_shadows_get(PointerRNA *ptr);

int Material_use_cast_shadows_only_get(PointerRNA *ptr);

int Material_use_cubic_get(PointerRNA *ptr);

float Material_darkness_get(PointerRNA *ptr);

void Material_diffuse_color_get(PointerRNA *ptr, float values[3]);

float Material_diffuse_fresnel_get(PointerRNA *ptr);

float Material_diffuse_fresnel_factor_get(PointerRNA *ptr);

float Material_diffuse_intensity_get(PointerRNA *ptr);

PointerRNA Material_diffuse_ramp_get(PointerRNA *ptr);

enum {
	Material_diffuse_ramp_blend_MIX = 0,
	Material_diffuse_ramp_blend_ADD = 1,
	Material_diffuse_ramp_blend_MULTIPLY = 2,
	Material_diffuse_ramp_blend_SUBTRACT = 3,
	Material_diffuse_ramp_blend_SCREEN = 4,
	Material_diffuse_ramp_blend_DIVIDE = 5,
	Material_diffuse_ramp_blend_DIFFERENCE = 6,
	Material_diffuse_ramp_blend_DARKEN = 7,
	Material_diffuse_ramp_blend_LIGHTEN = 8,
	Material_diffuse_ramp_blend_OVERLAY = 9,
	Material_diffuse_ramp_blend_DODGE = 10,
	Material_diffuse_ramp_blend_BURN = 11,
	Material_diffuse_ramp_blend_HUE = 12,
	Material_diffuse_ramp_blend_SATURATION = 13,
	Material_diffuse_ramp_blend_VALUE = 14,
	Material_diffuse_ramp_blend_COLOR = 15,
	Material_diffuse_ramp_blend_SOFT_LIGHT = 16,
	Material_diffuse_ramp_blend_LINEAR_LIGHT = 17,
};

int Material_diffuse_ramp_blend_get(PointerRNA *ptr);

enum {
	Material_specular_ramp_blend_MIX = 0,
	Material_specular_ramp_blend_ADD = 1,
	Material_specular_ramp_blend_MULTIPLY = 2,
	Material_specular_ramp_blend_SUBTRACT = 3,
	Material_specular_ramp_blend_SCREEN = 4,
	Material_specular_ramp_blend_DIVIDE = 5,
	Material_specular_ramp_blend_DIFFERENCE = 6,
	Material_specular_ramp_blend_DARKEN = 7,
	Material_specular_ramp_blend_LIGHTEN = 8,
	Material_specular_ramp_blend_OVERLAY = 9,
	Material_specular_ramp_blend_DODGE = 10,
	Material_specular_ramp_blend_BURN = 11,
	Material_specular_ramp_blend_HUE = 12,
	Material_specular_ramp_blend_SATURATION = 13,
	Material_specular_ramp_blend_VALUE = 14,
	Material_specular_ramp_blend_COLOR = 15,
	Material_specular_ramp_blend_SOFT_LIGHT = 16,
	Material_specular_ramp_blend_LINEAR_LIGHT = 17,
};

int Material_specular_ramp_blend_get(PointerRNA *ptr);

float Material_diffuse_ramp_factor_get(PointerRNA *ptr);

enum {
	Material_diffuse_ramp_input_SHADER = 0,
	Material_diffuse_ramp_input_ENERGY = 1,
	Material_diffuse_ramp_input_NORMAL = 2,
	Material_diffuse_ramp_input_RESULT = 3,
};

int Material_diffuse_ramp_input_get(PointerRNA *ptr);

enum {
	Material_diffuse_shader_LAMBERT = 0,
	Material_diffuse_shader_OREN_NAYAR = 1,
	Material_diffuse_shader_TOON = 2,
	Material_diffuse_shader_MINNAERT = 3,
	Material_diffuse_shader_FRESNEL = 4,
};

int Material_diffuse_shader_get(PointerRNA *ptr);

float Material_diffuse_toon_size_get(PointerRNA *ptr);

float Material_diffuse_toon_smooth_get(PointerRNA *ptr);

float Material_emit_get(PointerRNA *ptr);

int Material_use_face_texture_get(PointerRNA *ptr);

int Material_use_face_texture_alpha_get(PointerRNA *ptr);

int Material_use_full_oversampling_get(PointerRNA *ptr);

PointerRNA Material_halo_get(PointerRNA *ptr);

int Material_invert_z_get(PointerRNA *ptr);

PointerRNA Material_light_group_get(PointerRNA *ptr);

int Material_use_light_group_exclusive_get(PointerRNA *ptr);

PointerRNA Material_active_node_material_get(PointerRNA *ptr);

void Material_mirror_color_get(PointerRNA *ptr, float values[3]);

PointerRNA Material_node_tree_get(PointerRNA *ptr);

int Material_use_object_color_get(PointerRNA *ptr);

int Material_use_only_shadow_get(PointerRNA *ptr);

PointerRNA Material_physics_get(PointerRNA *ptr);

enum {
	Material_preview_render_type_FLAT = 0,
	Material_preview_render_type_SPHERE = 1,
	Material_preview_render_type_CUBE = 2,
	Material_preview_render_type_MONKEY = 3,
	Material_preview_render_type_HAIR = 10,
	Material_preview_render_type_SPHERE_A = 4,
};

int Material_preview_render_type_get(PointerRNA *ptr);

int Material_use_ray_shadow_bias_get(PointerRNA *ptr);

PointerRNA Material_raytrace_mirror_get(PointerRNA *ptr);

PointerRNA Material_raytrace_transparency_get(PointerRNA *ptr);

int Material_use_transparent_shadows_get(PointerRNA *ptr);

float Material_roughness_get(PointerRNA *ptr);

int Material_use_shadeless_get(PointerRNA *ptr);

float Material_shadow_buffer_bias_get(PointerRNA *ptr);

float Material_shadow_cast_alpha_get(PointerRNA *ptr);

float Material_shadow_ray_bias_get(PointerRNA *ptr);

int Material_use_shadows_get(PointerRNA *ptr);

int Material_use_sky_get(PointerRNA *ptr);

float Material_specular_alpha_get(PointerRNA *ptr);

void Material_specular_color_get(PointerRNA *ptr, float values[3]);

int Material_specular_hardness_get(PointerRNA *ptr);

float Material_specular_ior_get(PointerRNA *ptr);

float Material_specular_intensity_get(PointerRNA *ptr);

PointerRNA Material_specular_ramp_get(PointerRNA *ptr);

float Material_specular_ramp_factor_get(PointerRNA *ptr);

enum {
	Material_specular_ramp_input_SHADER = 0,
	Material_specular_ramp_input_ENERGY = 1,
	Material_specular_ramp_input_NORMAL = 2,
	Material_specular_ramp_input_RESULT = 3,
};

int Material_specular_ramp_input_get(PointerRNA *ptr);

enum {
	Material_specular_shader_COOKTORR = 0,
	Material_specular_shader_PHONG = 1,
	Material_specular_shader_BLINN = 2,
	Material_specular_shader_TOON = 3,
	Material_specular_shader_WARDISO = 4,
};

int Material_specular_shader_get(PointerRNA *ptr);

float Material_specular_slope_get(PointerRNA *ptr);

float Material_specular_toon_size_get(PointerRNA *ptr);

float Material_specular_toon_smooth_get(PointerRNA *ptr);

PointerRNA Material_strand_get(PointerRNA *ptr);

PointerRNA Material_subsurface_scattering_get(PointerRNA *ptr);

int Material_use_tangent_shading_get(PointerRNA *ptr);

void Material_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Material_texture_slots_next(CollectionPropertyIterator *iter);
void Material_texture_slots_end(CollectionPropertyIterator *iter);

int Material_use_raytrace_get(PointerRNA *ptr);

float Material_translucency_get(PointerRNA *ptr);

int Material_use_transparency_get(PointerRNA *ptr);

enum {
	Material_transparency_method_Z_TRANSPARENCY = 64,
	Material_transparency_method_RAYTRACE = 131072,
};

int Material_transparency_method_get(PointerRNA *ptr);

enum {
	Material_type_SURFACE = 0,
	Material_type_WIRE = 3,
	Material_type_VOLUME = 2,
	Material_type_HALO = 1,
};

int Material_type_get(PointerRNA *ptr);

int Material_use_diffuse_ramp_get(PointerRNA *ptr);

int Material_use_mist_get(PointerRNA *ptr);

int Material_use_nodes_get(PointerRNA *ptr);

int Material_use_specular_ramp_get(PointerRNA *ptr);

void Material_use_textures_get(PointerRNA *ptr, int values[18]);

int Material_use_vertex_color_light_get(PointerRNA *ptr);

int Material_use_vertex_color_paint_get(PointerRNA *ptr);

PointerRNA Material_volume_get(PointerRNA *ptr);

float Material_offset_z_get(PointerRNA *ptr);

/**************** Material Halo ****************/

extern StructRNA RNA_MaterialHalo;

PointerRNA MaterialHalo_rna_type_get(PointerRNA *ptr);

float MaterialHalo_add_get(PointerRNA *ptr);

int MaterialHalo_use_extreme_alpha_get(PointerRNA *ptr);

int MaterialHalo_use_flare_mode_get(PointerRNA *ptr);

float MaterialHalo_flare_boost_get(PointerRNA *ptr);

int MaterialHalo_flare_seed_get(PointerRNA *ptr);

float MaterialHalo_flare_size_get(PointerRNA *ptr);

float MaterialHalo_flare_subflare_size_get(PointerRNA *ptr);

int MaterialHalo_flare_subflare_count_get(PointerRNA *ptr);

int MaterialHalo_hardness_get(PointerRNA *ptr);

int MaterialHalo_line_count_get(PointerRNA *ptr);

int MaterialHalo_use_lines_get(PointerRNA *ptr);

int MaterialHalo_ring_count_get(PointerRNA *ptr);

int MaterialHalo_use_ring_get(PointerRNA *ptr);

int MaterialHalo_seed_get(PointerRNA *ptr);

int MaterialHalo_use_shaded_get(PointerRNA *ptr);

float MaterialHalo_size_get(PointerRNA *ptr);

int MaterialHalo_use_soft_get(PointerRNA *ptr);

int MaterialHalo_use_star_get(PointerRNA *ptr);

int MaterialHalo_star_tip_count_get(PointerRNA *ptr);

int MaterialHalo_use_texture_get(PointerRNA *ptr);

int MaterialHalo_use_vertex_normal_get(PointerRNA *ptr);

/**************** Material Physics ****************/

extern StructRNA RNA_MaterialPhysics;

PointerRNA MaterialPhysics_rna_type_get(PointerRNA *ptr);

int MaterialPhysics_use_normal_align_get(PointerRNA *ptr);

float MaterialPhysics_damping_get(PointerRNA *ptr);

float MaterialPhysics_distance_get(PointerRNA *ptr);

float MaterialPhysics_elasticity_get(PointerRNA *ptr);

float MaterialPhysics_force_get(PointerRNA *ptr);

float MaterialPhysics_friction_get(PointerRNA *ptr);

/**************** Material Raytrace Mirror ****************/

extern StructRNA RNA_MaterialRaytraceMirror;

PointerRNA MaterialRaytraceMirror_rna_type_get(PointerRNA *ptr);

int MaterialRaytraceMirror_depth_get(PointerRNA *ptr);

int MaterialRaytraceMirror_use_get(PointerRNA *ptr);

enum {
	MaterialRaytraceMirror_fade_to_FADE_TO_SKY = 0,
	MaterialRaytraceMirror_fade_to_FADE_TO_MATERIAL = 1,
};

int MaterialRaytraceMirror_fade_to_get(PointerRNA *ptr);

float MaterialRaytraceMirror_fresnel_get(PointerRNA *ptr);

float MaterialRaytraceMirror_fresnel_factor_get(PointerRNA *ptr);

float MaterialRaytraceMirror_gloss_factor_get(PointerRNA *ptr);

float MaterialRaytraceMirror_gloss_anisotropic_get(PointerRNA *ptr);

int MaterialRaytraceMirror_gloss_samples_get(PointerRNA *ptr);

float MaterialRaytraceMirror_gloss_threshold_get(PointerRNA *ptr);

float MaterialRaytraceMirror_distance_get(PointerRNA *ptr);

float MaterialRaytraceMirror_reflect_factor_get(PointerRNA *ptr);

/**************** Material Raytrace Transparency ****************/

extern StructRNA RNA_MaterialRaytraceTransparency;

PointerRNA MaterialRaytraceTransparency_rna_type_get(PointerRNA *ptr);

int MaterialRaytraceTransparency_depth_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_falloff_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_filter_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_fresnel_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_fresnel_factor_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_gloss_factor_get(PointerRNA *ptr);

int MaterialRaytraceTransparency_gloss_samples_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_gloss_threshold_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_ior_get(PointerRNA *ptr);

float MaterialRaytraceTransparency_depth_max_get(PointerRNA *ptr);

/**************** Material Slot ****************/

extern StructRNA RNA_MaterialSlot;

PointerRNA MaterialSlot_rna_type_get(PointerRNA *ptr);

void MaterialSlot_name_get(PointerRNA *ptr, char *value);
int MaterialSlot_name_length(PointerRNA *ptr);

enum {
	MaterialSlot_link_OBJECT = 1,
	MaterialSlot_link_DATA = 0,
};

int MaterialSlot_link_get(PointerRNA *ptr);

PointerRNA MaterialSlot_material_get(PointerRNA *ptr);

/**************** Material Strand ****************/

extern StructRNA RNA_MaterialStrand;

PointerRNA MaterialStrand_rna_type_get(PointerRNA *ptr);

float MaterialStrand_blend_distance_get(PointerRNA *ptr);

int MaterialStrand_use_blender_units_get(PointerRNA *ptr);

float MaterialStrand_size_min_get(PointerRNA *ptr);

float MaterialStrand_root_size_get(PointerRNA *ptr);

float MaterialStrand_shape_get(PointerRNA *ptr);

int MaterialStrand_use_surface_diffuse_get(PointerRNA *ptr);

int MaterialStrand_use_tangent_shading_get(PointerRNA *ptr);

float MaterialStrand_tip_size_get(PointerRNA *ptr);

#define MaterialStrand_uv_layer_MAX 32

void MaterialStrand_uv_layer_get(PointerRNA *ptr, char *value);
int MaterialStrand_uv_layer_length(PointerRNA *ptr);

float MaterialStrand_width_fade_get(PointerRNA *ptr);

/**************** Material Subsurface Scattering ****************/

extern StructRNA RNA_MaterialSubsurfaceScattering;

PointerRNA MaterialSubsurfaceScattering_rna_type_get(PointerRNA *ptr);

float MaterialSubsurfaceScattering_back_get(PointerRNA *ptr);

void MaterialSubsurfaceScattering_color_get(PointerRNA *ptr, float values[3]);

float MaterialSubsurfaceScattering_color_factor_get(PointerRNA *ptr);

int MaterialSubsurfaceScattering_use_get(PointerRNA *ptr);

float MaterialSubsurfaceScattering_error_threshold_get(PointerRNA *ptr);

float MaterialSubsurfaceScattering_front_get(PointerRNA *ptr);

float MaterialSubsurfaceScattering_ior_get(PointerRNA *ptr);

void MaterialSubsurfaceScattering_radius_get(PointerRNA *ptr, float values[3]);

float MaterialSubsurfaceScattering_scale_get(PointerRNA *ptr);

float MaterialSubsurfaceScattering_texture_factor_get(PointerRNA *ptr);

/**************** Material Texture Slot ****************/

extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_TextureSlot;

int MaterialTextureSlot_use_map_alpha_get(PointerRNA *ptr);

float MaterialTextureSlot_alpha_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_ambient_get(PointerRNA *ptr);

float MaterialTextureSlot_ambient_factor_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_bump_method_BUMP_ORIGINAL = 0,
	MaterialTextureSlot_bump_method_BUMP_COMPATIBLE = 128,
	MaterialTextureSlot_bump_method_BUMP_DEFAULT = 256,
	MaterialTextureSlot_bump_method_BUMP_BEST_QUALITY = 512,
};

int MaterialTextureSlot_bump_method_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_bump_objectspace_BUMP_VIEWSPACE = 0,
	MaterialTextureSlot_bump_objectspace_BUMP_OBJECTSPACE = 1024,
	MaterialTextureSlot_bump_objectspace_BUMP_TEXTURESPACE = 2048,
};

int MaterialTextureSlot_bump_objectspace_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_density_get(PointerRNA *ptr);

float MaterialTextureSlot_density_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_diffuse_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_color_diffuse_get(PointerRNA *ptr);

float MaterialTextureSlot_diffuse_color_factor_get(PointerRNA *ptr);

float MaterialTextureSlot_diffuse_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_displacement_get(PointerRNA *ptr);

float MaterialTextureSlot_displacement_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_emission_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_color_emission_get(PointerRNA *ptr);

float MaterialTextureSlot_emission_color_factor_get(PointerRNA *ptr);

float MaterialTextureSlot_emission_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_emit_get(PointerRNA *ptr);

float MaterialTextureSlot_emit_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_get(PointerRNA *ptr);

int MaterialTextureSlot_use_from_dupli_get(PointerRNA *ptr);

int MaterialTextureSlot_use_from_original_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_hardness_get(PointerRNA *ptr);

float MaterialTextureSlot_hardness_factor_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_mapping_FLAT = 0,
	MaterialTextureSlot_mapping_CUBE = 1,
	MaterialTextureSlot_mapping_TUBE = 2,
	MaterialTextureSlot_mapping_SPHERE = 3,
};

int MaterialTextureSlot_mapping_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_mirror_get(PointerRNA *ptr);

float MaterialTextureSlot_mirror_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_normal_get(PointerRNA *ptr);

float MaterialTextureSlot_normal_factor_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_normal_map_space_CAMERA = 0,
	MaterialTextureSlot_normal_map_space_WORLD = 1,
	MaterialTextureSlot_normal_map_space_OBJECT = 2,
	MaterialTextureSlot_normal_map_space_TANGENT = 3,
};

int MaterialTextureSlot_normal_map_space_get(PointerRNA *ptr);

PointerRNA MaterialTextureSlot_object_get(PointerRNA *ptr);

float MaterialTextureSlot_raymir_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_raymir_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_reflect_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_color_reflection_get(PointerRNA *ptr);

float MaterialTextureSlot_reflection_color_factor_get(PointerRNA *ptr);

float MaterialTextureSlot_reflection_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_scatter_get(PointerRNA *ptr);

float MaterialTextureSlot_scattering_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_specular_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_color_spec_get(PointerRNA *ptr);

float MaterialTextureSlot_specular_color_factor_get(PointerRNA *ptr);

float MaterialTextureSlot_specular_factor_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_texture_coords_GLOBAL = 8,
	MaterialTextureSlot_texture_coords_OBJECT = 32,
	MaterialTextureSlot_texture_coords_UV = 16,
	MaterialTextureSlot_texture_coords_ORCO = 1,
	MaterialTextureSlot_texture_coords_STRAND = 8192,
	MaterialTextureSlot_texture_coords_STICKY = 256,
	MaterialTextureSlot_texture_coords_WINDOW = 1024,
	MaterialTextureSlot_texture_coords_NORMAL = 4,
	MaterialTextureSlot_texture_coords_REFLECTION = 2,
	MaterialTextureSlot_texture_coords_STRESS = 16384,
	MaterialTextureSlot_texture_coords_TANGENT = 4096,
};

int MaterialTextureSlot_texture_coords_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_translucency_get(PointerRNA *ptr);

float MaterialTextureSlot_translucency_factor_get(PointerRNA *ptr);

int MaterialTextureSlot_use_map_color_transmission_get(PointerRNA *ptr);

float MaterialTextureSlot_transmission_color_factor_get(PointerRNA *ptr);

#define MaterialTextureSlot_uv_layer_MAX 32

void MaterialTextureSlot_uv_layer_get(PointerRNA *ptr, char *value);
int MaterialTextureSlot_uv_layer_length(PointerRNA *ptr);

int MaterialTextureSlot_use_map_warp_get(PointerRNA *ptr);

float MaterialTextureSlot_warp_factor_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_mapping_x_NONE = 0,
	MaterialTextureSlot_mapping_x_X = 1,
	MaterialTextureSlot_mapping_x_Y = 2,
	MaterialTextureSlot_mapping_x_Z = 3,
};

int MaterialTextureSlot_mapping_x_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_mapping_y_NONE = 0,
	MaterialTextureSlot_mapping_y_X = 1,
	MaterialTextureSlot_mapping_y_Y = 2,
	MaterialTextureSlot_mapping_y_Z = 3,
};

int MaterialTextureSlot_mapping_y_get(PointerRNA *ptr);

enum {
	MaterialTextureSlot_mapping_z_NONE = 0,
	MaterialTextureSlot_mapping_z_X = 1,
	MaterialTextureSlot_mapping_z_Y = 2,
	MaterialTextureSlot_mapping_z_Z = 3,
};

int MaterialTextureSlot_mapping_z_get(PointerRNA *ptr);

/**************** Texture Slots ****************/

extern StructRNA RNA_MaterialTextureSlots;

PointerRNA MaterialTextureSlots_rna_type_get(PointerRNA *ptr);

/**************** Material Volume ****************/

extern StructRNA RNA_MaterialVolume;

PointerRNA MaterialVolume_rna_type_get(PointerRNA *ptr);

float MaterialVolume_asymmetry_get(PointerRNA *ptr);

float MaterialVolume_density_get(PointerRNA *ptr);

float MaterialVolume_density_scale_get(PointerRNA *ptr);

float MaterialVolume_depth_threshold_get(PointerRNA *ptr);

float MaterialVolume_ms_diffusion_get(PointerRNA *ptr);

float MaterialVolume_emission_get(PointerRNA *ptr);

void MaterialVolume_emission_color_get(PointerRNA *ptr, float values[3]);

int MaterialVolume_use_external_shadows_get(PointerRNA *ptr);

float MaterialVolume_ms_intensity_get(PointerRNA *ptr);

int MaterialVolume_use_light_cache_get(PointerRNA *ptr);

enum {
	MaterialVolume_light_method_SHADELESS = 0,
	MaterialVolume_light_method_SHADOWED = 2,
	MaterialVolume_light_method_SHADED = 1,
	MaterialVolume_light_method_MULTIPLE_SCATTERING = 3,
	MaterialVolume_light_method_SHADED_PLUS_MULTIPLE_SCATTERING = 4,
};

int MaterialVolume_light_method_get(PointerRNA *ptr);

float MaterialVolume_reflection_get(PointerRNA *ptr);

void MaterialVolume_reflection_color_get(PointerRNA *ptr, float values[3]);

int MaterialVolume_cache_resolution_get(PointerRNA *ptr);

float MaterialVolume_scattering_get(PointerRNA *ptr);

float MaterialVolume_ms_spread_get(PointerRNA *ptr);

enum {
	MaterialVolume_step_method_RANDOMIZED = 0,
	MaterialVolume_step_method_CONSTANT = 1,
};

int MaterialVolume_step_method_get(PointerRNA *ptr);

float MaterialVolume_step_size_get(PointerRNA *ptr);

void MaterialVolume_transmission_color_get(PointerRNA *ptr, float values[3]);

/**************** Menu ****************/

extern StructRNA RNA_Menu;

PointerRNA Menu_rna_type_get(PointerRNA *ptr);

void Menu_bl_idname_get(PointerRNA *ptr, char *value);
int Menu_bl_idname_length(PointerRNA *ptr);

void Menu_bl_label_get(PointerRNA *ptr, char *value);
int Menu_bl_label_length(PointerRNA *ptr);

PointerRNA Menu_layout_get(PointerRNA *ptr);

/**************** Mesh ****************/

extern StructRNA RNA_Mesh;
extern StructRNA RNA_ID;

int Mesh_show_all_edges_get(PointerRNA *ptr);

PointerRNA Mesh_animation_data_get(PointerRNA *ptr);

int Mesh_use_auto_smooth_get(PointerRNA *ptr);

int Mesh_auto_smooth_angle_get(PointerRNA *ptr);

int Mesh_use_auto_texspace_get(PointerRNA *ptr);

PointerRNA Mesh_uv_texture_clone_get(PointerRNA *ptr);

int Mesh_uv_texture_clone_index_get(PointerRNA *ptr);

int Mesh_show_double_sided_get(PointerRNA *ptr);

int Mesh_show_edge_bevel_weight_get(PointerRNA *ptr);

int Mesh_show_edge_crease_get(PointerRNA *ptr);

int Mesh_show_edges_get(PointerRNA *ptr);

int Mesh_show_faces_get(PointerRNA *ptr);

int Mesh_show_normal_face_get(PointerRNA *ptr);

int Mesh_show_edge_seams_get(PointerRNA *ptr);

int Mesh_show_edge_sharp_get(PointerRNA *ptr);

int Mesh_show_normal_vertex_get(PointerRNA *ptr);

int Mesh_show_extra_edge_length_get(PointerRNA *ptr);

void Mesh_edges_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_edges_next(CollectionPropertyIterator *iter);
void Mesh_edges_end(CollectionPropertyIterator *iter);

int Mesh_show_extra_face_area_get(PointerRNA *ptr);

void Mesh_faces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_faces_next(CollectionPropertyIterator *iter);
void Mesh_faces_end(CollectionPropertyIterator *iter);

int Mesh_show_extra_face_angle_get(PointerRNA *ptr);

void Mesh_layers_float_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_layers_float_next(CollectionPropertyIterator *iter);
void Mesh_layers_float_end(CollectionPropertyIterator *iter);

void Mesh_layers_int_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_layers_int_next(CollectionPropertyIterator *iter);
void Mesh_layers_int_end(CollectionPropertyIterator *iter);

PointerRNA Mesh_uv_texture_stencil_get(PointerRNA *ptr);

int Mesh_uv_texture_stencil_index_get(PointerRNA *ptr);

void Mesh_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_materials_next(CollectionPropertyIterator *iter);
void Mesh_materials_end(CollectionPropertyIterator *iter);

int Mesh_use_paint_mask_get(PointerRNA *ptr);

int Mesh_total_edge_sel_get(PointerRNA *ptr);

int Mesh_total_face_sel_get(PointerRNA *ptr);

int Mesh_total_vert_sel_get(PointerRNA *ptr);

PointerRNA Mesh_shape_keys_get(PointerRNA *ptr);

void Mesh_sticky_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_sticky_next(CollectionPropertyIterator *iter);
void Mesh_sticky_end(CollectionPropertyIterator *iter);

void Mesh_layers_string_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_layers_string_next(CollectionPropertyIterator *iter);
void Mesh_layers_string_end(CollectionPropertyIterator *iter);

PointerRNA Mesh_texture_mesh_get(PointerRNA *ptr);

void Mesh_texspace_location_get(PointerRNA *ptr, float values[3]);

PointerRNA Mesh_texco_mesh_get(PointerRNA *ptr);

void Mesh_texspace_size_get(PointerRNA *ptr, float values[3]);

int Mesh_use_mirror_topology_get(PointerRNA *ptr);

void Mesh_uv_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_uv_textures_next(CollectionPropertyIterator *iter);
void Mesh_uv_textures_end(CollectionPropertyIterator *iter);

void Mesh_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_vertex_colors_next(CollectionPropertyIterator *iter);
void Mesh_vertex_colors_end(CollectionPropertyIterator *iter);

void Mesh_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Mesh_vertices_next(CollectionPropertyIterator *iter);
void Mesh_vertices_end(CollectionPropertyIterator *iter);

int Mesh_use_mirror_x_get(PointerRNA *ptr);

/**************** Mesh Vertex Color ****************/

extern StructRNA RNA_MeshColor;

PointerRNA MeshColor_rna_type_get(PointerRNA *ptr);

void MeshColor_color1_get(PointerRNA *ptr, float values[3]);

void MeshColor_color2_get(PointerRNA *ptr, float values[3]);

void MeshColor_color3_get(PointerRNA *ptr, float values[3]);

void MeshColor_color4_get(PointerRNA *ptr, float values[3]);

/**************** Mesh Vertex Color Layer ****************/

extern StructRNA RNA_MeshColorLayer;

PointerRNA MeshColorLayer_rna_type_get(PointerRNA *ptr);

#define MeshColorLayer_name_MAX 32

void MeshColorLayer_name_get(PointerRNA *ptr, char *value);
int MeshColorLayer_name_length(PointerRNA *ptr);

int MeshColorLayer_active_get(PointerRNA *ptr);

int MeshColorLayer_active_render_get(PointerRNA *ptr);

void MeshColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MeshColorLayer_data_next(CollectionPropertyIterator *iter);
void MeshColorLayer_data_end(CollectionPropertyIterator *iter);

/**************** MeshDeform Modifier ****************/

extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_Modifier;

int MeshDeformModifier_is_bound_get(PointerRNA *ptr);

int MeshDeformModifier_use_dynamic_bind_get(PointerRNA *ptr);

int MeshDeformModifier_invert_vertex_group_get(PointerRNA *ptr);

PointerRNA MeshDeformModifier_object_get(PointerRNA *ptr);

int MeshDeformModifier_precision_get(PointerRNA *ptr);

#define MeshDeformModifier_vertex_group_MAX 32

void MeshDeformModifier_vertex_group_get(PointerRNA *ptr, char *value);
int MeshDeformModifier_vertex_group_length(PointerRNA *ptr);

/**************** Mesh Edge ****************/

extern StructRNA RNA_MeshEdge;

PointerRNA MeshEdge_rna_type_get(PointerRNA *ptr);

float MeshEdge_bevel_weight_get(PointerRNA *ptr);

float MeshEdge_crease_get(PointerRNA *ptr);

int MeshEdge_is_fgon_get(PointerRNA *ptr);

int MeshEdge_hide_get(PointerRNA *ptr);

int MeshEdge_index_get(PointerRNA *ptr);

int MeshEdge_is_loose_get(PointerRNA *ptr);

int MeshEdge_use_seam_get(PointerRNA *ptr);

int MeshEdge_select_get(PointerRNA *ptr);

int MeshEdge_use_edge_sharp_get(PointerRNA *ptr);

void MeshEdge_vertices_get(PointerRNA *ptr, int values[2]);

/**************** Mesh Edges ****************/

extern StructRNA RNA_MeshEdges;

PointerRNA MeshEdges_rna_type_get(PointerRNA *ptr);

/**************** Mesh Face ****************/

extern StructRNA RNA_MeshFace;

PointerRNA MeshFace_rna_type_get(PointerRNA *ptr);

int MeshFace_hide_get(PointerRNA *ptr);

int MeshFace_index_get(PointerRNA *ptr);

int MeshFace_material_index_get(PointerRNA *ptr);

int MeshFace_select_get(PointerRNA *ptr);

int MeshFace_use_smooth_get(PointerRNA *ptr);

void MeshFace_vertices_get(PointerRNA *ptr, int values[4]);

void MeshFace_vertices_raw_get(PointerRNA *ptr, int values[4]);

float MeshFace_area_get(PointerRNA *ptr);

void MeshFace_normal_get(PointerRNA *ptr, float values[3]);

/**************** Mesh Faces ****************/

extern StructRNA RNA_MeshFaces;

PointerRNA MeshFaces_rna_type_get(PointerRNA *ptr);

int MeshFaces_active_get(PointerRNA *ptr);

PointerRNA MeshFaces_active_tface_get(PointerRNA *ptr);

/**************** Mesh Float Property ****************/

extern StructRNA RNA_MeshFloatProperty;

PointerRNA MeshFloatProperty_rna_type_get(PointerRNA *ptr);

float MeshFloatProperty_value_get(PointerRNA *ptr);

/**************** Mesh Float Property Layer ****************/

extern StructRNA RNA_MeshFloatPropertyLayer;

PointerRNA MeshFloatPropertyLayer_rna_type_get(PointerRNA *ptr);

#define MeshFloatPropertyLayer_name_MAX 32

void MeshFloatPropertyLayer_name_get(PointerRNA *ptr, char *value);
int MeshFloatPropertyLayer_name_length(PointerRNA *ptr);

void MeshFloatPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MeshFloatPropertyLayer_data_next(CollectionPropertyIterator *iter);
void MeshFloatPropertyLayer_data_end(CollectionPropertyIterator *iter);

/**************** Mesh Int Property ****************/

extern StructRNA RNA_MeshIntProperty;

PointerRNA MeshIntProperty_rna_type_get(PointerRNA *ptr);

int MeshIntProperty_value_get(PointerRNA *ptr);

/**************** Mesh Int Property Layer ****************/

extern StructRNA RNA_MeshIntPropertyLayer;

PointerRNA MeshIntPropertyLayer_rna_type_get(PointerRNA *ptr);

#define MeshIntPropertyLayer_name_MAX 32

void MeshIntPropertyLayer_name_get(PointerRNA *ptr, char *value);
int MeshIntPropertyLayer_name_length(PointerRNA *ptr);

void MeshIntPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MeshIntPropertyLayer_data_next(CollectionPropertyIterator *iter);
void MeshIntPropertyLayer_data_end(CollectionPropertyIterator *iter);

/**************** Mesh Vertex Sticky Texture Coordinate ****************/

extern StructRNA RNA_MeshSticky;

PointerRNA MeshSticky_rna_type_get(PointerRNA *ptr);

void MeshSticky_co_get(PointerRNA *ptr, float values[2]);

/**************** Mesh String Property ****************/

extern StructRNA RNA_MeshStringProperty;

PointerRNA MeshStringProperty_rna_type_get(PointerRNA *ptr);

#define MeshStringProperty_value_MAX 256

void MeshStringProperty_value_get(PointerRNA *ptr, char *value);
int MeshStringProperty_value_length(PointerRNA *ptr);

/**************** Mesh String Property Layer ****************/

extern StructRNA RNA_MeshStringPropertyLayer;

PointerRNA MeshStringPropertyLayer_rna_type_get(PointerRNA *ptr);

#define MeshStringPropertyLayer_name_MAX 32

void MeshStringPropertyLayer_name_get(PointerRNA *ptr, char *value);
int MeshStringPropertyLayer_name_length(PointerRNA *ptr);

void MeshStringPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MeshStringPropertyLayer_data_next(CollectionPropertyIterator *iter);
void MeshStringPropertyLayer_data_end(CollectionPropertyIterator *iter);

/**************** Mesh Texture Face ****************/

extern StructRNA RNA_MeshTextureFace;

PointerRNA MeshTextureFace_rna_type_get(PointerRNA *ptr);

int MeshTextureFace_use_alpha_sort_get(PointerRNA *ptr);

int MeshTextureFace_use_billboard_get(PointerRNA *ptr);

int MeshTextureFace_use_collision_get(PointerRNA *ptr);

int MeshTextureFace_use_halo_get(PointerRNA *ptr);

PointerRNA MeshTextureFace_image_get(PointerRNA *ptr);

int MeshTextureFace_hide_get(PointerRNA *ptr);

int MeshTextureFace_use_light_get(PointerRNA *ptr);

int MeshTextureFace_use_object_color_get(PointerRNA *ptr);

int MeshTextureFace_use_shadow_cast_get(PointerRNA *ptr);

int MeshTextureFace_use_blend_shared_get(PointerRNA *ptr);

int MeshTextureFace_use_image_get(PointerRNA *ptr);

int MeshTextureFace_use_bitmap_text_get(PointerRNA *ptr);

enum {
	MeshTextureFace_blend_type_OPAQUE = 0,
	MeshTextureFace_blend_type_ADD = 1,
	MeshTextureFace_blend_type_ALPHA = 2,
	MeshTextureFace_blend_type_CLIPALPHA = 4,
};

int MeshTextureFace_blend_type_get(PointerRNA *ptr);

int MeshTextureFace_use_twoside_get(PointerRNA *ptr);

void MeshTextureFace_uv_get(PointerRNA *ptr, float values[8]);

void MeshTextureFace_uv_raw_get(PointerRNA *ptr, float values[8]);

void MeshTextureFace_uv1_get(PointerRNA *ptr, float values[2]);

void MeshTextureFace_uv2_get(PointerRNA *ptr, float values[2]);

void MeshTextureFace_uv3_get(PointerRNA *ptr, float values[2]);

void MeshTextureFace_uv4_get(PointerRNA *ptr, float values[2]);

void MeshTextureFace_pin_uv_get(PointerRNA *ptr, int values[4]);

void MeshTextureFace_select_uv_get(PointerRNA *ptr, int values[4]);

/**************** Mesh Texture Face Layer ****************/

extern StructRNA RNA_MeshTextureFaceLayer;

PointerRNA MeshTextureFaceLayer_rna_type_get(PointerRNA *ptr);

#define MeshTextureFaceLayer_name_MAX 32

void MeshTextureFaceLayer_name_get(PointerRNA *ptr, char *value);
int MeshTextureFaceLayer_name_length(PointerRNA *ptr);

int MeshTextureFaceLayer_active_get(PointerRNA *ptr);

int MeshTextureFaceLayer_active_clone_get(PointerRNA *ptr);

int MeshTextureFaceLayer_active_render_get(PointerRNA *ptr);

void MeshTextureFaceLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MeshTextureFaceLayer_data_next(CollectionPropertyIterator *iter);
void MeshTextureFaceLayer_data_end(CollectionPropertyIterator *iter);

/**************** Mesh Vertex ****************/

extern StructRNA RNA_MeshVertex;

PointerRNA MeshVertex_rna_type_get(PointerRNA *ptr);

float MeshVertex_bevel_weight_get(PointerRNA *ptr);

void MeshVertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MeshVertex_groups_next(CollectionPropertyIterator *iter);
void MeshVertex_groups_end(CollectionPropertyIterator *iter);

int MeshVertex_hide_get(PointerRNA *ptr);

int MeshVertex_index_get(PointerRNA *ptr);

void MeshVertex_co_get(PointerRNA *ptr, float values[3]);

void MeshVertex_normal_get(PointerRNA *ptr, float values[3]);

int MeshVertex_select_get(PointerRNA *ptr);

/**************** Mesh Vertices ****************/

extern StructRNA RNA_MeshVertices;

PointerRNA MeshVertices_rna_type_get(PointerRNA *ptr);

/**************** Message Actuator ****************/

extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_Actuator;

enum {
	MessageActuator_body_type_TEXT = 0,
	MessageActuator_body_type_PROPERTY = 1,
};

int MessageActuator_body_type_get(PointerRNA *ptr);

#define MessageActuator_body_message_MAX 32

void MessageActuator_body_message_get(PointerRNA *ptr, char *value);
int MessageActuator_body_message_length(PointerRNA *ptr);

#define MessageActuator_body_property_MAX 32

void MessageActuator_body_property_get(PointerRNA *ptr, char *value);
int MessageActuator_body_property_length(PointerRNA *ptr);

#define MessageActuator_subject_MAX 32

void MessageActuator_subject_get(PointerRNA *ptr, char *value);
int MessageActuator_subject_length(PointerRNA *ptr);

#define MessageActuator_to_property_MAX 32

void MessageActuator_to_property_get(PointerRNA *ptr, char *value);
int MessageActuator_to_property_length(PointerRNA *ptr);

/**************** Message Sensor ****************/

extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_Sensor;

#define MessageSensor_subject_MAX 32

void MessageSensor_subject_get(PointerRNA *ptr, char *value);
int MessageSensor_subject_length(PointerRNA *ptr);

/**************** MetaBall ****************/

extern StructRNA RNA_MetaBall;
extern StructRNA RNA_ID;

PointerRNA MetaBall_animation_data_get(PointerRNA *ptr);

int MetaBall_use_auto_texspace_get(PointerRNA *ptr);

void MetaBall_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MetaBall_elements_next(CollectionPropertyIterator *iter);
void MetaBall_elements_end(CollectionPropertyIterator *iter);

void MetaBall_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MetaBall_materials_next(CollectionPropertyIterator *iter);
void MetaBall_materials_end(CollectionPropertyIterator *iter);

float MetaBall_render_resolution_get(PointerRNA *ptr);

void MetaBall_texspace_location_get(PointerRNA *ptr, float values[3]);

void MetaBall_texspace_size_get(PointerRNA *ptr, float values[3]);

float MetaBall_threshold_get(PointerRNA *ptr);

enum {
	MetaBall_update_method_UPDATE_ALWAYS = 0,
	MetaBall_update_method_HALFRES = 1,
	MetaBall_update_method_FAST = 2,
	MetaBall_update_method_NEVER = 3,
};

int MetaBall_update_method_get(PointerRNA *ptr);

float MetaBall_resolution_get(PointerRNA *ptr);

/**************** Meta Elements ****************/

extern StructRNA RNA_MetaBallElements;

PointerRNA MetaBallElements_rna_type_get(PointerRNA *ptr);

PointerRNA MetaBallElements_active_get(PointerRNA *ptr);

/**************** Meta Element ****************/

extern StructRNA RNA_MetaElement;

PointerRNA MetaElement_rna_type_get(PointerRNA *ptr);

int MetaElement_hide_get(PointerRNA *ptr);

void MetaElement_co_get(PointerRNA *ptr, float values[3]);

int MetaElement_use_negative_get(PointerRNA *ptr);

float MetaElement_radius_get(PointerRNA *ptr);

void MetaElement_rotation_get(PointerRNA *ptr, float values[4]);

float MetaElement_size_x_get(PointerRNA *ptr);

float MetaElement_size_y_get(PointerRNA *ptr);

float MetaElement_size_z_get(PointerRNA *ptr);

float MetaElement_stiffness_get(PointerRNA *ptr);

enum {
	MetaElement_type_BALL = 0,
	MetaElement_type_CAPSULE = 4,
	MetaElement_type_PLANE = 5,
	MetaElement_type_ELLIPSOID = 6,
	MetaElement_type_CUBE = 7,
};

int MetaElement_type_get(PointerRNA *ptr);

/**************** Meta Sequence ****************/

extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_Sequence;

int MetaSequence_animation_offset_end_get(PointerRNA *ptr);

int MetaSequence_animation_offset_start_get(PointerRNA *ptr);

PointerRNA MetaSequence_color_balance_get(PointerRNA *ptr);

int MetaSequence_use_float_get(PointerRNA *ptr);

PointerRNA MetaSequence_crop_get(PointerRNA *ptr);

int MetaSequence_use_deinterlace_get(PointerRNA *ptr);

int MetaSequence_use_reverse_frames_get(PointerRNA *ptr);

int MetaSequence_use_flip_x_get(PointerRNA *ptr);

int MetaSequence_use_flip_y_get(PointerRNA *ptr);

float MetaSequence_color_multiply_get(PointerRNA *ptr);

int MetaSequence_use_premultiply_get(PointerRNA *ptr);

PointerRNA MetaSequence_proxy_get(PointerRNA *ptr);

int MetaSequence_use_proxy_custom_directory_get(PointerRNA *ptr);

int MetaSequence_use_proxy_custom_file_get(PointerRNA *ptr);

float MetaSequence_color_saturation_get(PointerRNA *ptr);

void MetaSequence_sequences_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MetaSequence_sequences_next(CollectionPropertyIterator *iter);
void MetaSequence_sequences_end(CollectionPropertyIterator *iter);

float MetaSequence_strobe_get(PointerRNA *ptr);

PointerRNA MetaSequence_transform_get(PointerRNA *ptr);

int MetaSequence_use_color_balance_get(PointerRNA *ptr);

int MetaSequence_use_crop_get(PointerRNA *ptr);

int MetaSequence_use_proxy_get(PointerRNA *ptr);

int MetaSequence_use_translation_get(PointerRNA *ptr);

/**************** Mirror Modifier ****************/

extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_Modifier;

int MirrorModifier_use_clip_get(PointerRNA *ptr);

float MirrorModifier_merge_threshold_get(PointerRNA *ptr);

int MirrorModifier_use_mirror_merge_get(PointerRNA *ptr);

PointerRNA MirrorModifier_mirror_object_get(PointerRNA *ptr);

int MirrorModifier_use_mirror_u_get(PointerRNA *ptr);

int MirrorModifier_use_mirror_v_get(PointerRNA *ptr);

int MirrorModifier_use_mirror_vertex_groups_get(PointerRNA *ptr);

int MirrorModifier_use_x_get(PointerRNA *ptr);

int MirrorModifier_use_y_get(PointerRNA *ptr);

int MirrorModifier_use_z_get(PointerRNA *ptr);

/**************** Modifier ****************/

extern StructRNA RNA_Modifier;

PointerRNA Modifier_rna_type_get(PointerRNA *ptr);

#define Modifier_name_MAX 32

void Modifier_name_get(PointerRNA *ptr, char *value);
int Modifier_name_length(PointerRNA *ptr);

int Modifier_use_apply_on_spline_get(PointerRNA *ptr);

int Modifier_show_in_editmode_get(PointerRNA *ptr);

int Modifier_show_expanded_get(PointerRNA *ptr);

int Modifier_show_on_cage_get(PointerRNA *ptr);

int Modifier_show_viewport_get(PointerRNA *ptr);

int Modifier_show_render_get(PointerRNA *ptr);

enum {
	Modifier_type_ARRAY = 12,
	Modifier_type_BEVEL = 24,
	Modifier_type_BOOLEAN = 11,
	Modifier_type_BUILD = 4,
	Modifier_type_DECIMATE = 6,
	Modifier_type_EDGE_SPLIT = 13,
	Modifier_type_MASK = 27,
	Modifier_type_MIRROR = 5,
	Modifier_type_MULTIRES = 29,
	Modifier_type_SCREW = 34,
	Modifier_type_SOLIDIFY = 33,
	Modifier_type_SUBSURF = 1,
	Modifier_type_UV_PROJECT = 15,
	Modifier_type_ARMATURE = 8,
	Modifier_type_CAST = 17,
	Modifier_type_CURVE = 3,
	Modifier_type_DISPLACE = 14,
	Modifier_type_HOOK = 9,
	Modifier_type_LATTICE = 2,
	Modifier_type_MESH_DEFORM = 18,
	Modifier_type_SHRINKWRAP = 25,
	Modifier_type_SIMPLE_DEFORM = 28,
	Modifier_type_SMOOTH = 16,
	Modifier_type_WAVE = 7,
	Modifier_type_CLOTH = 22,
	Modifier_type_COLLISION = 23,
	Modifier_type_EXPLODE = 21,
	Modifier_type_FLUID_SIMULATION = 26,
	Modifier_type_PARTICLE_INSTANCE = 20,
	Modifier_type_PARTICLE_SYSTEM = 19,
	Modifier_type_SMOKE = 31,
	Modifier_type_SOFT_BODY = 10,
	Modifier_type_SURFACE = 30,
};

int Modifier_type_get(PointerRNA *ptr);

/**************** Motion Path ****************/

extern StructRNA RNA_MotionPath;

PointerRNA MotionPath_rna_type_get(PointerRNA *ptr);

int MotionPath_is_modified_get(PointerRNA *ptr);

int MotionPath_frame_end_get(PointerRNA *ptr);

int MotionPath_length_get(PointerRNA *ptr);

void MotionPath_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MotionPath_points_next(CollectionPropertyIterator *iter);
void MotionPath_points_end(CollectionPropertyIterator *iter);

int MotionPath_frame_start_get(PointerRNA *ptr);

int MotionPath_use_bone_head_get(PointerRNA *ptr);

/**************** Motion Path Cache Point ****************/

extern StructRNA RNA_MotionPathVert;

PointerRNA MotionPathVert_rna_type_get(PointerRNA *ptr);

void MotionPathVert_co_get(PointerRNA *ptr, float values[3]);

int MotionPathVert_select_get(PointerRNA *ptr);

/**************** Mouse Sensor ****************/

extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_Sensor;

enum {
	MouseSensor_mouse_event_LEFTCLICK = 1,
	MouseSensor_mouse_event_MIDDLECLICK = 2,
	MouseSensor_mouse_event_RIGHTCLICK = 4,
	MouseSensor_mouse_event_WHEELUP = 5,
	MouseSensor_mouse_event_WHEELDOWN = 6,
	MouseSensor_mouse_event_MOVEMENT = 8,
	MouseSensor_mouse_event_MOUSEOVER = 16,
	MouseSensor_mouse_event_MOUSEOVERANY = 32,
};

int MouseSensor_mouse_event_get(PointerRNA *ptr);

/**************** Movie Sequence ****************/

extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_Sequence;

int MovieSequence_animation_offset_end_get(PointerRNA *ptr);

int MovieSequence_animation_offset_start_get(PointerRNA *ptr);

PointerRNA MovieSequence_color_balance_get(PointerRNA *ptr);

int MovieSequence_use_float_get(PointerRNA *ptr);

PointerRNA MovieSequence_crop_get(PointerRNA *ptr);

int MovieSequence_use_deinterlace_get(PointerRNA *ptr);

void MovieSequence_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void MovieSequence_elements_next(CollectionPropertyIterator *iter);
void MovieSequence_elements_end(CollectionPropertyIterator *iter);

void MovieSequence_filepath_get(PointerRNA *ptr, char *value);
int MovieSequence_filepath_length(PointerRNA *ptr);

int MovieSequence_use_reverse_frames_get(PointerRNA *ptr);

int MovieSequence_use_flip_x_get(PointerRNA *ptr);

int MovieSequence_use_flip_y_get(PointerRNA *ptr);

int MovieSequence_mpeg_preseek_get(PointerRNA *ptr);

float MovieSequence_color_multiply_get(PointerRNA *ptr);

int MovieSequence_use_premultiply_get(PointerRNA *ptr);

PointerRNA MovieSequence_proxy_get(PointerRNA *ptr);

int MovieSequence_use_proxy_custom_directory_get(PointerRNA *ptr);

int MovieSequence_use_proxy_custom_file_get(PointerRNA *ptr);

float MovieSequence_color_saturation_get(PointerRNA *ptr);

float MovieSequence_strobe_get(PointerRNA *ptr);

PointerRNA MovieSequence_transform_get(PointerRNA *ptr);

int MovieSequence_use_color_balance_get(PointerRNA *ptr);

int MovieSequence_use_crop_get(PointerRNA *ptr);

int MovieSequence_use_proxy_get(PointerRNA *ptr);

int MovieSequence_use_translation_get(PointerRNA *ptr);

/**************** Multicam Select Sequence ****************/

extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_Sequence;

int MulticamSequence_animation_offset_end_get(PointerRNA *ptr);

int MulticamSequence_animation_offset_start_get(PointerRNA *ptr);

PointerRNA MulticamSequence_color_balance_get(PointerRNA *ptr);

int MulticamSequence_use_float_get(PointerRNA *ptr);

PointerRNA MulticamSequence_crop_get(PointerRNA *ptr);

int MulticamSequence_use_deinterlace_get(PointerRNA *ptr);

int MulticamSequence_use_reverse_frames_get(PointerRNA *ptr);

int MulticamSequence_use_flip_x_get(PointerRNA *ptr);

int MulticamSequence_use_flip_y_get(PointerRNA *ptr);

int MulticamSequence_multicam_source_get(PointerRNA *ptr);

float MulticamSequence_color_multiply_get(PointerRNA *ptr);

int MulticamSequence_use_premultiply_get(PointerRNA *ptr);

PointerRNA MulticamSequence_proxy_get(PointerRNA *ptr);

int MulticamSequence_use_proxy_custom_directory_get(PointerRNA *ptr);

int MulticamSequence_use_proxy_custom_file_get(PointerRNA *ptr);

float MulticamSequence_color_saturation_get(PointerRNA *ptr);

float MulticamSequence_strobe_get(PointerRNA *ptr);

PointerRNA MulticamSequence_transform_get(PointerRNA *ptr);

int MulticamSequence_use_color_balance_get(PointerRNA *ptr);

int MulticamSequence_use_crop_get(PointerRNA *ptr);

int MulticamSequence_use_proxy_get(PointerRNA *ptr);

int MulticamSequence_use_translation_get(PointerRNA *ptr);

/**************** Multires Modifier ****************/

extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_Modifier;

int MultiresModifier_is_external_get(PointerRNA *ptr);

void MultiresModifier_filepath_get(PointerRNA *ptr, char *value);
int MultiresModifier_filepath_length(PointerRNA *ptr);

int MultiresModifier_levels_get(PointerRNA *ptr);

int MultiresModifier_show_only_control_edges_get(PointerRNA *ptr);

int MultiresModifier_render_levels_get(PointerRNA *ptr);

int MultiresModifier_sculpt_levels_get(PointerRNA *ptr);

enum {
	MultiresModifier_subdivision_type_CATMULL_CLARK = 0,
	MultiresModifier_subdivision_type_SIMPLE = 1,
};

int MultiresModifier_subdivision_type_get(PointerRNA *ptr);

int MultiresModifier_total_levels_get(PointerRNA *ptr);

/**************** Musgrave ****************/

extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

float MusgraveTexture_gain_get(PointerRNA *ptr);

float MusgraveTexture_dimension_max_get(PointerRNA *ptr);

float MusgraveTexture_lacunarity_get(PointerRNA *ptr);

float MusgraveTexture_nabla_get(PointerRNA *ptr);

enum {
	MusgraveTexture_noise_basis_BLENDER_ORIGINAL = 0,
	MusgraveTexture_noise_basis_ORIGINAL_PERLIN = 1,
	MusgraveTexture_noise_basis_IMPROVED_PERLIN = 2,
	MusgraveTexture_noise_basis_VORONOI_F1 = 3,
	MusgraveTexture_noise_basis_VORONOI_F2 = 4,
	MusgraveTexture_noise_basis_VORONOI_F3 = 5,
	MusgraveTexture_noise_basis_VORONOI_F4 = 6,
	MusgraveTexture_noise_basis_VORONOI_F2_F1 = 7,
	MusgraveTexture_noise_basis_VORONOI_CRACKLE = 8,
	MusgraveTexture_noise_basis_CELL_NOISE = 14,
};

int MusgraveTexture_noise_basis_get(PointerRNA *ptr);

float MusgraveTexture_noise_intensity_get(PointerRNA *ptr);

float MusgraveTexture_noise_scale_get(PointerRNA *ptr);

float MusgraveTexture_octaves_get(PointerRNA *ptr);

float MusgraveTexture_offset_get(PointerRNA *ptr);

enum {
	MusgraveTexture_musgrave_type_MULTIFRACTAL = 0,
	MusgraveTexture_musgrave_type_RIDGED_MULTIFRACTAL = 1,
	MusgraveTexture_musgrave_type_HYBRID_MULTIFRACTAL = 2,
	MusgraveTexture_musgrave_type_FBM = 3,
	MusgraveTexture_musgrave_type_HETERO_TERRAIN = 4,
};

int MusgraveTexture_musgrave_type_get(PointerRNA *ptr);

/**************** Nand Controller ****************/

extern StructRNA RNA_NandController;
extern StructRNA RNA_Controller;

/**************** Near Sensor ****************/

extern StructRNA RNA_NearSensor;
extern StructRNA RNA_Sensor;

float NearSensor_distance_get(PointerRNA *ptr);

#define NearSensor_property_MAX 32

void NearSensor_property_get(PointerRNA *ptr, char *value);
int NearSensor_property_length(PointerRNA *ptr);

float NearSensor_reset_distance_get(PointerRNA *ptr);

/**************** NLA Strip ****************/

extern StructRNA RNA_NlaStrip;

PointerRNA NlaStrip_rna_type_get(PointerRNA *ptr);

#define NlaStrip_name_MAX 64

void NlaStrip_name_get(PointerRNA *ptr, char *value);
int NlaStrip_name_length(PointerRNA *ptr);

PointerRNA NlaStrip_action_get(PointerRNA *ptr);

float NlaStrip_action_frame_end_get(PointerRNA *ptr);

float NlaStrip_action_frame_start_get(PointerRNA *ptr);

int NlaStrip_active_get(PointerRNA *ptr);

int NlaStrip_use_animated_influence_get(PointerRNA *ptr);

int NlaStrip_use_animated_time_get(PointerRNA *ptr);

int NlaStrip_use_auto_blend_get(PointerRNA *ptr);

float NlaStrip_blend_in_get(PointerRNA *ptr);

float NlaStrip_blend_out_get(PointerRNA *ptr);

enum {
	NlaStrip_blend_type_REPLACE = 0,
	NlaStrip_blend_type_ADD = 1,
	NlaStrip_blend_type_SUBTRACT = 2,
	NlaStrip_blend_type_MULITPLY = 3,
};

int NlaStrip_blend_type_get(PointerRNA *ptr);

int NlaStrip_use_animated_time_cyclic_get(PointerRNA *ptr);

float NlaStrip_frame_end_get(PointerRNA *ptr);

enum {
	NlaStrip_extrapolation_NOTHING = 2,
	NlaStrip_extrapolation_HOLD = 0,
	NlaStrip_extrapolation_HOLD_FORWARD = 1,
};

int NlaStrip_extrapolation_get(PointerRNA *ptr);

void NlaStrip_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void NlaStrip_fcurves_next(CollectionPropertyIterator *iter);
void NlaStrip_fcurves_end(CollectionPropertyIterator *iter);

float NlaStrip_influence_get(PointerRNA *ptr);

void NlaStrip_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void NlaStrip_modifiers_next(CollectionPropertyIterator *iter);
void NlaStrip_modifiers_end(CollectionPropertyIterator *iter);

int NlaStrip_mute_get(PointerRNA *ptr);

void NlaStrip_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void NlaStrip_strips_next(CollectionPropertyIterator *iter);
void NlaStrip_strips_end(CollectionPropertyIterator *iter);

float NlaStrip_repeat_get(PointerRNA *ptr);

int NlaStrip_use_reverse_get(PointerRNA *ptr);

float NlaStrip_scale_get(PointerRNA *ptr);

int NlaStrip_select_get(PointerRNA *ptr);

float NlaStrip_frame_start_get(PointerRNA *ptr);

float NlaStrip_strip_time_get(PointerRNA *ptr);

enum {
	NlaStrip_type_CLIP = 0,
	NlaStrip_type_TRANSITION = 1,
	NlaStrip_type_META = 2,
};

int NlaStrip_type_get(PointerRNA *ptr);

/**************** Nla Strips ****************/

extern StructRNA RNA_NlaStrips;

PointerRNA NlaStrips_rna_type_get(PointerRNA *ptr);

/**************** NLA Track ****************/

extern StructRNA RNA_NlaTrack;

PointerRNA NlaTrack_rna_type_get(PointerRNA *ptr);

#define NlaTrack_name_MAX 64

void NlaTrack_name_get(PointerRNA *ptr, char *value);
int NlaTrack_name_length(PointerRNA *ptr);

int NlaTrack_active_get(PointerRNA *ptr);

int NlaTrack_lock_get(PointerRNA *ptr);

int NlaTrack_mute_get(PointerRNA *ptr);

void NlaTrack_strips_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void NlaTrack_strips_next(CollectionPropertyIterator *iter);
void NlaTrack_strips_end(CollectionPropertyIterator *iter);

int NlaTrack_select_get(PointerRNA *ptr);

int NlaTrack_is_solo_get(PointerRNA *ptr);

/**************** NLA Tracks ****************/

extern StructRNA RNA_NlaTracks;

PointerRNA NlaTracks_rna_type_get(PointerRNA *ptr);

PointerRNA NlaTracks_active_get(PointerRNA *ptr);

/**************** Node ****************/

extern StructRNA RNA_Node;

PointerRNA Node_rna_type_get(PointerRNA *ptr);

#define Node_name_MAX 32

void Node_name_get(PointerRNA *ptr, char *value);
int Node_name_length(PointerRNA *ptr);

void Node_inputs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Node_inputs_next(CollectionPropertyIterator *iter);
void Node_inputs_end(CollectionPropertyIterator *iter);

void Node_location_get(PointerRNA *ptr, float values[2]);

void Node_outputs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Node_outputs_next(CollectionPropertyIterator *iter);
void Node_outputs_end(CollectionPropertyIterator *iter);

/**************** Group ****************/

extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_Node;

PointerRNA NodeGroup_node_tree_get(PointerRNA *ptr);

/**************** NodeLink ****************/

extern StructRNA RNA_NodeLink;

PointerRNA NodeLink_rna_type_get(PointerRNA *ptr);

PointerRNA NodeLink_from_node_get(PointerRNA *ptr);

PointerRNA NodeLink_from_socket_get(PointerRNA *ptr);

PointerRNA NodeLink_to_node_get(PointerRNA *ptr);

PointerRNA NodeLink_to_socket_get(PointerRNA *ptr);

/**************** Node Links ****************/

extern StructRNA RNA_NodeLinks;

PointerRNA NodeLinks_rna_type_get(PointerRNA *ptr);

/**************** Node Socket ****************/

extern StructRNA RNA_NodeSocket;

PointerRNA NodeSocket_rna_type_get(PointerRNA *ptr);

#define NodeSocket_name_MAX 32

void NodeSocket_name_get(PointerRNA *ptr, char *value);
int NodeSocket_name_length(PointerRNA *ptr);

enum {
	NodeSocket_type_VALUE = 0,
	NodeSocket_type_VECTOR = 1,
	NodeSocket_type_RGBA = 2,
};

int NodeSocket_type_get(PointerRNA *ptr);

/**************** Node Tree ****************/

extern StructRNA RNA_NodeTree;
extern StructRNA RNA_ID;

PointerRNA NodeTree_animation_data_get(PointerRNA *ptr);

PointerRNA NodeTree_grease_pencil_get(PointerRNA *ptr);

void NodeTree_links_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void NodeTree_links_next(CollectionPropertyIterator *iter);
void NodeTree_links_end(CollectionPropertyIterator *iter);

enum {
	NodeTree_type_SHADER = 0,
	NodeTree_type_COMPOSITE = 1,
	NodeTree_type_TEXTURE = 2,
};

int NodeTree_type_get(PointerRNA *ptr);

/**************** Noise Texture ****************/

extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

/**************** Nor Controller ****************/

extern StructRNA RNA_NorController;
extern StructRNA RNA_Controller;

/**************** Object ****************/

extern StructRNA RNA_Object;
extern StructRNA RNA_ID;

PointerRNA Object_active_material_get(PointerRNA *ptr);

int Object_active_material_index_get(PointerRNA *ptr);

PointerRNA Object_active_shape_key_get(PointerRNA *ptr);

int Object_active_shape_key_index_get(PointerRNA *ptr);

PointerRNA Object_animation_data_get(PointerRNA *ptr);

PointerRNA Object_animation_visualisation_get(PointerRNA *ptr);

void Object_rotation_axis_angle_get(PointerRNA *ptr, float values[4]);

void Object_bound_box_get(PointerRNA *ptr, float values[24]);

PointerRNA Object_collision_get(PointerRNA *ptr);

void Object_color_get(PointerRNA *ptr, float values[4]);

void Object_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Object_constraints_next(CollectionPropertyIterator *iter);
void Object_constraints_end(CollectionPropertyIterator *iter);

PointerRNA Object_data_get(PointerRNA *ptr);

void Object_delta_location_get(PointerRNA *ptr, float values[3]);

void Object_delta_rotation_euler_get(PointerRNA *ptr, float values[3]);

void Object_delta_rotation_quaternion_get(PointerRNA *ptr, float values[4]);

void Object_delta_scale_get(PointerRNA *ptr, float values[3]);

void Object_dimensions_get(PointerRNA *ptr, float values[3]);

int Object_show_axis_get(PointerRNA *ptr);

int Object_show_bounds_get(PointerRNA *ptr);

enum {
	Object_draw_bounds_type_BOX = 0,
	Object_draw_bounds_type_SPHERE = 1,
	Object_draw_bounds_type_CYLINDER = 2,
	Object_draw_bounds_type_CONE = 3,
	Object_draw_bounds_type_POLYHEDRON = 4,
	Object_draw_bounds_type_CAPSULE = 7,
};

int Object_draw_bounds_type_get(PointerRNA *ptr);

int Object_show_name_get(PointerRNA *ptr);

int Object_show_texture_space_get(PointerRNA *ptr);

int Object_show_transparent_get(PointerRNA *ptr);

int Object_show_wire_get(PointerRNA *ptr);

int Object_use_dupli_faces_scale_get(PointerRNA *ptr);

float Object_dupli_faces_scale_get(PointerRNA *ptr);

int Object_dupli_frames_end_get(PointerRNA *ptr);

int Object_dupli_frames_off_get(PointerRNA *ptr);

int Object_dupli_frames_on_get(PointerRNA *ptr);

int Object_use_dupli_frames_speed_get(PointerRNA *ptr);

int Object_dupli_frames_start_get(PointerRNA *ptr);

PointerRNA Object_dupli_group_get(PointerRNA *ptr);

enum {
	Object_dupli_type_NONE = 0,
	Object_dupli_type_FRAMES = 8,
	Object_dupli_type_VERTS = 16,
	Object_dupli_type_FACES = 512,
	Object_dupli_type_GROUP = 256,
};

int Object_dupli_type_get(PointerRNA *ptr);

int Object_use_dupli_vertices_rotation_get(PointerRNA *ptr);

void Object_dupli_list_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Object_dupli_list_next(CollectionPropertyIterator *iter);
void Object_dupli_list_end(CollectionPropertyIterator *iter);

float Object_empty_draw_size_get(PointerRNA *ptr);

enum {
	Object_empty_draw_type_PLAIN_AXES = 2,
	Object_empty_draw_type_ARROWS = 1,
	Object_empty_draw_type_SINGLE_ARROW = 4,
	Object_empty_draw_type_CIRCLE = 3,
	Object_empty_draw_type_CUBE = 5,
	Object_empty_draw_type_SPHERE = 6,
	Object_empty_draw_type_CONE = 7,
};

int Object_empty_draw_type_get(PointerRNA *ptr);

void Object_rotation_euler_get(PointerRNA *ptr, float values[3]);

PointerRNA Object_field_get(PointerRNA *ptr);

PointerRNA Object_game_get(PointerRNA *ptr);

PointerRNA Object_grease_pencil_get(PointerRNA *ptr);

void Object_matrix_basis_get(PointerRNA *ptr, float values[16]);

void Object_layers_get(PointerRNA *ptr, int values[20]);

void Object_matrix_local_get(PointerRNA *ptr, float values[16]);

void Object_location_get(PointerRNA *ptr, float values[3]);

void Object_lock_location_get(PointerRNA *ptr, int values[3]);

void Object_lock_rotation_get(PointerRNA *ptr, int values[3]);

int Object_lock_rotation_w_get(PointerRNA *ptr);

int Object_lock_rotations_4d_get(PointerRNA *ptr);

void Object_lock_scale_get(PointerRNA *ptr, int values[3]);

void Object_material_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Object_material_slots_next(CollectionPropertyIterator *iter);
void Object_material_slots_end(CollectionPropertyIterator *iter);

void Object_matrix_world_get(PointerRNA *ptr, float values[16]);

enum {
	Object_draw_type_BOUNDS = 1,
	Object_draw_type_WIRE = 2,
	Object_draw_type_SOLID = 3,
	Object_draw_type_TEXTURED = 5,
};

int Object_draw_type_get(PointerRNA *ptr);

enum {
	Object_mode_OBJECT = 0,
	Object_mode_EDIT = 1,
	Object_mode_SCULPT = 2,
	Object_mode_VERTEX_PAINT = 4,
	Object_mode_WEIGHT_PAINT = 8,
	Object_mode_TEXTURE_PAINT = 16,
	Object_mode_PARTICLE_EDIT = 32,
	Object_mode_POSE = 64,
};

int Object_mode_get(PointerRNA *ptr);

void Object_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Object_modifiers_next(CollectionPropertyIterator *iter);
void Object_modifiers_end(CollectionPropertyIterator *iter);

PointerRNA Object_motion_path_get(PointerRNA *ptr);

PointerRNA Object_parent_get(PointerRNA *ptr);

#define Object_parent_bone_MAX 32

void Object_parent_bone_get(PointerRNA *ptr, char *value);
int Object_parent_bone_length(PointerRNA *ptr);

enum {
	Object_parent_type_OBJECT = 0,
	Object_parent_type_CURVE = 1,
	Object_parent_type_KEY = 2,
	Object_parent_type_ARMATURE = 4,
	Object_parent_type_LATTICE = 4,
	Object_parent_type_VERTEX = 5,
	Object_parent_type_VERTEX_3 = 6,
	Object_parent_type_BONE = 7,
};

int Object_parent_type_get(PointerRNA *ptr);

void Object_parent_vertices_get(PointerRNA *ptr, int values[3]);

void Object_particle_systems_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Object_particle_systems_next(CollectionPropertyIterator *iter);
void Object_particle_systems_end(CollectionPropertyIterator *iter);

int Object_pass_index_get(PointerRNA *ptr);

PointerRNA Object_pose_get(PointerRNA *ptr);

PointerRNA Object_pose_library_get(PointerRNA *ptr);

PointerRNA Object_proxy_get(PointerRNA *ptr);

PointerRNA Object_proxy_group_get(PointerRNA *ptr);

void Object_rotation_quaternion_get(PointerRNA *ptr, float values[4]);

int Object_hide_render_get(PointerRNA *ptr);

int Object_hide_select_get(PointerRNA *ptr);

int Object_hide_get(PointerRNA *ptr);

enum {
	Object_rotation_mode_QUATERNION = 0,
	Object_rotation_mode_XYZ = 1,
	Object_rotation_mode_XZY = 2,
	Object_rotation_mode_YXZ = 3,
	Object_rotation_mode_YZX = 4,
	Object_rotation_mode_ZXY = 5,
	Object_rotation_mode_ZYX = 6,
	Object_rotation_mode_AXIS_ANGLE = -1,
};

int Object_rotation_mode_get(PointerRNA *ptr);

void Object_scale_get(PointerRNA *ptr, float values[3]);

int Object_select_get(PointerRNA *ptr);

int Object_use_shape_key_edit_mode_get(PointerRNA *ptr);

int Object_show_only_shape_key_get(PointerRNA *ptr);

int Object_use_slow_parent_get(PointerRNA *ptr);

PointerRNA Object_soft_body_get(PointerRNA *ptr);

float Object_time_offset_get(PointerRNA *ptr);

int Object_use_time_offset_add_parent_get(PointerRNA *ptr);

int Object_use_time_offset_edit_get(PointerRNA *ptr);

int Object_use_time_offset_parent_get(PointerRNA *ptr);

int Object_use_time_offset_particle_get(PointerRNA *ptr);

enum {
	Object_track_axis_POS_X = 0,
	Object_track_axis_POS_Y = 1,
	Object_track_axis_POS_Z = 2,
	Object_track_axis_NEG_X = 3,
	Object_track_axis_NEG_Y = 4,
	Object_track_axis_NEG_Z = 5,
};

int Object_track_axis_get(PointerRNA *ptr);

enum {
	Object_type_MESH = 1,
	Object_type_CURVE = 2,
	Object_type_SURFACE = 3,
	Object_type_META = 5,
	Object_type_FONT = 4,
	Object_type_ARMATURE = 25,
	Object_type_LATTICE = 22,
	Object_type_EMPTY = 0,
	Object_type_CAMERA = 11,
	Object_type_LAMP = 10,
};

int Object_type_get(PointerRNA *ptr);

enum {
	Object_up_axis_X = 0,
	Object_up_axis_Y = 1,
	Object_up_axis_Z = 2,
};

int Object_up_axis_get(PointerRNA *ptr);

void Object_vertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Object_vertex_groups_next(CollectionPropertyIterator *iter);
void Object_vertex_groups_end(CollectionPropertyIterator *iter);

int Object_show_x_ray_get(PointerRNA *ptr);

int Object_is_duplicator_get(PointerRNA *ptr);

/**************** Motion Actuator ****************/

extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_Actuator;

int ObjectActuator_use_add_linear_velocity_get(PointerRNA *ptr);

void ObjectActuator_angular_velocity_get(PointerRNA *ptr, float values[3]);

int ObjectActuator_damping_get(PointerRNA *ptr);

float ObjectActuator_derivate_coefficient_get(PointerRNA *ptr);

void ObjectActuator_force_get(PointerRNA *ptr, float values[3]);

float ObjectActuator_integral_coefficient_get(PointerRNA *ptr);

int ObjectActuator_use_local_location_get(PointerRNA *ptr);

int ObjectActuator_use_local_rotation_get(PointerRNA *ptr);

int ObjectActuator_use_local_force_get(PointerRNA *ptr);

int ObjectActuator_use_local_torque_get(PointerRNA *ptr);

int ObjectActuator_use_local_linear_velocity_get(PointerRNA *ptr);

int ObjectActuator_use_local_angular_velocity_get(PointerRNA *ptr);

void ObjectActuator_linear_velocity_get(PointerRNA *ptr, float values[3]);

void ObjectActuator_offset_location_get(PointerRNA *ptr, float values[3]);

float ObjectActuator_force_max_x_get(PointerRNA *ptr);

float ObjectActuator_force_max_y_get(PointerRNA *ptr);

float ObjectActuator_force_max_z_get(PointerRNA *ptr);

float ObjectActuator_force_min_x_get(PointerRNA *ptr);

float ObjectActuator_force_min_y_get(PointerRNA *ptr);

float ObjectActuator_force_min_z_get(PointerRNA *ptr);

enum {
	ObjectActuator_mode_OBJECT_NORMAL = 0,
	ObjectActuator_mode_OBJECT_SERVO = 1,
};

int ObjectActuator_mode_get(PointerRNA *ptr);

float ObjectActuator_proportional_coefficient_get(PointerRNA *ptr);

PointerRNA ObjectActuator_reference_object_get(PointerRNA *ptr);

void ObjectActuator_offset_rotation_get(PointerRNA *ptr, float values[3]);

void ObjectActuator_torque_get(PointerRNA *ptr, float values[3]);

int ObjectActuator_use_servo_limit_x_get(PointerRNA *ptr);

int ObjectActuator_use_servo_limit_y_get(PointerRNA *ptr);

int ObjectActuator_use_servo_limit_z_get(PointerRNA *ptr);

/**************** Object Base ****************/

extern StructRNA RNA_ObjectBase;

PointerRNA ObjectBase_rna_type_get(PointerRNA *ptr);

void ObjectBase_layers_get(PointerRNA *ptr, int values[20]);

PointerRNA ObjectBase_object_get(PointerRNA *ptr);

int ObjectBase_select_get(PointerRNA *ptr);

/**************** Object Constraints ****************/

extern StructRNA RNA_ObjectConstraints;

PointerRNA ObjectConstraints_rna_type_get(PointerRNA *ptr);

PointerRNA ObjectConstraints_active_get(PointerRNA *ptr);

/**************** Object Modifiers ****************/

extern StructRNA RNA_ObjectModifiers;

PointerRNA ObjectModifiers_rna_type_get(PointerRNA *ptr);

/**************** Obstacle Fluid Simulation Settings ****************/

extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_FluidSettings;

int ObstacleFluidSettings_use_get(PointerRNA *ptr);

int ObstacleFluidSettings_use_animated_mesh_get(PointerRNA *ptr);

float ObstacleFluidSettings_impact_factor_get(PointerRNA *ptr);

float ObstacleFluidSettings_partial_slip_factor_get(PointerRNA *ptr);

enum {
	ObstacleFluidSettings_slip_type_NOSLIP = 512,
	ObstacleFluidSettings_slip_type_PARTIALSLIP = 1024,
	ObstacleFluidSettings_slip_type_FREESLIP = 2048,
};

int ObstacleFluidSettings_slip_type_get(PointerRNA *ptr);

enum {
	ObstacleFluidSettings_volume_initialization_VOLUME = 1,
	ObstacleFluidSettings_volume_initialization_SHELL = 2,
	ObstacleFluidSettings_volume_initialization_BOTH = 3,
};

int ObstacleFluidSettings_volume_initialization_get(PointerRNA *ptr);

/**************** Operator ****************/

extern StructRNA RNA_Operator;

PointerRNA Operator_rna_type_get(PointerRNA *ptr);

void Operator_name_get(PointerRNA *ptr, char *value);
int Operator_name_length(PointerRNA *ptr);

int Operator_has_reports_get(PointerRNA *ptr);

enum {
	Operator_bl_options_REGISTER = 1,
	Operator_bl_options_UNDO = 2,
	Operator_bl_options_BLOCKING = 4,
	Operator_bl_options_MACRO = 8,
	Operator_bl_options_GRAB_POINTER = 16,
	Operator_bl_options_PRESET = 32,
};

int Operator_bl_options_get(PointerRNA *ptr);

PointerRNA Operator_properties_get(PointerRNA *ptr);

#define Operator_bl_description_MAX 1024

void Operator_bl_description_get(PointerRNA *ptr, char *value);
int Operator_bl_description_length(PointerRNA *ptr);

#define Operator_bl_idname_MAX 61

void Operator_bl_idname_get(PointerRNA *ptr, char *value);
int Operator_bl_idname_length(PointerRNA *ptr);

#define Operator_bl_label_MAX 1024

void Operator_bl_label_get(PointerRNA *ptr, char *value);
int Operator_bl_label_length(PointerRNA *ptr);

PointerRNA Operator_layout_get(PointerRNA *ptr);

/**************** Operator File List Element ****************/

extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_PropertyGroup;

/**************** Operator Mouse Path ****************/

extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_PropertyGroup;

/**************** Operator Properties ****************/

extern StructRNA RNA_OperatorProperties;

PointerRNA OperatorProperties_rna_type_get(PointerRNA *ptr);

/**************** Operator Stroke Element ****************/

extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_PropertyGroup;

/**************** OperatorTypeMacro ****************/

extern StructRNA RNA_OperatorTypeMacro;

PointerRNA OperatorTypeMacro_rna_type_get(PointerRNA *ptr);

PointerRNA OperatorTypeMacro_properties_get(PointerRNA *ptr);

/**************** Or Controller ****************/

extern StructRNA RNA_OrController;
extern StructRNA RNA_Controller;

/**************** Outflow Fluid Simulation Settings ****************/

extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_FluidSettings;

int OutflowFluidSettings_use_get(PointerRNA *ptr);

int OutflowFluidSettings_use_animated_mesh_get(PointerRNA *ptr);

enum {
	OutflowFluidSettings_volume_initialization_VOLUME = 1,
	OutflowFluidSettings_volume_initialization_SHELL = 2,
	OutflowFluidSettings_volume_initialization_BOTH = 3,
};

int OutflowFluidSettings_volume_initialization_get(PointerRNA *ptr);

/**************** Packed File ****************/

extern StructRNA RNA_PackedFile;

PointerRNA PackedFile_rna_type_get(PointerRNA *ptr);

int PackedFile_size_get(PointerRNA *ptr);

/**************** Paint ****************/

extern StructRNA RNA_Paint;

PointerRNA Paint_rna_type_get(PointerRNA *ptr);

PointerRNA Paint_brush_get(PointerRNA *ptr);

int Paint_show_low_resolution_get(PointerRNA *ptr);

int Paint_show_brush_get(PointerRNA *ptr);

int Paint_show_brush_on_surface_get(PointerRNA *ptr);

/**************** Panel ****************/

extern StructRNA RNA_Panel;

PointerRNA Panel_rna_type_get(PointerRNA *ptr);

void Panel_bl_context_get(PointerRNA *ptr, char *value);
int Panel_bl_context_length(PointerRNA *ptr);

void Panel_bl_idname_get(PointerRNA *ptr, char *value);
int Panel_bl_idname_length(PointerRNA *ptr);

void Panel_bl_label_get(PointerRNA *ptr, char *value);
int Panel_bl_label_length(PointerRNA *ptr);

PointerRNA Panel_layout_get(PointerRNA *ptr);

enum {
	Panel_bl_options_DEFAULT_CLOSED = 1,
	Panel_bl_options_HIDE_HEADER = 2,
};

int Panel_bl_options_get(PointerRNA *ptr);

enum {
	Panel_bl_region_type_WINDOW = 0,
	Panel_bl_region_type_HEADER = 1,
	Panel_bl_region_type_CHANNELS = 2,
	Panel_bl_region_type_TEMPORARY = 3,
	Panel_bl_region_type_UI = 4,
	Panel_bl_region_type_TOOLS = 5,
	Panel_bl_region_type_TOOL_PROPS = 6,
	Panel_bl_region_type_PREVIEW = 7,
};

int Panel_bl_region_type_get(PointerRNA *ptr);

enum {
	Panel_bl_space_type_EMPTY = 0,
	Panel_bl_space_type_VIEW_3D = 1,
	Panel_bl_space_type_GRAPH_EDITOR = 2,
	Panel_bl_space_type_OUTLINER = 3,
	Panel_bl_space_type_PROPERTIES = 4,
	Panel_bl_space_type_FILE_BROWSER = 5,
	Panel_bl_space_type_IMAGE_EDITOR = 6,
	Panel_bl_space_type_INFO = 7,
	Panel_bl_space_type_SEQUENCE_EDITOR = 8,
	Panel_bl_space_type_TEXT_EDITOR = 9,
	Panel_bl_space_type_AUDIO_WINDOW = 11,
	Panel_bl_space_type_DOPESHEET_EDITOR = 12,
	Panel_bl_space_type_NLA_EDITOR = 13,
	Panel_bl_space_type_SCRIPTS_WINDOW = 14,
	Panel_bl_space_type_TIMELINE = 15,
	Panel_bl_space_type_NODE_EDITOR = 16,
	Panel_bl_space_type_LOGIC_EDITOR = 17,
	Panel_bl_space_type_CONSOLE = 18,
	Panel_bl_space_type_USER_PREFERENCES = 19,
};

int Panel_bl_space_type_get(PointerRNA *ptr);

#define Panel_text_MAX 64

void Panel_text_get(PointerRNA *ptr, char *value);
int Panel_text_length(PointerRNA *ptr);

/**************** Parent Actuator ****************/

extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_Actuator;

int ParentActuator_use_compound_get(PointerRNA *ptr);

int ParentActuator_use_ghost_get(PointerRNA *ptr);

PointerRNA ParentActuator_object_get(PointerRNA *ptr);

enum {
	ParentActuator_mode_SETPARENT = 0,
	ParentActuator_mode_REMOVEPARENT = 1,
};

int ParentActuator_mode_get(PointerRNA *ptr);

/**************** Particle ****************/

extern StructRNA RNA_Particle;

PointerRNA Particle_rna_type_get(PointerRNA *ptr);

enum {
	Particle_alive_state_DEAD = 1,
	Particle_alive_state_UNBORN = 2,
	Particle_alive_state_ALIVE = 3,
	Particle_alive_state_DYING = 4,
};

int Particle_alive_state_get(PointerRNA *ptr);

void Particle_angular_velocity_get(PointerRNA *ptr, float values[3]);

float Particle_birth_time_get(PointerRNA *ptr);

float Particle_die_time_get(PointerRNA *ptr);

int Particle_is_exist_get(PointerRNA *ptr);

void Particle_hair_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Particle_hair_next(CollectionPropertyIterator *iter);
void Particle_hair_end(CollectionPropertyIterator *iter);

void Particle_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Particle_keys_next(CollectionPropertyIterator *iter);
void Particle_keys_end(CollectionPropertyIterator *iter);

float Particle_lifetime_get(PointerRNA *ptr);

void Particle_location_get(PointerRNA *ptr, float values[3]);

void Particle_velocity_get(PointerRNA *ptr, float values[3]);

void Particle_prev_angular_velocity_get(PointerRNA *ptr, float values[3]);

void Particle_prev_location_get(PointerRNA *ptr, float values[3]);

void Particle_prev_velocity_get(PointerRNA *ptr, float values[3]);

void Particle_prev_rotation_get(PointerRNA *ptr, float values[4]);

void Particle_rotation_get(PointerRNA *ptr, float values[4]);

float Particle_size_get(PointerRNA *ptr);

int Particle_is_visible_get(PointerRNA *ptr);

/**************** Particle Brush ****************/

extern StructRNA RNA_ParticleBrush;

PointerRNA ParticleBrush_rna_type_get(PointerRNA *ptr);

int ParticleBrush_count_get(PointerRNA *ptr);

PointerRNA ParticleBrush_curve_get(PointerRNA *ptr);

enum {
	ParticleBrush_length_mode_GROW = 0,
	ParticleBrush_length_mode_SHRINK = 1,
};

int ParticleBrush_length_mode_get(PointerRNA *ptr);

enum {
	ParticleBrush_puff_mode_ADD = 0,
	ParticleBrush_puff_mode_SUB = 1,
};

int ParticleBrush_puff_mode_get(PointerRNA *ptr);

int ParticleBrush_use_puff_volume_get(PointerRNA *ptr);

int ParticleBrush_size_get(PointerRNA *ptr);

int ParticleBrush_steps_get(PointerRNA *ptr);

float ParticleBrush_strength_get(PointerRNA *ptr);

/**************** Particle Dupliobject Weight ****************/

extern StructRNA RNA_ParticleDupliWeight;

PointerRNA ParticleDupliWeight_rna_type_get(PointerRNA *ptr);

void ParticleDupliWeight_name_get(PointerRNA *ptr, char *value);
int ParticleDupliWeight_name_length(PointerRNA *ptr);

int ParticleDupliWeight_count_get(PointerRNA *ptr);

/**************** Particle Edit ****************/

extern StructRNA RNA_ParticleEdit;

PointerRNA ParticleEdit_rna_type_get(PointerRNA *ptr);

int ParticleEdit_use_auto_velocity_get(PointerRNA *ptr);

PointerRNA ParticleEdit_brush_get(PointerRNA *ptr);

int ParticleEdit_use_emitter_deflect_get(PointerRNA *ptr);

int ParticleEdit_show_particles_get(PointerRNA *ptr);

int ParticleEdit_is_editable_get(PointerRNA *ptr);

float ParticleEdit_emitter_distance_get(PointerRNA *ptr);

int ParticleEdit_use_fade_time_get(PointerRNA *ptr);

int ParticleEdit_fade_frames_get(PointerRNA *ptr);

int ParticleEdit_is_hair_get(PointerRNA *ptr);

int ParticleEdit_use_default_interpolate_get(PointerRNA *ptr);

int ParticleEdit_use_preserve_length_get(PointerRNA *ptr);

int ParticleEdit_use_preserve_root_get(PointerRNA *ptr);

int ParticleEdit_default_key_count_get(PointerRNA *ptr);

PointerRNA ParticleEdit_object_get(PointerRNA *ptr);

enum {
	ParticleEdit_select_mode_PATH = 1,
	ParticleEdit_select_mode_POINT = 2,
	ParticleEdit_select_mode_TIP = 4,
};

int ParticleEdit_select_mode_get(PointerRNA *ptr);

int ParticleEdit_draw_step_get(PointerRNA *ptr);

enum {
	ParticleEdit_tool_NONE = -1,
	ParticleEdit_tool_COMB = 0,
	ParticleEdit_tool_SMOOTH = 5,
	ParticleEdit_tool_ADD = 4,
	ParticleEdit_tool_LENGTH = 2,
	ParticleEdit_tool_PUFF = 3,
	ParticleEdit_tool_CUT = 1,
	ParticleEdit_tool_WEIGHT = 6,
};

int ParticleEdit_tool_get(PointerRNA *ptr);

enum {
	ParticleEdit_type_PARTICLES = 0,
	ParticleEdit_type_SOFT_BODY = 1,
	ParticleEdit_type_CLOTH = 2,
};

int ParticleEdit_type_get(PointerRNA *ptr);

/**************** Particle Fluid Simulation Settings ****************/

extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_FluidSettings;

float ParticleFluidSettings_alpha_influence_get(PointerRNA *ptr);

int ParticleFluidSettings_use_drops_get(PointerRNA *ptr);

int ParticleFluidSettings_use_floats_get(PointerRNA *ptr);

float ParticleFluidSettings_particle_influence_get(PointerRNA *ptr);

#define ParticleFluidSettings_filepath_MAX 240

void ParticleFluidSettings_filepath_get(PointerRNA *ptr, char *value);
int ParticleFluidSettings_filepath_length(PointerRNA *ptr);

int ParticleFluidSettings_show_tracer_get(PointerRNA *ptr);

/**************** Particle Hair Key ****************/

extern StructRNA RNA_ParticleHairKey;

PointerRNA ParticleHairKey_rna_type_get(PointerRNA *ptr);

void ParticleHairKey_co_hair_space_get(PointerRNA *ptr, float values[3]);

void ParticleHairKey_co_get(PointerRNA *ptr, float values[3]);

float ParticleHairKey_time_get(PointerRNA *ptr);

float ParticleHairKey_weight_get(PointerRNA *ptr);

/**************** ParticleInstance Modifier ****************/

extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_Modifier;

int ParticleInstanceModifier_show_alive_get(PointerRNA *ptr);

enum {
	ParticleInstanceModifier_axis_X = 0,
	ParticleInstanceModifier_axis_Y = 1,
	ParticleInstanceModifier_axis_Z = 2,
};

int ParticleInstanceModifier_axis_get(PointerRNA *ptr);

int ParticleInstanceModifier_use_children_get(PointerRNA *ptr);

int ParticleInstanceModifier_show_dead_get(PointerRNA *ptr);

int ParticleInstanceModifier_use_preserve_shape_get(PointerRNA *ptr);

int ParticleInstanceModifier_use_normal_get(PointerRNA *ptr);

PointerRNA ParticleInstanceModifier_object_get(PointerRNA *ptr);

int ParticleInstanceModifier_particle_system_index_get(PointerRNA *ptr);

int ParticleInstanceModifier_use_path_get(PointerRNA *ptr);

float ParticleInstanceModifier_position_get(PointerRNA *ptr);

float ParticleInstanceModifier_random_position_get(PointerRNA *ptr);

int ParticleInstanceModifier_use_size_get(PointerRNA *ptr);

int ParticleInstanceModifier_show_unborn_get(PointerRNA *ptr);

/**************** Particle Key ****************/

extern StructRNA RNA_ParticleKey;

PointerRNA ParticleKey_rna_type_get(PointerRNA *ptr);

void ParticleKey_angular_velocity_get(PointerRNA *ptr, float values[3]);

void ParticleKey_location_get(PointerRNA *ptr, float values[3]);

void ParticleKey_rotation_get(PointerRNA *ptr, float values[4]);

float ParticleKey_time_get(PointerRNA *ptr);

void ParticleKey_velocity_get(PointerRNA *ptr, float values[3]);

/**************** Particle Settings ****************/

extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ID;

int ParticleSettings_use_absolute_path_time_get(PointerRNA *ptr);

PointerRNA ParticleSettings_active_dupliweight_get(PointerRNA *ptr);

int ParticleSettings_active_dupliweight_index_get(PointerRNA *ptr);

PointerRNA ParticleSettings_active_texture_get(PointerRNA *ptr);

int ParticleSettings_active_texture_index_get(PointerRNA *ptr);

int ParticleSettings_use_render_adaptive_get(PointerRNA *ptr);

int ParticleSettings_use_advanced_hair_get(PointerRNA *ptr);

enum {
	ParticleSettings_billboard_align_X = 0,
	ParticleSettings_billboard_align_Y = 1,
	ParticleSettings_billboard_align_Z = 2,
	ParticleSettings_billboard_align_VIEW = 3,
	ParticleSettings_billboard_align_VEL = 4,
};

int ParticleSettings_billboard_align_get(PointerRNA *ptr);

float ParticleSettings_jitter_factor_get(PointerRNA *ptr);

int ParticleSettings_count_get(PointerRNA *ptr);

float ParticleSettings_kink_amplitude_get(PointerRNA *ptr);

float ParticleSettings_kink_amplitude_clump_get(PointerRNA *ptr);

float ParticleSettings_angular_velocity_factor_get(PointerRNA *ptr);

enum {
	ParticleSettings_angular_velocity_mode_NONE = 0,
	ParticleSettings_angular_velocity_mode_SPIN = 1,
	ParticleSettings_angular_velocity_mode_RAND = 2,
};

int ParticleSettings_angular_velocity_mode_get(PointerRNA *ptr);

enum {
	ParticleSettings_billboard_animation_NONE = 0,
	ParticleSettings_billboard_animation_AGE = 1,
	ParticleSettings_billboard_animation_FRAME = 3,
	ParticleSettings_billboard_animation_ANGLE = 2,
};

int ParticleSettings_billboard_animation_get(PointerRNA *ptr);

PointerRNA ParticleSettings_animation_data_get(PointerRNA *ptr);

enum {
	ParticleSettings_kink_axis_X = 0,
	ParticleSettings_kink_axis_Y = 1,
	ParticleSettings_kink_axis_Z = 2,
};

int ParticleSettings_kink_axis_get(PointerRNA *ptr);

int ParticleSettings_use_hair_bspline_get(PointerRNA *ptr);

float ParticleSettings_line_length_tail_get(PointerRNA *ptr);

PointerRNA ParticleSettings_billboard_object_get(PointerRNA *ptr);

void ParticleSettings_billboard_offset_get(PointerRNA *ptr, float values[2]);

PointerRNA ParticleSettings_boids_get(PointerRNA *ptr);

int ParticleSettings_lock_boids_to_surface_get(PointerRNA *ptr);

float ParticleSettings_brownian_factor_get(PointerRNA *ptr);

float ParticleSettings_child_radius_get(PointerRNA *ptr);

float ParticleSettings_child_roundness_get(PointerRNA *ptr);

int ParticleSettings_use_simplify_get(PointerRNA *ptr);

float ParticleSettings_child_size_get(PointerRNA *ptr);

enum {
	ParticleSettings_child_type_NONE = 0,
	ParticleSettings_child_type_SIMPLE = 1,
	ParticleSettings_child_type_INTERPOLATED = 2,
};

int ParticleSettings_child_type_get(PointerRNA *ptr);

int ParticleSettings_child_nbr_get(PointerRNA *ptr);

float ParticleSettings_clump_factor_get(PointerRNA *ptr);

float ParticleSettings_damping_get(PointerRNA *ptr);

int ParticleSettings_adaptive_angle_get(PointerRNA *ptr);

int ParticleSettings_use_die_on_collision_get(PointerRNA *ptr);

int ParticleSettings_use_dead_get(PointerRNA *ptr);

int ParticleSettings_draw_percentage_get(PointerRNA *ptr);

enum {
	ParticleSettings_distribution_JIT = 0,
	ParticleSettings_distribution_RAND = 1,
	ParticleSettings_distribution_GRID = 2,
};

int ParticleSettings_distribution_get(PointerRNA *ptr);

float ParticleSettings_drag_factor_get(PointerRNA *ptr);

int ParticleSettings_draw_size_get(PointerRNA *ptr);

PointerRNA ParticleSettings_dupli_group_get(PointerRNA *ptr);

void ParticleSettings_dupli_weights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ParticleSettings_dupli_weights_next(CollectionPropertyIterator *iter);
void ParticleSettings_dupli_weights_end(CollectionPropertyIterator *iter);

PointerRNA ParticleSettings_dupli_object_get(PointerRNA *ptr);

int ParticleSettings_use_dynamic_rotation_get(PointerRNA *ptr);

int ParticleSettings_apply_effector_to_children_get(PointerRNA *ptr);

int ParticleSettings_effector_amount_get(PointerRNA *ptr);

PointerRNA ParticleSettings_effector_weights_get(PointerRNA *ptr);

enum {
	ParticleSettings_emit_from_VERT = 0,
	ParticleSettings_emit_from_FACE = 1,
	ParticleSettings_emit_from_VOLUME = 2,
	ParticleSettings_emit_from_PARTICLE = 3,
};

int ParticleSettings_emit_from_get(PointerRNA *ptr);

int ParticleSettings_use_render_emitter_get(PointerRNA *ptr);

float ParticleSettings_frame_end_get(PointerRNA *ptr);

int ParticleSettings_use_even_distribution_get(PointerRNA *ptr);

float ParticleSettings_kink_flat_get(PointerRNA *ptr);

int ParticleSettings_is_fluid_get(PointerRNA *ptr);

PointerRNA ParticleSettings_force_field_1_get(PointerRNA *ptr);

PointerRNA ParticleSettings_force_field_2_get(PointerRNA *ptr);

float ParticleSettings_kink_frequency_get(PointerRNA *ptr);

float ParticleSettings_grid_random_get(PointerRNA *ptr);

float ParticleSettings_hair_length_get(PointerRNA *ptr);

float ParticleSettings_line_length_head_get(PointerRNA *ptr);

int ParticleSettings_show_health_get(PointerRNA *ptr);

int ParticleSettings_hexagonal_grid_get(PointerRNA *ptr);

enum {
	ParticleSettings_integrator_EULER = 0,
	ParticleSettings_integrator_VERLET = 3,
	ParticleSettings_integrator_MIDPOINT = 1,
	ParticleSettings_integrator_RK4 = 2,
};

int ParticleSettings_integrator_get(PointerRNA *ptr);

int ParticleSettings_invert_grid_get(PointerRNA *ptr);

int ParticleSettings_keys_step_get(PointerRNA *ptr);

enum {
	ParticleSettings_kink_NO = 0,
	ParticleSettings_kink_CURL = 1,
	ParticleSettings_kink_RADIAL = 2,
	ParticleSettings_kink_WAVE = 3,
	ParticleSettings_kink_BRAID = 4,
};

int ParticleSettings_kink_get(PointerRNA *ptr);

float ParticleSettings_child_length_get(PointerRNA *ptr);

float ParticleSettings_lifetime_get(PointerRNA *ptr);

int ParticleSettings_lock_billboard_get(PointerRNA *ptr);

int ParticleSettings_create_long_hair_children_get(PointerRNA *ptr);

int ParticleSettings_keyed_loops_get(PointerRNA *ptr);

float ParticleSettings_mass_get(PointerRNA *ptr);

int ParticleSettings_use_multiply_size_mass_get(PointerRNA *ptr);

int ParticleSettings_material_get(PointerRNA *ptr);

int ParticleSettings_show_material_color_get(PointerRNA *ptr);

int ParticleSettings_use_react_multiple_get(PointerRNA *ptr);

float ParticleSettings_normal_factor_get(PointerRNA *ptr);

int ParticleSettings_show_number_get(PointerRNA *ptr);

float ParticleSettings_object_factor_get(PointerRNA *ptr);

void ParticleSettings_object_align_factor_get(PointerRNA *ptr, float values[3]);

enum {
	ParticleSettings_billboard_offset_split_NONE = 0,
	ParticleSettings_billboard_offset_split_LINEAR = 1,
	ParticleSettings_billboard_offset_split_RANDOM = 2,
};

int ParticleSettings_billboard_offset_split_get(PointerRNA *ptr);

int ParticleSettings_userjit_get(PointerRNA *ptr);

int ParticleSettings_use_parent_particles_get(PointerRNA *ptr);

float ParticleSettings_particle_factor_get(PointerRNA *ptr);

enum {
	ParticleSettings_draw_method_NONE = 0,
	ParticleSettings_draw_method_RENDER = 10,
	ParticleSettings_draw_method_DOT = 1,
	ParticleSettings_draw_method_CIRC = 2,
	ParticleSettings_draw_method_CROSS = 3,
	ParticleSettings_draw_method_AXIS = 4,
};

int ParticleSettings_draw_method_get(PointerRNA *ptr);

enum {
	ParticleSettings_render_type_NONE = 0,
	ParticleSettings_render_type_HALO = 1,
	ParticleSettings_render_type_LINE = 5,
	ParticleSettings_render_type_PATH = 6,
	ParticleSettings_render_type_OBJECT = 7,
	ParticleSettings_render_type_GROUP = 8,
	ParticleSettings_render_type_BILLBOARD = 9,
};

int ParticleSettings_render_type_get(PointerRNA *ptr);

float ParticleSettings_child_parting_factor_get(PointerRNA *ptr);

float ParticleSettings_child_parting_max_get(PointerRNA *ptr);

float ParticleSettings_child_parting_min_get(PointerRNA *ptr);

float ParticleSettings_path_end_get(PointerRNA *ptr);

float ParticleSettings_path_start_get(PointerRNA *ptr);

float ParticleSettings_phase_factor_get(PointerRNA *ptr);

enum {
	ParticleSettings_physics_type_NO = 0,
	ParticleSettings_physics_type_NEWTON = 1,
	ParticleSettings_physics_type_KEYED = 2,
	ParticleSettings_physics_type_BOIDS = 3,
	ParticleSettings_physics_type_FLUID = 4,
};

int ParticleSettings_physics_type_get(PointerRNA *ptr);

int ParticleSettings_use_group_pick_random_get(PointerRNA *ptr);

int ParticleSettings_adaptive_pixel_get(PointerRNA *ptr);

int ParticleSettings_use_emit_random_get(PointerRNA *ptr);

float ParticleSettings_lifetime_random_get(PointerRNA *ptr);

float ParticleSettings_factor_random_get(PointerRNA *ptr);

float ParticleSettings_child_size_random_get(PointerRNA *ptr);

float ParticleSettings_length_random_get(PointerRNA *ptr);

float ParticleSettings_phase_factor_random_get(PointerRNA *ptr);

float ParticleSettings_rotation_factor_random_get(PointerRNA *ptr);

float ParticleSettings_size_random_get(PointerRNA *ptr);

float ParticleSettings_billboard_tilt_random_get(PointerRNA *ptr);

float ParticleSettings_simplify_rate_get(PointerRNA *ptr);

float ParticleSettings_simplify_viewport_get(PointerRNA *ptr);

enum {
	ParticleSettings_react_event_DEATH = 0,
	ParticleSettings_react_event_COLLIDE = 1,
	ParticleSettings_react_event_NEAR = 2,
};

int ParticleSettings_react_event_get(PointerRNA *ptr);

float ParticleSettings_reactor_factor_get(PointerRNA *ptr);

int ParticleSettings_simplify_refsize_get(PointerRNA *ptr);

int ParticleSettings_regrow_hair_get(PointerRNA *ptr);

int ParticleSettings_render_step_get(PointerRNA *ptr);

int ParticleSettings_rendered_child_count_get(PointerRNA *ptr);

int ParticleSettings_grid_resolution_get(PointerRNA *ptr);

float ParticleSettings_tangent_phase_get(PointerRNA *ptr);

enum {
	ParticleSettings_rotation_mode_NONE = 0,
	ParticleSettings_rotation_mode_NOR = 1,
	ParticleSettings_rotation_mode_VEL = 2,
	ParticleSettings_rotation_mode_GLOB_X = 3,
	ParticleSettings_rotation_mode_GLOB_Y = 4,
	ParticleSettings_rotation_mode_GLOB_Z = 5,
	ParticleSettings_rotation_mode_OB_X = 6,
	ParticleSettings_rotation_mode_OB_Y = 7,
	ParticleSettings_rotation_mode_OB_Z = 8,
};

int ParticleSettings_rotation_mode_get(PointerRNA *ptr);

float ParticleSettings_roughness_endpoint_get(PointerRNA *ptr);

float ParticleSettings_roughness_1_get(PointerRNA *ptr);

float ParticleSettings_roughness_2_get(PointerRNA *ptr);

PointerRNA ParticleSettings_fluid_get(PointerRNA *ptr);

int ParticleSettings_hair_step_get(PointerRNA *ptr);

int ParticleSettings_use_self_effect_get(PointerRNA *ptr);

float ParticleSettings_clump_shape_get(PointerRNA *ptr);

float ParticleSettings_kink_shape_get(PointerRNA *ptr);

float ParticleSettings_roughness_end_shape_get(PointerRNA *ptr);

int ParticleSettings_show_size_get(PointerRNA *ptr);

float ParticleSettings_particle_size_get(PointerRNA *ptr);

int ParticleSettings_use_size_deflect_get(PointerRNA *ptr);

float ParticleSettings_roughness_1_size_get(PointerRNA *ptr);

float ParticleSettings_roughness_2_size_get(PointerRNA *ptr);

int ParticleSettings_use_velocity_length_get(PointerRNA *ptr);

float ParticleSettings_frame_start_get(PointerRNA *ptr);

int ParticleSettings_use_react_start_end_get(PointerRNA *ptr);

int ParticleSettings_draw_step_get(PointerRNA *ptr);

float ParticleSettings_effect_hair_get(PointerRNA *ptr);

int ParticleSettings_use_strand_primitive_get(PointerRNA *ptr);

int ParticleSettings_subframes_get(PointerRNA *ptr);

float ParticleSettings_tangent_factor_get(PointerRNA *ptr);

void ParticleSettings_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ParticleSettings_texture_slots_next(CollectionPropertyIterator *iter);
void ParticleSettings_texture_slots_end(CollectionPropertyIterator *iter);

float ParticleSettings_roughness_2_threshold_get(PointerRNA *ptr);

float ParticleSettings_child_length_threshold_get(PointerRNA *ptr);

float ParticleSettings_branch_threshold_get(PointerRNA *ptr);

float ParticleSettings_billboard_tilt_get(PointerRNA *ptr);

int ParticleSettings_trail_count_get(PointerRNA *ptr);

float ParticleSettings_simplify_transition_get(PointerRNA *ptr);

float ParticleSettings_time_tweak_get(PointerRNA *ptr);

enum {
	ParticleSettings_type_EMITTER = 0,
	ParticleSettings_type_HAIR = 2,
};

int ParticleSettings_type_get(PointerRNA *ptr);

int ParticleSettings_billboard_uv_split_get(PointerRNA *ptr);

int ParticleSettings_show_unborn_get(PointerRNA *ptr);

int ParticleSettings_use_group_count_get(PointerRNA *ptr);

int ParticleSettings_use_global_dupli_get(PointerRNA *ptr);

int ParticleSettings_show_velocity_get(PointerRNA *ptr);

int ParticleSettings_use_simplify_viewport_get(PointerRNA *ptr);

float ParticleSettings_virtual_parents_get(PointerRNA *ptr);

int ParticleSettings_use_whole_group_get(PointerRNA *ptr);

int ParticleSettings_apply_guide_to_children_get(PointerRNA *ptr);

/**************** Particle Settings Texture Slot ****************/

extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_TextureSlot;

int ParticleSettingsTextureSlot_use_map_clump_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_clump_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_damp_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_damp_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_density_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_density_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_time_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_time_factor_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_field_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_field_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_gravity_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_gravity_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_velocity_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_kink_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_kink_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_length_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_length_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_life_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_life_factor_get(PointerRNA *ptr);

enum {
	ParticleSettingsTextureSlot_mapping_FLAT = 0,
	ParticleSettingsTextureSlot_mapping_CUBE = 1,
	ParticleSettingsTextureSlot_mapping_TUBE = 2,
	ParticleSettingsTextureSlot_mapping_SPHERE = 3,
};

int ParticleSettingsTextureSlot_mapping_get(PointerRNA *ptr);

PointerRNA ParticleSettingsTextureSlot_object_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_rough_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_rough_factor_get(PointerRNA *ptr);

int ParticleSettingsTextureSlot_use_map_size_get(PointerRNA *ptr);

float ParticleSettingsTextureSlot_size_factor_get(PointerRNA *ptr);

enum {
	ParticleSettingsTextureSlot_texture_coords_GLOBAL = 8,
	ParticleSettingsTextureSlot_texture_coords_OBJECT = 32,
	ParticleSettingsTextureSlot_texture_coords_UV = 16,
	ParticleSettingsTextureSlot_texture_coords_ORCO = 1,
	ParticleSettingsTextureSlot_texture_coords_STRAND = 8192,
};

int ParticleSettingsTextureSlot_texture_coords_get(PointerRNA *ptr);

#define ParticleSettingsTextureSlot_uv_layer_MAX 32

void ParticleSettingsTextureSlot_uv_layer_get(PointerRNA *ptr, char *value);
int ParticleSettingsTextureSlot_uv_layer_length(PointerRNA *ptr);

float ParticleSettingsTextureSlot_velocity_factor_get(PointerRNA *ptr);

enum {
	ParticleSettingsTextureSlot_mapping_x_NONE = 0,
	ParticleSettingsTextureSlot_mapping_x_X = 1,
	ParticleSettingsTextureSlot_mapping_x_Y = 2,
	ParticleSettingsTextureSlot_mapping_x_Z = 3,
};

int ParticleSettingsTextureSlot_mapping_x_get(PointerRNA *ptr);

enum {
	ParticleSettingsTextureSlot_mapping_y_NONE = 0,
	ParticleSettingsTextureSlot_mapping_y_X = 1,
	ParticleSettingsTextureSlot_mapping_y_Y = 2,
	ParticleSettingsTextureSlot_mapping_y_Z = 3,
};

int ParticleSettingsTextureSlot_mapping_y_get(PointerRNA *ptr);

enum {
	ParticleSettingsTextureSlot_mapping_z_NONE = 0,
	ParticleSettingsTextureSlot_mapping_z_X = 1,
	ParticleSettingsTextureSlot_mapping_z_Y = 2,
	ParticleSettingsTextureSlot_mapping_z_Z = 3,
};

int ParticleSettingsTextureSlot_mapping_z_get(PointerRNA *ptr);

/**************** Texture Slots ****************/

extern StructRNA RNA_ParticleSettingsTextureSlots;

PointerRNA ParticleSettingsTextureSlots_rna_type_get(PointerRNA *ptr);

/**************** Particle System ****************/

extern StructRNA RNA_ParticleSystem;

PointerRNA ParticleSystem_rna_type_get(PointerRNA *ptr);

#define ParticleSystem_name_MAX 32

void ParticleSystem_name_get(PointerRNA *ptr, char *value);
int ParticleSystem_name_length(PointerRNA *ptr);

PointerRNA ParticleSystem_active_particle_target_get(PointerRNA *ptr);

int ParticleSystem_active_particle_target_index_get(PointerRNA *ptr);

#define ParticleSystem_billboard_normal_uv_MAX 32

void ParticleSystem_billboard_normal_uv_get(PointerRNA *ptr, char *value);
int ParticleSystem_billboard_normal_uv_length(PointerRNA *ptr);

#define ParticleSystem_billboard_split_uv_MAX 32

void ParticleSystem_billboard_split_uv_get(PointerRNA *ptr, char *value);
int ParticleSystem_billboard_split_uv_length(PointerRNA *ptr);

#define ParticleSystem_billboard_time_index_uv_MAX 32

void ParticleSystem_billboard_time_index_uv_get(PointerRNA *ptr, char *value);
int ParticleSystem_billboard_time_index_uv_length(PointerRNA *ptr);

void ParticleSystem_child_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ParticleSystem_child_particles_next(CollectionPropertyIterator *iter);
void ParticleSystem_child_particles_end(CollectionPropertyIterator *iter);

int ParticleSystem_child_seed_get(PointerRNA *ptr);

PointerRNA ParticleSystem_cloth_get(PointerRNA *ptr);

int ParticleSystem_is_editable_get(PointerRNA *ptr);

int ParticleSystem_is_edited_get(PointerRNA *ptr);

int ParticleSystem_is_global_hair_get(PointerRNA *ptr);

int ParticleSystem_use_hair_dynamics_get(PointerRNA *ptr);

int ParticleSystem_use_keyed_timing_get(PointerRNA *ptr);

int ParticleSystem_has_multiple_caches_get(PointerRNA *ptr);

PointerRNA ParticleSystem_parent_get(PointerRNA *ptr);

void ParticleSystem_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ParticleSystem_particles_next(CollectionPropertyIterator *iter);
void ParticleSystem_particles_end(CollectionPropertyIterator *iter);

PointerRNA ParticleSystem_point_cache_get(PointerRNA *ptr);

PointerRNA ParticleSystem_reactor_target_object_get(PointerRNA *ptr);

int ParticleSystem_reactor_target_particle_system_get(PointerRNA *ptr);

int ParticleSystem_seed_get(PointerRNA *ptr);

PointerRNA ParticleSystem_settings_get(PointerRNA *ptr);

void ParticleSystem_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ParticleSystem_targets_next(CollectionPropertyIterator *iter);
void ParticleSystem_targets_end(CollectionPropertyIterator *iter);

void ParticleSystem_vertex_group_clump_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_clump_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_clump_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_density_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_density_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_density_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_field_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_field_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_field_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_kink_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_kink_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_kink_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_length_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_length_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_length_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_rotation_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_rotation_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_rotation_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_roughness_1_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_roughness_1_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_roughness_1_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_roughness_2_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_roughness_2_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_roughness_2_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_roughness_end_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_roughness_end_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_roughness_end_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_size_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_size_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_size_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_tangent_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_tangent_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_tangent_get(PointerRNA *ptr);

void ParticleSystem_vertex_group_velocity_get(PointerRNA *ptr, char *value);
int ParticleSystem_vertex_group_velocity_length(PointerRNA *ptr);

int ParticleSystem_invert_vertex_group_velocity_get(PointerRNA *ptr);

/**************** ParticleSystem Modifier ****************/

extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_Modifier;

PointerRNA ParticleSystemModifier_particle_system_get(PointerRNA *ptr);

/**************** Particle Systems ****************/

extern StructRNA RNA_ParticleSystems;

PointerRNA ParticleSystems_rna_type_get(PointerRNA *ptr);

PointerRNA ParticleSystems_active_get(PointerRNA *ptr);

int ParticleSystems_active_index_get(PointerRNA *ptr);

/**************** Particle Target ****************/

extern StructRNA RNA_ParticleTarget;

PointerRNA ParticleTarget_rna_type_get(PointerRNA *ptr);

void ParticleTarget_name_get(PointerRNA *ptr, char *value);
int ParticleTarget_name_length(PointerRNA *ptr);

float ParticleTarget_duration_get(PointerRNA *ptr);

enum {
	ParticleTarget_alliance_FRIEND = 1,
	ParticleTarget_alliance_NEUTRAL = 0,
	ParticleTarget_alliance_ENEMY = 2,
};

int ParticleTarget_alliance_get(PointerRNA *ptr);

PointerRNA ParticleTarget_object_get(PointerRNA *ptr);

int ParticleTarget_system_get(PointerRNA *ptr);

float ParticleTarget_time_get(PointerRNA *ptr);

int ParticleTarget_is_valid_get(PointerRNA *ptr);

/**************** Pivot Constraint ****************/

extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_Constraint;

enum {
	PivotConstraint_rotation_range_ALWAYS_ACTIVE = -1,
	PivotConstraint_rotation_range_NX = 0,
	PivotConstraint_rotation_range_NY = 1,
	PivotConstraint_rotation_range_NZ = 2,
	PivotConstraint_rotation_range_X = 3,
	PivotConstraint_rotation_range_Y = 4,
	PivotConstraint_rotation_range_Z = 5,
};

int PivotConstraint_rotation_range_get(PointerRNA *ptr);

float PivotConstraint_head_tail_get(PointerRNA *ptr);

void PivotConstraint_offset_get(PointerRNA *ptr, float values[3]);

#define PivotConstraint_subtarget_MAX 32

void PivotConstraint_subtarget_get(PointerRNA *ptr, char *value);
int PivotConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA PivotConstraint_target_get(PointerRNA *ptr);

int PivotConstraint_use_relative_location_get(PointerRNA *ptr);

/**************** Plugin Sequence ****************/

extern StructRNA RNA_PluginSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_Sequence;

#define PluginSequence_filename_MAX 256

void PluginSequence_filename_get(PointerRNA *ptr, char *value);
int PluginSequence_filename_length(PointerRNA *ptr);

/**************** Plugin ****************/

extern StructRNA RNA_PluginTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

/**************** Point Cache ****************/

extern StructRNA RNA_PointCache;

PointerRNA PointCache_rna_type_get(PointerRNA *ptr);

#define PointCache_name_MAX 64

void PointCache_name_get(PointerRNA *ptr, char *value);
int PointCache_name_length(PointerRNA *ptr);

enum {
	PointCache_compression_NO = 0,
	PointCache_compression_LIGHT = 1,
	PointCache_compression_HEAVY = 2,
};

int PointCache_compression_get(PointerRNA *ptr);

int PointCache_index_get(PointerRNA *ptr);

#define PointCache_info_MAX 64

void PointCache_info_get(PointerRNA *ptr, char *value);
int PointCache_info_length(PointerRNA *ptr);

int PointCache_frame_step_get(PointerRNA *ptr);

int PointCache_is_outdated_get(PointerRNA *ptr);

int PointCache_use_disk_cache_get(PointerRNA *ptr);

int PointCache_frame_end_get(PointerRNA *ptr);

int PointCache_use_external_get(PointerRNA *ptr);

#define PointCache_filepath_MAX 240

void PointCache_filepath_get(PointerRNA *ptr, char *value);
int PointCache_filepath_length(PointerRNA *ptr);

int PointCache_use_library_path_get(PointerRNA *ptr);

void PointCache_point_caches_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void PointCache_point_caches_next(CollectionPropertyIterator *iter);
void PointCache_point_caches_end(CollectionPropertyIterator *iter);

int PointCache_use_quick_cache_get(PointerRNA *ptr);

int PointCache_frame_start_get(PointerRNA *ptr);

int PointCache_frames_skipped_get(PointerRNA *ptr);

int PointCache_is_baked_get(PointerRNA *ptr);

int PointCache_is_baking_get(PointerRNA *ptr);

/**************** Point Caches ****************/

extern StructRNA RNA_PointCaches;

PointerRNA PointCaches_rna_type_get(PointerRNA *ptr);

int PointCaches_active_index_get(PointerRNA *ptr);

/**************** PointDensity ****************/

extern StructRNA RNA_PointDensity;

PointerRNA PointDensity_rna_type_get(PointerRNA *ptr);

PointerRNA PointDensity_color_ramp_get(PointerRNA *ptr);

enum {
	PointDensity_color_source_CONSTANT = 0,
	PointDensity_color_source_PARTICLE_AGE = 1,
	PointDensity_color_source_PARTICLE_SPEED = 2,
	PointDensity_color_source_PARTICLE_VELOCITY = 3,
};

int PointDensity_color_source_get(PointerRNA *ptr);

int PointDensity_turbulence_depth_get(PointerRNA *ptr);

enum {
	PointDensity_falloff_STANDARD = 0,
	PointDensity_falloff_SMOOTH = 1,
	PointDensity_falloff_SOFT = 2,
	PointDensity_falloff_CONSTANT = 3,
	PointDensity_falloff_ROOT = 4,
};

int PointDensity_falloff_get(PointerRNA *ptr);

enum {
	PointDensity_noise_basis_BLENDER_ORIGINAL = 0,
	PointDensity_noise_basis_ORIGINAL_PERLIN = 1,
	PointDensity_noise_basis_IMPROVED_PERLIN = 2,
	PointDensity_noise_basis_VORONOI_F1 = 3,
	PointDensity_noise_basis_VORONOI_F2 = 4,
	PointDensity_noise_basis_VORONOI_F3 = 5,
	PointDensity_noise_basis_VORONOI_F4 = 6,
	PointDensity_noise_basis_VORONOI_F2_F1 = 7,
	PointDensity_noise_basis_VORONOI_CRACKLE = 8,
	PointDensity_noise_basis_CELL_NOISE = 14,
};

int PointDensity_noise_basis_get(PointerRNA *ptr);

PointerRNA PointDensity_object_get(PointerRNA *ptr);

enum {
	PointDensity_particle_cache_space_OBJECT_LOCATION = 0,
	PointDensity_particle_cache_space_OBJECT_SPACE = 1,
	PointDensity_particle_cache_space_WORLD_SPACE = 2,
};

int PointDensity_particle_cache_space_get(PointerRNA *ptr);

PointerRNA PointDensity_particle_system_get(PointerRNA *ptr);

enum {
	PointDensity_point_source_PARTICLE_SYSTEM = 0,
	PointDensity_point_source_OBJECT = 1,
};

int PointDensity_point_source_get(PointerRNA *ptr);

float PointDensity_radius_get(PointerRNA *ptr);

float PointDensity_speed_scale_get(PointerRNA *ptr);

float PointDensity_turbulence_scale_get(PointerRNA *ptr);

float PointDensity_falloff_soft_get(PointerRNA *ptr);

float PointDensity_turbulence_strength_get(PointerRNA *ptr);

int PointDensity_use_turbulence_get(PointerRNA *ptr);

enum {
	PointDensity_turbulence_influence_STATIC = 0,
	PointDensity_turbulence_influence_PARTICLE_VELOCITY = 1,
	PointDensity_turbulence_influence_PARTICLE_AGE = 2,
	PointDensity_turbulence_influence_GLOBAL_TIME = 3,
};

int PointDensity_turbulence_influence_get(PointerRNA *ptr);

enum {
	PointDensity_vertex_cache_space_OBJECT_LOCATION = 0,
	PointDensity_vertex_cache_space_OBJECT_SPACE = 1,
	PointDensity_vertex_cache_space_WORLD_SPACE = 2,
};

int PointDensity_vertex_cache_space_get(PointerRNA *ptr);

/**************** Point Density ****************/

extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

PointerRNA PointDensityTexture_point_density_get(PointerRNA *ptr);

/**************** Point Lamp ****************/

extern StructRNA RNA_PointLamp;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_ID;

PointerRNA PointLamp_falloff_curve_get(PointerRNA *ptr);

enum {
	PointLamp_falloff_type_CONSTANT = 0,
	PointLamp_falloff_type_INVERSE_LINEAR = 1,
	PointLamp_falloff_type_INVERSE_SQUARE = 2,
	PointLamp_falloff_type_CUSTOM_CURVE = 3,
	PointLamp_falloff_type_LINEAR_QUADRATIC_WEIGHTED = 4,
};

int PointLamp_falloff_type_get(PointerRNA *ptr);

float PointLamp_linear_attenuation_get(PointerRNA *ptr);

int PointLamp_use_only_shadow_get(PointerRNA *ptr);

float PointLamp_quadratic_attenuation_get(PointerRNA *ptr);

float PointLamp_shadow_adaptive_threshold_get(PointerRNA *ptr);

void PointLamp_shadow_color_get(PointerRNA *ptr, float values[3]);

int PointLamp_use_shadow_layer_get(PointerRNA *ptr);

enum {
	PointLamp_shadow_method_NOSHADOW = 0,
	PointLamp_shadow_method_RAY_SHADOW = 8192,
};

int PointLamp_shadow_method_get(PointerRNA *ptr);

int PointLamp_shadow_ray_samples_get(PointerRNA *ptr);

enum {
	PointLamp_shadow_ray_sample_method_ADAPTIVE_QMC = 1,
	PointLamp_shadow_ray_sample_method_CONSTANT_QMC = 2,
};

int PointLamp_shadow_ray_sample_method_get(PointerRNA *ptr);

float PointLamp_shadow_soft_size_get(PointerRNA *ptr);

int PointLamp_use_sphere_get(PointerRNA *ptr);

/**************** Pointer Definition ****************/

extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_Property;

PointerRNA PointerProperty_fixed_type_get(PointerRNA *ptr);

/**************** Pose ****************/

extern StructRNA RNA_Pose;

PointerRNA Pose_rna_type_get(PointerRNA *ptr);

PointerRNA Pose_animation_visualisation_get(PointerRNA *ptr);

void Pose_bone_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Pose_bone_groups_next(CollectionPropertyIterator *iter);
void Pose_bone_groups_end(CollectionPropertyIterator *iter);

PointerRNA Pose_ik_param_get(PointerRNA *ptr);

enum {
	Pose_ik_solver_LEGACY = 0,
	Pose_ik_solver_ITASC = 1,
};

int Pose_ik_solver_get(PointerRNA *ptr);

void Pose_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Pose_bones_next(CollectionPropertyIterator *iter);
void Pose_bones_end(CollectionPropertyIterator *iter);

/**************** Pose Bone ****************/

extern StructRNA RNA_PoseBone;

PointerRNA PoseBone_rna_type_get(PointerRNA *ptr);

#define PoseBone_name_MAX 32

void PoseBone_name_get(PointerRNA *ptr, char *value);
int PoseBone_name_length(PointerRNA *ptr);

void PoseBone_rotation_axis_angle_get(PointerRNA *ptr, float values[4]);

void PoseBone_matrix_basis_get(PointerRNA *ptr, float values[16]);

PointerRNA PoseBone_bone_get(PointerRNA *ptr);

PointerRNA PoseBone_bone_group_get(PointerRNA *ptr);

int PoseBone_bone_group_index_get(PointerRNA *ptr);

void PoseBone_matrix_channel_get(PointerRNA *ptr, float values[16]);

PointerRNA PoseBone_child_get(PointerRNA *ptr);

void PoseBone_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void PoseBone_constraints_next(CollectionPropertyIterator *iter);
void PoseBone_constraints_end(CollectionPropertyIterator *iter);

PointerRNA PoseBone_custom_shape_get(PointerRNA *ptr);

PointerRNA PoseBone_custom_shape_transform_get(PointerRNA *ptr);

void PoseBone_rotation_euler_get(PointerRNA *ptr, float values[3]);

int PoseBone_is_in_ik_chain_get(PointerRNA *ptr);

float PoseBone_ik_linear_weight_get(PointerRNA *ptr);

float PoseBone_ik_rotation_weight_get(PointerRNA *ptr);

float PoseBone_ik_stretch_get(PointerRNA *ptr);

int PoseBone_use_ik_limit_x_get(PointerRNA *ptr);

int PoseBone_lock_ik_x_get(PointerRNA *ptr);

float PoseBone_ik_max_x_get(PointerRNA *ptr);

float PoseBone_ik_min_x_get(PointerRNA *ptr);

float PoseBone_ik_stiffness_x_get(PointerRNA *ptr);

int PoseBone_use_ik_limit_y_get(PointerRNA *ptr);

int PoseBone_lock_ik_y_get(PointerRNA *ptr);

float PoseBone_ik_max_y_get(PointerRNA *ptr);

float PoseBone_ik_min_y_get(PointerRNA *ptr);

float PoseBone_ik_stiffness_y_get(PointerRNA *ptr);

int PoseBone_use_ik_limit_z_get(PointerRNA *ptr);

int PoseBone_lock_ik_z_get(PointerRNA *ptr);

float PoseBone_ik_max_z_get(PointerRNA *ptr);

float PoseBone_ik_min_z_get(PointerRNA *ptr);

float PoseBone_ik_stiffness_z_get(PointerRNA *ptr);

int PoseBone_use_ik_rotation_control_get(PointerRNA *ptr);

int PoseBone_use_ik_linear_control_get(PointerRNA *ptr);

void PoseBone_location_get(PointerRNA *ptr, float values[3]);

void PoseBone_lock_location_get(PointerRNA *ptr, int values[3]);

void PoseBone_lock_rotation_get(PointerRNA *ptr, int values[3]);

int PoseBone_lock_rotation_w_get(PointerRNA *ptr);

int PoseBone_lock_rotations_4d_get(PointerRNA *ptr);

void PoseBone_lock_scale_get(PointerRNA *ptr, int values[3]);

PointerRNA PoseBone_motion_path_get(PointerRNA *ptr);

PointerRNA PoseBone_parent_get(PointerRNA *ptr);

void PoseBone_head_get(PointerRNA *ptr, float values[3]);

void PoseBone_matrix_get(PointerRNA *ptr, float values[16]);

void PoseBone_tail_get(PointerRNA *ptr, float values[3]);

void PoseBone_rotation_quaternion_get(PointerRNA *ptr, float values[4]);

enum {
	PoseBone_rotation_mode_QUATERNION = 0,
	PoseBone_rotation_mode_XYZ = 1,
	PoseBone_rotation_mode_XZY = 2,
	PoseBone_rotation_mode_YXZ = 3,
	PoseBone_rotation_mode_YZX = 4,
	PoseBone_rotation_mode_ZXY = 5,
	PoseBone_rotation_mode_ZYX = 6,
	PoseBone_rotation_mode_AXIS_ANGLE = -1,
};

int PoseBone_rotation_mode_get(PointerRNA *ptr);

void PoseBone_scale_get(PointerRNA *ptr, float values[3]);

/**************** PoseBone Constraints ****************/

extern StructRNA RNA_PoseBoneConstraints;

PointerRNA PoseBoneConstraints_rna_type_get(PointerRNA *ptr);

PointerRNA PoseBoneConstraints_active_get(PointerRNA *ptr);

/**************** Property Definition ****************/

extern StructRNA RNA_Property;

PointerRNA Property_rna_type_get(PointerRNA *ptr);

void Property_name_get(PointerRNA *ptr, char *value);
int Property_name_length(PointerRNA *ptr);

PointerRNA Property_srna_get(PointerRNA *ptr);

void Property_description_get(PointerRNA *ptr, char *value);
int Property_description_length(PointerRNA *ptr);

int Property_is_enum_flag_get(PointerRNA *ptr);

int Property_is_hidden_get(PointerRNA *ptr);

void Property_identifier_get(PointerRNA *ptr, char *value);
int Property_identifier_length(PointerRNA *ptr);

int Property_is_never_none_get(PointerRNA *ptr);

int Property_is_readonly_get(PointerRNA *ptr);

int Property_is_runtime_get(PointerRNA *ptr);

int Property_is_registered_get(PointerRNA *ptr);

int Property_is_registered_optional_get(PointerRNA *ptr);

int Property_is_required_get(PointerRNA *ptr);

int Property_is_output_get(PointerRNA *ptr);

enum {
	Property_subtype_NONE = 0,
	Property_subtype_FILE_PATH = 1,
	Property_subtype_DIRECTORY_PATH = 2,
	Property_subtype_UNSIGNED = 13,
	Property_subtype_PERCENTAGE = 14,
	Property_subtype_FACTOR = 15,
	Property_subtype_ANGLE = 327696,
	Property_subtype_TIME = 393233,
	Property_subtype_DISTANCE = 65554,
	Property_subtype_COLOR = 20,
	Property_subtype_TRANSLATION = 65557,
	Property_subtype_DIRECTION = 22,
	Property_subtype_MATRIX = 25,
	Property_subtype_EULER = 327706,
	Property_subtype_QUATERNION = 27,
	Property_subtype_XYZ = 29,
	Property_subtype_COLOR_GAMMA = 30,
	Property_subtype_LAYER = 40,
	Property_subtype_LAYER_MEMBERSHIP = 41,
};

int Property_subtype_get(PointerRNA *ptr);

enum {
	Property_type_BOOLEAN = 0,
	Property_type_INT = 1,
	Property_type_FLOAT = 2,
	Property_type_STRING = 3,
	Property_type_ENUM = 4,
	Property_type_POINTER = 5,
	Property_type_COLLECTION = 6,
};

int Property_type_get(PointerRNA *ptr);

enum {
	Property_unit_NONE = 0,
	Property_unit_LENGTH = 65536,
	Property_unit_AREA = 131072,
	Property_unit_VOLUME = 196608,
	Property_unit_ROTATION = 327680,
	Property_unit_TIME = 393216,
	Property_unit_VELOCITY = 458752,
	Property_unit_ACCELERATION = 524288,
};

int Property_unit_get(PointerRNA *ptr);

/**************** Property Actuator ****************/

extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_Actuator;

enum {
	PropertyActuator_mode_ASSIGN = 0,
	PropertyActuator_mode_ADD = 1,
	PropertyActuator_mode_COPY = 2,
	PropertyActuator_mode_TOGGLE = 3,
};

int PropertyActuator_mode_get(PointerRNA *ptr);

PointerRNA PropertyActuator_object_get(PointerRNA *ptr);

#define PropertyActuator_property_MAX 32

void PropertyActuator_property_get(PointerRNA *ptr, char *value);
int PropertyActuator_property_length(PointerRNA *ptr);

#define PropertyActuator_object_property_MAX 32

void PropertyActuator_object_property_get(PointerRNA *ptr, char *value);
int PropertyActuator_object_property_length(PointerRNA *ptr);

#define PropertyActuator_value_MAX 32

void PropertyActuator_value_get(PointerRNA *ptr, char *value);
int PropertyActuator_value_length(PointerRNA *ptr);

/**************** ID Property Group ****************/

extern StructRNA RNA_PropertyGroup;

PointerRNA PropertyGroup_rna_type_get(PointerRNA *ptr);

/**************** ID Property ****************/

extern StructRNA RNA_PropertyGroupItem;

PointerRNA PropertyGroupItem_rna_type_get(PointerRNA *ptr);

/**************** Property Sensor ****************/

extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_Sensor;

enum {
	PropertySensor_evaluation_type_PROPEQUAL = 0,
	PropertySensor_evaluation_type_PROPNEQUAL = 1,
	PropertySensor_evaluation_type_PROPINTERVAL = 2,
	PropertySensor_evaluation_type_PROPCHANGED = 3,
};

int PropertySensor_evaluation_type_get(PointerRNA *ptr);

#define PropertySensor_value_max_MAX 32

void PropertySensor_value_max_get(PointerRNA *ptr, char *value);
int PropertySensor_value_max_length(PointerRNA *ptr);

#define PropertySensor_value_min_MAX 32

void PropertySensor_value_min_get(PointerRNA *ptr, char *value);
int PropertySensor_value_min_length(PointerRNA *ptr);

#define PropertySensor_property_MAX 32

void PropertySensor_property_get(PointerRNA *ptr, char *value);
int PropertySensor_property_length(PointerRNA *ptr);

#define PropertySensor_value_MAX 32

void PropertySensor_value_get(PointerRNA *ptr, char *value);
int PropertySensor_value_length(PointerRNA *ptr);

/**************** Python Constraint ****************/

extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_Constraint;

int PythonConstraint_target_count_get(PointerRNA *ptr);

PointerRNA PythonConstraint_text_get(PointerRNA *ptr);

int PythonConstraint_has_script_error_get(PointerRNA *ptr);

void PythonConstraint_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void PythonConstraint_targets_next(CollectionPropertyIterator *iter);
void PythonConstraint_targets_end(CollectionPropertyIterator *iter);

int PythonConstraint_use_targets_get(PointerRNA *ptr);

/**************** Python Controller ****************/

extern StructRNA RNA_PythonController;
extern StructRNA RNA_Controller;

int PythonController_use_debug_get(PointerRNA *ptr);

enum {
	PythonController_mode_SCRIPT = 0,
	PythonController_mode_MODULE = 1,
};

int PythonController_mode_get(PointerRNA *ptr);

#define PythonController_module_MAX 64

void PythonController_module_get(PointerRNA *ptr, char *value);
int PythonController_module_length(PointerRNA *ptr);

PointerRNA PythonController_text_get(PointerRNA *ptr);

/**************** RGBA Node Socket ****************/

extern StructRNA RNA_RGBANodeSocket;
extern StructRNA RNA_NodeSocket;

void RGBANodeSocket_default_value_get(PointerRNA *ptr, float values[4]);

/**************** Radar Sensor ****************/

extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_Sensor;

float RadarSensor_angle_get(PointerRNA *ptr);

enum {
	RadarSensor_axis_XAXIS = 0,
	RadarSensor_axis_YAXIS = 1,
	RadarSensor_axis_ZAXIS = 2,
	RadarSensor_axis_NEGXAXIS = 3,
	RadarSensor_axis_NEGYAXIS = 4,
	RadarSensor_axis_NEGZAXIS = 5,
};

int RadarSensor_axis_get(PointerRNA *ptr);

float RadarSensor_distance_get(PointerRNA *ptr);

#define RadarSensor_property_MAX 32

void RadarSensor_property_get(PointerRNA *ptr, char *value);
int RadarSensor_property_length(PointerRNA *ptr);

/**************** Random Actuator ****************/

extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_Actuator;

int RandomActuator_use_always_true_get(PointerRNA *ptr);

float RandomActuator_chance_get(PointerRNA *ptr);

enum {
	RandomActuator_distribution_BOOL_CONSTANT = 0,
	RandomActuator_distribution_BOOL_UNIFORM = 1,
	RandomActuator_distribution_BOOL_BERNOUILLI = 2,
	RandomActuator_distribution_INT_CONSTANT = 3,
	RandomActuator_distribution_INT_UNIFORM = 4,
	RandomActuator_distribution_INT_POISSON = 5,
	RandomActuator_distribution_FLOAT_CONSTANT = 6,
	RandomActuator_distribution_FLOAT_UNIFORM = 7,
	RandomActuator_distribution_FLOAT_NORMAL = 8,
	RandomActuator_distribution_FLOAT_NEGATIVE_EXPONENTIAL = 9,
};

int RandomActuator_distribution_get(PointerRNA *ptr);

float RandomActuator_half_life_time_get(PointerRNA *ptr);

int RandomActuator_int_max_get(PointerRNA *ptr);

float RandomActuator_float_max_get(PointerRNA *ptr);

float RandomActuator_int_mean_get(PointerRNA *ptr);

float RandomActuator_float_mean_get(PointerRNA *ptr);

int RandomActuator_int_min_get(PointerRNA *ptr);

float RandomActuator_float_min_get(PointerRNA *ptr);

#define RandomActuator_property_MAX 32

void RandomActuator_property_get(PointerRNA *ptr, char *value);
int RandomActuator_property_length(PointerRNA *ptr);

float RandomActuator_standard_derivation_get(PointerRNA *ptr);

int RandomActuator_seed_get(PointerRNA *ptr);

int RandomActuator_int_value_get(PointerRNA *ptr);

float RandomActuator_float_value_get(PointerRNA *ptr);

/**************** Random Sensor ****************/

extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_Sensor;

int RandomSensor_seed_get(PointerRNA *ptr);

/**************** Ray Sensor ****************/

extern StructRNA RNA_RaySensor;
extern StructRNA RNA_Sensor;

enum {
	RaySensor_axis_XAXIS = 1,
	RaySensor_axis_YAXIS = 0,
	RaySensor_axis_ZAXIS = 2,
	RaySensor_axis_NEGXAXIS = 3,
	RaySensor_axis_NEGYAXIS = 4,
	RaySensor_axis_NEGZAXIS = 5,
};

int RaySensor_axis_get(PointerRNA *ptr);

#define RaySensor_material_MAX 32

void RaySensor_material_get(PointerRNA *ptr, char *value);
int RaySensor_material_length(PointerRNA *ptr);

#define RaySensor_property_MAX 32

void RaySensor_property_get(PointerRNA *ptr, char *value);
int RaySensor_property_length(PointerRNA *ptr);

float RaySensor_range_get(PointerRNA *ptr);

enum {
	RaySensor_ray_type_PROPERTY = 0,
	RaySensor_ray_type_MATERIAL = 1,
};

int RaySensor_ray_type_get(PointerRNA *ptr);

int RaySensor_use_x_ray_get(PointerRNA *ptr);

/**************** Region ****************/

extern StructRNA RNA_Region;

PointerRNA Region_rna_type_get(PointerRNA *ptr);

int Region_height_get(PointerRNA *ptr);

int Region_id_get(PointerRNA *ptr);

enum {
	Region_type_WINDOW = 0,
	Region_type_HEADER = 1,
	Region_type_CHANNELS = 2,
	Region_type_TEMPORARY = 3,
	Region_type_UI = 4,
	Region_type_TOOLS = 5,
	Region_type_TOOL_PROPS = 6,
	Region_type_PREVIEW = 7,
};

int Region_type_get(PointerRNA *ptr);

int Region_width_get(PointerRNA *ptr);

/**************** 3D View Region ****************/

extern StructRNA RNA_RegionView3D;

PointerRNA RegionView3D_rna_type_get(PointerRNA *ptr);

int RegionView3D_show_sync_view_get(PointerRNA *ptr);

int RegionView3D_use_box_clip_get(PointerRNA *ptr);

float RegionView3D_view_distance_get(PointerRNA *ptr);

int RegionView3D_lock_rotation_get(PointerRNA *ptr);

enum {
	RegionView3D_view_perspective_PERSP = 1,
	RegionView3D_view_perspective_ORTHO = 0,
	RegionView3D_view_perspective_CAMERA = 2,
};

int RegionView3D_view_perspective_get(PointerRNA *ptr);

void RegionView3D_perspective_matrix_get(PointerRNA *ptr, float values[16]);

void RegionView3D_view_location_get(PointerRNA *ptr, float values[3]);

void RegionView3D_view_matrix_get(PointerRNA *ptr, float values[16]);

void RegionView3D_view_rotation_get(PointerRNA *ptr, float values[4]);

/**************** Render Engine ****************/

extern StructRNA RNA_RenderEngine;

PointerRNA RenderEngine_rna_type_get(PointerRNA *ptr);

void RenderEngine_bl_idname_get(PointerRNA *ptr, char *value);
int RenderEngine_bl_idname_length(PointerRNA *ptr);

void RenderEngine_bl_label_get(PointerRNA *ptr, char *value);
int RenderEngine_bl_label_length(PointerRNA *ptr);

int RenderEngine_bl_use_postprocess_get(PointerRNA *ptr);

int RenderEngine_bl_use_preview_get(PointerRNA *ptr);

/**************** Render Layer ****************/

extern StructRNA RNA_RenderLayer;

PointerRNA RenderLayer_rna_type_get(PointerRNA *ptr);

void RenderLayer_name_get(PointerRNA *ptr, char *value);
int RenderLayer_name_length(PointerRNA *ptr);

int RenderLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr);

int RenderLayer_exclude_ambient_occlusion_get(PointerRNA *ptr);

int RenderLayer_use_all_z_get(PointerRNA *ptr);

int RenderLayer_use_pass_color_get(PointerRNA *ptr);

int RenderLayer_use_pass_combined_get(PointerRNA *ptr);

int RenderLayer_use_pass_diffuse_get(PointerRNA *ptr);

int RenderLayer_use_edge_enhance_get(PointerRNA *ptr);

int RenderLayer_use_pass_emit_get(PointerRNA *ptr);

int RenderLayer_exclude_emit_get(PointerRNA *ptr);

int RenderLayer_use_get(PointerRNA *ptr);

int RenderLayer_use_pass_environment_get(PointerRNA *ptr);

int RenderLayer_exclude_environment_get(PointerRNA *ptr);

int RenderLayer_use_halo_get(PointerRNA *ptr);

int RenderLayer_use_pass_indirect_get(PointerRNA *ptr);

int RenderLayer_exclude_indirect_get(PointerRNA *ptr);

PointerRNA RenderLayer_light_override_get(PointerRNA *ptr);

PointerRNA RenderLayer_material_override_get(PointerRNA *ptr);

int RenderLayer_use_pass_mist_get(PointerRNA *ptr);

int RenderLayer_use_pass_normal_get(PointerRNA *ptr);

int RenderLayer_use_pass_object_index_get(PointerRNA *ptr);

int RenderLayer_use_pass_reflection_get(PointerRNA *ptr);

int RenderLayer_exclude_reflection_get(PointerRNA *ptr);

int RenderLayer_use_pass_refraction_get(PointerRNA *ptr);

int RenderLayer_exclude_refraction_get(PointerRNA *ptr);

int RenderLayer_use_pass_shadow_get(PointerRNA *ptr);

int RenderLayer_exclude_shadow_get(PointerRNA *ptr);

int RenderLayer_use_sky_get(PointerRNA *ptr);

int RenderLayer_use_solid_get(PointerRNA *ptr);

int RenderLayer_use_pass_specular_get(PointerRNA *ptr);

int RenderLayer_exclude_specular_get(PointerRNA *ptr);

int RenderLayer_use_strand_get(PointerRNA *ptr);

int RenderLayer_use_pass_uv_get(PointerRNA *ptr);

int RenderLayer_use_pass_vector_get(PointerRNA *ptr);

void RenderLayer_layers_get(PointerRNA *ptr, int values[20]);

int RenderLayer_use_pass_z_get(PointerRNA *ptr);

int RenderLayer_use_ztransp_get(PointerRNA *ptr);

int RenderLayer_use_zmask_get(PointerRNA *ptr);

void RenderLayer_layers_zmask_get(PointerRNA *ptr, int values[20]);

int RenderLayer_invert_zmask_get(PointerRNA *ptr);

void RenderLayer_passes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void RenderLayer_passes_next(CollectionPropertyIterator *iter);
void RenderLayer_passes_end(CollectionPropertyIterator *iter);

void RenderLayer_rect_get(PointerRNA *ptr, float values[0]);

/**************** Render Layers ****************/

extern StructRNA RNA_RenderLayers;

PointerRNA RenderLayers_rna_type_get(PointerRNA *ptr);

int RenderLayers_active_index_get(PointerRNA *ptr);

PointerRNA RenderLayers_active_get(PointerRNA *ptr);

/**************** Render Pass ****************/

extern StructRNA RNA_RenderPass;

PointerRNA RenderPass_rna_type_get(PointerRNA *ptr);

void RenderPass_name_get(PointerRNA *ptr, char *value);
int RenderPass_name_length(PointerRNA *ptr);

void RenderPass_channel_id_get(PointerRNA *ptr, char *value);
int RenderPass_channel_id_length(PointerRNA *ptr);

int RenderPass_channels_get(PointerRNA *ptr);

void RenderPass_rect_get(PointerRNA *ptr, float values[0]);

enum {
	RenderPass_type_COMBINED = 1,
	RenderPass_type_Z = 2,
	RenderPass_type_COLOR = 4,
	RenderPass_type_DIFFUSE = 8,
	RenderPass_type_SPECULAR = 16,
	RenderPass_type_SHADOW = 32,
	RenderPass_type_AO = 64,
	RenderPass_type_REFLECTION = 128,
	RenderPass_type_NORMAL = 256,
	RenderPass_type_VECTOR = 512,
	RenderPass_type_REFRACTION = 1024,
	RenderPass_type_OBJECT_INDEX = 2048,
	RenderPass_type_UV = 4096,
	RenderPass_type_MIST = 16384,
	RenderPass_type_EMIT = 65536,
	RenderPass_type_ENVIRONMENT = 131072,
};

int RenderPass_type_get(PointerRNA *ptr);

/**************** Render Result ****************/

extern StructRNA RNA_RenderResult;

PointerRNA RenderResult_rna_type_get(PointerRNA *ptr);

void RenderResult_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void RenderResult_layers_next(CollectionPropertyIterator *iter);
void RenderResult_layers_end(CollectionPropertyIterator *iter);

int RenderResult_resolution_x_get(PointerRNA *ptr);

int RenderResult_resolution_y_get(PointerRNA *ptr);

/**************** Render Data ****************/

extern StructRNA RNA_RenderSettings;

PointerRNA RenderSettings_rna_type_get(PointerRNA *ptr);

int RenderSettings_use_tiff_16bit_get(PointerRNA *ptr);

enum {
	RenderSettings_alpha_mode_SKY = 0,
	RenderSettings_alpha_mode_PREMUL = 1,
	RenderSettings_alpha_mode_STRAIGHT = 2,
};

int RenderSettings_alpha_mode_get(PointerRNA *ptr);

int RenderSettings_use_antialiasing_get(PointerRNA *ptr);

int RenderSettings_use_bake_antialiasing_get(PointerRNA *ptr);

enum {
	RenderSettings_bake_aa_mode_5 = 5,
	RenderSettings_bake_aa_mode_8 = 8,
	RenderSettings_bake_aa_mode_11 = 11,
	RenderSettings_bake_aa_mode_16 = 16,
};

int RenderSettings_bake_aa_mode_get(PointerRNA *ptr);

enum {
	RenderSettings_antialiasing_samples_5 = 5,
	RenderSettings_antialiasing_samples_8 = 8,
	RenderSettings_antialiasing_samples_11 = 11,
	RenderSettings_antialiasing_samples_16 = 16,
};

int RenderSettings_antialiasing_samples_get(PointerRNA *ptr);

int RenderSettings_cineon_black_get(PointerRNA *ptr);

enum {
	RenderSettings_bake_type_FULL = 1,
	RenderSettings_bake_type_AO = 2,
	RenderSettings_bake_type_SHADOW = 6,
	RenderSettings_bake_type_NORMALS = 3,
	RenderSettings_bake_type_TEXTURE = 4,
	RenderSettings_bake_type_DISPLACEMENT = 5,
};

int RenderSettings_bake_type_get(PointerRNA *ptr);

float RenderSettings_bake_bias_get(PointerRNA *ptr);

int RenderSettings_use_border_get(PointerRNA *ptr);

float RenderSettings_border_max_x_get(PointerRNA *ptr);

float RenderSettings_border_max_y_get(PointerRNA *ptr);

float RenderSettings_border_min_x_get(PointerRNA *ptr);

float RenderSettings_border_min_y_get(PointerRNA *ptr);

int RenderSettings_use_bake_clear_get(PointerRNA *ptr);

int RenderSettings_use_color_management_get(PointerRNA *ptr);

enum {
	RenderSettings_color_mode_BW = 8,
	RenderSettings_color_mode_RGB = 24,
	RenderSettings_color_mode_RGBA = 32,
};

int RenderSettings_color_mode_get(PointerRNA *ptr);

int RenderSettings_use_compositing_get(PointerRNA *ptr);

int RenderSettings_use_crop_to_border_get(PointerRNA *ptr);

enum {
	RenderSettings_jpeg2k_depth_8 = 8,
	RenderSettings_jpeg2k_depth_12 = 12,
	RenderSettings_jpeg2k_depth_16 = 16,
};

int RenderSettings_jpeg2k_depth_get(PointerRNA *ptr);

enum {
	RenderSettings_display_mode_SCREEN = 0,
	RenderSettings_display_mode_AREA = 1,
	RenderSettings_display_mode_WINDOW = 2,
};

int RenderSettings_display_mode_get(PointerRNA *ptr);

float RenderSettings_bake_distance_get(PointerRNA *ptr);

float RenderSettings_dither_intensity_get(PointerRNA *ptr);

int RenderSettings_use_edge_enhance_get(PointerRNA *ptr);

void RenderSettings_edge_color_get(PointerRNA *ptr, float values[3]);

int RenderSettings_edge_threshold_get(PointerRNA *ptr);

enum {
	RenderSettings_engine_BLENDER_RENDER = 0,
};

int RenderSettings_engine_get(PointerRNA *ptr);

int RenderSettings_use_envmaps_get(PointerRNA *ptr);

void RenderSettings_file_extension_get(PointerRNA *ptr, char *value);
int RenderSettings_file_extension_length(PointerRNA *ptr);

int RenderSettings_fps_get(PointerRNA *ptr);

float RenderSettings_fps_base_get(PointerRNA *ptr);

enum {
	RenderSettings_field_order_EVEN_FIRST = 0,
	RenderSettings_field_order_ODD_FIRST = 8192,
};

int RenderSettings_field_order_get(PointerRNA *ptr);

int RenderSettings_use_fields_get(PointerRNA *ptr);

int RenderSettings_use_fields_still_get(PointerRNA *ptr);

int RenderSettings_use_file_extension_get(PointerRNA *ptr);

enum {
	RenderSettings_file_format_BMP = 20,
	RenderSettings_file_format_IRIS = 1,
	RenderSettings_file_format_PNG = 17,
	RenderSettings_file_format_JPEG = 4,
	RenderSettings_file_format_JPEG2000 = 30,
	RenderSettings_file_format_TARGA = 0,
	RenderSettings_file_format_TARGA_RAW = 14,
	RenderSettings_file_format_CINEON = 26,
	RenderSettings_file_format_DPX = 27,
	RenderSettings_file_format_HDR = 21,
	RenderSettings_file_format_AVI_JPEG = 16,
	RenderSettings_file_format_AVI_RAW = 15,
	RenderSettings_file_format_FRAMESERVER = 25,
};

int RenderSettings_file_format_get(PointerRNA *ptr);

float RenderSettings_filter_size_get(PointerRNA *ptr);

int RenderSettings_stamp_font_size_get(PointerRNA *ptr);

int RenderSettings_frame_map_new_get(PointerRNA *ptr);

int RenderSettings_frame_map_old_get(PointerRNA *ptr);

int RenderSettings_use_free_image_textures_get(PointerRNA *ptr);

int RenderSettings_use_free_unused_nodes_get(PointerRNA *ptr);

int RenderSettings_use_full_sample_get(PointerRNA *ptr);

float RenderSettings_cineon_gamma_get(PointerRNA *ptr);

int RenderSettings_use_cineon_log_get(PointerRNA *ptr);

int RenderSettings_bake_margin_get(PointerRNA *ptr);

int RenderSettings_use_motion_blur_get(PointerRNA *ptr);

int RenderSettings_motion_blur_samples_get(PointerRNA *ptr);

int RenderSettings_is_movie_format_get(PointerRNA *ptr);

int RenderSettings_has_multiple_engines_get(PointerRNA *ptr);

enum {
	RenderSettings_bake_normal_space_CAMERA = 0,
	RenderSettings_bake_normal_space_WORLD = 1,
	RenderSettings_bake_normal_space_OBJECT = 2,
	RenderSettings_bake_normal_space_TANGENT = 3,
};

int RenderSettings_bake_normal_space_get(PointerRNA *ptr);

int RenderSettings_use_bake_normalize_get(PointerRNA *ptr);

enum {
	RenderSettings_octree_resolution_64 = 64,
	RenderSettings_octree_resolution_128 = 128,
	RenderSettings_octree_resolution_256 = 256,
	RenderSettings_octree_resolution_512 = 512,
};

int RenderSettings_octree_resolution_get(PointerRNA *ptr);

#define RenderSettings_filepath_MAX 160

void RenderSettings_filepath_get(PointerRNA *ptr, char *value);
int RenderSettings_filepath_length(PointerRNA *ptr);

int RenderSettings_use_overwrite_get(PointerRNA *ptr);

int RenderSettings_parts_x_get(PointerRNA *ptr);

int RenderSettings_parts_y_get(PointerRNA *ptr);

float RenderSettings_pixel_aspect_x_get(PointerRNA *ptr);

float RenderSettings_pixel_aspect_y_get(PointerRNA *ptr);

enum {
	RenderSettings_pixel_filter_type_BOX = 0,
	RenderSettings_pixel_filter_type_TENT = 1,
	RenderSettings_pixel_filter_type_QUADRATIC = 2,
	RenderSettings_pixel_filter_type_CUBIC = 3,
	RenderSettings_pixel_filter_type_CATMULLROM = 4,
	RenderSettings_pixel_filter_type_GAUSSIAN = 5,
	RenderSettings_pixel_filter_type_MITCHELL = 6,
};

int RenderSettings_pixel_filter_type_get(PointerRNA *ptr);

int RenderSettings_use_placeholder_get(PointerRNA *ptr);

enum {
	RenderSettings_jpeg2k_preset_NO_PRESET = 0,
	RenderSettings_jpeg2k_preset_CINE_24FPS = 1,
	RenderSettings_jpeg2k_preset_CINE_48FPS = 2,
	RenderSettings_jpeg2k_preset_CINE_24FPS_4K = 3,
	RenderSettings_jpeg2k_preset_CINE_SCOPE_48FPS = 4,
	RenderSettings_jpeg2k_preset_CINE_SCOPE_48FPS = 5,
	RenderSettings_jpeg2k_preset_CINE_FLAT_24FPS = 6,
	RenderSettings_jpeg2k_preset_CINE_FLAT_48FPS = 7,
};

int RenderSettings_jpeg2k_preset_get(PointerRNA *ptr);

enum {
	RenderSettings_bake_quad_split_AUTO = 0,
	RenderSettings_bake_quad_split_FIXED = 1,
	RenderSettings_bake_quad_split_FIXED_ALT = 2,
};

int RenderSettings_bake_quad_split_get(PointerRNA *ptr);

int RenderSettings_file_quality_get(PointerRNA *ptr);

int RenderSettings_use_radiosity_get(PointerRNA *ptr);

enum {
	RenderSettings_raytrace_method_AUTO = 0,
	RenderSettings_raytrace_method_OCTREE = 1,
	RenderSettings_raytrace_method_BLIBVH = 2,
	RenderSettings_raytrace_method_VBVH = 3,
	RenderSettings_raytrace_method_SIMD_SVBVH = 4,
	RenderSettings_raytrace_method_SIMD_QBVH = 5,
};

int RenderSettings_raytrace_method_get(PointerRNA *ptr);

int RenderSettings_use_raytrace_get(PointerRNA *ptr);

void RenderSettings_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void RenderSettings_layers_next(CollectionPropertyIterator *iter);
void RenderSettings_layers_end(CollectionPropertyIterator *iter);

int RenderSettings_use_stamp_get(PointerRNA *ptr);

int RenderSettings_resolution_percentage_get(PointerRNA *ptr);

int RenderSettings_resolution_x_get(PointerRNA *ptr);

int RenderSettings_resolution_y_get(PointerRNA *ptr);

int RenderSettings_use_save_buffers_get(PointerRNA *ptr);

int RenderSettings_use_bake_selected_to_active_get(PointerRNA *ptr);

int RenderSettings_use_sequencer_get(PointerRNA *ptr);

int RenderSettings_use_sequencer_gl_preview_get(PointerRNA *ptr);

int RenderSettings_use_sequencer_gl_render_get(PointerRNA *ptr);

enum {
	RenderSettings_sequencer_gl_preview_BOUNDBOX = 1,
	RenderSettings_sequencer_gl_preview_WIREFRAME = 2,
	RenderSettings_sequencer_gl_preview_SOLID = 3,
	RenderSettings_sequencer_gl_preview_TEXTURED = 5,
};

int RenderSettings_sequencer_gl_preview_get(PointerRNA *ptr);

enum {
	RenderSettings_sequencer_gl_render_BOUNDBOX = 1,
	RenderSettings_sequencer_gl_render_WIREFRAME = 2,
	RenderSettings_sequencer_gl_render_SOLID = 3,
	RenderSettings_sequencer_gl_render_TEXTURED = 5,
};

int RenderSettings_sequencer_gl_render_get(PointerRNA *ptr);

int RenderSettings_use_shadows_get(PointerRNA *ptr);

float RenderSettings_motion_blur_shutter_get(PointerRNA *ptr);

float RenderSettings_simplify_ao_sss_get(PointerRNA *ptr);

float RenderSettings_simplify_child_particles_get(PointerRNA *ptr);

int RenderSettings_simplify_shadow_samples_get(PointerRNA *ptr);

int RenderSettings_simplify_subdivision_get(PointerRNA *ptr);

int RenderSettings_use_single_layer_get(PointerRNA *ptr);

int RenderSettings_use_simplify_triangulate_get(PointerRNA *ptr);

void RenderSettings_stamp_background_get(PointerRNA *ptr, float values[4]);

int RenderSettings_use_stamp_camera_get(PointerRNA *ptr);

int RenderSettings_use_stamp_date_get(PointerRNA *ptr);

int RenderSettings_use_stamp_filename_get(PointerRNA *ptr);

int RenderSettings_use_stamp_frame_get(PointerRNA *ptr);

int RenderSettings_use_stamp_lens_get(PointerRNA *ptr);

int RenderSettings_use_stamp_marker_get(PointerRNA *ptr);

int RenderSettings_use_stamp_note_get(PointerRNA *ptr);

#define RenderSettings_stamp_note_text_MAX 160

void RenderSettings_stamp_note_text_get(PointerRNA *ptr, char *value);
int RenderSettings_stamp_note_text_length(PointerRNA *ptr);

int RenderSettings_use_stamp_render_time_get(PointerRNA *ptr);

int RenderSettings_use_stamp_scene_get(PointerRNA *ptr);

int RenderSettings_use_stamp_sequencer_strip_get(PointerRNA *ptr);

void RenderSettings_stamp_foreground_get(PointerRNA *ptr, float values[4]);

int RenderSettings_use_stamp_time_get(PointerRNA *ptr);

int RenderSettings_use_sss_get(PointerRNA *ptr);

int RenderSettings_use_textures_get(PointerRNA *ptr);

int RenderSettings_threads_get(PointerRNA *ptr);

enum {
	RenderSettings_threads_mode_AUTO = 0,
	RenderSettings_threads_mode_FIXED = 524288,
};

int RenderSettings_threads_mode_get(PointerRNA *ptr);

int RenderSettings_use_game_engine_get(PointerRNA *ptr);

int RenderSettings_use_instances_get(PointerRNA *ptr);

int RenderSettings_use_local_coords_get(PointerRNA *ptr);

int RenderSettings_use_simplify_get(PointerRNA *ptr);

int RenderSettings_cineon_white_get(PointerRNA *ptr);

int RenderSettings_jpeg2k_ycc_get(PointerRNA *ptr);

/**************** Rigid Body Joint Constraint ****************/

extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_Constraint;

float RigidBodyJointConstraint_axis_x_get(PointerRNA *ptr);

float RigidBodyJointConstraint_axis_y_get(PointerRNA *ptr);

float RigidBodyJointConstraint_axis_z_get(PointerRNA *ptr);

PointerRNA RigidBodyJointConstraint_child_get(PointerRNA *ptr);

int RigidBodyJointConstraint_use_linked_collision_get(PointerRNA *ptr);

int RigidBodyJointConstraint_show_pivot_get(PointerRNA *ptr);

void RigidBodyJointConstraint_limit_generic_max_get(PointerRNA *ptr, float values[6]);

void RigidBodyJointConstraint_limit_cone_max_get(PointerRNA *ptr, float values[3]);

void RigidBodyJointConstraint_limit_generic_min_get(PointerRNA *ptr, float values[6]);

void RigidBodyJointConstraint_limit_cone_min_get(PointerRNA *ptr, float values[3]);

enum {
	RigidBodyJointConstraint_pivot_type_BALL = 1,
	RigidBodyJointConstraint_pivot_type_HINGE = 2,
	RigidBodyJointConstraint_pivot_type_CONE_TWIST = 4,
	RigidBodyJointConstraint_pivot_type_GENERIC_6_DOF = 12,
};

int RigidBodyJointConstraint_pivot_type_get(PointerRNA *ptr);

float RigidBodyJointConstraint_pivot_x_get(PointerRNA *ptr);

float RigidBodyJointConstraint_pivot_y_get(PointerRNA *ptr);

float RigidBodyJointConstraint_pivot_z_get(PointerRNA *ptr);

PointerRNA RigidBodyJointConstraint_target_get(PointerRNA *ptr);

int RigidBodyJointConstraint_use_angular_limit_x_get(PointerRNA *ptr);

int RigidBodyJointConstraint_use_angular_limit_y_get(PointerRNA *ptr);

int RigidBodyJointConstraint_use_angular_limit_z_get(PointerRNA *ptr);

int RigidBodyJointConstraint_use_limit_x_get(PointerRNA *ptr);

int RigidBodyJointConstraint_use_limit_y_get(PointerRNA *ptr);

int RigidBodyJointConstraint_use_limit_z_get(PointerRNA *ptr);

/**************** SPH Fluid Settings ****************/

extern StructRNA RNA_SPHFluidSettings;

PointerRNA SPHFluidSettings_rna_type_get(PointerRNA *ptr);

float SPHFluidSettings_buoyancy_get(PointerRNA *ptr);

float SPHFluidSettings_density_force_get(PointerRNA *ptr);

float SPHFluidSettings_yield_ratio_get(PointerRNA *ptr);

int SPHFluidSettings_use_initial_rest_length_get(PointerRNA *ptr);

float SPHFluidSettings_fluid_radius_get(PointerRNA *ptr);

float SPHFluidSettings_plasticity_get(PointerRNA *ptr);

float SPHFluidSettings_repulsion_force_get(PointerRNA *ptr);

float SPHFluidSettings_rest_density_get(PointerRNA *ptr);

float SPHFluidSettings_rest_length_get(PointerRNA *ptr);

float SPHFluidSettings_spring_force_get(PointerRNA *ptr);

float SPHFluidSettings_square_viscosity_get(PointerRNA *ptr);

int SPHFluidSettings_use_viscoelastic_springs_get(PointerRNA *ptr);

float SPHFluidSettings_linear_viscosity_get(PointerRNA *ptr);

/**************** Scene ****************/

extern StructRNA RNA_Scene;
extern StructRNA RNA_ID;

void Scene_keying_sets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Scene_keying_sets_next(CollectionPropertyIterator *iter);
void Scene_keying_sets_end(CollectionPropertyIterator *iter);

void Scene_keying_sets_all_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Scene_keying_sets_all_next(CollectionPropertyIterator *iter);
void Scene_keying_sets_all_end(CollectionPropertyIterator *iter);

PointerRNA Scene_animation_data_get(PointerRNA *ptr);

int Scene_use_audio_get(PointerRNA *ptr);

int Scene_use_audio_scrub_get(PointerRNA *ptr);

int Scene_use_audio_sync_get(PointerRNA *ptr);

PointerRNA Scene_background_set_get(PointerRNA *ptr);

void Scene_object_bases_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Scene_object_bases_next(CollectionPropertyIterator *iter);
void Scene_object_bases_end(CollectionPropertyIterator *iter);

PointerRNA Scene_camera_get(PointerRNA *ptr);

int Scene_frame_current_get(PointerRNA *ptr);

void Scene_cursor_location_get(PointerRNA *ptr, float values[3]);

enum {
	Scene_audio_distance_model_NONE = 0,
	Scene_audio_distance_model_INVERSE = 1,
	Scene_audio_distance_model_INVERSE_CLAMPED = 2,
	Scene_audio_distance_model_LINEAR = 3,
	Scene_audio_distance_model_LINEAR_CLAMPED = 4,
	Scene_audio_distance_model_EXPONENT = 5,
	Scene_audio_distance_model_EXPONENT_CLAMPED = 6,
};

int Scene_audio_distance_model_get(PointerRNA *ptr);

float Scene_audio_doppler_factor_get(PointerRNA *ptr);

int Scene_frame_end_get(PointerRNA *ptr);

int Scene_use_frame_drop_get(PointerRNA *ptr);

int Scene_frame_step_get(PointerRNA *ptr);

PointerRNA Scene_game_settings_get(PointerRNA *ptr);

int Scene_use_gravity_get(PointerRNA *ptr);

void Scene_gravity_get(PointerRNA *ptr, float values[3]);

PointerRNA Scene_grease_pencil_get(PointerRNA *ptr);

void Scene_layers_get(PointerRNA *ptr, int values[20]);

int Scene_is_nla_tweakmode_get(PointerRNA *ptr);

PointerRNA Scene_node_tree_get(PointerRNA *ptr);

void Scene_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Scene_objects_next(CollectionPropertyIterator *iter);
void Scene_objects_end(CollectionPropertyIterator *iter);

int Scene_frame_preview_end_get(PointerRNA *ptr);

int Scene_frame_preview_start_get(PointerRNA *ptr);

PointerRNA Scene_render_get(PointerRNA *ptr);

PointerRNA Scene_sequence_editor_get(PointerRNA *ptr);

float Scene_audio_doppler_speed_get(PointerRNA *ptr);

#define Scene_use_stamp_note_MAX 160

void Scene_use_stamp_note_get(PointerRNA *ptr, char *value);
int Scene_use_stamp_note_length(PointerRNA *ptr);

int Scene_frame_start_get(PointerRNA *ptr);

enum {
	Scene_sync_mode_NONE = 0,
	Scene_sync_mode_FRAME_DROP = 8,
	Scene_sync_mode_AUDIO_SYNC = 2,
};

int Scene_sync_mode_get(PointerRNA *ptr);

void Scene_timeline_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Scene_timeline_markers_next(CollectionPropertyIterator *iter);
void Scene_timeline_markers_end(CollectionPropertyIterator *iter);

PointerRNA Scene_tool_settings_get(PointerRNA *ptr);

void Scene_orientations_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Scene_orientations_next(CollectionPropertyIterator *iter);
void Scene_orientations_end(CollectionPropertyIterator *iter);

PointerRNA Scene_unit_settings_get(PointerRNA *ptr);

int Scene_use_nodes_get(PointerRNA *ptr);

int Scene_use_preview_range_get(PointerRNA *ptr);

PointerRNA Scene_world_get(PointerRNA *ptr);

/**************** Scene Actuator ****************/

extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_Actuator;

PointerRNA SceneActuator_camera_get(PointerRNA *ptr);

enum {
	SceneActuator_mode_RESTART = 0,
	SceneActuator_mode_SET = 1,
	SceneActuator_mode_CAMERA = 2,
	SceneActuator_mode_ADDFRONT = 3,
	SceneActuator_mode_ADDBACK = 4,
	SceneActuator_mode_REMOVE = 5,
	SceneActuator_mode_SUSPEND = 6,
	SceneActuator_mode_RESUME = 7,
};

int SceneActuator_mode_get(PointerRNA *ptr);

PointerRNA SceneActuator_scene_get(PointerRNA *ptr);

/**************** Scene Bases ****************/

extern StructRNA RNA_SceneBases;

PointerRNA SceneBases_rna_type_get(PointerRNA *ptr);

PointerRNA SceneBases_active_get(PointerRNA *ptr);

/**************** Game Data ****************/

extern StructRNA RNA_SceneGameData;

PointerRNA SceneGameData_rna_type_get(PointerRNA *ptr);

int SceneGameData_use_activity_culling_get(PointerRNA *ptr);

int SceneGameData_dome_angle_get(PointerRNA *ptr);

int SceneGameData_use_auto_start_get(PointerRNA *ptr);

int SceneGameData_depth_get(PointerRNA *ptr);

float SceneGameData_dome_buffer_resolution_get(PointerRNA *ptr);

int SceneGameData_use_occlusion_culling_get(PointerRNA *ptr);

int SceneGameData_use_deprecation_warnings_get(PointerRNA *ptr);

int SceneGameData_use_display_lists_get(PointerRNA *ptr);

enum {
	SceneGameData_dome_mode_FISHEYE = 1,
	SceneGameData_dome_mode_TRUNCATED_FRONT = 2,
	SceneGameData_dome_mode_TRUNCATED_REAR = 3,
	SceneGameData_dome_mode_ENVMAP = 4,
	SceneGameData_dome_mode_PANORAM_SPH = 5,
};

int SceneGameData_dome_mode_get(PointerRNA *ptr);

float SceneGameData_stereo_eye_separation_get(PointerRNA *ptr);

int SceneGameData_fps_get(PointerRNA *ptr);

void SceneGameData_frame_color_get(PointerRNA *ptr, float values[3]);

enum {
	SceneGameData_frame_type_LETTERBOX = 0,
	SceneGameData_frame_type_EXTEND = 1,
	SceneGameData_frame_type_SCALE = 2,
};

int SceneGameData_frame_type_get(PointerRNA *ptr);

int SceneGameData_frequency_get(PointerRNA *ptr);

int SceneGameData_show_fullscreen_get(PointerRNA *ptr);

int SceneGameData_use_glsl_extra_textures_get(PointerRNA *ptr);

int SceneGameData_use_glsl_lights_get(PointerRNA *ptr);

int SceneGameData_use_glsl_nodes_get(PointerRNA *ptr);

int SceneGameData_use_glsl_ramps_get(PointerRNA *ptr);

int SceneGameData_use_glsl_shaders_get(PointerRNA *ptr);

int SceneGameData_use_glsl_shadows_get(PointerRNA *ptr);

enum {
	SceneGameData_material_mode_TEXTURE_FACE = 0,
	SceneGameData_material_mode_MULTITEXTURE = 1,
	SceneGameData_material_mode_GLSL = 2,
};

int SceneGameData_material_mode_get(PointerRNA *ptr);

int SceneGameData_logic_step_max_get(PointerRNA *ptr);

int SceneGameData_physics_step_max_get(PointerRNA *ptr);

int SceneGameData_occlusion_culling_resolution_get(PointerRNA *ptr);

enum {
	SceneGameData_physics_engine_NONE = 0,
	SceneGameData_physics_engine_BULLET = 5,
};

int SceneGameData_physics_engine_get(PointerRNA *ptr);

float SceneGameData_physics_gravity_get(PointerRNA *ptr);

int SceneGameData_physics_step_sub_get(PointerRNA *ptr);

int SceneGameData_use_animation_record_get(PointerRNA *ptr);

int SceneGameData_resolution_x_get(PointerRNA *ptr);

int SceneGameData_resolution_y_get(PointerRNA *ptr);

int SceneGameData_show_debug_properties_get(PointerRNA *ptr);

int SceneGameData_show_framerate_profile_get(PointerRNA *ptr);

int SceneGameData_show_mouse_get(PointerRNA *ptr);

int SceneGameData_show_physics_visualization_get(PointerRNA *ptr);

enum {
	SceneGameData_stereo_mode_QUADBUFFERED = 2,
	SceneGameData_stereo_mode_ABOVEBELOW = 3,
	SceneGameData_stereo_mode_INTERLACED = 4,
	SceneGameData_stereo_mode_ANAGLYPH = 5,
	SceneGameData_stereo_mode_SIDEBYSIDE = 6,
	SceneGameData_stereo_mode_VINTERLACE = 7,
};

int SceneGameData_stereo_mode_get(PointerRNA *ptr);

enum {
	SceneGameData_stereo_NONE = 1,
	SceneGameData_stereo_STEREO = 2,
	SceneGameData_stereo_DOME = 3,
};

int SceneGameData_stereo_get(PointerRNA *ptr);

int SceneGameData_dome_tesselation_get(PointerRNA *ptr);

int SceneGameData_dome_tilt_get(PointerRNA *ptr);

int SceneGameData_use_frame_rate_get(PointerRNA *ptr);

PointerRNA SceneGameData_dome_text_get(PointerRNA *ptr);

float SceneGameData_activity_culling_box_radius_get(PointerRNA *ptr);

/**************** Scene Objects ****************/

extern StructRNA RNA_SceneObjects;

PointerRNA SceneObjects_rna_type_get(PointerRNA *ptr);

PointerRNA SceneObjects_active_get(PointerRNA *ptr);

/**************** Scene Render Layer ****************/

extern StructRNA RNA_SceneRenderLayer;

PointerRNA SceneRenderLayer_rna_type_get(PointerRNA *ptr);

#define SceneRenderLayer_name_MAX 32

void SceneRenderLayer_name_get(PointerRNA *ptr, char *value);
int SceneRenderLayer_name_length(PointerRNA *ptr);

int SceneRenderLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_ambient_occlusion_get(PointerRNA *ptr);

int SceneRenderLayer_use_all_z_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_color_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_combined_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_diffuse_get(PointerRNA *ptr);

int SceneRenderLayer_use_edge_enhance_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_emit_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_emit_get(PointerRNA *ptr);

int SceneRenderLayer_use_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_environment_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_environment_get(PointerRNA *ptr);

int SceneRenderLayer_use_halo_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_indirect_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_indirect_get(PointerRNA *ptr);

PointerRNA SceneRenderLayer_light_override_get(PointerRNA *ptr);

PointerRNA SceneRenderLayer_material_override_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_mist_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_normal_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_object_index_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_reflection_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_reflection_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_refraction_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_refraction_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_shadow_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_shadow_get(PointerRNA *ptr);

int SceneRenderLayer_use_sky_get(PointerRNA *ptr);

int SceneRenderLayer_use_solid_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_specular_get(PointerRNA *ptr);

int SceneRenderLayer_exclude_specular_get(PointerRNA *ptr);

int SceneRenderLayer_use_strand_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_uv_get(PointerRNA *ptr);

int SceneRenderLayer_use_pass_vector_get(PointerRNA *ptr);

void SceneRenderLayer_layers_get(PointerRNA *ptr, int values[20]);

int SceneRenderLayer_use_pass_z_get(PointerRNA *ptr);

int SceneRenderLayer_use_ztransp_get(PointerRNA *ptr);

int SceneRenderLayer_use_zmask_get(PointerRNA *ptr);

void SceneRenderLayer_layers_zmask_get(PointerRNA *ptr, int values[20]);

int SceneRenderLayer_invert_zmask_get(PointerRNA *ptr);

/**************** Scene Sequence ****************/

extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_Sequence;

int SceneSequence_animation_offset_end_get(PointerRNA *ptr);

int SceneSequence_animation_offset_start_get(PointerRNA *ptr);

PointerRNA SceneSequence_scene_camera_get(PointerRNA *ptr);

PointerRNA SceneSequence_color_balance_get(PointerRNA *ptr);

int SceneSequence_use_float_get(PointerRNA *ptr);

PointerRNA SceneSequence_crop_get(PointerRNA *ptr);

int SceneSequence_use_deinterlace_get(PointerRNA *ptr);

int SceneSequence_use_reverse_frames_get(PointerRNA *ptr);

int SceneSequence_use_flip_x_get(PointerRNA *ptr);

int SceneSequence_use_flip_y_get(PointerRNA *ptr);

float SceneSequence_color_multiply_get(PointerRNA *ptr);

int SceneSequence_use_premultiply_get(PointerRNA *ptr);

PointerRNA SceneSequence_proxy_get(PointerRNA *ptr);

int SceneSequence_use_proxy_custom_directory_get(PointerRNA *ptr);

int SceneSequence_use_proxy_custom_file_get(PointerRNA *ptr);

float SceneSequence_color_saturation_get(PointerRNA *ptr);

PointerRNA SceneSequence_scene_get(PointerRNA *ptr);

float SceneSequence_strobe_get(PointerRNA *ptr);

PointerRNA SceneSequence_transform_get(PointerRNA *ptr);

int SceneSequence_use_color_balance_get(PointerRNA *ptr);

int SceneSequence_use_crop_get(PointerRNA *ptr);

int SceneSequence_use_proxy_get(PointerRNA *ptr);

int SceneSequence_use_translation_get(PointerRNA *ptr);

/**************** Scopes ****************/

extern StructRNA RNA_Scopes;

PointerRNA Scopes_rna_type_get(PointerRNA *ptr);

float Scopes_accuracy_get(PointerRNA *ptr);

int Scopes_use_full_resolution_get(PointerRNA *ptr);

PointerRNA Scopes_histogram_get(PointerRNA *ptr);

float Scopes_vectorscope_alpha_get(PointerRNA *ptr);

enum {
	Scopes_waveform_mode_LUMA = 0,
	Scopes_waveform_mode_RGB = 1,
	Scopes_waveform_mode_YCBCR601 = 2,
	Scopes_waveform_mode_YCBCR709 = 3,
	Scopes_waveform_mode_YCBCRJPG = 4,
};

int Scopes_waveform_mode_get(PointerRNA *ptr);

float Scopes_waveform_alpha_get(PointerRNA *ptr);

/**************** Screen ****************/

extern StructRNA RNA_Screen;
extern StructRNA RNA_ID;

int Screen_use_play_3d_editors_get(PointerRNA *ptr);

int Screen_use_play_animation_editors_get(PointerRNA *ptr);

int Screen_is_animation_playing_get(PointerRNA *ptr);

void Screen_areas_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Screen_areas_next(CollectionPropertyIterator *iter);
void Screen_areas_end(CollectionPropertyIterator *iter);

int Screen_show_fullscreen_get(PointerRNA *ptr);

int Screen_use_play_image_editors_get(PointerRNA *ptr);

int Screen_use_play_node_editors_get(PointerRNA *ptr);

int Screen_use_play_properties_editors_get(PointerRNA *ptr);

PointerRNA Screen_scene_get(PointerRNA *ptr);

int Screen_use_play_sequence_editors_get(PointerRNA *ptr);

int Screen_use_play_top_left_3d_editor_get(PointerRNA *ptr);

/**************** Screw Modifier ****************/

extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_Modifier;

float ScrewModifier_angle_get(PointerRNA *ptr);

enum {
	ScrewModifier_axis_X = 0,
	ScrewModifier_axis_Y = 1,
	ScrewModifier_axis_Z = 2,
};

int ScrewModifier_axis_get(PointerRNA *ptr);

int ScrewModifier_use_normal_calculate_get(PointerRNA *ptr);

int ScrewModifier_use_normal_flip_get(PointerRNA *ptr);

int ScrewModifier_iterations_get(PointerRNA *ptr);

PointerRNA ScrewModifier_object_get(PointerRNA *ptr);

int ScrewModifier_use_object_screw_offset_get(PointerRNA *ptr);

int ScrewModifier_render_steps_get(PointerRNA *ptr);

float ScrewModifier_screw_offset_get(PointerRNA *ptr);

int ScrewModifier_steps_get(PointerRNA *ptr);

/**************** Sculpt ****************/

extern StructRNA RNA_Sculpt;
extern StructRNA RNA_Paint;

int Sculpt_lock_x_get(PointerRNA *ptr);

int Sculpt_lock_y_get(PointerRNA *ptr);

int Sculpt_lock_z_get(PointerRNA *ptr);

void Sculpt_radial_symmetry_get(PointerRNA *ptr, int values[3]);

int Sculpt_use_symmetry_feather_get(PointerRNA *ptr);

int Sculpt_use_symmetry_x_get(PointerRNA *ptr);

int Sculpt_use_symmetry_y_get(PointerRNA *ptr);

int Sculpt_use_symmetry_z_get(PointerRNA *ptr);

int Sculpt_use_threaded_get(PointerRNA *ptr);

/**************** Sensor ****************/

extern StructRNA RNA_Sensor;

PointerRNA Sensor_rna_type_get(PointerRNA *ptr);

#define Sensor_name_MAX 32

void Sensor_name_get(PointerRNA *ptr, char *value);
int Sensor_name_length(PointerRNA *ptr);

int Sensor_show_expanded_get(PointerRNA *ptr);

int Sensor_frequency_get(PointerRNA *ptr);

int Sensor_invert_get(PointerRNA *ptr);

int Sensor_use_level_get(PointerRNA *ptr);

int Sensor_pin_get(PointerRNA *ptr);

int Sensor_use_pulse_false_level_get(PointerRNA *ptr);

int Sensor_use_pulse_true_level_get(PointerRNA *ptr);

int Sensor_use_tap_get(PointerRNA *ptr);

enum {
	Sensor_type_ACTUATOR = 12,
	Sensor_type_ALWAYS = 0,
	Sensor_type_ARMATURE = 14,
	Sensor_type_COLLISION = 6,
	Sensor_type_DELAY = 13,
	Sensor_type_JOYSTICK = 11,
	Sensor_type_KEYBOARD = 3,
	Sensor_type_MESSAGE = 10,
	Sensor_type_MOUSE = 5,
	Sensor_type_NEAR = 2,
	Sensor_type_PROPERTY = 4,
	Sensor_type_RADAR = 7,
	Sensor_type_RANDOM = 8,
	Sensor_type_RAY = 9,
	Sensor_type_TOUCH = 1,
};

int Sensor_type_get(PointerRNA *ptr);

/**************** Sequence ****************/

extern StructRNA RNA_Sequence;

PointerRNA Sequence_rna_type_get(PointerRNA *ptr);

#define Sequence_name_MAX 22

void Sequence_name_get(PointerRNA *ptr, char *value);
int Sequence_name_length(PointerRNA *ptr);

enum {
	Sequence_blend_type_REPLACE = 0,
	Sequence_blend_type_CROSS = 8,
	Sequence_blend_type_ADD = 9,
	Sequence_blend_type_SUBTRACT = 10,
	Sequence_blend_type_ALPHA_OVER = 11,
	Sequence_blend_type_ALPHA_UNDER = 12,
	Sequence_blend_type_GAMMA_CROSS = 13,
	Sequence_blend_type_MULTIPLY = 14,
	Sequence_blend_type_OVER_DROP = 15,
};

int Sequence_blend_type_get(PointerRNA *ptr);

float Sequence_blend_alpha_get(PointerRNA *ptr);

int Sequence_channel_get(PointerRNA *ptr);

float Sequence_effect_fader_get(PointerRNA *ptr);

int Sequence_frame_final_end_get(PointerRNA *ptr);

int Sequence_frame_offset_end_get(PointerRNA *ptr);

int Sequence_frame_still_end_get(PointerRNA *ptr);

PointerRNA Sequence_input_1_get(PointerRNA *ptr);

PointerRNA Sequence_input_2_get(PointerRNA *ptr);

PointerRNA Sequence_input_3_get(PointerRNA *ptr);

int Sequence_select_left_handle_get(PointerRNA *ptr);

int Sequence_frame_final_duration_get(PointerRNA *ptr);

int Sequence_frame_duration_get(PointerRNA *ptr);

int Sequence_lock_get(PointerRNA *ptr);

int Sequence_mute_get(PointerRNA *ptr);

int Sequence_select_right_handle_get(PointerRNA *ptr);

int Sequence_select_get(PointerRNA *ptr);

float Sequence_speed_factor_get(PointerRNA *ptr);

int Sequence_frame_start_get(PointerRNA *ptr);

int Sequence_frame_final_start_get(PointerRNA *ptr);

int Sequence_frame_offset_start_get(PointerRNA *ptr);

int Sequence_frame_still_start_get(PointerRNA *ptr);

enum {
	Sequence_type_IMAGE = 0,
	Sequence_type_META = 1,
	Sequence_type_SCENE = 2,
	Sequence_type_MOVIE = 3,
	Sequence_type_SOUND = 4,
	Sequence_type_CROSS = 8,
	Sequence_type_ADD = 9,
	Sequence_type_SUBTRACT = 10,
	Sequence_type_ALPHA_OVER = 11,
	Sequence_type_ALPHA_UNDER = 12,
	Sequence_type_GAMMA_CROSS = 13,
	Sequence_type_MULTIPLY = 14,
	Sequence_type_OVER_DROP = 15,
	Sequence_type_PLUGIN = 24,
	Sequence_type_WIPE = 25,
	Sequence_type_GLOW = 26,
	Sequence_type_TRANSFORM = 27,
	Sequence_type_COLOR = 28,
	Sequence_type_SPEED = 29,
	Sequence_type_MULTICAM = 30,
};

int Sequence_type_get(PointerRNA *ptr);

int Sequence_use_default_fade_get(PointerRNA *ptr);

int Sequence_input_count_get(PointerRNA *ptr);

/**************** Sequence Color Balance ****************/

extern StructRNA RNA_SequenceColorBalance;

PointerRNA SequenceColorBalance_rna_type_get(PointerRNA *ptr);

void SequenceColorBalance_gain_get(PointerRNA *ptr, float values[3]);

void SequenceColorBalance_gamma_get(PointerRNA *ptr, float values[3]);

int SequenceColorBalance_invert_gain_get(PointerRNA *ptr);

int SequenceColorBalance_invert_gamma_get(PointerRNA *ptr);

int SequenceColorBalance_invert_lift_get(PointerRNA *ptr);

void SequenceColorBalance_lift_get(PointerRNA *ptr, float values[3]);

/**************** Sequence Crop ****************/

extern StructRNA RNA_SequenceCrop;

PointerRNA SequenceCrop_rna_type_get(PointerRNA *ptr);

int SequenceCrop_min_y_get(PointerRNA *ptr);

int SequenceCrop_min_x_get(PointerRNA *ptr);

int SequenceCrop_max_x_get(PointerRNA *ptr);

int SequenceCrop_max_y_get(PointerRNA *ptr);

/**************** Sequence Editor ****************/

extern StructRNA RNA_SequenceEditor;

PointerRNA SequenceEditor_rna_type_get(PointerRNA *ptr);

int SequenceEditor_overlay_frame_get(PointerRNA *ptr);

int SequenceEditor_show_overlay_get(PointerRNA *ptr);

void SequenceEditor_meta_stack_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void SequenceEditor_meta_stack_next(CollectionPropertyIterator *iter);
void SequenceEditor_meta_stack_end(CollectionPropertyIterator *iter);

int SequenceEditor_overlay_lock_get(PointerRNA *ptr);

void SequenceEditor_sequences_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void SequenceEditor_sequences_next(CollectionPropertyIterator *iter);
void SequenceEditor_sequences_end(CollectionPropertyIterator *iter);

void SequenceEditor_sequences_all_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void SequenceEditor_sequences_all_next(CollectionPropertyIterator *iter);
void SequenceEditor_sequences_all_end(CollectionPropertyIterator *iter);

PointerRNA SequenceEditor_active_strip_get(PointerRNA *ptr);

/**************** Sequence Element ****************/

extern StructRNA RNA_SequenceElement;

PointerRNA SequenceElement_rna_type_get(PointerRNA *ptr);

#define SequenceElement_filename_MAX 80

void SequenceElement_filename_get(PointerRNA *ptr, char *value);
int SequenceElement_filename_length(PointerRNA *ptr);

int SequenceElement_orig_height_get(PointerRNA *ptr);

int SequenceElement_orig_width_get(PointerRNA *ptr);

/**************** Sequence Proxy ****************/

extern StructRNA RNA_SequenceProxy;

PointerRNA SequenceProxy_rna_type_get(PointerRNA *ptr);

#define SequenceProxy_directory_MAX 160

void SequenceProxy_directory_get(PointerRNA *ptr, char *value);
int SequenceProxy_directory_length(PointerRNA *ptr);

void SequenceProxy_filepath_get(PointerRNA *ptr, char *value);
int SequenceProxy_filepath_length(PointerRNA *ptr);

/**************** Sequence Transform ****************/

extern StructRNA RNA_SequenceTransform;

PointerRNA SequenceTransform_rna_type_get(PointerRNA *ptr);

int SequenceTransform_offset_x_get(PointerRNA *ptr);

int SequenceTransform_offset_y_get(PointerRNA *ptr);

/**************** Shader Node ****************/

extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

enum {
	ShaderNode_type_OUTPUT = 1,
	ShaderNode_type_MATERIAL = 100,
	ShaderNode_type_RGB = 101,
	ShaderNode_type_VALUE = 102,
	ShaderNode_type_MIX_RGB = 103,
	ShaderNode_type_VALTORGB = 104,
	ShaderNode_type_RGBTOBW = 105,
	ShaderNode_type_TEXTURE = 106,
	ShaderNode_type_NORMAL = 107,
	ShaderNode_type_GEOMETRY = 108,
	ShaderNode_type_MAPPING = 109,
	ShaderNode_type_CURVE_VEC = 110,
	ShaderNode_type_CURVE_RGB = 111,
	ShaderNode_type_CAMERA = 114,
	ShaderNode_type_MATH = 115,
	ShaderNode_type_VECT_MATH = 116,
	ShaderNode_type_SQUEEZE = 117,
	ShaderNode_type_MATERIAL_EXT = 118,
	ShaderNode_type_INVERT = 119,
	ShaderNode_type_SEPRGB = 120,
	ShaderNode_type_COMBRGB = 121,
	ShaderNode_type_HUE_SAT = 122,
	ShaderNode_type_SCRIPT = 123,
	ShaderNode_type_GROUP = 2,
};

int ShaderNode_type_get(PointerRNA *ptr);

/**************** Camera Data ****************/

extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Combine RGB ****************/

extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Extended Material ****************/

extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

int ShaderNodeExtendedMaterial_use_diffuse_get(PointerRNA *ptr);

int ShaderNodeExtendedMaterial_invert_normal_get(PointerRNA *ptr);

PointerRNA ShaderNodeExtendedMaterial_material_get(PointerRNA *ptr);

int ShaderNodeExtendedMaterial_use_specular_get(PointerRNA *ptr);

/**************** Geometry ****************/

extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

#define ShaderNodeGeometry_uv_layer_MAX 32

void ShaderNodeGeometry_uv_layer_get(PointerRNA *ptr, char *value);
int ShaderNodeGeometry_uv_layer_length(PointerRNA *ptr);

#define ShaderNodeGeometry_color_layer_MAX 32

void ShaderNodeGeometry_color_layer_get(PointerRNA *ptr, char *value);
int ShaderNodeGeometry_color_layer_length(PointerRNA *ptr);

/**************** Hue/Saturation ****************/

extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Invert ****************/

extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Mapping ****************/

extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

int ShaderNodeMapping_use_max_get(PointerRNA *ptr);

int ShaderNodeMapping_use_min_get(PointerRNA *ptr);

void ShaderNodeMapping_location_get(PointerRNA *ptr, float values[3]);

void ShaderNodeMapping_max_get(PointerRNA *ptr, float values[3]);

void ShaderNodeMapping_min_get(PointerRNA *ptr, float values[3]);

void ShaderNodeMapping_rotation_get(PointerRNA *ptr, float values[3]);

void ShaderNodeMapping_scale_get(PointerRNA *ptr, float values[3]);

/**************** Material ****************/

extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

int ShaderNodeMaterial_use_diffuse_get(PointerRNA *ptr);

int ShaderNodeMaterial_invert_normal_get(PointerRNA *ptr);

PointerRNA ShaderNodeMaterial_material_get(PointerRNA *ptr);

int ShaderNodeMaterial_use_specular_get(PointerRNA *ptr);

/**************** Math ****************/

extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

enum {
	ShaderNodeMath_operation_ADD = 0,
	ShaderNodeMath_operation_SUBTRACT = 1,
	ShaderNodeMath_operation_MULTIPLY = 2,
	ShaderNodeMath_operation_DIVIDE = 3,
	ShaderNodeMath_operation_SINE = 4,
	ShaderNodeMath_operation_COSINE = 5,
	ShaderNodeMath_operation_TANGENT = 6,
	ShaderNodeMath_operation_ARCSINE = 7,
	ShaderNodeMath_operation_ARCCOSINE = 8,
	ShaderNodeMath_operation_ARCTANGENT = 9,
	ShaderNodeMath_operation_POWER = 10,
	ShaderNodeMath_operation_LOGARITHM = 11,
	ShaderNodeMath_operation_MINIMUM = 12,
	ShaderNodeMath_operation_MAXIMUM = 13,
	ShaderNodeMath_operation_ROUND = 14,
	ShaderNodeMath_operation_LESS_THAN = 15,
	ShaderNodeMath_operation_GREATER_THAN = 16,
};

int ShaderNodeMath_operation_get(PointerRNA *ptr);

/**************** MixRGB ****************/

extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

int ShaderNodeMixRGB_use_alpha_get(PointerRNA *ptr);

enum {
	ShaderNodeMixRGB_blend_type_MIX = 0,
	ShaderNodeMixRGB_blend_type_ADD = 1,
	ShaderNodeMixRGB_blend_type_SUBTRACT = 3,
	ShaderNodeMixRGB_blend_type_MULTIPLY = 2,
	ShaderNodeMixRGB_blend_type_SCREEN = 4,
	ShaderNodeMixRGB_blend_type_OVERLAY = 9,
	ShaderNodeMixRGB_blend_type_DIVIDE = 5,
	ShaderNodeMixRGB_blend_type_DIFFERENCE = 6,
	ShaderNodeMixRGB_blend_type_DARKEN = 7,
	ShaderNodeMixRGB_blend_type_LIGHTEN = 8,
	ShaderNodeMixRGB_blend_type_DODGE = 10,
	ShaderNodeMixRGB_blend_type_BURN = 11,
	ShaderNodeMixRGB_blend_type_COLOR = 15,
	ShaderNodeMixRGB_blend_type_VALUE = 14,
	ShaderNodeMixRGB_blend_type_SATURATION = 13,
	ShaderNodeMixRGB_blend_type_HUE = 12,
	ShaderNodeMixRGB_blend_type_SOFT_LIGHT = 16,
	ShaderNodeMixRGB_blend_type_LINEAR_LIGHT = 17,
};

int ShaderNodeMixRGB_blend_type_get(PointerRNA *ptr);

/**************** Normal ****************/

extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Output ****************/

extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** RGB ****************/

extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** RGB Curve ****************/

extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

PointerRNA ShaderNodeRGBCurve_mapping_get(PointerRNA *ptr);

/**************** RGB to BW ****************/

extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Separate RGB ****************/

extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Squeeze ****************/

extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Texture ****************/

extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

int ShaderNodeTexture_node_output_get(PointerRNA *ptr);

PointerRNA ShaderNodeTexture_texture_get(PointerRNA *ptr);

/**************** Shader Node Tree ****************/

extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_ID;

void ShaderNodeTree_nodes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ShaderNodeTree_nodes_next(CollectionPropertyIterator *iter);
void ShaderNodeTree_nodes_end(CollectionPropertyIterator *iter);

/**************** Value to RGB ****************/

extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

PointerRNA ShaderNodeValToRGB_color_ramp_get(PointerRNA *ptr);

/**************** Value ****************/

extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

/**************** Vector Curve ****************/

extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

PointerRNA ShaderNodeVectorCurve_mapping_get(PointerRNA *ptr);

/**************** Vector Math ****************/

extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_Node;

enum {
	ShaderNodeVectorMath_operation_ADD = 0,
	ShaderNodeVectorMath_operation_SUBTRACT = 1,
	ShaderNodeVectorMath_operation_AVERAGE = 2,
	ShaderNodeVectorMath_operation_DOT_PRODUCT = 3,
	ShaderNodeVectorMath_operation_CROSS_PRODUCT = 4,
	ShaderNodeVectorMath_operation_NORMALIZE = 5,
};

int ShaderNodeVectorMath_operation_get(PointerRNA *ptr);

/**************** Shader Nodes ****************/

extern StructRNA RNA_ShaderNodes;

PointerRNA ShaderNodes_rna_type_get(PointerRNA *ptr);

/**************** Shape Action Actuator ****************/

extern StructRNA RNA_ShapeActionActuator;
extern StructRNA RNA_Actuator;

PointerRNA ShapeActionActuator_action_get(PointerRNA *ptr);

enum {
	ShapeActionActuator_mode_PLAY = 0,
	ShapeActionActuator_mode_FLIPPER = 2,
	ShapeActionActuator_mode_LOOPSTOP = 3,
	ShapeActionActuator_mode_LOOPEND = 4,
	ShapeActionActuator_mode_PROPERTY = 6,
};

int ShapeActionActuator_mode_get(PointerRNA *ptr);

int ShapeActionActuator_frame_blend_in_get(PointerRNA *ptr);

int ShapeActionActuator_use_continue_last_frame_get(PointerRNA *ptr);

float ShapeActionActuator_frame_end_get(PointerRNA *ptr);

#define ShapeActionActuator_frame_property_MAX 32

void ShapeActionActuator_frame_property_get(PointerRNA *ptr, char *value);
int ShapeActionActuator_frame_property_length(PointerRNA *ptr);

int ShapeActionActuator_priority_get(PointerRNA *ptr);

#define ShapeActionActuator_property_MAX 32

void ShapeActionActuator_property_get(PointerRNA *ptr, char *value);
int ShapeActionActuator_property_length(PointerRNA *ptr);

float ShapeActionActuator_frame_start_get(PointerRNA *ptr);

/**************** Shape Key ****************/

extern StructRNA RNA_ShapeKey;

PointerRNA ShapeKey_rna_type_get(PointerRNA *ptr);

#define ShapeKey_name_MAX 32

void ShapeKey_name_get(PointerRNA *ptr, char *value);
int ShapeKey_name_length(PointerRNA *ptr);

void ShapeKey_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void ShapeKey_data_next(CollectionPropertyIterator *iter);
void ShapeKey_data_end(CollectionPropertyIterator *iter);

float ShapeKey_frame_get(PointerRNA *ptr);

enum {
	ShapeKey_interpolation_KEY_LINEAR = 0,
	ShapeKey_interpolation_KEY_CARDINAL = 1,
	ShapeKey_interpolation_KEY_BSPLINE = 2,
};

int ShapeKey_interpolation_get(PointerRNA *ptr);

int ShapeKey_mute_get(PointerRNA *ptr);

PointerRNA ShapeKey_relative_key_get(PointerRNA *ptr);

float ShapeKey_slider_max_get(PointerRNA *ptr);

float ShapeKey_slider_min_get(PointerRNA *ptr);

float ShapeKey_value_get(PointerRNA *ptr);

#define ShapeKey_vertex_group_MAX 32

void ShapeKey_vertex_group_get(PointerRNA *ptr, char *value);
int ShapeKey_vertex_group_length(PointerRNA *ptr);

/**************** Shape Key Bezier Point ****************/

extern StructRNA RNA_ShapeKeyBezierPoint;

PointerRNA ShapeKeyBezierPoint_rna_type_get(PointerRNA *ptr);

void ShapeKeyBezierPoint_handle_left_get(PointerRNA *ptr, float values[3]);

void ShapeKeyBezierPoint_handle_right_get(PointerRNA *ptr, float values[3]);

void ShapeKeyBezierPoint_co_get(PointerRNA *ptr, float values[3]);

/**************** Shape Key Curve Point ****************/

extern StructRNA RNA_ShapeKeyCurvePoint;

PointerRNA ShapeKeyCurvePoint_rna_type_get(PointerRNA *ptr);

void ShapeKeyCurvePoint_co_get(PointerRNA *ptr, float values[3]);

float ShapeKeyCurvePoint_tilt_get(PointerRNA *ptr);

/**************** Shape Key Point ****************/

extern StructRNA RNA_ShapeKeyPoint;

PointerRNA ShapeKeyPoint_rna_type_get(PointerRNA *ptr);

void ShapeKeyPoint_co_get(PointerRNA *ptr, float values[3]);

/**************** Shrinkwrap Constraint ****************/

extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_Constraint;

int ShrinkwrapConstraint_use_x_get(PointerRNA *ptr);

int ShrinkwrapConstraint_use_y_get(PointerRNA *ptr);

int ShrinkwrapConstraint_use_z_get(PointerRNA *ptr);

float ShrinkwrapConstraint_distance_get(PointerRNA *ptr);

enum {
	ShrinkwrapConstraint_shrinkwrap_type_NEAREST_SURFACE = 0,
	ShrinkwrapConstraint_shrinkwrap_type_PROJECT = 1,
	ShrinkwrapConstraint_shrinkwrap_type_NEAREST_VERTEX = 2,
};

int ShrinkwrapConstraint_shrinkwrap_type_get(PointerRNA *ptr);

PointerRNA ShrinkwrapConstraint_target_get(PointerRNA *ptr);

/**************** Shrinkwrap Modifier ****************/

extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_Modifier;

PointerRNA ShrinkwrapModifier_auxiliary_target_get(PointerRNA *ptr);

int ShrinkwrapModifier_use_cull_back_faces_get(PointerRNA *ptr);

int ShrinkwrapModifier_use_cull_front_faces_get(PointerRNA *ptr);

int ShrinkwrapModifier_use_keep_above_surface_get(PointerRNA *ptr);

enum {
	ShrinkwrapModifier_wrap_method_NEAREST_SURFACEPOINT = 0,
	ShrinkwrapModifier_wrap_method_PROJECT = 1,
	ShrinkwrapModifier_wrap_method_NEAREST_VERTEX = 2,
};

int ShrinkwrapModifier_wrap_method_get(PointerRNA *ptr);

int ShrinkwrapModifier_use_negative_direction_get(PointerRNA *ptr);

float ShrinkwrapModifier_offset_get(PointerRNA *ptr);

int ShrinkwrapModifier_use_positive_direction_get(PointerRNA *ptr);

int ShrinkwrapModifier_subsurf_levels_get(PointerRNA *ptr);

PointerRNA ShrinkwrapModifier_target_get(PointerRNA *ptr);

#define ShrinkwrapModifier_vertex_group_MAX 32

void ShrinkwrapModifier_vertex_group_get(PointerRNA *ptr, char *value);
int ShrinkwrapModifier_vertex_group_length(PointerRNA *ptr);

int ShrinkwrapModifier_use_project_x_get(PointerRNA *ptr);

int ShrinkwrapModifier_use_project_y_get(PointerRNA *ptr);

int ShrinkwrapModifier_use_project_z_get(PointerRNA *ptr);

/**************** SimpleDeform Modifier ****************/

extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_Modifier;

float SimpleDeformModifier_factor_get(PointerRNA *ptr);

void SimpleDeformModifier_limits_get(PointerRNA *ptr, float values[2]);

int SimpleDeformModifier_lock_x_get(PointerRNA *ptr);

int SimpleDeformModifier_lock_y_get(PointerRNA *ptr);

enum {
	SimpleDeformModifier_deform_method_TWIST = 1,
	SimpleDeformModifier_deform_method_BEND = 2,
	SimpleDeformModifier_deform_method_TAPER = 3,
	SimpleDeformModifier_deform_method_STRETCH = 4,
};

int SimpleDeformModifier_deform_method_get(PointerRNA *ptr);

PointerRNA SimpleDeformModifier_origin_get(PointerRNA *ptr);

int SimpleDeformModifier_use_relative_get(PointerRNA *ptr);

#define SimpleDeformModifier_vertex_group_MAX 32

void SimpleDeformModifier_vertex_group_get(PointerRNA *ptr, char *value);
int SimpleDeformModifier_vertex_group_length(PointerRNA *ptr);

/**************** Collision Settings ****************/

extern StructRNA RNA_SmokeCollSettings;

PointerRNA SmokeCollSettings_rna_type_get(PointerRNA *ptr);

/**************** Domain Settings ****************/

extern StructRNA RNA_SmokeDomainSettings;

PointerRNA SmokeDomainSettings_rna_type_get(PointerRNA *ptr);

int SmokeDomainSettings_amplify_get(PointerRNA *ptr);

enum {
	SmokeDomainSettings_collision_extents_BORDEROPEN = 0,
	SmokeDomainSettings_collision_extents_BORDERVERTICAL = 1,
	SmokeDomainSettings_collision_extents_BORDERCLOSED = 2,
};

int SmokeDomainSettings_collision_extents_get(PointerRNA *ptr);

enum {
	SmokeDomainSettings_point_cache_compress_type_CACHELIGHT = 0,
	SmokeDomainSettings_point_cache_compress_type_CACHEHEAVY = 1,
};

int SmokeDomainSettings_point_cache_compress_type_get(PointerRNA *ptr);

PointerRNA SmokeDomainSettings_collision_group_get(PointerRNA *ptr);

float SmokeDomainSettings_alpha_get(PointerRNA *ptr);

int SmokeDomainSettings_use_dissolve_smoke_get(PointerRNA *ptr);

int SmokeDomainSettings_dissolve_speed_get(PointerRNA *ptr);

PointerRNA SmokeDomainSettings_effector_group_get(PointerRNA *ptr);

PointerRNA SmokeDomainSettings_effector_weights_get(PointerRNA *ptr);

PointerRNA SmokeDomainSettings_fluid_group_get(PointerRNA *ptr);

float SmokeDomainSettings_beta_get(PointerRNA *ptr);

int SmokeDomainSettings_use_high_resolution_get(PointerRNA *ptr);

int SmokeDomainSettings_use_dissolve_smoke_log_get(PointerRNA *ptr);

int SmokeDomainSettings_resolution_max_get(PointerRNA *ptr);

enum {
	SmokeDomainSettings_noise_type_NOISEWAVE = 1,
};

int SmokeDomainSettings_noise_type_get(PointerRNA *ptr);

PointerRNA SmokeDomainSettings_point_cache_get(PointerRNA *ptr);

int SmokeDomainSettings_show_high_resolution_get(PointerRNA *ptr);

int SmokeDomainSettings_smooth_emitter_get(PointerRNA *ptr);

float SmokeDomainSettings_strength_get(PointerRNA *ptr);

float SmokeDomainSettings_time_scale_get(PointerRNA *ptr);

float SmokeDomainSettings_vorticity_get(PointerRNA *ptr);

/**************** Flow Settings ****************/

extern StructRNA RNA_SmokeFlowSettings;

PointerRNA SmokeFlowSettings_rna_type_get(PointerRNA *ptr);

int SmokeFlowSettings_use_absolute_get(PointerRNA *ptr);

float SmokeFlowSettings_density_get(PointerRNA *ptr);

int SmokeFlowSettings_initial_velocity_get(PointerRNA *ptr);

float SmokeFlowSettings_velocity_factor_get(PointerRNA *ptr);

int SmokeFlowSettings_use_outflow_get(PointerRNA *ptr);

PointerRNA SmokeFlowSettings_particle_system_get(PointerRNA *ptr);

float SmokeFlowSettings_temperature_get(PointerRNA *ptr);

/**************** Smoke Modifier ****************/

extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_Modifier;

PointerRNA SmokeModifier_coll_settings_get(PointerRNA *ptr);

PointerRNA SmokeModifier_domain_settings_get(PointerRNA *ptr);

PointerRNA SmokeModifier_flow_settings_get(PointerRNA *ptr);

enum {
	SmokeModifier_smoke_type_NONE = 0,
	SmokeModifier_smoke_type_DOMAIN = 1,
	SmokeModifier_smoke_type_FLOW = 2,
	SmokeModifier_smoke_type_COLLISION = 4,
};

int SmokeModifier_smoke_type_get(PointerRNA *ptr);

/**************** Smooth Modifier ****************/

extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_Modifier;

float SmoothModifier_factor_get(PointerRNA *ptr);

int SmoothModifier_iterations_get(PointerRNA *ptr);

#define SmoothModifier_vertex_group_MAX 32

void SmoothModifier_vertex_group_get(PointerRNA *ptr, char *value);
int SmoothModifier_vertex_group_length(PointerRNA *ptr);

int SmoothModifier_use_x_get(PointerRNA *ptr);

int SmoothModifier_use_y_get(PointerRNA *ptr);

int SmoothModifier_use_z_get(PointerRNA *ptr);

/**************** Soft Body Modifier ****************/

extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_Modifier;

PointerRNA SoftBodyModifier_point_cache_get(PointerRNA *ptr);

PointerRNA SoftBodyModifier_settings_get(PointerRNA *ptr);

/**************** Soft Body Settings ****************/

extern StructRNA RNA_SoftBodySettings;

PointerRNA SoftBodySettings_rna_type_get(PointerRNA *ptr);

int SoftBodySettings_aero_get(PointerRNA *ptr);

enum {
	SoftBodySettings_aerodynamics_type_SIMPLE = 0,
	SoftBodySettings_aerodynamics_type_LIFT_FORCE = 1,
};

int SoftBodySettings_aerodynamics_type_get(PointerRNA *ptr);

float SoftBodySettings_ball_size_get(PointerRNA *ptr);

float SoftBodySettings_ball_stiff_get(PointerRNA *ptr);

float SoftBodySettings_ball_damp_get(PointerRNA *ptr);

float SoftBodySettings_bend_get(PointerRNA *ptr);

void SoftBodySettings_location_mass_center_get(PointerRNA *ptr, float values[3]);

int SoftBodySettings_choke_get(PointerRNA *ptr);

enum {
	SoftBodySettings_collision_type_MANUAL = 0,
	SoftBodySettings_collision_type_AVERAGE = 1,
	SoftBodySettings_collision_type_MINIMAL = 2,
	SoftBodySettings_collision_type_MAXIMAL = 3,
	SoftBodySettings_collision_type_MINMAX = 4,
};

int SoftBodySettings_collision_type_get(PointerRNA *ptr);

float SoftBodySettings_damping_get(PointerRNA *ptr);

int SoftBodySettings_use_edge_collision_get(PointerRNA *ptr);

PointerRNA SoftBodySettings_effector_weights_get(PointerRNA *ptr);

float SoftBodySettings_error_threshold_get(PointerRNA *ptr);

int SoftBodySettings_use_estimate_matrix_get(PointerRNA *ptr);

int SoftBodySettings_use_face_collision_get(PointerRNA *ptr);

float SoftBodySettings_friction_get(PointerRNA *ptr);

int SoftBodySettings_fuzzy_get(PointerRNA *ptr);

float SoftBodySettings_goal_friction_get(PointerRNA *ptr);

float SoftBodySettings_goal_default_get(PointerRNA *ptr);

float SoftBodySettings_goal_max_get(PointerRNA *ptr);

float SoftBodySettings_goal_min_get(PointerRNA *ptr);

float SoftBodySettings_goal_spring_get(PointerRNA *ptr);

void SoftBodySettings_vertex_group_goal_get(PointerRNA *ptr, char *value);
int SoftBodySettings_vertex_group_goal_length(PointerRNA *ptr);

float SoftBodySettings_gravity_get(PointerRNA *ptr);

float SoftBodySettings_mass_get(PointerRNA *ptr);

#define SoftBodySettings_vertex_group_mass_MAX 32

void SoftBodySettings_vertex_group_mass_get(PointerRNA *ptr, char *value);
int SoftBodySettings_vertex_group_mass_length(PointerRNA *ptr);

int SoftBodySettings_step_max_get(PointerRNA *ptr);

int SoftBodySettings_step_min_get(PointerRNA *ptr);

int SoftBodySettings_plastic_get(PointerRNA *ptr);

int SoftBodySettings_use_diagnose_get(PointerRNA *ptr);

float SoftBodySettings_pull_get(PointerRNA *ptr);

float SoftBodySettings_push_get(PointerRNA *ptr);

void SoftBodySettings_rotation_estimate_get(PointerRNA *ptr, float values[9]);

int SoftBodySettings_spring_length_get(PointerRNA *ptr);

void SoftBodySettings_scale_estimate_get(PointerRNA *ptr, float values[9]);

int SoftBodySettings_use_self_collision_get(PointerRNA *ptr);

float SoftBodySettings_shear_get(PointerRNA *ptr);

float SoftBodySettings_speed_get(PointerRNA *ptr);

#define SoftBodySettings_vertex_group_spring_MAX 32

void SoftBodySettings_vertex_group_spring_get(PointerRNA *ptr, char *value);
int SoftBodySettings_vertex_group_spring_length(PointerRNA *ptr);

int SoftBodySettings_use_stiff_quads_get(PointerRNA *ptr);

int SoftBodySettings_use_edges_get(PointerRNA *ptr);

int SoftBodySettings_use_goal_get(PointerRNA *ptr);

int SoftBodySettings_use_auto_step_get(PointerRNA *ptr);

/**************** Solidify Modifier ****************/

extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_Modifier;

int SolidifyModifier_use_even_offset_get(PointerRNA *ptr);

int SolidifyModifier_use_rim_get(PointerRNA *ptr);

int SolidifyModifier_use_quality_normals_get(PointerRNA *ptr);

float SolidifyModifier_edge_crease_inner_get(PointerRNA *ptr);

float SolidifyModifier_offset_get(PointerRNA *ptr);

float SolidifyModifier_edge_crease_outer_get(PointerRNA *ptr);

float SolidifyModifier_edge_crease_rim_get(PointerRNA *ptr);

int SolidifyModifier_use_rim_material_get(PointerRNA *ptr);

float SolidifyModifier_thickness_get(PointerRNA *ptr);

#define SolidifyModifier_vertex_group_MAX 32

void SolidifyModifier_vertex_group_get(PointerRNA *ptr, char *value);
int SolidifyModifier_vertex_group_length(PointerRNA *ptr);

int SolidifyModifier_invert_vertex_group_get(PointerRNA *ptr);

/**************** Sound ****************/

extern StructRNA RNA_Sound;
extern StructRNA RNA_ID;

int Sound_use_memory_cache_get(PointerRNA *ptr);

#define Sound_filepath_MAX 240

void Sound_filepath_get(PointerRNA *ptr, char *value);
int Sound_filepath_length(PointerRNA *ptr);

PointerRNA Sound_packed_file_get(PointerRNA *ptr);

/**************** Sound ****************/

extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_Actuator;

int SoundActuator_use_sound_3d_get(PointerRNA *ptr);

float SoundActuator_cone_inner_angle_3d_get(PointerRNA *ptr);

float SoundActuator_cone_outer_angle_3d_get(PointerRNA *ptr);

float SoundActuator_cone_outer_gain_3d_get(PointerRNA *ptr);

float SoundActuator_distance_3d_max_get(PointerRNA *ptr);

float SoundActuator_gain_3d_max_get(PointerRNA *ptr);

float SoundActuator_gain_3d_min_get(PointerRNA *ptr);

float SoundActuator_pitch_get(PointerRNA *ptr);

enum {
	SoundActuator_mode_PLAYSTOP = 0,
	SoundActuator_mode_PLAYEND = 1,
	SoundActuator_mode_LOOPSTOP = 2,
	SoundActuator_mode_LOOPEND = 3,
	SoundActuator_mode_LOOPBIDIRECTIONAL = 4,
	SoundActuator_mode_LOOPBIDIRECTIONALSTOP = 5,
};

int SoundActuator_mode_get(PointerRNA *ptr);

float SoundActuator_distance_3d_reference_get(PointerRNA *ptr);

float SoundActuator_rolloff_factor_3d_get(PointerRNA *ptr);

float SoundActuator_volume_get(PointerRNA *ptr);

PointerRNA SoundActuator_sound_get(PointerRNA *ptr);

/**************** Sound Sequence ****************/

extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_Sequence;

int SoundSequence_animation_offset_end_get(PointerRNA *ptr);

int SoundSequence_animation_offset_start_get(PointerRNA *ptr);

float SoundSequence_attenuation_get(PointerRNA *ptr);

void SoundSequence_filepath_get(PointerRNA *ptr, char *value);
int SoundSequence_filepath_length(PointerRNA *ptr);

PointerRNA SoundSequence_sound_get(PointerRNA *ptr);

float SoundSequence_volume_get(PointerRNA *ptr);

/**************** Space ****************/

extern StructRNA RNA_Space;

PointerRNA Space_rna_type_get(PointerRNA *ptr);

enum {
	Space_type_EMPTY = 0,
	Space_type_VIEW_3D = 1,
	Space_type_GRAPH_EDITOR = 2,
	Space_type_OUTLINER = 3,
	Space_type_PROPERTIES = 4,
	Space_type_FILE_BROWSER = 5,
	Space_type_IMAGE_EDITOR = 6,
	Space_type_INFO = 7,
	Space_type_SEQUENCE_EDITOR = 8,
	Space_type_TEXT_EDITOR = 9,
	Space_type_AUDIO_WINDOW = 11,
	Space_type_DOPESHEET_EDITOR = 12,
	Space_type_NLA_EDITOR = 13,
	Space_type_SCRIPTS_WINDOW = 14,
	Space_type_TIMELINE = 15,
	Space_type_NODE_EDITOR = 16,
	Space_type_LOGIC_EDITOR = 17,
	Space_type_CONSOLE = 18,
	Space_type_USER_PREFERENCES = 19,
};

int Space_type_get(PointerRNA *ptr);

/**************** Space Console ****************/

extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_Space;

int SpaceConsole_font_size_get(PointerRNA *ptr);

void SpaceConsole_history_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void SpaceConsole_history_next(CollectionPropertyIterator *iter);
void SpaceConsole_history_end(CollectionPropertyIterator *iter);

#define SpaceConsole_language_MAX 32

void SpaceConsole_language_get(PointerRNA *ptr, char *value);
int SpaceConsole_language_length(PointerRNA *ptr);

void SpaceConsole_scrollback_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void SpaceConsole_scrollback_next(CollectionPropertyIterator *iter);
void SpaceConsole_scrollback_end(CollectionPropertyIterator *iter);

#define SpaceConsole_prompt_MAX 256

void SpaceConsole_prompt_get(PointerRNA *ptr, char *value);
int SpaceConsole_prompt_length(PointerRNA *ptr);

int SpaceConsole_select_end_get(PointerRNA *ptr);

int SpaceConsole_select_start_get(PointerRNA *ptr);

/**************** Space DopeSheet Editor ****************/

extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_Space;

PointerRNA SpaceDopeSheetEditor_action_get(PointerRNA *ptr);

enum {
	SpaceDopeSheetEditor_auto_snap_NONE = 0,
	SpaceDopeSheetEditor_auto_snap_STEP = 1,
	SpaceDopeSheetEditor_auto_snap_FRAME = 2,
	SpaceDopeSheetEditor_auto_snap_MARKER = 3,
};

int SpaceDopeSheetEditor_auto_snap_get(PointerRNA *ptr);

int SpaceDopeSheetEditor_use_auto_merge_keyframes_get(PointerRNA *ptr);

PointerRNA SpaceDopeSheetEditor_dopesheet_get(PointerRNA *ptr);

enum {
	SpaceDopeSheetEditor_mode_DOPESHEET = 3,
	SpaceDopeSheetEditor_mode_ACTION = 0,
	SpaceDopeSheetEditor_mode_SHAPEKEY = 1,
	SpaceDopeSheetEditor_mode_GPENCIL = 2,
};

int SpaceDopeSheetEditor_mode_get(PointerRNA *ptr);

int SpaceDopeSheetEditor_use_realtime_update_get(PointerRNA *ptr);

int SpaceDopeSheetEditor_show_frame_indicator_get(PointerRNA *ptr);

int SpaceDopeSheetEditor_show_pose_markers_get(PointerRNA *ptr);

int SpaceDopeSheetEditor_show_seconds_get(PointerRNA *ptr);

int SpaceDopeSheetEditor_show_sliders_get(PointerRNA *ptr);

int SpaceDopeSheetEditor_use_marker_sync_get(PointerRNA *ptr);

/**************** Space File Browser ****************/

extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_Space;

PointerRNA SpaceFileBrowser_params_get(PointerRNA *ptr);

PointerRNA SpaceFileBrowser_operator_get(PointerRNA *ptr);

/**************** Space Graph Editor ****************/

extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_Space;

enum {
	SpaceGraphEditor_auto_snap_NONE = 0,
	SpaceGraphEditor_auto_snap_STEP = 1,
	SpaceGraphEditor_auto_snap_FRAME = 2,
	SpaceGraphEditor_auto_snap_MARKER = 3,
};

int SpaceGraphEditor_auto_snap_get(PointerRNA *ptr);

int SpaceGraphEditor_use_auto_merge_keyframes_get(PointerRNA *ptr);

float SpaceGraphEditor_cursor_position_y_get(PointerRNA *ptr);

PointerRNA SpaceGraphEditor_dopesheet_get(PointerRNA *ptr);

int SpaceGraphEditor_has_ghost_curves_get(PointerRNA *ptr);

enum {
	SpaceGraphEditor_mode_FCURVES = 0,
	SpaceGraphEditor_mode_DRIVERS = 1,
};

int SpaceGraphEditor_mode_get(PointerRNA *ptr);

int SpaceGraphEditor_use_only_selected_curves_handles_get(PointerRNA *ptr);

int SpaceGraphEditor_use_only_selected_keyframe_handles_get(PointerRNA *ptr);

enum {
	SpaceGraphEditor_pivot_point_BOUNDING_BOX_CENTER = 0,
	SpaceGraphEditor_pivot_point_CURSOR = 1,
	SpaceGraphEditor_pivot_point_INDIVIDUAL_ORIGINS = 2,
};

int SpaceGraphEditor_pivot_point_get(PointerRNA *ptr);

int SpaceGraphEditor_use_realtime_update_get(PointerRNA *ptr);

int SpaceGraphEditor_show_cursor_get(PointerRNA *ptr);

int SpaceGraphEditor_show_frame_indicator_get(PointerRNA *ptr);

int SpaceGraphEditor_show_handles_get(PointerRNA *ptr);

int SpaceGraphEditor_show_seconds_get(PointerRNA *ptr);

int SpaceGraphEditor_show_sliders_get(PointerRNA *ptr);

int SpaceGraphEditor_use_fancy_drawing_get(PointerRNA *ptr);

/**************** Space Image Editor ****************/

extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_Space;

PointerRNA SpaceImageEditor_curves_get(PointerRNA *ptr);

enum {
	SpaceImageEditor_draw_channels_COLOR = 0,
	SpaceImageEditor_draw_channels_COLOR_ALPHA = 4096,
	SpaceImageEditor_draw_channels_ALPHA = 8192,
	SpaceImageEditor_draw_channels_Z_BUFFER = 16384,
};

int SpaceImageEditor_draw_channels_get(PointerRNA *ptr);

int SpaceImageEditor_show_repeat_get(PointerRNA *ptr);

PointerRNA SpaceImageEditor_grease_pencil_get(PointerRNA *ptr);

PointerRNA SpaceImageEditor_image_get(PointerRNA *ptr);

int SpaceImageEditor_use_image_paint_get(PointerRNA *ptr);

int SpaceImageEditor_use_image_pin_get(PointerRNA *ptr);

PointerRNA SpaceImageEditor_image_user_get(PointerRNA *ptr);

PointerRNA SpaceImageEditor_sample_histogram_get(PointerRNA *ptr);

PointerRNA SpaceImageEditor_scopes_get(PointerRNA *ptr);

int SpaceImageEditor_show_paint_get(PointerRNA *ptr);

int SpaceImageEditor_show_render_get(PointerRNA *ptr);

int SpaceImageEditor_show_uvedit_get(PointerRNA *ptr);

PointerRNA SpaceImageEditor_uv_editor_get(PointerRNA *ptr);

int SpaceImageEditor_use_realtime_update_get(PointerRNA *ptr);

int SpaceImageEditor_use_grease_pencil_get(PointerRNA *ptr);

/**************** Space Info ****************/

extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_Space;

int SpaceInfo_show_report_debug_get(PointerRNA *ptr);

int SpaceInfo_show_report_error_get(PointerRNA *ptr);

int SpaceInfo_show_report_info_get(PointerRNA *ptr);

int SpaceInfo_show_report_operator_get(PointerRNA *ptr);

int SpaceInfo_show_report_warning_get(PointerRNA *ptr);

/**************** Space Logic Editor ****************/

extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_Space;

int SpaceLogicEditor_show_sensors_active_object_get(PointerRNA *ptr);

int SpaceLogicEditor_show_controllers_active_object_get(PointerRNA *ptr);

int SpaceLogicEditor_show_actuators_active_object_get(PointerRNA *ptr);

int SpaceLogicEditor_show_sensors_active_states_get(PointerRNA *ptr);

int SpaceLogicEditor_show_actuators_active_states_get(PointerRNA *ptr);

int SpaceLogicEditor_show_actuators_linked_controller_get(PointerRNA *ptr);

int SpaceLogicEditor_show_sensors_linked_controller_get(PointerRNA *ptr);

int SpaceLogicEditor_show_controllers_linked_controller_get(PointerRNA *ptr);

int SpaceLogicEditor_show_sensors_selected_objects_get(PointerRNA *ptr);

int SpaceLogicEditor_show_controllers_selected_objects_get(PointerRNA *ptr);

int SpaceLogicEditor_show_actuators_selected_objects_get(PointerRNA *ptr);

/**************** Space Nla Editor ****************/

extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_Space;

enum {
	SpaceNLA_auto_snap_NONE = 0,
	SpaceNLA_auto_snap_STEP = 1,
	SpaceNLA_auto_snap_FRAME = 2,
	SpaceNLA_auto_snap_MARKER = 3,
};

int SpaceNLA_auto_snap_get(PointerRNA *ptr);

PointerRNA SpaceNLA_dopesheet_get(PointerRNA *ptr);

int SpaceNLA_use_realtime_update_get(PointerRNA *ptr);

int SpaceNLA_show_strip_curves_get(PointerRNA *ptr);

int SpaceNLA_show_frame_indicator_get(PointerRNA *ptr);

int SpaceNLA_show_seconds_get(PointerRNA *ptr);

/**************** Space Node Editor ****************/

extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_Space;

int SpaceNodeEditor_use_auto_render_get(PointerRNA *ptr);

int SpaceNodeEditor_show_backdrop_get(PointerRNA *ptr);

float SpaceNodeEditor_backdrop_x_get(PointerRNA *ptr);

float SpaceNodeEditor_backdrop_y_get(PointerRNA *ptr);

float SpaceNodeEditor_backdrop_zoom_get(PointerRNA *ptr);

enum {
	SpaceNodeEditor_backdrop_channels_COLOR = 0,
	SpaceNodeEditor_backdrop_channels_COLOR_ALPHA = 8,
	SpaceNodeEditor_backdrop_channels_ALPHA = 16,
};

int SpaceNodeEditor_backdrop_channels_get(PointerRNA *ptr);

PointerRNA SpaceNodeEditor_id_get(PointerRNA *ptr);

PointerRNA SpaceNodeEditor_id_from_get(PointerRNA *ptr);

PointerRNA SpaceNodeEditor_node_tree_get(PointerRNA *ptr);

enum {
	SpaceNodeEditor_texture_type_OBJECT = 0,
	SpaceNodeEditor_texture_type_WORLD = 1,
	SpaceNodeEditor_texture_type_BRUSH = 2,
};

int SpaceNodeEditor_texture_type_get(PointerRNA *ptr);

enum {
	SpaceNodeEditor_tree_type_MATERIAL = 0,
	SpaceNodeEditor_tree_type_TEXTURE = 2,
	SpaceNodeEditor_tree_type_COMPOSITING = 1,
};

int SpaceNodeEditor_tree_type_get(PointerRNA *ptr);

/**************** Space Outliner ****************/

extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_Space;

int SpaceOutliner_use_filter_case_sensitive_get(PointerRNA *ptr);

int SpaceOutliner_use_filter_complete_get(PointerRNA *ptr);

#define SpaceOutliner_filter_text_MAX 32

void SpaceOutliner_filter_text_get(PointerRNA *ptr, char *value);
int SpaceOutliner_filter_text_length(PointerRNA *ptr);

enum {
	SpaceOutliner_display_mode_ALL_SCENES = 0,
	SpaceOutliner_display_mode_CURRENT_SCENE = 1,
	SpaceOutliner_display_mode_VISIBLE_LAYERS = 2,
	SpaceOutliner_display_mode_SELECTED = 3,
	SpaceOutliner_display_mode_ACTIVE = 4,
	SpaceOutliner_display_mode_SAME_TYPES = 5,
	SpaceOutliner_display_mode_GROUPS = 6,
	SpaceOutliner_display_mode_LIBRARIES = 7,
	SpaceOutliner_display_mode_SEQUENCE = 10,
	SpaceOutliner_display_mode_DATABLOCKS = 11,
	SpaceOutliner_display_mode_USER_PREFERENCES = 12,
	SpaceOutliner_display_mode_KEYMAPS = 13,
};

int SpaceOutliner_display_mode_get(PointerRNA *ptr);

int SpaceOutliner_show_restrict_columns_get(PointerRNA *ptr);

/**************** Properties Space ****************/

extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_Space;

enum {
	SpaceProperties_align_HORIZONTAL = 1,
	SpaceProperties_align_VERTICAL = 2,
};

int SpaceProperties_align_get(PointerRNA *ptr);

enum {
	SpaceProperties_context_SCENE = 1,
	SpaceProperties_context_RENDER = 0,
	SpaceProperties_context_WORLD = 2,
	SpaceProperties_context_OBJECT = 3,
	SpaceProperties_context_CONSTRAINT = 12,
	SpaceProperties_context_MODIFIER = 10,
	SpaceProperties_context_DATA = 4,
	SpaceProperties_context_BONE = 9,
	SpaceProperties_context_BONE_CONSTRAINT = 13,
	SpaceProperties_context_MATERIAL = 5,
	SpaceProperties_context_TEXTURE = 6,
	SpaceProperties_context_PARTICLE = 7,
	SpaceProperties_context_PHYSICS = 8,
};

int SpaceProperties_context_get(PointerRNA *ptr);

int SpaceProperties_use_pin_id_get(PointerRNA *ptr);

enum {
	SpaceProperties_texture_context_MATERIAL = 0,
};

int SpaceProperties_texture_context_get(PointerRNA *ptr);

PointerRNA SpaceProperties_pin_id_get(PointerRNA *ptr);

/**************** Space Sequence Editor ****************/

extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_Space;

int SpaceSequenceEditor_display_channel_get(PointerRNA *ptr);

enum {
	SpaceSequenceEditor_display_mode_IMAGE = 1,
	SpaceSequenceEditor_display_mode_WAVEFORM = 2,
	SpaceSequenceEditor_display_mode_VECTOR_SCOPE = 3,
	SpaceSequenceEditor_display_mode_HISTOGRAM = 4,
};

int SpaceSequenceEditor_display_mode_get(PointerRNA *ptr);

int SpaceSequenceEditor_show_frames_get(PointerRNA *ptr);

PointerRNA SpaceSequenceEditor_grease_pencil_get(PointerRNA *ptr);

enum {
	SpaceSequenceEditor_proxy_render_size_NONE = -1,
	SpaceSequenceEditor_proxy_render_size_SCENE = 0,
	SpaceSequenceEditor_proxy_render_size_PROXY_25 = 25,
	SpaceSequenceEditor_proxy_render_size_PROXY_50 = 50,
	SpaceSequenceEditor_proxy_render_size_PROXY_75 = 75,
	SpaceSequenceEditor_proxy_render_size_FULL = 100,
};

int SpaceSequenceEditor_proxy_render_size_get(PointerRNA *ptr);

int SpaceSequenceEditor_show_safe_margin_get(PointerRNA *ptr);

int SpaceSequenceEditor_show_separate_color_get(PointerRNA *ptr);

int SpaceSequenceEditor_show_frame_indicator_get(PointerRNA *ptr);

int SpaceSequenceEditor_draw_overexposed_get(PointerRNA *ptr);

int SpaceSequenceEditor_use_marker_sync_get(PointerRNA *ptr);

int SpaceSequenceEditor_use_grease_pencil_get(PointerRNA *ptr);

enum {
	SpaceSequenceEditor_view_type_SEQUENCER = 1,
	SpaceSequenceEditor_view_type_PREVIEW = 2,
	SpaceSequenceEditor_view_type_SEQUENCER_PREVIEW = 3,
};

int SpaceSequenceEditor_view_type_get(PointerRNA *ptr);

float SpaceSequenceEditor_offset_x_get(PointerRNA *ptr);

float SpaceSequenceEditor_offset_y_get(PointerRNA *ptr);

float SpaceSequenceEditor_zoom_get(PointerRNA *ptr);

/**************** Space Text Editor ****************/

extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_Space;

int SpaceTextEditor_use_find_all_get(PointerRNA *ptr);

#define SpaceTextEditor_find_text_MAX 256

void SpaceTextEditor_find_text_get(PointerRNA *ptr, char *value);
int SpaceTextEditor_find_text_length(PointerRNA *ptr);

int SpaceTextEditor_use_find_wrap_get(PointerRNA *ptr);

int SpaceTextEditor_font_size_get(PointerRNA *ptr);

int SpaceTextEditor_show_line_highlight_get(PointerRNA *ptr);

int SpaceTextEditor_show_line_numbers_get(PointerRNA *ptr);

int SpaceTextEditor_use_live_edit_get(PointerRNA *ptr);

int SpaceTextEditor_use_overwrite_get(PointerRNA *ptr);

#define SpaceTextEditor_replace_text_MAX 256

void SpaceTextEditor_replace_text_get(PointerRNA *ptr, char *value);
int SpaceTextEditor_replace_text_length(PointerRNA *ptr);

int SpaceTextEditor_show_syntax_highlight_get(PointerRNA *ptr);

int SpaceTextEditor_tab_width_get(PointerRNA *ptr);

PointerRNA SpaceTextEditor_text_get(PointerRNA *ptr);

int SpaceTextEditor_show_word_wrap_get(PointerRNA *ptr);

/**************** Space Timeline Editor ****************/

extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_Space;

int SpaceTimeline_cache_cloth_get(PointerRNA *ptr);

int SpaceTimeline_show_only_selected_get(PointerRNA *ptr);

int SpaceTimeline_cache_particles_get(PointerRNA *ptr);

int SpaceTimeline_show_cache_get(PointerRNA *ptr);

int SpaceTimeline_show_frame_indicator_get(PointerRNA *ptr);

int SpaceTimeline_cache_smoke_get(PointerRNA *ptr);

int SpaceTimeline_cache_softbody_get(PointerRNA *ptr);

/**************** Space UV Editor ****************/

extern StructRNA RNA_SpaceUVEditor;

PointerRNA SpaceUVEditor_rna_type_get(PointerRNA *ptr);

void SpaceUVEditor_cursor_location_get(PointerRNA *ptr, float values[2]);

int SpaceUVEditor_lock_bounds_get(PointerRNA *ptr);

int SpaceUVEditor_show_modified_edges_get(PointerRNA *ptr);

int SpaceUVEditor_show_other_objects_get(PointerRNA *ptr);

int SpaceUVEditor_show_smooth_edges_get(PointerRNA *ptr);

int SpaceUVEditor_show_stretch_get(PointerRNA *ptr);

enum {
	SpaceUVEditor_draw_stretch_type_ANGLE = 0,
	SpaceUVEditor_draw_stretch_type_AREA = 1,
};

int SpaceUVEditor_draw_stretch_type_get(PointerRNA *ptr);

enum {
	SpaceUVEditor_edge_draw_type_OUTLINE = 0,
	SpaceUVEditor_edge_draw_type_DASH = 1,
	SpaceUVEditor_edge_draw_type_BLACK = 2,
	SpaceUVEditor_edge_draw_type_WHITE = 3,
};

int SpaceUVEditor_edge_draw_type_get(PointerRNA *ptr);

int SpaceUVEditor_use_live_unwrap_get(PointerRNA *ptr);

int SpaceUVEditor_show_normalized_coords_get(PointerRNA *ptr);

enum {
	SpaceUVEditor_pivot_point_CENTER = 0,
	SpaceUVEditor_pivot_point_MEDIAN = 3,
	SpaceUVEditor_pivot_point_CURSOR = 1,
};

int SpaceUVEditor_pivot_point_get(PointerRNA *ptr);

int SpaceUVEditor_use_snap_to_pixels_get(PointerRNA *ptr);

enum {
	SpaceUVEditor_sticky_select_mode_DISABLED = 1,
	SpaceUVEditor_sticky_select_mode_SHARED_LOCATION = 0,
	SpaceUVEditor_sticky_select_mode_SHARED_VERTEX = 2,
};

int SpaceUVEditor_sticky_select_mode_get(PointerRNA *ptr);

/**************** Space User Preferences ****************/

extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_Space;

#define SpaceUserPreferences_filter_text_MAX 64

void SpaceUserPreferences_filter_text_get(PointerRNA *ptr, char *value);
int SpaceUserPreferences_filter_text_length(PointerRNA *ptr);

/**************** 3D View Space ****************/

extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_Space;

void SpaceView3D_cursor_location_get(PointerRNA *ptr, float values[3]);

PointerRNA SpaceView3D_region_3d_get(PointerRNA *ptr);

int SpaceView3D_use_pivot_point_align_get(PointerRNA *ptr);

int SpaceView3D_show_all_objects_origin_get(PointerRNA *ptr);

void SpaceView3D_background_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void SpaceView3D_background_images_next(CollectionPropertyIterator *iter);
void SpaceView3D_background_images_end(CollectionPropertyIterator *iter);

PointerRNA SpaceView3D_camera_get(PointerRNA *ptr);

float SpaceView3D_clip_end_get(PointerRNA *ptr);

float SpaceView3D_clip_start_get(PointerRNA *ptr);

PointerRNA SpaceView3D_current_orientation_get(PointerRNA *ptr);

int SpaceView3D_show_background_images_get(PointerRNA *ptr);

int SpaceView3D_show_floor_get(PointerRNA *ptr);

int SpaceView3D_show_axis_x_get(PointerRNA *ptr);

int SpaceView3D_show_axis_y_get(PointerRNA *ptr);

int SpaceView3D_show_axis_z_get(PointerRNA *ptr);

int SpaceView3D_grid_lines_get(PointerRNA *ptr);

float SpaceView3D_grid_scale_get(PointerRNA *ptr);

int SpaceView3D_grid_subdivisions_get(PointerRNA *ptr);

float SpaceView3D_lens_get(PointerRNA *ptr);

PointerRNA SpaceView3D_local_view_get(PointerRNA *ptr);

int SpaceView3D_lock_camera_and_layers_get(PointerRNA *ptr);

#define SpaceView3D_lock_bone_MAX 32

void SpaceView3D_lock_bone_get(PointerRNA *ptr, char *value);
int SpaceView3D_lock_bone_length(PointerRNA *ptr);

int SpaceView3D_lock_cursor_get(PointerRNA *ptr);

PointerRNA SpaceView3D_lock_object_get(PointerRNA *ptr);

int SpaceView3D_show_manipulator_get(PointerRNA *ptr);

int SpaceView3D_use_manipulator_rotate_get(PointerRNA *ptr);

int SpaceView3D_use_manipulator_scale_get(PointerRNA *ptr);

int SpaceView3D_use_manipulator_translate_get(PointerRNA *ptr);

int SpaceView3D_use_occlude_geometry_get(PointerRNA *ptr);

int SpaceView3D_show_only_render_get(PointerRNA *ptr);

int SpaceView3D_show_outline_selected_get(PointerRNA *ptr);

enum {
	SpaceView3D_pivot_point_BOUNDING_BOX_CENTER = 0,
	SpaceView3D_pivot_point_CURSOR = 1,
	SpaceView3D_pivot_point_INDIVIDUAL_ORIGINS = 2,
	SpaceView3D_pivot_point_MEDIAN_POINT = 3,
	SpaceView3D_pivot_point_ACTIVE_ELEMENT = 4,
};

int SpaceView3D_pivot_point_get(PointerRNA *ptr);

PointerRNA SpaceView3D_region_quadview_get(PointerRNA *ptr);

int SpaceView3D_show_relationship_lines_get(PointerRNA *ptr);

int SpaceView3D_show_textured_solid_get(PointerRNA *ptr);

enum {
	SpaceView3D_transform_orientation_GLOBAL = 0,
	SpaceView3D_transform_orientation_LOCAL = 1,
	SpaceView3D_transform_orientation_GIMBAL = 4,
	SpaceView3D_transform_orientation_NORMAL = 2,
	SpaceView3D_transform_orientation_VIEW = 3,
	SpaceView3D_transform_orientation_CUSTOM = 5,
};

int SpaceView3D_transform_orientation_get(PointerRNA *ptr);

void SpaceView3D_layers_used_get(PointerRNA *ptr, int values[20]);

enum {
	SpaceView3D_viewport_shade_BOUNDBOX = 1,
	SpaceView3D_viewport_shade_WIREFRAME = 2,
	SpaceView3D_viewport_shade_SOLID = 3,
	SpaceView3D_viewport_shade_TEXTURED = 5,
};

int SpaceView3D_viewport_shade_get(PointerRNA *ptr);

void SpaceView3D_layers_get(PointerRNA *ptr, int values[20]);

/**************** SpeedControl Sequence ****************/

extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_Sequence;

int SpeedControlSequence_use_frame_blend_get(PointerRNA *ptr);

float SpeedControlSequence_multiply_speed_get(PointerRNA *ptr);

int SpeedControlSequence_scale_to_length_get(PointerRNA *ptr);

int SpeedControlSequence_use_as_speed_get(PointerRNA *ptr);

/**************** Spline ****************/

extern StructRNA RNA_Spline;

PointerRNA Spline_rna_type_get(PointerRNA *ptr);

void Spline_bezier_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Spline_bezier_points_next(CollectionPropertyIterator *iter);
void Spline_bezier_points_end(CollectionPropertyIterator *iter);

int Spline_use_bezier_u_get(PointerRNA *ptr);

int Spline_use_bezier_v_get(PointerRNA *ptr);

int Spline_character_index_get(PointerRNA *ptr);

int Spline_use_cyclic_u_get(PointerRNA *ptr);

int Spline_use_cyclic_v_get(PointerRNA *ptr);

int Spline_use_endpoint_u_get(PointerRNA *ptr);

int Spline_use_endpoint_v_get(PointerRNA *ptr);

int Spline_hide_get(PointerRNA *ptr);

int Spline_material_index_get(PointerRNA *ptr);

int Spline_order_u_get(PointerRNA *ptr);

int Spline_order_v_get(PointerRNA *ptr);

void Spline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Spline_points_next(CollectionPropertyIterator *iter);
void Spline_points_end(CollectionPropertyIterator *iter);

int Spline_point_count_u_get(PointerRNA *ptr);

int Spline_point_count_v_get(PointerRNA *ptr);

enum {
	Spline_radius_interpolation_LINEAR = 0,
	Spline_radius_interpolation_CARDINAL = 1,
	Spline_radius_interpolation_BSPLINE = 2,
	Spline_radius_interpolation_EASE = 3,
};

int Spline_radius_interpolation_get(PointerRNA *ptr);

int Spline_resolution_u_get(PointerRNA *ptr);

int Spline_resolution_v_get(PointerRNA *ptr);

int Spline_use_smooth_get(PointerRNA *ptr);

enum {
	Spline_tilt_interpolation_LINEAR = 0,
	Spline_tilt_interpolation_CARDINAL = 1,
	Spline_tilt_interpolation_BSPLINE = 2,
	Spline_tilt_interpolation_EASE = 3,
};

int Spline_tilt_interpolation_get(PointerRNA *ptr);

enum {
	Spline_type_POLY = 0,
	Spline_type_BEZIER = 1,
	Spline_type_BSPLINE = 2,
	Spline_type_CARDINAL = 3,
	Spline_type_NURBS = 4,
};

int Spline_type_get(PointerRNA *ptr);

/**************** Spline Bezier Points ****************/

extern StructRNA RNA_SplineBezierPoints;

PointerRNA SplineBezierPoints_rna_type_get(PointerRNA *ptr);

/**************** Spline IK Constraint ****************/

extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_Constraint;

int SplineIKConstraint_chain_count_get(PointerRNA *ptr);

int SplineIKConstraint_use_chain_offset_get(PointerRNA *ptr);

int SplineIKConstraint_use_even_divisions_get(PointerRNA *ptr);

void SplineIKConstraint_joint_bindings_get(PointerRNA *ptr, float values[32]);

PointerRNA SplineIKConstraint_target_get(PointerRNA *ptr);

int SplineIKConstraint_use_curve_radius_get(PointerRNA *ptr);

enum {
	SplineIKConstraint_xz_scale_mode_NONE = 0,
	SplineIKConstraint_xz_scale_mode_BONE_ORIGINAL = 1,
	SplineIKConstraint_xz_scale_mode_VOLUME_PRESERVE = 2,
};

int SplineIKConstraint_xz_scale_mode_get(PointerRNA *ptr);

int SplineIKConstraint_use_y_stretch_get(PointerRNA *ptr);

/**************** SplinePoint ****************/

extern StructRNA RNA_SplinePoint;

PointerRNA SplinePoint_rna_type_get(PointerRNA *ptr);

float SplinePoint_radius_get(PointerRNA *ptr);

int SplinePoint_hide_get(PointerRNA *ptr);

void SplinePoint_co_get(PointerRNA *ptr, float values[4]);

int SplinePoint_select_get(PointerRNA *ptr);

float SplinePoint_tilt_get(PointerRNA *ptr);

float SplinePoint_weight_get(PointerRNA *ptr);

float SplinePoint_weight_softbody_get(PointerRNA *ptr);

/**************** Spline Points ****************/

extern StructRNA RNA_SplinePoints;

PointerRNA SplinePoints_rna_type_get(PointerRNA *ptr);

/**************** Spot Lamp ****************/

extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_ID;

int SpotLamp_use_auto_clip_end_get(PointerRNA *ptr);

int SpotLamp_use_auto_clip_start_get(PointerRNA *ptr);

float SpotLamp_compression_threshold_get(PointerRNA *ptr);

PointerRNA SpotLamp_falloff_curve_get(PointerRNA *ptr);

enum {
	SpotLamp_falloff_type_CONSTANT = 0,
	SpotLamp_falloff_type_INVERSE_LINEAR = 1,
	SpotLamp_falloff_type_INVERSE_SQUARE = 2,
	SpotLamp_falloff_type_CUSTOM_CURVE = 3,
	SpotLamp_falloff_type_LINEAR_QUADRATIC_WEIGHTED = 4,
};

int SpotLamp_falloff_type_get(PointerRNA *ptr);

int SpotLamp_use_halo_get(PointerRNA *ptr);

float SpotLamp_halo_intensity_get(PointerRNA *ptr);

int SpotLamp_halo_step_get(PointerRNA *ptr);

float SpotLamp_linear_attenuation_get(PointerRNA *ptr);

int SpotLamp_use_only_shadow_get(PointerRNA *ptr);

float SpotLamp_quadratic_attenuation_get(PointerRNA *ptr);

int SpotLamp_shadow_buffer_samples_get(PointerRNA *ptr);

float SpotLamp_shadow_adaptive_threshold_get(PointerRNA *ptr);

float SpotLamp_shadow_buffer_bias_get(PointerRNA *ptr);

float SpotLamp_shadow_buffer_clip_end_get(PointerRNA *ptr);

float SpotLamp_shadow_buffer_clip_start_get(PointerRNA *ptr);

int SpotLamp_shadow_buffer_size_get(PointerRNA *ptr);

float SpotLamp_shadow_buffer_soft_get(PointerRNA *ptr);

enum {
	SpotLamp_shadow_buffer_type_REGULAR = 0,
	SpotLamp_shadow_buffer_type_HALFWAY = 2,
	SpotLamp_shadow_buffer_type_IRREGULAR = 1,
	SpotLamp_shadow_buffer_type_DEEP = 3,
};

int SpotLamp_shadow_buffer_type_get(PointerRNA *ptr);

void SpotLamp_shadow_color_get(PointerRNA *ptr, float values[3]);

enum {
	SpotLamp_shadow_filter_type_BOX = 0,
	SpotLamp_shadow_filter_type_TENT = 1,
	SpotLamp_shadow_filter_type_GAUSS = 2,
};

int SpotLamp_shadow_filter_type_get(PointerRNA *ptr);

int SpotLamp_use_shadow_layer_get(PointerRNA *ptr);

enum {
	SpotLamp_shadow_method_NOSHADOW = 0,
	SpotLamp_shadow_method_BUFFER_SHADOW = 1,
	SpotLamp_shadow_method_RAY_SHADOW = 8192,
};

int SpotLamp_shadow_method_get(PointerRNA *ptr);

int SpotLamp_shadow_ray_samples_get(PointerRNA *ptr);

enum {
	SpotLamp_shadow_ray_sample_method_ADAPTIVE_QMC = 1,
	SpotLamp_shadow_ray_sample_method_CONSTANT_QMC = 2,
};

int SpotLamp_shadow_ray_sample_method_get(PointerRNA *ptr);

enum {
	SpotLamp_shadow_sample_buffers_BUFFERS_1 = 1,
	SpotLamp_shadow_sample_buffers_BUFFERS_4 = 4,
	SpotLamp_shadow_sample_buffers_BUFFERS_9 = 9,
};

int SpotLamp_shadow_sample_buffers_get(PointerRNA *ptr);

float SpotLamp_shadow_soft_size_get(PointerRNA *ptr);

int SpotLamp_show_cone_get(PointerRNA *ptr);

int SpotLamp_use_sphere_get(PointerRNA *ptr);

float SpotLamp_spot_blend_get(PointerRNA *ptr);

float SpotLamp_spot_size_get(PointerRNA *ptr);

int SpotLamp_use_square_get(PointerRNA *ptr);

/**************** State Actuator ****************/

extern StructRNA RNA_StateActuator;
extern StructRNA RNA_Actuator;

enum {
	StateActuator_operation_SET = 0,
	StateActuator_operation_ADD = 1,
	StateActuator_operation_REMOVE = 2,
	StateActuator_operation_CHANGE = 3,
};

int StateActuator_operation_get(PointerRNA *ptr);

void StateActuator_states_get(PointerRNA *ptr, int values[30]);

/**************** Stretch To Constraint ****************/

extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_Constraint;

float StretchToConstraint_head_tail_get(PointerRNA *ptr);

enum {
	StretchToConstraint_keep_axis_PLANE_X = 0,
	StretchToConstraint_keep_axis_PLANE_Z = 2,
};

int StretchToConstraint_keep_axis_get(PointerRNA *ptr);

enum {
	StretchToConstraint_volume_VOLUME_XZX = 0,
	StretchToConstraint_volume_VOLUME_X = 1,
	StretchToConstraint_volume_VOLUME_Z = 2,
	StretchToConstraint_volume_NO_VOLUME = 3,
};

int StretchToConstraint_volume_get(PointerRNA *ptr);

float StretchToConstraint_rest_length_get(PointerRNA *ptr);

#define StretchToConstraint_subtarget_MAX 32

void StretchToConstraint_subtarget_get(PointerRNA *ptr, char *value);
int StretchToConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA StretchToConstraint_target_get(PointerRNA *ptr);

float StretchToConstraint_bulge_get(PointerRNA *ptr);

/**************** String Definition ****************/

extern StructRNA RNA_StringProperty;
extern StructRNA RNA_Property;

void StringProperty_default_get(PointerRNA *ptr, char *value);
int StringProperty_default_length(PointerRNA *ptr);

int StringProperty_length_max_get(PointerRNA *ptr);

/**************** Struct Definition ****************/

extern StructRNA RNA_Struct;

PointerRNA Struct_rna_type_get(PointerRNA *ptr);

void Struct_name_get(PointerRNA *ptr, char *value);
int Struct_name_length(PointerRNA *ptr);

PointerRNA Struct_base_get(PointerRNA *ptr);

void Struct_description_get(PointerRNA *ptr, char *value);
int Struct_description_length(PointerRNA *ptr);

void Struct_functions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Struct_functions_next(CollectionPropertyIterator *iter);
void Struct_functions_end(CollectionPropertyIterator *iter);

void Struct_identifier_get(PointerRNA *ptr, char *value);
int Struct_identifier_length(PointerRNA *ptr);

PointerRNA Struct_name_property_get(PointerRNA *ptr);

PointerRNA Struct_nested_get(PointerRNA *ptr);

void Struct_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Struct_properties_next(CollectionPropertyIterator *iter);
void Struct_properties_end(CollectionPropertyIterator *iter);

/**************** Stucci Texture ****************/

extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

enum {
	StucciTexture_noise_basis_BLENDER_ORIGINAL = 0,
	StucciTexture_noise_basis_ORIGINAL_PERLIN = 1,
	StucciTexture_noise_basis_IMPROVED_PERLIN = 2,
	StucciTexture_noise_basis_VORONOI_F1 = 3,
	StucciTexture_noise_basis_VORONOI_F2 = 4,
	StucciTexture_noise_basis_VORONOI_F3 = 5,
	StucciTexture_noise_basis_VORONOI_F4 = 6,
	StucciTexture_noise_basis_VORONOI_F2_F1 = 7,
	StucciTexture_noise_basis_VORONOI_CRACKLE = 8,
	StucciTexture_noise_basis_CELL_NOISE = 14,
};

int StucciTexture_noise_basis_get(PointerRNA *ptr);

float StucciTexture_noise_scale_get(PointerRNA *ptr);

enum {
	StucciTexture_noise_type_SOFT_NOISE = 0,
	StucciTexture_noise_type_HARD_NOISE = 1,
};

int StucciTexture_noise_type_get(PointerRNA *ptr);

enum {
	StucciTexture_stucci_type_PLASTIC = 0,
	StucciTexture_stucci_type_WALL_IN = 1,
	StucciTexture_stucci_type_WALL_OUT = 2,
};

int StucciTexture_stucci_type_get(PointerRNA *ptr);

float StucciTexture_turbulence_get(PointerRNA *ptr);

/**************** Subsurf Modifier ****************/

extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_Modifier;

int SubsurfModifier_levels_get(PointerRNA *ptr);

int SubsurfModifier_show_only_control_edges_get(PointerRNA *ptr);

int SubsurfModifier_render_levels_get(PointerRNA *ptr);

int SubsurfModifier_use_subsurf_uv_get(PointerRNA *ptr);

enum {
	SubsurfModifier_subdivision_type_CATMULL_CLARK = 0,
	SubsurfModifier_subdivision_type_SIMPLE = 1,
};

int SubsurfModifier_subdivision_type_get(PointerRNA *ptr);

/**************** Sun Lamp ****************/

extern StructRNA RNA_SunLamp;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_ID;

int SunLamp_use_only_shadow_get(PointerRNA *ptr);

float SunLamp_shadow_adaptive_threshold_get(PointerRNA *ptr);

void SunLamp_shadow_color_get(PointerRNA *ptr, float values[3]);

int SunLamp_use_shadow_layer_get(PointerRNA *ptr);

enum {
	SunLamp_shadow_method_NOSHADOW = 0,
	SunLamp_shadow_method_RAY_SHADOW = 8192,
};

int SunLamp_shadow_method_get(PointerRNA *ptr);

int SunLamp_shadow_ray_samples_get(PointerRNA *ptr);

enum {
	SunLamp_shadow_ray_sample_method_ADAPTIVE_QMC = 1,
	SunLamp_shadow_ray_sample_method_CONSTANT_QMC = 2,
};

int SunLamp_shadow_ray_sample_method_get(PointerRNA *ptr);

float SunLamp_shadow_soft_size_get(PointerRNA *ptr);

PointerRNA SunLamp_sky_get(PointerRNA *ptr);

/**************** Surface Curve ****************/

extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_Curve;
extern StructRNA RNA_ID;

int SurfaceCurve_use_uv_as_generated_get(PointerRNA *ptr);

/**************** Surface Modifier ****************/

extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_Modifier;

/**************** Texture Mapping ****************/

extern StructRNA RNA_TexMapping;

PointerRNA TexMapping_rna_type_get(PointerRNA *ptr);

int TexMapping_use_max_get(PointerRNA *ptr);

int TexMapping_use_min_get(PointerRNA *ptr);

void TexMapping_location_get(PointerRNA *ptr, float values[3]);

void TexMapping_max_get(PointerRNA *ptr, float values[3]);

void TexMapping_min_get(PointerRNA *ptr, float values[3]);

void TexMapping_rotation_get(PointerRNA *ptr, float values[3]);

void TexMapping_scale_get(PointerRNA *ptr, float values[3]);

/**************** Text ****************/

extern StructRNA RNA_Text;
extern StructRNA RNA_ID;

int Text_current_character_get(PointerRNA *ptr);

PointerRNA Text_current_line_get(PointerRNA *ptr);

int Text_is_dirty_get(PointerRNA *ptr);

void Text_filepath_get(PointerRNA *ptr, char *value);
int Text_filepath_length(PointerRNA *ptr);

void Text_lines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Text_lines_next(CollectionPropertyIterator *iter);
void Text_lines_end(CollectionPropertyIterator *iter);

void Text_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Text_markers_next(CollectionPropertyIterator *iter);
void Text_markers_end(CollectionPropertyIterator *iter);

int Text_is_in_memory_get(PointerRNA *ptr);

int Text_is_modified_get(PointerRNA *ptr);

int Text_use_module_get(PointerRNA *ptr);

int Text_select_end_character_get(PointerRNA *ptr);

PointerRNA Text_select_end_line_get(PointerRNA *ptr);

int Text_use_tabs_as_spaces_get(PointerRNA *ptr);

/**************** Text Box ****************/

extern StructRNA RNA_TextBox;

PointerRNA TextBox_rna_type_get(PointerRNA *ptr);

float TextBox_height_get(PointerRNA *ptr);

float TextBox_width_get(PointerRNA *ptr);

float TextBox_x_get(PointerRNA *ptr);

float TextBox_y_get(PointerRNA *ptr);

/**************** Text Character Format ****************/

extern StructRNA RNA_TextCharacterFormat;

PointerRNA TextCharacterFormat_rna_type_get(PointerRNA *ptr);

int TextCharacterFormat_use_bold_get(PointerRNA *ptr);

int TextCharacterFormat_use_italic_get(PointerRNA *ptr);

int TextCharacterFormat_use_small_caps_get(PointerRNA *ptr);

int TextCharacterFormat_use_underline_get(PointerRNA *ptr);

/**************** Text Curve ****************/

extern StructRNA RNA_TextCurve;
extern StructRNA RNA_Curve;
extern StructRNA RNA_ID;

#define TextCurve_body_MAX 8192

void TextCurve_body_get(PointerRNA *ptr, char *value);
int TextCurve_body_length(PointerRNA *ptr);

void TextCurve_body_format_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void TextCurve_body_format_next(CollectionPropertyIterator *iter);
void TextCurve_body_format_end(CollectionPropertyIterator *iter);

float TextCurve_space_line_get(PointerRNA *ptr);

PointerRNA TextCurve_edit_format_get(PointerRNA *ptr);

int TextCurve_use_fast_edit_get(PointerRNA *ptr);

PointerRNA TextCurve_font_get(PointerRNA *ptr);

PointerRNA TextCurve_font_bold_get(PointerRNA *ptr);

PointerRNA TextCurve_font_italic_get(PointerRNA *ptr);

PointerRNA TextCurve_font_bold_italic_get(PointerRNA *ptr);

float TextCurve_size_get(PointerRNA *ptr);

float TextCurve_space_character_get(PointerRNA *ptr);

#define TextCurve_family_MAX 22

void TextCurve_family_get(PointerRNA *ptr, char *value);
int TextCurve_family_length(PointerRNA *ptr);

float TextCurve_shear_get(PointerRNA *ptr);

float TextCurve_small_caps_scale_get(PointerRNA *ptr);

float TextCurve_space_word_get(PointerRNA *ptr);

enum {
	TextCurve_align_LEFT = 0,
	TextCurve_align_CENTER = 1,
	TextCurve_align_RIGHT = 2,
	TextCurve_align_JUSTIFY = 3,
	TextCurve_align_FLUSH = 4,
};

int TextCurve_align_get(PointerRNA *ptr);

PointerRNA TextCurve_follow_curve_get(PointerRNA *ptr);

void TextCurve_text_boxes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void TextCurve_text_boxes_next(CollectionPropertyIterator *iter);
void TextCurve_text_boxes_end(CollectionPropertyIterator *iter);

int TextCurve_active_textbox_get(PointerRNA *ptr);

float TextCurve_underline_position_get(PointerRNA *ptr);

float TextCurve_underline_height_get(PointerRNA *ptr);

int TextCurve_use_uv_as_generated_get(PointerRNA *ptr);

float TextCurve_offset_x_get(PointerRNA *ptr);

float TextCurve_offset_y_get(PointerRNA *ptr);

/**************** Text Line ****************/

extern StructRNA RNA_TextLine;

PointerRNA TextLine_rna_type_get(PointerRNA *ptr);

void TextLine_body_get(PointerRNA *ptr, char *value);
int TextLine_body_length(PointerRNA *ptr);

/**************** Text Marker ****************/

extern StructRNA RNA_TextMarker;

PointerRNA TextMarker_rna_type_get(PointerRNA *ptr);

void TextMarker_color_get(PointerRNA *ptr, float values[4]);

int TextMarker_use_edit_all_get(PointerRNA *ptr);

int TextMarker_character_index_end_get(PointerRNA *ptr);

int TextMarker_group_get(PointerRNA *ptr);

int TextMarker_line_get(PointerRNA *ptr);

int TextMarker_character_index_start_get(PointerRNA *ptr);

int TextMarker_is_temporary_get(PointerRNA *ptr);

/**************** Texture ****************/

extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

PointerRNA Texture_animation_data_get(PointerRNA *ptr);

float Texture_intensity_get(PointerRNA *ptr);

PointerRNA Texture_color_ramp_get(PointerRNA *ptr);

float Texture_contrast_get(PointerRNA *ptr);

float Texture_factor_blue_get(PointerRNA *ptr);

float Texture_factor_green_get(PointerRNA *ptr);

float Texture_factor_red_get(PointerRNA *ptr);

PointerRNA Texture_node_tree_get(PointerRNA *ptr);

float Texture_saturation_get(PointerRNA *ptr);

int Texture_use_preview_alpha_get(PointerRNA *ptr);

enum {
	Texture_type_NONE = 0,
	Texture_type_BLEND = 5,
	Texture_type_CLOUDS = 1,
	Texture_type_DISTORTED_NOISE = 13,
	Texture_type_ENVIRONMENT_MAP = 10,
	Texture_type_IMAGE = 8,
	Texture_type_MAGIC = 4,
	Texture_type_MARBLE = 3,
	Texture_type_MUSGRAVE = 11,
	Texture_type_NOISE = 7,
	Texture_type_POINT_DENSITY = 14,
	Texture_type_STUCCI = 6,
	Texture_type_VORONOI = 12,
	Texture_type_VOXEL_DATA = 15,
	Texture_type_WOOD = 2,
};

int Texture_type_get(PointerRNA *ptr);

int Texture_use_color_ramp_get(PointerRNA *ptr);

int Texture_use_nodes_get(PointerRNA *ptr);

/**************** Texture Node ****************/

extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

enum {
	TextureNode_type_OUTPUT = 401,
	TextureNode_type_CHECKER = 402,
	TextureNode_type_TEXTURE = 403,
	TextureNode_type_BRICKS = 404,
	TextureNode_type_MATH = 405,
	TextureNode_type_MIX_RGB = 406,
	TextureNode_type_RGBTOBW = 407,
	TextureNode_type_VALTORGB = 408,
	TextureNode_type_IMAGE = 409,
	TextureNode_type_CURVE_RGB = 410,
	TextureNode_type_INVERT = 411,
	TextureNode_type_HUE_SAT = 412,
	TextureNode_type_CURVE_TIME = 413,
	TextureNode_type_ROTATE = 414,
	TextureNode_type_VIEWER = 415,
	TextureNode_type_TRANSLATE = 416,
	TextureNode_type_COORD = 417,
	TextureNode_type_DISTANCE = 418,
	TextureNode_type_COMPOSE = 419,
	TextureNode_type_DECOMPOSE = 420,
	TextureNode_type_VALTONOR = 421,
	TextureNode_type_SCALE = 422,
	TextureNode_type_SCRIPT = 123,
	TextureNode_type_GROUP = 2,
};

int TextureNode_type_get(PointerRNA *ptr);

/**************** Bricks ****************/

extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

float TextureNodeBricks_offset_get(PointerRNA *ptr);

int TextureNodeBricks_offset_frequency_get(PointerRNA *ptr);

float TextureNodeBricks_squash_get(PointerRNA *ptr);

int TextureNodeBricks_squash_frequency_get(PointerRNA *ptr);

/**************** Checker ****************/

extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Compose ****************/

extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Coordinates ****************/

extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** RGB Curve ****************/

extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

PointerRNA TextureNodeCurveRGB_mapping_get(PointerRNA *ptr);

/**************** Curve Time ****************/

extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

PointerRNA TextureNodeCurveTime_curve_get(PointerRNA *ptr);

int TextureNodeCurveTime_frame_end_get(PointerRNA *ptr);

int TextureNodeCurveTime_frame_start_get(PointerRNA *ptr);

/**************** Decompose ****************/

extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Distance ****************/

extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Hue/Saturation ****************/

extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Image ****************/

extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

PointerRNA TextureNodeImage_image_get(PointerRNA *ptr);

/**************** Invert ****************/

extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Math ****************/

extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

enum {
	TextureNodeMath_operation_ADD = 0,
	TextureNodeMath_operation_SUBTRACT = 1,
	TextureNodeMath_operation_MULTIPLY = 2,
	TextureNodeMath_operation_DIVIDE = 3,
	TextureNodeMath_operation_SINE = 4,
	TextureNodeMath_operation_COSINE = 5,
	TextureNodeMath_operation_TANGENT = 6,
	TextureNodeMath_operation_ARCSINE = 7,
	TextureNodeMath_operation_ARCCOSINE = 8,
	TextureNodeMath_operation_ARCTANGENT = 9,
	TextureNodeMath_operation_POWER = 10,
	TextureNodeMath_operation_LOGARITHM = 11,
	TextureNodeMath_operation_MINIMUM = 12,
	TextureNodeMath_operation_MAXIMUM = 13,
	TextureNodeMath_operation_ROUND = 14,
	TextureNodeMath_operation_LESS_THAN = 15,
	TextureNodeMath_operation_GREATER_THAN = 16,
};

int TextureNodeMath_operation_get(PointerRNA *ptr);

/**************** Mix RGB ****************/

extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

int TextureNodeMixRGB_use_alpha_get(PointerRNA *ptr);

enum {
	TextureNodeMixRGB_blend_type_MIX = 0,
	TextureNodeMixRGB_blend_type_ADD = 1,
	TextureNodeMixRGB_blend_type_SUBTRACT = 3,
	TextureNodeMixRGB_blend_type_MULTIPLY = 2,
	TextureNodeMixRGB_blend_type_SCREEN = 4,
	TextureNodeMixRGB_blend_type_OVERLAY = 9,
	TextureNodeMixRGB_blend_type_DIVIDE = 5,
	TextureNodeMixRGB_blend_type_DIFFERENCE = 6,
	TextureNodeMixRGB_blend_type_DARKEN = 7,
	TextureNodeMixRGB_blend_type_LIGHTEN = 8,
	TextureNodeMixRGB_blend_type_DODGE = 10,
	TextureNodeMixRGB_blend_type_BURN = 11,
	TextureNodeMixRGB_blend_type_COLOR = 15,
	TextureNodeMixRGB_blend_type_VALUE = 14,
	TextureNodeMixRGB_blend_type_SATURATION = 13,
	TextureNodeMixRGB_blend_type_HUE = 12,
	TextureNodeMixRGB_blend_type_SOFT_LIGHT = 16,
	TextureNodeMixRGB_blend_type_LINEAR_LIGHT = 17,
};

int TextureNodeMixRGB_blend_type_get(PointerRNA *ptr);

/**************** Output ****************/

extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

#define TextureNodeOutput_filepath_MAX 32

void TextureNodeOutput_filepath_get(PointerRNA *ptr, char *value);
int TextureNodeOutput_filepath_length(PointerRNA *ptr);

/**************** RGB To BW ****************/

extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Rotate ****************/

extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Scale ****************/

extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Texture ****************/

extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

int TextureNodeTexture_node_output_get(PointerRNA *ptr);

PointerRNA TextureNodeTexture_texture_get(PointerRNA *ptr);

/**************** Translate ****************/

extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Texture Node Tree ****************/

extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_ID;

void TextureNodeTree_nodes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void TextureNodeTree_nodes_next(CollectionPropertyIterator *iter);
void TextureNodeTree_nodes_end(CollectionPropertyIterator *iter);

/**************** Val to Nor ****************/

extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Val To RGB ****************/

extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

PointerRNA TextureNodeValToRGB_color_ramp_get(PointerRNA *ptr);

/**************** Viewer ****************/

extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_Node;

/**************** Texture Nodes ****************/

extern StructRNA RNA_TextureNodes;

PointerRNA TextureNodes_rna_type_get(PointerRNA *ptr);

/**************** Texture Slot ****************/

extern StructRNA RNA_TextureSlot;

PointerRNA TextureSlot_rna_type_get(PointerRNA *ptr);

void TextureSlot_name_get(PointerRNA *ptr, char *value);
int TextureSlot_name_length(PointerRNA *ptr);

enum {
	TextureSlot_blend_type_MIX = 0,
	TextureSlot_blend_type_ADD = 2,
	TextureSlot_blend_type_SUBTRACT = 3,
	TextureSlot_blend_type_MULTIPLY = 1,
	TextureSlot_blend_type_SCREEN = 8,
	TextureSlot_blend_type_OVERLAY = 9,
	TextureSlot_blend_type_DIFFERENCE = 6,
	TextureSlot_blend_type_DIVIDE = 4,
	TextureSlot_blend_type_DARKEN = 5,
	TextureSlot_blend_type_LIGHTEN = 7,
	TextureSlot_blend_type_HUE = 10,
	TextureSlot_blend_type_SATURATION = 11,
	TextureSlot_blend_type_VALUE = 12,
	TextureSlot_blend_type_COLOR = 13,
	TextureSlot_blend_type_SOFT_LIGHT = 15,
	TextureSlot_blend_type_LINEAR_LIGHT = 16,
};

int TextureSlot_blend_type_get(PointerRNA *ptr);

void TextureSlot_color_get(PointerRNA *ptr, float values[3]);

float TextureSlot_default_value_get(PointerRNA *ptr);

int TextureSlot_invert_get(PointerRNA *ptr);

void TextureSlot_offset_get(PointerRNA *ptr, float values[3]);

enum {
	TextureSlot_output_node_DUMMY = 0,
};

int TextureSlot_output_node_get(PointerRNA *ptr);

int TextureSlot_use_rgb_to_intensity_get(PointerRNA *ptr);

void TextureSlot_scale_get(PointerRNA *ptr, float values[3]);

int TextureSlot_use_stencil_get(PointerRNA *ptr);

PointerRNA TextureSlot_texture_get(PointerRNA *ptr);

/**************** Theme ****************/

extern StructRNA RNA_Theme;

PointerRNA Theme_rna_type_get(PointerRNA *ptr);

#define Theme_name_MAX 32

void Theme_name_get(PointerRNA *ptr, char *value);
int Theme_name_length(PointerRNA *ptr);

PointerRNA Theme_view_3d_get(PointerRNA *ptr);

enum {
	Theme_theme_area_USER_INTERFACE = 0,
	Theme_theme_area_COLOR_SETS = 18,
	Theme_theme_area_VIEW_3D = 1,
	Theme_theme_area_TIMELINE = 2,
	Theme_theme_area_GRAPH_EDITOR = 3,
	Theme_theme_area_DOPESHEET_EDITOR = 4,
	Theme_theme_area_NLA_EDITOR = 5,
	Theme_theme_area_IMAGE_EDITOR = 6,
	Theme_theme_area_SEQUENCE_EDITOR = 7,
	Theme_theme_area_TEXT_EDITOR = 8,
	Theme_theme_area_NODE_EDITOR = 9,
	Theme_theme_area_LOGIC_EDITOR = 10,
	Theme_theme_area_PROPERTIES = 11,
	Theme_theme_area_OUTLINER = 12,
	Theme_theme_area_USER_PREFERENCES = 14,
	Theme_theme_area_INFO = 15,
	Theme_theme_area_FILE_BROWSER = 16,
	Theme_theme_area_CONSOLE = 17,
};

int Theme_theme_area_get(PointerRNA *ptr);

void Theme_bone_color_sets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void Theme_bone_color_sets_next(CollectionPropertyIterator *iter);
void Theme_bone_color_sets_end(CollectionPropertyIterator *iter);

PointerRNA Theme_console_get(PointerRNA *ptr);

PointerRNA Theme_dopesheet_editor_get(PointerRNA *ptr);

PointerRNA Theme_file_browser_get(PointerRNA *ptr);

PointerRNA Theme_graph_editor_get(PointerRNA *ptr);

PointerRNA Theme_image_editor_get(PointerRNA *ptr);

PointerRNA Theme_info_get(PointerRNA *ptr);

PointerRNA Theme_logic_editor_get(PointerRNA *ptr);

PointerRNA Theme_nla_editor_get(PointerRNA *ptr);

PointerRNA Theme_node_editor_get(PointerRNA *ptr);

PointerRNA Theme_outliner_get(PointerRNA *ptr);

PointerRNA Theme_properties_get(PointerRNA *ptr);

PointerRNA Theme_sequence_editor_get(PointerRNA *ptr);

PointerRNA Theme_text_editor_get(PointerRNA *ptr);

PointerRNA Theme_timeline_get(PointerRNA *ptr);

PointerRNA Theme_user_interface_get(PointerRNA *ptr);

PointerRNA Theme_user_preferences_get(PointerRNA *ptr);

/**************** Theme Audio Window ****************/

extern StructRNA RNA_ThemeAudioWindow;

PointerRNA ThemeAudioWindow_rna_type_get(PointerRNA *ptr);

void ThemeAudioWindow_frame_current_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_grid_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_header_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_button_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_text_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_title_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_back_get(PointerRNA *ptr, float values[3]);

void ThemeAudioWindow_window_sliders_get(PointerRNA *ptr, float values[3]);

/**************** Theme Bone Color Set ****************/

extern StructRNA RNA_ThemeBoneColorSet;

PointerRNA ThemeBoneColorSet_rna_type_get(PointerRNA *ptr);

void ThemeBoneColorSet_active_get(PointerRNA *ptr, float values[3]);

int ThemeBoneColorSet_show_colored_constraints_get(PointerRNA *ptr);

void ThemeBoneColorSet_normal_get(PointerRNA *ptr, float values[3]);

void ThemeBoneColorSet_select_get(PointerRNA *ptr, float values[3]);

/**************** Theme Console ****************/

extern StructRNA RNA_ThemeConsole;

PointerRNA ThemeConsole_rna_type_get(PointerRNA *ptr);

void ThemeConsole_cursor_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_header_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_line_error_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_line_info_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_line_input_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_line_output_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_button_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_text_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_title_get(PointerRNA *ptr, float values[3]);

void ThemeConsole_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme DopeSheet ****************/

extern StructRNA RNA_ThemeDopeSheet;

PointerRNA ThemeDopeSheet_rna_type_get(PointerRNA *ptr);

void ThemeDopeSheet_active_channels_group_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_channel_group_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_channels_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_channels_selected_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_frame_current_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_dopesheet_channel_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_dopesheet_subchannel_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_grid_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_header_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_long_key_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_long_key_selected_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_button_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_list_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_list_text_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_list_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_list_title_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_text_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_title_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_value_sliders_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_view_sliders_get(PointerRNA *ptr, float values[3]);

void ThemeDopeSheet_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme File Browser ****************/

extern StructRNA RNA_ThemeFileBrowser;

PointerRNA ThemeFileBrowser_rna_type_get(PointerRNA *ptr);

void ThemeFileBrowser_active_file_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_active_file_text_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_header_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_button_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_scroll_handle_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_scrollbar_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_selected_file_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_list_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_list_text_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_list_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_list_title_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_text_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_tiles_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_title_get(PointerRNA *ptr, float values[3]);

void ThemeFileBrowser_back_get(PointerRNA *ptr, float values[3]);

/**************** Font Style ****************/

extern StructRNA RNA_ThemeFontStyle;

PointerRNA ThemeFontStyle_rna_type_get(PointerRNA *ptr);

enum {
	ThemeFontStyle_font_kerning_style_UNFITTED = 0,
	ThemeFontStyle_font_kerning_style_DEFAULT = 1,
};

int ThemeFontStyle_font_kerning_style_get(PointerRNA *ptr);

int ThemeFontStyle_points_get(PointerRNA *ptr);

float ThemeFontStyle_shadowalpha_get(PointerRNA *ptr);

float ThemeFontStyle_shadowcolor_get(PointerRNA *ptr);

int ThemeFontStyle_shadow_get(PointerRNA *ptr);

int ThemeFontStyle_shadow_offset_x_get(PointerRNA *ptr);

int ThemeFontStyle_shadow_offset_y_get(PointerRNA *ptr);

/**************** Theme Graph Editor ****************/

extern StructRNA RNA_ThemeGraphEditor;

PointerRNA ThemeGraphEditor_rna_type_get(PointerRNA *ptr);

void ThemeGraphEditor_active_channels_group_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_align_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_sel_align_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_auto_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_sel_auto_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_channel_group_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_channels_region_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_frame_current_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_dopesheet_channel_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_dopesheet_subchannel_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_free_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_sel_free_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_grid_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_vertex_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_vertex_select_get(PointerRNA *ptr, float values[3]);

int ThemeGraphEditor_handle_vertex_size_get(PointerRNA *ptr);

void ThemeGraphEditor_header_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_lastsel_point_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_panel_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_button_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_list_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_list_text_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_list_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_list_title_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_text_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_title_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_vect_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_handle_sel_vect_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_vertex_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_vertex_select_get(PointerRNA *ptr, float values[3]);

int ThemeGraphEditor_vertex_size_get(PointerRNA *ptr);

void ThemeGraphEditor_back_get(PointerRNA *ptr, float values[3]);

void ThemeGraphEditor_window_sliders_get(PointerRNA *ptr, float values[3]);

/**************** Theme Image Editor ****************/

extern StructRNA RNA_ThemeImageEditor;

PointerRNA ThemeImageEditor_rna_type_get(PointerRNA *ptr);

void ThemeImageEditor_editmesh_active_get(PointerRNA *ptr, float values[4]);

void ThemeImageEditor_face_get(PointerRNA *ptr, float values[4]);

void ThemeImageEditor_face_dot_get(PointerRNA *ptr, float values[3]);

int ThemeImageEditor_facedot_size_get(PointerRNA *ptr);

void ThemeImageEditor_face_select_get(PointerRNA *ptr, float values[4]);

void ThemeImageEditor_header_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_button_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_scope_back_get(PointerRNA *ptr, float values[4]);

void ThemeImageEditor_text_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_title_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_vertex_get(PointerRNA *ptr, float values[3]);

void ThemeImageEditor_vertex_select_get(PointerRNA *ptr, float values[3]);

int ThemeImageEditor_vertex_size_get(PointerRNA *ptr);

void ThemeImageEditor_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme Info ****************/

extern StructRNA RNA_ThemeInfo;

PointerRNA ThemeInfo_rna_type_get(PointerRNA *ptr);

void ThemeInfo_header_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_button_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_text_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_title_get(PointerRNA *ptr, float values[3]);

void ThemeInfo_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme Logic Editor ****************/

extern StructRNA RNA_ThemeLogicEditor;

PointerRNA ThemeLogicEditor_rna_type_get(PointerRNA *ptr);

void ThemeLogicEditor_header_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_panel_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_button_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_text_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_title_get(PointerRNA *ptr, float values[3]);

void ThemeLogicEditor_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme NLA Editor ****************/

extern StructRNA RNA_ThemeNLAEditor;

PointerRNA ThemeNLAEditor_rna_type_get(PointerRNA *ptr);

void ThemeNLAEditor_bars_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_bars_selected_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_frame_current_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_grid_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_header_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_button_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_list_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_list_text_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_list_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_list_title_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_strips_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_strips_selected_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_text_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_title_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_view_sliders_get(PointerRNA *ptr, float values[3]);

void ThemeNLAEditor_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme Node Editor ****************/

extern StructRNA RNA_ThemeNodeEditor;

PointerRNA ThemeNodeEditor_rna_type_get(PointerRNA *ptr);

void ThemeNodeEditor_converter_node_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_group_node_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_header_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_in_out_node_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_node_backdrop_get(PointerRNA *ptr, float values[4]);

void ThemeNodeEditor_operator_node_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_button_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_selected_text_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_list_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_list_text_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_list_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_list_title_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_text_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_title_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_back_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_wire_select_get(PointerRNA *ptr, float values[3]);

void ThemeNodeEditor_wire_get(PointerRNA *ptr, float values[3]);

/**************** Theme Outliner ****************/

extern StructRNA RNA_ThemeOutliner;

PointerRNA ThemeOutliner_rna_type_get(PointerRNA *ptr);

void ThemeOutliner_header_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_button_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_text_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_title_get(PointerRNA *ptr, float values[3]);

void ThemeOutliner_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme Properties ****************/

extern StructRNA RNA_ThemeProperties;

PointerRNA ThemeProperties_rna_type_get(PointerRNA *ptr);

void ThemeProperties_header_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_panel_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_button_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_text_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_title_get(PointerRNA *ptr, float values[3]);

void ThemeProperties_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme Sequence Editor ****************/

extern StructRNA RNA_ThemeSequenceEditor;

PointerRNA ThemeSequenceEditor_rna_type_get(PointerRNA *ptr);

void ThemeSequenceEditor_audio_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_frame_current_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_draw_action_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_effect_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_grid_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_header_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_image_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_keyframe_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_meta_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_movie_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_plugin_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_button_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_scene_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_text_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_title_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_transition_strip_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_back_get(PointerRNA *ptr, float values[3]);

void ThemeSequenceEditor_window_sliders_get(PointerRNA *ptr, float values[3]);

/**************** Style ****************/

extern StructRNA RNA_ThemeStyle;

PointerRNA ThemeStyle_rna_type_get(PointerRNA *ptr);

PointerRNA ThemeStyle_group_label_get(PointerRNA *ptr);

PointerRNA ThemeStyle_panel_title_get(PointerRNA *ptr);

float ThemeStyle_panelzoom_get(PointerRNA *ptr);

PointerRNA ThemeStyle_widget_get(PointerRNA *ptr);

PointerRNA ThemeStyle_widget_label_get(PointerRNA *ptr);

/**************** Theme Text Editor ****************/

extern StructRNA RNA_ThemeTextEditor;

PointerRNA ThemeTextEditor_rna_type_get(PointerRNA *ptr);

void ThemeTextEditor_cursor_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_header_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_line_numbers_background_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_button_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_scroll_bar_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_selected_text_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_syntax_builtin_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_syntax_comment_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_syntax_numbers_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_syntax_special_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_syntax_string_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_text_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_title_get(PointerRNA *ptr, float values[3]);

void ThemeTextEditor_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme Timeline ****************/

extern StructRNA RNA_ThemeTimeline;

PointerRNA ThemeTimeline_rna_type_get(PointerRNA *ptr);

void ThemeTimeline_frame_current_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_grid_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_header_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_button_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_text_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_title_get(PointerRNA *ptr, float values[3]);

void ThemeTimeline_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme User Interface ****************/

extern StructRNA RNA_ThemeUserInterface;

PointerRNA ThemeUserInterface_rna_type_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_box_get(PointerRNA *ptr);

#define ThemeUserInterface_icon_file_MAX 80

void ThemeUserInterface_icon_file_get(PointerRNA *ptr, char *value);
int ThemeUserInterface_icon_file_length(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_list_item_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_menu_back_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_menu_item_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_menu_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_num_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_option_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_progress_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_pulldown_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_radio_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_regular_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_scroll_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_numslider_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_state_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_text_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_toggle_get(PointerRNA *ptr);

PointerRNA ThemeUserInterface_wcol_tool_get(PointerRNA *ptr);

/**************** Theme User Preferences ****************/

extern StructRNA RNA_ThemeUserPreferences;

PointerRNA ThemeUserPreferences_rna_type_get(PointerRNA *ptr);

void ThemeUserPreferences_header_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_button_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_text_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_title_get(PointerRNA *ptr, float values[3]);

void ThemeUserPreferences_back_get(PointerRNA *ptr, float values[3]);

/**************** Theme 3D View ****************/

extern StructRNA RNA_ThemeView3D;

PointerRNA ThemeView3D_rna_type_get(PointerRNA *ptr);

void ThemeView3D_object_active_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_editmesh_active_get(PointerRNA *ptr, float values[4]);

void ThemeView3D_act_spline_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_handle_align_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_handle_sel_align_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_handle_auto_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_handle_sel_auto_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_bone_pose_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_bone_solid_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_frame_current_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_edge_crease_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_extra_edge_len_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_edge_seam_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_edge_select_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_edge_sharp_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_edge_facesel_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_face_get(PointerRNA *ptr, float values[4]);

void ThemeView3D_extra_face_angle_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_extra_face_area_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_face_dot_get(PointerRNA *ptr, float values[3]);

int ThemeView3D_facedot_size_get(PointerRNA *ptr);

void ThemeView3D_normal_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_face_select_get(PointerRNA *ptr, float values[4]);

void ThemeView3D_handle_free_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_handle_sel_free_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_grid_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_header_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_header_text_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_header_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_lamp_get(PointerRNA *ptr, float values[4]);

void ThemeView3D_lastsel_point_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_nurb_uline_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_nurb_vline_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_nurb_sel_uline_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_nurb_sel_vline_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_object_grouped_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_object_grouped_active_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_object_selected_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_panel_get(PointerRNA *ptr, float values[4]);

void ThemeView3D_button_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_button_text_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_button_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_button_title_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_text_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_text_hi_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_title_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_transform_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_handle_vect_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_handle_sel_vect_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_vertex_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_vertex_normal_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_vertex_select_get(PointerRNA *ptr, float values[3]);

int ThemeView3D_vertex_size_get(PointerRNA *ptr);

void ThemeView3D_back_get(PointerRNA *ptr, float values[3]);

void ThemeView3D_wire_get(PointerRNA *ptr, float values[3]);

/**************** Theme Widget Color Set ****************/

extern StructRNA RNA_ThemeWidgetColors;

PointerRNA ThemeWidgetColors_rna_type_get(PointerRNA *ptr);

void ThemeWidgetColors_inner_get(PointerRNA *ptr, float values[4]);

void ThemeWidgetColors_inner_sel_get(PointerRNA *ptr, float values[4]);

void ThemeWidgetColors_item_get(PointerRNA *ptr, float values[4]);

void ThemeWidgetColors_outline_get(PointerRNA *ptr, float values[3]);

int ThemeWidgetColors_shadedown_get(PointerRNA *ptr);

int ThemeWidgetColors_shadetop_get(PointerRNA *ptr);

int ThemeWidgetColors_show_shaded_get(PointerRNA *ptr);

void ThemeWidgetColors_text_get(PointerRNA *ptr, float values[3]);

void ThemeWidgetColors_text_sel_get(PointerRNA *ptr, float values[3]);

/**************** Theme Widget State Color ****************/

extern StructRNA RNA_ThemeWidgetStateColors;

PointerRNA ThemeWidgetStateColors_rna_type_get(PointerRNA *ptr);

void ThemeWidgetStateColors_inner_anim_get(PointerRNA *ptr, float values[3]);

void ThemeWidgetStateColors_inner_anim_sel_get(PointerRNA *ptr, float values[3]);

float ThemeWidgetStateColors_blend_get(PointerRNA *ptr);

void ThemeWidgetStateColors_inner_driven_get(PointerRNA *ptr, float values[3]);

void ThemeWidgetStateColors_inner_driven_sel_get(PointerRNA *ptr, float values[3]);

void ThemeWidgetStateColors_inner_key_get(PointerRNA *ptr, float values[3]);

void ThemeWidgetStateColors_inner_key_sel_get(PointerRNA *ptr, float values[3]);

/**************** Marker ****************/

extern StructRNA RNA_TimelineMarker;

PointerRNA TimelineMarker_rna_type_get(PointerRNA *ptr);

#define TimelineMarker_name_MAX 64

void TimelineMarker_name_get(PointerRNA *ptr, char *value);
int TimelineMarker_name_length(PointerRNA *ptr);

PointerRNA TimelineMarker_camera_get(PointerRNA *ptr);

int TimelineMarker_frame_get(PointerRNA *ptr);

int TimelineMarker_select_get(PointerRNA *ptr);

/**************** Timeline Markers ****************/

extern StructRNA RNA_TimelineMarkers;

PointerRNA TimelineMarkers_rna_type_get(PointerRNA *ptr);

/**************** Tool Settings ****************/

extern StructRNA RNA_ToolSettings;

PointerRNA ToolSettings_rna_type_get(PointerRNA *ptr);

int ToolSettings_use_keyframe_insert_keyingset_get(PointerRNA *ptr);

int ToolSettings_use_keyframe_insert_auto_get(PointerRNA *ptr);

enum {
	ToolSettings_auto_keying_mode_ADD_REPLACE_KEYS = 3,
	ToolSettings_auto_keying_mode_REPLACE_KEYS = 5,
};

int ToolSettings_auto_keying_mode_get(PointerRNA *ptr);

int ToolSettings_use_mesh_automerge_get(PointerRNA *ptr);

int ToolSettings_use_etch_autoname_get(PointerRNA *ptr);

enum {
	ToolSettings_edge_path_mode_SELECT = 0,
	ToolSettings_edge_path_mode_SEAM = 1,
	ToolSettings_edge_path_mode_SHARP = 2,
	ToolSettings_edge_path_mode_CREASE = 3,
	ToolSettings_edge_path_mode_BEVEL = 4,
};

int ToolSettings_edge_path_mode_get(PointerRNA *ptr);

PointerRNA ToolSettings_image_paint_get(PointerRNA *ptr);

int ToolSettings_use_record_with_nla_get(PointerRNA *ptr);

float ToolSettings_etch_length_limit_get(PointerRNA *ptr);

float ToolSettings_etch_adaptive_limit_get(PointerRNA *ptr);

void ToolSettings_mesh_select_mode_get(PointerRNA *ptr, int values[3]);

float ToolSettings_normal_size_get(PointerRNA *ptr);

#define ToolSettings_etch_number_MAX 8

void ToolSettings_etch_number_get(PointerRNA *ptr, char *value);
int ToolSettings_etch_number_length(PointerRNA *ptr);

int ToolSettings_use_etch_overdraw_get(PointerRNA *ptr);

PointerRNA ToolSettings_particle_edit_get(PointerRNA *ptr);

int ToolSettings_use_snap_project_get(PointerRNA *ptr);

enum {
	ToolSettings_proportional_edit_DISABLED = 0,
	ToolSettings_proportional_edit_ENABLED = 1,
	ToolSettings_proportional_edit_CONNECTED = 2,
};

int ToolSettings_proportional_edit_get(PointerRNA *ptr);

enum {
	ToolSettings_proportional_edit_falloff_SMOOTH = 0,
	ToolSettings_proportional_edit_falloff_SPHERE = 1,
	ToolSettings_proportional_edit_falloff_ROOT = 2,
	ToolSettings_proportional_edit_falloff_SHARP = 3,
	ToolSettings_proportional_edit_falloff_LINEAR = 4,
	ToolSettings_proportional_edit_falloff_CONSTANT = 5,
	ToolSettings_proportional_edit_falloff_RANDOM = 6,
};

int ToolSettings_proportional_edit_falloff_get(PointerRNA *ptr);

int ToolSettings_use_proportional_edit_objects_get(PointerRNA *ptr);

float ToolSettings_proportional_size_get(PointerRNA *ptr);

int ToolSettings_use_etch_quick_get(PointerRNA *ptr);

enum {
	ToolSettings_etch_roll_mode_NONE = 0,
	ToolSettings_etch_roll_mode_VIEW = 1,
	ToolSettings_etch_roll_mode_JOINT = 2,
};

int ToolSettings_etch_roll_mode_get(PointerRNA *ptr);

PointerRNA ToolSettings_sculpt_get(PointerRNA *ptr);

int ToolSettings_sculpt_paint_use_unified_size_get(PointerRNA *ptr);

int ToolSettings_sculpt_paint_use_unified_strength_get(PointerRNA *ptr);

#define ToolSettings_etch_side_MAX 8

void ToolSettings_etch_side_get(PointerRNA *ptr, char *value);
int ToolSettings_etch_side_length(PointerRNA *ptr);

int ToolSettings_use_snap_get(PointerRNA *ptr);

int ToolSettings_use_snap_align_rotation_get(PointerRNA *ptr);

enum {
	ToolSettings_snap_element_INCREMENT = 0,
	ToolSettings_snap_element_VERTEX = 1,
	ToolSettings_snap_element_EDGE = 2,
	ToolSettings_snap_element_FACE = 3,
	ToolSettings_snap_element_VOLUME = 4,
};

int ToolSettings_snap_element_get(PointerRNA *ptr);

int ToolSettings_use_snap_peel_object_get(PointerRNA *ptr);

enum {
	ToolSettings_snap_target_CLOSEST = 0,
	ToolSettings_snap_target_CENTER = 1,
	ToolSettings_snap_target_MEDIAN = 2,
	ToolSettings_snap_target_ACTIVE = 3,
};

int ToolSettings_snap_target_get(PointerRNA *ptr);

enum {
	ToolSettings_etch_convert_mode_FIXED = 0,
	ToolSettings_etch_convert_mode_LENGTH = 1,
	ToolSettings_etch_convert_mode_ADAPTIVE = 2,
	ToolSettings_etch_convert_mode_RETARGET = 3,
};

int ToolSettings_etch_convert_mode_get(PointerRNA *ptr);

int ToolSettings_etch_subdivision_number_get(PointerRNA *ptr);

PointerRNA ToolSettings_etch_template_get(PointerRNA *ptr);

int ToolSettings_show_uv_local_view_get(PointerRNA *ptr);

enum {
	ToolSettings_uv_select_mode_VERTEX = 1,
	ToolSettings_uv_select_mode_EDGE = 2,
	ToolSettings_uv_select_mode_FACE = 4,
	ToolSettings_uv_select_mode_ISLAND = 8,
};

int ToolSettings_uv_select_mode_get(PointerRNA *ptr);

int ToolSettings_use_uv_select_sync_get(PointerRNA *ptr);

int ToolSettings_use_bone_sketching_get(PointerRNA *ptr);

int ToolSettings_use_grease_pencil_sessions_get(PointerRNA *ptr);

float ToolSettings_vertex_group_weight_get(PointerRNA *ptr);

PointerRNA ToolSettings_vertex_paint_get(PointerRNA *ptr);

int ToolSettings_use_auto_normalize_get(PointerRNA *ptr);

PointerRNA ToolSettings_weight_paint_get(PointerRNA *ptr);

/**************** Touch Sensor ****************/

extern StructRNA RNA_TouchSensor;
extern StructRNA RNA_Sensor;

PointerRNA TouchSensor_material_get(PointerRNA *ptr);

/**************** Track To Constraint ****************/

extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_Constraint;

float TrackToConstraint_head_tail_get(PointerRNA *ptr);

#define TrackToConstraint_subtarget_MAX 32

void TrackToConstraint_subtarget_get(PointerRNA *ptr, char *value);
int TrackToConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA TrackToConstraint_target_get(PointerRNA *ptr);

int TrackToConstraint_use_target_z_get(PointerRNA *ptr);

enum {
	TrackToConstraint_track_axis_TRACK_X = 0,
	TrackToConstraint_track_axis_TRACK_Y = 1,
	TrackToConstraint_track_axis_TRACK_Z = 2,
	TrackToConstraint_track_axis_TRACK_NEGATIVE_X = 3,
	TrackToConstraint_track_axis_TRACK_NEGATIVE_Y = 4,
	TrackToConstraint_track_axis_TRACK_NEGATIVE_Z = 5,
};

int TrackToConstraint_track_axis_get(PointerRNA *ptr);

enum {
	TrackToConstraint_up_axis_UP_X = 0,
	TrackToConstraint_up_axis_UP_Y = 1,
	TrackToConstraint_up_axis_UP_Z = 2,
};

int TrackToConstraint_up_axis_get(PointerRNA *ptr);

/**************** Transformation Constraint ****************/

extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_Constraint;

int TransformConstraint_use_motion_extrapolate_get(PointerRNA *ptr);

float TransformConstraint_from_max_x_get(PointerRNA *ptr);

float TransformConstraint_from_max_y_get(PointerRNA *ptr);

float TransformConstraint_from_max_z_get(PointerRNA *ptr);

float TransformConstraint_from_min_x_get(PointerRNA *ptr);

float TransformConstraint_from_min_y_get(PointerRNA *ptr);

float TransformConstraint_from_min_z_get(PointerRNA *ptr);

enum {
	TransformConstraint_map_from_LOCATION = 0,
	TransformConstraint_map_from_ROTATION = 1,
	TransformConstraint_map_from_SCALE = 2,
};

int TransformConstraint_map_from_get(PointerRNA *ptr);

enum {
	TransformConstraint_map_to_LOCATION = 0,
	TransformConstraint_map_to_ROTATION = 1,
	TransformConstraint_map_to_SCALE = 2,
};

int TransformConstraint_map_to_get(PointerRNA *ptr);

enum {
	TransformConstraint_map_to_x_from_X = 0,
	TransformConstraint_map_to_x_from_Y = 1,
	TransformConstraint_map_to_x_from_Z = 2,
};

int TransformConstraint_map_to_x_from_get(PointerRNA *ptr);

enum {
	TransformConstraint_map_to_y_from_X = 0,
	TransformConstraint_map_to_y_from_Y = 1,
	TransformConstraint_map_to_y_from_Z = 2,
};

int TransformConstraint_map_to_y_from_get(PointerRNA *ptr);

enum {
	TransformConstraint_map_to_z_from_X = 0,
	TransformConstraint_map_to_z_from_Y = 1,
	TransformConstraint_map_to_z_from_Z = 2,
};

int TransformConstraint_map_to_z_from_get(PointerRNA *ptr);

#define TransformConstraint_subtarget_MAX 32

void TransformConstraint_subtarget_get(PointerRNA *ptr, char *value);
int TransformConstraint_subtarget_length(PointerRNA *ptr);

PointerRNA TransformConstraint_target_get(PointerRNA *ptr);

float TransformConstraint_to_max_x_get(PointerRNA *ptr);

float TransformConstraint_to_max_y_get(PointerRNA *ptr);

float TransformConstraint_to_max_z_get(PointerRNA *ptr);

float TransformConstraint_to_min_x_get(PointerRNA *ptr);

float TransformConstraint_to_min_y_get(PointerRNA *ptr);

float TransformConstraint_to_min_z_get(PointerRNA *ptr);

/**************** TransformOrientation ****************/

extern StructRNA RNA_TransformOrientation;

PointerRNA TransformOrientation_rna_type_get(PointerRNA *ptr);

#define TransformOrientation_name_MAX 36

void TransformOrientation_name_get(PointerRNA *ptr, char *value);
int TransformOrientation_name_length(PointerRNA *ptr);

void TransformOrientation_matrix_get(PointerRNA *ptr, float values[9]);

/**************** Transform Sequence ****************/

extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_Sequence;

enum {
	TransformSequence_interpolation_NONE = 0,
	TransformSequence_interpolation_BILINEAR = 1,
	TransformSequence_interpolation_BICUBIC = 2,
};

int TransformSequence_interpolation_get(PointerRNA *ptr);

float TransformSequence_rotation_start_get(PointerRNA *ptr);

float TransformSequence_scale_start_x_get(PointerRNA *ptr);

float TransformSequence_scale_start_y_get(PointerRNA *ptr);

float TransformSequence_translate_start_x_get(PointerRNA *ptr);

float TransformSequence_translate_start_y_get(PointerRNA *ptr);

enum {
	TransformSequence_translation_unit_PIXELS = 0,
	TransformSequence_translation_unit_PERCENT = 1,
};

int TransformSequence_translation_unit_get(PointerRNA *ptr);

int TransformSequence_use_uniform_scale_get(PointerRNA *ptr);

/**************** UI Layout ****************/

extern StructRNA RNA_UILayout;

PointerRNA UILayout_rna_type_get(PointerRNA *ptr);

int UILayout_enabled_get(PointerRNA *ptr);

float UILayout_scale_x_get(PointerRNA *ptr);

float UILayout_scale_y_get(PointerRNA *ptr);

int UILayout_active_get(PointerRNA *ptr);

int UILayout_alert_get(PointerRNA *ptr);

enum {
	UILayout_alignment_EXPAND = 0,
	UILayout_alignment_LEFT = 1,
	UILayout_alignment_CENTER = 2,
	UILayout_alignment_RIGHT = 3,
};

int UILayout_alignment_get(PointerRNA *ptr);

enum {
	UILayout_operator_context_INVOKE_DEFAULT = 0,
	UILayout_operator_context_INVOKE_REGION_WIN = 1,
	UILayout_operator_context_INVOKE_REGION_CHANNELS = 2,
	UILayout_operator_context_INVOKE_REGION_PREVIEW = 3,
	UILayout_operator_context_INVOKE_AREA = 4,
	UILayout_operator_context_INVOKE_SCREEN = 5,
	UILayout_operator_context_EXEC_DEFAULT = 6,
	UILayout_operator_context_EXEC_REGION_WIN = 7,
	UILayout_operator_context_EXEC_REGION_CHANNELS = 8,
	UILayout_operator_context_EXEC_REGION_PREVIEW = 9,
	UILayout_operator_context_EXEC_AREA = 10,
	UILayout_operator_context_EXEC_SCREEN = 11,
};

int UILayout_operator_context_get(PointerRNA *ptr);

/**************** UV Project Modifier ****************/

extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_Modifier;

float UVProjectModifier_aspect_x_get(PointerRNA *ptr);

float UVProjectModifier_scale_x_get(PointerRNA *ptr);

PointerRNA UVProjectModifier_image_get(PointerRNA *ptr);

int UVProjectModifier_projector_count_get(PointerRNA *ptr);

int UVProjectModifier_use_image_override_get(PointerRNA *ptr);

void UVProjectModifier_projectors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void UVProjectModifier_projectors_next(CollectionPropertyIterator *iter);
void UVProjectModifier_projectors_end(CollectionPropertyIterator *iter);

#define UVProjectModifier_uv_layer_MAX 32

void UVProjectModifier_uv_layer_get(PointerRNA *ptr, char *value);
int UVProjectModifier_uv_layer_length(PointerRNA *ptr);

float UVProjectModifier_aspect_y_get(PointerRNA *ptr);

float UVProjectModifier_scale_y_get(PointerRNA *ptr);

/**************** UVProjector ****************/

extern StructRNA RNA_UVProjector;

PointerRNA UVProjector_rna_type_get(PointerRNA *ptr);

PointerRNA UVProjector_object_get(PointerRNA *ptr);

/**************** UV Textures ****************/

extern StructRNA RNA_UVTextures;

PointerRNA UVTextures_rna_type_get(PointerRNA *ptr);

PointerRNA UVTextures_active_get(PointerRNA *ptr);

int UVTextures_active_index_get(PointerRNA *ptr);

/**************** Unit Settings ****************/

extern StructRNA RNA_UnitSettings;

PointerRNA UnitSettings_rna_type_get(PointerRNA *ptr);

enum {
	UnitSettings_system_rotation_DEGREES = 0,
	UnitSettings_system_rotation_RADIANS = 2,
};

int UnitSettings_system_rotation_get(PointerRNA *ptr);

int UnitSettings_use_separate_get(PointerRNA *ptr);

float UnitSettings_scale_length_get(PointerRNA *ptr);

enum {
	UnitSettings_system_NONE = 0,
	UnitSettings_system_METRIC = 1,
	UnitSettings_system_IMPERIAL = 2,
};

int UnitSettings_system_get(PointerRNA *ptr);

/**************** Unknown Type ****************/

extern StructRNA RNA_UnknownType;

PointerRNA UnknownType_rna_type_get(PointerRNA *ptr);

/**************** User Preferences ****************/

extern StructRNA RNA_UserPreferences;

PointerRNA UserPreferences_rna_type_get(PointerRNA *ptr);

enum {
	UserPreferences_active_section_INTERFACE = 0,
	UserPreferences_active_section_EDITING = 1,
	UserPreferences_active_section_INPUT = 5,
	UserPreferences_active_section_ADDONS = 6,
	UserPreferences_active_section_THEMES = 4,
	UserPreferences_active_section_FILES = 2,
	UserPreferences_active_section_SYSTEM = 3,
};

int UserPreferences_active_section_get(PointerRNA *ptr);

void UserPreferences_addons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void UserPreferences_addons_next(CollectionPropertyIterator *iter);
void UserPreferences_addons_end(CollectionPropertyIterator *iter);

PointerRNA UserPreferences_edit_get(PointerRNA *ptr);

PointerRNA UserPreferences_filepaths_get(PointerRNA *ptr);

PointerRNA UserPreferences_inputs_get(PointerRNA *ptr);

void UserPreferences_ui_styles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void UserPreferences_ui_styles_next(CollectionPropertyIterator *iter);
void UserPreferences_ui_styles_end(CollectionPropertyIterator *iter);

PointerRNA UserPreferences_system_get(PointerRNA *ptr);

void UserPreferences_themes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void UserPreferences_themes_next(CollectionPropertyIterator *iter);
void UserPreferences_themes_end(CollectionPropertyIterator *iter);

PointerRNA UserPreferences_view_get(PointerRNA *ptr);

/**************** Edit Methods ****************/

extern StructRNA RNA_UserPreferencesEdit;

PointerRNA UserPreferencesEdit_rna_type_get(PointerRNA *ptr);

enum {
	UserPreferencesEdit_object_align_WORLD = 0,
	UserPreferencesEdit_object_align_VIEW = 524288,
};

int UserPreferencesEdit_object_align_get(PointerRNA *ptr);

int UserPreferencesEdit_use_negative_frames_get(PointerRNA *ptr);

int UserPreferencesEdit_use_keyframe_insert_available_get(PointerRNA *ptr);

int UserPreferencesEdit_use_auto_keying_get(PointerRNA *ptr);

enum {
	UserPreferencesEdit_auto_keying_mode_ADD_REPLACE_KEYS = 3,
	UserPreferencesEdit_auto_keying_mode_REPLACE_KEYS = 5,
};

int UserPreferencesEdit_auto_keying_mode_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_action_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_armature_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_curve_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_fcurve_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_lamp_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_material_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_mesh_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_metaball_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_particle_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_surface_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_text_get(PointerRNA *ptr);

int UserPreferencesEdit_use_duplicate_texture_get(PointerRNA *ptr);

int UserPreferencesEdit_use_enter_edit_mode_get(PointerRNA *ptr);

int UserPreferencesEdit_use_global_undo_get(PointerRNA *ptr);

int UserPreferencesEdit_grease_pencil_eraser_radius_get(PointerRNA *ptr);

int UserPreferencesEdit_grease_pencil_euclidean_distance_get(PointerRNA *ptr);

int UserPreferencesEdit_grease_pencil_manhattan_distance_get(PointerRNA *ptr);

int UserPreferencesEdit_use_grease_pencil_simplify_stroke_get(PointerRNA *ptr);

int UserPreferencesEdit_use_grease_pencil_smooth_stroke_get(PointerRNA *ptr);

int UserPreferencesEdit_use_keyframe_insert_needed_get(PointerRNA *ptr);

enum {
	UserPreferencesEdit_material_link_OBDATA = 0,
	UserPreferencesEdit_material_link_OBJECT = 256,
};

int UserPreferencesEdit_material_link_get(PointerRNA *ptr);

int UserPreferencesEdit_use_insertkey_xyz_to_rgb_get(PointerRNA *ptr);

enum {
	UserPreferencesEdit_keyframe_new_handle_type_FREE = 0,
	UserPreferencesEdit_keyframe_new_handle_type_AUTO = 1,
	UserPreferencesEdit_keyframe_new_handle_type_VECTOR = 2,
	UserPreferencesEdit_keyframe_new_handle_type_ALIGNED = 3,
};

int UserPreferencesEdit_keyframe_new_handle_type_get(PointerRNA *ptr);

enum {
	UserPreferencesEdit_keyframe_new_interpolation_type_CONSTANT = 0,
	UserPreferencesEdit_keyframe_new_interpolation_type_LINEAR = 1,
	UserPreferencesEdit_keyframe_new_interpolation_type_BEZIER = 2,
};

int UserPreferencesEdit_keyframe_new_interpolation_type_get(PointerRNA *ptr);

int UserPreferencesEdit_use_drag_immediately_get(PointerRNA *ptr);

void UserPreferencesEdit_sculpt_paint_overlay_color_get(PointerRNA *ptr, float values[3]);

int UserPreferencesEdit_undo_memory_limit_get(PointerRNA *ptr);

int UserPreferencesEdit_undo_steps_get(PointerRNA *ptr);

int UserPreferencesEdit_use_visual_keying_get(PointerRNA *ptr);

/**************** File Paths ****************/

extern StructRNA RNA_UserPreferencesFilePaths;

PointerRNA UserPreferencesFilePaths_rna_type_get(PointerRNA *ptr);

#define UserPreferencesFilePaths_animation_player_MAX 240

void UserPreferencesFilePaths_animation_player_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_animation_player_length(PointerRNA *ptr);

enum {
	UserPreferencesFilePaths_animation_player_preset_BLENDER24 = 1,
	UserPreferencesFilePaths_animation_player_preset_DJV = 2,
	UserPreferencesFilePaths_animation_player_preset_FRAMECYCLER = 3,
	UserPreferencesFilePaths_animation_player_preset_RV = 4,
	UserPreferencesFilePaths_animation_player_preset_MPLAYER = 5,
	UserPreferencesFilePaths_animation_player_preset_CUSTOM = 50,
};

int UserPreferencesFilePaths_animation_player_preset_get(PointerRNA *ptr);

int UserPreferencesFilePaths_use_auto_save_temporary_files_get(PointerRNA *ptr);

int UserPreferencesFilePaths_auto_save_time_get(PointerRNA *ptr);

int UserPreferencesFilePaths_use_file_compression_get(PointerRNA *ptr);

int UserPreferencesFilePaths_use_filter_files_get(PointerRNA *ptr);

#define UserPreferencesFilePaths_font_directory_MAX 160

void UserPreferencesFilePaths_font_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_font_directory_length(PointerRNA *ptr);

int UserPreferencesFilePaths_show_hidden_files_datablocks_get(PointerRNA *ptr);

int UserPreferencesFilePaths_hide_recent_locations_get(PointerRNA *ptr);

#define UserPreferencesFilePaths_image_editor_MAX 240

void UserPreferencesFilePaths_image_editor_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_image_editor_length(PointerRNA *ptr);

int UserPreferencesFilePaths_use_load_ui_get(PointerRNA *ptr);

#define UserPreferencesFilePaths_script_directory_MAX 160

void UserPreferencesFilePaths_script_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_script_directory_length(PointerRNA *ptr);

int UserPreferencesFilePaths_recent_files_get(PointerRNA *ptr);

int UserPreferencesFilePaths_use_relative_paths_get(PointerRNA *ptr);

#define UserPreferencesFilePaths_render_output_directory_MAX 160

void UserPreferencesFilePaths_render_output_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_render_output_directory_length(PointerRNA *ptr);

int UserPreferencesFilePaths_use_save_preview_images_get(PointerRNA *ptr);

int UserPreferencesFilePaths_save_version_get(PointerRNA *ptr);

#define UserPreferencesFilePaths_sequence_plugin_directory_MAX 160

void UserPreferencesFilePaths_sequence_plugin_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_sequence_plugin_directory_length(PointerRNA *ptr);

int UserPreferencesFilePaths_show_thumbnails_get(PointerRNA *ptr);

#define UserPreferencesFilePaths_sound_directory_MAX 160

void UserPreferencesFilePaths_sound_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_sound_directory_length(PointerRNA *ptr);

#define UserPreferencesFilePaths_temporary_directory_MAX 160

void UserPreferencesFilePaths_temporary_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_temporary_directory_length(PointerRNA *ptr);

#define UserPreferencesFilePaths_texture_plugin_directory_MAX 160

void UserPreferencesFilePaths_texture_plugin_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_texture_plugin_directory_length(PointerRNA *ptr);

#define UserPreferencesFilePaths_texture_directory_MAX 160

void UserPreferencesFilePaths_texture_directory_get(PointerRNA *ptr, char *value);
int UserPreferencesFilePaths_texture_directory_length(PointerRNA *ptr);

/**************** Input ****************/

extern StructRNA RNA_UserPreferencesInput;

PointerRNA UserPreferencesInput_rna_type_get(PointerRNA *ptr);

int UserPreferencesInput_use_mouse_continuous_get(PointerRNA *ptr);

int UserPreferencesInput_mouse_double_click_time_get(PointerRNA *ptr);

int UserPreferencesInput_drag_threshold_get(PointerRNA *ptr);

void UserPreferencesInput_edited_keymaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void UserPreferencesInput_edited_keymaps_next(CollectionPropertyIterator *iter);
void UserPreferencesInput_edited_keymaps_end(CollectionPropertyIterator *iter);

int UserPreferencesInput_use_mouse_emulate_3_button_get(PointerRNA *ptr);

int UserPreferencesInput_use_emulate_numpad_get(PointerRNA *ptr);

int UserPreferencesInput_invert_mouse_wheel_zoom_get(PointerRNA *ptr);

#define UserPreferencesInput_active_keyconfig_MAX 64

void UserPreferencesInput_active_keyconfig_get(PointerRNA *ptr, char *value);
int UserPreferencesInput_active_keyconfig_length(PointerRNA *ptr);

int UserPreferencesInput_use_mouse_mmb_paste_get(PointerRNA *ptr);

int UserPreferencesInput_ndof_pan_speed_get(PointerRNA *ptr);

int UserPreferencesInput_ndof_rotate_speed_get(PointerRNA *ptr);

enum {
	UserPreferencesInput_select_mouse_LEFT = 16384,
	UserPreferencesInput_select_mouse_RIGHT = 0,
};

int UserPreferencesInput_select_mouse_get(PointerRNA *ptr);

enum {
	UserPreferencesInput_view_rotate_method_TURNTABLE = 0,
	UserPreferencesInput_view_rotate_method_TRACKBALL = 32,
};

int UserPreferencesInput_view_rotate_method_get(PointerRNA *ptr);

int UserPreferencesInput_invert_zoom_wheel_get(PointerRNA *ptr);

int UserPreferencesInput_wheel_scroll_lines_get(PointerRNA *ptr);

enum {
	UserPreferencesInput_view_zoom_axis_VERTICAL = 0,
	UserPreferencesInput_view_zoom_axis_HORIZONTAL = 67108864,
};

int UserPreferencesInput_view_zoom_axis_get(PointerRNA *ptr);

enum {
	UserPreferencesInput_view_zoom_method_CONTINUE = 0,
	UserPreferencesInput_view_zoom_method_DOLLY = 2,
	UserPreferencesInput_view_zoom_method_SCALE = 1,
};

int UserPreferencesInput_view_zoom_method_get(PointerRNA *ptr);

/**************** System & OpenGL ****************/

extern StructRNA RNA_UserPreferencesSystem;

PointerRNA UserPreferencesSystem_rna_type_get(PointerRNA *ptr);

int UserPreferencesSystem_use_antialiasing_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_audio_channels_MONO = 1,
	UserPreferencesSystem_audio_channels_STEREO = 2,
	UserPreferencesSystem_audio_channels_SURROUND4 = 4,
	UserPreferencesSystem_audio_channels_SURROUND51 = 6,
	UserPreferencesSystem_audio_channels_SURROUND71 = 8,
};

int UserPreferencesSystem_audio_channels_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_audio_device_NONE = 0,
};

int UserPreferencesSystem_audio_device_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_256 = 256,
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_512 = 512,
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_1024 = 1024,
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_2048 = 2048,
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_4096 = 4096,
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_8192 = 8192,
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_16384 = 16384,
	UserPreferencesSystem_audio_mixing_buffer_SAMPLES_32768 = 32768,
};

int UserPreferencesSystem_audio_mixing_buffer_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_audio_sample_format_U8 = 1,
	UserPreferencesSystem_audio_sample_format_S16 = 18,
	UserPreferencesSystem_audio_sample_format_S24 = 19,
	UserPreferencesSystem_audio_sample_format_S32 = 20,
	UserPreferencesSystem_audio_sample_format_FLOAT = 36,
	UserPreferencesSystem_audio_sample_format_DOUBLE = 40,
};

int UserPreferencesSystem_audio_sample_format_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_audio_sample_rate_RATE_44100 = 44100,
	UserPreferencesSystem_audio_sample_rate_RATE_48000 = 48000,
	UserPreferencesSystem_audio_sample_rate_RATE_96000 = 96000,
	UserPreferencesSystem_audio_sample_rate_RATE_192000 = 192000,
};

int UserPreferencesSystem_audio_sample_rate_get(PointerRNA *ptr);

#define UserPreferencesSystem_author_MAX 80

void UserPreferencesSystem_author_get(PointerRNA *ptr, char *value);
int UserPreferencesSystem_author_length(PointerRNA *ptr);

int UserPreferencesSystem_use_scripts_auto_execute_get(PointerRNA *ptr);

float UserPreferencesSystem_gl_clip_alpha_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_color_picker_type_CIRCLE = 0,
	UserPreferencesSystem_color_picker_type_SQUARE_SV = 1,
	UserPreferencesSystem_color_picker_type_SQUARE_HS = 2,
	UserPreferencesSystem_color_picker_type_SQUARE_HV = 3,
};

int UserPreferencesSystem_color_picker_type_get(PointerRNA *ptr);

int UserPreferencesSystem_dpi_get(PointerRNA *ptr);

int UserPreferencesSystem_use_preview_images_get(PointerRNA *ptr);

int UserPreferencesSystem_screencast_fps_get(PointerRNA *ptr);

int UserPreferencesSystem_frame_server_port_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_gl_texture_limit_CLAMP_OFF = 0,
	UserPreferencesSystem_gl_texture_limit_CLAMP_8192 = 8192,
	UserPreferencesSystem_gl_texture_limit_CLAMP_4096 = 4096,
	UserPreferencesSystem_gl_texture_limit_CLAMP_2048 = 2048,
	UserPreferencesSystem_gl_texture_limit_CLAMP_1024 = 1024,
	UserPreferencesSystem_gl_texture_limit_CLAMP_512 = 512,
	UserPreferencesSystem_gl_texture_limit_CLAMP_256 = 256,
	UserPreferencesSystem_gl_texture_limit_CLAMP_128 = 128,
};

int UserPreferencesSystem_gl_texture_limit_get(PointerRNA *ptr);

int UserPreferencesSystem_use_international_fonts_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_language_ENGLISH = 0,
	UserPreferencesSystem_language_JAPANESE = 1,
	UserPreferencesSystem_language_DUTCH = 2,
	UserPreferencesSystem_language_ITALIAN = 3,
	UserPreferencesSystem_language_GERMAN = 4,
	UserPreferencesSystem_language_FINNISH = 5,
	UserPreferencesSystem_language_SWEDISH = 6,
	UserPreferencesSystem_language_FRENCH = 7,
	UserPreferencesSystem_language_SPANISH = 8,
	UserPreferencesSystem_language_CATALAN = 9,
	UserPreferencesSystem_language_CZECH = 10,
	UserPreferencesSystem_language_BRAZILIAN_PORTUGUESE = 11,
	UserPreferencesSystem_language_SIMPLIFIED_CHINESE = 12,
	UserPreferencesSystem_language_RUSSIAN = 13,
	UserPreferencesSystem_language_CROATIAN = 14,
	UserPreferencesSystem_language_SERBIAN = 15,
	UserPreferencesSystem_language_UKRAINIAN = 16,
	UserPreferencesSystem_language_POLISH = 17,
	UserPreferencesSystem_language_ROMANIAN = 18,
	UserPreferencesSystem_language_ARABIC = 19,
	UserPreferencesSystem_language_BULGARIAN = 20,
	UserPreferencesSystem_language_GREEK = 21,
	UserPreferencesSystem_language_KOREAN = 22,
};

int UserPreferencesSystem_language_get(PointerRNA *ptr);

int UserPreferencesSystem_memory_cache_limit_get(PointerRNA *ptr);

int UserPreferencesSystem_use_mipmaps_get(PointerRNA *ptr);

int UserPreferencesSystem_prefetch_frames_get(PointerRNA *ptr);

int UserPreferencesSystem_scrollback_get(PointerRNA *ptr);

void UserPreferencesSystem_solid_lights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void UserPreferencesSystem_solid_lights_next(CollectionPropertyIterator *iter);
void UserPreferencesSystem_solid_lights_end(CollectionPropertyIterator *iter);

int UserPreferencesSystem_use_tabs_as_spaces_get(PointerRNA *ptr);

int UserPreferencesSystem_use_text_antialiasing_get(PointerRNA *ptr);

int UserPreferencesSystem_texture_collection_rate_get(PointerRNA *ptr);

int UserPreferencesSystem_texture_time_out_get(PointerRNA *ptr);

int UserPreferencesSystem_use_textured_fonts_get(PointerRNA *ptr);

int UserPreferencesSystem_use_translate_buttons_get(PointerRNA *ptr);

int UserPreferencesSystem_use_translate_toolbox_get(PointerRNA *ptr);

int UserPreferencesSystem_use_translate_tooltips_get(PointerRNA *ptr);

int UserPreferencesSystem_use_weight_color_range_get(PointerRNA *ptr);

int UserPreferencesSystem_use_vertex_buffer_objects_get(PointerRNA *ptr);

int UserPreferencesSystem_screencast_wait_time_get(PointerRNA *ptr);

PointerRNA UserPreferencesSystem_weight_color_range_get(PointerRNA *ptr);

enum {
	UserPreferencesSystem_window_draw_method_AUTOMATIC = 3,
	UserPreferencesSystem_window_draw_method_TRIPLE_BUFFER = 0,
	UserPreferencesSystem_window_draw_method_OVERLAP = 1,
	UserPreferencesSystem_window_draw_method_OVERLAP_FLIP = 4,
	UserPreferencesSystem_window_draw_method_FULL = 2,
};

int UserPreferencesSystem_window_draw_method_get(PointerRNA *ptr);

/**************** View & Controls ****************/

extern StructRNA RNA_UserPreferencesView;

PointerRNA UserPreferencesView_rna_type_get(PointerRNA *ptr);

int UserPreferencesView_view2d_grid_spacing_min_get(PointerRNA *ptr);

int UserPreferencesView_use_mouse_auto_depth_get(PointerRNA *ptr);

int UserPreferencesView_use_auto_perspective_get(PointerRNA *ptr);

int UserPreferencesView_use_directional_menus_get(PointerRNA *ptr);

int UserPreferencesView_show_object_info_get(PointerRNA *ptr);

int UserPreferencesView_use_global_pivot_get(PointerRNA *ptr);

int UserPreferencesView_use_global_scene_get(PointerRNA *ptr);

int UserPreferencesView_open_left_mouse_delay_get(PointerRNA *ptr);

int UserPreferencesView_open_right_mouse_delay_get(PointerRNA *ptr);

int UserPreferencesView_show_large_cursors_get(PointerRNA *ptr);

int UserPreferencesView_show_manipulator_get(PointerRNA *ptr);

int UserPreferencesView_manipulator_handle_size_get(PointerRNA *ptr);

int UserPreferencesView_manipulator_hotspot_get(PointerRNA *ptr);

int UserPreferencesView_manipulator_size_get(PointerRNA *ptr);

int UserPreferencesView_mini_axis_brightness_get(PointerRNA *ptr);

int UserPreferencesView_mini_axis_size_get(PointerRNA *ptr);

int UserPreferencesView_object_origin_size_get(PointerRNA *ptr);

int UserPreferencesView_use_mouse_over_open_get(PointerRNA *ptr);

int UserPreferencesView_use_rotate_around_active_get(PointerRNA *ptr);

int UserPreferencesView_rotation_angle_get(PointerRNA *ptr);

int UserPreferencesView_show_mini_axis_get(PointerRNA *ptr);

int UserPreferencesView_show_playback_fps_get(PointerRNA *ptr);

int UserPreferencesView_show_tooltips_python_get(PointerRNA *ptr);

int UserPreferencesView_show_splash_get(PointerRNA *ptr);

int UserPreferencesView_show_view_name_get(PointerRNA *ptr);

int UserPreferencesView_smooth_view_get(PointerRNA *ptr);

int UserPreferencesView_open_sublevel_delay_get(PointerRNA *ptr);

enum {
	UserPreferencesView_timecode_style_MINIMAL = 0,
	UserPreferencesView_timecode_style_SMPTE = 2,
	UserPreferencesView_timecode_style_SMPTE_COMPACT = 1,
	UserPreferencesView_timecode_style_MILLISECONDS = 3,
	UserPreferencesView_timecode_style_SECONDS_ONLY = 4,
};

int UserPreferencesView_timecode_style_get(PointerRNA *ptr);

int UserPreferencesView_show_column_layout_get(PointerRNA *ptr);

int UserPreferencesView_show_tooltips_get(PointerRNA *ptr);

int UserPreferencesView_open_toplevel_delay_get(PointerRNA *ptr);

int UserPreferencesView_use_zoom_to_mouse_get(PointerRNA *ptr);

/**************** Solid Light ****************/

extern StructRNA RNA_UserSolidLight;

PointerRNA UserSolidLight_rna_type_get(PointerRNA *ptr);

void UserSolidLight_diffuse_color_get(PointerRNA *ptr, float values[3]);

void UserSolidLight_direction_get(PointerRNA *ptr, float values[3]);

int UserSolidLight_use_get(PointerRNA *ptr);

void UserSolidLight_specular_color_get(PointerRNA *ptr, float values[3]);

/**************** Value Node Socket ****************/

extern StructRNA RNA_ValueNodeSocket;
extern StructRNA RNA_NodeSocket;

void ValueNodeSocket_default_value_get(PointerRNA *ptr, float values[1]);

/**************** Vector Font ****************/

extern StructRNA RNA_VectorFont;
extern StructRNA RNA_ID;

#define VectorFont_filepath_MAX 256

void VectorFont_filepath_get(PointerRNA *ptr, char *value);
int VectorFont_filepath_length(PointerRNA *ptr);

PointerRNA VectorFont_packed_file_get(PointerRNA *ptr);

/**************** Vector Node Socket ****************/

extern StructRNA RNA_VectorNodeSocket;
extern StructRNA RNA_NodeSocket;

void VectorNodeSocket_default_value_get(PointerRNA *ptr, float values[3]);

/**************** Vertex Colors ****************/

extern StructRNA RNA_VertexColors;

PointerRNA VertexColors_rna_type_get(PointerRNA *ptr);

int VertexColors_active_index_get(PointerRNA *ptr);

PointerRNA VertexColors_active_get(PointerRNA *ptr);

/**************** Vertex Group ****************/

extern StructRNA RNA_VertexGroup;

PointerRNA VertexGroup_rna_type_get(PointerRNA *ptr);

#define VertexGroup_name_MAX 32

void VertexGroup_name_get(PointerRNA *ptr, char *value);
int VertexGroup_name_length(PointerRNA *ptr);

int VertexGroup_index_get(PointerRNA *ptr);

/**************** Vertex Group Element ****************/

extern StructRNA RNA_VertexGroupElement;

PointerRNA VertexGroupElement_rna_type_get(PointerRNA *ptr);

int VertexGroupElement_group_get(PointerRNA *ptr);

float VertexGroupElement_weight_get(PointerRNA *ptr);

/**************** Vertex Groups ****************/

extern StructRNA RNA_VertexGroups;

PointerRNA VertexGroups_rna_type_get(PointerRNA *ptr);

PointerRNA VertexGroups_active_get(PointerRNA *ptr);

int VertexGroups_active_index_get(PointerRNA *ptr);

/**************** Vertex Paint ****************/

extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_Paint;

int VertexPaint_use_all_faces_get(PointerRNA *ptr);

int VertexPaint_use_normal_get(PointerRNA *ptr);

int VertexPaint_use_spray_get(PointerRNA *ptr);

/**************** Visibility Actuator ****************/

extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Actuator;

int VisibilityActuator_apply_to_children_get(PointerRNA *ptr);

int VisibilityActuator_use_occlusion_get(PointerRNA *ptr);

int VisibilityActuator_use_visible_get(PointerRNA *ptr);

/**************** Voronoi ****************/

extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

enum {
	VoronoiTexture_color_mode_INTENSITY = 0,
	VoronoiTexture_color_mode_POSITION = 1,
	VoronoiTexture_color_mode_POSITION_OUTLINE = 2,
	VoronoiTexture_color_mode_POSITION_OUTLINE_INTENSITY = 3,
};

int VoronoiTexture_color_mode_get(PointerRNA *ptr);

enum {
	VoronoiTexture_distance_metric_DISTANCE = 0,
	VoronoiTexture_distance_metric_DISTANCE_SQUARED = 1,
	VoronoiTexture_distance_metric_MANHATTAN = 2,
	VoronoiTexture_distance_metric_CHEBYCHEV = 3,
	VoronoiTexture_distance_metric_MINKOVSKY_HALF = 4,
	VoronoiTexture_distance_metric_MINKOVSKY_FOUR = 5,
	VoronoiTexture_distance_metric_MINKOVSKY = 6,
};

int VoronoiTexture_distance_metric_get(PointerRNA *ptr);

float VoronoiTexture_minkovsky_exponent_get(PointerRNA *ptr);

float VoronoiTexture_nabla_get(PointerRNA *ptr);

float VoronoiTexture_noise_intensity_get(PointerRNA *ptr);

float VoronoiTexture_noise_scale_get(PointerRNA *ptr);

float VoronoiTexture_weight_1_get(PointerRNA *ptr);

float VoronoiTexture_weight_2_get(PointerRNA *ptr);

float VoronoiTexture_weight_3_get(PointerRNA *ptr);

float VoronoiTexture_weight_4_get(PointerRNA *ptr);

/**************** VoxelData ****************/

extern StructRNA RNA_VoxelData;

PointerRNA VoxelData_rna_type_get(PointerRNA *ptr);

PointerRNA VoxelData_domain_object_get(PointerRNA *ptr);

enum {
	VoxelData_extension_EXTEND = 1,
	VoxelData_extension_CLIP = 2,
	VoxelData_extension_REPEAT = 3,
};

int VoxelData_extension_get(PointerRNA *ptr);

enum {
	VoxelData_file_format_BLENDER_VOXEL = 0,
	VoxelData_file_format_RAW_8BIT = 1,
	VoxelData_file_format_IMAGE_SEQUENCE = 3,
	VoxelData_file_format_SMOKE = 4,
};

int VoxelData_file_format_get(PointerRNA *ptr);

float VoxelData_intensity_get(PointerRNA *ptr);

enum {
	VoxelData_interpolation_NEREASTNEIGHBOR = 0,
	VoxelData_interpolation_TRILINEAR = 1,
	VoxelData_interpolation_QUADRATIC = 2,
	VoxelData_interpolation_TRICUBIC_CATROM = 3,
	VoxelData_interpolation_TRICUBIC_BSPLINE = 4,
};

int VoxelData_interpolation_get(PointerRNA *ptr);

void VoxelData_resolution_get(PointerRNA *ptr, int values[3]);

enum {
	VoxelData_smoke_data_type_SMOKEDENSITY = 0,
	VoxelData_smoke_data_type_SMOKEHEAT = 1,
	VoxelData_smoke_data_type_SMOKEVEL = 2,
};

int VoxelData_smoke_data_type_get(PointerRNA *ptr);

#define VoxelData_filepath_MAX 240

void VoxelData_filepath_get(PointerRNA *ptr, char *value);
int VoxelData_filepath_length(PointerRNA *ptr);

int VoxelData_still_frame_get(PointerRNA *ptr);

int VoxelData_use_still_frame_get(PointerRNA *ptr);

/**************** Voxel Data ****************/

extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

PointerRNA VoxelDataTexture_image_get(PointerRNA *ptr);

PointerRNA VoxelDataTexture_image_user_get(PointerRNA *ptr);

PointerRNA VoxelDataTexture_voxel_data_get(PointerRNA *ptr);

/**************** Wave Modifier ****************/

extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_Modifier;

int WaveModifier_use_cyclic_get(PointerRNA *ptr);

float WaveModifier_damping_time_get(PointerRNA *ptr);

float WaveModifier_falloff_radius_get(PointerRNA *ptr);

float WaveModifier_height_get(PointerRNA *ptr);

float WaveModifier_lifetime_get(PointerRNA *ptr);

float WaveModifier_narrowness_get(PointerRNA *ptr);

int WaveModifier_use_normal_get(PointerRNA *ptr);

float WaveModifier_speed_get(PointerRNA *ptr);

PointerRNA WaveModifier_start_position_object_get(PointerRNA *ptr);

float WaveModifier_start_position_x_get(PointerRNA *ptr);

float WaveModifier_start_position_y_get(PointerRNA *ptr);

PointerRNA WaveModifier_texture_get(PointerRNA *ptr);

enum {
	WaveModifier_texture_coords_LOCAL = 0,
	WaveModifier_texture_coords_GLOBAL = 1,
	WaveModifier_texture_coords_OBJECT = 2,
	WaveModifier_texture_coords_MAP_UV = 3,
};

int WaveModifier_texture_coords_get(PointerRNA *ptr);

PointerRNA WaveModifier_texture_coords_object_get(PointerRNA *ptr);

float WaveModifier_time_offset_get(PointerRNA *ptr);

#define WaveModifier_uv_layer_MAX 32

void WaveModifier_uv_layer_get(PointerRNA *ptr, char *value);
int WaveModifier_uv_layer_length(PointerRNA *ptr);

#define WaveModifier_vertex_group_MAX 32

void WaveModifier_vertex_group_get(PointerRNA *ptr, char *value);
int WaveModifier_vertex_group_length(PointerRNA *ptr);

float WaveModifier_width_get(PointerRNA *ptr);

int WaveModifier_use_x_get(PointerRNA *ptr);

int WaveModifier_use_normal_x_get(PointerRNA *ptr);

int WaveModifier_use_y_get(PointerRNA *ptr);

int WaveModifier_use_normal_y_get(PointerRNA *ptr);

int WaveModifier_use_normal_z_get(PointerRNA *ptr);

/**************** Window ****************/

extern StructRNA RNA_Window;

PointerRNA Window_rna_type_get(PointerRNA *ptr);

PointerRNA Window_screen_get(PointerRNA *ptr);

/**************** Window Manager ****************/

extern StructRNA RNA_WindowManager;
extern StructRNA RNA_ID;

void WindowManager_keyconfigs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void WindowManager_keyconfigs_next(CollectionPropertyIterator *iter);
void WindowManager_keyconfigs_end(CollectionPropertyIterator *iter);

void WindowManager_operators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void WindowManager_operators_next(CollectionPropertyIterator *iter);
void WindowManager_operators_end(CollectionPropertyIterator *iter);

void WindowManager_clipboard_get(PointerRNA *ptr, char *value);
int WindowManager_clipboard_length(PointerRNA *ptr);

void WindowManager_windows_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void WindowManager_windows_next(CollectionPropertyIterator *iter);
void WindowManager_windows_end(CollectionPropertyIterator *iter);

/**************** Wipe Sequence ****************/

extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_Sequence;

float WipeSequence_angle_get(PointerRNA *ptr);

float WipeSequence_blur_width_get(PointerRNA *ptr);

enum {
	WipeSequence_direction_OUT = 0,
	WipeSequence_direction_IN = 1,
};

int WipeSequence_direction_get(PointerRNA *ptr);

enum {
	WipeSequence_transition_type_SINGLE = 0,
	WipeSequence_transition_type_DOUBLE = 1,
	WipeSequence_transition_type_IRIS = 4,
	WipeSequence_transition_type_CLOCK = 5,
};

int WipeSequence_transition_type_get(PointerRNA *ptr);

/**************** Wood Texture ****************/

extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_Texture;
extern StructRNA RNA_ID;

float WoodTexture_nabla_get(PointerRNA *ptr);

enum {
	WoodTexture_noise_basis_BLENDER_ORIGINAL = 0,
	WoodTexture_noise_basis_ORIGINAL_PERLIN = 1,
	WoodTexture_noise_basis_IMPROVED_PERLIN = 2,
	WoodTexture_noise_basis_VORONOI_F1 = 3,
	WoodTexture_noise_basis_VORONOI_F2 = 4,
	WoodTexture_noise_basis_VORONOI_F3 = 5,
	WoodTexture_noise_basis_VORONOI_F4 = 6,
	WoodTexture_noise_basis_VORONOI_F2_F1 = 7,
	WoodTexture_noise_basis_VORONOI_CRACKLE = 8,
	WoodTexture_noise_basis_CELL_NOISE = 14,
};

int WoodTexture_noise_basis_get(PointerRNA *ptr);

enum {
	WoodTexture_noisebasis_2_SIN = 0,
	WoodTexture_noisebasis_2_SAW = 1,
	WoodTexture_noisebasis_2_TRI = 2,
};

int WoodTexture_noisebasis_2_get(PointerRNA *ptr);

float WoodTexture_noise_scale_get(PointerRNA *ptr);

enum {
	WoodTexture_noise_type_SOFT_NOISE = 0,
	WoodTexture_noise_type_HARD_NOISE = 1,
};

int WoodTexture_noise_type_get(PointerRNA *ptr);

enum {
	WoodTexture_wood_type_BANDS = 0,
	WoodTexture_wood_type_RINGS = 1,
	WoodTexture_wood_type_BANDNOISE = 2,
	WoodTexture_wood_type_RINGNOISE = 3,
};

int WoodTexture_wood_type_get(PointerRNA *ptr);

float WoodTexture_turbulence_get(PointerRNA *ptr);

/**************** World ****************/

extern StructRNA RNA_World;
extern StructRNA RNA_ID;

PointerRNA World_active_texture_get(PointerRNA *ptr);

int World_active_texture_index_get(PointerRNA *ptr);

void World_ambient_color_get(PointerRNA *ptr, float values[3]);

PointerRNA World_animation_data_get(PointerRNA *ptr);

int World_use_sky_blend_get(PointerRNA *ptr);

float World_exposure_get(PointerRNA *ptr);

void World_horizon_color_get(PointerRNA *ptr, float values[3]);

PointerRNA World_light_settings_get(PointerRNA *ptr);

PointerRNA World_mist_settings_get(PointerRNA *ptr);

int World_use_sky_paper_get(PointerRNA *ptr);

float World_color_range_get(PointerRNA *ptr);

int World_use_sky_real_get(PointerRNA *ptr);

PointerRNA World_star_settings_get(PointerRNA *ptr);

void World_texture_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr);
void World_texture_slots_next(CollectionPropertyIterator *iter);
void World_texture_slots_end(CollectionPropertyIterator *iter);

void World_zenith_color_get(PointerRNA *ptr, float values[3]);

/**************** Lighting ****************/

extern StructRNA RNA_WorldLighting;

PointerRNA WorldLighting_rna_type_get(PointerRNA *ptr);

float WorldLighting_adapt_to_speed_get(PointerRNA *ptr);

float WorldLighting_bias_get(PointerRNA *ptr);

enum {
	WorldLighting_ao_blend_type_MULTIPLY = 3,
	WorldLighting_ao_blend_type_ADD = 0,
};

int WorldLighting_ao_blend_type_get(PointerRNA *ptr);

int WorldLighting_indirect_bounces_get(PointerRNA *ptr);

float WorldLighting_correction_get(PointerRNA *ptr);

float WorldLighting_distance_get(PointerRNA *ptr);

float WorldLighting_environment_energy_get(PointerRNA *ptr);

enum {
	WorldLighting_environment_color_PLAIN = 0,
	WorldLighting_environment_color_SKY_COLOR = 1,
	WorldLighting_environment_color_SKY_TEXTURE = 2,
};

int WorldLighting_environment_color_get(PointerRNA *ptr);

float WorldLighting_error_threshold_get(PointerRNA *ptr);

float WorldLighting_ao_factor_get(PointerRNA *ptr);

int WorldLighting_use_falloff_get(PointerRNA *ptr);

enum {
	WorldLighting_gather_method_RAYTRACE = 0,
	WorldLighting_gather_method_APPROXIMATE = 1,
};

int WorldLighting_gather_method_get(PointerRNA *ptr);

float WorldLighting_indirect_factor_get(PointerRNA *ptr);

int WorldLighting_passes_get(PointerRNA *ptr);

int WorldLighting_use_cache_get(PointerRNA *ptr);

enum {
	WorldLighting_sample_method_CONSTANT_JITTERED = 0,
	WorldLighting_sample_method_ADAPTIVE_QMC = 1,
	WorldLighting_sample_method_CONSTANT_QMC = 2,
};

int WorldLighting_sample_method_get(PointerRNA *ptr);

int WorldLighting_samples_get(PointerRNA *ptr);

float WorldLighting_falloff_strength_get(PointerRNA *ptr);

float WorldLighting_threshold_get(PointerRNA *ptr);

int WorldLighting_use_ambient_occlusion_get(PointerRNA *ptr);

int WorldLighting_use_environment_light_get(PointerRNA *ptr);

int WorldLighting_use_indirect_light_get(PointerRNA *ptr);

/**************** World Mist ****************/

extern StructRNA RNA_WorldMistSettings;

PointerRNA WorldMistSettings_rna_type_get(PointerRNA *ptr);

float WorldMistSettings_depth_get(PointerRNA *ptr);

enum {
	WorldMistSettings_falloff_QUADRATIC = 0,
	WorldMistSettings_falloff_LINEAR = 1,
	WorldMistSettings_falloff_INVERSE_QUADRATIC = 2,
};

int WorldMistSettings_falloff_get(PointerRNA *ptr);

float WorldMistSettings_height_get(PointerRNA *ptr);

float WorldMistSettings_intensity_get(PointerRNA *ptr);

float WorldMistSettings_start_get(PointerRNA *ptr);

int WorldMistSettings_use_mist_get(PointerRNA *ptr);

/**************** World Stars ****************/

extern StructRNA RNA_WorldStarsSettings;

PointerRNA WorldStarsSettings_rna_type_get(PointerRNA *ptr);

float WorldStarsSettings_average_separation_get(PointerRNA *ptr);

float WorldStarsSettings_color_random_get(PointerRNA *ptr);

float WorldStarsSettings_distance_min_get(PointerRNA *ptr);

float WorldStarsSettings_size_get(PointerRNA *ptr);

int WorldStarsSettings_use_stars_get(PointerRNA *ptr);

/**************** World Texture Slot ****************/

extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_TextureSlot;

int WorldTextureSlot_use_map_blend_get(PointerRNA *ptr);

float WorldTextureSlot_blend_factor_get(PointerRNA *ptr);

int WorldTextureSlot_use_map_horizon_get(PointerRNA *ptr);

float WorldTextureSlot_horizon_factor_get(PointerRNA *ptr);

PointerRNA WorldTextureSlot_object_get(PointerRNA *ptr);

enum {
	WorldTextureSlot_texture_coords_VIEW = 128,
	WorldTextureSlot_texture_coords_GLOBAL = 8,
	WorldTextureSlot_texture_coords_ANGMAP = 64,
	WorldTextureSlot_texture_coords_SPHERE = 256,
	WorldTextureSlot_texture_coords_TUBE = 1024,
	WorldTextureSlot_texture_coords_OBJECT = 32,
};

int WorldTextureSlot_texture_coords_get(PointerRNA *ptr);

int WorldTextureSlot_use_map_zenith_down_get(PointerRNA *ptr);

float WorldTextureSlot_zenith_down_factor_get(PointerRNA *ptr);

int WorldTextureSlot_use_map_zenith_up_get(PointerRNA *ptr);

float WorldTextureSlot_zenith_up_factor_get(PointerRNA *ptr);

/**************** Texture Slots ****************/

extern StructRNA RNA_WorldTextureSlots;

PointerRNA WorldTextureSlots_rna_type_get(PointerRNA *ptr);

/**************** Xnor Controller ****************/

extern StructRNA RNA_XnorController;
extern StructRNA RNA_Controller;

/**************** Xor Controller ****************/

extern StructRNA RNA_XorController;
extern StructRNA RNA_Controller;

#ifdef __cplusplus
}
#endif

#endif /* __RNA_BLENDER_H__ */

