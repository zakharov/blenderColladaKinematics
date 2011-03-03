
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

#include "rna_fcurve.c"
#include "rna_fcurve_api.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_ChannelDriverVariables_rna_type;
CollectionPropertyRNA rna_ChannelDriverVariables_rna_properties;

extern FunctionRNA rna_ChannelDriverVariables_new_func;
extern PointerPropertyRNA rna_ChannelDriverVariables_new_var;

extern FunctionRNA rna_ChannelDriverVariables_remove_func;
extern PointerPropertyRNA rna_ChannelDriverVariables_remove_variable;



PointerPropertyRNA rna_Driver_rna_type;
StringPropertyRNA rna_Driver_expression;
BooleanPropertyRNA rna_Driver_is_valid;
CollectionPropertyRNA rna_Driver_rna_properties;
BooleanPropertyRNA rna_Driver_show_debug_info;
EnumPropertyRNA rna_Driver_type;
CollectionPropertyRNA rna_Driver_variables;


PointerPropertyRNA rna_DriverTarget_rna_type;
StringPropertyRNA rna_DriverTarget_bone_target;
StringPropertyRNA rna_DriverTarget_data_path;
PointerPropertyRNA rna_DriverTarget_id;
EnumPropertyRNA rna_DriverTarget_id_type;
BooleanPropertyRNA rna_DriverTarget_use_local_space_transform;
CollectionPropertyRNA rna_DriverTarget_rna_properties;
EnumPropertyRNA rna_DriverTarget_transform_type;


PointerPropertyRNA rna_DriverVariable_rna_type;
StringPropertyRNA rna_DriverVariable_name;
CollectionPropertyRNA rna_DriverVariable_rna_properties;
CollectionPropertyRNA rna_DriverVariable_targets;
EnumPropertyRNA rna_DriverVariable_type;


PointerPropertyRNA rna_FCurve_rna_type;
BooleanPropertyRNA rna_FCurve_use_auto_handle_clamp;
FloatPropertyRNA rna_FCurve_color;
EnumPropertyRNA rna_FCurve_color_mode;
StringPropertyRNA rna_FCurve_data_path;
PointerPropertyRNA rna_FCurve_driver;
EnumPropertyRNA rna_FCurve_extrapolation;
PointerPropertyRNA rna_FCurve_group;
BooleanPropertyRNA rna_FCurve_hide;
CollectionPropertyRNA rna_FCurve_keyframe_points;
BooleanPropertyRNA rna_FCurve_lock;
CollectionPropertyRNA rna_FCurve_modifiers;
BooleanPropertyRNA rna_FCurve_mute;
CollectionPropertyRNA rna_FCurve_rna_properties;
IntPropertyRNA rna_FCurve_array_index;
CollectionPropertyRNA rna_FCurve_sampled_points;
BooleanPropertyRNA rna_FCurve_select;
BooleanPropertyRNA rna_FCurve_is_valid;

extern FunctionRNA rna_FCurve_evaluate_func;
extern FloatPropertyRNA rna_FCurve_evaluate_frame;
extern FloatPropertyRNA rna_FCurve_evaluate_position;

extern FunctionRNA rna_FCurve_range_func;
extern FloatPropertyRNA rna_FCurve_range_range;



PointerPropertyRNA rna_FCurveKeyframePoints_rna_type;
CollectionPropertyRNA rna_FCurveKeyframePoints_rna_properties;

extern FunctionRNA rna_FCurveKeyframePoints_insert_func;
extern FloatPropertyRNA rna_FCurveKeyframePoints_insert_frame;
extern FloatPropertyRNA rna_FCurveKeyframePoints_insert_value;
extern EnumPropertyRNA rna_FCurveKeyframePoints_insert_options;
extern PointerPropertyRNA rna_FCurveKeyframePoints_insert_keyframe;

extern FunctionRNA rna_FCurveKeyframePoints_add_func;
extern IntPropertyRNA rna_FCurveKeyframePoints_add_count;

extern FunctionRNA rna_FCurveKeyframePoints_remove_func;
extern PointerPropertyRNA rna_FCurveKeyframePoints_remove_keyframe;
extern BooleanPropertyRNA rna_FCurveKeyframePoints_remove_fast;



PointerPropertyRNA rna_FCurveModifiers_rna_type;
PointerPropertyRNA rna_FCurveModifiers_active;
CollectionPropertyRNA rna_FCurveModifiers_rna_properties;

extern FunctionRNA rna_FCurveModifiers_new_func;
extern PointerPropertyRNA rna_FCurveModifiers_new_fmodifier;
extern EnumPropertyRNA rna_FCurveModifiers_new_type;

extern FunctionRNA rna_FCurveModifiers_remove_func;
extern PointerPropertyRNA rna_FCurveModifiers_remove_modifier;



PointerPropertyRNA rna_FCurveSample_rna_type;
FloatPropertyRNA rna_FCurveSample_co;
CollectionPropertyRNA rna_FCurveSample_rna_properties;
BooleanPropertyRNA rna_FCurveSample_select;


PointerPropertyRNA rna_FModifier_rna_type;
BooleanPropertyRNA rna_FModifier_active;
BooleanPropertyRNA rna_FModifier_is_valid;
BooleanPropertyRNA rna_FModifier_show_expanded;
BooleanPropertyRNA rna_FModifier_mute;
CollectionPropertyRNA rna_FModifier_rna_properties;
EnumPropertyRNA rna_FModifier_type;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;

IntPropertyRNA rna_FModifierCycles_cycles_after;
EnumPropertyRNA rna_FModifierCycles_mode_after;
IntPropertyRNA rna_FModifierCycles_cycles_before;
EnumPropertyRNA rna_FModifierCycles_mode_before;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;

CollectionPropertyRNA rna_FModifierEnvelope_control_points;
FloatPropertyRNA rna_FModifierEnvelope_default_max;
FloatPropertyRNA rna_FModifierEnvelope_default_min;
FloatPropertyRNA rna_FModifierEnvelope_reference_value;


PointerPropertyRNA rna_FModifierEnvelopeControlPoint_rna_type;
FloatPropertyRNA rna_FModifierEnvelopeControlPoint_frame;
FloatPropertyRNA rna_FModifierEnvelopeControlPoint_max;
FloatPropertyRNA rna_FModifierEnvelopeControlPoint_min;
CollectionPropertyRNA rna_FModifierEnvelopeControlPoint_rna_properties;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;

BooleanPropertyRNA rna_FModifierFunctionGenerator_use_additive;
FloatPropertyRNA rna_FModifierFunctionGenerator_amplitude;
FloatPropertyRNA rna_FModifierFunctionGenerator_phase_multiplier;
FloatPropertyRNA rna_FModifierFunctionGenerator_phase_offset;
EnumPropertyRNA rna_FModifierFunctionGenerator_function_type;
FloatPropertyRNA rna_FModifierFunctionGenerator_value_offset;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;

BooleanPropertyRNA rna_FModifierGenerator_use_additive;
FloatPropertyRNA rna_FModifierGenerator_coefficients;
EnumPropertyRNA rna_FModifierGenerator_mode;
IntPropertyRNA rna_FModifierGenerator_poly_order;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;

BooleanPropertyRNA rna_FModifierLimits_use_max_x;
FloatPropertyRNA rna_FModifierLimits_max_x;
BooleanPropertyRNA rna_FModifierLimits_use_max_y;
FloatPropertyRNA rna_FModifierLimits_max_y;
BooleanPropertyRNA rna_FModifierLimits_use_min_x;
FloatPropertyRNA rna_FModifierLimits_min_x;
BooleanPropertyRNA rna_FModifierLimits_use_min_y;
FloatPropertyRNA rna_FModifierLimits_min_y;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;

EnumPropertyRNA rna_FModifierNoise_blend_type;
IntPropertyRNA rna_FModifierNoise_depth;
FloatPropertyRNA rna_FModifierNoise_phase;
FloatPropertyRNA rna_FModifierNoise_scale;
FloatPropertyRNA rna_FModifierNoise_strength;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;


extern PointerPropertyRNA rna_FModifier_rna_type;
extern BooleanPropertyRNA rna_FModifier_active;
extern BooleanPropertyRNA rna_FModifier_is_valid;
extern BooleanPropertyRNA rna_FModifier_show_expanded;
extern BooleanPropertyRNA rna_FModifier_mute;
extern CollectionPropertyRNA rna_FModifier_rna_properties;
extern EnumPropertyRNA rna_FModifier_type;

FloatPropertyRNA rna_FModifierStepped_frame_end;
FloatPropertyRNA rna_FModifierStepped_frame_offset;
FloatPropertyRNA rna_FModifierStepped_frame_start;
FloatPropertyRNA rna_FModifierStepped_frame_step;
BooleanPropertyRNA rna_FModifierStepped_use_frame_end;
BooleanPropertyRNA rna_FModifierStepped_use_frame_start;


PointerPropertyRNA rna_Keyframe_rna_type;
FloatPropertyRNA rna_Keyframe_co;
FloatPropertyRNA rna_Keyframe_handle_left;
EnumPropertyRNA rna_Keyframe_handle_left_type;
BooleanPropertyRNA rna_Keyframe_select_left_handle;
FloatPropertyRNA rna_Keyframe_handle_right;
EnumPropertyRNA rna_Keyframe_handle_right_type;
BooleanPropertyRNA rna_Keyframe_select_right_handle;
EnumPropertyRNA rna_Keyframe_interpolation;
CollectionPropertyRNA rna_Keyframe_rna_properties;
BooleanPropertyRNA rna_Keyframe_select_control_point;
EnumPropertyRNA rna_Keyframe_type;

PointerRNA ChannelDriverVariables_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ChannelDriverVariables_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ChannelDriverVariables_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ChannelDriverVariables_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ChannelDriverVariables_rna_properties_get(iter);
}

void ChannelDriverVariables_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ChannelDriverVariables_rna_properties_get(iter);
}

void ChannelDriverVariables_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Driver_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Driver_expression_get(PointerRNA *ptr, char *value)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	BLI_strncpy(value, data->expression, 256);
}

int Driver_expression_length(PointerRNA *ptr)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	return strlen(data->expression);
}

void Driver_expression_set(PointerRNA *ptr, const char *value)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	BLI_strncpy(data->expression, value, 256);
}

int Driver_is_valid_get(PointerRNA *ptr)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void Driver_is_valid_set(PointerRNA *ptr, int value)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	if(!value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA Driver_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Driver_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Driver_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Driver_rna_properties_get(iter);
}

void Driver_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Driver_rna_properties_get(iter);
}

void Driver_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Driver_show_debug_info_get(PointerRNA *ptr)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Driver_show_debug_info_set(PointerRNA *ptr, int value)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

int Driver_type_get(PointerRNA *ptr)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	return (int)(data->type);
}

void Driver_type_set(PointerRNA *ptr, int value)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);
	data->type= value;
}

static PointerRNA Driver_variables_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_DriverVariable, rna_iterator_listbase_get(iter));
}

void Driver_variables_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ChannelDriver *data= (ChannelDriver*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Driver_variables;

	rna_iterator_listbase_begin(iter, &data->variables, NULL);

	if(iter->valid)
		iter->ptr= Driver_variables_get(iter);
}

void Driver_variables_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Driver_variables_get(iter);
}

void Driver_variables_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Driver_variables_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Driver_variables_begin(&iter, ptr);

	if(iter.valid){
		ListBaseIterator *internal= iter.internal;
		if(internal->skip) {
			while(index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found= (index == -1 && iter.valid);
		}
		else {
			while(index-- > 0 && internal->link)
				internal->link= internal->link->next;
			found= (index == -1 && internal->link);
		}
		if(found) *r_ptr = Driver_variables_get(&iter);
	}

	Driver_variables_end(&iter);

	return found;
}

PointerRNA DriverTarget_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void DriverTarget_bone_target_get(PointerRNA *ptr, char *value)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	BLI_strncpy(value, data->pchan_name, 32);
}

int DriverTarget_bone_target_length(PointerRNA *ptr)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	return strlen(data->pchan_name);
}

void DriverTarget_bone_target_set(PointerRNA *ptr, const char *value)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	BLI_strncpy(data->pchan_name, value, 32);
}

void DriverTarget_data_path_get(PointerRNA *ptr, char *value)
{
	rna_DriverTarget_RnaPath_get(ptr, value);
}

int DriverTarget_data_path_length(PointerRNA *ptr)
{
	return rna_DriverTarget_RnaPath_length(ptr);
}

void DriverTarget_data_path_set(PointerRNA *ptr, const char *value)
{
	rna_DriverTarget_RnaPath_set(ptr, value);
}

PointerRNA DriverTarget_id_get(PointerRNA *ptr)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->id);
}

void DriverTarget_id_set(PointerRNA *ptr, PointerRNA value)
{
	rna_DriverTarget_id_set(ptr, value);
}

int DriverTarget_id_type_get(PointerRNA *ptr)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	return (int)(data->idtype);
}

void DriverTarget_id_type_set(PointerRNA *ptr, int value)
{
	rna_DriverTarget_id_type_set(ptr, value);
}

int DriverTarget_use_local_space_transform_get(PointerRNA *ptr)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void DriverTarget_use_local_space_transform_set(PointerRNA *ptr, int value)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

