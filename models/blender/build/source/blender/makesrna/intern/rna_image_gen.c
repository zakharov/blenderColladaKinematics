
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

#include "rna_image.c"
#include "rna_image_api.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

BooleanPropertyRNA rna_Image_use_animation;
IntPropertyRNA rna_Image_frame_end;
IntPropertyRNA rna_Image_fps;
IntPropertyRNA rna_Image_frame_start;
IntPropertyRNA rna_Image_bindcode;
BooleanPropertyRNA rna_Image_use_clamp_x;
BooleanPropertyRNA rna_Image_use_clamp_y;
IntPropertyRNA rna_Image_depth;
BooleanPropertyRNA rna_Image_is_dirty;
FloatPropertyRNA rna_Image_display_aspect;
EnumPropertyRNA rna_Image_field_order;
BooleanPropertyRNA rna_Image_use_fields;
EnumPropertyRNA rna_Image_file_format;
StringPropertyRNA rna_Image_filepath;
StringPropertyRNA rna_Image_filepath_raw;
IntPropertyRNA rna_Image_generated_height;
EnumPropertyRNA rna_Image_generated_type;
IntPropertyRNA rna_Image_generated_width;
BooleanPropertyRNA rna_Image_has_data;
EnumPropertyRNA rna_Image_mapping;
PointerPropertyRNA rna_Image_packed_file;
BooleanPropertyRNA rna_Image_use_premultiply;
IntPropertyRNA rna_Image_size;
EnumPropertyRNA rna_Image_source;
BooleanPropertyRNA rna_Image_use_tiles;
IntPropertyRNA rna_Image_tiles_x;
IntPropertyRNA rna_Image_tiles_y;
EnumPropertyRNA rna_Image_type;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_Image_save_render_func;
extern StringPropertyRNA rna_Image_save_render_filepath;
extern PointerPropertyRNA rna_Image_save_render_scene;

extern FunctionRNA rna_Image_save_func;
extern FunctionRNA rna_Image_reload_func;
extern FunctionRNA rna_Image_update_func;
extern FunctionRNA rna_Image_gl_load_func;
extern IntPropertyRNA rna_Image_gl_load_filter;
extern IntPropertyRNA rna_Image_gl_load_mag;
extern IntPropertyRNA rna_Image_gl_load_error;

extern FunctionRNA rna_Image_gl_free_func;


PointerPropertyRNA rna_ImageUser_rna_type;
BooleanPropertyRNA rna_ImageUser_use_auto_refresh;
BooleanPropertyRNA rna_ImageUser_use_cyclic;
IntPropertyRNA rna_ImageUser_fields_per_frame;
IntPropertyRNA rna_ImageUser_frame_duration;
IntPropertyRNA rna_ImageUser_multilayer_layer;
IntPropertyRNA rna_ImageUser_frame_offset;
IntPropertyRNA rna_ImageUser_multilayer_pass;
CollectionPropertyRNA rna_ImageUser_rna_properties;
IntPropertyRNA rna_ImageUser_frame_start;

int Image_use_animation_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (((data->tpageflag) & 2) != 0);
}

void Image_use_animation_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	if(value) data->tpageflag |= 2;
	else data->tpageflag &= ~2;
}

int Image_frame_end_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->twend);
}

void Image_frame_end_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->twend= CLAMPIS(value, 0, 128);
}

int Image_fps_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->animspeed);
}

void Image_fps_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->animspeed= CLAMPIS(value, 1, 100);
}

int Image_frame_start_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->twsta);
}

void Image_frame_start_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->twsta= CLAMPIS(value, 0, 128);
}

int Image_bindcode_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->bindcode);
}

int Image_use_clamp_x_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (((data->tpageflag) & 16) != 0);
}

void Image_use_clamp_x_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	if(value) data->tpageflag |= 16;
	else data->tpageflag &= ~16;
}

int Image_use_clamp_y_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (((data->tpageflag) & 32) != 0);
}

