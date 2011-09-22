
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

#include "rna_brush.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

BooleanPropertyRNA rna_Brush_use_accumulate;
BooleanPropertyRNA rna_Brush_use_adaptive_space;
FloatPropertyRNA rna_Brush_cursor_color_add;
BooleanPropertyRNA rna_Brush_use_airbrush;
BooleanPropertyRNA rna_Brush_use_alpha;
BooleanPropertyRNA rna_Brush_use_anchor;
FloatPropertyRNA rna_Brush_auto_smooth_factor;
EnumPropertyRNA rna_Brush_blend;
StringPropertyRNA rna_Brush_icon_filepath;
FloatPropertyRNA rna_Brush_clone_alpha;
PointerPropertyRNA rna_Brush_clone_image;
FloatPropertyRNA rna_Brush_clone_offset;
FloatPropertyRNA rna_Brush_color;
FloatPropertyRNA rna_Brush_crease_pinch_factor;
PointerPropertyRNA rna_Brush_curve;
BooleanPropertyRNA rna_Brush_use_custom_icon;
EnumPropertyRNA rna_Brush_direction;
BooleanPropertyRNA rna_Brush_use_edge_to_edge;
EnumPropertyRNA rna_Brush_imagepaint_tool;
BooleanPropertyRNA rna_Brush_use_inverse_smooth_pressure;
FloatPropertyRNA rna_Brush_jitter;
BooleanPropertyRNA rna_Brush_use_pressure_jitter;
FloatPropertyRNA rna_Brush_normal_weight;
BooleanPropertyRNA rna_Brush_use_original_normal;
BooleanPropertyRNA rna_Brush_use_persistent;
FloatPropertyRNA rna_Brush_plane_offset;
BooleanPropertyRNA rna_Brush_use_offset_pressure;
FloatPropertyRNA rna_Brush_plane_trim;
BooleanPropertyRNA rna_Brush_use_rake;
BooleanPropertyRNA rna_Brush_use_random_rotation;
FloatPropertyRNA rna_Brush_rate;
BooleanPropertyRNA rna_Brush_use_restore_mesh;
EnumPropertyRNA rna_Brush_sculpt_plane;
EnumPropertyRNA rna_Brush_sculpt_tool;
IntPropertyRNA rna_Brush_size;
BooleanPropertyRNA rna_Brush_use_pressure_size;
BooleanPropertyRNA rna_Brush_use_smooth_stroke;
FloatPropertyRNA rna_Brush_smooth_stroke_factor;
IntPropertyRNA rna_Brush_smooth_stroke_radius;
BooleanPropertyRNA rna_Brush_use_space;
IntPropertyRNA rna_Brush_spacing;
BooleanPropertyRNA rna_Brush_use_pressure_spacing;
FloatPropertyRNA rna_Brush_strength;
BooleanPropertyRNA rna_Brush_use_pressure_strength;
EnumPropertyRNA rna_Brush_stroke_method;
FloatPropertyRNA rna_Brush_cursor_color_subtract;
PointerPropertyRNA rna_Brush_texture;
EnumPropertyRNA rna_Brush_texture_angle_source_random;
EnumPropertyRNA rna_Brush_texture_angle_source_no_random;
IntPropertyRNA rna_Brush_texture_overlay_alpha;
FloatPropertyRNA rna_Brush_texture_sample_bias;
PointerPropertyRNA rna_Brush_texture_slot;
FloatPropertyRNA rna_Brush_unprojected_radius;
BooleanPropertyRNA rna_Brush_use_space_atten;
BooleanPropertyRNA rna_Brush_use_locked_size;
BooleanPropertyRNA rna_Brush_use_frontface;
BooleanPropertyRNA rna_Brush_use_plane_trim;
BooleanPropertyRNA rna_Brush_use_paint_sculpt;
BooleanPropertyRNA rna_Brush_use_paint_texture;
BooleanPropertyRNA rna_Brush_use_texture_overlay;
BooleanPropertyRNA rna_Brush_use_paint_vertex;
BooleanPropertyRNA rna_Brush_use_paint_weight;
EnumPropertyRNA rna_Brush_vertexpaint_tool;
BooleanPropertyRNA rna_Brush_use_wrap;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



extern PointerPropertyRNA rna_TextureSlot_rna_type;
extern StringPropertyRNA rna_TextureSlot_name;
extern EnumPropertyRNA rna_TextureSlot_blend_type;
extern FloatPropertyRNA rna_TextureSlot_color;
extern FloatPropertyRNA rna_TextureSlot_default_value;
extern BooleanPropertyRNA rna_TextureSlot_invert;
extern FloatPropertyRNA rna_TextureSlot_offset;
extern EnumPropertyRNA rna_TextureSlot_output_node;
extern CollectionPropertyRNA rna_TextureSlot_rna_properties;
extern BooleanPropertyRNA rna_TextureSlot_use_rgb_to_intensity;
extern FloatPropertyRNA rna_TextureSlot_scale;
extern BooleanPropertyRNA rna_TextureSlot_use_stencil;
extern PointerPropertyRNA rna_TextureSlot_texture;

FloatPropertyRNA rna_BrushTextureSlot_angle;
EnumPropertyRNA rna_BrushTextureSlot_map_mode;


extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;
extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;

BooleanPropertyRNA rna_OperatorStrokeElement_pen_flip;
BooleanPropertyRNA rna_OperatorStrokeElement_is_start;
FloatPropertyRNA rna_OperatorStrokeElement_location;
FloatPropertyRNA rna_OperatorStrokeElement_mouse;
FloatPropertyRNA rna_OperatorStrokeElement_pressure;
FloatPropertyRNA rna_OperatorStrokeElement_time;

int Brush_use_accumulate_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void Brush_use_accumulate_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int Brush_use_adaptive_space_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void Brush_use_adaptive_space_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 524288;
	else data->flag &= ~524288;
}

void Brush_cursor_color_add_get(PointerRNA *ptr, float values[3])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->add_col)[i]);
	}
}

void Brush_cursor_color_add_set(PointerRNA *ptr, const float values[3])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->add_col)[i]= values[i];
	}
}

int Brush_use_airbrush_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Brush_use_airbrush_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int Brush_use_alpha_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return !(((data->flag) & 16384) != 0);
}

void Brush_use_alpha_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(!value) data->flag |= 16384;
	else data->flag &= ~16384;
}

