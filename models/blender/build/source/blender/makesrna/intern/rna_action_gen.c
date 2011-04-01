
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

#include "rna_action.c"
#include "rna_action_api.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

CollectionPropertyRNA rna_Action_fcurves;
FloatPropertyRNA rna_Action_frame_range;
CollectionPropertyRNA rna_Action_groups;
CollectionPropertyRNA rna_Action_pose_markers;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_ActionFCurves_rna_type;
CollectionPropertyRNA rna_ActionFCurves_rna_properties;

extern FunctionRNA rna_ActionFCurves_new_func;
extern StringPropertyRNA rna_ActionFCurves_new_data_path;
extern IntPropertyRNA rna_ActionFCurves_new_array_index;
extern StringPropertyRNA rna_ActionFCurves_new_action_group;
extern PointerPropertyRNA rna_ActionFCurves_new_fcurve;

extern FunctionRNA rna_ActionFCurves_remove_func;
extern PointerPropertyRNA rna_ActionFCurves_remove_fcurve;



PointerPropertyRNA rna_ActionGroup_rna_type;
StringPropertyRNA rna_ActionGroup_name;
CollectionPropertyRNA rna_ActionGroup_channels;
IntPropertyRNA rna_ActionGroup_custom_color;
BooleanPropertyRNA rna_ActionGroup_show_expanded;
BooleanPropertyRNA rna_ActionGroup_lock;
CollectionPropertyRNA rna_ActionGroup_rna_properties;
BooleanPropertyRNA rna_ActionGroup_select;


PointerPropertyRNA rna_ActionGroups_rna_type;
CollectionPropertyRNA rna_ActionGroups_rna_properties;

extern FunctionRNA rna_ActionGroups_new_func;
extern StringPropertyRNA rna_ActionGroups_new_name;
extern PointerPropertyRNA rna_ActionGroups_new_action_group;

extern FunctionRNA rna_ActionGroups_remove_func;
extern PointerPropertyRNA rna_ActionGroups_remove_action_group;



PointerPropertyRNA rna_ActionPoseMarkers_rna_type;
PointerPropertyRNA rna_ActionPoseMarkers_active;
IntPropertyRNA rna_ActionPoseMarkers_active_index;
CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties;

extern FunctionRNA rna_ActionPoseMarkers_new_func;
extern StringPropertyRNA rna_ActionPoseMarkers_new_name;
extern PointerPropertyRNA rna_ActionPoseMarkers_new_marker;

extern FunctionRNA rna_ActionPoseMarkers_remove_func;
extern PointerPropertyRNA rna_ActionPoseMarkers_remove_marker;



PointerPropertyRNA rna_DopeSheet_rna_type;
BooleanPropertyRNA rna_DopeSheet_show_expanded_summary;
BooleanPropertyRNA rna_DopeSheet_show_armatures;
BooleanPropertyRNA rna_DopeSheet_show_cameras;
BooleanPropertyRNA rna_DopeSheet_show_curves;
BooleanPropertyRNA rna_DopeSheet_show_hidden;
BooleanPropertyRNA rna_DopeSheet_show_lamps;
BooleanPropertyRNA rna_DopeSheet_show_lattices;
BooleanPropertyRNA rna_DopeSheet_show_materials;
BooleanPropertyRNA rna_DopeSheet_show_meshes;
BooleanPropertyRNA rna_DopeSheet_show_metaballs;
BooleanPropertyRNA rna_DopeSheet_show_nodes;
BooleanPropertyRNA rna_DopeSheet_show_particles;
BooleanPropertyRNA rna_DopeSheet_show_scenes;
BooleanPropertyRNA rna_DopeSheet_show_shapekeys;
BooleanPropertyRNA rna_DopeSheet_show_summary;
BooleanPropertyRNA rna_DopeSheet_show_textures;
BooleanPropertyRNA rna_DopeSheet_show_transforms;
BooleanPropertyRNA rna_DopeSheet_show_worlds;
PointerPropertyRNA rna_DopeSheet_filter_group;
BooleanPropertyRNA rna_DopeSheet_show_missing_nla;
BooleanPropertyRNA rna_DopeSheet_show_only_group_objects;
BooleanPropertyRNA rna_DopeSheet_show_only_selected;
CollectionPropertyRNA rna_DopeSheet_rna_properties;
PointerPropertyRNA rna_DopeSheet_source;

static PointerRNA Action_fcurves_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void Action_fcurves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bAction *data= (bAction*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Action_fcurves;

	rna_iterator_listbase_begin(iter, &data->curves, NULL);

	if(iter->valid)
		iter->ptr= Action_fcurves_get(iter);
}

void Action_fcurves_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Action_fcurves_get(iter);
}

void Action_fcurves_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Action_fcurves_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Action_fcurves_begin(&iter, ptr);

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
		if(found) *r_ptr = Action_fcurves_get(&iter);
	}

	Action_fcurves_end(&iter);

	return found;
}

