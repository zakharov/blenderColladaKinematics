
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

#include "rna_meta.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

PointerPropertyRNA rna_MetaBall_animation_data;
BooleanPropertyRNA rna_MetaBall_use_auto_texspace;
CollectionPropertyRNA rna_MetaBall_elements;
CollectionPropertyRNA rna_MetaBall_materials;
FloatPropertyRNA rna_MetaBall_render_resolution;
FloatPropertyRNA rna_MetaBall_texspace_location;
FloatPropertyRNA rna_MetaBall_texspace_size;
FloatPropertyRNA rna_MetaBall_threshold;
EnumPropertyRNA rna_MetaBall_update_method;
FloatPropertyRNA rna_MetaBall_resolution;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_MetaBallElements_rna_type;
PointerPropertyRNA rna_MetaBallElements_active;
CollectionPropertyRNA rna_MetaBallElements_rna_properties;

extern FunctionRNA rna_MetaBallElements_new_func;
extern EnumPropertyRNA rna_MetaBallElements_new_type;
extern PointerPropertyRNA rna_MetaBallElements_new_element;

extern FunctionRNA rna_MetaBallElements_remove_func;
extern PointerPropertyRNA rna_MetaBallElements_remove_element;



PointerPropertyRNA rna_MetaElement_rna_type;
BooleanPropertyRNA rna_MetaElement_hide;
FloatPropertyRNA rna_MetaElement_co;
BooleanPropertyRNA rna_MetaElement_use_negative;
CollectionPropertyRNA rna_MetaElement_rna_properties;
FloatPropertyRNA rna_MetaElement_radius;
FloatPropertyRNA rna_MetaElement_rotation;
FloatPropertyRNA rna_MetaElement_size_x;
FloatPropertyRNA rna_MetaElement_size_y;
FloatPropertyRNA rna_MetaElement_size_z;
FloatPropertyRNA rna_MetaElement_stiffness;
EnumPropertyRNA rna_MetaElement_type;

PointerRNA MetaBall_animation_data_get(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

int MetaBall_use_auto_texspace_get(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return (((data->texflag) & 1) != 0);
}

void MetaBall_use_auto_texspace_set(PointerRNA *ptr, int value)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	if(value) data->texflag |= 1;
	else data->texflag &= ~1;
}

static PointerRNA MetaBall_elements_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MetaElement, rna_iterator_listbase_get(iter));
}

void MetaBall_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MetaBall_elements;

	rna_iterator_listbase_begin(iter, &data->elems, NULL);

	if(iter->valid)
		iter->ptr= MetaBall_elements_get(iter);
}

void MetaBall_elements_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= MetaBall_elements_get(iter);
}

void MetaBall_elements_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MetaBall_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MetaBall_elements_begin(&iter, ptr);

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
		if(found) *r_ptr = MetaBall_elements_get(&iter);
	}

	MetaBall_elements_end(&iter);

	return found;
}

int MetaBall_materials_length(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return (data->mat == NULL)? 0: data->totcol;
}

static PointerRNA MetaBall_materials_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void MetaBall_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MetaBall_materials;

	rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

	if(iter->valid)
		iter->ptr= MetaBall_materials_get(iter);
}

void MetaBall_materials_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MetaBall_materials_get(iter);
}

void MetaBall_materials_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MetaBall_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MetaBall_materials_begin(&iter, ptr);

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
		if(found) *r_ptr = MetaBall_materials_get(&iter);
	}

	MetaBall_materials_end(&iter);

	return found;
}

float MetaBall_render_resolution_get(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return (float)(data->rendersize);
}

void MetaBall_render_resolution_set(PointerRNA *ptr, float value)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	data->rendersize= CLAMPIS(value, 0.0500000007f, 1.0f);
}

void MetaBall_texspace_location_get(PointerRNA *ptr, float values[3])
{
	rna_Meta_texspace_loc_get(ptr, values);
}

void MetaBall_texspace_location_set(PointerRNA *ptr, const float values[3])
{
	rna_Meta_texspace_loc_set(ptr, values);
}

void MetaBall_texspace_size_get(PointerRNA *ptr, float values[3])
{
	rna_Meta_texspace_size_get(ptr, values);
}

void MetaBall_texspace_size_set(PointerRNA *ptr, const float values[3])
{
	rna_Meta_texspace_size_set(ptr, values);
}

