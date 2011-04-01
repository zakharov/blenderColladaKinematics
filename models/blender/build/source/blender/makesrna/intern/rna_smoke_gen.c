
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

#include "rna_smoke.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_SmokeCollSettings_rna_type;
CollectionPropertyRNA rna_SmokeCollSettings_rna_properties;


PointerPropertyRNA rna_SmokeDomainSettings_rna_type;
IntPropertyRNA rna_SmokeDomainSettings_amplify;
EnumPropertyRNA rna_SmokeDomainSettings_collision_extents;
EnumPropertyRNA rna_SmokeDomainSettings_point_cache_compress_type;
PointerPropertyRNA rna_SmokeDomainSettings_collision_group;
FloatPropertyRNA rna_SmokeDomainSettings_alpha;
BooleanPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke;
IntPropertyRNA rna_SmokeDomainSettings_dissolve_speed;
PointerPropertyRNA rna_SmokeDomainSettings_effector_group;
PointerPropertyRNA rna_SmokeDomainSettings_effector_weights;
PointerPropertyRNA rna_SmokeDomainSettings_fluid_group;
FloatPropertyRNA rna_SmokeDomainSettings_beta;
BooleanPropertyRNA rna_SmokeDomainSettings_use_high_resolution;
BooleanPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke_log;
IntPropertyRNA rna_SmokeDomainSettings_resolution_max;
EnumPropertyRNA rna_SmokeDomainSettings_noise_type;
PointerPropertyRNA rna_SmokeDomainSettings_point_cache;
CollectionPropertyRNA rna_SmokeDomainSettings_rna_properties;
BooleanPropertyRNA rna_SmokeDomainSettings_show_high_resolution;
BooleanPropertyRNA rna_SmokeDomainSettings_smooth_emitter;
FloatPropertyRNA rna_SmokeDomainSettings_strength;
FloatPropertyRNA rna_SmokeDomainSettings_time_scale;
FloatPropertyRNA rna_SmokeDomainSettings_vorticity;


PointerPropertyRNA rna_SmokeFlowSettings_rna_type;
BooleanPropertyRNA rna_SmokeFlowSettings_use_absolute;
FloatPropertyRNA rna_SmokeFlowSettings_density;
BooleanPropertyRNA rna_SmokeFlowSettings_initial_velocity;
FloatPropertyRNA rna_SmokeFlowSettings_velocity_factor;
BooleanPropertyRNA rna_SmokeFlowSettings_use_outflow;
PointerPropertyRNA rna_SmokeFlowSettings_particle_system;
CollectionPropertyRNA rna_SmokeFlowSettings_rna_properties;
FloatPropertyRNA rna_SmokeFlowSettings_temperature;

PointerRNA SmokeCollSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA SmokeCollSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SmokeCollSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_SmokeCollSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= SmokeCollSettings_rna_properties_get(iter);
}

void SmokeCollSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= SmokeCollSettings_rna_properties_get(iter);
}

void SmokeCollSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA SmokeDomainSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SmokeDomainSettings_amplify_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (int)(data->amplify);
}

void SmokeDomainSettings_amplify_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->amplify= CLAMPIS(value, 1, 10);
}

int SmokeDomainSettings_collision_extents_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (int)(data->border_collisions);
}

void SmokeDomainSettings_collision_extents_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->border_collisions= value;
}

int SmokeDomainSettings_point_cache_compress_type_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (int)(data->cache_comp);
}

void SmokeDomainSettings_point_cache_compress_type_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->cache_comp= value;
}

PointerRNA SmokeDomainSettings_collision_group_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->coll_group);
}

void SmokeDomainSettings_collision_group_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->coll_group= value.data;
}

float SmokeDomainSettings_alpha_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (float)(data->alpha);
}

void SmokeDomainSettings_alpha_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->alpha= CLAMPIS(value, -5.0f, 5.0f);
}

int SmokeDomainSettings_use_dissolve_smoke_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void SmokeDomainSettings_use_dissolve_smoke_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value) data->flags |= 4;
	else data->flags &= ~4;
}

int SmokeDomainSettings_dissolve_speed_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (int)(data->diss_speed);
}

