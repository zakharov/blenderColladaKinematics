
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
extern StructRNA RNA_GroupObjects;
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

#include "rna_cloth.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_ClothCollisionSettings_rna_type;
PointerPropertyRNA rna_ClothCollisionSettings_group;
IntPropertyRNA rna_ClothCollisionSettings_collision_quality;
BooleanPropertyRNA rna_ClothCollisionSettings_use_collision;
BooleanPropertyRNA rna_ClothCollisionSettings_use_self_collision;
FloatPropertyRNA rna_ClothCollisionSettings_friction;
FloatPropertyRNA rna_ClothCollisionSettings_distance_min;
CollectionPropertyRNA rna_ClothCollisionSettings_rna_properties;
IntPropertyRNA rna_ClothCollisionSettings_self_collision_quality;
FloatPropertyRNA rna_ClothCollisionSettings_self_friction;
FloatPropertyRNA rna_ClothCollisionSettings_self_distance_min;


PointerPropertyRNA rna_ClothSettings_rna_type;
FloatPropertyRNA rna_ClothSettings_air_damping;
FloatPropertyRNA rna_ClothSettings_bending_stiffness;
FloatPropertyRNA rna_ClothSettings_bending_stiffness_max;
StringPropertyRNA rna_ClothSettings_vertex_group_bending;
FloatPropertyRNA rna_ClothSettings_collider_friction;
PointerPropertyRNA rna_ClothSettings_effector_weights;
FloatPropertyRNA rna_ClothSettings_goal_friction;
FloatPropertyRNA rna_ClothSettings_goal_default;
FloatPropertyRNA rna_ClothSettings_goal_max;
FloatPropertyRNA rna_ClothSettings_goal_min;
FloatPropertyRNA rna_ClothSettings_goal_spring;
FloatPropertyRNA rna_ClothSettings_gravity;
FloatPropertyRNA rna_ClothSettings_internal_friction;
FloatPropertyRNA rna_ClothSettings_mass;
StringPropertyRNA rna_ClothSettings_vertex_group_mass;
BooleanPropertyRNA rna_ClothSettings_use_pin_cloth;
FloatPropertyRNA rna_ClothSettings_pin_stiffness;
IntPropertyRNA rna_ClothSettings_pre_roll;
CollectionPropertyRNA rna_ClothSettings_rna_properties;
IntPropertyRNA rna_ClothSettings_quality;
PointerPropertyRNA rna_ClothSettings_rest_shape_key;
FloatPropertyRNA rna_ClothSettings_spring_damping;
BooleanPropertyRNA rna_ClothSettings_use_stiffness_scale;
FloatPropertyRNA rna_ClothSettings_structural_stiffness;
FloatPropertyRNA rna_ClothSettings_structural_stiffness_max;
StringPropertyRNA rna_ClothSettings_vertex_group_structural_stiffness;

PointerRNA ClothCollisionSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ClothCollisionSettings_group_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->group);
}

void ClothCollisionSettings_group_set(PointerRNA *ptr, PointerRNA value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->group= value.data;
}

int ClothCollisionSettings_collision_quality_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (int)(data->loop_count);
}

void ClothCollisionSettings_collision_quality_set(PointerRNA *ptr, int value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	data->loop_count= CLAMPIS(value, 1, 20);
}

int ClothCollisionSettings_use_collision_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void ClothCollisionSettings_use_collision_set(PointerRNA *ptr, int value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	if(value) data->flags |= 2;
	else data->flags &= ~2;
}

int ClothCollisionSettings_use_self_collision_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void ClothCollisionSettings_use_self_collision_set(PointerRNA *ptr, int value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	if(value) data->flags |= 4;
	else data->flags &= ~4;
}

float ClothCollisionSettings_friction_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (float)(data->friction);
}

void ClothCollisionSettings_friction_set(PointerRNA *ptr, float value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	data->friction= CLAMPIS(value, 0.0f, 80.0f);
}

float ClothCollisionSettings_distance_min_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (float)(data->epsilon);
}