float MetaBall_threshold_get(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return (float)(data->thresh);
}

void MetaBall_threshold_set(PointerRNA *ptr, float value)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	data->thresh= CLAMPIS(value, 0.0f, 5.0f);
}

int MetaBall_update_method_get(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return (int)(data->flag);
}

void MetaBall_update_method_set(PointerRNA *ptr, int value)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	data->flag= value;
}

float MetaBall_resolution_get(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return (float)(data->wiresize);
}

void MetaBall_resolution_set(PointerRNA *ptr, float value)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	data->wiresize= CLAMPIS(value, 0.0500000007f, 1.0f);
}

PointerRNA MetaBallElements_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA MetaBallElements_active_get(PointerRNA *ptr)
{
	MetaBall *data= (MetaBall*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MetaElement, data->lastelem);
}

static PointerRNA MetaBallElements_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MetaBallElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MetaBallElements_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MetaBallElements_rna_properties_get(iter);
}

void MetaBallElements_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MetaBallElements_rna_properties_get(iter);
}

void MetaBallElements_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MetaElement_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MetaElement_hide_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void MetaElement_hide_set(PointerRNA *ptr, int value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

void MetaElement_co_get(PointerRNA *ptr, float values[3])
{
	MetaElem *data= (MetaElem*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)((&data->x)[i]);
	}
}

void MetaElement_co_set(PointerRNA *ptr, const float values[3])
{
	MetaElem *data= (MetaElem*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		(&data->x)[i]= values[i];
	}
}

int MetaElement_use_negative_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MetaElement_use_negative_set(PointerRNA *ptr, int value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA MetaElement_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MetaElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MetaElement_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MetaElement_rna_properties_get(iter);
}

void MetaElement_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MetaElement_rna_properties_get(iter);
}

void MetaElement_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float MetaElement_radius_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (float)(data->rad);
}

void MetaElement_radius_set(PointerRNA *ptr, float value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	data->rad= CLAMPIS(value, 0.0f, FLT_MAX);
}

void MetaElement_rotation_get(PointerRNA *ptr, float values[4])
{
	MetaElem *data= (MetaElem*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= (float)(((float*)data->quat)[i]);
	}
}

void MetaElement_rotation_set(PointerRNA *ptr, const float values[4])
{
	MetaElem *data= (MetaElem*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		((float*)data->quat)[i]= values[i];
	}
}

float MetaElement_size_x_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (float)(data->expx);
}

void MetaElement_size_x_set(PointerRNA *ptr, float value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	data->expx= CLAMPIS(value, 0.0f, 20.0f);
}

float MetaElement_size_y_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (float)(data->expy);
}

void MetaElement_size_y_set(PointerRNA *ptr, float value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	data->expy= CLAMPIS(value, 0.0f, 20.0f);
}

float MetaElement_size_z_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (float)(data->expz);
}

void MetaElement_size_z_set(PointerRNA *ptr, float value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	data->expz= CLAMPIS(value, 0.0f, 20.0f);
}

float MetaElement_stiffness_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (float)(data->s);
}

void MetaElement_stiffness_set(PointerRNA *ptr, float value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	data->s= CLAMPIS(value, 0.0f, 10.0f);
}

int MetaElement_type_get(PointerRNA *ptr)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	return (int)(data->type);
}

void MetaElement_type_set(PointerRNA *ptr, int value)
{
	MetaElem *data= (MetaElem*)(ptr->data);
	data->type= value;
}


void MetaBallElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	int type;
	struct MetaElem *element;
	char *_data, *_retdata;
	
	_self= (struct MetaBall *)_ptr->data;
	_data= (char *)_parms->data;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	element= rna_MetaBall_elements_new(_self, type);
	*((struct MetaElem**)_retdata)= element;
}

void MetaBallElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct MetaBall *_self;
	struct MetaElem *element;
	char *_data;
	
	_self= (struct MetaBall *)_ptr->data;
	_data= (char *)_parms->data;
	element= *((struct MetaElem**)_data);
	
	rna_MetaBall_elements_remove(_self, reports, element);
}

/* Repeated prototypes to detect errors */

struct MetaElem *rna_MetaBall_elements_new(struct MetaBall *_self, int type);
void rna_MetaBall_elements_remove(struct MetaBall *_self, ReportList *reports, struct MetaElem *element);