static PointerRNA DriverTarget_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DriverTarget_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_DriverTarget_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= DriverTarget_rna_properties_get(iter);
}

void DriverTarget_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= DriverTarget_rna_properties_get(iter);
}

void DriverTarget_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int DriverTarget_transform_type_get(PointerRNA *ptr)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	return (int)(data->transChan);
}

void DriverTarget_transform_type_set(PointerRNA *ptr, int value)
{
	DriverTarget *data= (DriverTarget*)(ptr->data);
	data->transChan= value;
}

PointerRNA DriverVariable_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void DriverVariable_name_get(PointerRNA *ptr, char *value)
{
	DriverVar *data= (DriverVar*)(ptr->data);
	BLI_strncpy(value, data->name, 64);
}

int DriverVariable_name_length(PointerRNA *ptr)
{
	DriverVar *data= (DriverVar*)(ptr->data);
	return strlen(data->name);
}

void DriverVariable_name_set(PointerRNA *ptr, const char *value)
{
	DriverVar *data= (DriverVar*)(ptr->data);
	BLI_strncpy(data->name, value, 64);
}

static PointerRNA DriverVariable_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DriverVariable_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_DriverVariable_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= DriverVariable_rna_properties_get(iter);
}

void DriverVariable_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= DriverVariable_rna_properties_get(iter);
}

void DriverVariable_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int DriverVariable_targets_length(PointerRNA *ptr)
{
	DriverVar *data= (DriverVar*)(ptr->data);
	return (data->targets == NULL)? 0: data->num_targets;
}

static PointerRNA DriverVariable_targets_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_DriverTarget, rna_iterator_array_get(iter));
}

void DriverVariable_targets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	DriverVar *data= (DriverVar*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_DriverVariable_targets;

	rna_iterator_array_begin(iter, data->targets, sizeof(data->targets[0]), data->num_targets, 0, NULL);

	if(iter->valid)
		iter->ptr= DriverVariable_targets_get(iter);
}

void DriverVariable_targets_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= DriverVariable_targets_get(iter);
}

void DriverVariable_targets_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int DriverVariable_targets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	DriverVariable_targets_begin(&iter, ptr);

	if(iter.valid){
		ArrayIterator *internal= iter.internal;
		if(index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if(internal->skip) {
			while(index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found= (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize*index;
			found= 1;
		}
		if(found) *r_ptr = DriverVariable_targets_get(&iter);
	}

	DriverVariable_targets_end(&iter);

	return found;
}

int DriverVariable_type_get(PointerRNA *ptr)
{
	DriverVar *data= (DriverVar*)(ptr->data);
	return (int)(data->type);
}

void DriverVariable_type_set(PointerRNA *ptr, int value)
{
	rna_DriverVariable_type_set(ptr, value);
}

PointerRNA FCurve_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int FCurve_use_auto_handle_clamp_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void FCurve_use_auto_handle_clamp_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

void FCurve_color_get(PointerRNA *ptr, float values[3])
{
	FCurve *data= (FCurve*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->color)[i]);
	}
}

void FCurve_color_set(PointerRNA *ptr, const float values[3])
{
	FCurve *data= (FCurve*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->color)[i]= CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int FCurve_color_mode_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (int)(data->color_mode);
}

void FCurve_color_mode_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	data->color_mode= value;
}

void FCurve_data_path_get(PointerRNA *ptr, char *value)
{
	rna_FCurve_RnaPath_get(ptr, value);
}

int FCurve_data_path_length(PointerRNA *ptr)
{
	return rna_FCurve_RnaPath_length(ptr);
}

void FCurve_data_path_set(PointerRNA *ptr, const char *value)
{
	rna_FCurve_RnaPath_set(ptr, value);
}

PointerRNA FCurve_driver_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Driver, data->driver);
}

int FCurve_extrapolation_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (int)(data->extend);
}

void FCurve_extrapolation_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	data->extend= value;
}

PointerRNA FCurve_group_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ActionGroup, data->grp);
}

void FCurve_group_set(PointerRNA *ptr, PointerRNA value)
{
	rna_FCurve_group_set(ptr, value);
}

int FCurve_hide_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void FCurve_hide_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	if(!value) data->flag |= 1;
	else data->flag &= ~1;
}

int FCurve_keyframe_points_length(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (data->bezt == NULL)? 0: data->totvert;
}

static PointerRNA FCurve_keyframe_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Keyframe, rna_iterator_array_get(iter));
}

void FCurve_keyframe_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FCurve_keyframe_points;

	rna_iterator_array_begin(iter, data->bezt, sizeof(data->bezt[0]), data->totvert, 0, NULL);

	if(iter->valid)
		iter->ptr= FCurve_keyframe_points_get(iter);
}

void FCurve_keyframe_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= FCurve_keyframe_points_get(iter);
}

void FCurve_keyframe_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int FCurve_keyframe_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	FCurve_keyframe_points_begin(&iter, ptr);

	if(iter.valid){
		ArrayIterator *internal= iter.internal;
		if(index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if(internal->skip) {
			while(index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found= (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize*index;
			found= 1;
		}
		if(found) *r_ptr = FCurve_keyframe_points_get(&iter);
	}

	FCurve_keyframe_points_end(&iter);

	return found;
}

int FCurve_lock_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void FCurve_lock_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

static PointerRNA FCurve_modifiers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifier, rna_iterator_listbase_get(iter));
}

void FCurve_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FCurve_modifiers;

	rna_iterator_listbase_begin(iter, &data->modifiers, NULL);

	if(iter->valid)
		iter->ptr= FCurve_modifiers_get(iter);
}

void FCurve_modifiers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= FCurve_modifiers_get(iter);
}

void FCurve_modifiers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FCurve_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	FCurve_modifiers_begin(&iter, ptr);

	if(iter.valid){
		ListBaseIterator *internal= iter.internal;
		if(internal->skip) {
			while(index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found= (index == -1 && iter.valid);
		}
		else {
			while(index-- > 0 && internal->link)
				internal->link= internal->link->next;
			found= (index == -1 && internal->link);
		}
		if(found) *r_ptr = FCurve_modifiers_get(&iter);
	}

	FCurve_modifiers_end(&iter);

	return found;
}

int FCurve_mute_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void FCurve_mute_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

static PointerRNA FCurve_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FCurve_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FCurve_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= FCurve_rna_properties_get(iter);
}

void FCurve_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= FCurve_rna_properties_get(iter);
}

void FCurve_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FCurve_array_index_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (int)(data->array_index);
}

void FCurve_array_index_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	data->array_index= value;
}

int FCurve_sampled_points_length(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (data->fpt == NULL)? 0: data->totvert;
}

static PointerRNA FCurve_sampled_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurveSample, rna_iterator_array_get(iter));
}

void FCurve_sampled_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FCurve_sampled_points;

	rna_iterator_array_begin(iter, data->fpt, sizeof(data->fpt[0]), data->totvert, 0, NULL);

	if(iter->valid)
		iter->ptr= FCurve_sampled_points_get(iter);
}

void FCurve_sampled_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= FCurve_sampled_points_get(iter);
}

void FCurve_sampled_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int FCurve_sampled_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	FCurve_sampled_points_begin(&iter, ptr);

	if(iter.valid){
		ArrayIterator *internal= iter.internal;
		if(index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if(internal->skip) {
			while(index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found= (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize*index;
			found= 1;
		}
		if(found) *r_ptr = FCurve_sampled_points_get(&iter);
	}

	FCurve_sampled_points_end(&iter);

	return found;
}

int FCurve_select_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void FCurve_select_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int FCurve_is_valid_get(PointerRNA *ptr)
{
	FCurve *data= (FCurve*)(ptr->data);
	return !(((data->flag) & 1024) != 0);
}

void FCurve_is_valid_set(PointerRNA *ptr, int value)
{
	FCurve *data= (FCurve*)(ptr->data);
	if(!value) data->flag |= 1024;
	else data->flag &= ~1024;
}

PointerRNA FCurveKeyframePoints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA FCurveKeyframePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FCurveKeyframePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FCurveKeyframePoints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= FCurveKeyframePoints_rna_properties_get(iter);
}

void FCurveKeyframePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= FCurveKeyframePoints_rna_properties_get(iter);
}

void FCurveKeyframePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA FCurveModifiers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA FCurveModifiers_active_get(PointerRNA *ptr)
{
	return rna_FCurve_active_modifier_get(ptr);
}

void FCurveModifiers_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_FCurve_active_modifier_set(ptr, value);
}

static PointerRNA FCurveModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FCurveModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FCurveModifiers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= FCurveModifiers_rna_properties_get(iter);
}

void FCurveModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= FCurveModifiers_rna_properties_get(iter);
}

void FCurveModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA FCurveSample_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void FCurveSample_co_get(PointerRNA *ptr, float values[2])
{
	FPoint *data= (FPoint*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		values[i]= (float)(((float*)data->vec)[i]);
	}
}

void FCurveSample_co_set(PointerRNA *ptr, const float values[2])
{
	FPoint *data= (FPoint*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		((float*)data->vec)[i]= values[i];
	}
}

static PointerRNA FCurveSample_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FCurveSample_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FCurveSample_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= FCurveSample_rna_properties_get(iter);
}

void FCurveSample_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= FCurveSample_rna_properties_get(iter);
}

void FCurveSample_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FCurveSample_select_get(PointerRNA *ptr)
{
	FPoint *data= (FPoint*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void FCurveSample_select_set(PointerRNA *ptr, int value)
{
	FPoint *data= (FPoint*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA FModifier_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int FModifier_active_get(PointerRNA *ptr)
{
	FModifier *data= (FModifier*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void FModifier_active_set(PointerRNA *ptr, int value)
{
	rna_FModifier_active_set(ptr, value);
}

int FModifier_is_valid_get(PointerRNA *ptr)
{
	FModifier *data= (FModifier*)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

int FModifier_show_expanded_get(PointerRNA *ptr)
{
	FModifier *data= (FModifier*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void FModifier_show_expanded_set(PointerRNA *ptr, int value)
{
	FModifier *data= (FModifier*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int FModifier_mute_get(PointerRNA *ptr)
{
	FModifier *data= (FModifier*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void FModifier_mute_set(PointerRNA *ptr, int value)
{
	FModifier *data= (FModifier*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

static PointerRNA FModifier_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FModifier_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FModifier_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= FModifier_rna_properties_get(iter);
}

void FModifier_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= FModifier_rna_properties_get(iter);
}

void FModifier_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FModifier_type_get(PointerRNA *ptr)
{
	FModifier *data= (FModifier*)(ptr->data);
	return (int)(data->type);
}

int FModifierCycles_cycles_after_get(PointerRNA *ptr)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	return (int)(data->after_cycles);
}

void FModifierCycles_cycles_after_set(PointerRNA *ptr, int value)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	data->after_cycles= CLAMPIS(value, -32768, 32767);
}

int FModifierCycles_mode_after_get(PointerRNA *ptr)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	return (int)(data->after_mode);
}

void FModifierCycles_mode_after_set(PointerRNA *ptr, int value)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	data->after_mode= value;
}

int FModifierCycles_cycles_before_get(PointerRNA *ptr)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	return (int)(data->before_cycles);
}

void FModifierCycles_cycles_before_set(PointerRNA *ptr, int value)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	data->before_cycles= CLAMPIS(value, -32768, 32767);
}

int FModifierCycles_mode_before_get(PointerRNA *ptr)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	return (int)(data->before_mode);
}

void FModifierCycles_mode_before_set(PointerRNA *ptr, int value)
{
	FMod_Cycles *data= (FMod_Cycles*)(((FModifier*)ptr->data)->data);
	data->before_mode= value;
}

int FModifierEnvelope_control_points_length(PointerRNA *ptr)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);
	return (data->data == NULL)? 0: data->totvert;
}

static PointerRNA FModifierEnvelope_control_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FModifierEnvelopeControlPoint, rna_iterator_array_get(iter));
}

void FModifierEnvelope_control_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FModifierEnvelope_control_points;

	rna_iterator_array_begin(iter, data->data, sizeof(data->data[0]), data->totvert, 0, NULL);

	if(iter->valid)
		iter->ptr= FModifierEnvelope_control_points_get(iter);
}

void FModifierEnvelope_control_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= FModifierEnvelope_control_points_get(iter);
}

void FModifierEnvelope_control_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int FModifierEnvelope_control_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	FModifierEnvelope_control_points_begin(&iter, ptr);

	if(iter.valid){
		ArrayIterator *internal= iter.internal;
		if(index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if(internal->skip) {
			while(index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found= (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize*index;
			found= 1;
		}
		if(found) *r_ptr = FModifierEnvelope_control_points_get(&iter);
	}

	FModifierEnvelope_control_points_end(&iter);

	return found;
}

float FModifierEnvelope_default_max_get(PointerRNA *ptr)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);
	return (float)(data->max);
}

void FModifierEnvelope_default_max_set(PointerRNA *ptr, float value)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);
	data->max= value;
}

float FModifierEnvelope_default_min_get(PointerRNA *ptr)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);
	return (float)(data->min);
}

void FModifierEnvelope_default_min_set(PointerRNA *ptr, float value)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);
	data->min= value;
}

float FModifierEnvelope_reference_value_get(PointerRNA *ptr)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);
	return (float)(data->midval);
}

