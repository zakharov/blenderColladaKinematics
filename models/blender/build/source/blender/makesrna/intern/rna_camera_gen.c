
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

#include "rna_camera.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

FloatPropertyRNA rna_Camera_angle;
PointerPropertyRNA rna_Camera_animation_data;
FloatPropertyRNA rna_Camera_clip_end;
FloatPropertyRNA rna_Camera_clip_start;
FloatPropertyRNA rna_Camera_dof_distance;
PointerPropertyRNA rna_Camera_dof_object;
FloatPropertyRNA rna_Camera_draw_size;
FloatPropertyRNA rna_Camera_lens;
EnumPropertyRNA rna_Camera_lens_unit;
FloatPropertyRNA rna_Camera_ortho_scale;
BooleanPropertyRNA rna_Camera_use_panorama;
FloatPropertyRNA rna_Camera_passepartout_alpha;
FloatPropertyRNA rna_Camera_shift_x;
FloatPropertyRNA rna_Camera_shift_y;
BooleanPropertyRNA rna_Camera_show_limits;
BooleanPropertyRNA rna_Camera_show_mist;
BooleanPropertyRNA rna_Camera_show_name;
BooleanPropertyRNA rna_Camera_show_passepartout;
BooleanPropertyRNA rna_Camera_show_title_safe;
EnumPropertyRNA rna_Camera_type;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


float Camera_angle_get(PointerRNA *ptr)
{
	return rna_Camera_angle_get(ptr);
}

void Camera_angle_set(PointerRNA *ptr, float value)
{
	rna_Camera_angle_set(ptr, value);
}

PointerRNA Camera_animation_data_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

float Camera_clip_end_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->clipend);
}

void Camera_clip_end_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->clipend= CLAMPIS(value, 1.0f, FLT_MAX);
}

float Camera_clip_start_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->clipsta);
}

void Camera_clip_start_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->clipsta= CLAMPIS(value, 0.0f, FLT_MAX);
}

float Camera_dof_distance_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->YF_dofdist);
}

void Camera_dof_distance_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->YF_dofdist= CLAMPIS(value, 0.0f, 5000.0f);
}

PointerRNA Camera_dof_object_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->dof_ob);
}

void Camera_dof_object_set(PointerRNA *ptr, PointerRNA value)
{
	Camera *data= (Camera*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->dof_ob= value.data;
}

float Camera_draw_size_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->drawsize);
}

void Camera_draw_size_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->drawsize= CLAMPIS(value, 0.0099999998f, 1000.0f);
}

float Camera_lens_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->lens);
}

void Camera_lens_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->lens= CLAMPIS(value, 1.0f, 5000.0f);
}

int Camera_lens_unit_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return ((data->flag) & 32);
}

void Camera_lens_unit_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	data->flag &= ~32;
	data->flag |= value;
}

float Camera_ortho_scale_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->ortho_scale);
}

void Camera_ortho_scale_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->ortho_scale= CLAMPIS(value, 0.0099999998f, 1000.0f);
}

int Camera_use_panorama_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void Camera_use_panorama_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

float Camera_passepartout_alpha_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->passepartalpha);
}

void Camera_passepartout_alpha_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->passepartalpha= CLAMPIS(value, 0.0f, 1.0f);
}

float Camera_shift_x_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->shiftx);
}

void Camera_shift_x_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->shiftx= CLAMPIS(value, -10.0f, 10.0f);
}

float Camera_shift_y_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (float)(data->shifty);
}

void Camera_shift_y_set(PointerRNA *ptr, float value)
{
	Camera *data= (Camera*)(ptr->data);
	data->shifty= CLAMPIS(value, -10.0f, 10.0f);
}

int Camera_show_limits_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Camera_show_limits_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int Camera_show_mist_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void Camera_show_mist_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int Camera_show_name_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void Camera_show_name_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

int Camera_show_passepartout_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Camera_show_passepartout_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int Camera_show_title_safe_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void Camera_show_title_safe_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int Camera_type_get(PointerRNA *ptr)
{
	Camera *data= (Camera*)(ptr->data);
	return (int)(data->type);
}