void Action_frame_range_get(PointerRNA *ptr, float values[2])
{
	rna_Action_frame_range_get(ptr, values);
}

static PointerRNA Action_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ActionGroup, rna_iterator_listbase_get(iter));
}

void Action_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bAction *data= (bAction*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Action_groups;

	rna_iterator_listbase_begin(iter, &data->groups, NULL);

	if(iter->valid)
		iter->ptr= Action_groups_get(iter);
}

void Action_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Action_groups_get(iter);
}

void Action_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Action_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Action_groups_begin(&iter, ptr);

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
		if(found) *r_ptr = Action_groups_get(&iter);
	}

	Action_groups_end(&iter);

	return found;
}

static PointerRNA Action_pose_markers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_TimelineMarker, rna_iterator_listbase_get(iter));
}

void Action_pose_markers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bAction *data= (bAction*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Action_pose_markers;

	rna_iterator_listbase_begin(iter, &data->markers, NULL);

	if(iter->valid)
		iter->ptr= Action_pose_markers_get(iter);
}

void Action_pose_markers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Action_pose_markers_get(iter);
}

void Action_pose_markers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Action_pose_markers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Action_pose_markers_begin(&iter, ptr);

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
		if(found) *r_ptr = Action_pose_markers_get(&iter);
	}

	Action_pose_markers_end(&iter);

	return found;
}

PointerRNA ActionFCurves_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ActionFCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionFCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ActionFCurves_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ActionFCurves_rna_properties_get(iter);
}

void ActionFCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ActionFCurves_rna_properties_get(iter);
}

void ActionFCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ActionGroup_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ActionGroup_name_get(PointerRNA *ptr, char *value)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	BLI_strncpy(value, data->name, 64);
}

int ActionGroup_name_length(PointerRNA *ptr)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	return strlen(data->name);
}

void ActionGroup_name_set(PointerRNA *ptr, const char *value)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	BLI_strncpy(data->name, value, 64);
}

static PointerRNA ActionGroup_channels_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_FCurve, rna_iterator_listbase_get(iter));
}

void ActionGroup_channels_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ActionGroup_channels;

	rna_iterator_listbase_begin(iter, &data->channels, NULL);

	if(iter->valid)
		iter->ptr= ActionGroup_channels_get(iter);
}

void ActionGroup_channels_next(CollectionPropertyIterator *iter)
{
	rna_ActionGroup_channels_next(iter);

	if(iter->valid)
		iter->ptr= ActionGroup_channels_get(iter);
}

void ActionGroup_channels_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ActionGroup_custom_color_get(PointerRNA *ptr)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	return (int)(data->customCol);
}

void ActionGroup_custom_color_set(PointerRNA *ptr, int value)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	data->customCol= value;
}

int ActionGroup_show_expanded_get(PointerRNA *ptr)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ActionGroup_show_expanded_set(PointerRNA *ptr, int value)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int ActionGroup_lock_get(PointerRNA *ptr)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ActionGroup_lock_set(PointerRNA *ptr, int value)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

static PointerRNA ActionGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ActionGroup_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ActionGroup_rna_properties_get(iter);
}

void ActionGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ActionGroup_rna_properties_get(iter);
}

void ActionGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ActionGroup_select_get(PointerRNA *ptr)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ActionGroup_select_set(PointerRNA *ptr, int value)
{
	bActionGroup *data= (bActionGroup*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA ActionGroups_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ActionGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ActionGroups_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ActionGroups_rna_properties_get(iter);
}

void ActionGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ActionGroups_rna_properties_get(iter);
}

void ActionGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ActionPoseMarkers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ActionPoseMarkers_active_get(PointerRNA *ptr)
{
	return rna_Action_active_pose_marker_get(ptr);
}

void ActionPoseMarkers_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Action_active_pose_marker_set(ptr, value);
}

int ActionPoseMarkers_active_index_get(PointerRNA *ptr)
{
	return rna_Action_active_pose_marker_index_get(ptr);
}

void ActionPoseMarkers_active_index_set(PointerRNA *ptr, int value)
{
	rna_Action_active_pose_marker_index_set(ptr, value);
}

static PointerRNA ActionPoseMarkers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ActionPoseMarkers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ActionPoseMarkers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ActionPoseMarkers_rna_properties_get(iter);
}

void ActionPoseMarkers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ActionPoseMarkers_rna_properties_get(iter);
}

void ActionPoseMarkers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA DopeSheet_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int DopeSheet_show_expanded_summary_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void DopeSheet_show_expanded_summary_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->flag |= 1;
	else data->flag &= ~1;
}

int DopeSheet_show_armatures_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 262144) != 0);
}

void DopeSheet_show_armatures_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 262144;
	else data->filterflag &= ~262144;
}

int DopeSheet_show_cameras_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 1024) != 0);
}