void FModifierEnvelope_reference_value_set(PointerRNA *ptr, float value)
{
	FMod_Envelope *data= (FMod_Envelope*)(((FModifier*)ptr->data)->data);
	data->midval= value;
}

PointerRNA FModifierEnvelopeControlPoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float FModifierEnvelopeControlPoint_frame_get(PointerRNA *ptr)
{
	FCM_EnvelopeData *data= (FCM_EnvelopeData*)(ptr->data);
	return (float)(data->time);
}

void FModifierEnvelopeControlPoint_frame_set(PointerRNA *ptr, float value)
{
	FCM_EnvelopeData *data= (FCM_EnvelopeData*)(ptr->data);
	data->time= value;
}

float FModifierEnvelopeControlPoint_max_get(PointerRNA *ptr)
{
	FCM_EnvelopeData *data= (FCM_EnvelopeData*)(ptr->data);
	return (float)(data->max);
}

void FModifierEnvelopeControlPoint_max_set(PointerRNA *ptr, float value)
{
	FCM_EnvelopeData *data= (FCM_EnvelopeData*)(ptr->data);
	data->max= value;
}

float FModifierEnvelopeControlPoint_min_get(PointerRNA *ptr)
{
	FCM_EnvelopeData *data= (FCM_EnvelopeData*)(ptr->data);
	return (float)(data->min);
}

void FModifierEnvelopeControlPoint_min_set(PointerRNA *ptr, float value)
{
	FCM_EnvelopeData *data= (FCM_EnvelopeData*)(ptr->data);
	data->min= value;
}

static PointerRNA FModifierEnvelopeControlPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void FModifierEnvelopeControlPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_FModifierEnvelopeControlPoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= FModifierEnvelopeControlPoint_rna_properties_get(iter);
}

void FModifierEnvelopeControlPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= FModifierEnvelopeControlPoint_rna_properties_get(iter);
}

void FModifierEnvelopeControlPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int FModifierFunctionGenerator_use_additive_get(PointerRNA *ptr)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void FModifierFunctionGenerator_use_additive_set(PointerRNA *ptr, int value)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

float FModifierFunctionGenerator_amplitude_get(PointerRNA *ptr)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	return (float)(data->amplitude);
}

void FModifierFunctionGenerator_amplitude_set(PointerRNA *ptr, float value)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	data->amplitude= value;
}

float FModifierFunctionGenerator_phase_multiplier_get(PointerRNA *ptr)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	return (float)(data->phase_multiplier);
}

void FModifierFunctionGenerator_phase_multiplier_set(PointerRNA *ptr, float value)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	data->phase_multiplier= value;
}

float FModifierFunctionGenerator_phase_offset_get(PointerRNA *ptr)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	return (float)(data->phase_offset);
}

void FModifierFunctionGenerator_phase_offset_set(PointerRNA *ptr, float value)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	data->phase_offset= value;
}

int FModifierFunctionGenerator_function_type_get(PointerRNA *ptr)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	return (int)(data->type);
}

void FModifierFunctionGenerator_function_type_set(PointerRNA *ptr, int value)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	data->type= value;
}

float FModifierFunctionGenerator_value_offset_get(PointerRNA *ptr)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	return (float)(data->value_offset);
}

void FModifierFunctionGenerator_value_offset_set(PointerRNA *ptr, float value)
{
	FMod_FunctionGenerator *data= (FMod_FunctionGenerator*)(((FModifier*)ptr->data)->data);
	data->value_offset= value;
}

int FModifierGenerator_use_additive_get(PointerRNA *ptr)
{
	FMod_Generator *data= (FMod_Generator*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void FModifierGenerator_use_additive_set(PointerRNA *ptr, int value)
{
	FMod_Generator *data= (FMod_Generator*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

void FModifierGenerator_coefficients_get(PointerRNA *ptr, float values[])
{
	rna_FModifierGenerator_coefficients_get(ptr, values);
}

void FModifierGenerator_coefficients_set(PointerRNA *ptr, const float values[])
{
	rna_FModifierGenerator_coefficients_set(ptr, values);
}

int FModifierGenerator_mode_get(PointerRNA *ptr)
{
	FMod_Generator *data= (FMod_Generator*)(((FModifier*)ptr->data)->data);
	return (int)(data->mode);
}

void FModifierGenerator_mode_set(PointerRNA *ptr, int value)
{
	FMod_Generator *data= (FMod_Generator*)(((FModifier*)ptr->data)->data);
	data->mode= value;
}

int FModifierGenerator_poly_order_get(PointerRNA *ptr)
{
	FMod_Generator *data= (FMod_Generator*)(((FModifier*)ptr->data)->data);
	return (int)(data->poly_order);
}

void FModifierGenerator_poly_order_set(PointerRNA *ptr, int value)
{
	FMod_Generator *data= (FMod_Generator*)(((FModifier*)ptr->data)->data);
	data->poly_order= value;
}

int FModifierLimits_use_max_x_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void FModifierLimits_use_max_x_set(PointerRNA *ptr, int value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

float FModifierLimits_max_x_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (float)(data->rect.xmax);
}

void FModifierLimits_max_x_set(PointerRNA *ptr, float value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	data->rect.xmax= value;
}

int FModifierLimits_use_max_y_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 8) != 0);
}

void FModifierLimits_use_max_y_set(PointerRNA *ptr, int value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

float FModifierLimits_max_y_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (float)(data->rect.ymax);
}

void FModifierLimits_max_y_set(PointerRNA *ptr, float value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	data->rect.ymax= value;
}

int FModifierLimits_use_min_x_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void FModifierLimits_use_min_x_set(PointerRNA *ptr, int value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

float FModifierLimits_min_x_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (float)(data->rect.xmin);
}

void FModifierLimits_min_x_set(PointerRNA *ptr, float value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	data->rect.xmin= value;
}

int FModifierLimits_use_min_y_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 4) != 0);
}

void FModifierLimits_use_min_y_set(PointerRNA *ptr, int value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

float FModifierLimits_min_y_get(PointerRNA *ptr)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	return (float)(data->rect.ymin);
}

void FModifierLimits_min_y_set(PointerRNA *ptr, float value)
{
	FMod_Limits *data= (FMod_Limits*)(((FModifier*)ptr->data)->data);
	data->rect.ymin= value;
}

int FModifierNoise_blend_type_get(PointerRNA *ptr)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	return (int)(data->modification);
}

void FModifierNoise_blend_type_set(PointerRNA *ptr, int value)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	data->modification= value;
}

int FModifierNoise_depth_get(PointerRNA *ptr)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	return (int)(data->depth);
}

void FModifierNoise_depth_set(PointerRNA *ptr, int value)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	data->depth= CLAMPIS(value, 0, 32767);
}

float FModifierNoise_phase_get(PointerRNA *ptr)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	return (float)(data->phase);
}

void FModifierNoise_phase_set(PointerRNA *ptr, float value)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	data->phase= value;
}

float FModifierNoise_scale_get(PointerRNA *ptr)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	return (float)(data->size);
}

void FModifierNoise_scale_set(PointerRNA *ptr, float value)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	data->size= value;
}

float FModifierNoise_strength_get(PointerRNA *ptr)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	return (float)(data->strength);
}

void FModifierNoise_strength_set(PointerRNA *ptr, float value)
{
	FMod_Noise *data= (FMod_Noise*)(((FModifier*)ptr->data)->data);
	data->strength= value;
}

float FModifierStepped_frame_end_get(PointerRNA *ptr)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	return (float)(data->end_frame);
}

void FModifierStepped_frame_end_set(PointerRNA *ptr, float value)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	data->end_frame= value;
}

float FModifierStepped_frame_offset_get(PointerRNA *ptr)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	return (float)(data->offset);
}

void FModifierStepped_frame_offset_set(PointerRNA *ptr, float value)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	data->offset= value;
}

float FModifierStepped_frame_start_get(PointerRNA *ptr)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	return (float)(data->start_frame);
}

void FModifierStepped_frame_start_set(PointerRNA *ptr, float value)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	data->start_frame= value;
}

float FModifierStepped_frame_step_get(PointerRNA *ptr)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	return (float)(data->step_size);
}

void FModifierStepped_frame_step_set(PointerRNA *ptr, float value)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	data->step_size= value;
}

int FModifierStepped_use_frame_end_get(PointerRNA *ptr)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 2) != 0);
}

void FModifierStepped_use_frame_end_set(PointerRNA *ptr, int value)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int FModifierStepped_use_frame_start_get(PointerRNA *ptr)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void FModifierStepped_use_frame_start_set(PointerRNA *ptr, int value)
{
	FMod_Stepped *data= (FMod_Stepped*)(((FModifier*)ptr->data)->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA Keyframe_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Keyframe_co_get(PointerRNA *ptr, float values[2])
{
	rna_FKeyframe_ctrlpoint_get(ptr, values);
}

void Keyframe_co_set(PointerRNA *ptr, const float values[2])
{
	rna_FKeyframe_ctrlpoint_set(ptr, values);
}

void Keyframe_handle_left_get(PointerRNA *ptr, float values[2])
{
	rna_FKeyframe_handle1_get(ptr, values);
}

void Keyframe_handle_left_set(PointerRNA *ptr, const float values[2])
{
	rna_FKeyframe_handle1_set(ptr, values);
}

int Keyframe_handle_left_type_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->h1);
}

void Keyframe_handle_left_type_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->h1= value;
}

int Keyframe_select_left_handle_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->f1);
}

void Keyframe_select_left_handle_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->f1= value;
}

void Keyframe_handle_right_get(PointerRNA *ptr, float values[2])
{
	rna_FKeyframe_handle2_get(ptr, values);
}

void Keyframe_handle_right_set(PointerRNA *ptr, const float values[2])
{
	rna_FKeyframe_handle2_set(ptr, values);
}

int Keyframe_handle_right_type_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->h2);
}

void Keyframe_handle_right_type_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->h2= value;
}

int Keyframe_select_right_handle_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->f3);
}

void Keyframe_select_right_handle_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->f3= value;
}

int Keyframe_interpolation_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->ipo);
}

void Keyframe_interpolation_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->ipo= value;
}

static PointerRNA Keyframe_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Keyframe_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Keyframe_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Keyframe_rna_properties_get(iter);
}

void Keyframe_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Keyframe_rna_properties_get(iter);
}

void Keyframe_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Keyframe_select_control_point_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->f2);
}

void Keyframe_select_control_point_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->f2= value;
}

int Keyframe_type_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->hide);
}

void Keyframe_type_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->hide= value;
}

void ChannelDriverVariables_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ChannelDriver *_self;
	struct DriverVar *var;
	char *_data, *_retdata;
	
	_self= (struct ChannelDriver *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	
	var= rna_Driver_new_variable(_self);
	*((struct DriverVar**)_retdata)= var;
}

void ChannelDriverVariables_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ChannelDriver *_self;
	struct DriverVar *variable;
	char *_data;
	
	_self= (struct ChannelDriver *)_ptr->data;
	_data= (char *)_parms->data;
	variable= *((struct DriverVar**)_data);
	
	rna_Driver_remove_variable(_self, reports, variable);
}

/* Repeated prototypes to detect errors */

struct DriverVar *rna_Driver_new_variable(struct ChannelDriver *_self);
void rna_Driver_remove_variable(struct ChannelDriver *_self, ReportList *reports, struct DriverVar *variable);




void FCurve_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	float frame;
	float position;
	char *_data, *_retdata;
	
	_self= (struct FCurve *)_ptr->data;
	_data= (char *)_parms->data;
	frame= *((float*)_data);
	_data+= 4;
	_retdata= _data;
	
	position= evaluate_fcurve(_self, frame);
	*((float*)_retdata)= position;
}

void FCurve_range_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	float *range;
	char *_data;
	
	_self= (struct FCurve *)_ptr->data;
	_data= (char *)_parms->data;
	range= ((float*)_data);
	
	rna_fcurve_range(_self, range);
}

/* Repeated prototypes to detect errors */

float evaluate_fcurve(struct FCurve *_self, float frame);
void rna_fcurve_range(struct FCurve *_self, float range[2]);

void FCurveKeyframePoints_insert_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	float frame;
	float value;
	int options;
	struct BezTriple *keyframe;
	char *_data, *_retdata;
	
	_self= (struct FCurve *)_ptr->data;
	_data= (char *)_parms->data;
	frame= *((float*)_data);
	_data+= 4;
	value= *((float*)_data);
	_data+= 4;
	options= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	keyframe= rna_FKeyframe_points_insert(_self, frame, value, options);
	*((struct BezTriple**)_retdata)= keyframe;
}

void FCurveKeyframePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	int count;
	char *_data;
	
	_self= (struct FCurve *)_ptr->data;
	_data= (char *)_parms->data;
	count= *((int*)_data);
	
	rna_FKeyframe_points_add(_self, count);
}

void FCurveKeyframePoints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct BezTriple *keyframe;
	int fast;
	char *_data;
	
	_self= (struct FCurve *)_ptr->data;
	_data= (char *)_parms->data;
	keyframe= *((struct BezTriple**)_data);
	_data+= 4;
	fast= *((int*)_data);
	
	rna_FKeyframe_points_remove(_self, reports, keyframe, fast);
}

/* Repeated prototypes to detect errors */

