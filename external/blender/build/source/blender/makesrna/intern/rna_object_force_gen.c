
/* Automatically generated struct definitions for the Data API.
   Do not edit manually, changes will be overwritten.           */

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Action;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_Addon;
extern StructRNA RNA_Addons;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_AndController;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_Bone;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_BooleanProperty;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_Camera;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodes;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_Context;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_Controller;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_Driver;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_Event;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveActuator;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_Function;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupInputs;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_GroupOutputs;
extern StructRNA RNA_Header;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_ID;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_Key;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_Library;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_Macro;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_Menu;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshFace;
extern StructRNA RNA_MeshFaces;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshSticky;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_NandController;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_NorController;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_OperatorTypeMacro;
extern StructRNA RNA_OrController;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Panel;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_PluginSequence;
extern StructRNA RNA_PluginTexture;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_Pose;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_Property;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_RGBANodeSocket;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_Region;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_Screen;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodes;
extern StructRNA RNA_ShapeActionActuator;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_Sound;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_Struct;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_Text;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_TextMarker;
extern StructRNA RNA_Texture;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodes;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_Theme;
extern StructRNA RNA_ThemeAudioWindow;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_TouchSensor;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_ValueNodeSocket;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_VectorNodeSocket;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldStarsSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_XorController;

#include "rna_object_force.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_CollisionSettings_rna_type;
FloatPropertyRNA rna_CollisionSettings_absorption;
FloatPropertyRNA rna_CollisionSettings_damping;
FloatPropertyRNA rna_CollisionSettings_damping_factor;
BooleanPropertyRNA rna_CollisionSettings_use;
FloatPropertyRNA rna_CollisionSettings_friction_factor;
FloatPropertyRNA rna_CollisionSettings_thickness_inner;
BooleanPropertyRNA rna_CollisionSettings_use_particle_kill;
FloatPropertyRNA rna_CollisionSettings_thickness_outer;
FloatPropertyRNA rna_CollisionSettings_permeability;
CollectionPropertyRNA rna_CollisionSettings_rna_properties;
FloatPropertyRNA rna_CollisionSettings_damping_random;
FloatPropertyRNA rna_CollisionSettings_friction_random;
FloatPropertyRNA rna_CollisionSettings_stickness;


PointerPropertyRNA rna_EffectorWeights_rna_type;
FloatPropertyRNA rna_EffectorWeights_all;
FloatPropertyRNA rna_EffectorWeights_boid;
FloatPropertyRNA rna_EffectorWeights_charge;
FloatPropertyRNA rna_EffectorWeights_curve_guide;
FloatPropertyRNA rna_EffectorWeights_drag;
PointerPropertyRNA rna_EffectorWeights_group;
FloatPropertyRNA rna_EffectorWeights_force;
FloatPropertyRNA rna_EffectorWeights_gravity;
FloatPropertyRNA rna_EffectorWeights_harmonic;
FloatPropertyRNA rna_EffectorWeights_lennardjones;
FloatPropertyRNA rna_EffectorWeights_magnetic;
CollectionPropertyRNA rna_EffectorWeights_rna_properties;
FloatPropertyRNA rna_EffectorWeights_texture;
FloatPropertyRNA rna_EffectorWeights_turbulence;
BooleanPropertyRNA rna_EffectorWeights_apply_to_hair_growing;
FloatPropertyRNA rna_EffectorWeights_vortex;
FloatPropertyRNA rna_EffectorWeights_wind;


PointerPropertyRNA rna_FieldSettings_rna_type;
BooleanPropertyRNA rna_FieldSettings_use_2d_force;
BooleanPropertyRNA rna_FieldSettings_use_absorption;
BooleanPropertyRNA rna_FieldSettings_use_guide_path_add;
FloatPropertyRNA rna_FieldSettings_guide_clump_amount;
FloatPropertyRNA rna_FieldSettings_guide_kink_amplitude;
EnumPropertyRNA rna_FieldSettings_guide_kink_axis;
EnumPropertyRNA rna_FieldSettings_falloff_type;
FloatPropertyRNA rna_FieldSettings_falloff_power;
FloatPropertyRNA rna_FieldSettings_flow;
FloatPropertyRNA rna_FieldSettings_guide_free;
FloatPropertyRNA rna_FieldSettings_guide_kink_frequency;
FloatPropertyRNA rna_FieldSettings_harmonic_damping;
FloatPropertyRNA rna_FieldSettings_inflow;
EnumPropertyRNA rna_FieldSettings_guide_kink_type;
FloatPropertyRNA rna_FieldSettings_linear_drag;
BooleanPropertyRNA rna_FieldSettings_apply_to_location;
FloatPropertyRNA rna_FieldSettings_distance_max;
FloatPropertyRNA rna_FieldSettings_radial_max;
FloatPropertyRNA rna_FieldSettings_distance_min;
FloatPropertyRNA rna_FieldSettings_guide_minimum;
FloatPropertyRNA rna_FieldSettings_radial_min;
BooleanPropertyRNA rna_FieldSettings_use_multiple_springs;
FloatPropertyRNA rna_FieldSettings_texture_nabla;
FloatPropertyRNA rna_FieldSettings_noise;
CollectionPropertyRNA rna_FieldSettings_rna_properties;
FloatPropertyRNA rna_FieldSettings_quadratic_drag;
FloatPropertyRNA rna_FieldSettings_radial_falloff;
FloatPropertyRNA rna_FieldSettings_rest_length;
BooleanPropertyRNA rna_FieldSettings_use_root_coords;
BooleanPropertyRNA rna_FieldSettings_apply_to_rotation;
IntPropertyRNA rna_FieldSettings_seed;
EnumPropertyRNA rna_FieldSettings_shape;
FloatPropertyRNA rna_FieldSettings_guide_clump_shape;
FloatPropertyRNA rna_FieldSettings_guide_kink_shape;
FloatPropertyRNA rna_FieldSettings_size;
FloatPropertyRNA rna_FieldSettings_strength;
PointerPropertyRNA rna_FieldSettings_texture;
EnumPropertyRNA rna_FieldSettings_texture_mode;
EnumPropertyRNA rna_FieldSettings_type;
BooleanPropertyRNA rna_FieldSettings_use_object_coords;
BooleanPropertyRNA rna_FieldSettings_use_global_coords;
BooleanPropertyRNA rna_FieldSettings_use_max_distance;
BooleanPropertyRNA rna_FieldSettings_use_radial_max;
BooleanPropertyRNA rna_FieldSettings_use_min_distance;
BooleanPropertyRNA rna_FieldSettings_use_radial_min;
BooleanPropertyRNA rna_FieldSettings_use_guide_path_weight;
EnumPropertyRNA rna_FieldSettings_z_direction;


PointerPropertyRNA rna_GameSoftBodySettings_rna_type;
BooleanPropertyRNA rna_GameSoftBodySettings_use_bending_constraints;
IntPropertyRNA rna_GameSoftBodySettings_cluster_iterations;
FloatPropertyRNA rna_GameSoftBodySettings_dynamic_friction;
FloatPropertyRNA rna_GameSoftBodySettings_linear_stiffness;
FloatPropertyRNA rna_GameSoftBodySettings_collision_margin;
IntPropertyRNA rna_GameSoftBodySettings_location_iterations;
CollectionPropertyRNA rna_GameSoftBodySettings_rna_properties;
BooleanPropertyRNA rna_GameSoftBodySettings_use_cluster_rigid_to_softbody;
BooleanPropertyRNA rna_GameSoftBodySettings_use_shape_match;
BooleanPropertyRNA rna_GameSoftBodySettings_use_cluster_soft_to_softbody;
FloatPropertyRNA rna_GameSoftBodySettings_shape_threshold;
FloatPropertyRNA rna_GameSoftBodySettings_weld_threshold;


PointerPropertyRNA rna_PointCache_rna_type;
StringPropertyRNA rna_PointCache_name;
EnumPropertyRNA rna_PointCache_compression;
IntPropertyRNA rna_PointCache_index;
StringPropertyRNA rna_PointCache_info;
IntPropertyRNA rna_PointCache_frame_step;
BooleanPropertyRNA rna_PointCache_is_outdated;
BooleanPropertyRNA rna_PointCache_use_disk_cache;
IntPropertyRNA rna_PointCache_frame_end;
BooleanPropertyRNA rna_PointCache_use_external;
StringPropertyRNA rna_PointCache_filepath;
BooleanPropertyRNA rna_PointCache_use_library_path;
CollectionPropertyRNA rna_PointCache_point_caches;
CollectionPropertyRNA rna_PointCache_rna_properties;
BooleanPropertyRNA rna_PointCache_use_quick_cache;
IntPropertyRNA rna_PointCache_frame_start;
BooleanPropertyRNA rna_PointCache_frames_skipped;
BooleanPropertyRNA rna_PointCache_is_baked;
BooleanPropertyRNA rna_PointCache_is_baking;


PointerPropertyRNA rna_PointCaches_rna_type;
IntPropertyRNA rna_PointCaches_active_index;
CollectionPropertyRNA rna_PointCaches_rna_properties;


PointerPropertyRNA rna_SoftBodySettings_rna_type;
IntPropertyRNA rna_SoftBodySettings_aero;
EnumPropertyRNA rna_SoftBodySettings_aerodynamics_type;
FloatPropertyRNA rna_SoftBodySettings_ball_size;
FloatPropertyRNA rna_SoftBodySettings_ball_stiff;
FloatPropertyRNA rna_SoftBodySettings_ball_damp;
FloatPropertyRNA rna_SoftBodySettings_bend;
FloatPropertyRNA rna_SoftBodySettings_location_mass_center;
IntPropertyRNA rna_SoftBodySettings_choke;
EnumPropertyRNA rna_SoftBodySettings_collision_type;
FloatPropertyRNA rna_SoftBodySettings_damping;
BooleanPropertyRNA rna_SoftBodySettings_use_edge_collision;
PointerPropertyRNA rna_SoftBodySettings_effector_weights;
FloatPropertyRNA rna_SoftBodySettings_error_threshold;
BooleanPropertyRNA rna_SoftBodySettings_use_estimate_matrix;
BooleanPropertyRNA rna_SoftBodySettings_use_face_collision;
FloatPropertyRNA rna_SoftBodySettings_friction;
IntPropertyRNA rna_SoftBodySettings_fuzzy;
FloatPropertyRNA rna_SoftBodySettings_goal_friction;
FloatPropertyRNA rna_SoftBodySettings_goal_default;
FloatPropertyRNA rna_SoftBodySettings_goal_max;
FloatPropertyRNA rna_SoftBodySettings_goal_min;
FloatPropertyRNA rna_SoftBodySettings_goal_spring;
StringPropertyRNA rna_SoftBodySettings_vertex_group_goal;
FloatPropertyRNA rna_SoftBodySettings_gravity;
FloatPropertyRNA rna_SoftBodySettings_mass;
StringPropertyRNA rna_SoftBodySettings_vertex_group_mass;
IntPropertyRNA rna_SoftBodySettings_step_max;
IntPropertyRNA rna_SoftBodySettings_step_min;
IntPropertyRNA rna_SoftBodySettings_plastic;
BooleanPropertyRNA rna_SoftBodySettings_use_diagnose;
CollectionPropertyRNA rna_SoftBodySettings_rna_properties;
FloatPropertyRNA rna_SoftBodySettings_pull;
FloatPropertyRNA rna_SoftBodySettings_push;
FloatPropertyRNA rna_SoftBodySettings_rotation_estimate;
IntPropertyRNA rna_SoftBodySettings_spring_length;
FloatPropertyRNA rna_SoftBodySettings_scale_estimate;
BooleanPropertyRNA rna_SoftBodySettings_use_self_collision;
FloatPropertyRNA rna_SoftBodySettings_shear;
FloatPropertyRNA rna_SoftBodySettings_speed;
StringPropertyRNA rna_SoftBodySettings_vertex_group_spring;
BooleanPropertyRNA rna_SoftBodySettings_use_stiff_quads;
BooleanPropertyRNA rna_SoftBodySettings_use_edges;
BooleanPropertyRNA rna_SoftBodySettings_use_goal;
BooleanPropertyRNA rna_SoftBodySettings_use_auto_step;

PointerRNA CollisionSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float CollisionSettings_absorption_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->absorption);
}

void CollisionSettings_absorption_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->absorption= CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_damping_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_sbdamp);
}

void CollisionSettings_damping_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_sbdamp= CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_damping_factor_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_damp);
}

void CollisionSettings_damping_factor_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_damp= CLAMPIS(value, 0.0f, 1.0f);
}

int CollisionSettings_use_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->deflect) & 1) != 0);
}

void CollisionSettings_use_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->deflect |= 1;
	else data->deflect &= ~1;
}

float CollisionSettings_friction_factor_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_frict);
}

void CollisionSettings_friction_factor_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_frict= CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_thickness_inner_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_sbift);
}

void CollisionSettings_thickness_inner_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_sbift= CLAMPIS(value, 0.0010000000f, 1.0f);
}

int CollisionSettings_use_particle_kill_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void CollisionSettings_use_particle_kill_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

float CollisionSettings_thickness_outer_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_sboft);
}

void CollisionSettings_thickness_outer_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_sboft= CLAMPIS(value, 0.0010000000f, 1.0f);
}

float CollisionSettings_permeability_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_perm);
}

void CollisionSettings_permeability_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_perm= CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA CollisionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CollisionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_CollisionSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= CollisionSettings_rna_properties_get(iter);
}

void CollisionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= CollisionSettings_rna_properties_get(iter);
}

void CollisionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float CollisionSettings_damping_random_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_rdamp);
}

void CollisionSettings_damping_random_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_rdamp= CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_friction_random_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_rfrict);
}

void CollisionSettings_friction_random_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_rfrict= CLAMPIS(value, 0.0f, 1.0f);
}

float CollisionSettings_stickness_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->pdef_stickness);
}

void CollisionSettings_stickness_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->pdef_stickness= CLAMPIS(value, 0.0f, 10.0f);
}

PointerRNA EffectorWeights_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float EffectorWeights_all_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[0]);
}

void EffectorWeights_all_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[0]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_boid_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[10]);
}

void EffectorWeights_boid_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[10]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_charge_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[8]);
}

void EffectorWeights_charge_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[8]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_curve_guide_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[5]);
}

void EffectorWeights_curve_guide_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[5]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_drag_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[12]);
}

void EffectorWeights_drag_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[12]= CLAMPIS(value, -200.0f, 200.0f);
}

PointerRNA EffectorWeights_group_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->group);
}

void EffectorWeights_group_set(PointerRNA *ptr, PointerRNA value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->group= value.data;
}

float EffectorWeights_force_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[1]);
}

void EffectorWeights_force_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[1]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_gravity_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->global_gravity);
}

void EffectorWeights_gravity_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->global_gravity= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_harmonic_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[7]);
}

void EffectorWeights_harmonic_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[7]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_lennardjones_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[9]);
}

void EffectorWeights_lennardjones_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[9]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_magnetic_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[3]);
}

void EffectorWeights_magnetic_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[3]= CLAMPIS(value, -200.0f, 200.0f);
}

static PointerRNA EffectorWeights_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void EffectorWeights_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_EffectorWeights_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= EffectorWeights_rna_properties_get(iter);
}

void EffectorWeights_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= EffectorWeights_rna_properties_get(iter);
}

void EffectorWeights_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float EffectorWeights_texture_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[6]);
}

void EffectorWeights_texture_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[6]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_turbulence_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[11]);
}

void EffectorWeights_turbulence_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[11]= CLAMPIS(value, -200.0f, 200.0f);
}

int EffectorWeights_apply_to_hair_growing_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void EffectorWeights_apply_to_hair_growing_set(PointerRNA *ptr, int value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

float EffectorWeights_vortex_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[2]);
}

void EffectorWeights_vortex_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[2]= CLAMPIS(value, -200.0f, 200.0f);
}

float EffectorWeights_wind_get(PointerRNA *ptr)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	return (float)(data->weight[4]);
}

void EffectorWeights_wind_set(PointerRNA *ptr, float value)
{
	EffectorWeights *data= (EffectorWeights*)(ptr->data);
	data->weight[4]= CLAMPIS(value, -200.0f, 200.0f);
}

PointerRNA FieldSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int FieldSettings_use_2d_force_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void FieldSettings_use_2d_force_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

int FieldSettings_use_absorption_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void FieldSettings_use_absorption_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int FieldSettings_use_guide_path_add_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void FieldSettings_use_guide_path_add_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

float FieldSettings_guide_clump_amount_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->clump_fac);
}

void FieldSettings_guide_clump_amount_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->clump_fac= CLAMPIS(value, -1.0f, 1.0f);
}

float FieldSettings_guide_kink_amplitude_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->kink_amp);
}

void FieldSettings_guide_kink_amplitude_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->kink_amp= CLAMPIS(value, 0.0f, 10.0f);
}

int FieldSettings_guide_kink_axis_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->kink_axis);
}

void FieldSettings_guide_kink_axis_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->kink_axis= value;
}

int FieldSettings_falloff_type_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->falloff);
}

void FieldSettings_falloff_type_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->falloff= value;
}

float FieldSettings_falloff_power_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_power);
}

void FieldSettings_falloff_power_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_power= CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_flow_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_flow);
}

void FieldSettings_flow_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_flow= CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_guide_free_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->free_end);
}

void FieldSettings_guide_free_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->free_end= CLAMPIS(value, 0.0f, 0.9900000095f);
}

float FieldSettings_guide_kink_frequency_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->kink_freq);
}

void FieldSettings_guide_kink_frequency_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->kink_freq= CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_harmonic_damping_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_damp);
}

void FieldSettings_harmonic_damping_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_damp= CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_inflow_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_flow);
}

void FieldSettings_inflow_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_flow= CLAMPIS(value, -10.0f, 10.0f);
}

int FieldSettings_guide_kink_type_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->kink);
}

void FieldSettings_guide_kink_type_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->kink= value;
}

float FieldSettings_linear_drag_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_strength);
}

void FieldSettings_linear_drag_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_strength= CLAMPIS(value, -2.0f, 2.0f);
}

int FieldSettings_apply_to_location_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 16384) != 0);
}

void FieldSettings_apply_to_location_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 16384;
	else data->flag &= ~16384;
}

float FieldSettings_distance_max_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->maxdist);
}

void FieldSettings_distance_max_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->maxdist= CLAMPIS(value, 0.0f, 1000.0f);
}

float FieldSettings_radial_max_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->maxrad);
}

void FieldSettings_radial_max_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->maxrad= CLAMPIS(value, 0.0f, 1000.0f);
}

float FieldSettings_distance_min_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->mindist);
}

void FieldSettings_distance_min_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->mindist= CLAMPIS(value, 0.0f, 1000.0f);
}

float FieldSettings_guide_minimum_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_strength);
}

void FieldSettings_guide_minimum_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_strength= CLAMPIS(value, 0.0f, 1000.0f);
}

float FieldSettings_radial_min_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->minrad);
}

void FieldSettings_radial_min_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->minrad= CLAMPIS(value, 0.0f, 1000.0f);
}

int FieldSettings_use_multiple_springs_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void FieldSettings_use_multiple_springs_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

float FieldSettings_texture_nabla_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->tex_nabla);
}

void FieldSettings_texture_nabla_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->tex_nabla= CLAMPIS(value, 0.0001000000f, 1.0f);
}

float FieldSettings_noise_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_noise);
}

void FieldSettings_noise_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_noise= CLAMPIS(value, 0.0f, 10.0f);
}

static PointerRNA FieldSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FieldSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FieldSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= FieldSettings_rna_properties_get(iter);
}

void FieldSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= FieldSettings_rna_properties_get(iter);
}

void FieldSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float FieldSettings_quadratic_drag_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_damp);
}

void FieldSettings_quadratic_drag_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_damp= CLAMPIS(value, -2.0f, 2.0f);
}

float FieldSettings_radial_falloff_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_power_r);
}

void FieldSettings_radial_falloff_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_power_r= CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_rest_length_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_size);
}

void FieldSettings_rest_length_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_size= CLAMPIS(value, 0.0f, 1000.0f);
}

int FieldSettings_use_root_coords_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void FieldSettings_use_root_coords_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int FieldSettings_apply_to_rotation_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void FieldSettings_apply_to_rotation_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int FieldSettings_seed_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->seed);
}

void FieldSettings_seed_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->seed= CLAMPIS(value, 1, 128);
}

int FieldSettings_shape_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->shape);
}

void FieldSettings_shape_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->shape= value;
}

float FieldSettings_guide_clump_shape_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->clump_pow);
}

void FieldSettings_guide_clump_shape_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->clump_pow= CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

float FieldSettings_guide_kink_shape_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->kink_shape);
}

void FieldSettings_guide_kink_shape_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->kink_shape= CLAMPIS(value, -0.9990000129f, 0.9990000129f);
}

float FieldSettings_size_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_size);
}

void FieldSettings_size_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_size= CLAMPIS(value, 0.0f, 10.0f);
}

float FieldSettings_strength_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (float)(data->f_strength);
}

void FieldSettings_strength_set(PointerRNA *ptr, float value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->f_strength= CLAMPIS(value, -1000.0f, 1000.0f);
}

PointerRNA FieldSettings_texture_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->tex);
}

void FieldSettings_texture_set(PointerRNA *ptr, PointerRNA value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);

	if(data->tex)
		id_us_min((ID*)data->tex);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->tex= value.data;
}

int FieldSettings_texture_mode_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->tex_mode);
}

void FieldSettings_texture_mode_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->tex_mode= value;
}

int FieldSettings_type_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->forcefield);
}

void FieldSettings_type_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->forcefield= value;
}

int FieldSettings_use_object_coords_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void FieldSettings_use_object_coords_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 64;
	else data->flag &= ~64;
}

int FieldSettings_use_global_coords_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void FieldSettings_use_global_coords_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 64;
	else data->flag &= ~64;
}

int FieldSettings_use_max_distance_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void FieldSettings_use_max_distance_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int FieldSettings_use_radial_max_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void FieldSettings_use_radial_max_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 512;
	else data->flag &= ~512;
}

int FieldSettings_use_min_distance_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void FieldSettings_use_min_distance_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 256;
	else data->flag &= ~256;
}

int FieldSettings_use_radial_min_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void FieldSettings_use_radial_min_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int FieldSettings_use_guide_path_weight_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void FieldSettings_use_guide_path_weight_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	if(value) data->flag |= 65536;
	else data->flag &= ~65536;
}

int FieldSettings_z_direction_get(PointerRNA *ptr)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	return (int)(data->zdir);
}

void FieldSettings_z_direction_set(PointerRNA *ptr, int value)
{
	PartDeflect *data= (PartDeflect*)(ptr->data);
	data->zdir= value;
}

PointerRNA GameSoftBodySettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int GameSoftBodySettings_use_bending_constraints_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void GameSoftBodySettings_use_bending_constraints_set(PointerRNA *ptr, int value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int GameSoftBodySettings_cluster_iterations_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (int)(data->numclusteriterations);
}

void GameSoftBodySettings_cluster_iterations_set(PointerRNA *ptr, int value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	data->numclusteriterations= CLAMPIS(value, 1, 128);
}

float GameSoftBodySettings_dynamic_friction_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (float)(data->kDF);
}

void GameSoftBodySettings_dynamic_friction_set(PointerRNA *ptr, float value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	data->kDF= CLAMPIS(value, 0.0f, 1.0f);
}

float GameSoftBodySettings_linear_stiffness_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (float)(data->linStiff);
}

void GameSoftBodySettings_linear_stiffness_set(PointerRNA *ptr, float value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	data->linStiff= CLAMPIS(value, 0.0f, 1.0f);
}

float GameSoftBodySettings_collision_margin_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (float)(data->margin);
}

void GameSoftBodySettings_collision_margin_set(PointerRNA *ptr, float value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	data->margin= CLAMPIS(value, 0.0099999998f, 1.0f);
}

int GameSoftBodySettings_location_iterations_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (int)(data->piterations);
}

void GameSoftBodySettings_location_iterations_set(PointerRNA *ptr, int value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	data->piterations= CLAMPIS(value, 0, 10);
}

static PointerRNA GameSoftBodySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GameSoftBodySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GameSoftBodySettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= GameSoftBodySettings_rna_properties_get(iter);
}

void GameSoftBodySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= GameSoftBodySettings_rna_properties_get(iter);
}

void GameSoftBodySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GameSoftBodySettings_use_cluster_rigid_to_softbody_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (((data->collisionflags) & 4) != 0);
}

void GameSoftBodySettings_use_cluster_rigid_to_softbody_set(PointerRNA *ptr, int value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	if(value) data->collisionflags |= 4;
	else data->collisionflags &= ~4;
}

int GameSoftBodySettings_use_shape_match_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void GameSoftBodySettings_use_shape_match_set(PointerRNA *ptr, int value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int GameSoftBodySettings_use_cluster_soft_to_softbody_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (((data->collisionflags) & 8) != 0);
}

void GameSoftBodySettings_use_cluster_soft_to_softbody_set(PointerRNA *ptr, int value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	if(value) data->collisionflags |= 8;
	else data->collisionflags &= ~8;
}

float GameSoftBodySettings_shape_threshold_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (float)(data->kMT);
}

void GameSoftBodySettings_shape_threshold_set(PointerRNA *ptr, float value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	data->kMT= CLAMPIS(value, 0.0f, 1.0f);
}

float GameSoftBodySettings_weld_threshold_get(PointerRNA *ptr)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	return (float)(data->welding);
}

void GameSoftBodySettings_weld_threshold_set(PointerRNA *ptr, float value)
{
	BulletSoftBody *data= (BulletSoftBody*)(ptr->data);
	data->welding= CLAMPIS(value, 0.0f, 0.0099999998f);
}

PointerRNA PointCache_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void PointCache_name_get(PointerRNA *ptr, char *value)
{
	PointCache *data= (PointCache*)(ptr->data);
	BLI_strncpy(value, data->name, 64);
}

int PointCache_name_length(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return strlen(data->name);
}

void PointCache_name_set(PointerRNA *ptr, const char *value)
{
	PointCache *data= (PointCache*)(ptr->data);
	BLI_strncpy(data->name, value, 64);
}

int PointCache_compression_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (int)(data->compression);
}

void PointCache_compression_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	data->compression= value;
}

int PointCache_index_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (int)(data->index);
}

void PointCache_index_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	data->index= CLAMPIS(value, -1, 100);
}

void PointCache_info_get(PointerRNA *ptr, char *value)
{
	PointCache *data= (PointCache*)(ptr->data);
	BLI_strncpy(value, data->info, 64);
}

int PointCache_info_length(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return strlen(data->info);
}