void DopeSheet_show_cameras_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 1024;
	else data->filterflag &= ~1024;
}

int DopeSheet_show_curves_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 8192) != 0);
}

void DopeSheet_show_curves_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 8192;
	else data->filterflag &= ~8192;
}

int DopeSheet_show_hidden_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return (((data->filterflag) & 67108864) != 0);
}

void DopeSheet_show_hidden_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(value) data->filterflag |= 67108864;
	else data->filterflag &= ~67108864;
}

int DopeSheet_show_lamps_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 4096) != 0);
}

void DopeSheet_show_lamps_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 4096;
	else data->filterflag &= ~4096;
}

int DopeSheet_show_lattices_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 512) != 0);
}

void DopeSheet_show_lattices_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 512;
	else data->filterflag &= ~512;
}

int DopeSheet_show_materials_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 2048) != 0);
}

void DopeSheet_show_materials_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 2048;
	else data->filterflag &= ~2048;
}

int DopeSheet_show_meshes_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 128) != 0);
}

void DopeSheet_show_meshes_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 128;
	else data->filterflag &= ~128;
}

int DopeSheet_show_metaballs_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 131072) != 0);
}

void DopeSheet_show_metaballs_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 131072;
	else data->filterflag &= ~131072;
}

int DopeSheet_show_nodes_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 524288) != 0);
}

void DopeSheet_show_nodes_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 524288;
	else data->filterflag &= ~524288;
}

int DopeSheet_show_particles_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 65536) != 0);
}

void DopeSheet_show_particles_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 65536;
	else data->filterflag &= ~65536;
}

int DopeSheet_show_scenes_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 32768) != 0);
}

void DopeSheet_show_scenes_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 32768;
	else data->filterflag &= ~32768;
}

int DopeSheet_show_shapekeys_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 64) != 0);
}

void DopeSheet_show_shapekeys_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 64;
	else data->filterflag &= ~64;
}

int DopeSheet_show_summary_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return (((data->filterflag) & 16) != 0);
}

void DopeSheet_show_summary_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(value) data->filterflag |= 16;
	else data->filterflag &= ~16;
}

int DopeSheet_show_textures_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 1048576) != 0);
}

void DopeSheet_show_textures_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 1048576;
	else data->filterflag &= ~1048576;
}

int DopeSheet_show_transforms_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 256) != 0);
}

void DopeSheet_show_transforms_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 256;
	else data->filterflag &= ~256;
}

int DopeSheet_show_worlds_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 16384) != 0);
}

void DopeSheet_show_worlds_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 16384;
	else data->filterflag &= ~16384;
}

PointerRNA DopeSheet_filter_group_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->filter_grp);
}

void DopeSheet_filter_group_set(PointerRNA *ptr, PointerRNA value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->filter_grp= value.data;
}

int DopeSheet_show_missing_nla_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return !(((data->filterflag) & 33554432) != 0);
}

void DopeSheet_show_missing_nla_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(!value) data->filterflag |= 33554432;
	else data->filterflag &= ~33554432;
}

int DopeSheet_show_only_group_objects_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return (((data->filterflag) & 32) != 0);
}

void DopeSheet_show_only_group_objects_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(value) data->filterflag |= 32;
	else data->filterflag &= ~32;
}

int DopeSheet_show_only_selected_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return (((data->filterflag) & 1) != 0);
}

void DopeSheet_show_only_selected_set(PointerRNA *ptr, int value)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	if(value) data->filterflag |= 1;
	else data->filterflag &= ~1;
}

static PointerRNA DopeSheet_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DopeSheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_DopeSheet_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= DopeSheet_rna_properties_get(iter);
}

void DopeSheet_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= DopeSheet_rna_properties_get(iter);
}

void DopeSheet_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA DopeSheet_source_get(PointerRNA *ptr)
{
	bDopeSheet *data= (bDopeSheet*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->source);
}


void ActionFCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char* data_path;
	int array_index;
	const char* action_group;
	struct FCurve *fcurve;
	char *_data, *_retdata;
	
	_self= (struct bAction *)_ptr->data;
	_data= (char *)_parms->data;
	data_path= *((const char**)_data);
	_data+= 4;
	array_index= *((int*)_data);
	_data+= 4;
	action_group= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	fcurve= rna_Action_fcurve_new(_self, reports, data_path, array_index, action_group);
	*((struct FCurve**)_retdata)= fcurve;
}

void ActionFCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct FCurve *fcurve;
	char *_data;
	
	_self= (struct bAction *)_ptr->data;
	_data= (char *)_parms->data;
	fcurve= *((struct FCurve**)_data);
	
	rna_Action_fcurve_remove(_self, reports, fcurve);
}

/* Repeated prototypes to detect errors */

struct FCurve *rna_Action_fcurve_new(struct bAction *_self, ReportList *reports, const char* data_path, int array_index, const char* action_group);
void rna_Action_fcurve_remove(struct bAction *_self, ReportList *reports, struct FCurve *fcurve);


void ActionGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char* name;
	struct bActionGroup *action_group;
	char *_data, *_retdata;
	
	_self= (struct bAction *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	action_group= rna_Action_groups_new(_self, name);
	*((struct bActionGroup**)_retdata)= action_group;
}

void ActionGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct bActionGroup *action_group;
	char *_data;
	
	_self= (struct bAction *)_ptr->data;
	_data= (char *)_parms->data;
	action_group= *((struct bActionGroup**)_data);
	
	rna_Action_groups_remove(_self, reports, action_group);
}

/* Repeated prototypes to detect errors */

struct bActionGroup *rna_Action_groups_new(struct bAction *_self, const char* name);
void rna_Action_groups_remove(struct bAction *_self, ReportList *reports, struct bActionGroup *action_group);

void ActionPoseMarkers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	const char* name;
	struct TimeMarker *marker;
	char *_data, *_retdata;
	
	_self= (struct bAction *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	marker= rna_Action_pose_markers_new(_self, reports, name);
	*((struct TimeMarker**)_retdata)= marker;
}

void ActionPoseMarkers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAction *_self;
	struct TimeMarker *marker;
	char *_data;
	
	_self= (struct bAction *)_ptr->data;
	_data= (char *)_parms->data;
	marker= *((struct TimeMarker**)_data);
	
	rna_Action_pose_markers_remove(_self, reports, marker);
}

/* Repeated prototypes to detect errors */

struct TimeMarker *rna_Action_pose_markers_new(struct bAction *_self, ReportList *reports, const char* name);
void rna_Action_pose_markers_remove(struct bAction *_self, ReportList *reports, struct TimeMarker *marker);


/* Action */
CollectionPropertyRNA rna_Action_fcurves = {
	{(PropertyRNA*)&rna_Action_frame_range, NULL,
	-1, "fcurves", 0, "F-Curves",
	"The individual F-Curves that make up the Action",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ActionFCurves},
	Action_fcurves_begin, Action_fcurves_next, Action_fcurves_end, Action_fcurves_get, NULL, Action_fcurves_lookup_int, NULL, &RNA_FCurve
};