int Brush_use_anchor_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void Brush_use_anchor_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 256;
	else data->flag &= ~256;
}

float Brush_auto_smooth_factor_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->autosmooth_factor);
}

void Brush_auto_smooth_factor_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->autosmooth_factor= CLAMPIS(value, 0.0f, 1.0f);
}

int Brush_blend_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->blend);
}

void Brush_blend_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->blend= value;
}

void Brush_icon_filepath_get(PointerRNA *ptr, char *value)
{
	Brush *data= (Brush*)(ptr->data);
	BLI_strncpy(value, data->icon_filepath, 240);
}

int Brush_icon_filepath_length(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return strlen(data->icon_filepath);
}

void Brush_icon_filepath_set(PointerRNA *ptr, const char *value)
{
	Brush *data= (Brush*)(ptr->data);
	BLI_strncpy(data->icon_filepath, value, 240);
}

float Brush_clone_alpha_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->clone.alpha);
}

void Brush_clone_alpha_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->clone.alpha= CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA Brush_clone_image_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->clone.image);
}

void Brush_clone_image_set(PointerRNA *ptr, PointerRNA value)
{
	Brush *data= (Brush*)(ptr->data);

	if(data->clone.image)
		id_us_min((ID*)data->clone.image);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->clone.image= value.data;
}

void Brush_clone_offset_get(PointerRNA *ptr, float values[2])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		values[i]= (float)(((float*)data->clone.offset)[i]);
	}
}

void Brush_clone_offset_set(PointerRNA *ptr, const float values[2])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		((float*)data->clone.offset)[i]= values[i];
	}
}

void Brush_color_get(PointerRNA *ptr, float values[3])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->rgb)[i]);
	}
}

void Brush_color_set(PointerRNA *ptr, const float values[3])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->rgb)[i]= CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

float Brush_crease_pinch_factor_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->crease_pinch_factor);
}

void Brush_crease_pinch_factor_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->crease_pinch_factor= CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA Brush_curve_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_CurveMapping, data->curve);
}

int Brush_use_custom_icon_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 268435456) != 0);
}

void Brush_use_custom_icon_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 268435456;
	else data->flag &= ~268435456;
}

int Brush_direction_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return ((data->flag) & 512);
}

void Brush_direction_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->flag &= ~512;
	data->flag |= value;
}

int Brush_use_edge_to_edge_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 4194304) != 0);
}

void Brush_use_edge_to_edge_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

int Brush_imagepaint_tool_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->imagepaint_tool);
}

void Brush_imagepaint_tool_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->imagepaint_tool= value;
}

int Brush_use_inverse_smooth_pressure_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 16777216) != 0);
}

void Brush_use_inverse_smooth_pressure_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 16777216;
	else data->flag &= ~16777216;
}

float Brush_jitter_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->jitter);
}

void Brush_jitter_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->jitter= CLAMPIS(value, 0.0f, 1.0f);
}

int Brush_use_pressure_jitter_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void Brush_use_pressure_jitter_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

float Brush_normal_weight_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->normal_weight);
}

void Brush_normal_weight_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->normal_weight= CLAMPIS(value, 0.0f, 1.0f);
}

int Brush_use_original_normal_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void Brush_use_original_normal_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int Brush_use_persistent_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void Brush_use_persistent_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 4096;
	else data->flag &= ~4096;
}

float Brush_plane_offset_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->plane_offset);
}

void Brush_plane_offset_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->plane_offset= CLAMPIS(value, -2.0f, 2.0f);
}

int Brush_use_offset_pressure_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void Brush_use_offset_pressure_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 65536;
	else data->flag &= ~65536;
}

float Brush_plane_trim_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->plane_trim);
}

void Brush_plane_trim_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->plane_trim= CLAMPIS(value, 0.0f, 1.0f);
}

int Brush_use_rake_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void Brush_use_rake_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

int Brush_use_random_rotation_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 33554432) != 0);
}

void Brush_use_random_rotation_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 33554432;
	else data->flag &= ~33554432;
}

float Brush_rate_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->rate);
}

void Brush_rate_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->rate= CLAMPIS(value, 0.0001000000f, 10000.0f);
}

int Brush_use_restore_mesh_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 8388608) != 0);
}

void Brush_use_restore_mesh_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 8388608;
	else data->flag &= ~8388608;
}

int Brush_sculpt_plane_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->sculpt_plane);
}

void Brush_sculpt_plane_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->sculpt_plane= value;
}

int Brush_sculpt_tool_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->sculpt_tool);
}

void Brush_sculpt_tool_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->sculpt_tool= value;
}

int Brush_size_get(PointerRNA *ptr)
{
	return rna_Brush_get_size(ptr);
}

void Brush_size_set(PointerRNA *ptr, int value)
{
	rna_Brush_set_size(ptr, value);
}

int Brush_use_pressure_size_get(PointerRNA *ptr)
{
	return rna_Brush_get_use_size_pressure(ptr);
}

void Brush_use_pressure_size_set(PointerRNA *ptr, int value)
{
	rna_Brush_set_use_size_pressure(ptr, value);
}

int Brush_use_smooth_stroke_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void Brush_use_smooth_stroke_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 2048;
	else data->flag &= ~2048;
}

float Brush_smooth_stroke_factor_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->smooth_stroke_factor);
}

void Brush_smooth_stroke_factor_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->smooth_stroke_factor= CLAMPIS(value, 0.5000000000f, 0.9900000095f);
}

int Brush_smooth_stroke_radius_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->smooth_stroke_radius);
}

void Brush_smooth_stroke_radius_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->smooth_stroke_radius= CLAMPIS(value, 10, 200);
}

int Brush_use_space_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void Brush_use_space_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int Brush_spacing_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->spacing);
}

void Brush_spacing_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->spacing= CLAMPIS(value, 1, 1000);
}

int Brush_use_pressure_spacing_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Brush_use_pressure_spacing_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

float Brush_strength_get(PointerRNA *ptr)
{
	return rna_Brush_get_alpha(ptr);
}

void Brush_strength_set(PointerRNA *ptr, float value)
{
	rna_Brush_set_alpha(ptr, value);
}

int Brush_use_pressure_strength_get(PointerRNA *ptr)
{
	return rna_Brush_get_use_alpha_pressure(ptr);
}