void Camera_type_set(PointerRNA *ptr, int value)
{
	Camera *data= (Camera*)(ptr->data);
	data->type= value;
}


/* Camera */
FloatPropertyRNA rna_Camera_angle = {
	{(PropertyRNA*)&rna_Camera_animation_data, NULL,
	-1, "angle", 1, "Angle",
	"Perspective Camera lens field of view in degrees",
	0,
	PROP_FLOAT, PROP_ANGLE|PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_angle_get, Camera_angle_set, NULL, NULL, NULL, 0.0064053582f, 3.0167491436f, 0.0064053582f, 3.0167491436f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Camera_animation_data = {
	{(PropertyRNA*)&rna_Camera_clip_end, (PropertyRNA*)&rna_Camera_angle,
	-1, "animation_data", 0, "Animation Data",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Camera_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

FloatPropertyRNA rna_Camera_clip_end = {
	{(PropertyRNA*)&rna_Camera_clip_start, (PropertyRNA*)&rna_Camera_animation_data,
	-1, "clip_end", 8195, "Clip End",
	"Camera far clipping distance",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, clipend), 4, NULL},
	Camera_clip_end_get, Camera_clip_end_set, NULL, NULL, NULL, 1.0f, FLT_MAX, 1.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_clip_start = {
	{(PropertyRNA*)&rna_Camera_dof_distance, (PropertyRNA*)&rna_Camera_clip_end,
	-1, "clip_start", 8195, "Clip Start",
	"Camera near clipping distance",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, clipsta), 4, NULL},
	Camera_clip_start_get, Camera_clip_start_set, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_dof_distance = {
	{(PropertyRNA*)&rna_Camera_dof_object, (PropertyRNA*)&rna_Camera_clip_start,
	-1, "dof_distance", 8195, "DOF Distance",
	"Distance to the focus point for depth of field",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, YF_dofdist), 4, NULL},
	Camera_dof_distance_get, Camera_dof_distance_set, NULL, NULL, NULL, 0.0f, 5000.0f, 0.0f, 5000.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Camera_dof_object = {
	{(PropertyRNA*)&rna_Camera_draw_size, (PropertyRNA*)&rna_Camera_dof_distance,
	-1, "dof_object", 1, "DOF Object",
	"Use this object to define the depth of field focal point",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_dof_object_get, Camera_dof_object_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_Camera_draw_size = {
	{(PropertyRNA*)&rna_Camera_lens, (PropertyRNA*)&rna_Camera_dof_object,
	-1, "draw_size", 8195, "Draw Size",
	"Apparent size of the Camera object in the 3D View",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, drawsize), 4, NULL},
	Camera_draw_size_get, Camera_draw_size_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 1000.0f, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_lens = {
	{(PropertyRNA*)&rna_Camera_lens_unit, (PropertyRNA*)&rna_Camera_draw_size,
	-1, "lens", 8195, "Focal Length",
	"Perspective Camera lens value in millimeters",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, lens), 4, NULL},
	Camera_lens_get, Camera_lens_set, NULL, NULL, NULL, 1.0f, 5000.0f, 1.0f, 5000.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_Camera_lens_unit_items[3] = {
	{0, "MILLIMETERS", 0, "Millimeters", ""},
	{32, "DEGREES", 0, "Degrees", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Camera_lens_unit = {
	{(PropertyRNA*)&rna_Camera_ortho_scale, (PropertyRNA*)&rna_Camera_lens,
	-1, "lens_unit", 3, "Lens Unit",
	"Unit to edit lens in for the user interface",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Camera_lens_unit_get, Camera_lens_unit_set, NULL, rna_Camera_lens_unit_items, 2, 0
};

FloatPropertyRNA rna_Camera_ortho_scale = {
	{(PropertyRNA*)&rna_Camera_use_panorama, (PropertyRNA*)&rna_Camera_lens_unit,
	-1, "ortho_scale", 8195, "Orthographic Scale",
	"Orthographic Camera scale (similar to zoom)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, ortho_scale), 4, NULL},
	Camera_ortho_scale_get, Camera_ortho_scale_set, NULL, NULL, NULL, 0.0099999998f, 1000.0f, 0.0099999998f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Camera_use_panorama = {
	{(PropertyRNA*)&rna_Camera_passepartout_alpha, (PropertyRNA*)&rna_Camera_ortho_scale,
	-1, "use_panorama", 3, "Panorama",
	"Render the scene with a cylindrical camera for pseudo-fisheye lens effects",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_use_panorama_get, Camera_use_panorama_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Camera_passepartout_alpha = {
	{(PropertyRNA*)&rna_Camera_shift_x, (PropertyRNA*)&rna_Camera_use_panorama,
	-1, "passepartout_alpha", 8195, "Passepartout Alpha",
	"Opacity (alpha) of the darkened overlay in Camera view",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, passepartalpha), 4, NULL},
	Camera_passepartout_alpha_get, Camera_passepartout_alpha_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_shift_x = {
	{(PropertyRNA*)&rna_Camera_shift_y, (PropertyRNA*)&rna_Camera_passepartout_alpha,
	-1, "shift_x", 8195, "Shift X",
	"Perspective Camera horizontal shift",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, shiftx), 4, NULL},
	Camera_shift_x_get, Camera_shift_x_set, NULL, NULL, NULL, -2.0f, 2.0f, -10.0f, 10.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Camera_shift_y = {
	{(PropertyRNA*)&rna_Camera_show_limits, (PropertyRNA*)&rna_Camera_shift_x,
	-1, "shift_y", 8195, "Shift Y",
	"Perspective Camera vertical shift",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Camera, shifty), 4, NULL},
	Camera_shift_y_get, Camera_shift_y_set, NULL, NULL, NULL, -2.0f, 2.0f, -10.0f, 10.0f, 1.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Camera_show_limits = {
	{(PropertyRNA*)&rna_Camera_show_mist, (PropertyRNA*)&rna_Camera_shift_y,
	-1, "show_limits", 3, "Show Limits",
	"Draw the clipping range and focus point on the camera",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_show_limits_get, Camera_show_limits_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Camera_show_mist = {
	{(PropertyRNA*)&rna_Camera_show_name, (PropertyRNA*)&rna_Camera_show_limits,
	-1, "show_mist", 3, "Show Mist",
	"Draw a line from the Camera to indicate the mist area",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_show_mist_get, Camera_show_mist_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Camera_show_name = {
	{(PropertyRNA*)&rna_Camera_show_passepartout, (PropertyRNA*)&rna_Camera_show_mist,
	-1, "show_name", 3, "Show Name",
	"Show the active Camera\'s name in Camera view",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_show_name_get, Camera_show_name_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Camera_show_passepartout = {
	{(PropertyRNA*)&rna_Camera_show_title_safe, (PropertyRNA*)&rna_Camera_show_name,
	-1, "show_passepartout", 3, "Show Passepartout",
	"Show a darkened overlay outside the image area in Camera view",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_show_passepartout_get, Camera_show_passepartout_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Camera_show_title_safe = {
	{(PropertyRNA*)&rna_Camera_type, (PropertyRNA*)&rna_Camera_show_passepartout,
	-1, "show_title_safe", 3, "Show Title Safe",
	"Show indicators for the title safe zone in Camera view",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_show_title_safe_get, Camera_show_title_safe_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Camera_type_items[3] = {
	{0, "PERSP", 0, "Perspective", ""},
	{1, "ORTHO", 0, "Orthographic", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Camera_type = {
	{NULL, (PropertyRNA*)&rna_Camera_show_title_safe,
	-1, "type", 3, "Type",
	"Camera types",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Camera_type_get, Camera_type_set, NULL, rna_Camera_type_items, 2, 0
};

StructRNA RNA_Camera = {
	{(ContainerRNA *)&RNA_CameraActuator, (ContainerRNA *)&RNA_BuildModifier,
	NULL,
	{(PropertyRNA*)&rna_Camera_angle, (PropertyRNA*)&rna_Camera_type}},
	"Camera"	, NULL,NULL
, 3, "Camera", "Camera datablock for storing camera settings",
	168,
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