/* MetaBall */
PointerPropertyRNA rna_MetaBall_animation_data = {
	{(PropertyRNA*)&rna_MetaBall_use_auto_texspace, NULL,
	-1, "animation_data", 0, "Animation Data",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaBall_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

BooleanPropertyRNA rna_MetaBall_use_auto_texspace = {
	{(PropertyRNA*)&rna_MetaBall_elements, (PropertyRNA*)&rna_MetaBall_animation_data,
	-1, "use_auto_texspace", 3, "Auto Texture Space",
	"Adjusts active object\'s texture space automatically when transforming object",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaBall_use_auto_texspace_get, MetaBall_use_auto_texspace_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MetaBall_elements = {
	{(PropertyRNA*)&rna_MetaBall_materials, (PropertyRNA*)&rna_MetaBall_use_auto_texspace,
	-1, "elements", 0, "Elements",
	"Meta elements",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MetaBallElements},
	MetaBall_elements_begin, MetaBall_elements_next, MetaBall_elements_end, MetaBall_elements_get, NULL, MetaBall_elements_lookup_int, NULL, &RNA_MetaElement
};

CollectionPropertyRNA rna_MetaBall_materials = {
	{(PropertyRNA*)&rna_MetaBall_render_resolution, (PropertyRNA*)&rna_MetaBall_elements,
	-1, "materials", 0, "Materials",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_IDMaterials},
	MetaBall_materials_begin, MetaBall_materials_next, MetaBall_materials_end, MetaBall_materials_get, MetaBall_materials_length, MetaBall_materials_lookup_int, NULL, &RNA_Material
};

FloatPropertyRNA rna_MetaBall_render_resolution = {
	{(PropertyRNA*)&rna_MetaBall_texspace_location, (PropertyRNA*)&rna_MetaBall_materials,
	-1, "render_resolution", 8195, "Render Size",
	"Polygonization resolution in rendering",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaBall, rendersize), 4, NULL},
	MetaBall_render_resolution_get, MetaBall_render_resolution_set, NULL, NULL, NULL, 0.0500000007f, 1.0f, 0.0500000007f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_MetaBall_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaBall_texspace_location = {
	{(PropertyRNA*)&rna_MetaBall_texspace_size, (PropertyRNA*)&rna_MetaBall_render_resolution,
	-1, "texspace_location", 3, "Texture Space Location",
	"Texture space location",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, MetaBall_texspace_location_get, MetaBall_texspace_location_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaBall_texspace_location_default
};

static float rna_MetaBall_texspace_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaBall_texspace_size = {
	{(PropertyRNA*)&rna_MetaBall_threshold, (PropertyRNA*)&rna_MetaBall_texspace_location,
	-1, "texspace_size", 3, "Texture Space Size",
	"Texture space size",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, rna_Meta_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, MetaBall_texspace_size_get, MetaBall_texspace_size_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaBall_texspace_size_default
};

FloatPropertyRNA rna_MetaBall_threshold = {
	{(PropertyRNA*)&rna_MetaBall_update_method, (PropertyRNA*)&rna_MetaBall_texspace_size,
	-1, "threshold", 8195, "Threshold",
	"Influence of meta elements",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaBall, thresh), 4, NULL},
	MetaBall_threshold_get, MetaBall_threshold_set, NULL, NULL, NULL, 0.0f, 5.0f, 0.0f, 5.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MetaBall_update_method_items[5] = {
	{0, "UPDATE_ALWAYS", 0, "Always", "While editing, update metaball always"},
	{1, "HALFRES", 0, "Half", "While editing, update metaball in half resolution"},
	{2, "FAST", 0, "Fast", "While editing, update metaball without polygonization"},
	{3, "NEVER", 0, "Never", "While editing, don\'t update metaball at all"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MetaBall_update_method = {
	{(PropertyRNA*)&rna_MetaBall_resolution, (PropertyRNA*)&rna_MetaBall_threshold,
	-1, "update_method", 3, "Update",
	"Metaball edit update behavior",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MetaBall_update_method_get, MetaBall_update_method_set, NULL, rna_MetaBall_update_method_items, 4, 0
};

FloatPropertyRNA rna_MetaBall_resolution = {
	{NULL, (PropertyRNA*)&rna_MetaBall_update_method,
	-1, "resolution", 8195, "Wire Size",
	"Polygonization resolution in the 3D viewport",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaBall, wiresize), 4, NULL},
	MetaBall_resolution_get, MetaBall_resolution_set, NULL, NULL, NULL, 0.0500000007f, 1.0f, 0.0500000007f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MetaBall = {
	{(ContainerRNA *)&RNA_MetaBallElements, (ContainerRNA *)&RNA_MessageSensor,
	NULL,
	{(PropertyRNA*)&rna_MetaBall_animation_data, (PropertyRNA*)&rna_MetaBall_resolution}},
	"MetaBall"	, NULL,NULL
, 3, "MetaBall", "Metaball datablock to defined blobby surfaces",
	162,
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

/* Meta Elements */
PointerPropertyRNA rna_MetaBallElements_rna_type = {
	{(PropertyRNA*)&rna_MetaBallElements_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaBallElements_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_MetaBallElements_active = {
	{(PropertyRNA*)&rna_MetaBallElements_rna_properties, (PropertyRNA*)&rna_MetaBallElements_rna_type,
	-1, "active", 0, "Active Element",
	"Last selected element",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaBallElements_active_get, NULL, NULL, NULL,&RNA_MetaElement
};

CollectionPropertyRNA rna_MetaBallElements_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MetaBallElements_active,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaBallElements_rna_properties_begin, MetaBallElements_rna_properties_next, MetaBallElements_rna_properties_end, MetaBallElements_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_MetaBallElements_new_type_items[6] = {
	{0, "BALL", 308, "Ball", ""},
	{4, "CAPSULE", 310, "Capsule", ""},
	{5, "PLANE", 306, "Plane", ""},
	{6, "ELLIPSOID", 309, "Ellipsoid", ""},
	{7, "CUBE", 307, "Cube", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MetaBallElements_new_type = {
	{(PropertyRNA*)&rna_MetaBallElements_new_element, NULL,
	-1, "type", 3, "",
	"type for the new meta element.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_MetaBallElements_new_type_items, 5, 0
};

PointerPropertyRNA rna_MetaBallElements_new_element = {
	{NULL, (PropertyRNA*)&rna_MetaBallElements_new_type,
	-1, "element", 8, "",
	"The newly created metaelement.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaElement
};

FunctionRNA rna_MetaBallElements_new_func = {
	{(FunctionRNA*)&rna_MetaBallElements_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_MetaBallElements_new_type, (PropertyRNA*)&rna_MetaBallElements_new_element}},
	"new", 0, "Add a new spline to the curve.",
	MetaBallElements_new_call,
	(PropertyRNA*)&rna_MetaBallElements_new_element
};

PointerPropertyRNA rna_MetaBallElements_remove_element = {
	{NULL, NULL,
	-1, "element", 262148, "",
	"The element to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaElement
};

FunctionRNA rna_MetaBallElements_remove_func = {
	{NULL, (FunctionRNA*)&rna_MetaBallElements_new_func,
	NULL,
	{(PropertyRNA*)&rna_MetaBallElements_remove_element, (PropertyRNA*)&rna_MetaBallElements_remove_element}},
	"remove", 4, "Remove a spline from a curve.",
	MetaBallElements_remove_call,
	NULL
};

StructRNA RNA_MetaBallElements = {
	{(ContainerRNA *)&RNA_MetaElement, (ContainerRNA *)&RNA_MetaBall,
	NULL,
	{(PropertyRNA*)&rna_MetaBallElements_rna_type, (PropertyRNA*)&rna_MetaBallElements_rna_properties}},
	"MetaBallElements"	, NULL,NULL
, 0, "Meta Elements", "Collection of metaball elements",
	17,
	NULL, (PropertyRNA*)&rna_MetaBallElements_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_MetaBallElements_new_func, (FunctionRNA*)&rna_MetaBallElements_remove_func}
};

/* Meta Element */
PointerPropertyRNA rna_MetaElement_rna_type = {
	{(PropertyRNA*)&rna_MetaElement_hide, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_MetaElement_hide = {
	{(PropertyRNA*)&rna_MetaElement_co, (PropertyRNA*)&rna_MetaElement_rna_type,
	-1, "hide", 3, "Hide",
	"Hide element",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MetaElement_hide_get, MetaElement_hide_set, NULL, NULL, 0, NULL
};

static float rna_MetaElement_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaElement_co = {
	{(PropertyRNA*)&rna_MetaElement_use_negative, (PropertyRNA*)&rna_MetaElement_hide,
	-1, "co", 8195, "Location",
	"",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaElem, x), 4, NULL},
	NULL, NULL, MetaElement_co_get, MetaElement_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaElement_co_default
};

BooleanPropertyRNA rna_MetaElement_use_negative = {
	{(PropertyRNA*)&rna_MetaElement_rna_properties, (PropertyRNA*)&rna_MetaElement_co,
	-1, "use_negative", 3, "Negative",
	"Set metaball as negative one",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MetaElement_use_negative_get, MetaElement_use_negative_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MetaElement_rna_properties = {
	{(PropertyRNA*)&rna_MetaElement_radius, (PropertyRNA*)&rna_MetaElement_use_negative,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MetaElement_rna_properties_begin, MetaElement_rna_properties_next, MetaElement_rna_properties_end, MetaElement_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_MetaElement_radius = {
	{(PropertyRNA*)&rna_MetaElement_rotation, (PropertyRNA*)&rna_MetaElement_rna_properties,
	-1, "radius", 8195, "Radius",
	"",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaElem, rad), 4, NULL},
	MetaElement_radius_get, MetaElement_radius_set, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_MetaElement_rotation_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MetaElement_rotation = {
	{(PropertyRNA*)&rna_MetaElement_size_x, (PropertyRNA*)&rna_MetaElement_radius,
	-1, "rotation", 8195, "Rotation",
	"Normalized quaternion rotation",
	0,
	PROP_FLOAT, PROP_QUATERNION|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_MetaBall_update_rotation, 0, NULL, NULL,
	offsetof(MetaElem, quat), 4, NULL},
	NULL, NULL, MetaElement_rotation_get, MetaElement_rotation_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MetaElement_rotation_default
};

FloatPropertyRNA rna_MetaElement_size_x = {
	{(PropertyRNA*)&rna_MetaElement_size_y, (PropertyRNA*)&rna_MetaElement_rotation,
	-1, "size_x", 8195, "Size X",
	"Size of element, use of components depends on element type",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaElem, expx), 4, NULL},
	MetaElement_size_x_get, MetaElement_size_x_set, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MetaElement_size_y = {
	{(PropertyRNA*)&rna_MetaElement_size_z, (PropertyRNA*)&rna_MetaElement_size_x,
	-1, "size_y", 8195, "Size Y",
	"Size of element, use of components depends on element type",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaElem, expy), 4, NULL},
	MetaElement_size_y_get, MetaElement_size_y_set, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MetaElement_size_z = {
	{(PropertyRNA*)&rna_MetaElement_stiffness, (PropertyRNA*)&rna_MetaElement_size_y,
	-1, "size_z", 8195, "Size Z",
	"Size of element, use of components depends on element type",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaElem, expz), 4, NULL},
	MetaElement_size_z_get, MetaElement_size_z_set, NULL, NULL, NULL, 0.0f, 20.0f, 0.0f, 20.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MetaElement_stiffness = {
	{(PropertyRNA*)&rna_MetaElement_type, (PropertyRNA*)&rna_MetaElement_size_z,
	-1, "stiffness", 8195, "Stiffness",
	"Stiffness defines how much of the element to fill",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	offsetof(MetaElem, s), 4, NULL},
	MetaElement_stiffness_get, MetaElement_stiffness_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_MetaElement_type_items[6] = {
	{0, "BALL", 308, "Ball", ""},
	{4, "CAPSULE", 310, "Capsule", ""},
	{5, "PLANE", 306, "Plane", ""},
	{6, "ELLIPSOID", 309, "Ellipsoid", ""},
	{7, "CUBE", 307, "Cube", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MetaElement_type = {
	{NULL, (PropertyRNA*)&rna_MetaElement_stiffness,
	-1, "type", 3, "Type",
	"Metaball types",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MetaBall_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MetaElement_type_get, MetaElement_type_set, NULL, rna_MetaElement_type_items, 5, 0
};

StructRNA RNA_MetaElement = {
	{(ContainerRNA *)&RNA_MetaSequence, (ContainerRNA *)&RNA_MetaBallElements,
	NULL,
	{(PropertyRNA*)&rna_MetaElement_rna_type, (PropertyRNA*)&rna_MetaElement_type}},
	"MetaElement"	, NULL,NULL
, 0, "Meta Element", "Blobby element in a MetaBall datablock",
	264,
	NULL, (PropertyRNA*)&rna_MetaElement_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