void ClothCollisionSettings_distance_min_set(PointerRNA *ptr, float value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	data->epsilon= CLAMPIS(value, 0.0010000000f, 1.0f);
}

static PointerRNA ClothCollisionSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ClothCollisionSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ClothCollisionSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ClothCollisionSettings_rna_properties_get(iter);
}

void ClothCollisionSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ClothCollisionSettings_rna_properties_get(iter);
}

void ClothCollisionSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ClothCollisionSettings_self_collision_quality_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (int)(data->self_loop_count);
}

void ClothCollisionSettings_self_collision_quality_set(PointerRNA *ptr, int value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	data->self_loop_count= CLAMPIS(value, 1, 10);
}

float ClothCollisionSettings_self_friction_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (float)(data->self_friction);
}

void ClothCollisionSettings_self_friction_set(PointerRNA *ptr, float value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	data->self_friction= CLAMPIS(value, 0.0f, 80.0f);
}

float ClothCollisionSettings_self_distance_min_get(PointerRNA *ptr)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	return (float)(data->selfepsilon);
}

void ClothCollisionSettings_self_distance_min_set(PointerRNA *ptr, float value)
{
	ClothCollSettings *data= (ClothCollSettings*)(ptr->data);
	data->selfepsilon= CLAMPIS(value, 0.5000000000f, 1.0f);
}

PointerRNA ClothSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float ClothSettings_air_damping_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->Cvi);
}

void ClothSettings_air_damping_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->Cvi= CLAMPIS(value, 0.0f, 10.0f);
}

float ClothSettings_bending_stiffness_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->bending);
}

void ClothSettings_bending_stiffness_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->bending= CLAMPIS(value, 0.0f, 10000.0f);
}

float ClothSettings_bending_stiffness_max_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->max_bend);
}

void ClothSettings_bending_stiffness_max_set(PointerRNA *ptr, float value)
{
	rna_ClothSettings_max_bend_set(ptr, value);
}

void ClothSettings_vertex_group_bending_get(PointerRNA *ptr, char *value)
{
	rna_ClothSettings_bend_vgroup_get(ptr, value);
}

int ClothSettings_vertex_group_bending_length(PointerRNA *ptr)
{
	return rna_ClothSettings_bend_vgroup_length(ptr);
}

void ClothSettings_vertex_group_bending_set(PointerRNA *ptr, const char *value)
{
	rna_ClothSettings_bend_vgroup_set(ptr, value);
}

float ClothSettings_collider_friction_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->collider_friction);
}

void ClothSettings_collider_friction_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->collider_friction= CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA ClothSettings_effector_weights_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

float ClothSettings_goal_friction_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->goalfrict);
}

void ClothSettings_goal_friction_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->goalfrict= CLAMPIS(value, 0.0f, 50.0f);
}

float ClothSettings_goal_default_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->defgoal);
}

void ClothSettings_goal_default_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->defgoal= CLAMPIS(value, 0.0f, 1.0f);
}

float ClothSettings_goal_max_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->maxgoal);
}

void ClothSettings_goal_max_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->maxgoal= CLAMPIS(value, 0.0f, 1.0f);
}

float ClothSettings_goal_min_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->mingoal);
}

void ClothSettings_goal_min_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->mingoal= CLAMPIS(value, 0.0f, 1.0f);
}

float ClothSettings_goal_spring_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->goalspring);
}

void ClothSettings_goal_spring_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->goalspring= CLAMPIS(value, 0.0f, 0.9990000129f);
}

void ClothSettings_gravity_get(PointerRNA *ptr, float values[3])
{
	rna_ClothSettings_gravity_get(ptr, values);
}

void ClothSettings_gravity_set(PointerRNA *ptr, const float values[3])
{
	rna_ClothSettings_gravity_set(ptr, values);
}

float ClothSettings_internal_friction_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->velocity_smooth);
}

void ClothSettings_internal_friction_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->velocity_smooth= CLAMPIS(value, 0.0f, 1.0f);
}

float ClothSettings_mass_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->mass);
}

void ClothSettings_mass_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->mass= CLAMPIS(value, 0.0f, 10.0f);
}