int PointCache_frame_step_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (int)(data->step);
}

void PointCache_frame_step_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	data->step= CLAMPIS(value, 1, 20);
}

int PointCache_is_outdated_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

int PointCache_use_disk_cache_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void PointCache_use_disk_cache_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	if(value) data->flag |= 64;
	else data->flag &= ~64;
}

int PointCache_frame_end_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (int)(data->endframe);
}

void PointCache_frame_end_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	data->endframe= CLAMPIS(value, 1, 300000);
}

int PointCache_use_external_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void PointCache_use_external_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	if(value) data->flag |= 512;
	else data->flag &= ~512;
}

void PointCache_filepath_get(PointerRNA *ptr, char *value)
{
	PointCache *data= (PointCache*)(ptr->data);
	BLI_strncpy(value, data->path, 240);
}

int PointCache_filepath_length(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return strlen(data->path);
}

void PointCache_filepath_set(PointerRNA *ptr, const char *value)
{
	PointCache *data= (PointCache*)(ptr->data);
	BLI_strncpy(data->path, value, 240);
}

int PointCache_use_library_path_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return !(((data->flag) & 2048) != 0);
}

void PointCache_use_library_path_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	if(!value) data->flag |= 2048;
	else data->flag &= ~2048;
}

static PointerRNA PointCache_point_caches_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_PointCache, rna_iterator_listbase_get(iter));
}

void PointCache_point_caches_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_PointCache_point_caches;

	rna_Cache_list_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= PointCache_point_caches_get(iter);
}

void PointCache_point_caches_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= PointCache_point_caches_get(iter);
}

void PointCache_point_caches_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA PointCache_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PointCache_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_PointCache_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= PointCache_rna_properties_get(iter);
}

void PointCache_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= PointCache_rna_properties_get(iter);
}

void PointCache_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PointCache_use_quick_cache_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void PointCache_use_quick_cache_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

int PointCache_frame_start_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (int)(data->startframe);
}

void PointCache_frame_start_set(PointerRNA *ptr, int value)
{
	PointCache *data= (PointCache*)(ptr->data);
	data->startframe= CLAMPIS(value, 1, 300000);
}

int PointCache_frames_skipped_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (((data->flag) & 256) != 0);
}

int PointCache_is_baked_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

int PointCache_is_baking_get(PointerRNA *ptr)
{
	PointCache *data= (PointCache*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

PointerRNA PointCaches_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int PointCaches_active_index_get(PointerRNA *ptr)
{
	return rna_Cache_active_point_cache_index_get(ptr);
}

void PointCaches_active_index_set(PointerRNA *ptr, int value)
{
	rna_Cache_active_point_cache_index_set(ptr, value);
}

static PointerRNA PointCaches_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PointCaches_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_PointCaches_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= PointCaches_rna_properties_get(iter);
}

void PointCaches_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= PointCaches_rna_properties_get(iter);
}

void PointCaches_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA SoftBodySettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SoftBodySettings_aero_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->aeroedge);
}

void SoftBodySettings_aero_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->aeroedge= CLAMPIS(value, 0, 30000);
}

int SoftBodySettings_aerodynamics_type_get(PointerRNA *ptr)
{
	return rna_SoftBodySettings_new_aero_get(ptr);
}

void SoftBodySettings_aerodynamics_type_set(PointerRNA *ptr, int value)
{
	rna_SoftBodySettings_new_aero_set(ptr, value);
}

float SoftBodySettings_ball_size_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->colball);
}

void SoftBodySettings_ball_size_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->colball= CLAMPIS(value, -10.0f, 10.0f);
}

float SoftBodySettings_ball_stiff_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->ballstiff);
}

void SoftBodySettings_ball_stiff_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->ballstiff= CLAMPIS(value, 0.0010000000f, 100.0f);
}

float SoftBodySettings_ball_damp_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->balldamp);
}

void SoftBodySettings_ball_damp_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->balldamp= CLAMPIS(value, 0.0010000000f, 1.0f);
}

float SoftBodySettings_bend_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->secondspring);
}

void SoftBodySettings_bend_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->secondspring= CLAMPIS(value, 0.0f, 10.0f);
}

void SoftBodySettings_location_mass_center_get(PointerRNA *ptr, float values[3])
{
	SoftBody *data= (SoftBody*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->lcom)[i]);
	}
}

void SoftBodySettings_location_mass_center_set(PointerRNA *ptr, const float values[3])
{
	SoftBody *data= (SoftBody*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->lcom)[i]= values[i];
	}
}

int SoftBodySettings_choke_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->choke);
}

void SoftBodySettings_choke_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->choke= CLAMPIS(value, 0, 100);
}

int SoftBodySettings_collision_type_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->sbc_mode);
}

void SoftBodySettings_collision_type_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->sbc_mode= value;
}

float SoftBodySettings_damping_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->infrict);
}

void SoftBodySettings_damping_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->infrict= CLAMPIS(value, 0.0f, 50.0f);
}

int SoftBodySettings_use_edge_collision_get(PointerRNA *ptr)
{
	return rna_SoftBodySettings_edge_collision_get(ptr);
}

void SoftBodySettings_use_edge_collision_set(PointerRNA *ptr, int value)
{
	rna_SoftBodySettings_edge_collision_set(ptr, value);
}

PointerRNA SoftBodySettings_effector_weights_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

float SoftBodySettings_error_threshold_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->rklimit);
}

void SoftBodySettings_error_threshold_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->rklimit= CLAMPIS(value, 0.0010000000f, 10.0f);
}

int SoftBodySettings_use_estimate_matrix_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (((data->solverflags) & 4) != 0);
}

void SoftBodySettings_use_estimate_matrix_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	if(value) data->solverflags |= 4;
	else data->solverflags &= ~4;
}

int SoftBodySettings_use_face_collision_get(PointerRNA *ptr)
{
	return rna_SoftBodySettings_face_collision_get(ptr);
}

void SoftBodySettings_use_face_collision_set(PointerRNA *ptr, int value)
{
	rna_SoftBodySettings_face_collision_set(ptr, value);
}

float SoftBodySettings_friction_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->mediafrict);
}

void SoftBodySettings_friction_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->mediafrict= CLAMPIS(value, 0.0f, 50.0f);
}

int SoftBodySettings_fuzzy_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->fuzzyness);
}

void SoftBodySettings_fuzzy_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->fuzzyness= CLAMPIS(value, 1, 100);
}

float SoftBodySettings_goal_friction_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->goalfrict);
}

void SoftBodySettings_goal_friction_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->goalfrict= CLAMPIS(value, 0.0f, 50.0f);
}

float SoftBodySettings_goal_default_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->defgoal);
}

void SoftBodySettings_goal_default_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->defgoal= CLAMPIS(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_max_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->maxgoal);
}

void SoftBodySettings_goal_max_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->maxgoal= CLAMPIS(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_min_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->mingoal);
}

void SoftBodySettings_goal_min_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->mingoal= CLAMPIS(value, 0.0f, 1.0f);
}

float SoftBodySettings_goal_spring_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->goalspring);
}

void SoftBodySettings_goal_spring_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->goalspring= CLAMPIS(value, 0.0f, 0.9990000129f);
}

void SoftBodySettings_vertex_group_goal_get(PointerRNA *ptr, char *value)
{
	rna_SoftBodySettings_goal_vgroup_get(ptr, value);
}

int SoftBodySettings_vertex_group_goal_length(PointerRNA *ptr)
{
	return rna_SoftBodySettings_goal_vgroup_length(ptr);
}

void SoftBodySettings_vertex_group_goal_set(PointerRNA *ptr, const char *value)
{
	rna_SoftBodySettings_goal_vgroup_set(ptr, value);
}

float SoftBodySettings_gravity_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->grav);
}

void SoftBodySettings_gravity_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->grav= CLAMPIS(value, -10.0f, 10.0f);
}

float SoftBodySettings_mass_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->nodemass);
}

void SoftBodySettings_mass_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->nodemass= CLAMPIS(value, 0.0f, 50000.0f);
}

void SoftBodySettings_vertex_group_mass_get(PointerRNA *ptr, char *value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	BLI_strncpy(value, data->namedVG_Mass, 32);
}

int SoftBodySettings_vertex_group_mass_length(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return strlen(data->namedVG_Mass);
}

void SoftBodySettings_vertex_group_mass_set(PointerRNA *ptr, const char *value)
{
	rna_SoftBodySettings_mass_vgroup_set(ptr, value);
}

int SoftBodySettings_step_max_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->maxloops);
}

void SoftBodySettings_step_max_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->maxloops= CLAMPIS(value, 0, 30000);
}

int SoftBodySettings_step_min_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->minloops);
}

void SoftBodySettings_step_min_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->minloops= CLAMPIS(value, 0, 30000);
}

int SoftBodySettings_plastic_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->plastic);
}

void SoftBodySettings_plastic_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->plastic= CLAMPIS(value, 0, 100);
}

int SoftBodySettings_use_diagnose_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (((data->solverflags) & 1) != 0);
}

void SoftBodySettings_use_diagnose_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	if(value) data->solverflags |= 1;
	else data->solverflags &= ~1;
}

static PointerRNA SoftBodySettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SoftBodySettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_SoftBodySettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= SoftBodySettings_rna_properties_get(iter);
}

void SoftBodySettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= SoftBodySettings_rna_properties_get(iter);
}

void SoftBodySettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float SoftBodySettings_pull_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->inspring);
}

void SoftBodySettings_pull_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->inspring= CLAMPIS(value, 0.0f, 0.9990000129f);
}

float SoftBodySettings_push_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->inpush);
}

void SoftBodySettings_push_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->inpush= CLAMPIS(value, 0.0f, 0.9990000129f);
}

void SoftBodySettings_rotation_estimate_get(PointerRNA *ptr, float values[9])
{
	SoftBody *data= (SoftBody*)(ptr->data);
	int i;

	for(i=0; i<9; i++) {
		values[i]= (float)(((float*)data->lrot)[i]);
	}
}

void SoftBodySettings_rotation_estimate_set(PointerRNA *ptr, const float values[9])
{
	SoftBody *data= (SoftBody*)(ptr->data);
	int i;

	for(i=0; i<9; i++) {
		((float*)data->lrot)[i]= values[i];
	}
}

int SoftBodySettings_spring_length_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (int)(data->springpreload);
}

void SoftBodySettings_spring_length_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->springpreload= CLAMPIS(value, 0, 200);
}

void SoftBodySettings_scale_estimate_get(PointerRNA *ptr, float values[9])
{
	SoftBody *data= (SoftBody*)(ptr->data);
	int i;

	for(i=0; i<9; i++) {
		values[i]= (float)(((float*)data->lscale)[i]);
	}
}

void SoftBodySettings_scale_estimate_set(PointerRNA *ptr, const float values[9])
{
	SoftBody *data= (SoftBody*)(ptr->data);
	int i;

	for(i=0; i<9; i++) {
		((float*)data->lscale)[i]= values[i];
	}
}

int SoftBodySettings_use_self_collision_get(PointerRNA *ptr)
{
	return rna_SoftBodySettings_self_collision_get(ptr);
}

void SoftBodySettings_use_self_collision_set(PointerRNA *ptr, int value)
{
	rna_SoftBodySettings_self_collision_set(ptr, value);
}

float SoftBodySettings_shear_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->shearstiff);
}

void SoftBodySettings_shear_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->shearstiff= CLAMPIS(value, 0.0f, 1.0f);
}

float SoftBodySettings_speed_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (float)(data->physics_speed);
}

void SoftBodySettings_speed_set(PointerRNA *ptr, float value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	data->physics_speed= CLAMPIS(value, 0.0099999998f, 100.0f);
}

void SoftBodySettings_vertex_group_spring_get(PointerRNA *ptr, char *value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	BLI_strncpy(value, data->namedVG_Spring_K, 32);
}

int SoftBodySettings_vertex_group_spring_length(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return strlen(data->namedVG_Spring_K);
}

void SoftBodySettings_vertex_group_spring_set(PointerRNA *ptr, const char *value)
{
	rna_SoftBodySettings_spring_vgroup_set(ptr, value);
}

int SoftBodySettings_use_stiff_quads_get(PointerRNA *ptr)
{
	return rna_SoftBodySettings_stiff_quads_get(ptr);
}

void SoftBodySettings_use_stiff_quads_set(PointerRNA *ptr, int value)
{
	rna_SoftBodySettings_stiff_quads_set(ptr, value);
}

int SoftBodySettings_use_edges_get(PointerRNA *ptr)
{
	return rna_SoftBodySettings_use_edges_get(ptr);
}

void SoftBodySettings_use_edges_set(PointerRNA *ptr, int value)
{
	rna_SoftBodySettings_use_edges_set(ptr, value);
}

int SoftBodySettings_use_goal_get(PointerRNA *ptr)
{
	return rna_SoftBodySettings_use_goal_get(ptr);
}

void SoftBodySettings_use_goal_set(PointerRNA *ptr, int value)
{
	rna_SoftBodySettings_use_goal_set(ptr, value);
}

int SoftBodySettings_use_auto_step_get(PointerRNA *ptr)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	return (((data->solverflags) & 2) != 0);
}

void SoftBodySettings_use_auto_step_set(PointerRNA *ptr, int value)
{
	SoftBody *data= (SoftBody*)(ptr->data);
	if(value) data->solverflags |= 2;
	else data->solverflags &= ~2;
}








