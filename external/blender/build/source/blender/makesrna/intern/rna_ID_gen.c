
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

#include "rna_ID.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_AnyType_rna_type;
CollectionPropertyRNA rna_AnyType_rna_properties;


PointerPropertyRNA rna_ID_rna_type;
StringPropertyRNA rna_ID_name;
BooleanPropertyRNA rna_ID_use_fake_user;
PointerPropertyRNA rna_ID_library;
CollectionPropertyRNA rna_ID_rna_properties;
BooleanPropertyRNA rna_ID_tag;
IntPropertyRNA rna_ID_users;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_IDMaterials_rna_type;
CollectionPropertyRNA rna_IDMaterials_rna_properties;

extern FunctionRNA rna_IDMaterials_append_func;
extern PointerPropertyRNA rna_IDMaterials_append_material;

extern FunctionRNA rna_IDMaterials_pop_func;
extern IntPropertyRNA rna_IDMaterials_pop_index;
extern PointerPropertyRNA rna_IDMaterials_pop_material;



extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

StringPropertyRNA rna_Library_filepath;
PointerPropertyRNA rna_Library_parent;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_PropertyGroup_rna_type;
StringPropertyRNA rna_PropertyGroup_name;
CollectionPropertyRNA rna_PropertyGroup_rna_properties;


PointerPropertyRNA rna_PropertyGroupItem_rna_type;
CollectionPropertyRNA rna_PropertyGroupItem_rna_properties;
CollectionPropertyRNA rna_PropertyGroupItem_collection;
FloatPropertyRNA rna_PropertyGroupItem_double;
FloatPropertyRNA rna_PropertyGroupItem_double_array;
FloatPropertyRNA rna_PropertyGroupItem_float;
FloatPropertyRNA rna_PropertyGroupItem_float_array;
PointerPropertyRNA rna_PropertyGroupItem_group;
CollectionPropertyRNA rna_PropertyGroupItem_idp_array;
IntPropertyRNA rna_PropertyGroupItem_int;
IntPropertyRNA rna_PropertyGroupItem_int_array;
StringPropertyRNA rna_PropertyGroupItem_string;


PointerPropertyRNA rna_UnknownType_rna_type;
CollectionPropertyRNA rna_UnknownType_rna_properties;

PointerRNA AnyType_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA AnyType_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnyType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_AnyType_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= AnyType_rna_properties_get(iter);
}

void AnyType_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= AnyType_rna_properties_get(iter);
}

void AnyType_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ID_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ID_name_get(PointerRNA *ptr, char *value)
{
	rna_ID_name_get(ptr, value);
}

int ID_name_length(PointerRNA *ptr)
{
	return rna_ID_name_length(ptr);
}

void ID_name_set(PointerRNA *ptr, const char *value)
{
	rna_ID_name_set(ptr, value);
}

int ID_use_fake_user_get(PointerRNA *ptr)
{
	ID *data= (ID*)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void ID_use_fake_user_set(PointerRNA *ptr, int value)
{
	rna_ID_fake_user_set(ptr, value);
}

PointerRNA ID_library_get(PointerRNA *ptr)
{
	ID *data= (ID*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Library, data->lib);
}

static PointerRNA ID_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ID_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ID_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ID_rna_properties_get(iter);
}

void ID_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ID_rna_properties_get(iter);
}