void Brush_use_pressure_strength_set(PointerRNA *ptr, int value)
{
	rna_Brush_set_use_alpha_pressure(ptr, value);
}

int Brush_stroke_method_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return ((data->flag) & 8389889);
}

void Brush_stroke_method_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->flag &= ~8389889;
	data->flag |= value;
}

void Brush_cursor_color_subtract_get(PointerRNA *ptr, float values[3])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->sub_col)[i]);
	}
}

void Brush_cursor_color_subtract_set(PointerRNA *ptr, const float values[3])
{
	Brush *data= (Brush*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->sub_col)[i]= values[i];
	}
}

PointerRNA Brush_texture_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Texture, data->mtex.tex);
}

void Brush_texture_set(PointerRNA *ptr, PointerRNA value)
{
	Brush *data= (Brush*)(ptr->data);

	if(data->mtex.tex)
		id_us_min((ID*)data->mtex.tex);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->mtex.tex= value.data;
}

int Brush_texture_angle_source_random_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return ((data->flag) & 33554560);
}

void Brush_texture_angle_source_random_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->flag &= ~33554560;
	data->flag |= value;
}

int Brush_texture_angle_source_no_random_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return ((data->flag) & 128);
}

void Brush_texture_angle_source_no_random_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->flag &= ~128;
	data->flag |= value;
}

int Brush_texture_overlay_alpha_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->texture_overlay_alpha);
}

void Brush_texture_overlay_alpha_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->texture_overlay_alpha= CLAMPIS(value, 1, 100);
}

float Brush_texture_sample_bias_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (float)(data->texture_sample_bias);
}

void Brush_texture_sample_bias_set(PointerRNA *ptr, float value)
{
	Brush *data= (Brush*)(ptr->data);
	data->texture_sample_bias= CLAMPIS(value, -1.0f, 1.0f);
}

PointerRNA Brush_texture_slot_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_BrushTextureSlot, &data->mtex);
}

float Brush_unprojected_radius_get(PointerRNA *ptr)
{
	return rna_Brush_get_unprojected_radius(ptr);
}

void Brush_unprojected_radius_set(PointerRNA *ptr, float value)
{
	rna_Brush_set_unprojected_radius(ptr, value);
}

int Brush_use_space_atten_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 262144) != 0);
}

void Brush_use_space_atten_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 262144;
	else data->flag &= ~262144;
}

int Brush_use_locked_size_get(PointerRNA *ptr)
{
	return rna_Brush_get_use_locked_size(ptr);
}

void Brush_use_locked_size_set(PointerRNA *ptr, int value)
{
	rna_Brush_set_use_locked_size(ptr, value);
}

int Brush_use_frontface_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 134217728) != 0);
}

void Brush_use_frontface_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 134217728;
	else data->flag &= ~134217728;
}

int Brush_use_plane_trim_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 67108864) != 0);
}

void Brush_use_plane_trim_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 67108864;
	else data->flag &= ~67108864;
}

int Brush_use_paint_sculpt_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->ob_mode) & 2) != 0);
}

void Brush_use_paint_sculpt_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->ob_mode |= 2;
	else data->ob_mode &= ~2;
}

int Brush_use_paint_texture_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->ob_mode) & 16) != 0);
}

void Brush_use_paint_texture_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->ob_mode |= 16;
	else data->ob_mode &= ~16;
}

int Brush_use_texture_overlay_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void Brush_use_texture_overlay_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int Brush_use_paint_vertex_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->ob_mode) & 4) != 0);
}

void Brush_use_paint_vertex_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->ob_mode |= 4;
	else data->ob_mode &= ~4;
}

int Brush_use_paint_weight_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->ob_mode) & 8) != 0);
}

void Brush_use_paint_weight_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->ob_mode |= 8;
	else data->ob_mode &= ~8;
}

int Brush_vertexpaint_tool_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (int)(data->vertexpaint_tool);
}

void Brush_vertexpaint_tool_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	data->vertexpaint_tool= value;
}