void Image_use_clamp_y_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	if(value) data->tpageflag |= 32;
	else data->tpageflag &= ~32;
}

int Image_depth_get(PointerRNA *ptr)
{
	return rna_Image_depth_get(ptr);
}

int Image_is_dirty_get(PointerRNA *ptr)
{
	return rna_Image_dirty_get(ptr);
}

void Image_display_aspect_get(PointerRNA *ptr, float values[2])
{
	Image *data= (Image*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		values[i]= (float)((&data->aspx)[i]);
	}
}

void Image_display_aspect_set(PointerRNA *ptr, const float values[2])
{
	Image *data= (Image*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		(&data->aspx)[i]= CLAMPIS(values[i], 0.1000000015f, 5000.0f);
	}
}

int Image_field_order_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return ((data->flag) & 2);
}

void Image_field_order_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->flag &= ~2;
	data->flag |= value;
}

int Image_use_fields_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Image_use_fields_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int Image_file_format_get(PointerRNA *ptr)
{
	return rna_Image_file_format_get(ptr);
}

void Image_file_format_set(PointerRNA *ptr, int value)
{
	rna_Image_file_format_set(ptr, value);
}

void Image_filepath_get(PointerRNA *ptr, char *value)
{
	Image *data= (Image*)(ptr->data);
	BLI_strncpy(value, data->name, 240);
}

int Image_filepath_length(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return strlen(data->name);
}

void Image_filepath_set(PointerRNA *ptr, const char *value)
{
	Image *data= (Image*)(ptr->data);
	BLI_strncpy(data->name, value, 240);
}

void Image_filepath_raw_get(PointerRNA *ptr, char *value)
{
	Image *data= (Image*)(ptr->data);
	BLI_strncpy(value, data->name, 240);
}

int Image_filepath_raw_length(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return strlen(data->name);
}

void Image_filepath_raw_set(PointerRNA *ptr, const char *value)
{
	Image *data= (Image*)(ptr->data);
	BLI_strncpy(data->name, value, 240);
}

int Image_generated_height_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->gen_y);
}

void Image_generated_height_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->gen_y= CLAMPIS(value, 1, 16384);
}

int Image_generated_type_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->gen_type);
}

void Image_generated_type_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->gen_type= value;
}

int Image_generated_width_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->gen_x);
}

void Image_generated_width_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->gen_x= CLAMPIS(value, 1, 16384);
}

int Image_has_data_get(PointerRNA *ptr)
{
	return rna_Image_has_data_get(ptr);
}

int Image_mapping_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return ((data->flag) & 16);
}

void Image_mapping_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->flag &= ~16;
	data->flag |= value;
}

PointerRNA Image_packed_file_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_PackedFile, data->packedfile);
}

int Image_use_premultiply_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Image_use_premultiply_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

void Image_size_get(PointerRNA *ptr, int values[2])
{
	rna_Image_size_get(ptr, values);
}

int Image_source_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->source);
}

void Image_source_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->source= value;
}

int Image_use_tiles_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (((data->tpageflag) & 1) != 0);
}

void Image_use_tiles_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	if(value) data->tpageflag |= 1;
	else data->tpageflag &= ~1;
}

int Image_tiles_x_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->xrep);
}

void Image_tiles_x_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->xrep= CLAMPIS(value, 1, 16);
}

int Image_tiles_y_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->yrep);
}

void Image_tiles_y_set(PointerRNA *ptr, int value)
{
	Image *data= (Image*)(ptr->data);
	data->yrep= CLAMPIS(value, 1, 16);
}

int Image_type_get(PointerRNA *ptr)
{
	Image *data= (Image*)(ptr->data);
	return (int)(data->type);
}

PointerRNA ImageUser_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ImageUser_use_auto_refresh_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ImageUser_use_auto_refresh_set(PointerRNA *ptr, int value)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int ImageUser_use_cyclic_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (int)(data->cycl);
}