void ID_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ID_tag_get(PointerRNA *ptr)
{
	ID *data= (ID*)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void ID_tag_set(PointerRNA *ptr, int value)
{
	ID *data= (ID*)(ptr->data);
	if(value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int ID_users_get(PointerRNA *ptr)
{
	ID *data= (ID*)(ptr->data);
	return (int)(data->us);
}

PointerRNA IDMaterials_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA IDMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void IDMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_IDMaterials_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= IDMaterials_rna_properties_get(iter);
}

void IDMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= IDMaterials_rna_properties_get(iter);
}

void IDMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void Library_filepath_get(PointerRNA *ptr, char *value)
{
	Library *data= (Library*)(ptr->data);
	BLI_strncpy(value, data->name, 240);
}

int Library_filepath_length(PointerRNA *ptr)
{
	Library *data= (Library*)(ptr->data);
	return strlen(data->name);
}

void Library_filepath_set(PointerRNA *ptr, const char *value)
{
	Library *data= (Library*)(ptr->data);
	BLI_strncpy(data->name, value, 240);
}

PointerRNA Library_parent_get(PointerRNA *ptr)
{
	Library *data= (Library*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Library, data->parent);
}

PointerRNA PropertyGroup_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA PropertyGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PropertyGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_PropertyGroup_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= PropertyGroup_rna_properties_get(iter);
}

void PropertyGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= PropertyGroup_rna_properties_get(iter);
}

void PropertyGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA PropertyGroupItem_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA PropertyGroupItem_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PropertyGroupItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_PropertyGroupItem_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= PropertyGroupItem_rna_properties_get(iter);
}

void PropertyGroupItem_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= PropertyGroupItem_rna_properties_get(iter);
}

void PropertyGroupItem_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA PropertyGroupItem_idp_array_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_PropertyGroup, rna_iterator_array_get(iter));
}

void PropertyGroupItem_idp_array_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_PropertyGroupItem_idp_array;

	rna_IDPArray_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= PropertyGroupItem_idp_array_get(iter);
}

void PropertyGroupItem_idp_array_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= PropertyGroupItem_idp_array_get(iter);
}

void PropertyGroupItem_idp_array_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

PointerRNA UnknownType_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA UnknownType_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UnknownType_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_UnknownType_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= UnknownType_rna_properties_get(iter);
}

void UnknownType_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= UnknownType_rna_properties_get(iter);
}

void UnknownType_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}


void ID_copy_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct ID *id;
	char *_data, *_retdata;
	
	_self= (struct ID *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	
	id= rna_ID_copy(_self);
	*((struct ID**)_retdata)= id;
}

void ID_user_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self= (struct ID *)_ptr->data;
	
	rna_ID_user_clear(_self);
}

void ID_animation_data_create_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct AnimData *anim_data;
	char *_data, *_retdata;
	
	_self= (struct ID *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	
	anim_data= BKE_id_add_animdata(_self);
	*((struct AnimData**)_retdata)= anim_data;
}

void ID_animation_data_clear_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	_self= (struct ID *)_ptr->data;
	
	BKE_free_animdata(_self);
}

void ID_update_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	int refresh;
	char *_data;
	
	_self= (struct ID *)_ptr->data;
	_data= (char *)_parms->data;
	refresh= *((int*)_data);
	
	rna_ID_update_tag(_self, reports, refresh);
}

/* Repeated prototypes to detect errors */

struct ID *rna_ID_copy(struct ID *_self);
void rna_ID_user_clear(struct ID *_self);
struct AnimData *BKE_id_add_animdata(struct ID *_self);
void BKE_free_animdata(struct ID *_self);
void rna_ID_update_tag(struct ID *_self, ReportList *reports, int refresh);

void IDMaterials_append_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	struct Material *material;
	char *_data;
	
	_self= (struct ID *)_ptr->data;
	_data= (char *)_parms->data;
	material= *((struct Material**)_data);
	
	material_append_id(_self, material);
}

void IDMaterials_pop_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_self;
	int index;
	struct Material *material;
	char *_data, *_retdata;
	
	_self= (struct ID *)_ptr->data;
	_data= (char *)_parms->data;
	index= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	material= material_pop_id(_self, index);
	*((struct Material**)_retdata)= material;
}

/* Repeated prototypes to detect errors */

void material_append_id(struct ID *_self, struct Material *material);
struct Material *material_pop_id(struct ID *_self, int index);