void ClothSettings_vertex_group_mass_get(PointerRNA *ptr, char *value)
{
	rna_ClothSettings_mass_vgroup_get(ptr, value);
}

int ClothSettings_vertex_group_mass_length(PointerRNA *ptr)
{
	return rna_ClothSettings_mass_vgroup_length(ptr);
}

void ClothSettings_vertex_group_mass_set(PointerRNA *ptr, const char *value)
{
	rna_ClothSettings_mass_vgroup_set(ptr, value);
}

int ClothSettings_use_pin_cloth_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void ClothSettings_use_pin_cloth_set(PointerRNA *ptr, int value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	if(value) data->flags |= 8;
	else data->flags &= ~8;
}

float ClothSettings_pin_stiffness_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->goalspring);
}

void ClothSettings_pin_stiffness_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->goalspring= CLAMPIS(value, 0.0f, 50.0f);
}

int ClothSettings_pre_roll_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (int)(data->preroll);
}

void ClothSettings_pre_roll_set(PointerRNA *ptr, int value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->preroll= CLAMPIS(value, 0, 200);
}

static PointerRNA ClothSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ClothSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ClothSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ClothSettings_rna_properties_get(iter);
}

void ClothSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ClothSettings_rna_properties_get(iter);
}

void ClothSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ClothSettings_quality_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (int)(data->stepsPerFrame);
}

void ClothSettings_quality_set(PointerRNA *ptr, int value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->stepsPerFrame= CLAMPIS(value, 4, 80);
}

PointerRNA ClothSettings_rest_shape_key_get(PointerRNA *ptr)
{
	return rna_ClothSettings_rest_shape_key_get(ptr);
}

void ClothSettings_rest_shape_key_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ClothSettings_rest_shape_key_set(ptr, value);
}

float ClothSettings_spring_damping_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->Cdis);
}

void ClothSettings_spring_damping_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->Cdis= CLAMPIS(value, 0.0f, 50.0f);
}

int ClothSettings_use_stiffness_scale_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (((data->flags) & 256) != 0);
}

void ClothSettings_use_stiffness_scale_set(PointerRNA *ptr, int value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	if(value) data->flags |= 256;
	else data->flags &= ~256;
}

float ClothSettings_structural_stiffness_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->structural);
}

void ClothSettings_structural_stiffness_set(PointerRNA *ptr, float value)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	data->structural= CLAMPIS(value, 0.0f, 10000.0f);
}

float ClothSettings_structural_stiffness_max_get(PointerRNA *ptr)
{
	ClothSimSettings *data= (ClothSimSettings*)(ptr->data);
	return (float)(data->max_struct);
}

void ClothSettings_structural_stiffness_max_set(PointerRNA *ptr, float value)
{
	rna_ClothSettings_max_struct_set(ptr, value);
}

void ClothSettings_vertex_group_structural_stiffness_get(PointerRNA *ptr, char *value)
{
	rna_ClothSettings_struct_vgroup_get(ptr, value);
}

int ClothSettings_vertex_group_structural_stiffness_length(PointerRNA *ptr)
{
	return rna_ClothSettings_struct_vgroup_length(ptr);
}

void ClothSettings_vertex_group_structural_stiffness_set(PointerRNA *ptr, const char *value)
{
	rna_ClothSettings_struct_vgroup_set(ptr, value);
}



/* Cloth Collision Settings */
PointerPropertyRNA rna_ClothCollisionSettings_rna_type = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_group, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothCollisionSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ClothCollisionSettings_group = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_collision_quality, (PropertyRNA*)&rna_ClothCollisionSettings_rna_type,
	-1, "group", 1, "Collision Group",
	"Limit colliders to this Group",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothCollisionSettings_group_get, ClothCollisionSettings_group_set, NULL, NULL,&RNA_Group
};

IntPropertyRNA rna_ClothCollisionSettings_collision_quality = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_use_collision, (PropertyRNA*)&rna_ClothCollisionSettings_group,
	-1, "collision_quality", 8195, "Collision Quality",
	"How many collision iterations should be done. (higher is better quality but slower)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothCollSettings, loop_count), 1, NULL},
	ClothCollisionSettings_collision_quality_get, ClothCollisionSettings_collision_quality_set, NULL, NULL, NULL,
	1, 20, 1, 20, 1, 0, NULL
};