void SmokeDomainSettings_dissolve_speed_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->diss_speed= CLAMPIS(value, 1, 10000);
}

PointerRNA SmokeDomainSettings_effector_group_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->eff_group);
}

void SmokeDomainSettings_effector_group_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->eff_group= value.data;
}

PointerRNA SmokeDomainSettings_effector_weights_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EffectorWeights, data->effector_weights);
}

PointerRNA SmokeDomainSettings_fluid_group_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->fluid_group);
}

void SmokeDomainSettings_fluid_group_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->fluid_group= value.data;
}

float SmokeDomainSettings_beta_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (float)(data->beta);
}

void SmokeDomainSettings_beta_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->beta= CLAMPIS(value, -5.0f, 5.0f);
}

int SmokeDomainSettings_use_high_resolution_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void SmokeDomainSettings_use_high_resolution_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value) data->flags |= 2;
	else data->flags &= ~2;
}

int SmokeDomainSettings_use_dissolve_smoke_log_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void SmokeDomainSettings_use_dissolve_smoke_log_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value) data->flags |= 8;
	else data->flags &= ~8;
}

int SmokeDomainSettings_resolution_max_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (int)(data->maxres);
}

void SmokeDomainSettings_resolution_max_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->maxres= CLAMPIS(value, 24, 512);
}

int SmokeDomainSettings_noise_type_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (int)(data->noise);
}

void SmokeDomainSettings_noise_type_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->noise= value;
}

PointerRNA SmokeDomainSettings_point_cache_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PointCache, data->point_cache[0]);
}

static PointerRNA SmokeDomainSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SmokeDomainSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_SmokeDomainSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= SmokeDomainSettings_rna_properties_get(iter);
}

void SmokeDomainSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= SmokeDomainSettings_rna_properties_get(iter);
}

void SmokeDomainSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SmokeDomainSettings_show_high_resolution_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (((data->viewsettings) & 1) != 0);
}

void SmokeDomainSettings_show_high_resolution_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value) data->viewsettings |= 1;
	else data->viewsettings &= ~1;
}

int SmokeDomainSettings_smooth_emitter_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (((data->flags) & 32) != 0);
}

void SmokeDomainSettings_smooth_emitter_set(PointerRNA *ptr, int value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	if(value) data->flags |= 32;
	else data->flags &= ~32;
}

float SmokeDomainSettings_strength_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (float)(data->strength);
}

void SmokeDomainSettings_strength_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->strength= CLAMPIS(value, 0.0f, 10.0f);
}

float SmokeDomainSettings_time_scale_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (float)(data->time_scale);
}

void SmokeDomainSettings_time_scale_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->time_scale= CLAMPIS(value, 0.2000000030f, 1.5000000000f);
}

float SmokeDomainSettings_vorticity_get(PointerRNA *ptr)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	return (float)(data->vorticity);
}

void SmokeDomainSettings_vorticity_set(PointerRNA *ptr, float value)
{
	SmokeDomainSettings *data= (SmokeDomainSettings*)(ptr->data);
	data->vorticity= CLAMPIS(value, 0.0099999998f, 4.0f);
}

PointerRNA SmokeFlowSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int SmokeFlowSettings_use_absolute_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void SmokeFlowSettings_use_absolute_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	if(value) data->flags |= 2;
	else data->flags &= ~2;
}

float SmokeFlowSettings_density_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	return (float)(data->density);
}

void SmokeFlowSettings_density_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	data->density= CLAMPIS(value, 0.0010000000f, 1.0f);
}

int SmokeFlowSettings_initial_velocity_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void SmokeFlowSettings_initial_velocity_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	if(value) data->flags |= 4;
	else data->flags &= ~4;
}

float SmokeFlowSettings_velocity_factor_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	return (float)(data->vel_multi);
}

void SmokeFlowSettings_velocity_factor_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	data->vel_multi= CLAMPIS(value, -2.0f, 2.0f);
}

int SmokeFlowSettings_use_outflow_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	return (((data->type) & 2) != 0);
}

void SmokeFlowSettings_use_outflow_set(PointerRNA *ptr, int value)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	if(value) data->type |= 2;
	else data->type &= ~2;
}