void ImageUser_use_cyclic_set(PointerRNA *ptr, int value)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	data->cycl= value;
}

int ImageUser_fields_per_frame_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (int)(data->fie_ima);
}

void ImageUser_fields_per_frame_set(PointerRNA *ptr, int value)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	data->fie_ima= CLAMPIS(value, 1, 200);
}

int ImageUser_frame_duration_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (int)(data->frames);
}

void ImageUser_frame_duration_set(PointerRNA *ptr, int value)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	data->frames= CLAMPIS(value, 0, 300000);
}

int ImageUser_multilayer_layer_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (int)(data->layer);
}

int ImageUser_frame_offset_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (int)(data->offset);
}

void ImageUser_frame_offset_set(PointerRNA *ptr, int value)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	data->offset= CLAMPIS(value, -300000, 300000);
}

int ImageUser_multilayer_pass_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (int)(data->pass);
}

static PointerRNA ImageUser_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ImageUser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ImageUser_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ImageUser_rna_properties_get(iter);
}

void ImageUser_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ImageUser_rna_properties_get(iter);
}

void ImageUser_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ImageUser_frame_start_get(PointerRNA *ptr)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	return (int)(data->sfra);
}

void ImageUser_frame_start_set(PointerRNA *ptr, int value)
{
	ImageUser *data= (ImageUser*)(ptr->data);
	data->sfra= CLAMPIS(value, -300000, 300000);
}

void Image_save_render_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	const char* filepath;
	struct Scene *scene;
	char *_data;
	
	_self= (struct Image *)_ptr->data;
	_data= (char *)_parms->data;
	filepath= *((const char**)_data);
	_data+= 4;
	scene= *((struct Scene**)_data);
	
	rna_Image_save_render(_self, C, reports, filepath, scene);
}

void Image_save_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self= (struct Image *)_ptr->data;
	
	rna_Image_save(_self, reports);
}

void Image_reload_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self= (struct Image *)_ptr->data;
	
	rna_Image_reload(_self);
}

void Image_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self= (struct Image *)_ptr->data;
	
	rna_Image_update(_self, reports);
}

void Image_gl_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	int filter;
	int mag;
	int error;
	char *_data, *_retdata;
	
	_self= (struct Image *)_ptr->data;
	_data= (char *)_parms->data;
	filter= *((int*)_data);
	_data+= 4;
	mag= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	error= rna_Image_gl_load(_self, reports, filter, mag);
	*((int*)_retdata)= error;
}

void Image_gl_free_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Image *_self;
	_self= (struct Image *)_ptr->data;
	
	rna_Image_gl_free(_self);
}

/* Repeated prototypes to detect errors */

void rna_Image_save_render(struct Image *_self, bContext *C, ReportList *reports, const char* filepath, struct Scene *scene);
void rna_Image_save(struct Image *_self, ReportList *reports);
void rna_Image_reload(struct Image *_self);
void rna_Image_update(struct Image *_self, ReportList *reports);
int rna_Image_gl_load(struct Image *_self, ReportList *reports, int filter, int mag);
void rna_Image_gl_free(struct Image *_self);