/* Any Type */
PointerPropertyRNA rna_AnyType_rna_type = {
	{(PropertyRNA*)&rna_AnyType_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnyType_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_AnyType_rna_properties = {
	{NULL, (PropertyRNA*)&rna_AnyType_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnyType_rna_properties_begin, AnyType_rna_properties_next, AnyType_rna_properties_end, AnyType_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_AnyType = {
	{(ContainerRNA *)&RNA_Area, (ContainerRNA *)&RNA_AnimVizOnionSkinning,
	NULL,
	{(PropertyRNA*)&rna_AnyType_rna_type, (PropertyRNA*)&rna_AnyType_rna_properties}},
	"AnyType"	, NULL,NULL
, 0, "Any Type", "RNA type used for pointers to any possible data",
	17,
	NULL, (PropertyRNA*)&rna_AnyType_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* ID */
PointerPropertyRNA rna_ID_rna_type = {
	{(PropertyRNA*)&rna_ID_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ID_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ID_name = {
	{(PropertyRNA*)&rna_ID_use_fake_user, (PropertyRNA*)&rna_ID_rna_type,
	-1, "name", 1, "Name",
	"Unique datablock ID name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {24, 0, 0}, 0,
	NULL, 301989893, rna_ID_name_editable, NULL,
	0, -1, NULL},
	ID_name_get, ID_name_length, ID_name_set, 22, ""
};

BooleanPropertyRNA rna_ID_use_fake_user = {
	{(PropertyRNA*)&rna_ID_library, (PropertyRNA*)&rna_ID_name,
	-1, "use_fake_user", 3, "Fake User",
	"Saves this datablock even if it has no users",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ID_use_fake_user_get, ID_use_fake_user_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ID_library = {
	{(PropertyRNA*)&rna_ID_rna_properties, (PropertyRNA*)&rna_ID_use_fake_user,
	-1, "library", 64, "Library",
	"Library file the datablock is linked from",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ID_library_get, NULL, NULL, NULL,&RNA_Library
};

CollectionPropertyRNA rna_ID_rna_properties = {
	{(PropertyRNA*)&rna_ID_tag, (PropertyRNA*)&rna_ID_library,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ID_rna_properties_begin, ID_rna_properties_next, ID_rna_properties_end, ID_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_ID_tag = {
	{(PropertyRNA*)&rna_ID_users, (PropertyRNA*)&rna_ID_rna_properties,
	-1, "tag", 65539, "Tag",
	"Tools can use this to tag data, (initial state is undefined)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ID_tag_get, ID_tag_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ID_users = {
	{NULL, (PropertyRNA*)&rna_ID_tag,
	-1, "users", 8194, "Users",
	"Number of times this datablock is referenced",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ID, us), 1, NULL},
	ID_users_get, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_ID_copy_id = {
	{NULL, NULL,
	-1, "id", 8, "",
	"New copy of the ID.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

FunctionRNA rna_ID_copy_func = {
	{(FunctionRNA*)&rna_ID_user_clear_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ID_copy_id, (PropertyRNA*)&rna_ID_copy_id}},
	"copy", 0, "Create a copy of this datablock (not supported for all datablocks).",
	ID_copy_call,
	(PropertyRNA*)&rna_ID_copy_id
};

FunctionRNA rna_ID_user_clear_func = {
	{(FunctionRNA*)&rna_ID_animation_data_create_func, (FunctionRNA*)&rna_ID_copy_func,
	NULL,
	{NULL, NULL}},
	"user_clear", 0, "Clears the user count of a datablock so its not saved, on reload the data will be removed.",
	ID_user_clear_call,
	NULL
};

PointerPropertyRNA rna_ID_animation_data_create_anim_data = {
	{NULL, NULL,
	-1, "anim_data", 8, "",
	"New animation data or NULL.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_AnimData
};

FunctionRNA rna_ID_animation_data_create_func = {
	{(FunctionRNA*)&rna_ID_animation_data_clear_func, (FunctionRNA*)&rna_ID_user_clear_func,
	NULL,
	{(PropertyRNA*)&rna_ID_animation_data_create_anim_data, (PropertyRNA*)&rna_ID_animation_data_create_anim_data}},
	"animation_data_create", 0, "Create animation data to this ID, note that not all ID types support this.",
	ID_animation_data_create_call,
	(PropertyRNA*)&rna_ID_animation_data_create_anim_data
};

FunctionRNA rna_ID_animation_data_clear_func = {
	{(FunctionRNA*)&rna_ID_update_tag_func, (FunctionRNA*)&rna_ID_animation_data_create_func,
	NULL,
	{NULL, NULL}},
	"animation_data_clear", 0, "Clear animation on this this ID.",
	ID_animation_data_clear_call,
	NULL
};

static EnumPropertyItem rna_ID_update_tag_refresh_items[4] = {
	{1, "OBJECT", 0, "Object", ""},
	{2, "DATA", 0, "Data", ""},
	{4, "TIME", 0, "Time", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ID_update_tag_refresh = {
	{NULL, NULL,
	-1, "refresh", 2097155, "",
	"Type of updates to perform.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_ID_update_tag_refresh_items, 3, 0
};

FunctionRNA rna_ID_update_tag_func = {
	{NULL, (FunctionRNA*)&rna_ID_animation_data_clear_func,
	NULL,
	{(PropertyRNA*)&rna_ID_update_tag_refresh, (PropertyRNA*)&rna_ID_update_tag_refresh}},
	"update_tag", 4, "Tag the id to update its display data.",
	ID_update_tag_call,
	NULL
};

StructRNA RNA_ID = {
	{(ContainerRNA *)&RNA_IDMaterials, (ContainerRNA *)&RNA_HookModifier,
	NULL,
	{(PropertyRNA*)&rna_ID_rna_type, (PropertyRNA*)&rna_ID_users}},
	"ID"	, NULL,NULL
, 3, "ID", "Base type for datablocks, defining a unique name, linking from other libraries and garbage collection",
	17,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	NULL,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA*)&rna_ID_copy_func, (FunctionRNA*)&rna_ID_update_tag_func}
};

/* ID Materials */
PointerPropertyRNA rna_IDMaterials_rna_type = {
	{(PropertyRNA*)&rna_IDMaterials_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IDMaterials_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_IDMaterials_rna_properties = {
	{NULL, (PropertyRNA*)&rna_IDMaterials_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IDMaterials_rna_properties_begin, IDMaterials_rna_properties_next, IDMaterials_rna_properties_end, IDMaterials_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_IDMaterials_append_material = {
	{NULL, NULL,
	-1, "material", 4, "",
	"Material to add.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_IDMaterials_append_func = {
	{(FunctionRNA*)&rna_IDMaterials_pop_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_IDMaterials_append_material, (PropertyRNA*)&rna_IDMaterials_append_material}},
	"append", 0, "Add a new material to Mesh.",
	IDMaterials_append_call,
	NULL
};

IntPropertyRNA rna_IDMaterials_pop_index = {
	{(PropertyRNA*)&rna_IDMaterials_pop_material, NULL,
	-1, "index", 7, "",
	"Frame number to set.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_IDMaterials_pop_material = {
	{NULL, (PropertyRNA*)&rna_IDMaterials_pop_index,
	-1, "material", 8, "",
	"Material to add.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_IDMaterials_pop_func = {
	{NULL, (FunctionRNA*)&rna_IDMaterials_append_func,
	NULL,
	{(PropertyRNA*)&rna_IDMaterials_pop_index, (PropertyRNA*)&rna_IDMaterials_pop_material}},
	"pop", 0, "Add a new material to Mesh.",
	IDMaterials_pop_call,
	(PropertyRNA*)&rna_IDMaterials_pop_material
};

StructRNA RNA_IDMaterials = {
	{(ContainerRNA *)&RNA_IKParam, (ContainerRNA *)&RNA_ID,
	NULL,
	{(PropertyRNA*)&rna_IDMaterials_rna_type, (PropertyRNA*)&rna_IDMaterials_rna_properties}},
	"IDMaterials"	, NULL,NULL
, 0, "ID Materials", "Collection of materials",
	17,
	NULL, (PropertyRNA*)&rna_IDMaterials_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_IDMaterials_append_func, (FunctionRNA*)&rna_IDMaterials_pop_func}
};

/* Library */
StringPropertyRNA rna_Library_filepath = {
	{(PropertyRNA*)&rna_Library_parent, NULL,
	-1, "filepath", 1, "File Path",
	"Path to the library .blend file",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {240, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Library_filepath_get, Library_filepath_length, Library_filepath_set, 240, ""
};

PointerPropertyRNA rna_Library_parent = {
	{NULL, (PropertyRNA*)&rna_Library_filepath,
	-1, "parent", 64, "Parent",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Library_parent_get, NULL, NULL, NULL,&RNA_Library
};

StructRNA RNA_Library = {
	{(ContainerRNA *)&RNA_LimitDistanceConstraint, (ContainerRNA *)&RNA_LatticePoint,
	NULL,
	{(PropertyRNA*)&rna_Library_filepath, (PropertyRNA*)&rna_Library_parent}},
	"Library"	, NULL,NULL
, 3, "Library", "External .blend file from which data is linked",
	170,
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

/* ID Property Group */
PointerPropertyRNA rna_PropertyGroup_rna_type = {
	{(PropertyRNA*)&rna_PropertyGroup_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PropertyGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PropertyGroup_name = {
	{(PropertyRNA*)&rna_PropertyGroup_rna_properties, (PropertyRNA*)&rna_PropertyGroup_rna_type,
	-1, "name", 1281, "Name",
	"Unique name used in the code and scripting",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

CollectionPropertyRNA rna_PropertyGroup_rna_properties = {
	{NULL, (PropertyRNA*)&rna_PropertyGroup_name,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PropertyGroup_rna_properties_begin, PropertyGroup_rna_properties_next, PropertyGroup_rna_properties_end, PropertyGroup_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_PropertyGroup = {
	{(ContainerRNA *)&RNA_PropertyGroupItem, (ContainerRNA *)&RNA_PropertyActuator,
	NULL,
	{(PropertyRNA*)&rna_PropertyGroup_rna_type, (PropertyRNA*)&rna_PropertyGroup_rna_properties}},
	"PropertyGroup"	, NULL,NULL
, 0, "ID Property Group", "Group of ID properties",
	17,
	(PropertyRNA*)&rna_PropertyGroup_name, (PropertyRNA*)&rna_PropertyGroup_rna_properties,
	NULL,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

/* ID Property */
PointerPropertyRNA rna_PropertyGroupItem_rna_type = {
	{(PropertyRNA*)&rna_PropertyGroupItem_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PropertyGroupItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_PropertyGroupItem_rna_properties = {
	{(PropertyRNA*)&rna_PropertyGroupItem_collection, (PropertyRNA*)&rna_PropertyGroupItem_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PropertyGroupItem_rna_properties_begin, PropertyGroupItem_rna_properties_next, PropertyGroupItem_rna_properties_end, PropertyGroupItem_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_PropertyGroupItem_collection = {
	{(PropertyRNA*)&rna_PropertyGroupItem_double, (PropertyRNA*)&rna_PropertyGroupItem_rna_properties,
	-1, "collection", 1280, "collection",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, &RNA_PropertyGroup
};

FloatPropertyRNA rna_PropertyGroupItem_double = {
	{(PropertyRNA*)&rna_PropertyGroupItem_double_array, (PropertyRNA*)&rna_PropertyGroupItem_collection,
	-1, "double", 1283, "double",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_PropertyGroupItem_double_array_default[1] = {
	0.0f
};

FloatPropertyRNA rna_PropertyGroupItem_double_array = {
	{(PropertyRNA*)&rna_PropertyGroupItem_float, (PropertyRNA*)&rna_PropertyGroupItem_double,
	-1, "double_array", 1283, "double_array",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PropertyGroupItem_double_array_default
};

FloatPropertyRNA rna_PropertyGroupItem_float = {
	{(PropertyRNA*)&rna_PropertyGroupItem_float_array, (PropertyRNA*)&rna_PropertyGroupItem_double_array,
	-1, "float", 1283, "float",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_PropertyGroupItem_float_array_default[1] = {
	0.0f
};

FloatPropertyRNA rna_PropertyGroupItem_float_array = {
	{(PropertyRNA*)&rna_PropertyGroupItem_group, (PropertyRNA*)&rna_PropertyGroupItem_float,
	-1, "float_array", 1283, "float_array",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_PropertyGroupItem_float_array_default
};

PointerPropertyRNA rna_PropertyGroupItem_group = {
	{(PropertyRNA*)&rna_PropertyGroupItem_idp_array, (PropertyRNA*)&rna_PropertyGroupItem_float_array,
	-1, "group", 1280, "group",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_PropertyGroup
};

CollectionPropertyRNA rna_PropertyGroupItem_idp_array = {
	{(PropertyRNA*)&rna_PropertyGroupItem_int, (PropertyRNA*)&rna_PropertyGroupItem_group,
	-1, "idp_array", 17664, "idp_array",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PropertyGroupItem_idp_array_begin, PropertyGroupItem_idp_array_next, PropertyGroupItem_idp_array_end, PropertyGroupItem_idp_array_get, rna_IDPArray_length, NULL, NULL, &RNA_PropertyGroup
};

IntPropertyRNA rna_PropertyGroupItem_int = {
	{(PropertyRNA*)&rna_PropertyGroupItem_int_array, (PropertyRNA*)&rna_PropertyGroupItem_idp_array,
	-1, "int", 1283, "int",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static int rna_PropertyGroupItem_int_array_default[1] = {
	0
};

IntPropertyRNA rna_PropertyGroupItem_int_array = {
	{(PropertyRNA*)&rna_PropertyGroupItem_string, (PropertyRNA*)&rna_PropertyGroupItem_int,
	-1, "int_array", 1283, "int_array",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_PropertyGroupItem_int_array_default
};

StringPropertyRNA rna_PropertyGroupItem_string = {
	{NULL, (PropertyRNA*)&rna_PropertyGroupItem_int_array,
	-1, "string", 1281, "string",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

StructRNA RNA_PropertyGroupItem = {
	{(ContainerRNA *)&RNA_PropertySensor, (ContainerRNA *)&RNA_PropertyGroup,
	NULL,
	{(PropertyRNA*)&rna_PropertyGroupItem_rna_type, (PropertyRNA*)&rna_PropertyGroupItem_string}},
	"PropertyGroupItem"	, NULL,NULL
, 0, "ID Property", "Property that stores arbitrary, user defined properties",
	17,
	NULL, (PropertyRNA*)&rna_PropertyGroupItem_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Unknown Type */
PointerPropertyRNA rna_UnknownType_rna_type = {
	{(PropertyRNA*)&rna_UnknownType_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnknownType_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_UnknownType_rna_properties = {
	{NULL, (PropertyRNA*)&rna_UnknownType_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UnknownType_rna_properties_begin, UnknownType_rna_properties_next, UnknownType_rna_properties_end, UnknownType_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_UnknownType = {
	{(ContainerRNA *)&RNA_UserPreferences, (ContainerRNA *)&RNA_UnitSettings,
	NULL,
	{(PropertyRNA*)&rna_UnknownType_rna_type, (PropertyRNA*)&rna_UnknownType_rna_properties}},
	"UnknownType"	, NULL,NULL
, 0, "Unknown Type", "Stub RNA type used for pointers to unknown or internal data",
	17,
	NULL, (PropertyRNA*)&rna_UnknownType_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

#include "rna_define.c"

BlenderRNA BLENDER_RNA = {{&RNA_Action, &RNA_XorController}};