static float rna_Action_frame_range_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Action_frame_range = {
	{(PropertyRNA*)&rna_Action_groups, (PropertyRNA*)&rna_Action_fcurves,
	-1, "frame_range", 2, "Frame Range",
	"The final frame range of all fcurves within this action",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Action_frame_range_get, NULL, NULL, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Action_frame_range_default
};

CollectionPropertyRNA rna_Action_groups = {
	{(PropertyRNA*)&rna_Action_pose_markers, (PropertyRNA*)&rna_Action_frame_range,
	-1, "groups", 0, "Groups",
	"Convenient groupings of F-Curves",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ActionGroups},
	Action_groups_begin, Action_groups_next, Action_groups_end, Action_groups_get, NULL, Action_groups_lookup_int, NULL, &RNA_ActionGroup
};

CollectionPropertyRNA rna_Action_pose_markers = {
	{NULL, (PropertyRNA*)&rna_Action_groups,
	-1, "pose_markers", 0, "Pose Markers",
	"Markers specific to this Action, for labeling poses",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ActionPoseMarkers},
	Action_pose_markers_begin, Action_pose_markers_next, Action_pose_markers_end, Action_pose_markers_get, NULL, Action_pose_markers_lookup_int, NULL, &RNA_TimelineMarker
};

StructRNA RNA_Action = {
	{(ContainerRNA *)&RNA_ActionActuator, NULL,
	NULL,
	{(PropertyRNA*)&rna_Action_fcurves, (PropertyRNA*)&rna_Action_pose_markers}},
	"Action"	, NULL,NULL
, 3, "Action", "A collection of F-Curves for animation",
	115,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Action FCurves */
PointerPropertyRNA rna_ActionFCurves_rna_type = {
	{(PropertyRNA*)&rna_ActionFCurves_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionFCurves_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_ActionFCurves_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ActionFCurves_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionFCurves_rna_properties_begin, ActionFCurves_rna_properties_next, ActionFCurves_rna_properties_end, ActionFCurves_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_ActionFCurves_new_data_path = {
	{(PropertyRNA*)&rna_ActionFCurves_new_array_index, NULL,
	-1, "data_path", 5, "Data Path",
	"FCurve data path to use.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_ActionFCurves_new_array_index = {
	{(PropertyRNA*)&rna_ActionFCurves_new_action_group, (PropertyRNA*)&rna_ActionFCurves_new_data_path,
	-1, "array_index", 3, "Index",
	"Array index.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_ActionFCurves_new_action_group = {
	{(PropertyRNA*)&rna_ActionFCurves_new_fcurve, (PropertyRNA*)&rna_ActionFCurves_new_array_index,
	-1, "action_group", 1, "Action Group",
	"Acton group to add this fcurve into.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_ActionFCurves_new_fcurve = {
	{NULL, (PropertyRNA*)&rna_ActionFCurves_new_action_group,
	-1, "fcurve", 8, "",
	"Newly created fcurve",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_new_func = {
	{(FunctionRNA*)&rna_ActionFCurves_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ActionFCurves_new_data_path, (PropertyRNA*)&rna_ActionFCurves_new_fcurve}},
	"new", 4, "Add a keyframe to the curve.",
	ActionFCurves_new_call,
	(PropertyRNA*)&rna_ActionFCurves_new_fcurve
};

PointerPropertyRNA rna_ActionFCurves_remove_fcurve = {
	{NULL, NULL,
	-1, "fcurve", 262148, "",
	"FCurve to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_FCurve
};

FunctionRNA rna_ActionFCurves_remove_func = {
	{NULL, (FunctionRNA*)&rna_ActionFCurves_new_func,
	NULL,
	{(PropertyRNA*)&rna_ActionFCurves_remove_fcurve, (PropertyRNA*)&rna_ActionFCurves_remove_fcurve}},
	"remove", 4, "Remove action group.",
	ActionFCurves_remove_call,
	NULL
};

StructRNA RNA_ActionFCurves = {
	{(ContainerRNA *)&RNA_ActionGroup, (ContainerRNA *)&RNA_ActionConstraint,
	NULL,
	{(PropertyRNA*)&rna_ActionFCurves_rna_type, (PropertyRNA*)&rna_ActionFCurves_rna_properties}},
	"ActionFCurves"	, NULL,NULL
, 0, "Action FCurves", "Collection of action fcurves",
	17,
	NULL, (PropertyRNA*)&rna_ActionFCurves_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ActionFCurves_new_func, (FunctionRNA*)&rna_ActionFCurves_remove_func}
};

/* Action Group */
PointerPropertyRNA rna_ActionGroup_rna_type = {
	{(PropertyRNA*)&rna_ActionGroup_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ActionGroup_name = {
	{(PropertyRNA*)&rna_ActionGroup_channels, (PropertyRNA*)&rna_ActionGroup_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_name_get, ActionGroup_name_length, ActionGroup_name_set, 64, ""
};

CollectionPropertyRNA rna_ActionGroup_channels = {
	{(PropertyRNA*)&rna_ActionGroup_custom_color, (PropertyRNA*)&rna_ActionGroup_name,
	-1, "channels", 0, "Channels",
	"F-Curves in this group",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroup_channels_begin, ActionGroup_channels_next, ActionGroup_channels_end, ActionGroup_channels_get, NULL, NULL, NULL, &RNA_FCurve
};

IntPropertyRNA rna_ActionGroup_custom_color = {
	{(PropertyRNA*)&rna_ActionGroup_show_expanded, (PropertyRNA*)&rna_ActionGroup_channels,
	-1, "custom_color", 8195, "Custom Color",
	"Index of custom color set",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	offsetof(bActionGroup, customCol), 0, NULL},
	ActionGroup_custom_color_get, ActionGroup_custom_color_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_ActionGroup_show_expanded = {
	{(PropertyRNA*)&rna_ActionGroup_lock, (PropertyRNA*)&rna_ActionGroup_custom_color,
	-1, "show_expanded", 3, "Expanded",
	"Action Group is expanded",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_show_expanded_get, ActionGroup_show_expanded_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ActionGroup_lock = {
	{(PropertyRNA*)&rna_ActionGroup_rna_properties, (PropertyRNA*)&rna_ActionGroup_show_expanded,
	-1, "lock", 3, "Lock",
	"Action Group is locked",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	ActionGroup_lock_get, ActionGroup_lock_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_ActionGroup_rna_properties = {
	{(PropertyRNA*)&rna_ActionGroup_select, (PropertyRNA*)&rna_ActionGroup_lock,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroup_rna_properties_begin, ActionGroup_rna_properties_next, ActionGroup_rna_properties_end, ActionGroup_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_ActionGroup_select = {
	{NULL, (PropertyRNA*)&rna_ActionGroup_rna_properties,
	-1, "select", 3, "Select",
	"Action Group is selected",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599622, NULL, NULL,
	0, -1, NULL},
	ActionGroup_select_get, ActionGroup_select_set, NULL, NULL, 0, NULL
};

StructRNA RNA_ActionGroup = {
	{(ContainerRNA *)&RNA_ActionGroups, (ContainerRNA *)&RNA_ActionFCurves,
	NULL,
	{(PropertyRNA*)&rna_ActionGroup_rna_type, (PropertyRNA*)&rna_ActionGroup_select}},
	"ActionGroup"	, NULL,NULL
, 0, "Action Group", "Groups of F-Curves",
	17,
	(PropertyRNA*)&rna_ActionGroup_name, (PropertyRNA*)&rna_ActionGroup_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Action Groups */
PointerPropertyRNA rna_ActionGroups_rna_type = {
	{(PropertyRNA*)&rna_ActionGroups_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_ActionGroups_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ActionGroups_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionGroups_rna_properties_begin, ActionGroups_rna_properties_next, ActionGroups_rna_properties_end, ActionGroups_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_ActionGroups_new_name = {
	{(PropertyRNA*)&rna_ActionGroups_new_action_group, NULL,
	-1, "name", 5, "",
	"New name for the action group.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Group"
};

PointerPropertyRNA rna_ActionGroups_new_action_group = {
	{NULL, (PropertyRNA*)&rna_ActionGroups_new_name,
	-1, "action_group", 8, "",
	"Newly created action group",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_new_func = {
	{(FunctionRNA*)&rna_ActionGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ActionGroups_new_name, (PropertyRNA*)&rna_ActionGroups_new_action_group}},
	"new", 0, "Add a keyframe to the curve.",
	ActionGroups_new_call,
	(PropertyRNA*)&rna_ActionGroups_new_action_group
};

PointerPropertyRNA rna_ActionGroups_remove_action_group = {
	{NULL, NULL,
	-1, "action_group", 262148, "",
	"Action group to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ActionGroup
};

FunctionRNA rna_ActionGroups_remove_func = {
	{NULL, (FunctionRNA*)&rna_ActionGroups_new_func,
	NULL,
	{(PropertyRNA*)&rna_ActionGroups_remove_action_group, (PropertyRNA*)&rna_ActionGroups_remove_action_group}},
	"remove", 4, "Remove action group.",
	ActionGroups_remove_call,
	NULL
};

StructRNA RNA_ActionGroups = {
	{(ContainerRNA *)&RNA_ActionPoseMarkers, (ContainerRNA *)&RNA_ActionGroup,
	NULL,
	{(PropertyRNA*)&rna_ActionGroups_rna_type, (PropertyRNA*)&rna_ActionGroups_rna_properties}},
	"ActionGroups"	, NULL,NULL
, 0, "Action Groups", "Collection of action groups",
	17,
	NULL, (PropertyRNA*)&rna_ActionGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ActionGroups_new_func, (FunctionRNA*)&rna_ActionGroups_remove_func}
};

/* Action Pose Markers */
PointerPropertyRNA rna_ActionPoseMarkers_rna_type = {
	{(PropertyRNA*)&rna_ActionPoseMarkers_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ActionPoseMarkers_active = {
	{(PropertyRNA*)&rna_ActionPoseMarkers_active_index, (PropertyRNA*)&rna_ActionPoseMarkers_rna_type,
	-1, "active", 1, "Active Pose Marker",
	"Active pose marker for this Action",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_active_get, ActionPoseMarkers_active_set, NULL, NULL,&RNA_TimelineMarker
};

IntPropertyRNA rna_ActionPoseMarkers_active_index = {
	{(PropertyRNA*)&rna_ActionPoseMarkers_rna_properties, (PropertyRNA*)&rna_ActionPoseMarkers_active,
	-1, "active_index", 3, "Active Pose Marker Index",
	"Index of active pose marker",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_active_index_get, ActionPoseMarkers_active_index_set, NULL, NULL, rna_Action_active_pose_marker_index_range,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_ActionPoseMarkers_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ActionPoseMarkers_active_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ActionPoseMarkers_rna_properties_begin, ActionPoseMarkers_rna_properties_next, ActionPoseMarkers_rna_properties_end, ActionPoseMarkers_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_ActionPoseMarkers_new_name = {
	{(PropertyRNA*)&rna_ActionPoseMarkers_new_marker, NULL,
	-1, "name", 5, "",
	"New name for the marker (not unique).",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Marker"
};

PointerPropertyRNA rna_ActionPoseMarkers_new_marker = {
	{NULL, (PropertyRNA*)&rna_ActionPoseMarkers_new_name,
	-1, "marker", 8, "",
	"Newly created marker",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_new_func = {
	{(FunctionRNA*)&rna_ActionPoseMarkers_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ActionPoseMarkers_new_name, (PropertyRNA*)&rna_ActionPoseMarkers_new_marker}},
	"new", 4, "Add a pose marker to the action.",
	ActionPoseMarkers_new_call,
	(PropertyRNA*)&rna_ActionPoseMarkers_new_marker
};

PointerPropertyRNA rna_ActionPoseMarkers_remove_marker = {
	{NULL, NULL,
	-1, "marker", 262148, "",
	"Timeline marker to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_TimelineMarker
};

FunctionRNA rna_ActionPoseMarkers_remove_func = {
	{NULL, (FunctionRNA*)&rna_ActionPoseMarkers_new_func,
	NULL,
	{(PropertyRNA*)&rna_ActionPoseMarkers_remove_marker, (PropertyRNA*)&rna_ActionPoseMarkers_remove_marker}},
	"remove", 4, "Remove a timeline marker.",
	ActionPoseMarkers_remove_call,
	NULL
};

StructRNA RNA_ActionPoseMarkers = {
	{(ContainerRNA *)&RNA_Actuator, (ContainerRNA *)&RNA_ActionGroups,
	NULL,
	{(PropertyRNA*)&rna_ActionPoseMarkers_rna_type, (PropertyRNA*)&rna_ActionPoseMarkers_rna_properties}},
	"ActionPoseMarkers"	, NULL,NULL
, 0, "Action Pose Markers", "Collection of timeline markers",
	17,
	NULL, (PropertyRNA*)&rna_ActionPoseMarkers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ActionPoseMarkers_new_func, (FunctionRNA*)&rna_ActionPoseMarkers_remove_func}
};

/* DopeSheet */
PointerPropertyRNA rna_DopeSheet_rna_type = {
	{(PropertyRNA*)&rna_DopeSheet_show_expanded_summary, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DopeSheet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_DopeSheet_show_expanded_summary = {
	{(PropertyRNA*)&rna_DopeSheet_show_armatures, (PropertyRNA*)&rna_DopeSheet_rna_type,
	-1, "show_expanded_summary", 3, "Collapse Summary",
	"Collapse summary when shown, so all other channels get hidden. (DopeSheet Editors Only)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_expanded_summary_get, DopeSheet_show_expanded_summary_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_armatures = {
	{(PropertyRNA*)&rna_DopeSheet_show_cameras, (PropertyRNA*)&rna_DopeSheet_show_expanded_summary,
	-1, "show_armatures", 3, "Display Armature",
	"Include visualization of Armature related Animation data",
	172,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_armatures_get, DopeSheet_show_armatures_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_cameras = {
	{(PropertyRNA*)&rna_DopeSheet_show_curves, (PropertyRNA*)&rna_DopeSheet_show_armatures,
	-1, "show_cameras", 3, "Display Camera",
	"Include visualization of Camera related Animation data",
	168,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_cameras_get, DopeSheet_show_cameras_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_curves = {
	{(PropertyRNA*)&rna_DopeSheet_show_hidden, (PropertyRNA*)&rna_DopeSheet_show_cameras,
	-1, "show_curves", 3, "Display Curve",
	"Include visualization of Curve related Animation data",
	161,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_curves_get, DopeSheet_show_curves_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_hidden = {
	{(PropertyRNA*)&rna_DopeSheet_show_lamps, (PropertyRNA*)&rna_DopeSheet_show_curves,
	-1, "show_hidden", 3, "Display Hidden",
	"Include channels from objects/bone that aren\'t visible",
	53,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_hidden_get, DopeSheet_show_hidden_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_lamps = {
	{(PropertyRNA*)&rna_DopeSheet_show_lattices, (PropertyRNA*)&rna_DopeSheet_show_hidden,
	-1, "show_lamps", 3, "Display Lamp",
	"Include visualization of Lamp related Animation data",
	164,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_lamps_get, DopeSheet_show_lamps_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_lattices = {
	{(PropertyRNA*)&rna_DopeSheet_show_materials, (PropertyRNA*)&rna_DopeSheet_show_lamps,
	-1, "show_lattices", 3, "Display Lattices",
	"Include visualization of Lattice related Animation data",
	163,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_lattices_get, DopeSheet_show_lattices_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_materials = {
	{(PropertyRNA*)&rna_DopeSheet_show_meshes, (PropertyRNA*)&rna_DopeSheet_show_lattices,
	-1, "show_materials", 3, "Display Material",
	"Include visualization of Material related Animation data",
	165,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_materials_get, DopeSheet_show_materials_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_meshes = {
	{(PropertyRNA*)&rna_DopeSheet_show_metaballs, (PropertyRNA*)&rna_DopeSheet_show_materials,
	-1, "show_meshes", 3, "Display Meshes",
	"Include visualization of Mesh related Animation data",
	160,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_meshes_get, DopeSheet_show_meshes_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_metaballs = {
	{(PropertyRNA*)&rna_DopeSheet_show_nodes, (PropertyRNA*)&rna_DopeSheet_show_meshes,
	-1, "show_metaballs", 3, "Display Metaball",
	"Include visualization of Metaball related Animation data",
	162,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_metaballs_get, DopeSheet_show_metaballs_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_nodes = {
	{(PropertyRNA*)&rna_DopeSheet_show_particles, (PropertyRNA*)&rna_DopeSheet_show_metaballs,
	-1, "show_nodes", 3, "Display Node",
	"Include visualization of Node related Animation data",
	119,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_nodes_get, DopeSheet_show_nodes_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_particles = {
	{(PropertyRNA*)&rna_DopeSheet_show_scenes, (PropertyRNA*)&rna_DopeSheet_show_nodes,
	-1, "show_particles", 3, "Display Particle",
	"Include visualization of Particle related Animation data",
	169,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_particles_get, DopeSheet_show_particles_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_scenes = {
	{(PropertyRNA*)&rna_DopeSheet_show_shapekeys, (PropertyRNA*)&rna_DopeSheet_show_particles,
	-1, "show_scenes", 3, "Display Scene",
	"Include visualization of Scene related Animation data",
	156,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_scenes_get, DopeSheet_show_scenes_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_shapekeys = {
	{(PropertyRNA*)&rna_DopeSheet_show_summary, (PropertyRNA*)&rna_DopeSheet_show_scenes,
	-1, "show_shapekeys", 3, "Display Shapekeys",
	"Include visualization of ShapeKey related Animation data",
	176,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_shapekeys_get, DopeSheet_show_shapekeys_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_summary = {
	{(PropertyRNA*)&rna_DopeSheet_show_textures, (PropertyRNA*)&rna_DopeSheet_show_shapekeys,
	-1, "show_summary", 3, "Display Summary",
	"Display an additional \'summary\' line. (DopeSheet Editors only)",
	29,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_summary_get, DopeSheet_show_summary_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_textures = {
	{(PropertyRNA*)&rna_DopeSheet_show_transforms, (PropertyRNA*)&rna_DopeSheet_show_summary,
	-1, "show_textures", 3, "Display Texture",
	"Include visualization of Texture related Animation data",
	166,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_textures_get, DopeSheet_show_textures_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_transforms = {
	{(PropertyRNA*)&rna_DopeSheet_show_worlds, (PropertyRNA*)&rna_DopeSheet_show_textures,
	-1, "show_transforms", 3, "Display Transforms",
	"Include visualization of Object-level Animation data (mostly Transforms)",
	575,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_transforms_get, DopeSheet_show_transforms_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_worlds = {
	{(PropertyRNA*)&rna_DopeSheet_filter_group, (PropertyRNA*)&rna_DopeSheet_show_transforms,
	-1, "show_worlds", 3, "Display World",
	"Include visualization of World related Animation data",
	158,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_worlds_get, DopeSheet_show_worlds_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_DopeSheet_filter_group = {
	{(PropertyRNA*)&rna_DopeSheet_show_missing_nla, (PropertyRNA*)&rna_DopeSheet_show_worlds,
	-1, "filter_group", 1, "Filtering Group",
	"Group that included Object should be a member of",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_filter_group_get, DopeSheet_filter_group_set, NULL, NULL,&RNA_Group
};

BooleanPropertyRNA rna_DopeSheet_show_missing_nla = {
	{(PropertyRNA*)&rna_DopeSheet_show_only_group_objects, (PropertyRNA*)&rna_DopeSheet_filter_group,
	-1, "show_missing_nla", 3, "Include Missing NLA",
	"Include Animation Data blocks with no NLA data. (NLA Editor only)",
	115,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_missing_nla_get, DopeSheet_show_missing_nla_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_only_group_objects = {
	{(PropertyRNA*)&rna_DopeSheet_show_only_selected, (PropertyRNA*)&rna_DopeSheet_show_missing_nla,
	-1, "show_only_group_objects", 3, "Only Objects in Group",
	"Only include channels from Objects in the specified Group",
	171,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_only_group_objects_get, DopeSheet_show_only_group_objects_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_DopeSheet_show_only_selected = {
	{(PropertyRNA*)&rna_DopeSheet_rna_properties, (PropertyRNA*)&rna_DopeSheet_show_only_group_objects,
	-1, "show_only_selected", 3, "Only Selected",
	"Only include channels relating to selected objects and data",
	255,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 239599617, NULL, NULL,
	0, -1, NULL},
	DopeSheet_show_only_selected_get, DopeSheet_show_only_selected_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_DopeSheet_rna_properties = {
	{(PropertyRNA*)&rna_DopeSheet_source, (PropertyRNA*)&rna_DopeSheet_show_only_selected,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DopeSheet_rna_properties_begin, DopeSheet_rna_properties_next, DopeSheet_rna_properties_end, DopeSheet_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_DopeSheet_source = {
	{NULL, (PropertyRNA*)&rna_DopeSheet_rna_properties,
	-1, "source", 64, "Source",
	"ID-Block representing source data, currently ID_SCE (for Dopesheet), and ID_SC (for Grease Pencil)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DopeSheet_source_get, NULL, NULL, NULL,&RNA_ID
};

StructRNA RNA_DopeSheet = {
	{(ContainerRNA *)&RNA_Driver, (ContainerRNA *)&RNA_DomainFluidSettings,
	NULL,
	{(PropertyRNA*)&rna_DopeSheet_rna_type, (PropertyRNA*)&rna_DopeSheet_source}},
	"DopeSheet"	, NULL,NULL
, 0, "DopeSheet", "Settings for filtering the channels shown in Animation Editors",
	17,
	NULL, (PropertyRNA*)&rna_DopeSheet_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