/* Collision Settings */
PointerPropertyRNA rna_CollisionSettings_rna_type = {
	{(PropertyRNA*)&rna_CollisionSettings_absorption, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CollisionSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_CollisionSettings_absorption = {
	{(PropertyRNA*)&rna_CollisionSettings_damping, (PropertyRNA*)&rna_CollisionSettings_rna_type,
	-1, "absorption", 8195, "Absorption",
	"How much of effector force gets lost during collision with this object (in percent)",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, absorption), 4, NULL},
	CollisionSettings_absorption_get, CollisionSettings_absorption_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_damping = {
	{(PropertyRNA*)&rna_CollisionSettings_damping_factor, (PropertyRNA*)&rna_CollisionSettings_absorption,
	-1, "damping", 8195, "Damping",
	"Amount of damping during collision",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_sbdamp), 4, NULL},
	CollisionSettings_damping_get, CollisionSettings_damping_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_damping_factor = {
	{(PropertyRNA*)&rna_CollisionSettings_use, (PropertyRNA*)&rna_CollisionSettings_damping,
	-1, "damping_factor", 8195, "Damping Factor",
	"Amount of damping during particle collision",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_damp), 4, NULL},
	CollisionSettings_damping_factor_get, CollisionSettings_damping_factor_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_CollisionSettings_use = {
	{(PropertyRNA*)&rna_CollisionSettings_friction_factor, (PropertyRNA*)&rna_CollisionSettings_damping_factor,
	-1, "use", 3, "Enabled",
	"Enable this objects as a collider for physics systems",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	CollisionSettings_use_get, CollisionSettings_use_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CollisionSettings_friction_factor = {
	{(PropertyRNA*)&rna_CollisionSettings_thickness_inner, (PropertyRNA*)&rna_CollisionSettings_use,
	-1, "friction_factor", 8195, "Friction Factor",
	"Amount of friction during particle collision",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_frict), 4, NULL},
	CollisionSettings_friction_factor_get, CollisionSettings_friction_factor_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_thickness_inner = {
	{(PropertyRNA*)&rna_CollisionSettings_use_particle_kill, (PropertyRNA*)&rna_CollisionSettings_friction_factor,
	-1, "thickness_inner", 8195, "Inner Thickness",
	"Inner face thickness",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_sbift), 4, NULL},
	CollisionSettings_thickness_inner_get, CollisionSettings_thickness_inner_set, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_CollisionSettings_use_particle_kill = {
	{(PropertyRNA*)&rna_CollisionSettings_thickness_outer, (PropertyRNA*)&rna_CollisionSettings_thickness_inner,
	-1, "use_particle_kill", 3, "Kill Particles",
	"Kill collided particles",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	CollisionSettings_use_particle_kill_get, CollisionSettings_use_particle_kill_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CollisionSettings_thickness_outer = {
	{(PropertyRNA*)&rna_CollisionSettings_permeability, (PropertyRNA*)&rna_CollisionSettings_use_particle_kill,
	-1, "thickness_outer", 8195, "Outer Thickness",
	"Outer face thickness",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_sboft), 4, NULL},
	CollisionSettings_thickness_outer_get, CollisionSettings_thickness_outer_set, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_permeability = {
	{(PropertyRNA*)&rna_CollisionSettings_rna_properties, (PropertyRNA*)&rna_CollisionSettings_thickness_outer,
	-1, "permeability", 8195, "Permeability",
	"Chance that the particle will pass through the mesh",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_perm), 4, NULL},
	CollisionSettings_permeability_get, CollisionSettings_permeability_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_CollisionSettings_rna_properties = {
	{(PropertyRNA*)&rna_CollisionSettings_damping_random, (PropertyRNA*)&rna_CollisionSettings_permeability,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CollisionSettings_rna_properties_begin, CollisionSettings_rna_properties_next, CollisionSettings_rna_properties_end, CollisionSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_CollisionSettings_damping_random = {
	{(PropertyRNA*)&rna_CollisionSettings_friction_random, (PropertyRNA*)&rna_CollisionSettings_rna_properties,
	-1, "damping_random", 8195, "Random Damping",
	"Random variation of damping",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_rdamp), 4, NULL},
	CollisionSettings_damping_random_get, CollisionSettings_damping_random_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_friction_random = {
	{(PropertyRNA*)&rna_CollisionSettings_stickness, (PropertyRNA*)&rna_CollisionSettings_damping_random,
	-1, "friction_random", 8195, "Random Friction",
	"Random variation of friction",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_rfrict), 4, NULL},
	CollisionSettings_friction_random_get, CollisionSettings_friction_random_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CollisionSettings_stickness = {
	{NULL, (PropertyRNA*)&rna_CollisionSettings_friction_random,
	-1, "stickness", 8195, "Stickness",
	"Amount of stickness to surface collision",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_CollisionSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, pdef_stickness), 4, NULL},
	CollisionSettings_stickness_get, CollisionSettings_stickness_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_CollisionSettings = {
	{(ContainerRNA *)&RNA_ColorRamp, (ContainerRNA *)&RNA_CollisionSensor,
	NULL,
	{(PropertyRNA*)&rna_CollisionSettings_rna_type, (PropertyRNA*)&rna_CollisionSettings_stickness}},
	"CollisionSettings"	, NULL,NULL
, 0, "Collision Settings", "Collision settings for object in physics simulation",
	17,
	NULL, (PropertyRNA*)&rna_CollisionSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_CollisionSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Effector Weights */
PointerPropertyRNA rna_EffectorWeights_rna_type = {
	{(PropertyRNA*)&rna_EffectorWeights_all, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EffectorWeights_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_EffectorWeights_all = {
	{(PropertyRNA*)&rna_EffectorWeights_boid, (PropertyRNA*)&rna_EffectorWeights_rna_type,
	-1, "all", 8195, "All",
	"All effector\'s weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[0]), 4, NULL},
	EffectorWeights_all_get, EffectorWeights_all_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_boid = {
	{(PropertyRNA*)&rna_EffectorWeights_charge, (PropertyRNA*)&rna_EffectorWeights_all,
	-1, "boid", 8195, "Boid",
	"Boid effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[10]), 4, NULL},
	EffectorWeights_boid_get, EffectorWeights_boid_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_charge = {
	{(PropertyRNA*)&rna_EffectorWeights_curve_guide, (PropertyRNA*)&rna_EffectorWeights_boid,
	-1, "charge", 8195, "Charge",
	"Charge effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[8]), 4, NULL},
	EffectorWeights_charge_get, EffectorWeights_charge_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_curve_guide = {
	{(PropertyRNA*)&rna_EffectorWeights_drag, (PropertyRNA*)&rna_EffectorWeights_charge,
	-1, "curve_guide", 8195, "Curve Guide",
	"Curve guide effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[5]), 4, NULL},
	EffectorWeights_curve_guide_get, EffectorWeights_curve_guide_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_drag = {
	{(PropertyRNA*)&rna_EffectorWeights_group, (PropertyRNA*)&rna_EffectorWeights_curve_guide,
	-1, "drag", 8195, "Drag",
	"Drag effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[12]), 4, NULL},
	EffectorWeights_drag_get, EffectorWeights_drag_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_EffectorWeights_group = {
	{(PropertyRNA*)&rna_EffectorWeights_force, (PropertyRNA*)&rna_EffectorWeights_drag,
	-1, "group", 1, "Effector Group",
	"Limit effectors to this Group",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	EffectorWeights_group_get, EffectorWeights_group_set, NULL, NULL,&RNA_Group
};

FloatPropertyRNA rna_EffectorWeights_force = {
	{(PropertyRNA*)&rna_EffectorWeights_gravity, (PropertyRNA*)&rna_EffectorWeights_group,
	-1, "force", 8195, "Force",
	"Force effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[1]), 4, NULL},
	EffectorWeights_force_get, EffectorWeights_force_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_gravity = {
	{(PropertyRNA*)&rna_EffectorWeights_harmonic, (PropertyRNA*)&rna_EffectorWeights_force,
	-1, "gravity", 8195, "Gravity",
	"Global gravity weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, global_gravity), 4, NULL},
	EffectorWeights_gravity_get, EffectorWeights_gravity_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_harmonic = {
	{(PropertyRNA*)&rna_EffectorWeights_lennardjones, (PropertyRNA*)&rna_EffectorWeights_gravity,
	-1, "harmonic", 8195, "Harmonic",
	"Harmonic effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[7]), 4, NULL},
	EffectorWeights_harmonic_get, EffectorWeights_harmonic_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_lennardjones = {
	{(PropertyRNA*)&rna_EffectorWeights_magnetic, (PropertyRNA*)&rna_EffectorWeights_harmonic,
	-1, "lennardjones", 8195, "Lennard-Jones",
	"Lennard-Jones effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[9]), 4, NULL},
	EffectorWeights_lennardjones_get, EffectorWeights_lennardjones_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_magnetic = {
	{(PropertyRNA*)&rna_EffectorWeights_rna_properties, (PropertyRNA*)&rna_EffectorWeights_lennardjones,
	-1, "magnetic", 8195, "Magnetic",
	"Magnetic effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[3]), 4, NULL},
	EffectorWeights_magnetic_get, EffectorWeights_magnetic_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_EffectorWeights_rna_properties = {
	{(PropertyRNA*)&rna_EffectorWeights_texture, (PropertyRNA*)&rna_EffectorWeights_magnetic,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EffectorWeights_rna_properties_begin, EffectorWeights_rna_properties_next, EffectorWeights_rna_properties_end, EffectorWeights_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_EffectorWeights_texture = {
	{(PropertyRNA*)&rna_EffectorWeights_turbulence, (PropertyRNA*)&rna_EffectorWeights_rna_properties,
	-1, "texture", 8195, "Texture",
	"Texture effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[6]), 4, NULL},
	EffectorWeights_texture_get, EffectorWeights_texture_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_turbulence = {
	{(PropertyRNA*)&rna_EffectorWeights_apply_to_hair_growing, (PropertyRNA*)&rna_EffectorWeights_texture,
	-1, "turbulence", 8195, "Turbulence",
	"Turbulence effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[11]), 4, NULL},
	EffectorWeights_turbulence_get, EffectorWeights_turbulence_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_EffectorWeights_apply_to_hair_growing = {
	{(PropertyRNA*)&rna_EffectorWeights_vortex, (PropertyRNA*)&rna_EffectorWeights_turbulence,
	-1, "apply_to_hair_growing", 3, "Use For Growing Hair",
	"Use force fields when growing hair",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	0, -1, NULL},
	EffectorWeights_apply_to_hair_growing_get, EffectorWeights_apply_to_hair_growing_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_EffectorWeights_vortex = {
	{(PropertyRNA*)&rna_EffectorWeights_wind, (PropertyRNA*)&rna_EffectorWeights_apply_to_hair_growing,
	-1, "vortex", 8195, "Vortex",
	"Vortex effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[2]), 4, NULL},
	EffectorWeights_vortex_get, EffectorWeights_vortex_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EffectorWeights_wind = {
	{NULL, (PropertyRNA*)&rna_EffectorWeights_vortex,
	-1, "wind", 8195, "Wind",
	"Wind effector weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_EffectorWeight_update, 0, NULL, NULL,
	offsetof(EffectorWeights, weight[4]), 4, NULL},
	EffectorWeights_wind_get, EffectorWeights_wind_set, NULL, NULL, NULL, 0.0f, 1.0f, -200.0f, 200.0f, 0.1000000015f, 3, 0.0f, NULL
};

StructRNA RNA_EffectorWeights = {
	{(ContainerRNA *)&RNA_EnumProperty, (ContainerRNA *)&RNA_EffectSequence,
	NULL,
	{(PropertyRNA*)&rna_EffectorWeights_rna_type, (PropertyRNA*)&rna_EffectorWeights_wind}},
	"EffectorWeights"	, NULL,NULL
, 0, "Effector Weights", "Effector weights for physics simulation",
	89,
	NULL, (PropertyRNA*)&rna_EffectorWeights_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_EffectorWeight_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Field Settings */
PointerPropertyRNA rna_FieldSettings_rna_type = {
	{(PropertyRNA*)&rna_FieldSettings_use_2d_force, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_FieldSettings_use_2d_force = {
	{(PropertyRNA*)&rna_FieldSettings_use_absorption, (PropertyRNA*)&rna_FieldSettings_rna_type,
	-1, "use_2d_force", 3, "2D",
	"Apply force only in 2d",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_2d_force_get, FieldSettings_use_2d_force_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_absorption = {
	{(PropertyRNA*)&rna_FieldSettings_use_guide_path_add, (PropertyRNA*)&rna_FieldSettings_use_2d_force,
	-1, "use_absorption", 3, "Absorption",
	"Force gets absorbed by collision objects",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_absorption_get, FieldSettings_use_absorption_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_guide_path_add = {
	{(PropertyRNA*)&rna_FieldSettings_guide_clump_amount, (PropertyRNA*)&rna_FieldSettings_use_absorption,
	-1, "use_guide_path_add", 3, "Additive",
	"Based on distance/falloff it adds a portion of the entire path",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_guide_path_add_get, FieldSettings_use_guide_path_add_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_clump_amount = {
	{(PropertyRNA*)&rna_FieldSettings_guide_kink_amplitude, (PropertyRNA*)&rna_FieldSettings_use_guide_path_add,
	-1, "guide_clump_amount", 8195, "Amount",
	"Amount of clumping",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, clump_fac), 4, NULL},
	FieldSettings_guide_clump_amount_get, FieldSettings_guide_clump_amount_set, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_kink_amplitude = {
	{(PropertyRNA*)&rna_FieldSettings_guide_kink_axis, (PropertyRNA*)&rna_FieldSettings_guide_clump_amount,
	-1, "guide_kink_amplitude", 8195, "Amplitude",
	"The amplitude of the offset",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, kink_amp), 4, NULL},
	FieldSettings_guide_kink_amplitude_get, FieldSettings_guide_kink_amplitude_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_FieldSettings_guide_kink_axis_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_guide_kink_axis = {
	{(PropertyRNA*)&rna_FieldSettings_falloff_type, (PropertyRNA*)&rna_FieldSettings_guide_kink_amplitude,
	-1, "guide_kink_axis", 3, "Axis",
	"Which axis to use for offset",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_guide_kink_axis_get, FieldSettings_guide_kink_axis_set, NULL, rna_FieldSettings_guide_kink_axis_items, 3, 0
};

static EnumPropertyItem rna_FieldSettings_falloff_type_items[4] = {
	{0, "SPHERE", 0, "Sphere", ""},
	{1, "TUBE", 0, "Tube", ""},
	{2, "CONE", 0, "Cone", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_falloff_type = {
	{(PropertyRNA*)&rna_FieldSettings_falloff_power, (PropertyRNA*)&rna_FieldSettings_guide_kink_axis,
	-1, "falloff_type", 3, "Fall-Off",
	"Fall-off shape",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_falloff_type_get, FieldSettings_falloff_type_set, NULL, rna_FieldSettings_falloff_type_items, 3, 0
};

FloatPropertyRNA rna_FieldSettings_falloff_power = {
	{(PropertyRNA*)&rna_FieldSettings_flow, (PropertyRNA*)&rna_FieldSettings_falloff_type,
	-1, "falloff_power", 8195, "Falloff Power",
	"Falloff power (real gravitational falloff = 2)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_power), 4, NULL},
	FieldSettings_falloff_power_get, FieldSettings_falloff_power_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_flow = {
	{(PropertyRNA*)&rna_FieldSettings_guide_free, (PropertyRNA*)&rna_FieldSettings_falloff_power,
	-1, "flow", 8195, "Flow",
	"Convert effector force into air flow velocity",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_flow), 4, NULL},
	FieldSettings_flow_get, FieldSettings_flow_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_free = {
	{(PropertyRNA*)&rna_FieldSettings_guide_kink_frequency, (PropertyRNA*)&rna_FieldSettings_flow,
	-1, "guide_free", 8195, "Free",
	"Guide-free time from particle life\'s end",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, free_end), 4, NULL},
	FieldSettings_guide_free_get, FieldSettings_guide_free_set, NULL, NULL, NULL, 0.0f, 0.9900000095f, 0.0f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_kink_frequency = {
	{(PropertyRNA*)&rna_FieldSettings_harmonic_damping, (PropertyRNA*)&rna_FieldSettings_guide_free,
	-1, "guide_kink_frequency", 8195, "Frequency",
	"The frequency of the offset (1/total length)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, kink_freq), 4, NULL},
	FieldSettings_guide_kink_frequency_get, FieldSettings_guide_kink_frequency_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_harmonic_damping = {
	{(PropertyRNA*)&rna_FieldSettings_inflow, (PropertyRNA*)&rna_FieldSettings_guide_kink_frequency,
	-1, "harmonic_damping", 8195, "Harmonic Damping",
	"Damping of the harmonic force",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_damp), 4, NULL},
	FieldSettings_harmonic_damping_get, FieldSettings_harmonic_damping_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_inflow = {
	{(PropertyRNA*)&rna_FieldSettings_guide_kink_type, (PropertyRNA*)&rna_FieldSettings_harmonic_damping,
	-1, "inflow", 8195, "Inflow",
	"Inwards component of the vortex force",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_flow), 4, NULL},
	FieldSettings_inflow_get, FieldSettings_inflow_set, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_FieldSettings_guide_kink_type_items[8] = {
	{0, "NONE", 0, "Nothing", ""},
	{1, "CURL", 0, "Curl", ""},
	{2, "RADIAL", 0, "Radial", ""},
	{3, "WAVE", 0, "Wave", ""},
	{4, "BRAID", 0, "Braid", ""},
	{5, "ROTATION", 0, "Rotation", ""},
	{6, "ROLL", 0, "Roll", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_guide_kink_type = {
	{(PropertyRNA*)&rna_FieldSettings_linear_drag, (PropertyRNA*)&rna_FieldSettings_inflow,
	-1, "guide_kink_type", 3, "Kink",
	"Type of periodic offset on the curve",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_guide_kink_type_get, FieldSettings_guide_kink_type_set, NULL, rna_FieldSettings_guide_kink_type_items, 7, 0
};

FloatPropertyRNA rna_FieldSettings_linear_drag = {
	{(PropertyRNA*)&rna_FieldSettings_apply_to_location, (PropertyRNA*)&rna_FieldSettings_guide_kink_type,
	-1, "linear_drag", 8195, "Linear Drag",
	"Drag component proportional to velocity",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_strength), 4, NULL},
	FieldSettings_linear_drag_get, FieldSettings_linear_drag_set, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_FieldSettings_apply_to_location = {
	{(PropertyRNA*)&rna_FieldSettings_distance_max, (PropertyRNA*)&rna_FieldSettings_linear_drag,
	-1, "apply_to_location", 3, "Location",
	"Effect particles\' location",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_apply_to_location_get, FieldSettings_apply_to_location_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FieldSettings_distance_max = {
	{(PropertyRNA*)&rna_FieldSettings_radial_max, (PropertyRNA*)&rna_FieldSettings_apply_to_location,
	-1, "distance_max", 8195, "Maximum Distance",
	"Maximum distance for the field to work",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, maxdist), 4, NULL},
	FieldSettings_distance_max_get, FieldSettings_distance_max_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_radial_max = {
	{(PropertyRNA*)&rna_FieldSettings_distance_min, (PropertyRNA*)&rna_FieldSettings_distance_max,
	-1, "radial_max", 8195, "Maximum Radial Distance",
	"Maximum radial distance for the field to work",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, maxrad), 4, NULL},
	FieldSettings_radial_max_get, FieldSettings_radial_max_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_distance_min = {
	{(PropertyRNA*)&rna_FieldSettings_guide_minimum, (PropertyRNA*)&rna_FieldSettings_radial_max,
	-1, "distance_min", 8195, "Minimum Distance",
	"Minimum distance for the field\'s fall-off",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, mindist), 4, NULL},
	FieldSettings_distance_min_get, FieldSettings_distance_min_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_minimum = {
	{(PropertyRNA*)&rna_FieldSettings_radial_min, (PropertyRNA*)&rna_FieldSettings_distance_min,
	-1, "guide_minimum", 8195, "Minimum Distance",
	"The distance from which particles are affected fully",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_strength), 4, NULL},
	FieldSettings_guide_minimum_get, FieldSettings_guide_minimum_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_radial_min = {
	{(PropertyRNA*)&rna_FieldSettings_use_multiple_springs, (PropertyRNA*)&rna_FieldSettings_guide_minimum,
	-1, "radial_min", 8195, "Minimum Radial Distance",
	"Minimum radial distance for the field\'s fall-off",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, minrad), 4, NULL},
	FieldSettings_radial_min_get, FieldSettings_radial_min_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_multiple_springs = {
	{(PropertyRNA*)&rna_FieldSettings_texture_nabla, (PropertyRNA*)&rna_FieldSettings_radial_min,
	-1, "use_multiple_springs", 3, "Multiple Springs",
	"Every point is effected by multiple springs",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_multiple_springs_get, FieldSettings_use_multiple_springs_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FieldSettings_texture_nabla = {
	{(PropertyRNA*)&rna_FieldSettings_noise, (PropertyRNA*)&rna_FieldSettings_use_multiple_springs,
	-1, "texture_nabla", 8195, "Nabla",
	"Defines size of derivative offset used for calculating gradient and curl",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, tex_nabla), 4, NULL},
	FieldSettings_texture_nabla_get, FieldSettings_texture_nabla_set, NULL, NULL, NULL, 0.0001000000f, 1.0f, 0.0001000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_noise = {
	{(PropertyRNA*)&rna_FieldSettings_rna_properties, (PropertyRNA*)&rna_FieldSettings_texture_nabla,
	-1, "noise", 8195, "Noise",
	"Amount of noise for the force strength",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_noise), 4, NULL},
	FieldSettings_noise_get, FieldSettings_noise_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_FieldSettings_rna_properties = {
	{(PropertyRNA*)&rna_FieldSettings_quadratic_drag, (PropertyRNA*)&rna_FieldSettings_noise,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_rna_properties_begin, FieldSettings_rna_properties_next, FieldSettings_rna_properties_end, FieldSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_FieldSettings_quadratic_drag = {
	{(PropertyRNA*)&rna_FieldSettings_radial_falloff, (PropertyRNA*)&rna_FieldSettings_rna_properties,
	-1, "quadratic_drag", 8195, "Quadratic Drag",
	"Drag component proportional to the square of velocity",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_damp), 4, NULL},
	FieldSettings_quadratic_drag_get, FieldSettings_quadratic_drag_set, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_radial_falloff = {
	{(PropertyRNA*)&rna_FieldSettings_rest_length, (PropertyRNA*)&rna_FieldSettings_quadratic_drag,
	-1, "radial_falloff", 8195, "Radial Falloff Power",
	"Radial falloff power (real gravitational falloff = 2)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_power_r), 4, NULL},
	FieldSettings_radial_falloff_get, FieldSettings_radial_falloff_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_rest_length = {
	{(PropertyRNA*)&rna_FieldSettings_use_root_coords, (PropertyRNA*)&rna_FieldSettings_radial_falloff,
	-1, "rest_length", 8195, "Rest Length",
	"Rest length of the harmonic force",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_size), 4, NULL},
	FieldSettings_rest_length_get, FieldSettings_rest_length_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_root_coords = {
	{(PropertyRNA*)&rna_FieldSettings_apply_to_rotation, (PropertyRNA*)&rna_FieldSettings_rest_length,
	-1, "use_root_coords", 3, "Root Texture Coordinates",
	"Texture coordinates from root particle locations",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_root_coords_get, FieldSettings_use_root_coords_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_apply_to_rotation = {
	{(PropertyRNA*)&rna_FieldSettings_seed, (PropertyRNA*)&rna_FieldSettings_use_root_coords,
	-1, "apply_to_rotation", 3, "Rotation",
	"Effect particles\' dynamic rotation",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_apply_to_rotation_get, FieldSettings_apply_to_rotation_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_FieldSettings_seed = {
	{(PropertyRNA*)&rna_FieldSettings_shape, (PropertyRNA*)&rna_FieldSettings_apply_to_rotation,
	-1, "seed", 8195, "Seed",
	"Seed of the noise",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, seed), 0, NULL},
	FieldSettings_seed_get, FieldSettings_seed_set, NULL, NULL, NULL,
	1, 128, 1, 128, 1, 0, NULL
};

static EnumPropertyItem rna_FieldSettings_shape_items[5] = {
	{0, "POINT", 0, "Point", ""},
	{1, "PLANE", 0, "Plane", ""},
	{2, "SURFACE", 0, "Surface", ""},
	{3, "POINTS", 0, "Every Point", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_shape = {
	{(PropertyRNA*)&rna_FieldSettings_guide_clump_shape, (PropertyRNA*)&rna_FieldSettings_seed,
	-1, "shape", 3, "Shape",
	"Which direction is used to calculate the effector force",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_shape_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_shape_get, FieldSettings_shape_set, rna_Effector_shape_itemf, rna_FieldSettings_shape_items, 4, 0
};

FloatPropertyRNA rna_FieldSettings_guide_clump_shape = {
	{(PropertyRNA*)&rna_FieldSettings_guide_kink_shape, (PropertyRNA*)&rna_FieldSettings_shape,
	-1, "guide_clump_shape", 8195, "Shape",
	"Shape of clumping",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, clump_pow), 4, NULL},
	FieldSettings_guide_clump_shape_get, FieldSettings_guide_clump_shape_set, NULL, NULL, NULL, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_guide_kink_shape = {
	{(PropertyRNA*)&rna_FieldSettings_size, (PropertyRNA*)&rna_FieldSettings_guide_clump_shape,
	-1, "guide_kink_shape", 8195, "Shape",
	"Adjust the offset to the beginning/end",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, kink_shape), 4, NULL},
	FieldSettings_guide_kink_shape_get, FieldSettings_guide_kink_shape_set, NULL, NULL, NULL, -0.9990000129f, 0.9990000129f, -0.9990000129f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_size = {
	{(PropertyRNA*)&rna_FieldSettings_strength, (PropertyRNA*)&rna_FieldSettings_guide_kink_shape,
	-1, "size", 8195, "Size",
	"Size of the turbulence",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_size), 4, NULL},
	FieldSettings_size_get, FieldSettings_size_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FieldSettings_strength = {
	{(PropertyRNA*)&rna_FieldSettings_texture, (PropertyRNA*)&rna_FieldSettings_size,
	-1, "strength", 8195, "Strength",
	"Strength of force field",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	offsetof(PartDeflect, f_strength), 4, NULL},
	FieldSettings_strength_get, FieldSettings_strength_set, NULL, NULL, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_FieldSettings_texture = {
	{(PropertyRNA*)&rna_FieldSettings_texture_mode, (PropertyRNA*)&rna_FieldSettings_strength,
	-1, "texture", 65, "Texture",
	"Texture to use as force",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_texture_get, FieldSettings_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_FieldSettings_texture_mode_items[4] = {
	{0, "RGB", 0, "RGB", ""},
	{1, "GRADIENT", 0, "Gradient", ""},
	{2, "CURL", 0, "Curl", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_texture_mode = {
	{(PropertyRNA*)&rna_FieldSettings_type, (PropertyRNA*)&rna_FieldSettings_texture,
	-1, "texture_mode", 3, "Texture Mode",
	"How the texture effect is calculated (RGB & Curl need a RGB texture else Gradient will be used instead)",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_texture_mode_get, FieldSettings_texture_mode_set, NULL, rna_FieldSettings_texture_mode_items, 3, 0
};

static EnumPropertyItem rna_FieldSettings_type_items[14] = {
	{0, "NONE", 0, "None", ""},
	{1, "FORCE", 338, "Force", ""},
	{4, "WIND", 339, "Wind", ""},
	{2, "VORTEX", 340, "Vortex", ""},
	{3, "MAGNET", 341, "Magnetic", ""},
	{7, "HARMONIC", 342, "Harmonic", ""},
	{8, "CHARGE", 343, "Charge", ""},
	{9, "LENNARDJ", 344, "Lennard-Jones", ""},
	{6, "TEXTURE", 345, "Texture", ""},
	{5, "GUIDE", 346, "Curve Guide", ""},
	{10, "BOID", 347, "Boid", ""},
	{11, "TURBULENCE", 348, "Turbulence", ""},
	{12, "DRAG", 349, "Drag", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_type = {
	{(PropertyRNA*)&rna_FieldSettings_use_object_coords, (PropertyRNA*)&rna_FieldSettings_texture_mode,
	-1, "type", 3, "Type",
	"Type of field",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_dependency_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_type_get, FieldSettings_type_set, NULL, rna_FieldSettings_type_items, 13, 0
};

BooleanPropertyRNA rna_FieldSettings_use_object_coords = {
	{(PropertyRNA*)&rna_FieldSettings_use_global_coords, (PropertyRNA*)&rna_FieldSettings_type,
	-1, "use_object_coords", 3, "Use Coordinates",
	"Use object/global coordinates for texture",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_object_coords_get, FieldSettings_use_object_coords_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_global_coords = {
	{(PropertyRNA*)&rna_FieldSettings_use_max_distance, (PropertyRNA*)&rna_FieldSettings_use_object_coords,
	-1, "use_global_coords", 3, "Use Global Coordinates",
	"Use effector/global coordinates for turbulence",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_global_coords_get, FieldSettings_use_global_coords_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_max_distance = {
	{(PropertyRNA*)&rna_FieldSettings_use_radial_max, (PropertyRNA*)&rna_FieldSettings_use_global_coords,
	-1, "use_max_distance", 3, "Use Max",
	"Use a maximum distance for the field to work",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_max_distance_get, FieldSettings_use_max_distance_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_radial_max = {
	{(PropertyRNA*)&rna_FieldSettings_use_min_distance, (PropertyRNA*)&rna_FieldSettings_use_max_distance,
	-1, "use_radial_max", 3, "Use Max",
	"Use a maximum radial distance for the field to work",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_radial_max_get, FieldSettings_use_radial_max_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_min_distance = {
	{(PropertyRNA*)&rna_FieldSettings_use_radial_min, (PropertyRNA*)&rna_FieldSettings_use_radial_max,
	-1, "use_min_distance", 3, "Use Min",
	"Use a minimum distance for the field\'s fall-off",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_min_distance_get, FieldSettings_use_min_distance_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_radial_min = {
	{(PropertyRNA*)&rna_FieldSettings_use_guide_path_weight, (PropertyRNA*)&rna_FieldSettings_use_min_distance,
	-1, "use_radial_min", 3, "Use Min",
	"Use a minimum radial distance for the field\'s fall-off",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_radial_min_get, FieldSettings_use_radial_min_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FieldSettings_use_guide_path_weight = {
	{(PropertyRNA*)&rna_FieldSettings_z_direction, (PropertyRNA*)&rna_FieldSettings_use_radial_min,
	-1, "use_guide_path_weight", 3, "Weights",
	"Use curve weights to influence the particle influence along the curve",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_use_guide_path_weight_get, FieldSettings_use_guide_path_weight_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_FieldSettings_z_direction_items[4] = {
	{0, "BOTH", 0, "Both Z", ""},
	{1, "POSITIVE", 0, "+Z", ""},
	{2, "NEGATIVE", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FieldSettings_z_direction = {
	{NULL, (PropertyRNA*)&rna_FieldSettings_use_guide_path_weight,
	-1, "z_direction", 3, "Z Direction",
	"Effect in full or only positive/negative Z direction",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FieldSettings_update, 0, NULL, NULL,
	0, -1, NULL},
	FieldSettings_z_direction_get, FieldSettings_z_direction_set, NULL, rna_FieldSettings_z_direction_items, 3, 0
};

StructRNA RNA_FieldSettings = {
	{(ContainerRNA *)&RNA_FileSelectParams, (ContainerRNA *)&RNA_FModifierStepped,
	NULL,
	{(PropertyRNA*)&rna_FieldSettings_rna_type, (PropertyRNA*)&rna_FieldSettings_z_direction}},
	"FieldSettings"	, NULL,NULL
, 0, "Field Settings", "Field settings for an object in physics simulation",
	89,
	NULL, (PropertyRNA*)&rna_FieldSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_FieldSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Game Soft Body Settings */
PointerPropertyRNA rna_GameSoftBodySettings_rna_type = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_use_bending_constraints, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameSoftBodySettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_GameSoftBodySettings_use_bending_constraints = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_cluster_iterations, (PropertyRNA*)&rna_GameSoftBodySettings_rna_type,
	-1, "use_bending_constraints", 3, "Bending Const",
	"Enable bending constraints",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameSoftBodySettings_use_bending_constraints_get, GameSoftBodySettings_use_bending_constraints_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_GameSoftBodySettings_cluster_iterations = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_dynamic_friction, (PropertyRNA*)&rna_GameSoftBodySettings_use_bending_constraints,
	-1, "cluster_iterations", 8195, "Cluster Iterations",
	"Specify the number of cluster iterations",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(BulletSoftBody, numclusteriterations), 0, NULL},
	GameSoftBodySettings_cluster_iterations_get, GameSoftBodySettings_cluster_iterations_set, NULL, NULL, NULL,
	1, 128, 1, 128, 1, 0, NULL
};

FloatPropertyRNA rna_GameSoftBodySettings_dynamic_friction = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_linear_stiffness, (PropertyRNA*)&rna_GameSoftBodySettings_cluster_iterations,
	-1, "dynamic_friction", 8195, "Friction",
	"Dynamic Friction",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(BulletSoftBody, kDF), 4, NULL},
	GameSoftBodySettings_dynamic_friction_get, GameSoftBodySettings_dynamic_friction_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GameSoftBodySettings_linear_stiffness = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_collision_margin, (PropertyRNA*)&rna_GameSoftBodySettings_dynamic_friction,
	-1, "linear_stiffness", 8195, "Linear Stiffness",
	"Linear stiffness of the soft body links",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(BulletSoftBody, linStiff), 4, NULL},
	GameSoftBodySettings_linear_stiffness_get, GameSoftBodySettings_linear_stiffness_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GameSoftBodySettings_collision_margin = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_location_iterations, (PropertyRNA*)&rna_GameSoftBodySettings_linear_stiffness,
	-1, "collision_margin", 8195, "Margin",
	"Collision margin for soft body. Small value makes the algorithm unstable",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(BulletSoftBody, margin), 4, NULL},
	GameSoftBodySettings_collision_margin_get, GameSoftBodySettings_collision_margin_set, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_GameSoftBodySettings_location_iterations = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_rna_properties, (PropertyRNA*)&rna_GameSoftBodySettings_collision_margin,
	-1, "location_iterations", 8195, "Position Iterations",
	"Position solver iterations",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(BulletSoftBody, piterations), 0, NULL},
	GameSoftBodySettings_location_iterations_get, GameSoftBodySettings_location_iterations_set, NULL, NULL, NULL,
	0, 10, 0, 10, 1, 0, NULL
};

CollectionPropertyRNA rna_GameSoftBodySettings_rna_properties = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_use_cluster_rigid_to_softbody, (PropertyRNA*)&rna_GameSoftBodySettings_location_iterations,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameSoftBodySettings_rna_properties_begin, GameSoftBodySettings_rna_properties_next, GameSoftBodySettings_rna_properties_end, GameSoftBodySettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_GameSoftBodySettings_use_cluster_rigid_to_softbody = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_use_shape_match, (PropertyRNA*)&rna_GameSoftBodySettings_rna_properties,
	-1, "use_cluster_rigid_to_softbody", 3, "Rigid to Soft Body",
	"Enable cluster collision between soft and rigid body",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameSoftBodySettings_use_cluster_rigid_to_softbody_get, GameSoftBodySettings_use_cluster_rigid_to_softbody_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameSoftBodySettings_use_shape_match = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_use_cluster_soft_to_softbody, (PropertyRNA*)&rna_GameSoftBodySettings_use_cluster_rigid_to_softbody,
	-1, "use_shape_match", 3, "Shape Match",
	"Enable soft body shape matching goal",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameSoftBodySettings_use_shape_match_get, GameSoftBodySettings_use_shape_match_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameSoftBodySettings_use_cluster_soft_to_softbody = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_shape_threshold, (PropertyRNA*)&rna_GameSoftBodySettings_use_shape_match,
	-1, "use_cluster_soft_to_softbody", 3, "Soft to Soft Body",
	"Enable cluster collision between soft and soft body",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameSoftBodySettings_use_cluster_soft_to_softbody_get, GameSoftBodySettings_use_cluster_soft_to_softbody_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_GameSoftBodySettings_shape_threshold = {
	{(PropertyRNA*)&rna_GameSoftBodySettings_weld_threshold, (PropertyRNA*)&rna_GameSoftBodySettings_use_cluster_soft_to_softbody,
	-1, "shape_threshold", 8195, "Threshold",
	"Shape matching threshold",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(BulletSoftBody, kMT), 4, NULL},
	GameSoftBodySettings_shape_threshold_get, GameSoftBodySettings_shape_threshold_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GameSoftBodySettings_weld_threshold = {
	{NULL, (PropertyRNA*)&rna_GameSoftBodySettings_shape_threshold,
	-1, "weld_threshold", 8195, "Welding",
	"Welding threshold: distance between nearby vertices to be considered equal => set to 0.0 to disable welding test and speed up scene loading (ok if the mesh has no duplicates)",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(BulletSoftBody, welding), 4, NULL},
	GameSoftBodySettings_weld_threshold_get, GameSoftBodySettings_weld_threshold_set, NULL, NULL, NULL, 0.0f, 0.0099999998f, 0.0f, 0.0099999998f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_GameSoftBodySettings = {
	{(ContainerRNA *)&RNA_GameStringProperty, (ContainerRNA *)&RNA_GameProperty,
	NULL,
	{(PropertyRNA*)&rna_GameSoftBodySettings_rna_type, (PropertyRNA*)&rna_GameSoftBodySettings_weld_threshold}},
	"GameSoftBodySettings"	, NULL,NULL
, 0, "Game Soft Body Settings", "Soft body simulation settings for an object in the game engine",
	17,
	NULL, (PropertyRNA*)&rna_GameSoftBodySettings_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Point Cache */
PointerPropertyRNA rna_PointCache_rna_type = {
	{(PropertyRNA*)&rna_PointCache_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PointCache_name = {
	{(PropertyRNA*)&rna_PointCache_compression, (PropertyRNA*)&rna_PointCache_rna_type,
	-1, "name", 1, "Name",
	"Cache name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_Cache_idname_change, 83886080, NULL, NULL,
	0, -1, NULL},
	PointCache_name_get, PointCache_name_length, PointCache_name_set, 64, ""
};

static EnumPropertyItem rna_PointCache_compression_items[4] = {
	{0, "NO", 0, "No", "No compression"},
	{1, "LIGHT", 0, "Light", "Fast but not so effective compression"},
	{2, "HEAVY", 0, "Heavy", "Effective but slow compression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PointCache_compression = {
	{(PropertyRNA*)&rna_PointCache_index, (PropertyRNA*)&rna_PointCache_name,
	-1, "compression", 3, "Cache Compression",
	"Compression method to be used",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_compression_get, PointCache_compression_set, NULL, rna_PointCache_compression_items, 3, 0
};

IntPropertyRNA rna_PointCache_index = {
	{(PropertyRNA*)&rna_PointCache_info, (PropertyRNA*)&rna_PointCache_compression,
	-1, "index", 8195, "Cache Index",
	"Index number of cache files",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 83886080, NULL, NULL,
	offsetof(PointCache, index), 0, NULL},
	PointCache_index_get, PointCache_index_set, NULL, NULL, NULL,
	-1, 100, -1, 100, 1, 0, NULL
};

StringPropertyRNA rna_PointCache_info = {
	{(PropertyRNA*)&rna_PointCache_frame_step, (PropertyRNA*)&rna_PointCache_index,
	-1, "info", 0, "Cache Info",
	"Info on current cache status",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_info_get, PointCache_info_length, NULL, 64, ""
};

IntPropertyRNA rna_PointCache_frame_step = {
	{(PropertyRNA*)&rna_PointCache_is_outdated, (PropertyRNA*)&rna_PointCache_info,
	-1, "frame_step", 8195, "Cache Step",
	"Number of frames between cached frames",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_change, 83886080, NULL, NULL,
	offsetof(PointCache, step), 0, NULL},
	PointCache_frame_step_get, PointCache_frame_step_set, NULL, NULL, rna_PointCache_frame_step_range,
	1, 20, 1, 20, 1, 0, NULL
};

BooleanPropertyRNA rna_PointCache_is_outdated = {
	{(PropertyRNA*)&rna_PointCache_use_disk_cache, (PropertyRNA*)&rna_PointCache_frame_step,
	-1, "is_outdated", 2, "Cache is outdated",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_is_outdated_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_PointCache_use_disk_cache = {
	{(PropertyRNA*)&rna_PointCache_frame_end, (PropertyRNA*)&rna_PointCache_is_outdated,
	-1, "use_disk_cache", 3, "Disk Cache",
	"Save cache files to disk (.blend file must be saved first)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_toggle_disk_cache, 83886080, NULL, NULL,
	0, -1, NULL},
	PointCache_use_disk_cache_get, PointCache_use_disk_cache_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_PointCache_frame_end = {
	{(PropertyRNA*)&rna_PointCache_use_external, (PropertyRNA*)&rna_PointCache_use_disk_cache,
	-1, "frame_end", 8195, "End",
	"Frame on which the simulation stops",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(PointCache, endframe), 0, NULL},
	PointCache_frame_end_get, PointCache_frame_end_set, NULL, NULL, NULL,
	1, 300000, 1, 300000, 1, 0, NULL
};

BooleanPropertyRNA rna_PointCache_use_external = {
	{(PropertyRNA*)&rna_PointCache_filepath, (PropertyRNA*)&rna_PointCache_frame_end,
	-1, "use_external", 3, "External",
	"Read cache from an external location",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 83886080, NULL, NULL,
	0, -1, NULL},
	PointCache_use_external_get, PointCache_use_external_set, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_PointCache_filepath = {
	{(PropertyRNA*)&rna_PointCache_use_library_path, (PropertyRNA*)&rna_PointCache_use_external,
	-1, "filepath", 1, "File Path",
	"Cache file path",
	0,
	PROP_STRING, PROP_DIRPATH|PROP_UNIT_NONE, NULL, 0, {240, 0, 0}, 0,
	rna_Cache_idname_change, 83886080, NULL, NULL,
	0, -1, NULL},
	PointCache_filepath_get, PointCache_filepath_length, PointCache_filepath_set, 240, ""
};

BooleanPropertyRNA rna_PointCache_use_library_path = {
	{(PropertyRNA*)&rna_PointCache_point_caches, (PropertyRNA*)&rna_PointCache_filepath,
	-1, "use_library_path", 3, "Library Path",
	"Use this files path when library linked into another file.",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_idname_change, 83886080, NULL, NULL,
	0, -1, NULL},
	PointCache_use_library_path_get, PointCache_use_library_path_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_PointCache_point_caches = {
	{(PropertyRNA*)&rna_PointCache_rna_properties, (PropertyRNA*)&rna_PointCache_use_library_path,
	-1, "point_caches", 0, "Point Cache List",
	"Point cache list",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_PointCaches},
	PointCache_point_caches_begin, PointCache_point_caches_next, PointCache_point_caches_end, PointCache_point_caches_get, NULL, NULL, NULL, &RNA_PointCache
};

CollectionPropertyRNA rna_PointCache_rna_properties = {
	{(PropertyRNA*)&rna_PointCache_use_quick_cache, (PropertyRNA*)&rna_PointCache_point_caches,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_rna_properties_begin, PointCache_rna_properties_next, PointCache_rna_properties_end, PointCache_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_PointCache_use_quick_cache = {
	{(PropertyRNA*)&rna_PointCache_frame_start, (PropertyRNA*)&rna_PointCache_rna_properties,
	-1, "use_quick_cache", 3, "Quick Cache",
	"Update simulation with cache steps",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_change, 83886080, NULL, NULL,
	0, -1, NULL},
	PointCache_use_quick_cache_get, PointCache_use_quick_cache_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_PointCache_frame_start = {
	{(PropertyRNA*)&rna_PointCache_frames_skipped, (PropertyRNA*)&rna_PointCache_use_quick_cache,
	-1, "frame_start", 8195, "Start",
	"Frame on which the simulation starts",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(PointCache, startframe), 0, NULL},
	PointCache_frame_start_get, PointCache_frame_start_set, NULL, NULL, NULL,
	1, 300000, 1, 300000, 1, 0, NULL
};

BooleanPropertyRNA rna_PointCache_frames_skipped = {
	{(PropertyRNA*)&rna_PointCache_is_baked, (PropertyRNA*)&rna_PointCache_frame_start,
	-1, "frames_skipped", 2, "frames_skipped",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_frames_skipped_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_PointCache_is_baked = {
	{(PropertyRNA*)&rna_PointCache_is_baking, (PropertyRNA*)&rna_PointCache_frames_skipped,
	-1, "is_baked", 2, "is_baked",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_is_baked_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_PointCache_is_baking = {
	{NULL, (PropertyRNA*)&rna_PointCache_is_baked,
	-1, "is_baking", 2, "is_baking",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCache_is_baking_get, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_PointCache = {
	{(ContainerRNA *)&RNA_PointCaches, (ContainerRNA *)&RNA_PluginTexture,
	NULL,
	{(PropertyRNA*)&rna_PointCache_rna_type, (PropertyRNA*)&rna_PointCache_is_baking}},
	"PointCache"	, NULL,NULL
, 0, "Point Cache", "Point cache for physics simulations",
	89,
	(PropertyRNA*)&rna_PointCache_name, (PropertyRNA*)&rna_PointCache_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Point Caches */
PointerPropertyRNA rna_PointCaches_rna_type = {
	{(PropertyRNA*)&rna_PointCaches_active_index, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCaches_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_PointCaches_active_index = {
	{(PropertyRNA*)&rna_PointCaches_rna_properties, (PropertyRNA*)&rna_PointCaches_rna_type,
	-1, "active_index", 3, "Active Point Cache Index",
	"",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Cache_change, 83886080, NULL, NULL,
	0, -1, NULL},
	PointCaches_active_index_get, PointCaches_active_index_set, NULL, NULL, rna_Cache_active_point_cache_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_PointCaches_rna_properties = {
	{NULL, (PropertyRNA*)&rna_PointCaches_active_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointCaches_rna_properties_begin, PointCaches_rna_properties_next, PointCaches_rna_properties_end, PointCaches_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_PointCaches = {
	{(ContainerRNA *)&RNA_PointDensity, (ContainerRNA *)&RNA_PointCache,
	NULL,
	{(PropertyRNA*)&rna_PointCaches_rna_type, (PropertyRNA*)&rna_PointCaches_rna_properties}},
	"PointCaches"	, NULL,NULL
, 0, "Point Caches", "Collection of point caches",
	17,
	NULL, (PropertyRNA*)&rna_PointCaches_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Soft Body Settings */
PointerPropertyRNA rna_SoftBodySettings_rna_type = {
	{(PropertyRNA*)&rna_SoftBodySettings_aero, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SoftBodySettings_aero = {
	{(PropertyRNA*)&rna_SoftBodySettings_aerodynamics_type, (PropertyRNA*)&rna_SoftBodySettings_rna_type,
	-1, "aero", 8195, "Aero",
	"Make edges \'sail\'",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, aeroedge), 1, NULL},
	SoftBodySettings_aero_get, SoftBodySettings_aero_set, NULL, NULL, NULL,
	0, 30000, 0, 30000, 1, 0, NULL
};

static EnumPropertyItem rna_SoftBodySettings_aerodynamics_type_items[3] = {
	{0, "SIMPLE", 0, "Simple", "Edges receive a drag force from surrounding media"},
	{1, "LIFT_FORCE", 0, "Lift Force", "Edges receive a lift force when passing through surrounding media"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SoftBodySettings_aerodynamics_type = {
	{(PropertyRNA*)&rna_SoftBodySettings_ball_size, (PropertyRNA*)&rna_SoftBodySettings_aero,
	-1, "aerodynamics_type", 3, "Aerodynamics Type",
	"Method of calculating aerodynamic interaction",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_aerodynamics_type_get, SoftBodySettings_aerodynamics_type_set, NULL, rna_SoftBodySettings_aerodynamics_type_items, 2, 0
};

FloatPropertyRNA rna_SoftBodySettings_ball_size = {
	{(PropertyRNA*)&rna_SoftBodySettings_ball_stiff, (PropertyRNA*)&rna_SoftBodySettings_aerodynamics_type,
	-1, "ball_size", 8193, "Ball Size",
	"Absolute ball size or factor if not manual adjusted",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, colball), 4, NULL},
	SoftBodySettings_ball_size_get, SoftBodySettings_ball_size_set, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_ball_stiff = {
	{(PropertyRNA*)&rna_SoftBodySettings_ball_damp, (PropertyRNA*)&rna_SoftBodySettings_ball_size,
	-1, "ball_stiff", 8195, "Ball Size",
	"Ball inflating pressure",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, ballstiff), 4, NULL},
	SoftBodySettings_ball_stiff_get, SoftBodySettings_ball_stiff_set, NULL, NULL, NULL, 0.0010000000f, 100.0f, 0.0010000000f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_ball_damp = {
	{(PropertyRNA*)&rna_SoftBodySettings_bend, (PropertyRNA*)&rna_SoftBodySettings_ball_stiff,
	-1, "ball_damp", 8195, "Ball Size",
	"Blending to inelastic collision",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, balldamp), 4, NULL},
	SoftBodySettings_ball_damp_get, SoftBodySettings_ball_damp_set, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_bend = {
	{(PropertyRNA*)&rna_SoftBodySettings_location_mass_center, (PropertyRNA*)&rna_SoftBodySettings_ball_damp,
	-1, "bend", 8195, "Bending",
	"Bending Stiffness",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, secondspring), 4, NULL},
	SoftBodySettings_bend_get, SoftBodySettings_bend_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_SoftBodySettings_location_mass_center_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SoftBodySettings_location_mass_center = {
	{(PropertyRNA*)&rna_SoftBodySettings_choke, (PropertyRNA*)&rna_SoftBodySettings_bend,
	-1, "location_mass_center", 8195, "Center of mass",
	"Location of Center of mass",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(SoftBody, lcom), 4, NULL},
	NULL, NULL, SoftBodySettings_location_mass_center_get, SoftBodySettings_location_mass_center_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SoftBodySettings_location_mass_center_default
};

IntPropertyRNA rna_SoftBodySettings_choke = {
	{(PropertyRNA*)&rna_SoftBodySettings_collision_type, (PropertyRNA*)&rna_SoftBodySettings_location_mass_center,
	-1, "choke", 8195, "Choke",
	"\'Viscosity\' inside collision target",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, choke), 1, NULL},
	SoftBodySettings_choke_get, SoftBodySettings_choke_set, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

static EnumPropertyItem rna_SoftBodySettings_collision_type_items[6] = {
	{0, "MANUAL", 0, "Manual", "Manual adjust"},
	{1, "AVERAGE", 0, "Average", "Average Spring length * Ball Size"},
	{2, "MINIMAL", 0, "Minimal", "Minimal Spring length * Ball Size"},
	{3, "MAXIMAL", 0, "Maximal", "Maximal Spring length * Ball Size"},
	{4, "MINMAX", 0, "AvMinMax", "(Min+Max)/2 * Ball Size"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SoftBodySettings_collision_type = {
	{(PropertyRNA*)&rna_SoftBodySettings_damping, (PropertyRNA*)&rna_SoftBodySettings_choke,
	-1, "collision_type", 1, "Collision Type",
	"Choose Collision Type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_collision_type_get, SoftBodySettings_collision_type_set, NULL, rna_SoftBodySettings_collision_type_items, 5, 0
};

FloatPropertyRNA rna_SoftBodySettings_damping = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_edge_collision, (PropertyRNA*)&rna_SoftBodySettings_collision_type,
	-1, "damping", 8195, "Damp",
	"Edge spring friction",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, infrict), 4, NULL},
	SoftBodySettings_damping_get, SoftBodySettings_damping_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_SoftBodySettings_use_edge_collision = {
	{(PropertyRNA*)&rna_SoftBodySettings_effector_weights, (PropertyRNA*)&rna_SoftBodySettings_damping,
	-1, "use_edge_collision", 3, "Edge Collision",
	"Edges collide too",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_edge_collision_get, SoftBodySettings_use_edge_collision_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SoftBodySettings_effector_weights = {
	{(PropertyRNA*)&rna_SoftBodySettings_error_threshold, (PropertyRNA*)&rna_SoftBodySettings_use_edge_collision,
	-1, "effector_weights", 0, "Effector Weights",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

FloatPropertyRNA rna_SoftBodySettings_error_threshold = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_estimate_matrix, (PropertyRNA*)&rna_SoftBodySettings_effector_weights,
	-1, "error_threshold", 8195, "Error Limit",
	"The Runge-Kutta ODE solver error limit, low value gives more precision, high values speed",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, rklimit), 4, NULL},
	SoftBodySettings_error_threshold_get, SoftBodySettings_error_threshold_set, NULL, NULL, NULL, 0.0010000000f, 10.0f, 0.0010000000f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_SoftBodySettings_use_estimate_matrix = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_face_collision, (PropertyRNA*)&rna_SoftBodySettings_error_threshold,
	-1, "use_estimate_matrix", 3, "Estimate matrix",
	"estimate matrix .. split to COM , ROT ,SCALE ",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_estimate_matrix_get, SoftBodySettings_use_estimate_matrix_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_SoftBodySettings_use_face_collision = {
	{(PropertyRNA*)&rna_SoftBodySettings_friction, (PropertyRNA*)&rna_SoftBodySettings_use_estimate_matrix,
	-1, "use_face_collision", 3, "Face Collision",
	"Faces collide too, can be very slow",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_face_collision_get, SoftBodySettings_use_face_collision_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SoftBodySettings_friction = {
	{(PropertyRNA*)&rna_SoftBodySettings_fuzzy, (PropertyRNA*)&rna_SoftBodySettings_use_face_collision,
	-1, "friction", 8195, "Friction",
	"General media friction for point movements",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, mediafrict), 4, NULL},
	SoftBodySettings_friction_get, SoftBodySettings_friction_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_SoftBodySettings_fuzzy = {
	{(PropertyRNA*)&rna_SoftBodySettings_goal_friction, (PropertyRNA*)&rna_SoftBodySettings_friction,
	-1, "fuzzy", 8195, "Fuzzy",
	"Fuzziness while on collision, high values make collsion handling faster but less stable",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, fuzzyness), 1, NULL},
	SoftBodySettings_fuzzy_get, SoftBodySettings_fuzzy_set, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_friction = {
	{(PropertyRNA*)&rna_SoftBodySettings_goal_default, (PropertyRNA*)&rna_SoftBodySettings_fuzzy,
	-1, "goal_friction", 8195, "Goal Damping",
	"Goal (vertex target position) friction",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, goalfrict), 4, NULL},
	SoftBodySettings_goal_friction_get, SoftBodySettings_goal_friction_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_default = {
	{(PropertyRNA*)&rna_SoftBodySettings_goal_max, (PropertyRNA*)&rna_SoftBodySettings_goal_friction,
	-1, "goal_default", 8193, "Goal Default",
	"Default Goal (vertex target position) value, when no Vertex Group used",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, defgoal), 4, NULL},
	SoftBodySettings_goal_default_get, SoftBodySettings_goal_default_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_max = {
	{(PropertyRNA*)&rna_SoftBodySettings_goal_min, (PropertyRNA*)&rna_SoftBodySettings_goal_default,
	-1, "goal_max", 8195, "Goal Maximum",
	"Goal maximum, vertex weights are scaled to match this range",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, maxgoal), 4, NULL},
	SoftBodySettings_goal_max_get, SoftBodySettings_goal_max_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_min = {
	{(PropertyRNA*)&rna_SoftBodySettings_goal_spring, (PropertyRNA*)&rna_SoftBodySettings_goal_max,
	-1, "goal_min", 8195, "Goal Minimum",
	"Goal minimum, vertex weights are scaled to match this range",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, mingoal), 4, NULL},
	SoftBodySettings_goal_min_get, SoftBodySettings_goal_min_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_goal_spring = {
	{(PropertyRNA*)&rna_SoftBodySettings_vertex_group_goal, (PropertyRNA*)&rna_SoftBodySettings_goal_min,
	-1, "goal_spring", 8195, "Goal Stiffness",
	"Goal (vertex target position) spring stiffness",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, goalspring), 4, NULL},
	SoftBodySettings_goal_spring_get, SoftBodySettings_goal_spring_set, NULL, NULL, NULL, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_goal = {
	{(PropertyRNA*)&rna_SoftBodySettings_gravity, (PropertyRNA*)&rna_SoftBodySettings_goal_spring,
	-1, "vertex_group_goal", 1, "Goal Vertex Group",
	"Control point weight values",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_vertex_group_goal_get, SoftBodySettings_vertex_group_goal_length, SoftBodySettings_vertex_group_goal_set, 0, ""
};

FloatPropertyRNA rna_SoftBodySettings_gravity = {
	{(PropertyRNA*)&rna_SoftBodySettings_mass, (PropertyRNA*)&rna_SoftBodySettings_vertex_group_goal,
	-1, "gravity", 8195, "Gravitation",
	"Apply gravitation to point movement",
	0,
	PROP_FLOAT, PROP_ACCELERATION|PROP_UNIT_ACCELERATION, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, grav), 4, NULL},
	SoftBodySettings_gravity_get, SoftBodySettings_gravity_set, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_mass = {
	{(PropertyRNA*)&rna_SoftBodySettings_vertex_group_mass, (PropertyRNA*)&rna_SoftBodySettings_gravity,
	-1, "mass", 8195, "Mass",
	"General Mass value",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, nodemass), 4, NULL},
	SoftBodySettings_mass_get, SoftBodySettings_mass_set, NULL, NULL, NULL, 0.0f, 50000.0f, 0.0f, 50000.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_mass = {
	{(PropertyRNA*)&rna_SoftBodySettings_step_max, (PropertyRNA*)&rna_SoftBodySettings_mass,
	-1, "vertex_group_mass", 1, "Mass Vertex Group",
	"Control point mass values",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_vertex_group_mass_get, SoftBodySettings_vertex_group_mass_length, SoftBodySettings_vertex_group_mass_set, 32, ""
};

IntPropertyRNA rna_SoftBodySettings_step_max = {
	{(PropertyRNA*)&rna_SoftBodySettings_step_min, (PropertyRNA*)&rna_SoftBodySettings_vertex_group_mass,
	-1, "step_max", 8195, "Max Step",
	"Maximal # solver steps/frame",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, maxloops), 1, NULL},
	SoftBodySettings_step_max_get, SoftBodySettings_step_max_set, NULL, NULL, NULL,
	0, 30000, 0, 30000, 1, 0, NULL
};

IntPropertyRNA rna_SoftBodySettings_step_min = {
	{(PropertyRNA*)&rna_SoftBodySettings_plastic, (PropertyRNA*)&rna_SoftBodySettings_step_max,
	-1, "step_min", 8195, "Min Step",
	"Minimal # solver steps/frame",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, minloops), 1, NULL},
	SoftBodySettings_step_min_get, SoftBodySettings_step_min_set, NULL, NULL, NULL,
	0, 30000, 0, 30000, 1, 0, NULL
};

IntPropertyRNA rna_SoftBodySettings_plastic = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_diagnose, (PropertyRNA*)&rna_SoftBodySettings_step_min,
	-1, "plastic", 8195, "Plastic",
	"Permanent deform",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, plastic), 1, NULL},
	SoftBodySettings_plastic_get, SoftBodySettings_plastic_set, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

BooleanPropertyRNA rna_SoftBodySettings_use_diagnose = {
	{(PropertyRNA*)&rna_SoftBodySettings_rna_properties, (PropertyRNA*)&rna_SoftBodySettings_plastic,
	-1, "use_diagnose", 3, "Print Performance to Console",
	"Turn on SB diagnose console prints",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_diagnose_get, SoftBodySettings_use_diagnose_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_SoftBodySettings_rna_properties = {
	{(PropertyRNA*)&rna_SoftBodySettings_pull, (PropertyRNA*)&rna_SoftBodySettings_use_diagnose,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_rna_properties_begin, SoftBodySettings_rna_properties_next, SoftBodySettings_rna_properties_end, SoftBodySettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_SoftBodySettings_pull = {
	{(PropertyRNA*)&rna_SoftBodySettings_push, (PropertyRNA*)&rna_SoftBodySettings_rna_properties,
	-1, "pull", 8195, "Pull",
	"Edge spring stiffness when longer than rest length",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, inspring), 4, NULL},
	SoftBodySettings_pull_get, SoftBodySettings_pull_set, NULL, NULL, NULL, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_push = {
	{(PropertyRNA*)&rna_SoftBodySettings_rotation_estimate, (PropertyRNA*)&rna_SoftBodySettings_pull,
	-1, "push", 8195, "Push",
	"Edge spring stiffness when shorter than rest length",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, inpush), 4, NULL},
	SoftBodySettings_push_get, SoftBodySettings_push_set, NULL, NULL, NULL, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

static float rna_SoftBodySettings_rotation_estimate_default[9] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SoftBodySettings_rotation_estimate = {
	{(PropertyRNA*)&rna_SoftBodySettings_spring_length, (PropertyRNA*)&rna_SoftBodySettings_push,
	-1, "rotation_estimate", 8195, "Rot Matrix",
	"Estimated rotation matrix",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL,
	offsetof(SoftBody, lrot), 4, NULL},
	NULL, NULL, SoftBodySettings_rotation_estimate_get, SoftBodySettings_rotation_estimate_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SoftBodySettings_rotation_estimate_default
};

IntPropertyRNA rna_SoftBodySettings_spring_length = {
	{(PropertyRNA*)&rna_SoftBodySettings_scale_estimate, (PropertyRNA*)&rna_SoftBodySettings_rotation_estimate,
	-1, "spring_length", 8195, "SL",
	"Alter spring length to shrink/blow up (unit %) 0 to disable",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, springpreload), 1, NULL},
	SoftBodySettings_spring_length_get, SoftBodySettings_spring_length_set, NULL, NULL, NULL,
	0, 200, 0, 200, 1, 0, NULL
};

static float rna_SoftBodySettings_scale_estimate_default[9] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SoftBodySettings_scale_estimate = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_self_collision, (PropertyRNA*)&rna_SoftBodySettings_spring_length,
	-1, "scale_estimate", 8195, "Scale Matrix",
	"Estimated scale matrix",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL,
	offsetof(SoftBody, lscale), 4, NULL},
	NULL, NULL, SoftBodySettings_scale_estimate_get, SoftBodySettings_scale_estimate_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SoftBodySettings_scale_estimate_default
};

BooleanPropertyRNA rna_SoftBodySettings_use_self_collision = {
	{(PropertyRNA*)&rna_SoftBodySettings_shear, (PropertyRNA*)&rna_SoftBodySettings_scale_estimate,
	-1, "use_self_collision", 1, "Self Collision",
	"Enable naive vertex ball self collision",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_self_collision_get, SoftBodySettings_use_self_collision_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SoftBodySettings_shear = {
	{(PropertyRNA*)&rna_SoftBodySettings_speed, (PropertyRNA*)&rna_SoftBodySettings_use_self_collision,
	-1, "shear", 8195, "Shear",
	"Shear Stiffness",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SoftBody, shearstiff), 4, NULL},
	SoftBodySettings_shear_get, SoftBodySettings_shear_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SoftBodySettings_speed = {
	{(PropertyRNA*)&rna_SoftBodySettings_vertex_group_spring, (PropertyRNA*)&rna_SoftBodySettings_shear,
	-1, "speed", 8195, "Speed",
	"Tweak timing for physics to control frequency and speed",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	offsetof(SoftBody, physics_speed), 4, NULL},
	SoftBodySettings_speed_get, SoftBodySettings_speed_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_SoftBodySettings_vertex_group_spring = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_stiff_quads, (PropertyRNA*)&rna_SoftBodySettings_speed,
	-1, "vertex_group_spring", 1, "Spring Vertex Group",
	"Control point spring strength values",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_vertex_group_spring_get, SoftBodySettings_vertex_group_spring_length, SoftBodySettings_vertex_group_spring_set, 32, ""
};

BooleanPropertyRNA rna_SoftBodySettings_use_stiff_quads = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_edges, (PropertyRNA*)&rna_SoftBodySettings_vertex_group_spring,
	-1, "use_stiff_quads", 1, "Stiff Quads",
	"Adds diagonal springs on 4-gons",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_stiff_quads_get, SoftBodySettings_use_stiff_quads_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_SoftBodySettings_use_edges = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_goal, (PropertyRNA*)&rna_SoftBodySettings_use_stiff_quads,
	-1, "use_edges", 1, "Use Edges",
	"Use Edges as springs",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_edges_get, SoftBodySettings_use_edges_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_SoftBodySettings_use_goal = {
	{(PropertyRNA*)&rna_SoftBodySettings_use_auto_step, (PropertyRNA*)&rna_SoftBodySettings_use_edges,
	-1, "use_goal", 1, "Use Goal",
	"Define forces for vertices to stick to animated position",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_goal_get, SoftBodySettings_use_goal_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_SoftBodySettings_use_auto_step = {
	{NULL, (PropertyRNA*)&rna_SoftBodySettings_use_goal,
	-1, "use_auto_step", 3, "V",
	"Use velocities for automagic step sizes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_softbody_update, 0, NULL, NULL,
	0, -1, NULL},
	SoftBodySettings_use_auto_step_get, SoftBodySettings_use_auto_step_set, NULL, NULL, 0, NULL
};

StructRNA RNA_SoftBodySettings = {
	{(ContainerRNA *)&RNA_SolidifyModifier, (ContainerRNA *)&RNA_SoftBodyModifier,
	NULL,
	{(PropertyRNA*)&rna_SoftBodySettings_rna_type, (PropertyRNA*)&rna_SoftBodySettings_use_auto_step}},
	"SoftBodySettings"	, NULL,NULL
, 0, "Soft Body Settings", "Soft body simulation settings for an object",
	17,
	NULL, (PropertyRNA*)&rna_SoftBodySettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SoftBodySettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