BooleanPropertyRNA rna_ClothCollisionSettings_use_collision = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_use_self_collision, (PropertyRNA*)&rna_ClothCollisionSettings_collision_quality,
	-1, "use_collision", 3, "Enable Collision",
	"Enable collisions with other objects",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothCollisionSettings_use_collision_get, ClothCollisionSettings_use_collision_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ClothCollisionSettings_use_self_collision = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_friction, (PropertyRNA*)&rna_ClothCollisionSettings_use_collision,
	-1, "use_self_collision", 3, "Enable Self Collision",
	"Enable self collisions",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothCollisionSettings_use_self_collision_get, ClothCollisionSettings_use_self_collision_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ClothCollisionSettings_friction = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_distance_min, (PropertyRNA*)&rna_ClothCollisionSettings_use_self_collision,
	-1, "friction", 8195, "Friction",
	"Friction force if a collision happened. (higher = less movement)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothCollSettings, friction), 4, NULL},
	ClothCollisionSettings_friction_get, ClothCollisionSettings_friction_set, NULL, NULL, NULL, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothCollisionSettings_distance_min = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_rna_properties, (PropertyRNA*)&rna_ClothCollisionSettings_friction,
	-1, "distance_min", 8195, "Minimum Distance",
	"Minimum distance between collision objects before collision response takes in",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothCollSettings, epsilon), 4, NULL},
	ClothCollisionSettings_distance_min_get, ClothCollisionSettings_distance_min_set, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_ClothCollisionSettings_rna_properties = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_self_collision_quality, (PropertyRNA*)&rna_ClothCollisionSettings_distance_min,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothCollisionSettings_rna_properties_begin, ClothCollisionSettings_rna_properties_next, ClothCollisionSettings_rna_properties_end, ClothCollisionSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_ClothCollisionSettings_self_collision_quality = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_self_friction, (PropertyRNA*)&rna_ClothCollisionSettings_rna_properties,
	-1, "self_collision_quality", 8195, "Self Collision Quality",
	"How many self collision iterations should be done. (higher is better quality but slower)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothCollSettings, self_loop_count), 1, NULL},
	ClothCollisionSettings_self_collision_quality_get, ClothCollisionSettings_self_collision_quality_set, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