PointerRNA SmokeFlowSettings_particle_system_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ParticleSystem, data->psys);
}

void SmokeFlowSettings_particle_system_set(PointerRNA *ptr, PointerRNA value)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	data->psys= value.data;
}

static PointerRNA SmokeFlowSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SmokeFlowSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_SmokeFlowSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= SmokeFlowSettings_rna_properties_get(iter);
}

void SmokeFlowSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= SmokeFlowSettings_rna_properties_get(iter);
}

void SmokeFlowSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float SmokeFlowSettings_temperature_get(PointerRNA *ptr)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	return (float)(data->temp);
}

void SmokeFlowSettings_temperature_set(PointerRNA *ptr, float value)
{
	SmokeFlowSettings *data= (SmokeFlowSettings*)(ptr->data);
	data->temp= CLAMPIS(value, -10.0f, 10.0f);
}




/* Collision Settings */
PointerPropertyRNA rna_SmokeCollSettings_rna_type = {
	{(PropertyRNA*)&rna_SmokeCollSettings_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeCollSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_SmokeCollSettings_rna_properties = {
	{NULL, (PropertyRNA*)&rna_SmokeCollSettings_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeCollSettings_rna_properties_begin, SmokeCollSettings_rna_properties_next, SmokeCollSettings_rna_properties_end, SmokeCollSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_SmokeCollSettings = {
	{(ContainerRNA *)&RNA_SmokeDomainSettings, (ContainerRNA *)&RNA_SimpleDeformModifier,
	NULL,
	{(PropertyRNA*)&rna_SmokeCollSettings_rna_type, (PropertyRNA*)&rna_SmokeCollSettings_rna_properties}},
	"SmokeCollSettings"	, NULL,NULL
, 0, "Collision Settings", "Smoke collision settings",
	17,
	NULL, (PropertyRNA*)&rna_SmokeCollSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SmokeCollSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Domain Settings */
PointerPropertyRNA rna_SmokeDomainSettings_rna_type = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_amplify, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_SmokeDomainSettings_amplify = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_collision_extents, (PropertyRNA*)&rna_SmokeDomainSettings_rna_type,
	-1, "amplify", 8195, "Amplification",
	"Enhance the resolution of smoke by this factor using noise",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, amplify), 0, NULL},
	SmokeDomainSettings_amplify_get, SmokeDomainSettings_amplify_set, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

static EnumPropertyItem rna_SmokeDomainSettings_collision_extents_items[4] = {
	{0, "BORDEROPEN", 0, "Open", "Smoke doesn\'t collide with any border"},
	{1, "BORDERVERTICAL", 0, "Vertically Open", "Smoke doesn\'t collide with top and bottom sides"},
	{2, "BORDERCLOSED", 0, "Collide All", "Smoke collides with every side"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeDomainSettings_collision_extents = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_point_cache_compress_type, (PropertyRNA*)&rna_SmokeDomainSettings_amplify,
	-1, "collision_extents", 3, "Border Collisions",
	"Selects which domain border will be treated as collision object.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_collision_extents_get, SmokeDomainSettings_collision_extents_set, NULL, rna_SmokeDomainSettings_collision_extents_items, 3, 0
};

static EnumPropertyItem rna_SmokeDomainSettings_point_cache_compress_type_items[3] = {
	{0, "CACHELIGHT", 0, "Light", "Fast but not so effective compression"},
	{1, "CACHEHEAVY", 0, "Heavy", "Effective but slow compression"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeDomainSettings_point_cache_compress_type = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_collision_group, (PropertyRNA*)&rna_SmokeDomainSettings_collision_extents,
	-1, "point_cache_compress_type", 3, "Cache Compression",
	"Compression method to be used",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_point_cache_compress_type_get, SmokeDomainSettings_point_cache_compress_type_set, NULL, rna_SmokeDomainSettings_point_cache_compress_type_items, 2, 0
};

PointerPropertyRNA rna_SmokeDomainSettings_collision_group = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_alpha, (PropertyRNA*)&rna_SmokeDomainSettings_point_cache_compress_type,
	-1, "collision_group", 1, "Collision Group",
	"Limit collisions to this group",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependancy, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_collision_group_get, SmokeDomainSettings_collision_group_set, NULL, NULL,&RNA_Group
};

FloatPropertyRNA rna_SmokeDomainSettings_alpha = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_use_dissolve_smoke, (PropertyRNA*)&rna_SmokeDomainSettings_collision_group,
	-1, "alpha", 8195, "Density",
	"How much density effects smoke motion, higher value results in faster rising smoke",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, alpha), 4, NULL},
	SmokeDomainSettings_alpha_get, SmokeDomainSettings_alpha_set, NULL, NULL, NULL, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 0.0f, NULL
};

BooleanPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_dissolve_speed, (PropertyRNA*)&rna_SmokeDomainSettings_alpha,
	-1, "use_dissolve_smoke", 3, "Dissolve Smoke",
	"Enable smoke to disappear over time",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_use_dissolve_smoke_get, SmokeDomainSettings_use_dissolve_smoke_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SmokeDomainSettings_dissolve_speed = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_effector_group, (PropertyRNA*)&rna_SmokeDomainSettings_use_dissolve_smoke,
	-1, "dissolve_speed", 8195, "Dissolve Speed",
	"Dissolve Speed",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, diss_speed), 0, NULL},
	SmokeDomainSettings_dissolve_speed_get, SmokeDomainSettings_dissolve_speed_set, NULL, NULL, NULL,
	1, 10000, 1, 10000, 1, 0, NULL
};