struct BezTriple *rna_FKeyframe_points_insert(struct FCurve *_self, float frame, float value, int options);
void rna_FKeyframe_points_add(struct FCurve *_self, int count);
void rna_FKeyframe_points_remove(struct FCurve *_self, ReportList *reports, struct BezTriple *keyframe, int fast);

void FCurveModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct FModifier *fmodifier;
	int type;
	char *_data, *_retdata;
	
	_self= (struct FCurve *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	_data+= 4;
	type= *((int*)_data);
	
	fmodifier= rna_FCurve_modifiers_new(_self, type);
	*((struct FModifier**)_retdata)= fmodifier;
}

void FCurveModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct FCurve *_self;
	struct FModifier *modifier;
	char *_data;
	
	_self= (struct FCurve *)_ptr->data;
	_data= (char *)_parms->data;
	modifier= *((struct FModifier**)_data);
	
	rna_FCurve_modifiers_remove(_self, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct FModifier *rna_FCurve_modifiers_new(struct FCurve *_self, int type);
void rna_FCurve_modifiers_remove(struct FCurve *_self, ReportList *reports, struct FModifier *modifier);













/* ChannelDriver Variables */
PointerPropertyRNA rna_ChannelDriverVariables_rna_type = {
	{(PropertyRNA*)&rna_ChannelDriverVariables_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ChannelDriverVariables_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_ChannelDriverVariables_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ChannelDriverVariables_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ChannelDriverVariables_rna_properties_begin, ChannelDriverVariables_rna_properties_next, ChannelDriverVariables_rna_properties_end, ChannelDriverVariables_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_ChannelDriverVariables_new_var = {
	{NULL, NULL,
	-1, "var", 8, "",
	"Newly created Driver Variable.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_DriverVariable
};

FunctionRNA rna_ChannelDriverVariables_new_func = {
	{(FunctionRNA*)&rna_ChannelDriverVariables_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ChannelDriverVariables_new_var, (PropertyRNA*)&rna_ChannelDriverVariables_new_var}},
	"new", 0, "Add a new variable for the driver.",
	ChannelDriverVariables_new_call,
	(PropertyRNA*)&rna_ChannelDriverVariables_new_var
};

PointerPropertyRNA rna_ChannelDriverVariables_remove_variable = {
	{NULL, NULL,
	-1, "variable", 262148, "",
	"Variable to remove from the driver.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_DriverVariable
};

FunctionRNA rna_ChannelDriverVariables_remove_func = {
	{NULL, (FunctionRNA*)&rna_ChannelDriverVariables_new_func,
	NULL,
	{(PropertyRNA*)&rna_ChannelDriverVariables_remove_variable, (PropertyRNA*)&rna_ChannelDriverVariables_remove_variable}},
	"remove", 4, "Remove an existing variable from the driver.",
	ChannelDriverVariables_remove_call,
	NULL
};

StructRNA RNA_ChannelDriverVariables = {
	{(ContainerRNA *)&RNA_ChildOfConstraint, (ContainerRNA *)&RNA_CastModifier,
	NULL,
	{(PropertyRNA*)&rna_ChannelDriverVariables_rna_type, (PropertyRNA*)&rna_ChannelDriverVariables_rna_properties}},
	"ChannelDriverVariables"	, NULL,NULL
, 0, "ChannelDriver Variables", "Collection of channel driver Variables",
	17,
	NULL, (PropertyRNA*)&rna_ChannelDriverVariables_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ChannelDriverVariables_new_func, (FunctionRNA*)&rna_ChannelDriverVariables_remove_func}
};

/* Driver */
PointerPropertyRNA rna_Driver_rna_type = {
	{(PropertyRNA*)&rna_Driver_expression, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Driver_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Driver_expression = {
	{(PropertyRNA*)&rna_Driver_is_valid, (PropertyRNA*)&rna_Driver_rna_type,
	-1, "expression", 1, "Expression",
	"Expression to use for Scripted Expression",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	rna_ChannelDriver_update_expr, 0, NULL, NULL,
	0, -1, NULL},
	Driver_expression_get, Driver_expression_length, Driver_expression_set, 256, ""
};

BooleanPropertyRNA rna_Driver_is_valid = {
	{(PropertyRNA*)&rna_Driver_rna_properties, (PropertyRNA*)&rna_Driver_expression,
	-1, "is_valid", 3, "Invalid",
	"Driver could not be evaluated in past, so should be skipped",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Driver_is_valid_get, Driver_is_valid_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Driver_rna_properties = {
	{(PropertyRNA*)&rna_Driver_show_debug_info, (PropertyRNA*)&rna_Driver_is_valid,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Driver_rna_properties_begin, Driver_rna_properties_next, Driver_rna_properties_end, Driver_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Driver_show_debug_info = {
	{(PropertyRNA*)&rna_Driver_type, (PropertyRNA*)&rna_Driver_rna_properties,
	-1, "show_debug_info", 3, "Show Debug Info",
	"Show intermediate values for the driver calculations to allow debugging of drivers",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Driver_show_debug_info_get, Driver_show_debug_info_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Driver_type_items[6] = {
	{0, "AVERAGE", 0, "Averaged Value", ""},
	{2, "SUM", 0, "Sum Values", ""},
	{1, "SCRIPTED", 0, "Scripted Expression", ""},
	{3, "MIN", 0, "Minimum Value", ""},
	{4, "MAX", 0, "Maximum Value", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Driver_type = {
	{(PropertyRNA*)&rna_Driver_variables, (PropertyRNA*)&rna_Driver_show_debug_info,
	-1, "type", 3, "Type",
	"Driver type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ChannelDriver_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Driver_type_get, Driver_type_set, NULL, rna_Driver_type_items, 5, 0
};

CollectionPropertyRNA rna_Driver_variables = {
	{NULL, (PropertyRNA*)&rna_Driver_type,
	-1, "variables", 0, "Variables",
	"Properties acting as inputs for this driver",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ChannelDriverVariables},
	Driver_variables_begin, Driver_variables_next, Driver_variables_end, Driver_variables_get, NULL, Driver_variables_lookup_int, NULL, &RNA_DriverVariable
};

StructRNA RNA_Driver = {
	{(ContainerRNA *)&RNA_DriverTarget, (ContainerRNA *)&RNA_DopeSheet,
	NULL,
	{(PropertyRNA*)&rna_Driver_rna_type, (PropertyRNA*)&rna_Driver_variables}},
	"Driver"	, NULL,NULL
, 0, "Driver", "Driver for the value of a setting based on an external value",
	17,
	NULL, (PropertyRNA*)&rna_Driver_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Driver Target */
PointerPropertyRNA rna_DriverTarget_rna_type = {
	{(PropertyRNA*)&rna_DriverTarget_bone_target, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DriverTarget_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_DriverTarget_bone_target = {
	{(PropertyRNA*)&rna_DriverTarget_data_path, (PropertyRNA*)&rna_DriverTarget_rna_type,
	-1, "bone_target", 1, "Bone Name",
	"Name of PoseBone to use as target",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL,
	0, -1, NULL},
	DriverTarget_bone_target_get, DriverTarget_bone_target_length, DriverTarget_bone_target_set, 32, ""
};

StringPropertyRNA rna_DriverTarget_data_path = {
	{(PropertyRNA*)&rna_DriverTarget_id, (PropertyRNA*)&rna_DriverTarget_bone_target,
	-1, "data_path", 1, "Data Path",
	"RNA Path (from ID-block) to property used",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL,
	0, -1, NULL},
	DriverTarget_data_path_get, DriverTarget_data_path_length, DriverTarget_data_path_set, 0, ""
};

PointerPropertyRNA rna_DriverTarget_id = {
	{(PropertyRNA*)&rna_DriverTarget_id_type, (PropertyRNA*)&rna_DriverTarget_data_path,
	-1, "id", 65, "ID",
	"ID-block that the specific property used can be found from (id_type property must be set first)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, rna_DriverTarget_id_editable, NULL,
	0, -1, NULL},
	DriverTarget_id_get, DriverTarget_id_set, rna_DriverTarget_id_typef, NULL,&RNA_ID
};

static EnumPropertyItem rna_DriverTarget_id_type_items[27] = {
	{17217, "ACTION", 115, "Action", ""},
	{21057, "ARMATURE", 172, "Armature", ""},
	{21058, "BRUSH", 182, "Brush", ""},
	{16707, "CAMERA", 168, "Camera", ""},
	{21827, "CURVE", 161, "Curve", ""},
	{18006, "FONT", 186, "Font", ""},
	{17479, "GREASEPENCIL", 197, "Grease Pencil", ""},
	{21063, "GROUP", 171, "Group", ""},
	{19785, "IMAGE", 183, "Image", ""},
	{17739, "KEY", 176, "Key", ""},
	{16716, "LAMP", 164, "Lamp", ""},
	{18764, "LIBRARY", 170, "Library", ""},
	{21580, "LATTICE", 163, "Lattice", ""},
	{16717, "MATERIAL", 165, "Material", ""},
	{16973, "META", 162, "MetaBall", ""},
	{17741, "MESH", 160, "Mesh", ""},
	{21582, "NODETREE", 119, "NodeTree", ""},
	{16975, "OBJECT", 159, "Object", ""},
	{16720, "PARTICLE", 169, "Particle", ""},
	{17235, "SCENE", 156, "Scene", ""},
	{21075, "SCREEN", 27, "Screen", ""},
	{20307, "SOUND", 501, "Sound", ""},
	{22612, "TEXT", 112, "Text", ""},
	{17748, "TEXTURE", 166, "Texture", ""},
	{20311, "WORLD", 158, "World", ""},
	{19799, "WINDOWMANAGER", 26, "Window Manager", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DriverTarget_id_type = {
	{(PropertyRNA*)&rna_DriverTarget_use_local_space_transform, (PropertyRNA*)&rna_DriverTarget_id,
	-1, "id_type", 3, "ID Type",
	"Type of ID-block that can be used",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, rna_DriverTarget_id_type_editable, NULL,
	0, -1, NULL},
	DriverTarget_id_type_get, DriverTarget_id_type_set, NULL, rna_DriverTarget_id_type_items, 26, 16975
};

BooleanPropertyRNA rna_DriverTarget_use_local_space_transform = {
	{(PropertyRNA*)&rna_DriverTarget_rna_properties, (PropertyRNA*)&rna_DriverTarget_id_type,
	-1, "use_local_space_transform", 3, "Local Space",
	"Use transforms in Local Space (as opposed to the worldspace default)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL,
	0, -1, NULL},
	DriverTarget_use_local_space_transform_get, DriverTarget_use_local_space_transform_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_DriverTarget_rna_properties = {
	{(PropertyRNA*)&rna_DriverTarget_transform_type, (PropertyRNA*)&rna_DriverTarget_use_local_space_transform,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DriverTarget_rna_properties_begin, DriverTarget_rna_properties_next, DriverTarget_rna_properties_end, DriverTarget_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_DriverTarget_transform_type_items[10] = {
	{0, "LOC_X", 0, "X Location", ""},
	{1, "LOC_Y", 0, "Y Location", ""},
	{2, "LOC_Z", 0, "Z Location", ""},
	{3, "ROT_X", 0, "X Rotation", ""},
	{4, "ROT_Y", 0, "Y Rotation", ""},
	{5, "ROT_Z", 0, "Z Rotation", ""},
	{6, "SCALE_X", 0, "X Scale", ""},
	{7, "SCALE_Y", 0, "Y Scale", ""},
	{8, "SCALE_Z", 0, "Z Scale", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DriverTarget_transform_type = {
	{NULL, (PropertyRNA*)&rna_DriverTarget_rna_properties,
	-1, "transform_type", 3, "Type",
	"Driver variable type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_DriverTarget_update_data, 0, NULL, NULL,
	0, -1, NULL},
	DriverTarget_transform_type_get, DriverTarget_transform_type_set, NULL, rna_DriverTarget_transform_type_items, 9, 0
};

StructRNA RNA_DriverTarget = {
	{(ContainerRNA *)&RNA_DriverVariable, (ContainerRNA *)&RNA_Driver,
	NULL,
	{(PropertyRNA*)&rna_DriverTarget_rna_type, (PropertyRNA*)&rna_DriverTarget_transform_type}},
	"DriverTarget"	, NULL,NULL
, 0, "Driver Target", "Source of input values for driver variables",
	17,
	NULL, (PropertyRNA*)&rna_DriverTarget_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Driver Variable */
PointerPropertyRNA rna_DriverVariable_rna_type = {
	{(PropertyRNA*)&rna_DriverVariable_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DriverVariable_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_DriverVariable_name = {
	{(PropertyRNA*)&rna_DriverVariable_rna_properties, (PropertyRNA*)&rna_DriverVariable_rna_type,
	-1, "name", 1, "Name",
	"Name to use in scripted expressions/functions. (No spaces or dots are allowed. Also, must not start with a symbol or digit)",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	rna_DriverTarget_update_name, 0, NULL, NULL,
	0, -1, NULL},
	DriverVariable_name_get, DriverVariable_name_length, DriverVariable_name_set, 64, ""
};

CollectionPropertyRNA rna_DriverVariable_rna_properties = {
	{(PropertyRNA*)&rna_DriverVariable_targets, (PropertyRNA*)&rna_DriverVariable_name,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DriverVariable_rna_properties_begin, DriverVariable_rna_properties_next, DriverVariable_rna_properties_end, DriverVariable_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_DriverVariable_targets = {
	{(PropertyRNA*)&rna_DriverVariable_type, (PropertyRNA*)&rna_DriverVariable_rna_properties,
	-1, "targets", 16384, "Targets",
	"Sources of input data for evaluating this variable",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {8, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DriverVariable_targets_begin, DriverVariable_targets_next, DriverVariable_targets_end, DriverVariable_targets_get, DriverVariable_targets_length, DriverVariable_targets_lookup_int, NULL, &RNA_DriverTarget
};

static EnumPropertyItem rna_DriverVariable_type_items[5] = {
	{0, "SINGLE_PROP", 0, "Single Property", "Use the value from some RNA property (Default)"},
	{3, "TRANSFORMS", 0, "Transform Channel", "Final transformation value of object or bone"},
	{1, "ROTATION_DIFF", 0, "Rotational Difference", "Use the angle between two bones"},
	{2, "LOC_DIFF", 0, "Distance", "Distance between two bones or objects"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_DriverVariable_type = {
	{NULL, (PropertyRNA*)&rna_DriverVariable_targets,
	-1, "type", 3, "Type",
	"Driver variable type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ChannelDriver_update_data, 0, NULL, NULL,
	0, -1, NULL},
	DriverVariable_type_get, DriverVariable_type_set, NULL, rna_DriverVariable_type_items, 4, 0
};

StructRNA RNA_DriverVariable = {
	{(ContainerRNA *)&RNA_DupliObject, (ContainerRNA *)&RNA_DriverTarget,
	NULL,
	{(PropertyRNA*)&rna_DriverVariable_rna_type, (PropertyRNA*)&rna_DriverVariable_type}},
	"DriverVariable"	, NULL,NULL
, 0, "Driver Variable", "Variable from some source/target for driver relationship",
	17,
	(PropertyRNA*)&rna_DriverVariable_name, (PropertyRNA*)&rna_DriverVariable_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* F-Curve */
PointerPropertyRNA rna_FCurve_rna_type = {
	{(PropertyRNA*)&rna_FCurve_use_auto_handle_clamp, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurve_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_FCurve_use_auto_handle_clamp = {
	{(PropertyRNA*)&rna_FCurve_color, (PropertyRNA*)&rna_FCurve_rna_type,
	-1, "use_auto_handle_clamp", 3, "Auto Clamped Handles",
	"All auto-handles for F-Curve are clamped",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	FCurve_use_auto_handle_clamp_get, FCurve_use_auto_handle_clamp_set, NULL, NULL, 0, NULL
};

static float rna_FCurve_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurve_color = {
	{(PropertyRNA*)&rna_FCurve_color_mode, (PropertyRNA*)&rna_FCurve_use_auto_handle_clamp,
	-1, "color", 8195, "Color",
	"Color of the F-Curve in the Graph Editor",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 234881024, NULL, NULL,
	offsetof(FCurve, color), 4, NULL},
	NULL, NULL, FCurve_color_get, FCurve_color_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_FCurve_color_default
};

static EnumPropertyItem rna_FCurve_color_mode_items[4] = {
	{0, "AUTO_RAINBOW", 0, "Auto Rainbow", ""},
	{1, "AUTO_RGB", 0, "Auto XYZ to RGB", ""},
	{2, "CUSTOM", 0, "User Defined", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FCurve_color_mode = {
	{(PropertyRNA*)&rna_FCurve_data_path, (PropertyRNA*)&rna_FCurve_color,
	-1, "color_mode", 3, "Color Mode",
	"Method used to determine color of F-Curve in Graph Editor",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 234881024, NULL, NULL,
	0, -1, NULL},
	FCurve_color_mode_get, FCurve_color_mode_set, NULL, rna_FCurve_color_mode_items, 3, 0
};

StringPropertyRNA rna_FCurve_data_path = {
	{(PropertyRNA*)&rna_FCurve_driver, (PropertyRNA*)&rna_FCurve_color_mode,
	-1, "data_path", 1, "Data Path",
	"RNA Path to property affected by F-Curve",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 234881024, NULL, NULL,
	0, -1, NULL},
	FCurve_data_path_get, FCurve_data_path_length, FCurve_data_path_set, 0, ""
};

PointerPropertyRNA rna_FCurve_driver = {
	{(PropertyRNA*)&rna_FCurve_extrapolation, (PropertyRNA*)&rna_FCurve_data_path,
	-1, "driver", 0, "Driver",
	"Channel Driver (only set for Driver F-Curves)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurve_driver_get, NULL, NULL, NULL,&RNA_Driver
};

static EnumPropertyItem rna_FCurve_extrapolation_items[3] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "LINEAR", 0, "Linear", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FCurve_extrapolation = {
	{(PropertyRNA*)&rna_FCurve_group, (PropertyRNA*)&rna_FCurve_driver,
	-1, "extrapolation", 3, "Extrapolation",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 234881024, NULL, NULL,
	0, -1, NULL},
	FCurve_extrapolation_get, FCurve_extrapolation_set, NULL, rna_FCurve_extrapolation_items, 2, 0
};

PointerPropertyRNA rna_FCurve_group = {
	{(PropertyRNA*)&rna_FCurve_hide, (PropertyRNA*)&rna_FCurve_extrapolation,
	-1, "group", 1, "Group",
	"Action Group that this F-Curve belongs to",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 234881024, NULL, NULL,
	0, -1, NULL},
	FCurve_group_get, FCurve_group_set, NULL, NULL,&RNA_ActionGroup
};

BooleanPropertyRNA rna_FCurve_hide = {
	{(PropertyRNA*)&rna_FCurve_keyframe_points, (PropertyRNA*)&rna_FCurve_group,
	-1, "hide", 3, "Hide",
	"F-Curve and its keyframes are hidden in the Graph Editor graphs",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	0, -1, NULL},
	FCurve_hide_get, FCurve_hide_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_FCurve_keyframe_points = {
	{(PropertyRNA*)&rna_FCurve_lock, (PropertyRNA*)&rna_FCurve_hide,
	-1, "keyframe_points", 16384, "Keyframes",
	"User-editable keyframes",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_FCurveKeyframePoints},
	FCurve_keyframe_points_begin, FCurve_keyframe_points_next, FCurve_keyframe_points_end, FCurve_keyframe_points_get, FCurve_keyframe_points_length, FCurve_keyframe_points_lookup_int, NULL, &RNA_Keyframe
};

BooleanPropertyRNA rna_FCurve_lock = {
	{(PropertyRNA*)&rna_FCurve_modifiers, (PropertyRNA*)&rna_FCurve_keyframe_points,
	-1, "lock", 3, "Lock",
	"F-Curve\'s settings cannot be edited",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	FCurve_lock_get, FCurve_lock_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_FCurve_modifiers = {
	{(PropertyRNA*)&rna_FCurve_mute, (PropertyRNA*)&rna_FCurve_lock,
	-1, "modifiers", 0, "Modifiers",
	"Modifiers affecting the shape of the F-Curve",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_FCurveModifiers},
	FCurve_modifiers_begin, FCurve_modifiers_next, FCurve_modifiers_end, FCurve_modifiers_get, NULL, FCurve_modifiers_lookup_int, NULL, &RNA_FModifier
};

BooleanPropertyRNA rna_FCurve_mute = {
	{(PropertyRNA*)&rna_FCurve_rna_properties, (PropertyRNA*)&rna_FCurve_modifiers,
	-1, "mute", 3, "Muted",
	"F-Curve is not evaluated",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	FCurve_mute_get, FCurve_mute_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_FCurve_rna_properties = {
	{(PropertyRNA*)&rna_FCurve_array_index, (PropertyRNA*)&rna_FCurve_mute,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurve_rna_properties_begin, FCurve_rna_properties_next, FCurve_rna_properties_end, FCurve_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_FCurve_array_index = {
	{(PropertyRNA*)&rna_FCurve_sampled_points, (PropertyRNA*)&rna_FCurve_rna_properties,
	-1, "array_index", 8195, "RNA Array Index",
	"Index to the specific property affected by F-Curve if applicable",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 234881024, NULL, NULL,
	offsetof(FCurve, array_index), 0, NULL},
	FCurve_array_index_get, FCurve_array_index_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_FCurve_sampled_points = {
	{(PropertyRNA*)&rna_FCurve_select, (PropertyRNA*)&rna_FCurve_array_index,
	-1, "sampled_points", 16384, "Sampled Points",
	"Sampled animation data",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurve_sampled_points_begin, FCurve_sampled_points_next, FCurve_sampled_points_end, FCurve_sampled_points_get, FCurve_sampled_points_length, FCurve_sampled_points_lookup_int, NULL, &RNA_FCurveSample
};

BooleanPropertyRNA rna_FCurve_select = {
	{(PropertyRNA*)&rna_FCurve_is_valid, (PropertyRNA*)&rna_FCurve_sampled_points,
	-1, "select", 3, "Select",
	"F-Curve is selected for editing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468550, NULL, NULL,
	0, -1, NULL},
	FCurve_select_get, FCurve_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FCurve_is_valid = {
	{NULL, (PropertyRNA*)&rna_FCurve_select,
	-1, "is_valid", 3, "Valid",
	"False when F-Curve could not be evaluated in past, so should be skipped when evaluating",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	FCurve_is_valid_get, FCurve_is_valid_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FCurve_evaluate_frame = {
	{(PropertyRNA*)&rna_FCurve_evaluate_position, NULL,
	-1, "frame", 7, "Frame",
	"Evaluate fcurve at given frame",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_FCurve_evaluate_position = {
	{NULL, (PropertyRNA*)&rna_FCurve_evaluate_frame,
	-1, "position", 11, "Position",
	"FCurve position",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_FCurve_evaluate_func = {
	{(FunctionRNA*)&rna_FCurve_range_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_FCurve_evaluate_frame, (PropertyRNA*)&rna_FCurve_evaluate_position}},
	"evaluate", 0, "Evaluate fcurve.",
	FCurve_evaluate_call,
	(PropertyRNA*)&rna_FCurve_evaluate_position
};

static float rna_FCurve_range_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurve_range_range = {
	{NULL, NULL,
	-1, "range", 8388619, "Range",
	"Min/Max values",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_FCurve_range_range_default
};

FunctionRNA rna_FCurve_range_func = {
	{NULL, (FunctionRNA*)&rna_FCurve_evaluate_func,
	NULL,
	{(PropertyRNA*)&rna_FCurve_range_range, (PropertyRNA*)&rna_FCurve_range_range}},
	"range", 0, "Get the time extents for F-Curve.",
	FCurve_range_call,
	NULL
};

StructRNA RNA_FCurve = {
	{(ContainerRNA *)&RNA_FCurveActuator, (ContainerRNA *)&RNA_ExpressionController,
	NULL,
	{(PropertyRNA*)&rna_FCurve_rna_type, (PropertyRNA*)&rna_FCurve_is_valid}},
	"FCurve"	, NULL,NULL
, 0, "F-Curve", "F-Curve defining values of a period of time",
	167,
	NULL, (PropertyRNA*)&rna_FCurve_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_FCurve_evaluate_func, (FunctionRNA*)&rna_FCurve_range_func}
};

/* Keyframe Points */
PointerPropertyRNA rna_FCurveKeyframePoints_rna_type = {
	{(PropertyRNA*)&rna_FCurveKeyframePoints_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurveKeyframePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_FCurveKeyframePoints_rna_properties = {
	{NULL, (PropertyRNA*)&rna_FCurveKeyframePoints_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurveKeyframePoints_rna_properties_begin, FCurveKeyframePoints_rna_properties_next, FCurveKeyframePoints_rna_properties_end, FCurveKeyframePoints_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_FCurveKeyframePoints_insert_frame = {
	{(PropertyRNA*)&rna_FCurveKeyframePoints_insert_value, NULL,
	-1, "frame", 7, "",
	"X Value of this keyframe point",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FCurveKeyframePoints_insert_value = {
	{(PropertyRNA*)&rna_FCurveKeyframePoints_insert_options, (PropertyRNA*)&rna_FCurveKeyframePoints_insert_frame,
	-1, "value", 7, "",
	"Y Value of this keyframe point",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_FCurveKeyframePoints_insert_options_items[4] = {
	{16, "REPLACE", 0, "Replace", "Don\'t add any new keyframes, but just replace existing ones"},
	{1, "NEEDED", 0, "Needed", "Only adds keyframes that are needed"},
	{4, "FAST", 0, "Fast", "Fast keyframe insertion to avoid recalculating the curve each time"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FCurveKeyframePoints_insert_options = {
	{(PropertyRNA*)&rna_FCurveKeyframePoints_insert_keyframe, (PropertyRNA*)&rna_FCurveKeyframePoints_insert_value,
	-1, "options", 2097155, "",
	"Keyframe options.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_FCurveKeyframePoints_insert_options_items, 3, 0
};

PointerPropertyRNA rna_FCurveKeyframePoints_insert_keyframe = {
	{NULL, (PropertyRNA*)&rna_FCurveKeyframePoints_insert_options,
	-1, "keyframe", 8, "",
	"Newly created keyframe",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Keyframe
};

FunctionRNA rna_FCurveKeyframePoints_insert_func = {
	{(FunctionRNA*)&rna_FCurveKeyframePoints_add_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_FCurveKeyframePoints_insert_frame, (PropertyRNA*)&rna_FCurveKeyframePoints_insert_keyframe}},
	"insert", 0, "Add a keyframe point to a F-Curve.",
	FCurveKeyframePoints_insert_call,
	(PropertyRNA*)&rna_FCurveKeyframePoints_insert_keyframe
};

IntPropertyRNA rna_FCurveKeyframePoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Number",
	"Number of points to add to the spline",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	1, INT_MAX, 1, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_FCurveKeyframePoints_add_func = {
	{(FunctionRNA*)&rna_FCurveKeyframePoints_remove_func, (FunctionRNA*)&rna_FCurveKeyframePoints_insert_func,
	NULL,
	{(PropertyRNA*)&rna_FCurveKeyframePoints_add_count, (PropertyRNA*)&rna_FCurveKeyframePoints_add_count}},
	"add", 0, "Add a keyframe point to a F-Curve.",
	FCurveKeyframePoints_add_call,
	NULL
};

PointerPropertyRNA rna_FCurveKeyframePoints_remove_keyframe = {
	{(PropertyRNA*)&rna_FCurveKeyframePoints_remove_fast, NULL,
	-1, "keyframe", 262148, "",
	"Keyframe to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Keyframe
};

BooleanPropertyRNA rna_FCurveKeyframePoints_remove_fast = {
	{NULL, (PropertyRNA*)&rna_FCurveKeyframePoints_remove_keyframe,
	-1, "fast", 3, "Fast",
	"Fast keyframe removal to avoid recalculating the curve each time",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_FCurveKeyframePoints_remove_func = {
	{NULL, (FunctionRNA*)&rna_FCurveKeyframePoints_add_func,
	NULL,
	{(PropertyRNA*)&rna_FCurveKeyframePoints_remove_keyframe, (PropertyRNA*)&rna_FCurveKeyframePoints_remove_fast}},
	"remove", 4, "Remove keyframe from an fcurve.",
	FCurveKeyframePoints_remove_call,
	NULL
};

StructRNA RNA_FCurveKeyframePoints = {
	{(ContainerRNA *)&RNA_FCurveModifiers, (ContainerRNA *)&RNA_FCurveActuator,
	NULL,
	{(PropertyRNA*)&rna_FCurveKeyframePoints_rna_type, (PropertyRNA*)&rna_FCurveKeyframePoints_rna_properties}},
	"FCurveKeyframePoints"	, NULL,NULL
, 0, "Keyframe Points", "Collection of keyframe points",
	17,
	NULL, (PropertyRNA*)&rna_FCurveKeyframePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_FCurveKeyframePoints_insert_func, (FunctionRNA*)&rna_FCurveKeyframePoints_remove_func}
};

/* F-Curve Modifiers */
PointerPropertyRNA rna_FCurveModifiers_rna_type = {
	{(PropertyRNA*)&rna_FCurveModifiers_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurveModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_FCurveModifiers_active = {
	{(PropertyRNA*)&rna_FCurveModifiers_rna_properties, (PropertyRNA*)&rna_FCurveModifiers_rna_type,
	-1, "active", 1, "Active F-Curve Modifier",
	"Active F-Curve Modifier",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurveModifiers_active_get, FCurveModifiers_active_set, NULL, NULL,&RNA_FModifier
};

CollectionPropertyRNA rna_FCurveModifiers_rna_properties = {
	{NULL, (PropertyRNA*)&rna_FCurveModifiers_active,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurveModifiers_rna_properties_begin, FCurveModifiers_rna_properties_next, FCurveModifiers_rna_properties_end, FCurveModifiers_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_FCurveModifiers_new_fmodifier = {
	{(PropertyRNA*)&rna_FCurveModifiers_new_type, NULL,
	-1, "fmodifier", 8, "",
	"New fmodifier.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FModifier
};

static EnumPropertyItem rna_FCurveModifiers_new_type_items[10] = {
	{0, "NULL", 0, "Invalid", ""},
	{1, "GENERATOR", 0, "Generator", ""},
	{2, "FNGENERATOR", 0, "Built-In Function", ""},
	{3, "ENVELOPE", 0, "Envelope", ""},
	{4, "CYCLES", 0, "Cycles", ""},
	{5, "NOISE", 0, "Noise", ""},
	{6, "FILTER", 0, "Filter", ""},
	{8, "LIMITS", 0, "Limits", ""},
	{9, "STEPPED", 0, "Stepped Interpolation", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FCurveModifiers_new_type = {
	{NULL, (PropertyRNA*)&rna_FCurveModifiers_new_fmodifier,
	-1, "type", 7, "",
	"Constraint type to add.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_FCurveModifiers_new_type_items, 9, 1
};

FunctionRNA rna_FCurveModifiers_new_func = {
	{(FunctionRNA*)&rna_FCurveModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_FCurveModifiers_new_fmodifier, (PropertyRNA*)&rna_FCurveModifiers_new_type}},
	"new", 0, "Add a constraint to this object",
	FCurveModifiers_new_call,
	(PropertyRNA*)&rna_FCurveModifiers_new_fmodifier
};

PointerPropertyRNA rna_FCurveModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 262148, "",
	"Removed modifier.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FModifier
};

FunctionRNA rna_FCurveModifiers_remove_func = {
	{NULL, (FunctionRNA*)&rna_FCurveModifiers_new_func,
	NULL,
	{(PropertyRNA*)&rna_FCurveModifiers_remove_modifier, (PropertyRNA*)&rna_FCurveModifiers_remove_modifier}},
	"remove", 4, "Remove a modifier from this fcurve.",
	FCurveModifiers_remove_call,
	NULL
};

StructRNA RNA_FCurveModifiers = {
	{(ContainerRNA *)&RNA_FCurveSample, (ContainerRNA *)&RNA_FCurveKeyframePoints,
	NULL,
	{(PropertyRNA*)&rna_FCurveModifiers_rna_type, (PropertyRNA*)&rna_FCurveModifiers_rna_properties}},
	"FCurveModifiers"	, NULL,NULL
, 0, "F-Curve Modifiers", "Collection of F-Curve Modifiers",
	17,
	NULL, (PropertyRNA*)&rna_FCurveModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_FCurveModifiers_new_func, (FunctionRNA*)&rna_FCurveModifiers_remove_func}
};

/* F-Curve Sample */
PointerPropertyRNA rna_FCurveSample_rna_type = {
	{(PropertyRNA*)&rna_FCurveSample_co, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurveSample_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_FCurveSample_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FCurveSample_co = {
	{(PropertyRNA*)&rna_FCurveSample_rna_properties, (PropertyRNA*)&rna_FCurveSample_rna_type,
	-1, "co", 8195, "Point",
	"Point coordinates",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 239468545, NULL, NULL,
	offsetof(FPoint, vec), 4, NULL},
	NULL, NULL, FCurveSample_co_get, FCurveSample_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FCurveSample_co_default
};

CollectionPropertyRNA rna_FCurveSample_rna_properties = {
	{(PropertyRNA*)&rna_FCurveSample_select, (PropertyRNA*)&rna_FCurveSample_co,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FCurveSample_rna_properties_begin, FCurveSample_rna_properties_next, FCurveSample_rna_properties_end, FCurveSample_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_FCurveSample_select = {
	{NULL, (PropertyRNA*)&rna_FCurveSample_rna_properties,
	-1, "select", 3, "Select",
	"Selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468550, NULL, NULL,
	0, -1, NULL},
	FCurveSample_select_get, FCurveSample_select_set, NULL, NULL, 0, NULL
};

StructRNA RNA_FCurveSample = {
	{(ContainerRNA *)&RNA_FModifier, (ContainerRNA *)&RNA_FCurveModifiers,
	NULL,
	{(PropertyRNA*)&rna_FCurveSample_rna_type, (PropertyRNA*)&rna_FCurveSample_select}},
	"FCurveSample"	, NULL,NULL
, 0, "F-Curve Sample", "Sample point for F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FCurveSample_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* F-Modifier */
PointerPropertyRNA rna_FModifier_rna_type = {
	{(PropertyRNA*)&rna_FModifier_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FModifier_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_FModifier_active = {
	{(PropertyRNA*)&rna_FModifier_is_valid, (PropertyRNA*)&rna_FModifier_rna_type,
	-1, "active", 4099, "Active",
	"F-Curve Modifier is the one being edited ",
	12,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_FModifier_active_update, 239534080, NULL, NULL,
	0, -1, NULL},
	FModifier_active_get, FModifier_active_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FModifier_is_valid = {
	{(PropertyRNA*)&rna_FModifier_show_expanded, (PropertyRNA*)&rna_FModifier_active,
	-1, "is_valid", 2, "Disabled",
	"F-Curve Modifier has invalid settings and will not be evaluated",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	FModifier_is_valid_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FModifier_show_expanded = {
	{(PropertyRNA*)&rna_FModifier_mute, (PropertyRNA*)&rna_FModifier_is_valid,
	-1, "show_expanded", 4099, "Expanded",
	"F-Curve Modifier\'s panel is expanded in UI",
	4,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FModifier_show_expanded_get, FModifier_show_expanded_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FModifier_mute = {
	{(PropertyRNA*)&rna_FModifier_rna_properties, (PropertyRNA*)&rna_FModifier_show_expanded,
	-1, "mute", 4099, "Muted",
	"F-Curve Modifier will not be evaluated",
	515,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	FModifier_mute_get, FModifier_mute_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_FModifier_rna_properties = {
	{(PropertyRNA*)&rna_FModifier_type, (PropertyRNA*)&rna_FModifier_mute,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FModifier_rna_properties_begin, FModifier_rna_properties_next, FModifier_rna_properties_end, FModifier_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_FModifier_type_items[10] = {
	{0, "NULL", 0, "Invalid", ""},
	{1, "GENERATOR", 0, "Generator", ""},
	{2, "FNGENERATOR", 0, "Built-In Function", ""},
	{3, "ENVELOPE", 0, "Envelope", ""},
	{4, "CYCLES", 0, "Cycles", ""},
	{5, "NOISE", 0, "Noise", ""},
	{6, "FILTER", 0, "Filter", ""},
	{8, "LIMITS", 0, "Limits", ""},
	{9, "STEPPED", 0, "Stepped Interpolation", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifier_type = {
	{NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	-1, "type", 2, "Type",
	"F-Curve Modifier Type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FModifier_type_get, NULL, NULL, rna_FModifier_type_items, 9, 0
};

StructRNA RNA_FModifier = {
	{(ContainerRNA *)&RNA_FModifierCycles, (ContainerRNA *)&RNA_FCurveSample,
	NULL,
	{(PropertyRNA*)&rna_FModifier_rna_type, (PropertyRNA*)&rna_FModifier_type}},
	"FModifier"	, NULL,NULL
, 0, "F-Modifier", "Modifier for values of F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	NULL,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Cycles F-Modifier */
IntPropertyRNA rna_FModifierCycles_cycles_after = {
	{(PropertyRNA*)&rna_FModifierCycles_mode_after, NULL,
	-1, "cycles_after", 8195, "After Cycles",
	"Maximum number of cycles to allow after last keyframe. (0 = infinite)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Cycles, after_cycles), 1, NULL},
	FModifierCycles_cycles_after_get, FModifierCycles_cycles_after_set, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_FModifierCycles_mode_after_items[5] = {
	{0, "NONE", 0, "No Cycles", "Don\'t do anything"},
	{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"},
	{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between values"},
	{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierCycles_mode_after = {
	{(PropertyRNA*)&rna_FModifierCycles_cycles_before, (PropertyRNA*)&rna_FModifierCycles_cycles_after,
	-1, "mode_after", 3, "After Mode",
	"Cycling mode to use after last keyframe",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierCycles_mode_after_get, FModifierCycles_mode_after_set, NULL, rna_FModifierCycles_mode_after_items, 4, 0
};

IntPropertyRNA rna_FModifierCycles_cycles_before = {
	{(PropertyRNA*)&rna_FModifierCycles_mode_before, (PropertyRNA*)&rna_FModifierCycles_mode_after,
	-1, "cycles_before", 8195, "Before Cycles",
	"Maximum number of cycles to allow before first keyframe. (0 = infinite)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Cycles, before_cycles), 1, NULL},
	FModifierCycles_cycles_before_get, FModifierCycles_cycles_before_set, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

static EnumPropertyItem rna_FModifierCycles_mode_before_items[5] = {
	{0, "NONE", 0, "No Cycles", "Don\'t do anything"},
	{1, "REPEAT", 0, "Repeat Motion", "Repeat keyframe range as-is"},
	{2, "REPEAT_OFFSET", 0, "Repeat with Offset", "Repeat keyframe range, but with offset based on gradient between values"},
	{3, "MIRROR", 0, "Repeat Mirrored", "Alternate between forward and reverse playback of keyframe range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierCycles_mode_before = {
	{NULL, (PropertyRNA*)&rna_FModifierCycles_cycles_before,
	-1, "mode_before", 3, "Before Mode",
	"Cycling mode to use before first keyframe",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierCycles_mode_before_get, FModifierCycles_mode_before_set, NULL, rna_FModifierCycles_mode_before_items, 4, 0
};

StructRNA RNA_FModifierCycles = {
	{(ContainerRNA *)&RNA_FModifierEnvelope, (ContainerRNA *)&RNA_FModifier,
	NULL,
	{(PropertyRNA*)&rna_FModifierCycles_cycles_after, (PropertyRNA*)&rna_FModifierCycles_mode_before}},
	"FModifierCycles"	, NULL,NULL
, 0, "Cycles F-Modifier", "Repeats the values of the modified F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Envelope F-Modifier */
CollectionPropertyRNA rna_FModifierEnvelope_control_points = {
	{(PropertyRNA*)&rna_FModifierEnvelope_default_max, NULL,
	-1, "control_points", 16384, "Control Points",
	"Control points defining the shape of the envelope",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FModifierEnvelope_control_points_begin, FModifierEnvelope_control_points_next, FModifierEnvelope_control_points_end, FModifierEnvelope_control_points_get, FModifierEnvelope_control_points_length, FModifierEnvelope_control_points_lookup_int, NULL, &RNA_FModifierEnvelopeControlPoint
};

FloatPropertyRNA rna_FModifierEnvelope_default_max = {
	{(PropertyRNA*)&rna_FModifierEnvelope_default_min, (PropertyRNA*)&rna_FModifierEnvelope_control_points,
	-1, "default_max", 8195, "Default Maximum",
	"Upper distance from Reference Value for 1:1 default influence",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Envelope, max), 4, NULL},
	FModifierEnvelope_default_max_get, FModifierEnvelope_default_max_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelope_default_min = {
	{(PropertyRNA*)&rna_FModifierEnvelope_reference_value, (PropertyRNA*)&rna_FModifierEnvelope_default_max,
	-1, "default_min", 8195, "Default Minimum",
	"Lower distance from Reference Value for 1:1 default influence",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Envelope, min), 4, NULL},
	FModifierEnvelope_default_min_get, FModifierEnvelope_default_min_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelope_reference_value = {
	{NULL, (PropertyRNA*)&rna_FModifierEnvelope_default_min,
	-1, "reference_value", 8195, "Reference Value",
	"Value that envelope\'s influence is centered around / based on",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Envelope, midval), 4, NULL},
	FModifierEnvelope_reference_value_get, FModifierEnvelope_reference_value_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierEnvelope = {
	{(ContainerRNA *)&RNA_FModifierEnvelopeControlPoint, (ContainerRNA *)&RNA_FModifierCycles,
	NULL,
	{(PropertyRNA*)&rna_FModifierEnvelope_control_points, (PropertyRNA*)&rna_FModifierEnvelope_reference_value}},
	"FModifierEnvelope"	, NULL,NULL
, 0, "Envelope F-Modifier", "Scales the values of the modified F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Envelope Control Point */
PointerPropertyRNA rna_FModifierEnvelopeControlPoint_rna_type = {
	{(PropertyRNA*)&rna_FModifierEnvelopeControlPoint_frame, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FModifierEnvelopeControlPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_frame = {
	{(PropertyRNA*)&rna_FModifierEnvelopeControlPoint_max, (PropertyRNA*)&rna_FModifierEnvelopeControlPoint_rna_type,
	-1, "frame", 8195, "Frame",
	"Frame this control-point occurs on",
	0,
	PROP_FLOAT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FCM_EnvelopeData, time), 4, NULL},
	FModifierEnvelopeControlPoint_frame_get, FModifierEnvelopeControlPoint_frame_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_max = {
	{(PropertyRNA*)&rna_FModifierEnvelopeControlPoint_min, (PropertyRNA*)&rna_FModifierEnvelopeControlPoint_frame,
	-1, "max", 8195, "Maximum Value",
	"Upper bound of envelope at this control-point",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FCM_EnvelopeData, max), 4, NULL},
	FModifierEnvelopeControlPoint_max_get, FModifierEnvelopeControlPoint_max_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierEnvelopeControlPoint_min = {
	{(PropertyRNA*)&rna_FModifierEnvelopeControlPoint_rna_properties, (PropertyRNA*)&rna_FModifierEnvelopeControlPoint_max,
	-1, "min", 8195, "Minimum Value",
	"Lower bound of envelope at this control-point",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FCM_EnvelopeData, min), 4, NULL},
	FModifierEnvelopeControlPoint_min_get, FModifierEnvelopeControlPoint_min_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_FModifierEnvelopeControlPoint_rna_properties = {
	{NULL, (PropertyRNA*)&rna_FModifierEnvelopeControlPoint_min,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FModifierEnvelopeControlPoint_rna_properties_begin, FModifierEnvelopeControlPoint_rna_properties_next, FModifierEnvelopeControlPoint_rna_properties_end, FModifierEnvelopeControlPoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_FModifierEnvelopeControlPoint = {
	{(ContainerRNA *)&RNA_FModifierFunctionGenerator, (ContainerRNA *)&RNA_FModifierEnvelope,
	NULL,
	{(PropertyRNA*)&rna_FModifierEnvelopeControlPoint_rna_type, (PropertyRNA*)&rna_FModifierEnvelopeControlPoint_rna_properties}},
	"FModifierEnvelopeControlPoint"	, NULL,NULL
, 0, "Envelope Control Point", "Control point for envelope F-Modifier",
	17,
	NULL, (PropertyRNA*)&rna_FModifierEnvelopeControlPoint_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Built-In Function F-Modifier */
BooleanPropertyRNA rna_FModifierFunctionGenerator_use_additive = {
	{(PropertyRNA*)&rna_FModifierFunctionGenerator_amplitude, NULL,
	-1, "use_additive", 3, "Additive",
	"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierFunctionGenerator_use_additive_get, FModifierFunctionGenerator_use_additive_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifierFunctionGenerator_amplitude = {
	{(PropertyRNA*)&rna_FModifierFunctionGenerator_phase_multiplier, (PropertyRNA*)&rna_FModifierFunctionGenerator_use_additive,
	-1, "amplitude", 8195, "Amplitude",
	"Scale factor determining the maximum/minimum values",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_FunctionGenerator, amplitude), 4, NULL},
	FModifierFunctionGenerator_amplitude_get, FModifierFunctionGenerator_amplitude_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierFunctionGenerator_phase_multiplier = {
	{(PropertyRNA*)&rna_FModifierFunctionGenerator_phase_offset, (PropertyRNA*)&rna_FModifierFunctionGenerator_amplitude,
	-1, "phase_multiplier", 8195, "Phase Multiplier",
	"Scale factor determining the \'speed\' of the function",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_FunctionGenerator, phase_multiplier), 4, NULL},
	FModifierFunctionGenerator_phase_multiplier_get, FModifierFunctionGenerator_phase_multiplier_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierFunctionGenerator_phase_offset = {
	{(PropertyRNA*)&rna_FModifierFunctionGenerator_function_type, (PropertyRNA*)&rna_FModifierFunctionGenerator_phase_multiplier,
	-1, "phase_offset", 8195, "Phase Offset",
	"Constant factor to offset time by for function",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_FunctionGenerator, phase_offset), 4, NULL},
	FModifierFunctionGenerator_phase_offset_get, FModifierFunctionGenerator_phase_offset_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_FModifierFunctionGenerator_function_type_items[7] = {
	{0, "SIN", 0, "Sine", ""},
	{1, "COS", 0, "Cosine", ""},
	{2, "TAN", 0, "Tangent", ""},
	{3, "SQRT", 0, "Square Root", ""},
	{4, "LN", 0, "Natural Logarithm", ""},
	{5, "SINC", 0, "Normalised Sine", "sin(x) / x"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierFunctionGenerator_function_type = {
	{(PropertyRNA*)&rna_FModifierFunctionGenerator_value_offset, (PropertyRNA*)&rna_FModifierFunctionGenerator_phase_offset,
	-1, "function_type", 3, "Type",
	"Type of built-in function to use",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierFunctionGenerator_function_type_get, FModifierFunctionGenerator_function_type_set, NULL, rna_FModifierFunctionGenerator_function_type_items, 6, 0
};

FloatPropertyRNA rna_FModifierFunctionGenerator_value_offset = {
	{NULL, (PropertyRNA*)&rna_FModifierFunctionGenerator_function_type,
	-1, "value_offset", 8195, "Value Offset",
	"Constant factor to offset values by",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_FunctionGenerator, value_offset), 4, NULL},
	FModifierFunctionGenerator_value_offset_get, FModifierFunctionGenerator_value_offset_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierFunctionGenerator = {
	{(ContainerRNA *)&RNA_FModifierGenerator, (ContainerRNA *)&RNA_FModifierEnvelopeControlPoint,
	NULL,
	{(PropertyRNA*)&rna_FModifierFunctionGenerator_use_additive, (PropertyRNA*)&rna_FModifierFunctionGenerator_value_offset}},
	"FModifierFunctionGenerator"	, NULL,NULL
, 0, "Built-In Function F-Modifier", "Generates values using a Built-In Function",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Generator F-Curve Modifier */
BooleanPropertyRNA rna_FModifierGenerator_use_additive = {
	{(PropertyRNA*)&rna_FModifierGenerator_coefficients, NULL,
	-1, "use_additive", 3, "Additive",
	"Values generated by this modifier are applied on top of the existing values instead of overwriting them",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierGenerator_use_additive_get, FModifierGenerator_use_additive_set, NULL, NULL, 0, NULL
};

static float rna_FModifierGenerator_coefficients_default[32] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
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

FloatPropertyRNA rna_FModifierGenerator_coefficients = {
	{(PropertyRNA*)&rna_FModifierGenerator_mode, (PropertyRNA*)&rna_FModifierGenerator_use_additive,
	-1, "coefficients", 131075, "Coefficients",
	"Coefficients for \'x\' (starting from lowest power of x^0)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, rna_FModifierGenerator_coefficients_get_length, 1, {32, 0, 0}, 32,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, FModifierGenerator_coefficients_get, FModifierGenerator_coefficients_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FModifierGenerator_coefficients_default
};

static EnumPropertyItem rna_FModifierGenerator_mode_items[3] = {
	{0, "POLYNOMIAL", 0, "Expanded Polynomial", ""},
	{1, "POLYNOMIAL_FACTORISED", 0, "Factorised Polynomial", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierGenerator_mode = {
	{(PropertyRNA*)&rna_FModifierGenerator_poly_order, (PropertyRNA*)&rna_FModifierGenerator_coefficients,
	-1, "mode", 3, "Mode",
	"Type of generator to use",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierGenerator_mode_get, FModifierGenerator_mode_set, NULL, rna_FModifierGenerator_mode_items, 2, 0
};

IntPropertyRNA rna_FModifierGenerator_poly_order = {
	{NULL, (PropertyRNA*)&rna_FModifierGenerator_mode,
	-1, "poly_order", 8195, "Polynomial Order",
	"The highest power of \'x\' for this polynomial. (number of coefficients - 1)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Generator, poly_order), 0, NULL},
	FModifierGenerator_poly_order_get, FModifierGenerator_poly_order_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_FModifierGenerator = {
	{(ContainerRNA *)&RNA_FModifierLimits, (ContainerRNA *)&RNA_FModifierFunctionGenerator,
	NULL,
	{(PropertyRNA*)&rna_FModifierGenerator_use_additive, (PropertyRNA*)&rna_FModifierGenerator_poly_order}},
	"FModifierGenerator"	, NULL,NULL
, 0, "Generator F-Curve Modifier", "Deterministically generates values for the modified F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Limits F-Modifier */
BooleanPropertyRNA rna_FModifierLimits_use_max_x = {
	{(PropertyRNA*)&rna_FModifierLimits_max_x, NULL,
	-1, "use_max_x", 3, "Maximum X",
	"Use the maximum X value",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierLimits_use_max_x_get, FModifierLimits_use_max_x_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifierLimits_max_x = {
	{(PropertyRNA*)&rna_FModifierLimits_use_max_y, (PropertyRNA*)&rna_FModifierLimits_use_max_x,
	-1, "max_x", 8195, "Maximum X",
	"Highest X value to allow",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Limits, rect.xmax), 4, NULL},
	FModifierLimits_max_x_get, FModifierLimits_max_x_set, NULL, NULL, rna_FModifierLimits_maxx_range, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_FModifierLimits_use_max_y = {
	{(PropertyRNA*)&rna_FModifierLimits_max_y, (PropertyRNA*)&rna_FModifierLimits_max_x,
	-1, "use_max_y", 3, "Maximum Y",
	"Use the maximum Y value",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierLimits_use_max_y_get, FModifierLimits_use_max_y_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifierLimits_max_y = {
	{(PropertyRNA*)&rna_FModifierLimits_use_min_x, (PropertyRNA*)&rna_FModifierLimits_use_max_y,
	-1, "max_y", 8195, "Maximum Y",
	"Highest Y value to allow",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Limits, rect.ymax), 4, NULL},
	FModifierLimits_max_y_get, FModifierLimits_max_y_set, NULL, NULL, rna_FModifierLimits_maxy_range, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_FModifierLimits_use_min_x = {
	{(PropertyRNA*)&rna_FModifierLimits_min_x, (PropertyRNA*)&rna_FModifierLimits_max_y,
	-1, "use_min_x", 3, "Minimum X",
	"Use the minimum X value",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierLimits_use_min_x_get, FModifierLimits_use_min_x_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifierLimits_min_x = {
	{(PropertyRNA*)&rna_FModifierLimits_use_min_y, (PropertyRNA*)&rna_FModifierLimits_use_min_x,
	-1, "min_x", 8195, "Minimum X",
	"Lowest X value to allow",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Limits, rect.xmin), 4, NULL},
	FModifierLimits_min_x_get, FModifierLimits_min_x_set, NULL, NULL, rna_FModifierLimits_minx_range, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_FModifierLimits_use_min_y = {
	{(PropertyRNA*)&rna_FModifierLimits_min_y, (PropertyRNA*)&rna_FModifierLimits_min_x,
	-1, "use_min_y", 3, "Minimum Y",
	"Use the minimum Y value",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierLimits_use_min_y_get, FModifierLimits_use_min_y_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_FModifierLimits_min_y = {
	{NULL, (PropertyRNA*)&rna_FModifierLimits_use_min_y,
	-1, "min_y", 8195, "Minimum Y",
	"Lowest Y value to allow",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Limits, rect.ymin), 4, NULL},
	FModifierLimits_min_y_get, FModifierLimits_min_y_set, NULL, NULL, rna_FModifierLimits_miny_range, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierLimits = {
	{(ContainerRNA *)&RNA_FModifierNoise, (ContainerRNA *)&RNA_FModifierGenerator,
	NULL,
	{(PropertyRNA*)&rna_FModifierLimits_use_max_x, (PropertyRNA*)&rna_FModifierLimits_min_y}},
	"FModifierLimits"	, NULL,NULL
, 0, "Limits F-Modifier", "Limits the time/value ranges of the modified F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Noise F-Modifier */
static EnumPropertyItem rna_FModifierNoise_blend_type_items[5] = {
	{0, "REPLACE", 0, "Replace", ""},
	{1, "ADD", 0, "Add", ""},
	{2, "SUBTRACT", 0, "Subtract", ""},
	{3, "MULTIPLY", 0, "Multiply", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_FModifierNoise_blend_type = {
	{(PropertyRNA*)&rna_FModifierNoise_depth, NULL,
	-1, "blend_type", 3, "Blend Type",
	"Method of modifying the existing F-Curve",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierNoise_blend_type_get, FModifierNoise_blend_type_set, NULL, rna_FModifierNoise_blend_type_items, 4, 0
};

IntPropertyRNA rna_FModifierNoise_depth = {
	{(PropertyRNA*)&rna_FModifierNoise_phase, (PropertyRNA*)&rna_FModifierNoise_blend_type,
	-1, "depth", 8195, "Depth",
	"Amount of fine level detail present in the noise",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Noise, depth), 1, NULL},
	FModifierNoise_depth_get, FModifierNoise_depth_set, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

FloatPropertyRNA rna_FModifierNoise_phase = {
	{(PropertyRNA*)&rna_FModifierNoise_scale, (PropertyRNA*)&rna_FModifierNoise_depth,
	-1, "phase", 8195, "Phase",
	"A random seed for the noise effect",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Noise, phase), 4, NULL},
	FModifierNoise_phase_get, FModifierNoise_phase_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierNoise_scale = {
	{(PropertyRNA*)&rna_FModifierNoise_strength, (PropertyRNA*)&rna_FModifierNoise_phase,
	-1, "scale", 8195, "Scale",
	"Scaling (in time) of the noise",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Noise, size), 4, NULL},
	FModifierNoise_scale_get, FModifierNoise_scale_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierNoise_strength = {
	{NULL, (PropertyRNA*)&rna_FModifierNoise_scale,
	-1, "strength", 8195, "Strength",
	"Amplitude of the noise - the amount that it modifies the underlying curve",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Noise, strength), 4, NULL},
	FModifierNoise_strength_get, FModifierNoise_strength_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FModifierNoise = {
	{(ContainerRNA *)&RNA_FModifierPython, (ContainerRNA *)&RNA_FModifierLimits,
	NULL,
	{(PropertyRNA*)&rna_FModifierNoise_blend_type, (PropertyRNA*)&rna_FModifierNoise_strength}},
	"FModifierNoise"	, NULL,NULL
, 0, "Noise F-Modifier", "Gives randomness to the modified F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Python F-Modifier */
StructRNA RNA_FModifierPython = {
	{(ContainerRNA *)&RNA_FModifierStepped, (ContainerRNA *)&RNA_FModifierNoise,
	NULL,
	{NULL, NULL}},
	"FModifierPython"	, NULL,NULL
, 0, "Python F-Modifier", "Performs user-defined operation on the modified F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Stepped Interpolation F-Modifier */
FloatPropertyRNA rna_FModifierStepped_frame_end = {
	{(PropertyRNA*)&rna_FModifierStepped_frame_offset, NULL,
	-1, "frame_end", 8195, "End Frame",
	"Frame that modifier\'s influence ends (if applicable)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Stepped, end_frame), 4, NULL},
	FModifierStepped_frame_end_get, FModifierStepped_frame_end_set, NULL, NULL, rna_FModifierStepped_end_frame_range, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierStepped_frame_offset = {
	{(PropertyRNA*)&rna_FModifierStepped_frame_start, (PropertyRNA*)&rna_FModifierStepped_frame_end,
	-1, "frame_offset", 8195, "Offset",
	"Reference number of frames before frames get held. Use to get hold for \'1-3\' vs \'5-7\' holding patterns",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Stepped, offset), 4, NULL},
	FModifierStepped_frame_offset_get, FModifierStepped_frame_offset_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierStepped_frame_start = {
	{(PropertyRNA*)&rna_FModifierStepped_frame_step, (PropertyRNA*)&rna_FModifierStepped_frame_offset,
	-1, "frame_start", 8195, "Start Frame",
	"Frame that modifier\'s influence starts (if applicable)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Stepped, start_frame), 4, NULL},
	FModifierStepped_frame_start_get, FModifierStepped_frame_start_set, NULL, NULL, rna_FModifierStepped_start_frame_range, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FModifierStepped_frame_step = {
	{(PropertyRNA*)&rna_FModifierStepped_use_frame_end, (PropertyRNA*)&rna_FModifierStepped_frame_start,
	-1, "frame_step", 8195, "Step Size",
	"Number of frames to hold each value",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	offsetof(FMod_Stepped, step_size), 4, NULL},
	FModifierStepped_frame_step_get, FModifierStepped_frame_step_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_FModifierStepped_use_frame_end = {
	{(PropertyRNA*)&rna_FModifierStepped_use_frame_start, (PropertyRNA*)&rna_FModifierStepped_frame_step,
	-1, "use_frame_end", 3, "Use End Frame",
	"Restrict modifier to only act before its \'end\' frame",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierStepped_use_frame_end_get, FModifierStepped_use_frame_end_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_FModifierStepped_use_frame_start = {
	{NULL, (PropertyRNA*)&rna_FModifierStepped_use_frame_end,
	-1, "use_frame_start", 3, "Use Start Frame",
	"Restrict modifier to only act after its \'start\' frame",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	FModifierStepped_use_frame_start_get, FModifierStepped_use_frame_start_set, NULL, NULL, 0, NULL
};

StructRNA RNA_FModifierStepped = {
	{(ContainerRNA *)&RNA_FieldSettings, (ContainerRNA *)&RNA_FModifierPython,
	NULL,
	{(PropertyRNA*)&rna_FModifierStepped_frame_end, (PropertyRNA*)&rna_FModifierStepped_use_frame_start}},
	"FModifierStepped"	, NULL,NULL
, 0, "Stepped Interpolation F-Modifier", "Holds each interpolated value from the F-Curve for several frames without changing the timing",
	17,
	NULL, (PropertyRNA*)&rna_FModifier_rna_properties,
	&RNA_FModifier,
	NULL,
	rna_FModifierType_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Keyframe */
PointerPropertyRNA rna_Keyframe_rna_type = {
	{(PropertyRNA*)&rna_Keyframe_co, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Keyframe_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_Keyframe_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_co = {
	{(PropertyRNA*)&rna_Keyframe_handle_left, (PropertyRNA*)&rna_Keyframe_rna_type,
	-1, "co", 3, "Control Point",
	"Coordinates of the control point",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Keyframe_co_get, Keyframe_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_co_default
};

static float rna_Keyframe_handle_left_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_handle_left = {
	{(PropertyRNA*)&rna_Keyframe_handle_left_type, (PropertyRNA*)&rna_Keyframe_co,
	-1, "handle_left", 3, "Handle 1",
	"Coordinates of the first handle",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Keyframe_handle_left_get, Keyframe_handle_left_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_handle_left_default
};

static EnumPropertyItem rna_Keyframe_handle_left_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Keyframe_handle_left_type = {
	{(PropertyRNA*)&rna_Keyframe_select_left_handle, (PropertyRNA*)&rna_Keyframe_handle_left,
	-1, "handle_left_type", 3, "Handle 1 Type",
	"Handle types",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	Keyframe_handle_left_type_get, Keyframe_handle_left_type_set, NULL, rna_Keyframe_handle_left_type_items, 4, 0
};

BooleanPropertyRNA rna_Keyframe_select_left_handle = {
	{(PropertyRNA*)&rna_Keyframe_handle_right, (PropertyRNA*)&rna_Keyframe_handle_left_type,
	-1, "select_left_handle", 8195, "Handle 1 selected",
	"Handle 1 selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468550, NULL, NULL,
	offsetof(BezTriple, f1), 2, NULL},
	Keyframe_select_left_handle_get, Keyframe_select_left_handle_set, NULL, NULL, 0, NULL
};

static float rna_Keyframe_handle_right_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Keyframe_handle_right = {
	{(PropertyRNA*)&rna_Keyframe_handle_right_type, (PropertyRNA*)&rna_Keyframe_select_left_handle,
	-1, "handle_right", 3, "Handle 2",
	"Coordinates of the second handle",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {2, 0, 0}, 2,
	NULL, 239468545, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Keyframe_handle_right_get, Keyframe_handle_right_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Keyframe_handle_right_default
};

static EnumPropertyItem rna_Keyframe_handle_right_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Keyframe_handle_right_type = {
	{(PropertyRNA*)&rna_Keyframe_select_right_handle, (PropertyRNA*)&rna_Keyframe_handle_right,
	-1, "handle_right_type", 3, "Handle 2 Type",
	"Handle types",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	Keyframe_handle_right_type_get, Keyframe_handle_right_type_set, NULL, rna_Keyframe_handle_right_type_items, 4, 0
};

BooleanPropertyRNA rna_Keyframe_select_right_handle = {
	{(PropertyRNA*)&rna_Keyframe_interpolation, (PropertyRNA*)&rna_Keyframe_handle_right_type,
	-1, "select_right_handle", 8195, "Handle 2 selected",
	"Handle 2 selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468550, NULL, NULL,
	offsetof(BezTriple, f3), 2, NULL},
	Keyframe_select_right_handle_get, Keyframe_select_right_handle_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Keyframe_interpolation_items[4] = {
	{0, "CONSTANT", 0, "Constant", ""},
	{1, "LINEAR", 0, "Linear", ""},
	{2, "BEZIER", 0, "Bezier", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Keyframe_interpolation = {
	{(PropertyRNA*)&rna_Keyframe_rna_properties, (PropertyRNA*)&rna_Keyframe_select_right_handle,
	-1, "interpolation", 3, "Interpolation",
	"Interpolation method to use for segment of the curve from this Keyframe until the next Keyframe",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	Keyframe_interpolation_get, Keyframe_interpolation_set, NULL, rna_Keyframe_interpolation_items, 3, 0
};

CollectionPropertyRNA rna_Keyframe_rna_properties = {
	{(PropertyRNA*)&rna_Keyframe_select_control_point, (PropertyRNA*)&rna_Keyframe_interpolation,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Keyframe_rna_properties_begin, Keyframe_rna_properties_next, Keyframe_rna_properties_end, Keyframe_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Keyframe_select_control_point = {
	{(PropertyRNA*)&rna_Keyframe_type, (PropertyRNA*)&rna_Keyframe_rna_properties,
	-1, "select_control_point", 8195, "Select",
	"Control point selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239468550, NULL, NULL,
	offsetof(BezTriple, f2), 2, NULL},
	Keyframe_select_control_point_get, Keyframe_select_control_point_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Keyframe_type_items[5] = {
	{0, "KEYFRAME", 0, "Keyframe", ""},
	{2, "BREAKDOWN", 0, "Breakdown", ""},
	{1, "EXTREME", 0, "Extreme", ""},
	{3, "JITTER", 0, "Jitter", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Keyframe_type = {
	{NULL, (PropertyRNA*)&rna_Keyframe_select_control_point,
	-1, "type", 3, "Type",
	"The type of keyframe",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239534080, NULL, NULL,
	0, -1, NULL},
	Keyframe_type_get, Keyframe_type_set, NULL, rna_Keyframe_type_items, 4, 0
};

StructRNA RNA_Keyframe = {
	{(ContainerRNA *)&RNA_KeyingSet, (ContainerRNA *)&RNA_KeyboardSensor,
	NULL,
	{(PropertyRNA*)&rna_Keyframe_rna_type, (PropertyRNA*)&rna_Keyframe_type}},
	"Keyframe"	, NULL,NULL
, 0, "Keyframe", "Bezier curve point with two handles defining a Keyframe on an F-Curve",
	17,
	NULL, (PropertyRNA*)&rna_Keyframe_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