FloatPropertyRNA rna_ClothCollisionSettings_self_friction = {
	{(PropertyRNA*)&rna_ClothCollisionSettings_self_distance_min, (PropertyRNA*)&rna_ClothCollisionSettings_self_collision_quality,
	-1, "self_friction", 8195, "Self Friction",
	"Friction/damping with self contact",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothCollSettings, self_friction), 4, NULL},
	ClothCollisionSettings_self_friction_get, ClothCollisionSettings_self_friction_set, NULL, NULL, NULL, 0.0f, 80.0f, 0.0f, 80.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothCollisionSettings_self_distance_min = {
	{NULL, (PropertyRNA*)&rna_ClothCollisionSettings_self_friction,
	-1, "self_distance_min", 8195, "Self Minimum Distance",
	"0.5 means no distance at all, 1.0 is maximum distance",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothCollSettings, selfepsilon), 4, NULL},
	ClothCollisionSettings_self_distance_min_get, ClothCollisionSettings_self_distance_min_set, NULL, NULL, NULL, 0.5000000000f, 1.0f, 0.5000000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ClothCollisionSettings = {
	{(ContainerRNA *)&RNA_ClothModifier, (ContainerRNA *)&RNA_ClampToConstraint,
	NULL,
	{(PropertyRNA*)&rna_ClothCollisionSettings_rna_type, (PropertyRNA*)&rna_ClothCollisionSettings_self_distance_min}},
	"ClothCollisionSettings"	, NULL,NULL
, 0, "Cloth Collision Settings", "Cloth simulation settings for self collision and collision with other objects",
	17,
	NULL, (PropertyRNA*)&rna_ClothCollisionSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ClothCollisionSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Cloth Settings */
PointerPropertyRNA rna_ClothSettings_rna_type = {
	{(PropertyRNA*)&rna_ClothSettings_air_damping, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_ClothSettings_air_damping = {
	{(PropertyRNA*)&rna_ClothSettings_bending_stiffness, (PropertyRNA*)&rna_ClothSettings_rna_type,
	-1, "air_damping", 8195, "Air Damping",
	"Air has normally some thickness which slows falling things down",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, Cvi), 4, NULL},
	ClothSettings_air_damping_get, ClothSettings_air_damping_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_bending_stiffness = {
	{(PropertyRNA*)&rna_ClothSettings_bending_stiffness_max, (PropertyRNA*)&rna_ClothSettings_air_damping,
	-1, "bending_stiffness", 8195, "Bending Stiffness",
	"Wrinkle coefficient. (higher = less smaller but more big wrinkles)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, bending), 4, NULL},
	ClothSettings_bending_stiffness_get, ClothSettings_bending_stiffness_set, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_bending_stiffness_max = {
	{(PropertyRNA*)&rna_ClothSettings_vertex_group_bending, (PropertyRNA*)&rna_ClothSettings_bending_stiffness,
	-1, "bending_stiffness_max", 3, "Bending Stiffness Maximum",
	"Maximum bending stiffness value",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_bending_stiffness_max_get, ClothSettings_bending_stiffness_max_set, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_ClothSettings_vertex_group_bending = {
	{(PropertyRNA*)&rna_ClothSettings_collider_friction, (PropertyRNA*)&rna_ClothSettings_bending_stiffness_max,
	-1, "vertex_group_bending", 1, "Bending Stiffness Vertex Group",
	"Vertex group for fine control over bending stiffness",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_vertex_group_bending_get, ClothSettings_vertex_group_bending_length, ClothSettings_vertex_group_bending_set, 0, ""
};

FloatPropertyRNA rna_ClothSettings_collider_friction = {
	{(PropertyRNA*)&rna_ClothSettings_effector_weights, (PropertyRNA*)&rna_ClothSettings_vertex_group_bending,
	-1, "collider_friction", 8195, "Collider Friction",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, collider_friction), 4, NULL},
	ClothSettings_collider_friction_get, ClothSettings_collider_friction_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_ClothSettings_effector_weights = {
	{(PropertyRNA*)&rna_ClothSettings_goal_friction, (PropertyRNA*)&rna_ClothSettings_collider_friction,
	-1, "effector_weights", 0, "Effector Weights",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

FloatPropertyRNA rna_ClothSettings_goal_friction = {
	{(PropertyRNA*)&rna_ClothSettings_goal_default, (PropertyRNA*)&rna_ClothSettings_effector_weights,
	-1, "goal_friction", 8195, "Goal Damping",
	"Goal (vertex target position) friction",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, goalfrict), 4, NULL},
	ClothSettings_goal_friction_get, ClothSettings_goal_friction_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_goal_default = {
	{(PropertyRNA*)&rna_ClothSettings_goal_max, (PropertyRNA*)&rna_ClothSettings_goal_friction,
	-1, "goal_default", 8195, "Goal Default",
	"Default Goal (vertex target position) value, when no Vertex Group used",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, defgoal), 4, NULL},
	ClothSettings_goal_default_get, ClothSettings_goal_default_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_goal_max = {
	{(PropertyRNA*)&rna_ClothSettings_goal_min, (PropertyRNA*)&rna_ClothSettings_goal_default,
	-1, "goal_max", 8195, "Goal Maximum",
	"Goal maximum, vertex group weights are scaled to match this range",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, maxgoal), 4, NULL},
	ClothSettings_goal_max_get, ClothSettings_goal_max_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_goal_min = {
	{(PropertyRNA*)&rna_ClothSettings_goal_spring, (PropertyRNA*)&rna_ClothSettings_goal_max,
	-1, "goal_min", 8195, "Goal Minimum",
	"Goal minimum, vertex group weights are scaled to match this range",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, mingoal), 4, NULL},
	ClothSettings_goal_min_get, ClothSettings_goal_min_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_goal_spring = {
	{(PropertyRNA*)&rna_ClothSettings_gravity, (PropertyRNA*)&rna_ClothSettings_goal_min,
	-1, "goal_spring", 8195, "Goal Stiffness",
	"Goal (vertex target position) spring stiffness",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, goalspring), 4, NULL},
	ClothSettings_goal_spring_get, ClothSettings_goal_spring_set, NULL, NULL, NULL, 0.0f, 0.9990000129f, 0.0f, 0.9990000129f, 10.0f, 3, 0.0f, NULL
};

static float rna_ClothSettings_gravity_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ClothSettings_gravity = {
	{(PropertyRNA*)&rna_ClothSettings_internal_friction, (PropertyRNA*)&rna_ClothSettings_goal_spring,
	-1, "gravity", 3, "Gravity",
	"Gravity or external force vector",
	0,
	PROP_FLOAT, PROP_ACCELERATION|PROP_UNIT_ACCELERATION, NULL, 1, {3, 0, 0}, 3,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ClothSettings_gravity_get, ClothSettings_gravity_set, NULL, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, rna_ClothSettings_gravity_default
};

FloatPropertyRNA rna_ClothSettings_internal_friction = {
	{(PropertyRNA*)&rna_ClothSettings_mass, (PropertyRNA*)&rna_ClothSettings_gravity,
	-1, "internal_friction", 8195, "Internal Friction",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, velocity_smooth), 4, NULL},
	ClothSettings_internal_friction_get, ClothSettings_internal_friction_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_mass = {
	{(PropertyRNA*)&rna_ClothSettings_vertex_group_mass, (PropertyRNA*)&rna_ClothSettings_internal_friction,
	-1, "mass", 8195, "Mass",
	"Mass of cloth material",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, mass), 4, NULL},
	ClothSettings_mass_get, ClothSettings_mass_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_ClothSettings_vertex_group_mass = {
	{(PropertyRNA*)&rna_ClothSettings_use_pin_cloth, (PropertyRNA*)&rna_ClothSettings_mass,
	-1, "vertex_group_mass", 1, "Mass Vertex Group",
	"Vertex Group for pinning of vertices",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_pinning_changed, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_vertex_group_mass_get, ClothSettings_vertex_group_mass_length, ClothSettings_vertex_group_mass_set, 0, ""
};

BooleanPropertyRNA rna_ClothSettings_use_pin_cloth = {
	{(PropertyRNA*)&rna_ClothSettings_pin_stiffness, (PropertyRNA*)&rna_ClothSettings_vertex_group_mass,
	-1, "use_pin_cloth", 3, "Pin Cloth",
	"Enable pinning of cloth vertices to other objects/positions",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_pinning_changed, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_use_pin_cloth_get, ClothSettings_use_pin_cloth_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ClothSettings_pin_stiffness = {
	{(PropertyRNA*)&rna_ClothSettings_pre_roll, (PropertyRNA*)&rna_ClothSettings_use_pin_cloth,
	-1, "pin_stiffness", 8195, "Pin Stiffness",
	"Pin (vertex target position) spring stiffness",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, goalspring), 4, NULL},
	ClothSettings_pin_stiffness_get, ClothSettings_pin_stiffness_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ClothSettings_pre_roll = {
	{(PropertyRNA*)&rna_ClothSettings_rna_properties, (PropertyRNA*)&rna_ClothSettings_pin_stiffness,
	-1, "pre_roll", 8195, "Pre Roll",
	"Simulation starts on this frame",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_reset, 0, NULL, NULL,
	offsetof(ClothSimSettings, preroll), 0, NULL},
	ClothSettings_pre_roll_get, ClothSettings_pre_roll_set, NULL, NULL, NULL,
	0, 200, 0, 200, 1, 0, NULL
};

CollectionPropertyRNA rna_ClothSettings_rna_properties = {
	{(PropertyRNA*)&rna_ClothSettings_quality, (PropertyRNA*)&rna_ClothSettings_pre_roll,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_rna_properties_begin, ClothSettings_rna_properties_next, ClothSettings_rna_properties_end, ClothSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_ClothSettings_quality = {
	{(PropertyRNA*)&rna_ClothSettings_rest_shape_key, (PropertyRNA*)&rna_ClothSettings_rna_properties,
	-1, "quality", 8195, "Quality",
	"Quality of the simulation in steps per frame. (higher is better quality but slower)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, stepsPerFrame), 0, NULL},
	ClothSettings_quality_get, ClothSettings_quality_set, NULL, NULL, NULL,
	4, 80, 4, 80, 1, 0, NULL
};

PointerPropertyRNA rna_ClothSettings_rest_shape_key = {
	{(PropertyRNA*)&rna_ClothSettings_spring_damping, (PropertyRNA*)&rna_ClothSettings_quality,
	-1, "rest_shape_key", 1, "Rest Shade Key",
	"Shape key to use the rest spring lengths from",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_rest_shape_key_get, ClothSettings_rest_shape_key_set, NULL, NULL,&RNA_ShapeKey
};

FloatPropertyRNA rna_ClothSettings_spring_damping = {
	{(PropertyRNA*)&rna_ClothSettings_use_stiffness_scale, (PropertyRNA*)&rna_ClothSettings_rest_shape_key,
	-1, "spring_damping", 8195, "Spring Damping",
	"Damping of cloth velocity. (higher = more smooth, less jiggling)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, Cdis), 4, NULL},
	ClothSettings_spring_damping_get, ClothSettings_spring_damping_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_ClothSettings_use_stiffness_scale = {
	{(PropertyRNA*)&rna_ClothSettings_structural_stiffness, (PropertyRNA*)&rna_ClothSettings_spring_damping,
	-1, "use_stiffness_scale", 3, "Stiffness Scaling",
	"If enabled, stiffness can be scaled along a weight painted vertex group",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_use_stiffness_scale_get, ClothSettings_use_stiffness_scale_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ClothSettings_structural_stiffness = {
	{(PropertyRNA*)&rna_ClothSettings_structural_stiffness_max, (PropertyRNA*)&rna_ClothSettings_use_stiffness_scale,
	-1, "structural_stiffness", 8195, "Structural Stiffness",
	"Overall stiffness of structure",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	offsetof(ClothSimSettings, structural), 4, NULL},
	ClothSettings_structural_stiffness_get, ClothSettings_structural_stiffness_set, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ClothSettings_structural_stiffness_max = {
	{(PropertyRNA*)&rna_ClothSettings_vertex_group_structural_stiffness, (PropertyRNA*)&rna_ClothSettings_structural_stiffness,
	-1, "structural_stiffness_max", 3, "Structural Stiffness Maximum",
	"Maximum structural stiffness value",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_structural_stiffness_max_get, ClothSettings_structural_stiffness_max_set, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_ClothSettings_vertex_group_structural_stiffness = {
	{NULL, (PropertyRNA*)&rna_ClothSettings_structural_stiffness_max,
	-1, "vertex_group_structural_stiffness", 1, "Structural Stiffness Vertex Group",
	"Vertex group for fine control over structural stiffness",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_cloth_update, 0, NULL, NULL,
	0, -1, NULL},
	ClothSettings_vertex_group_structural_stiffness_get, ClothSettings_vertex_group_structural_stiffness_length, ClothSettings_vertex_group_structural_stiffness_set, 0, ""
};

StructRNA RNA_ClothSettings = {
	{(ContainerRNA *)&RNA_CloudsTexture, (ContainerRNA *)&RNA_ClothModifier,
	NULL,
	{(PropertyRNA*)&rna_ClothSettings_rna_type, (PropertyRNA*)&rna_ClothSettings_vertex_group_structural_stiffness}},
	"ClothSettings"	, NULL,NULL
, 0, "Cloth Settings", "Cloth simulation settings for an object",
	17,
	NULL, (PropertyRNA*)&rna_ClothSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ClothSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