PointerPropertyRNA rna_SmokeDomainSettings_effector_group = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_effector_weights, (PropertyRNA*)&rna_SmokeDomainSettings_dissolve_speed,
	-1, "effector_group", 1, "Effector Group",
	"Limit effectors to this group",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependancy, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_effector_group_get, SmokeDomainSettings_effector_group_set, NULL, NULL,&RNA_Group
};

PointerPropertyRNA rna_SmokeDomainSettings_effector_weights = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_fluid_group, (PropertyRNA*)&rna_SmokeDomainSettings_effector_group,
	-1, "effector_weights", 0, "Effector Weights",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_effector_weights_get, NULL, NULL, NULL,&RNA_EffectorWeights
};

PointerPropertyRNA rna_SmokeDomainSettings_fluid_group = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_beta, (PropertyRNA*)&rna_SmokeDomainSettings_effector_weights,
	-1, "fluid_group", 1, "Fluid Group",
	"Limit fluid objects to this group",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependancy, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_fluid_group_get, SmokeDomainSettings_fluid_group_set, NULL, NULL,&RNA_Group
};

FloatPropertyRNA rna_SmokeDomainSettings_beta = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_use_high_resolution, (PropertyRNA*)&rna_SmokeDomainSettings_fluid_group,
	-1, "beta", 8195, "Heat",
	"How much heat effects smoke motion, higher value results in faster rising smoke",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, beta), 4, NULL},
	SmokeDomainSettings_beta_get, SmokeDomainSettings_beta_set, NULL, NULL, NULL, -5.0f, 5.0f, -5.0f, 5.0f, 0.0199999996f, 5, 0.0f, NULL
};

BooleanPropertyRNA rna_SmokeDomainSettings_use_high_resolution = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_use_dissolve_smoke_log, (PropertyRNA*)&rna_SmokeDomainSettings_beta,
	-1, "use_high_resolution", 3, "High res",
	"Enable high resolution (using amplification)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_use_high_resolution_get, SmokeDomainSettings_use_high_resolution_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_SmokeDomainSettings_use_dissolve_smoke_log = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_resolution_max, (PropertyRNA*)&rna_SmokeDomainSettings_use_high_resolution,
	-1, "use_dissolve_smoke_log", 3, "Logarithmic dissolve",
	"Using 1/x ",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_use_dissolve_smoke_log_get, SmokeDomainSettings_use_dissolve_smoke_log_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_SmokeDomainSettings_resolution_max = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_noise_type, (PropertyRNA*)&rna_SmokeDomainSettings_use_dissolve_smoke_log,
	-1, "resolution_max", 8195, "Max Res",
	"Maximal resolution used in the fluid domain",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, maxres), 0, NULL},
	SmokeDomainSettings_resolution_max_get, SmokeDomainSettings_resolution_max_set, NULL, NULL, NULL,
	24, 512, 24, 512, 2, 0, NULL
};