/* Image */
BooleanPropertyRNA rna_Image_use_animation = {
	{(PropertyRNA*)&rna_Image_frame_end, NULL,
	-1, "use_animation", 3, "Animated",
	"Use as animated texture in the game engine",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_animated_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_animation_get, Image_use_animation_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Image_frame_end = {
	{(PropertyRNA*)&rna_Image_fps, (PropertyRNA*)&rna_Image_use_animation,
	-1, "frame_end", 8195, "Animation End",
	"End frame of an animated texture",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_animated_update, 171114496, NULL, NULL,
	offsetof(Image, twend), 1, NULL},
	Image_frame_end_get, Image_frame_end_set, NULL, NULL, NULL,
	0, 128, 0, 128, 1, 0, NULL
};

IntPropertyRNA rna_Image_fps = {
	{(PropertyRNA*)&rna_Image_frame_start, (PropertyRNA*)&rna_Image_frame_end,
	-1, "fps", 8195, "Animation Speed",
	"Speed of the animation in frames per second",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, animspeed), 1, NULL},
	Image_fps_get, Image_fps_set, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

IntPropertyRNA rna_Image_frame_start = {
	{(PropertyRNA*)&rna_Image_bindcode, (PropertyRNA*)&rna_Image_fps,
	-1, "frame_start", 8195, "Animation Start",
	"Start frame of an animated texture",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_animated_update, 171114496, NULL, NULL,
	offsetof(Image, twsta), 1, NULL},
	Image_frame_start_get, Image_frame_start_set, NULL, NULL, NULL,
	0, 128, 0, 128, 1, 0, NULL
};

IntPropertyRNA rna_Image_bindcode = {
	{(PropertyRNA*)&rna_Image_use_clamp_x, (PropertyRNA*)&rna_Image_frame_start,
	-1, "bindcode", 8194, "Bindcode",
	"OpenGL bindcode",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, bindcode), 0, NULL},
	Image_bindcode_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_Image_use_clamp_x = {
	{(PropertyRNA*)&rna_Image_use_clamp_y, (PropertyRNA*)&rna_Image_bindcode,
	-1, "use_clamp_x", 3, "Clamp X",
	"Disable texture repeating horizontally",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_clamp_x_get, Image_use_clamp_x_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Image_use_clamp_y = {
	{(PropertyRNA*)&rna_Image_depth, (PropertyRNA*)&rna_Image_use_clamp_x,
	-1, "use_clamp_y", 3, "Clamp Y",
	"Disable texture repeating vertically",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_clamp_y_get, Image_use_clamp_y_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Image_depth = {
	{(PropertyRNA*)&rna_Image_is_dirty, (PropertyRNA*)&rna_Image_use_clamp_y,
	-1, "depth", 2, "Depth",
	"Image bit depth",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_depth_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_Image_is_dirty = {
	{(PropertyRNA*)&rna_Image_display_aspect, (PropertyRNA*)&rna_Image_depth,
	-1, "is_dirty", 2, "Dirty",
	"Image has changed and is not saved",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_is_dirty_get, NULL, NULL, NULL, 0, NULL
};

static float rna_Image_display_aspect_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Image_display_aspect = {
	{(PropertyRNA*)&rna_Image_field_order, (PropertyRNA*)&rna_Image_is_dirty,
	-1, "display_aspect", 8195, "Display Aspect",
	"Display Aspect for this image, does not affect rendering",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, aspx), 4, NULL},
	NULL, NULL, Image_display_aspect_get, Image_display_aspect_set, NULL, 0.1000000015f, 5000.0f, 0.1000000015f, 5000.0f, 10.0f, 3, 0.0f, rna_Image_display_aspect_default
};

static EnumPropertyItem rna_Image_field_order_items[3] = {
	{0, "EVEN", 0, "Upper First", "Upper field first"},
	{2, "ODD", 0, "Lower First", "Lower field first"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_field_order = {
	{(PropertyRNA*)&rna_Image_use_fields, (PropertyRNA*)&rna_Image_display_aspect,
	-1, "field_order", 3, "Field Order",
	"Order of video fields. Select which lines are displayed first",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_field_order_get, Image_field_order_set, NULL, rna_Image_field_order_items, 2, 0
};

BooleanPropertyRNA rna_Image_use_fields = {
	{(PropertyRNA*)&rna_Image_file_format, (PropertyRNA*)&rna_Image_field_order,
	-1, "use_fields", 3, "Fields",
	"Use fields of the image",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_fields_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_fields_get, Image_use_fields_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Image_file_format_items[17] = {
	{0, "", 0, "Image", NULL},
	{20, "BMP", 696, "BMP", ""},
	{1, "IRIS", 696, "Iris", ""},
	{17, "PNG", 696, "PNG", ""},
	{4, "JPEG", 696, "JPEG", ""},
	{30, "JPEG2000", 696, "JPEG 2000", ""},
	{0, "TARGA", 696, "Targa", ""},
	{14, "TARGA_RAW", 696, "Targa Raw", ""},
	{0, "", 0, " ", NULL},
	{26, "CINEON", 696, "Cineon", ""},
	{27, "DPX", 696, "DPX", ""},
	{21, "HDR", 696, "Radiance HDR", ""},
	{0, "", 0, "Movie", NULL},
	{16, "AVI_JPEG", 697, "AVI JPEG", ""},
	{15, "AVI_RAW", 697, "AVI Raw", ""},
	{25, "FRAMESERVER", 698, "Frame Server", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_file_format = {
	{(PropertyRNA*)&rna_Image_filepath, (PropertyRNA*)&rna_Image_use_fields,
	-1, "file_format", 3, "File Format",
	"Format used for re-saving this file",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_file_format_get, Image_file_format_set, NULL, rna_Image_file_format_items, 16, 0
};

StringPropertyRNA rna_Image_filepath = {
	{(PropertyRNA*)&rna_Image_filepath_raw, (PropertyRNA*)&rna_Image_file_format,
	-1, "filepath", 1, "File Name",
	"Image/Movie file name",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {240, 0, 0}, 0,
	rna_Image_reload_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_filepath_get, Image_filepath_length, Image_filepath_set, 240, ""
};

StringPropertyRNA rna_Image_filepath_raw = {
	{(PropertyRNA*)&rna_Image_generated_height, (PropertyRNA*)&rna_Image_filepath,
	-1, "filepath_raw", 1, "File Name",
	"Image/Movie file name (without data refreshing)",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {240, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_filepath_raw_get, Image_filepath_raw_length, Image_filepath_raw_set, 240, ""
};

IntPropertyRNA rna_Image_generated_height = {
	{(PropertyRNA*)&rna_Image_generated_type, (PropertyRNA*)&rna_Image_filepath_raw,
	-1, "generated_height", 8195, "Generated Height",
	"Generated image height",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 171114496, NULL, NULL,
	offsetof(Image, gen_y), 1, NULL},
	Image_generated_height_get, Image_generated_height_set, NULL, NULL, NULL,
	1, 16384, 1, 16384, 1, 0, NULL
};

static EnumPropertyItem rna_Image_generated_type_items[4] = {
	{0, "BLANK", 0, "Blank", "Generate a blank image"},
	{1, "UV_GRID", 0, "UV Grid", "Generated grid to test UV mappings"},
	{2, "COLOR_GRID", 0, "Color Grid", "Generated improved UV grid to test UV mappings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_generated_type = {
	{(PropertyRNA*)&rna_Image_generated_width, (PropertyRNA*)&rna_Image_generated_height,
	-1, "generated_type", 3, "Generated Type",
	"Generated image type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_generated_type_get, Image_generated_type_set, NULL, rna_Image_generated_type_items, 3, 0
};

IntPropertyRNA rna_Image_generated_width = {
	{(PropertyRNA*)&rna_Image_has_data, (PropertyRNA*)&rna_Image_generated_type,
	-1, "generated_width", 8195, "Generated Width",
	"Generated image width",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_generated_update, 171114496, NULL, NULL,
	offsetof(Image, gen_x), 1, NULL},
	Image_generated_width_get, Image_generated_width_set, NULL, NULL, NULL,
	1, 16384, 1, 16384, 1, 0, NULL
};

BooleanPropertyRNA rna_Image_has_data = {
	{(PropertyRNA*)&rna_Image_mapping, (PropertyRNA*)&rna_Image_generated_width,
	-1, "has_data", 2, "Has data",
	"True if this image has data",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_has_data_get, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Image_mapping_items[3] = {
	{0, "UV", 0, "UV Coordinates", "Use UV coordinates for mapping the image"},
	{16, "REFLECTION", 0, "Reflection", "Use reflection mapping for mapping the image"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_mapping = {
	{(PropertyRNA*)&rna_Image_packed_file, (PropertyRNA*)&rna_Image_has_data,
	-1, "mapping", 3, "Mapping",
	"Mapping type to use for this image in the game engine",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_mapping_get, Image_mapping_set, NULL, rna_Image_mapping_items, 2, 0
};

PointerPropertyRNA rna_Image_packed_file = {
	{(PropertyRNA*)&rna_Image_use_premultiply, (PropertyRNA*)&rna_Image_mapping,
	-1, "packed_file", 0, "Packed File",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Image_packed_file_get, NULL, NULL, NULL,&RNA_PackedFile
};

BooleanPropertyRNA rna_Image_use_premultiply = {
	{(PropertyRNA*)&rna_Image_size, (PropertyRNA*)&rna_Image_packed_file,
	-1, "use_premultiply", 3, "Premultiply",
	"Convert RGB from key alpha to premultiplied alpha",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_reload_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_premultiply_get, Image_use_premultiply_set, NULL, NULL, 0, NULL
};

static int rna_Image_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_Image_size = {
	{(PropertyRNA*)&rna_Image_source, (PropertyRNA*)&rna_Image_use_premultiply,
	-1, "size", 2, "Size",
	"Width and height in pixels, zero when image data cant be loaded",
	0,
	PROP_INT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Image_size_get, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, rna_Image_size_default
};

static EnumPropertyItem rna_Image_source_items[6] = {
	{1, "FILE", 0, "File", "Single image file"},
	{2, "SEQUENCE", 0, "Sequence", "Multiple image files, as a sequence"},
	{3, "MOVIE", 0, "Movie", "Movie file"},
	{4, "GENERATED", 0, "Generated", "Generated image"},
	{5, "VIEWER", 0, "Viewer", "Compositing node viewer"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_source = {
	{(PropertyRNA*)&rna_Image_use_tiles, (PropertyRNA*)&rna_Image_size,
	-1, "source", 3, "Source",
	"Where the image comes from",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Image_source_update, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_source_get, Image_source_set, rna_Image_source_itemf, rna_Image_source_items, 5, 1
};

BooleanPropertyRNA rna_Image_use_tiles = {
	{(PropertyRNA*)&rna_Image_tiles_x, (PropertyRNA*)&rna_Image_source,
	-1, "use_tiles", 3, "Tiles",
	"Use of tilemode for faces (default shift-LMB to pick the tile for selected faces)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_use_tiles_get, Image_use_tiles_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Image_tiles_x = {
	{(PropertyRNA*)&rna_Image_tiles_y, (PropertyRNA*)&rna_Image_use_tiles,
	-1, "tiles_x", 8195, "Tiles X",
	"Degree of repetition in the X direction",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, xrep), 1, NULL},
	Image_tiles_x_get, Image_tiles_x_set, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

IntPropertyRNA rna_Image_tiles_y = {
	{(PropertyRNA*)&rna_Image_type, (PropertyRNA*)&rna_Image_tiles_x,
	-1, "tiles_y", 8195, "Tiles Y",
	"Degree of repetition in the Y direction",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	offsetof(Image, yrep), 1, NULL},
	Image_tiles_y_get, Image_tiles_y_set, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

static EnumPropertyItem rna_Image_type_items[6] = {
	{0, "IMAGE", 0, "Image", ""},
	{1, "MULTILAYER", 0, "Multilayer", ""},
	{2, "UV_TEST", 0, "UV Test", ""},
	{4, "RENDER_RESULT", 0, "Render Result", ""},
	{5, "COMPOSITING", 0, "Compositing", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Image_type = {
	{NULL, (PropertyRNA*)&rna_Image_tiles_y,
	-1, "type", 2, "Type",
	"How to generate the image",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 171114496, NULL, NULL,
	0, -1, NULL},
	Image_type_get, NULL, NULL, rna_Image_type_items, 5, 0
};

StringPropertyRNA rna_Image_save_render_filepath = {
	{(PropertyRNA*)&rna_Image_save_render_scene, NULL,
	-1, "filepath", 5, "",
	"Save path.",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_Image_save_render_scene = {
	{NULL, (PropertyRNA*)&rna_Image_save_render_filepath,
	-1, "scene", 0, "",
	"Scene to take image parameters from",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_Image_save_render_func = {
	{(FunctionRNA*)&rna_Image_save_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_Image_save_render_filepath, (PropertyRNA*)&rna_Image_save_render_scene}},
	"save_render", 6, "Save image to a specific path using a scenes render settings",
	Image_save_render_call,
	NULL
};

FunctionRNA rna_Image_save_func = {
	{(FunctionRNA*)&rna_Image_reload_func, (FunctionRNA*)&rna_Image_save_render_func,
	NULL,
	{NULL, NULL}},
	"save", 4, "Save image to its source path",
	Image_save_call,
	NULL
};

FunctionRNA rna_Image_reload_func = {
	{(FunctionRNA*)&rna_Image_update_func, (FunctionRNA*)&rna_Image_save_func,
	NULL,
	{NULL, NULL}},
	"reload", 0, "Reload the image from its source path",
	Image_reload_call,
	NULL
};

FunctionRNA rna_Image_update_func = {
	{(FunctionRNA*)&rna_Image_gl_load_func, (FunctionRNA*)&rna_Image_reload_func,
	NULL,
	{NULL, NULL}},
	"update", 4, "Update the display image from the floating point buffer",
	Image_update_call,
	NULL
};

IntPropertyRNA rna_Image_gl_load_filter = {
	{(PropertyRNA*)&rna_Image_gl_load_mag, NULL,
	-1, "filter", 3, "Filter",
	"The texture minifying function",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 9985, NULL
};

IntPropertyRNA rna_Image_gl_load_mag = {
	{(PropertyRNA*)&rna_Image_gl_load_error, (PropertyRNA*)&rna_Image_gl_load_filter,
	-1, "mag", 3, "Magnification",
	"The texture magnification function",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 9729, NULL
};

IntPropertyRNA rna_Image_gl_load_error = {
	{NULL, (PropertyRNA*)&rna_Image_gl_load_mag,
	-1, "error", 11, "Error",
	"OpenGL error value",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	-2147483647, INT_MAX, -2147483647, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Image_gl_load_func = {
	{(FunctionRNA*)&rna_Image_gl_free_func, (FunctionRNA*)&rna_Image_update_func,
	NULL,
	{(PropertyRNA*)&rna_Image_gl_load_filter, (PropertyRNA*)&rna_Image_gl_load_error}},
	"gl_load", 4, "Load the image into OpenGL graphics memory",
	Image_gl_load_call,
	(PropertyRNA*)&rna_Image_gl_load_error
};

FunctionRNA rna_Image_gl_free_func = {
	{NULL, (FunctionRNA*)&rna_Image_gl_load_func,
	NULL,
	{NULL, NULL}},
	"gl_free", 0, "Free the image from OpenGL graphics memory",
	Image_gl_free_call,
	NULL
};

StructRNA RNA_Image = {
	{(ContainerRNA *)&RNA_ImagePaint, (ContainerRNA *)&RNA_IKParam,
	NULL,
	{(PropertyRNA*)&rna_Image_use_animation, (PropertyRNA*)&rna_Image_type}},
	"Image"	, NULL,NULL
, 3, "Image", "Image datablock referencing an external or packed image",
	183,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA*)&rna_Image_save_render_func, (FunctionRNA*)&rna_Image_gl_free_func}
};

/* Image User */
PointerPropertyRNA rna_ImageUser_rna_type = {
	{(PropertyRNA*)&rna_ImageUser_use_auto_refresh, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageUser_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_ImageUser_use_auto_refresh = {
	{(PropertyRNA*)&rna_ImageUser_use_cyclic, (PropertyRNA*)&rna_ImageUser_rna_type,
	-1, "use_auto_refresh", 3, "Auto Refresh",
	"Always refresh image on frame changes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	0, -1, NULL},
	ImageUser_use_auto_refresh_get, ImageUser_use_auto_refresh_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ImageUser_use_cyclic = {
	{(PropertyRNA*)&rna_ImageUser_fields_per_frame, (PropertyRNA*)&rna_ImageUser_use_auto_refresh,
	-1, "use_cyclic", 8195, "Cyclic",
	"Cycle the images in the movie",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, cycl), 2, NULL},
	ImageUser_use_cyclic_get, ImageUser_use_cyclic_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ImageUser_fields_per_frame = {
	{(PropertyRNA*)&rna_ImageUser_frame_duration, (PropertyRNA*)&rna_ImageUser_use_cyclic,
	-1, "fields_per_frame", 8195, "Fields per Frame",
	"The number of fields per rendered frame (2 fields is 1 image)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, fie_ima), 2, NULL},
	ImageUser_fields_per_frame_get, ImageUser_fields_per_frame_set, NULL, NULL, NULL,
	1, 200, 1, 200, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_frame_duration = {
	{(PropertyRNA*)&rna_ImageUser_multilayer_layer, (PropertyRNA*)&rna_ImageUser_fields_per_frame,
	-1, "frame_duration", 8195, "Frames",
	"Sets the number of images of a movie to use",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, frames), 0, NULL},
	ImageUser_frame_duration_get, ImageUser_frame_duration_set, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_multilayer_layer = {
	{(PropertyRNA*)&rna_ImageUser_frame_offset, (PropertyRNA*)&rna_ImageUser_frame_duration,
	-1, "multilayer_layer", 8194, "Layer",
	"Layer in multilayer image",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImageUser, layer), 1, NULL},
	ImageUser_multilayer_layer_get, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_frame_offset = {
	{(PropertyRNA*)&rna_ImageUser_multilayer_pass, (PropertyRNA*)&rna_ImageUser_multilayer_layer,
	-1, "frame_offset", 8195, "Offset",
	"Offsets the number of the frame to use in the animation",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, offset), 0, NULL},
	ImageUser_frame_offset_get, ImageUser_frame_offset_set, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

IntPropertyRNA rna_ImageUser_multilayer_pass = {
	{(PropertyRNA*)&rna_ImageUser_rna_properties, (PropertyRNA*)&rna_ImageUser_frame_offset,
	-1, "multilayer_pass", 8194, "Pass",
	"Pass in multilayer image",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImageUser, pass), 1, NULL},
	ImageUser_multilayer_pass_get, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

CollectionPropertyRNA rna_ImageUser_rna_properties = {
	{(PropertyRNA*)&rna_ImageUser_frame_start, (PropertyRNA*)&rna_ImageUser_multilayer_pass,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImageUser_rna_properties_begin, ImageUser_rna_properties_next, ImageUser_rna_properties_end, ImageUser_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_ImageUser_frame_start = {
	{NULL, (PropertyRNA*)&rna_ImageUser_rna_properties,
	-1, "frame_start", 8195, "Start Frame",
	"Sets the global starting frame of the movie/sequence, assuming first picture has a #1",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_ImageUser_update, 0, NULL, NULL,
	offsetof(ImageUser, sfra), 0, NULL},
	ImageUser_frame_start_get, ImageUser_frame_start_set, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

StructRNA RNA_ImageUser = {
	{(ContainerRNA *)&RNA_InflowFluidSettings, (ContainerRNA *)&RNA_ImageTexture,
	NULL,
	{(PropertyRNA*)&rna_ImageUser_rna_type, (PropertyRNA*)&rna_ImageUser_frame_start}},
	"ImageUser"	, NULL,NULL
, 0, "Image User", "Parameters defining how an Image datablock is used by another datablock",
	17,
	NULL, (PropertyRNA*)&rna_ImageUser_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ImageUser_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