int Brush_use_wrap_get(PointerRNA *ptr)
{
	Brush *data= (Brush*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void Brush_use_wrap_set(PointerRNA *ptr, int value)
{
	Brush *data= (Brush*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

float BrushTextureSlot_angle_get(PointerRNA *ptr)
{
	MTex *data= (MTex*)(ptr->data);
	return (float)(data->rot);
}

void BrushTextureSlot_angle_set(PointerRNA *ptr, float value)
{
	MTex *data= (MTex*)(ptr->data);
	data->rot= CLAMPIS(value, 0.0f, 6.2831854820f);
}

int BrushTextureSlot_map_mode_get(PointerRNA *ptr)
{
	MTex *data= (MTex*)(ptr->data);
	return (int)(data->brush_map_mode);
}

void BrushTextureSlot_map_mode_set(PointerRNA *ptr, int value)
{
	MTex *data= (MTex*)(ptr->data);
	data->brush_map_mode= value;
}




/* Brush */
BooleanPropertyRNA rna_Brush_use_accumulate = {
	{(PropertyRNA*)&rna_Brush_use_adaptive_space, NULL,
	-1, "use_accumulate", 3, "Accumulate",
	"Accumulate stroke dabs on top of each other",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_accumulate_get, Brush_use_accumulate_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_adaptive_space = {
	{(PropertyRNA*)&rna_Brush_cursor_color_add, (PropertyRNA*)&rna_Brush_use_accumulate,
	-1, "use_adaptive_space", 3, "Adaptive Spacing",
	"Space daubs according to surface orientation instead of screen space",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_adaptive_space_get, Brush_use_adaptive_space_set, NULL, NULL, 0, NULL
};

static float rna_Brush_cursor_color_add_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_cursor_color_add = {
	{(PropertyRNA*)&rna_Brush_use_airbrush, (PropertyRNA*)&rna_Brush_use_adaptive_space,
	-1, "cursor_color_add", 8195, "Add Color",
	"Color of cursor when adding",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, add_col), 4, NULL},
	NULL, NULL, Brush_cursor_color_add_get, Brush_cursor_color_add_set, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_add_default
};

BooleanPropertyRNA rna_Brush_use_airbrush = {
	{(PropertyRNA*)&rna_Brush_use_alpha, (PropertyRNA*)&rna_Brush_cursor_color_add,
	-1, "use_airbrush", 3, "Airbrush",
	"Keep applying paint effect while holding mouse (spray)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_airbrush_get, Brush_use_airbrush_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_alpha = {
	{(PropertyRNA*)&rna_Brush_use_anchor, (PropertyRNA*)&rna_Brush_use_airbrush,
	-1, "use_alpha", 3, "Alpha",
	"When this is disabled, lock alpha while painting",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_alpha_get, Brush_use_alpha_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_anchor = {
	{(PropertyRNA*)&rna_Brush_auto_smooth_factor, (PropertyRNA*)&rna_Brush_use_alpha,
	-1, "use_anchor", 3, "Anchored",
	"Keep the brush anchored to the initial location",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_anchor_get, Brush_use_anchor_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_auto_smooth_factor = {
	{(PropertyRNA*)&rna_Brush_blend, (PropertyRNA*)&rna_Brush_use_anchor,
	-1, "auto_smooth_factor", 8195, "Autosmooth",
	"Amount of smoothing to automatically apply to each stroke",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, autosmooth_factor), 4, NULL},
	Brush_auto_smooth_factor_get, Brush_auto_smooth_factor_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 0.0010000000f, 0, 0.0f, NULL
};

static EnumPropertyItem rna_Brush_blend_items[9] = {
	{0, "MIX", 0, "Mix", "Use mix blending mode while painting"},
	{1, "ADD", 0, "Add", "Use add blending mode while painting"},
	{2, "SUB", 0, "Subtract", "Use subtract blending mode while painting"},
	{3, "MUL", 0, "Multiply", "Use multiply blending mode while painting"},
	{4, "LIGHTEN", 0, "Lighten", "Use lighten blending mode while painting"},
	{5, "DARKEN", 0, "Darken", "Use darken blending mode while painting"},
	{6, "ERASE_ALPHA", 0, "Erase Alpha", "Erase alpha while painting"},
	{7, "ADD_ALPHA", 0, "Add Alpha", "Add alpha while painting"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_blend = {
	{(PropertyRNA*)&rna_Brush_icon_filepath, (PropertyRNA*)&rna_Brush_auto_smooth_factor,
	-1, "blend", 3, "Blending mode",
	"Brush blending mode",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_blend_get, Brush_blend_set, NULL, rna_Brush_blend_items, 8, 0
};

StringPropertyRNA rna_Brush_icon_filepath = {
	{(PropertyRNA*)&rna_Brush_clone_alpha, (PropertyRNA*)&rna_Brush_blend,
	-1, "icon_filepath", 1, "Brush Icon Filepath",
	"File path to brush icon",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {240, 0, 0}, 0,
	rna_Brush_icon_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_icon_filepath_get, Brush_icon_filepath_length, Brush_icon_filepath_set, 240, ""
};

FloatPropertyRNA rna_Brush_clone_alpha = {
	{(PropertyRNA*)&rna_Brush_clone_image, (PropertyRNA*)&rna_Brush_icon_filepath,
	-1, "clone_alpha", 8195, "Clone Alpha",
	"Opacity of clone image display",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 251920384, NULL, NULL,
	offsetof(Brush, clone.alpha), 4, NULL},
	Brush_clone_alpha_get, Brush_clone_alpha_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Brush_clone_image = {
	{(PropertyRNA*)&rna_Brush_clone_offset, (PropertyRNA*)&rna_Brush_clone_alpha,
	-1, "clone_image", 65, "Clone Image",
	"Image for clone tool",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 251920384, NULL, NULL,
	0, -1, NULL},
	Brush_clone_image_get, Brush_clone_image_set, NULL, NULL,&RNA_Image
};

static float rna_Brush_clone_offset_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_clone_offset = {
	{(PropertyRNA*)&rna_Brush_color, (PropertyRNA*)&rna_Brush_clone_image,
	-1, "clone_offset", 8195, "Clone Offset",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Brush_update, 251920384, NULL, NULL,
	offsetof(Brush, clone.offset), 4, NULL},
	NULL, NULL, Brush_clone_offset_get, Brush_clone_offset_set, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_clone_offset_default
};

static float rna_Brush_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_color = {
	{(PropertyRNA*)&rna_Brush_crease_pinch_factor, (PropertyRNA*)&rna_Brush_clone_offset,
	-1, "color", 8195, "Color",
	"",
	0,
	PROP_FLOAT, PROP_COLOR_GAMMA|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, rgb), 4, NULL},
	NULL, NULL, Brush_color_get, Brush_color_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_Brush_color_default
};

FloatPropertyRNA rna_Brush_crease_pinch_factor = {
	{(PropertyRNA*)&rna_Brush_curve, (PropertyRNA*)&rna_Brush_color,
	-1, "crease_pinch_factor", 8195, "Crease Brush Pinch Factor",
	"How much the crease brush pinches",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, crease_pinch_factor), 4, NULL},
	Brush_crease_pinch_factor_get, Brush_crease_pinch_factor_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.6666666865f, NULL
};

PointerPropertyRNA rna_Brush_curve = {
	{(PropertyRNA*)&rna_Brush_use_custom_icon, (PropertyRNA*)&rna_Brush_crease_pinch_factor,
	-1, "curve", 262144, "Curve",
	"Editable falloff curve",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

BooleanPropertyRNA rna_Brush_use_custom_icon = {
	{(PropertyRNA*)&rna_Brush_direction, (PropertyRNA*)&rna_Brush_curve,
	-1, "use_custom_icon", 3, "Custom Icon",
	"Set the brush icon from an image file",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_icon_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_custom_icon_get, Brush_use_custom_icon_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Brush_direction_items[3] = {
	{0, "ADD", 0, "Add", "Add effect of brush"},
	{512, "SUBTRACT", 0, "Subtract", "Subtract effect of brush"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_direction = {
	{(PropertyRNA*)&rna_Brush_use_edge_to_edge, (PropertyRNA*)&rna_Brush_use_custom_icon,
	-1, "direction", 3, "Direction",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_direction_get, Brush_direction_set, rna_Brush_direction_itemf, rna_Brush_direction_items, 2, 0
};

BooleanPropertyRNA rna_Brush_use_edge_to_edge = {
	{(PropertyRNA*)&rna_Brush_imagepaint_tool, (PropertyRNA*)&rna_Brush_direction,
	-1, "use_edge_to_edge", 3, "Edge-to-edge",
	"Drag anchor brush from edge-to-edge",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_edge_to_edge_get, Brush_use_edge_to_edge_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Brush_imagepaint_tool_items[5] = {
	{0, "DRAW", 804, "Draw", ""},
	{1, "SOFTEN", 802, "Soften", ""},
	{2, "SMEAR", 799, "Smear", ""},
	{3, "CLONE", 784, "Clone", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_imagepaint_tool = {
	{(PropertyRNA*)&rna_Brush_use_inverse_smooth_pressure, (PropertyRNA*)&rna_Brush_use_edge_to_edge,
	-1, "imagepaint_tool", 3, "Image Paint Tool",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_imagepaint_tool_update, 251920384, NULL, NULL,
	0, -1, NULL},
	Brush_imagepaint_tool_get, Brush_imagepaint_tool_set, NULL, rna_Brush_imagepaint_tool_items, 4, 0
};

BooleanPropertyRNA rna_Brush_use_inverse_smooth_pressure = {
	{(PropertyRNA*)&rna_Brush_jitter, (PropertyRNA*)&rna_Brush_imagepaint_tool,
	-1, "use_inverse_smooth_pressure", 3, "Inverse Smooth Pressure",
	"Lighter pressure causes more smoothing to be applied",
	67,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_inverse_smooth_pressure_get, Brush_use_inverse_smooth_pressure_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_jitter = {
	{(PropertyRNA*)&rna_Brush_use_pressure_jitter, (PropertyRNA*)&rna_Brush_use_inverse_smooth_pressure,
	-1, "jitter", 8195, "Jitter",
	"Jitter the position of the brush while painting",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, jitter), 4, NULL},
	Brush_jitter_get, Brush_jitter_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Brush_use_pressure_jitter = {
	{(PropertyRNA*)&rna_Brush_normal_weight, (PropertyRNA*)&rna_Brush_jitter,
	-1, "use_pressure_jitter", 3, "Jitter Pressure",
	"Enable tablet pressure sensitivity for jitter",
	67,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_jitter_get, Brush_use_pressure_jitter_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_normal_weight = {
	{(PropertyRNA*)&rna_Brush_use_original_normal, (PropertyRNA*)&rna_Brush_use_pressure_jitter,
	-1, "normal_weight", 8195, "Normal Weight",
	"How much grab will pull vertexes out of surface during a grab",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, normal_weight), 4, NULL},
	Brush_normal_weight_get, Brush_normal_weight_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Brush_use_original_normal = {
	{(PropertyRNA*)&rna_Brush_use_persistent, (PropertyRNA*)&rna_Brush_normal_weight,
	-1, "use_original_normal", 3, "Original Normal",
	"When locked keep using normal of surface where stroke was initiated",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_original_normal_get, Brush_use_original_normal_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_persistent = {
	{(PropertyRNA*)&rna_Brush_plane_offset, (PropertyRNA*)&rna_Brush_use_original_normal,
	-1, "use_persistent", 3, "Persistent",
	"Sculpts on a persistent layer of the mesh",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_persistent_get, Brush_use_persistent_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_plane_offset = {
	{(PropertyRNA*)&rna_Brush_use_offset_pressure, (PropertyRNA*)&rna_Brush_use_persistent,
	-1, "plane_offset", 8195, "Plane Offset",
	"Adjusts plane on which the brush acts towards or away from the object surface",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, plane_offset), 4, NULL},
	Brush_plane_offset_get, Brush_plane_offset_set, NULL, NULL, NULL, -0.5000000000f, 0.5000000000f, -2.0f, 2.0f, 0.0010000000f, 0, 0.0f, NULL
};

BooleanPropertyRNA rna_Brush_use_offset_pressure = {
	{(PropertyRNA*)&rna_Brush_plane_trim, (PropertyRNA*)&rna_Brush_plane_offset,
	-1, "use_offset_pressure", 3, "Plane Offset Pressure",
	"Enable tablet pressure sensitivity for offset",
	67,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_offset_pressure_get, Brush_use_offset_pressure_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_plane_trim = {
	{(PropertyRNA*)&rna_Brush_use_rake, (PropertyRNA*)&rna_Brush_use_offset_pressure,
	-1, "plane_trim", 8195, "Plane Trim",
	"If a vertex is further from offset plane than this then it is not affected",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, plane_trim), 4, NULL},
	Brush_plane_trim_get, Brush_plane_trim_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.5000000000f, NULL
};

BooleanPropertyRNA rna_Brush_use_rake = {
	{(PropertyRNA*)&rna_Brush_use_random_rotation, (PropertyRNA*)&rna_Brush_plane_trim,
	-1, "use_rake", 3, "Rake",
	"Rotate the brush texture to match the stroke direction",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_rake_get, Brush_use_rake_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_random_rotation = {
	{(PropertyRNA*)&rna_Brush_rate, (PropertyRNA*)&rna_Brush_use_rake,
	-1, "use_random_rotation", 3, "Random Rotation",
	"Rotate the brush texture at random",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_random_rotation_get, Brush_use_random_rotation_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_rate = {
	{(PropertyRNA*)&rna_Brush_use_restore_mesh, (PropertyRNA*)&rna_Brush_use_random_rotation,
	-1, "rate", 8195, "Rate",
	"Interval between paints for Airbrush",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, rate), 4, NULL},
	Brush_rate_get, Brush_rate_set, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0001000000f, 10000.0f, 1.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Brush_use_restore_mesh = {
	{(PropertyRNA*)&rna_Brush_sculpt_plane, (PropertyRNA*)&rna_Brush_rate,
	-1, "use_restore_mesh", 3, "Restore Mesh",
	"Allows a single dot to be carefully positioned",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_restore_mesh_get, Brush_use_restore_mesh_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Brush_sculpt_plane_items[6] = {
	{0, "AREA", 0, "Area Plane", ""},
	{1, "VIEW", 0, "View Plane", ""},
	{2, "X", 0, "X Plane", ""},
	{3, "Y", 0, "Y Plane", ""},
	{4, "Z", 0, "Z Plane", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_sculpt_plane = {
	{(PropertyRNA*)&rna_Brush_sculpt_tool, (PropertyRNA*)&rna_Brush_use_restore_mesh,
	-1, "sculpt_plane", 3, "Sculpt Plane",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_sculpt_plane_get, Brush_sculpt_plane_set, NULL, rna_Brush_sculpt_plane_items, 5, 0
};

static EnumPropertyItem rna_Brush_sculpt_tool_items[17] = {
	{17, "BLOB", 781, "Blob", ""},
	{8, "CLAY", 783, "Clay", ""},
	{16, "CREASE", 785, "Crease", ""},
	{1, "DRAW", 798, "Draw", ""},
	{9, "FILL", 787, "Fill", ""},
	{7, "FLATTEN", 788, "Flatten", ""},
	{5, "GRAB", 789, "Grab", ""},
	{4, "INFLATE", 790, "Inflate", ""},
	{6, "LAYER", 791, "Layer", ""},
	{11, "NUDGE", 795, "Nudge", ""},
	{3, "PINCH", 796, "Pinch", ""},
	{14, "ROTATE", 806, "Rotate", ""},
	{10, "SCRAPE", 797, "Scrape", ""},
	{2, "SMOOTH", 800, "Smooth", ""},
	{13, "SNAKE_HOOK", 801, "Snake Hook", ""},
	{12, "THUMB", 805, "Thumb", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_sculpt_tool = {
	{(PropertyRNA*)&rna_Brush_size, (PropertyRNA*)&rna_Brush_sculpt_plane,
	-1, "sculpt_tool", 3, "Sculpt Tool",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_sculpt_tool_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_sculpt_tool_get, Brush_sculpt_tool_set, NULL, rna_Brush_sculpt_tool_items, 16, 17
};

IntPropertyRNA rna_Brush_size = {
	{(PropertyRNA*)&rna_Brush_use_pressure_size, (PropertyRNA*)&rna_Brush_sculpt_tool,
	-1, "size", 3, "Size",
	"Radius of the brush in pixels",
	0,
	PROP_INT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_size_get, Brush_size_set, NULL, NULL, NULL,
	1, 200, 1, 2000, 1, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_pressure_size = {
	{(PropertyRNA*)&rna_Brush_use_smooth_stroke, (PropertyRNA*)&rna_Brush_size,
	-1, "use_pressure_size", 3, "Size Pressure",
	"Enable tablet pressure sensitivity for size",
	67,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_size_get, Brush_use_pressure_size_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_smooth_stroke = {
	{(PropertyRNA*)&rna_Brush_smooth_stroke_factor, (PropertyRNA*)&rna_Brush_use_pressure_size,
	-1, "use_smooth_stroke", 3, "Smooth Stroke",
	"Brush lags behind mouse and follows a smoother path",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_smooth_stroke_get, Brush_use_smooth_stroke_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_smooth_stroke_factor = {
	{(PropertyRNA*)&rna_Brush_smooth_stroke_radius, (PropertyRNA*)&rna_Brush_use_smooth_stroke,
	-1, "smooth_stroke_factor", 8195, "Smooth Stroke Factor",
	"Higher values give a smoother stroke",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, smooth_stroke_factor), 4, NULL},
	Brush_smooth_stroke_factor_get, Brush_smooth_stroke_factor_set, NULL, NULL, NULL, 0.5000000000f, 0.9900000095f, 0.5000000000f, 0.9900000095f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Brush_smooth_stroke_radius = {
	{(PropertyRNA*)&rna_Brush_use_space, (PropertyRNA*)&rna_Brush_smooth_stroke_factor,
	-1, "smooth_stroke_radius", 8195, "Smooth Stroke Radius",
	"Minimum distance from last point before stroke continues",
	0,
	PROP_INT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, smooth_stroke_radius), 0, NULL},
	Brush_smooth_stroke_radius_get, Brush_smooth_stroke_radius_set, NULL, NULL, NULL,
	10, 200, 10, 200, 1, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_space = {
	{(PropertyRNA*)&rna_Brush_spacing, (PropertyRNA*)&rna_Brush_smooth_stroke_radius,
	-1, "use_space", 3, "Space",
	"Limit brush application to the distance specified by spacing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_space_get, Brush_use_space_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Brush_spacing = {
	{(PropertyRNA*)&rna_Brush_use_pressure_spacing, (PropertyRNA*)&rna_Brush_use_space,
	-1, "spacing", 8195, "Spacing",
	"Spacing between brush daubs as a percentage of brush diameter",
	0,
	PROP_INT, PROP_PERCENTAGE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, spacing), 0, NULL},
	Brush_spacing_get, Brush_spacing_set, NULL, NULL, NULL,
	1, 500, 1, 1000, 5, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_pressure_spacing = {
	{(PropertyRNA*)&rna_Brush_strength, (PropertyRNA*)&rna_Brush_spacing,
	-1, "use_pressure_spacing", 3, "Spacing Pressure",
	"Enable tablet pressure sensitivity for spacing",
	67,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_spacing_get, Brush_use_pressure_spacing_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Brush_strength = {
	{(PropertyRNA*)&rna_Brush_use_pressure_strength, (PropertyRNA*)&rna_Brush_use_pressure_spacing,
	-1, "strength", 3, "Strength",
	"How powerful the effect of the brush is when applied",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_strength_get, Brush_strength_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 10.0f, 0.0010000000f, 0, 0.5000000000f, NULL
};

BooleanPropertyRNA rna_Brush_use_pressure_strength = {
	{(PropertyRNA*)&rna_Brush_stroke_method, (PropertyRNA*)&rna_Brush_strength,
	-1, "use_pressure_strength", 3, "Strength Pressure",
	"Enable tablet pressure sensitivity for strength",
	67,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_pressure_strength_get, Brush_use_pressure_strength_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Brush_stroke_method_items[6] = {
	{0, "DOTS", 0, "Dots", ""},
	{8388608, "DRAG_DOT", 0, "Drag Dot", ""},
	{1024, "SPACE", 0, "Space", ""},
	{256, "ANCHORED", 0, "Anchored", ""},
	{1, "AIRBRUSH", 0, "Airbrush", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_stroke_method = {
	{(PropertyRNA*)&rna_Brush_cursor_color_subtract, (PropertyRNA*)&rna_Brush_use_pressure_strength,
	-1, "stroke_method", 3, "Stroke Method",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_stroke_method_get, Brush_stroke_method_set, NULL, rna_Brush_stroke_method_items, 5, 0
};

static float rna_Brush_cursor_color_subtract_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Brush_cursor_color_subtract = {
	{(PropertyRNA*)&rna_Brush_texture, (PropertyRNA*)&rna_Brush_stroke_method,
	-1, "cursor_color_subtract", 8195, "Subract Color",
	"Color of cursor when subtracting",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, sub_col), 4, NULL},
	NULL, NULL, Brush_cursor_color_subtract_get, Brush_cursor_color_subtract_set, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Brush_cursor_color_subtract_default
};

PointerPropertyRNA rna_Brush_texture = {
	{(PropertyRNA*)&rna_Brush_texture_angle_source_random, (PropertyRNA*)&rna_Brush_cursor_color_subtract,
	-1, "texture", 65, "Texture",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 117440512, NULL, NULL,
	0, -1, NULL},
	Brush_texture_get, Brush_texture_set, NULL, NULL,&RNA_Texture
};

static EnumPropertyItem rna_Brush_texture_angle_source_random_items[4] = {
	{0, "USER", 0, "User", ""},
	{128, "RAKE", 0, "Rake", ""},
	{33554432, "RANDOM", 0, "Random", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_texture_angle_source_random = {
	{(PropertyRNA*)&rna_Brush_texture_angle_source_no_random, (PropertyRNA*)&rna_Brush_texture,
	-1, "texture_angle_source_random", 3, "Texture Angle Source",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_texture_angle_source_random_get, Brush_texture_angle_source_random_set, NULL, rna_Brush_texture_angle_source_random_items, 3, 0
};

static EnumPropertyItem rna_Brush_texture_angle_source_no_random_items[3] = {
	{0, "USER", 0, "User", ""},
	{128, "RAKE", 0, "Rake", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_texture_angle_source_no_random = {
	{(PropertyRNA*)&rna_Brush_texture_overlay_alpha, (PropertyRNA*)&rna_Brush_texture_angle_source_random,
	-1, "texture_angle_source_no_random", 3, "Texture Angle Source",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_texture_angle_source_no_random_get, Brush_texture_angle_source_no_random_set, NULL, rna_Brush_texture_angle_source_no_random_items, 2, 0
};

IntPropertyRNA rna_Brush_texture_overlay_alpha = {
	{(PropertyRNA*)&rna_Brush_texture_sample_bias, (PropertyRNA*)&rna_Brush_texture_angle_source_no_random,
	-1, "texture_overlay_alpha", 8195, "Texture Overlay Alpha",
	"",
	0,
	PROP_INT, PROP_PERCENTAGE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, texture_overlay_alpha), 0, NULL},
	Brush_texture_overlay_alpha_get, Brush_texture_overlay_alpha_set, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

FloatPropertyRNA rna_Brush_texture_sample_bias = {
	{(PropertyRNA*)&rna_Brush_texture_slot, (PropertyRNA*)&rna_Brush_texture_overlay_alpha,
	-1, "texture_sample_bias", 8195, "Texture Sample Bias",
	"Value added to texture samples",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	offsetof(Brush, texture_sample_bias), 4, NULL},
	Brush_texture_sample_bias_get, Brush_texture_sample_bias_set, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Brush_texture_slot = {
	{(PropertyRNA*)&rna_Brush_unprojected_radius, (PropertyRNA*)&rna_Brush_texture_sample_bias,
	-1, "texture_slot", 0, "Texture Slot",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_texture_slot_get, NULL, NULL, NULL,&RNA_BrushTextureSlot
};

FloatPropertyRNA rna_Brush_unprojected_radius = {
	{(PropertyRNA*)&rna_Brush_use_space_atten, (PropertyRNA*)&rna_Brush_texture_slot,
	-1, "unprojected_radius", 3, "Unprojected Radius",
	"Radius of brush in Blender units",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_unprojected_radius_get, Brush_unprojected_radius_set, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, FLT_MAX, 0.0f, 0, 0.0f, NULL
};

BooleanPropertyRNA rna_Brush_use_space_atten = {
	{(PropertyRNA*)&rna_Brush_use_locked_size, (PropertyRNA*)&rna_Brush_unprojected_radius,
	-1, "use_space_atten", 3, "Use Automatic Strength Adjustment",
	"Automatically adjusts strength to give consistent results for different spacings",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_space_atten_get, Brush_use_space_atten_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_locked_size = {
	{(PropertyRNA*)&rna_Brush_use_frontface, (PropertyRNA*)&rna_Brush_use_space_atten,
	-1, "use_locked_size", 3, "Use Blender Units",
	"When locked brush stays same size relative to object; when unlocked brush size is given in pixels",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_locked_size_get, Brush_use_locked_size_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_frontface = {
	{(PropertyRNA*)&rna_Brush_use_plane_trim, (PropertyRNA*)&rna_Brush_use_locked_size,
	-1, "use_frontface", 3, "Use Front-Face",
	"Brush only affects vertexes that face the viewer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_frontface_get, Brush_use_frontface_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_plane_trim = {
	{(PropertyRNA*)&rna_Brush_use_paint_sculpt, (PropertyRNA*)&rna_Brush_use_frontface,
	-1, "use_plane_trim", 3, "Use Plane Trim",
	"Enable Plane Trim",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_plane_trim_get, Brush_use_plane_trim_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_paint_sculpt = {
	{(PropertyRNA*)&rna_Brush_use_paint_texture, (PropertyRNA*)&rna_Brush_use_plane_trim,
	-1, "use_paint_sculpt", 3, "Use Sculpt",
	"Use this brush in sculpt mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_sculpt_get, Brush_use_paint_sculpt_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_paint_texture = {
	{(PropertyRNA*)&rna_Brush_use_texture_overlay, (PropertyRNA*)&rna_Brush_use_paint_sculpt,
	-1, "use_paint_texture", 3, "Use Texture",
	"Use this brush in texture paint mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_texture_get, Brush_use_paint_texture_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_texture_overlay = {
	{(PropertyRNA*)&rna_Brush_use_paint_vertex, (PropertyRNA*)&rna_Brush_use_paint_texture,
	-1, "use_texture_overlay", 3, "Use Texture Overlay",
	"Show texture in viewport",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_texture_overlay_get, Brush_use_texture_overlay_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_paint_vertex = {
	{(PropertyRNA*)&rna_Brush_use_paint_weight, (PropertyRNA*)&rna_Brush_use_texture_overlay,
	-1, "use_paint_vertex", 3, "Use Vertex",
	"Use this brush in vertex paint mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_vertex_get, Brush_use_paint_vertex_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Brush_use_paint_weight = {
	{(PropertyRNA*)&rna_Brush_vertexpaint_tool, (PropertyRNA*)&rna_Brush_use_paint_vertex,
	-1, "use_paint_weight", 3, "Use Weight",
	"Use this brush in weight paint mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_paint_weight_get, Brush_use_paint_weight_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Brush_vertexpaint_tool_items[8] = {
	{0, "MIX", 793, "Mix", "Use mix blending mode while painting"},
	{1, "ADD", 780, "Add", "Use add blending mode while painting"},
	{2, "SUB", 803, "Subtract", "Use subtract blending mode while painting"},
	{3, "MUL", 794, "Multiply", "Use multiply blending mode while painting"},
	{4, "BLUR", 782, "Blur", "Blur the color with surrounding values"},
	{5, "LIGHTEN", 792, "Lighten", "Use lighten blending mode while painting"},
	{6, "DARKEN", 786, "Darken", "Use darken blending mode while painting"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Brush_vertexpaint_tool = {
	{(PropertyRNA*)&rna_Brush_use_wrap, (PropertyRNA*)&rna_Brush_use_paint_weight,
	-1, "vertexpaint_tool", 3, "Vertex/Weight Paint Tool",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_vertexpaint_tool_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_vertexpaint_tool_get, Brush_vertexpaint_tool_set, NULL, rna_Brush_vertexpaint_tool_items, 7, 0
};

BooleanPropertyRNA rna_Brush_use_wrap = {
	{NULL, (PropertyRNA*)&rna_Brush_vertexpaint_tool,
	-1, "use_wrap", 3, "Wrap",
	"Enable torus wrapping while painting",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Brush_update, 0, NULL, NULL,
	0, -1, NULL},
	Brush_use_wrap_get, Brush_use_wrap_set, NULL, NULL, 0, NULL
};

StructRNA RNA_Brush = {
	{(ContainerRNA *)&RNA_BrushTextureSlot, (ContainerRNA *)&RNA_BooleanProperty,
	NULL,
	{(PropertyRNA*)&rna_Brush_use_accumulate, (PropertyRNA*)&rna_Brush_use_wrap}},
	"Brush"	, NULL,NULL
, 3, "Brush", "Brush datablock for storing brush settings for painting and sculpting",
	182,
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

/* Brush Texture Slot */
FloatPropertyRNA rna_BrushTextureSlot_angle = {
	{(PropertyRNA*)&rna_BrushTextureSlot_map_mode, NULL,
	-1, "angle", 8195, "Angle",
	"Defines brush texture rotation",
	0,
	PROP_FLOAT, PROP_ANGLE|PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	offsetof(MTex, rot), 4, NULL},
	BrushTextureSlot_angle_get, BrushTextureSlot_angle_set, NULL, NULL, NULL, 0.0f, 6.2831854820f, 0.0f, 6.2831854820f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_BrushTextureSlot_map_mode_items[4] = {
	{0, "FIXED", 0, "Fixed", ""},
	{1, "TILED", 0, "Tiled", ""},
	{2, "3D", 0, "3D", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BrushTextureSlot_map_mode = {
	{NULL, (PropertyRNA*)&rna_BrushTextureSlot_angle,
	-1, "map_mode", 3, "Mode",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_TextureSlot_update, 0, NULL, NULL,
	0, -1, NULL},
	BrushTextureSlot_map_mode_get, BrushTextureSlot_map_mode_set, NULL, rna_BrushTextureSlot_map_mode_items, 3, 0
};

StructRNA RNA_BrushTextureSlot = {
	{(ContainerRNA *)&RNA_BuildModifier, (ContainerRNA *)&RNA_Brush,
	NULL,
	{(PropertyRNA*)&rna_BrushTextureSlot_angle, (PropertyRNA*)&rna_BrushTextureSlot_map_mode}},
	"BrushTextureSlot"	, NULL,NULL
, 0, "Brush Texture Slot", "Texture slot for textures in a Brush datablock",
	166,
	(PropertyRNA*)&rna_TextureSlot_name, (PropertyRNA*)&rna_TextureSlot_rna_properties,
	&RNA_TextureSlot,
	NULL,
	NULL,
	rna_TextureSlot_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Operator Stroke Element */
BooleanPropertyRNA rna_OperatorStrokeElement_pen_flip = {
	{(PropertyRNA*)&rna_OperatorStrokeElement_is_start, NULL,
	-1, "pen_flip", 1027, "Flip",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_OperatorStrokeElement_is_start = {
	{(PropertyRNA*)&rna_OperatorStrokeElement_location, (PropertyRNA*)&rna_OperatorStrokeElement_pen_flip,
	-1, "is_start", 1027, "Is Stroke Start",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_OperatorStrokeElement_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_location = {
	{(PropertyRNA*)&rna_OperatorStrokeElement_mouse, (PropertyRNA*)&rna_OperatorStrokeElement_is_start,
	-1, "location", 1027, "Location",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_location_default
};

static float rna_OperatorStrokeElement_mouse_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorStrokeElement_mouse = {
	{(PropertyRNA*)&rna_OperatorStrokeElement_pressure, (PropertyRNA*)&rna_OperatorStrokeElement_location,
	-1, "mouse", 1027, "Mouse",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorStrokeElement_mouse_default
};

FloatPropertyRNA rna_OperatorStrokeElement_pressure = {
	{(PropertyRNA*)&rna_OperatorStrokeElement_time, (PropertyRNA*)&rna_OperatorStrokeElement_mouse,
	-1, "pressure", 1027, "Pressure",
	"Tablet pressure",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_OperatorStrokeElement_time = {
	{NULL, (PropertyRNA*)&rna_OperatorStrokeElement_pressure,
	-1, "time", 1027, "Time",
	"",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_OperatorStrokeElement = {
	{(ContainerRNA *)&RNA_OperatorTypeMacro, (ContainerRNA *)&RNA_OperatorProperties,
	NULL,
	{(PropertyRNA*)&rna_OperatorStrokeElement_pen_flip, (PropertyRNA*)&rna_OperatorStrokeElement_time}},
	"OperatorStrokeElement"	, NULL,NULL
, 0, "Operator Stroke Element", "",
	17,
	(PropertyRNA*)&rna_PropertyGroup_name, (PropertyRNA*)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