static EnumPropertyItem rna_SmokeDomainSettings_noise_type_items[2] = {
	{1, "NOISEWAVE", 0, "Wavelet", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_SmokeDomainSettings_noise_type = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_point_cache, (PropertyRNA*)&rna_SmokeDomainSettings_resolution_max,
	-1, "noise_type", 3, "Noise Method",
	"Noise method which is used for creating the high resolution",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_noise_type_get, SmokeDomainSettings_noise_type_set, NULL, rna_SmokeDomainSettings_noise_type_items, 1, 1
};

PointerPropertyRNA rna_SmokeDomainSettings_point_cache = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_rna_properties, (PropertyRNA*)&rna_SmokeDomainSettings_noise_type,
	-1, "point_cache", 262144, "Point Cache",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {2, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_point_cache_get, NULL, NULL, NULL,&RNA_PointCache
};

CollectionPropertyRNA rna_SmokeDomainSettings_rna_properties = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_show_high_resolution, (PropertyRNA*)&rna_SmokeDomainSettings_point_cache,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_rna_properties_begin, SmokeDomainSettings_rna_properties_next, SmokeDomainSettings_rna_properties_end, SmokeDomainSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_SmokeDomainSettings_show_high_resolution = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_smooth_emitter, (PropertyRNA*)&rna_SmokeDomainSettings_rna_properties,
	-1, "show_high_resolution", 3, "Show High Resolution",
	"Show high resolution (using amplification)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_show_high_resolution_get, SmokeDomainSettings_show_high_resolution_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_SmokeDomainSettings_smooth_emitter = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_strength, (PropertyRNA*)&rna_SmokeDomainSettings_show_high_resolution,
	-1, "smooth_emitter", 3, "Smooth Emitter",
	"Smoothens emitted smoke to avoid blockiness.",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	0, -1, NULL},
	SmokeDomainSettings_smooth_emitter_get, SmokeDomainSettings_smooth_emitter_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_strength = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_time_scale, (PropertyRNA*)&rna_SmokeDomainSettings_smooth_emitter,
	-1, "strength", 8195, "Strength",
	"Strength of wavelet noise",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, strength), 4, NULL},
	SmokeDomainSettings_strength_get, SmokeDomainSettings_strength_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_time_scale = {
	{(PropertyRNA*)&rna_SmokeDomainSettings_vorticity, (PropertyRNA*)&rna_SmokeDomainSettings_strength,
	-1, "time_scale", 8195, "Time Scale",
	"Adjust simulation speed.",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, time_scale), 4, NULL},
	SmokeDomainSettings_time_scale_get, SmokeDomainSettings_time_scale_set, NULL, NULL, NULL, 0.2000000030f, 1.5000000000f, 0.2000000030f, 1.5000000000f, 0.0199999996f, 5, 0.0f, NULL
};

FloatPropertyRNA rna_SmokeDomainSettings_vorticity = {
	{NULL, (PropertyRNA*)&rna_SmokeDomainSettings_time_scale,
	-1, "vorticity", 8195, "Vorticity",
	"Amount of turbulence/rotation in fluid.",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset, 85458944, NULL, NULL,
	offsetof(SmokeDomainSettings, vorticity), 4, NULL},
	SmokeDomainSettings_vorticity_get, SmokeDomainSettings_vorticity_set, NULL, NULL, NULL, 0.0099999998f, 4.0f, 0.0099999998f, 4.0f, 0.0199999996f, 5, 0.0f, NULL
};

StructRNA RNA_SmokeDomainSettings = {
	{(ContainerRNA *)&RNA_SmokeFlowSettings, (ContainerRNA *)&RNA_SmokeCollSettings,
	NULL,
	{(PropertyRNA*)&rna_SmokeDomainSettings_rna_type, (PropertyRNA*)&rna_SmokeDomainSettings_vorticity}},
	"SmokeDomainSettings"	, NULL,NULL
, 0, "Domain Settings", "Smoke domain settings",
	17,
	NULL, (PropertyRNA*)&rna_SmokeDomainSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SmokeDomainSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Flow Settings */
PointerPropertyRNA rna_SmokeFlowSettings_rna_type = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_use_absolute, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_SmokeFlowSettings_use_absolute = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_density, (PropertyRNA*)&rna_SmokeFlowSettings_rna_type,
	-1, "use_absolute", 3, "Absolute Density",
	"Only allows given density value in emitter area.",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_use_absolute_get, SmokeFlowSettings_use_absolute_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_density = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_initial_velocity, (PropertyRNA*)&rna_SmokeFlowSettings_use_absolute,
	-1, "density", 8195, "Density",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SmokeFlowSettings, density), 4, NULL},
	SmokeFlowSettings_density_get, SmokeFlowSettings_density_set, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 1.0f, 4, 0.0f, NULL
};

BooleanPropertyRNA rna_SmokeFlowSettings_initial_velocity = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_velocity_factor, (PropertyRNA*)&rna_SmokeFlowSettings_density,
	-1, "initial_velocity", 3, "Initial Velocity",
	"Smoke inherits it\'s velocity from the emitter particle",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_initial_velocity_get, SmokeFlowSettings_initial_velocity_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SmokeFlowSettings_velocity_factor = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_use_outflow, (PropertyRNA*)&rna_SmokeFlowSettings_initial_velocity,
	-1, "velocity_factor", 8195, "Multiplier",
	"Multiplier to adjust velocity passed to smoke",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SmokeFlowSettings, vel_multi), 4, NULL},
	SmokeFlowSettings_velocity_factor_get, SmokeFlowSettings_velocity_factor_set, NULL, NULL, NULL, -2.0f, 2.0f, -2.0f, 2.0f, 0.0500000007f, 5, 0.0f, NULL
};

BooleanPropertyRNA rna_SmokeFlowSettings_use_outflow = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_particle_system, (PropertyRNA*)&rna_SmokeFlowSettings_velocity_factor,
	-1, "use_outflow", 3, "Outflow",
	"Deletes smoke from simulation",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_use_outflow_get, SmokeFlowSettings_use_outflow_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_SmokeFlowSettings_particle_system = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_rna_properties, (PropertyRNA*)&rna_SmokeFlowSettings_use_outflow,
	-1, "particle_system", 1, "Particle Systems",
	"Particle systems emitted from the object",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Smoke_reset_dependancy, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_particle_system_get, SmokeFlowSettings_particle_system_set, NULL, NULL,&RNA_ParticleSystem
};

CollectionPropertyRNA rna_SmokeFlowSettings_rna_properties = {
	{(PropertyRNA*)&rna_SmokeFlowSettings_temperature, (PropertyRNA*)&rna_SmokeFlowSettings_particle_system,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SmokeFlowSettings_rna_properties_begin, SmokeFlowSettings_rna_properties_next, SmokeFlowSettings_rna_properties_end, SmokeFlowSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_SmokeFlowSettings_temperature = {
	{NULL, (PropertyRNA*)&rna_SmokeFlowSettings_rna_properties,
	-1, "temperature", 8195, "Temp. Diff.",
	"Temperature difference to ambient temperature",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(SmokeFlowSettings, temp), 4, NULL},
	SmokeFlowSettings_temperature_get, SmokeFlowSettings_temperature_set, NULL, NULL, NULL, -10.0f, 10.0f, -10.0f, 10.0f, 1.0f, 1, 0.0f, NULL
};

StructRNA RNA_SmokeFlowSettings = {
	{(ContainerRNA *)&RNA_SmokeModifier, (ContainerRNA *)&RNA_SmokeDomainSettings,
	NULL,
	{(PropertyRNA*)&rna_SmokeFlowSettings_rna_type, (PropertyRNA*)&rna_SmokeFlowSettings_temperature}},
	"SmokeFlowSettings"	, NULL,NULL
, 0, "Flow Settings", "Smoke flow settings",
	17,
	NULL, (PropertyRNA*)&rna_SmokeFlowSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_SmokeFlowSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

