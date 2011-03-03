
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

#include "rna_sensor.c"
#include "rna_sensor_api.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

StringPropertyRNA rna_ActuatorSensor_actuator;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

StringPropertyRNA rna_ArmatureSensor_bone;
FloatPropertyRNA rna_ArmatureSensor_value;
StringPropertyRNA rna_ArmatureSensor_constraint;
EnumPropertyRNA rna_ArmatureSensor_test_type;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

BooleanPropertyRNA rna_CollisionSensor_use_material;
StringPropertyRNA rna_CollisionSensor_material;
StringPropertyRNA rna_CollisionSensor_property;
BooleanPropertyRNA rna_CollisionSensor_use_pulse;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

IntPropertyRNA rna_DelaySensor_delay;
IntPropertyRNA rna_DelaySensor_duration;
BooleanPropertyRNA rna_DelaySensor_use_repeat;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

BooleanPropertyRNA rna_JoystickSensor_use_all_events;
EnumPropertyRNA rna_JoystickSensor_axis_direction;
IntPropertyRNA rna_JoystickSensor_axis_number;
IntPropertyRNA rna_JoystickSensor_single_axis_number;
IntPropertyRNA rna_JoystickSensor_axis_threshold;
IntPropertyRNA rna_JoystickSensor_button_number;
EnumPropertyRNA rna_JoystickSensor_event_type;
EnumPropertyRNA rna_JoystickSensor_hat_direction;
IntPropertyRNA rna_JoystickSensor_hat_number;
IntPropertyRNA rna_JoystickSensor_joystick_index;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

BooleanPropertyRNA rna_KeyboardSensor_use_all_keys;
EnumPropertyRNA rna_KeyboardSensor_key;
StringPropertyRNA rna_KeyboardSensor_log;
EnumPropertyRNA rna_KeyboardSensor_modifier_key_1;
EnumPropertyRNA rna_KeyboardSensor_modifier_key_2;
StringPropertyRNA rna_KeyboardSensor_target;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

StringPropertyRNA rna_MessageSensor_subject;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

EnumPropertyRNA rna_MouseSensor_mouse_event;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

FloatPropertyRNA rna_NearSensor_distance;
StringPropertyRNA rna_NearSensor_property;
FloatPropertyRNA rna_NearSensor_reset_distance;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

EnumPropertyRNA rna_PropertySensor_evaluation_type;
StringPropertyRNA rna_PropertySensor_value_max;
StringPropertyRNA rna_PropertySensor_value_min;
StringPropertyRNA rna_PropertySensor_property;
StringPropertyRNA rna_PropertySensor_value;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

FloatPropertyRNA rna_RadarSensor_angle;
EnumPropertyRNA rna_RadarSensor_axis;
FloatPropertyRNA rna_RadarSensor_distance;
StringPropertyRNA rna_RadarSensor_property;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

IntPropertyRNA rna_RandomSensor_seed;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

EnumPropertyRNA rna_RaySensor_axis;
StringPropertyRNA rna_RaySensor_material;
StringPropertyRNA rna_RaySensor_property;
FloatPropertyRNA rna_RaySensor_range;
EnumPropertyRNA rna_RaySensor_ray_type;
BooleanPropertyRNA rna_RaySensor_use_x_ray;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



PointerPropertyRNA rna_Sensor_rna_type;
StringPropertyRNA rna_Sensor_name;
BooleanPropertyRNA rna_Sensor_show_expanded;
IntPropertyRNA rna_Sensor_frequency;
BooleanPropertyRNA rna_Sensor_invert;
BooleanPropertyRNA rna_Sensor_use_level;
BooleanPropertyRNA rna_Sensor_pin;
CollectionPropertyRNA rna_Sensor_rna_properties;
BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
BooleanPropertyRNA rna_Sensor_use_tap;
EnumPropertyRNA rna_Sensor_type;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;



extern PointerPropertyRNA rna_Sensor_rna_type;
extern StringPropertyRNA rna_Sensor_name;
extern BooleanPropertyRNA rna_Sensor_show_expanded;
extern IntPropertyRNA rna_Sensor_frequency;
extern BooleanPropertyRNA rna_Sensor_invert;
extern BooleanPropertyRNA rna_Sensor_use_level;
extern BooleanPropertyRNA rna_Sensor_pin;
extern CollectionPropertyRNA rna_Sensor_rna_properties;
extern BooleanPropertyRNA rna_Sensor_use_pulse_false_level;
extern BooleanPropertyRNA rna_Sensor_use_pulse_true_level;
extern BooleanPropertyRNA rna_Sensor_use_tap;
extern EnumPropertyRNA rna_Sensor_type;

PointerPropertyRNA rna_TouchSensor_material;

extern FunctionRNA rna_Sensor_link_func;
extern PointerPropertyRNA rna_Sensor_link_controller;

extern FunctionRNA rna_Sensor_unlink_func;
extern PointerPropertyRNA rna_Sensor_unlink_controller;


void ActuatorSensor_actuator_get(PointerRNA *ptr, char *value)
{
	bActuatorSensor *data= (bActuatorSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->name, 32);
}

int ActuatorSensor_actuator_length(PointerRNA *ptr)
{
	bActuatorSensor *data= (bActuatorSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->name);
}

void ActuatorSensor_actuator_set(PointerRNA *ptr, const char *value)
{
	bActuatorSensor *data= (bActuatorSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->name, value, 32);
}

void ArmatureSensor_bone_get(PointerRNA *ptr, char *value)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->posechannel, 32);
}

int ArmatureSensor_bone_length(PointerRNA *ptr)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->posechannel);
}

void ArmatureSensor_bone_set(PointerRNA *ptr, const char *value)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->posechannel, value, 32);
}

float ArmatureSensor_value_get(PointerRNA *ptr)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	return (float)(data->value);
}

void ArmatureSensor_value_set(PointerRNA *ptr, float value)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	data->value= value;
}

void ArmatureSensor_constraint_get(PointerRNA *ptr, char *value)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->constraint, 32);
}

int ArmatureSensor_constraint_length(PointerRNA *ptr)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->constraint);
}

void ArmatureSensor_constraint_set(PointerRNA *ptr, const char *value)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->constraint, value, 32);
}

int ArmatureSensor_test_type_get(PointerRNA *ptr)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->type);
}

void ArmatureSensor_test_type_set(PointerRNA *ptr, int value)
{
	bArmatureSensor *data= (bArmatureSensor*)(((bSensor*)ptr->data)->data);
	data->type= value;
}

int CollisionSensor_use_material_get(PointerRNA *ptr)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	return (((data->mode) & 1) != 0);
}

void CollisionSensor_use_material_set(PointerRNA *ptr, int value)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	if(value) data->mode |= 1;
	else data->mode &= ~1;
}

void CollisionSensor_material_get(PointerRNA *ptr, char *value)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->materialName, 32);
}

int CollisionSensor_material_length(PointerRNA *ptr)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->materialName);
}

void CollisionSensor_material_set(PointerRNA *ptr, const char *value)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->materialName, value, 32);
}

void CollisionSensor_property_get(PointerRNA *ptr, char *value)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->name, 32);
}

int CollisionSensor_property_length(PointerRNA *ptr)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->name);
}

void CollisionSensor_property_set(PointerRNA *ptr, const char *value)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->name, value, 32);
}

int CollisionSensor_use_pulse_get(PointerRNA *ptr)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	return (((data->mode) & 2) != 0);
}

void CollisionSensor_use_pulse_set(PointerRNA *ptr, int value)
{
	bCollisionSensor *data= (bCollisionSensor*)(((bSensor*)ptr->data)->data);
	if(value) data->mode |= 2;
	else data->mode &= ~2;
}

int DelaySensor_delay_get(PointerRNA *ptr)
{
	bDelaySensor *data= (bDelaySensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->delay);
}

void DelaySensor_delay_set(PointerRNA *ptr, int value)
{
	bDelaySensor *data= (bDelaySensor*)(((bSensor*)ptr->data)->data);
	data->delay= CLAMPIS(value, 0, 5000);
}

int DelaySensor_duration_get(PointerRNA *ptr)
{
	bDelaySensor *data= (bDelaySensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->duration);
}

void DelaySensor_duration_set(PointerRNA *ptr, int value)
{
	bDelaySensor *data= (bDelaySensor*)(((bSensor*)ptr->data)->data);
	data->duration= CLAMPIS(value, 0, 5000);
}

int DelaySensor_use_repeat_get(PointerRNA *ptr)
{
	bDelaySensor *data= (bDelaySensor*)(((bSensor*)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void DelaySensor_use_repeat_set(PointerRNA *ptr, int value)
{
	bDelaySensor *data= (bDelaySensor*)(((bSensor*)ptr->data)->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int JoystickSensor_use_all_events_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (((data->flag) & 1) != 0);
}

void JoystickSensor_use_all_events_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int JoystickSensor_axis_direction_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->axisf);
}

void JoystickSensor_axis_direction_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->axisf= value;
}

int JoystickSensor_axis_number_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->axis);
}

void JoystickSensor_axis_number_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->axis= CLAMPIS(value, 1, 2);
}

int JoystickSensor_single_axis_number_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->axis_single);
}

void JoystickSensor_single_axis_number_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->axis_single= CLAMPIS(value, 1, 16);
}

int JoystickSensor_axis_threshold_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->precision);
}

void JoystickSensor_axis_threshold_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->precision= CLAMPIS(value, 0, 32768);
}

int JoystickSensor_button_number_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->button);
}

void JoystickSensor_button_number_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->button= CLAMPIS(value, 0, 18);
}

int JoystickSensor_event_type_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->type);
}

void JoystickSensor_event_type_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->type= value;
}

int JoystickSensor_hat_direction_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->hatf);
}

void JoystickSensor_hat_direction_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->hatf= value;
}

int JoystickSensor_hat_number_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->hat);
}

void JoystickSensor_hat_number_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->hat= CLAMPIS(value, 1, 2);
}

int JoystickSensor_joystick_index_get(PointerRNA *ptr)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->joyindex);
}

void JoystickSensor_joystick_index_set(PointerRNA *ptr, int value)
{
	bJoystickSensor *data= (bJoystickSensor*)(((bSensor*)ptr->data)->data);
	data->joyindex= CLAMPIS(value, 0, 7);
}

int KeyboardSensor_use_all_keys_get(PointerRNA *ptr)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	return (((data->type) & 1) != 0);
}

void KeyboardSensor_use_all_keys_set(PointerRNA *ptr, int value)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	if(value) data->type |= 1;
	else data->type &= ~1;
}

int KeyboardSensor_key_get(PointerRNA *ptr)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->key);
}

void KeyboardSensor_key_set(PointerRNA *ptr, int value)
{
	rna_Sensor_keyboard_key_set(ptr, value);
}

void KeyboardSensor_log_get(PointerRNA *ptr, char *value)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->toggleName, 32);
}

int KeyboardSensor_log_length(PointerRNA *ptr)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->toggleName);
}

void KeyboardSensor_log_set(PointerRNA *ptr, const char *value)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->toggleName, value, 32);
}

int KeyboardSensor_modifier_key_1_get(PointerRNA *ptr)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->qual);
}

void KeyboardSensor_modifier_key_1_set(PointerRNA *ptr, int value)
{
	rna_Sensor_keyboard_modifier_set(ptr, value);
}

int KeyboardSensor_modifier_key_2_get(PointerRNA *ptr)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->qual2);
}

void KeyboardSensor_modifier_key_2_set(PointerRNA *ptr, int value)
{
	rna_Sensor_keyboard_modifier2_set(ptr, value);
}

void KeyboardSensor_target_get(PointerRNA *ptr, char *value)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->targetName, 32);
}

int KeyboardSensor_target_length(PointerRNA *ptr)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->targetName);
}

void KeyboardSensor_target_set(PointerRNA *ptr, const char *value)
{
	bKeyboardSensor *data= (bKeyboardSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->targetName, value, 32);
}

void MessageSensor_subject_get(PointerRNA *ptr, char *value)
{
	bMessageSensor *data= (bMessageSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->subject, 32);
}

int MessageSensor_subject_length(PointerRNA *ptr)
{
	bMessageSensor *data= (bMessageSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->subject);
}

void MessageSensor_subject_set(PointerRNA *ptr, const char *value)
{
	bMessageSensor *data= (bMessageSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->subject, value, 32);
}

int MouseSensor_mouse_event_get(PointerRNA *ptr)
{
	bMouseSensor *data= (bMouseSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->type);
}

void MouseSensor_mouse_event_set(PointerRNA *ptr, int value)
{
	bMouseSensor *data= (bMouseSensor*)(((bSensor*)ptr->data)->data);
	data->type= value;
}

float NearSensor_distance_get(PointerRNA *ptr)
{
	bNearSensor *data= (bNearSensor*)(((bSensor*)ptr->data)->data);
	return (float)(data->dist);
}

void NearSensor_distance_set(PointerRNA *ptr, float value)
{
	bNearSensor *data= (bNearSensor*)(((bSensor*)ptr->data)->data);
	data->dist= CLAMPIS(value, 0.0f, 10000.0f);
}

void NearSensor_property_get(PointerRNA *ptr, char *value)
{
	bNearSensor *data= (bNearSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->name, 32);
}

int NearSensor_property_length(PointerRNA *ptr)
{
	bNearSensor *data= (bNearSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->name);
}

void NearSensor_property_set(PointerRNA *ptr, const char *value)
{
	bNearSensor *data= (bNearSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->name, value, 32);
}

float NearSensor_reset_distance_get(PointerRNA *ptr)
{
	bNearSensor *data= (bNearSensor*)(((bSensor*)ptr->data)->data);
	return (float)(data->resetdist);
}

void NearSensor_reset_distance_set(PointerRNA *ptr, float value)
{
	bNearSensor *data= (bNearSensor*)(((bSensor*)ptr->data)->data);
	data->resetdist= CLAMPIS(value, 0.0f, 10000.0f);
}

int PropertySensor_evaluation_type_get(PointerRNA *ptr)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->type);
}

void PropertySensor_evaluation_type_set(PointerRNA *ptr, int value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	data->type= value;
}

void PropertySensor_value_max_get(PointerRNA *ptr, char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->maxvalue, 32);
}

int PropertySensor_value_max_length(PointerRNA *ptr)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->maxvalue);
}

void PropertySensor_value_max_set(PointerRNA *ptr, const char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->maxvalue, value, 32);
}

void PropertySensor_value_min_get(PointerRNA *ptr, char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->value, 32);
}

int PropertySensor_value_min_length(PointerRNA *ptr)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->value);
}

void PropertySensor_value_min_set(PointerRNA *ptr, const char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->value, value, 32);
}

void PropertySensor_property_get(PointerRNA *ptr, char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->name, 32);
}

int PropertySensor_property_length(PointerRNA *ptr)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->name);
}

void PropertySensor_property_set(PointerRNA *ptr, const char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->name, value, 32);
}

void PropertySensor_value_get(PointerRNA *ptr, char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->value, 32);
}

int PropertySensor_value_length(PointerRNA *ptr)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->value);
}

void PropertySensor_value_set(PointerRNA *ptr, const char *value)
{
	bPropertySensor *data= (bPropertySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->value, value, 32);
}

float RadarSensor_angle_get(PointerRNA *ptr)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	return (float)(data->angle);
}

void RadarSensor_angle_set(PointerRNA *ptr, float value)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	data->angle= CLAMPIS(value, 0.0f, 179.8999938965f);
}

int RadarSensor_axis_get(PointerRNA *ptr)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->axis);
}

void RadarSensor_axis_set(PointerRNA *ptr, int value)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	data->axis= value;
}

float RadarSensor_distance_get(PointerRNA *ptr)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	return (float)(data->range);
}

void RadarSensor_distance_set(PointerRNA *ptr, float value)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	data->range= CLAMPIS(value, 0.0f, 10000.0f);
}

void RadarSensor_property_get(PointerRNA *ptr, char *value)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->name, 32);
}

int RadarSensor_property_length(PointerRNA *ptr)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->name);
}

void RadarSensor_property_set(PointerRNA *ptr, const char *value)
{
	bRadarSensor *data= (bRadarSensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->name, value, 32);
}

int RandomSensor_seed_get(PointerRNA *ptr)
{
	bRandomSensor *data= (bRandomSensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->seed);
}

void RandomSensor_seed_set(PointerRNA *ptr, int value)
{
	bRandomSensor *data= (bRandomSensor*)(((bSensor*)ptr->data)->data);
	data->seed= CLAMPIS(value, 0, 1000);
}

int RaySensor_axis_get(PointerRNA *ptr)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	return (int)(data->axisflag);
}

void RaySensor_axis_set(PointerRNA *ptr, int value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	data->axisflag= value;
}

void RaySensor_material_get(PointerRNA *ptr, char *value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->matname, 32);
}

int RaySensor_material_length(PointerRNA *ptr)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->matname);
}

void RaySensor_material_set(PointerRNA *ptr, const char *value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->matname, value, 32);
}

void RaySensor_property_get(PointerRNA *ptr, char *value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(value, data->propname, 32);
}

int RaySensor_property_length(PointerRNA *ptr)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	return strlen(data->propname);
}

void RaySensor_property_set(PointerRNA *ptr, const char *value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	BLI_strncpy(data->propname, value, 32);
}

float RaySensor_range_get(PointerRNA *ptr)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	return (float)(data->range);
}

void RaySensor_range_set(PointerRNA *ptr, float value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	data->range= CLAMPIS(value, 0.0099999998f, 10000.0f);
}

int RaySensor_ray_type_get(PointerRNA *ptr)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	return ((data->mode) & 1);
}

void RaySensor_ray_type_set(PointerRNA *ptr, int value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	data->mode &= ~1;
	data->mode |= value;
}

int RaySensor_use_x_ray_get(PointerRNA *ptr)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	return (((data->mode) & 2) != 0);
}

void RaySensor_use_x_ray_set(PointerRNA *ptr, int value)
{
	bRaySensor *data= (bRaySensor*)(((bSensor*)ptr->data)->data);
	if(value) data->mode |= 2;
	else data->mode &= ~2;
}

PointerRNA Sensor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Sensor_name_get(PointerRNA *ptr, char *value)
{
	bSensor *data= (bSensor*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int Sensor_name_length(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return strlen(data->name);
}

void Sensor_name_set(PointerRNA *ptr, const char *value)
{
	bSensor *data= (bSensor*)(ptr->data);
	BLI_strncpy(data->name, value, 32);
}

int Sensor_show_expanded_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Sensor_show_expanded_set(PointerRNA *ptr, int value)
{
	bSensor *data= (bSensor*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int Sensor_frequency_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (int)(data->freq);
}

void Sensor_frequency_set(PointerRNA *ptr, int value)
{
	bSensor *data= (bSensor*)(ptr->data);
	data->freq= CLAMPIS(value, 0, 10000);
}

int Sensor_invert_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (int)(data->invert);
}

void Sensor_invert_set(PointerRNA *ptr, int value)
{
	bSensor *data= (bSensor*)(ptr->data);
	data->invert= value;
}

int Sensor_use_level_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (((data->level) & 1) != 0);
}

void Sensor_use_level_set(PointerRNA *ptr, int value)
{
	rna_Sensor_level_set(ptr, value);
}

int Sensor_pin_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Sensor_pin_set(PointerRNA *ptr, int value)
{
	bSensor *data= (bSensor*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

static PointerRNA Sensor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Sensor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Sensor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Sensor_rna_properties_get(iter);
}

void Sensor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Sensor_rna_properties_get(iter);
}

void Sensor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Sensor_use_pulse_false_level_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (((data->pulse) & 4) != 0);
}

void Sensor_use_pulse_false_level_set(PointerRNA *ptr, int value)
{
	bSensor *data= (bSensor*)(ptr->data);
	if(value) data->pulse |= 4;
	else data->pulse &= ~4;
}

int Sensor_use_pulse_true_level_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (((data->pulse) & 1) != 0);
}

void Sensor_use_pulse_true_level_set(PointerRNA *ptr, int value)
{
	bSensor *data= (bSensor*)(ptr->data);
	if(value) data->pulse |= 1;
	else data->pulse &= ~1;
}

int Sensor_use_tap_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (((data->tap) & 1) != 0);
}

void Sensor_use_tap_set(PointerRNA *ptr, int value)
{
	rna_Sensor_tap_set(ptr, value);
}

int Sensor_type_get(PointerRNA *ptr)
{
	bSensor *data= (bSensor*)(ptr->data);
	return (int)(data->type);
}

void Sensor_type_set(PointerRNA *ptr, int value)
{
	rna_Sensor_type_set(ptr, value);
}

PointerRNA TouchSensor_material_get(PointerRNA *ptr)
{
	bTouchSensor *data= (bTouchSensor*)(((bSensor*)ptr->data)->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Material, data->ma);
}

void TouchSensor_material_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Sensor_touch_material_set(ptr, value);
}















void Sensor_link_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bSensor *_self;
	struct bController *controller;
	char *_data;
	
	_self= (struct bSensor *)_ptr->data;
	_data= (char *)_parms->data;
	controller= *((struct bController**)_data);
	
	rna_Sensor_link(_self, controller);
}

void Sensor_unlink_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bSensor *_self;
	struct bController *controller;
	char *_data;
	
	_self= (struct bSensor *)_ptr->data;
	_data= (char *)_parms->data;
	controller= *((struct bController**)_data);
	
	rna_Sensor_unlink(_self, controller);
}

/* Repeated prototypes to detect errors */

void rna_Sensor_link(struct bSensor *_self, struct bController *controller);
void rna_Sensor_unlink(struct bSensor *_self, struct bController *controller);


/* Actuator Sensor */
StringPropertyRNA rna_ActuatorSensor_actuator = {
	{NULL, NULL,
	-1, "actuator", 1, "Actuator",
	"Actuator name, actuator active state modifications will be detected",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ActuatorSensor_actuator_get, ActuatorSensor_actuator_length, ActuatorSensor_actuator_set, 32, ""
};

StructRNA RNA_ActuatorSensor = {
	{(ContainerRNA *)&RNA_Addon, (ContainerRNA *)&RNA_Actuator,
	NULL,
	{(PropertyRNA*)&rna_ActuatorSensor_actuator, (PropertyRNA*)&rna_ActuatorSensor_actuator}},
	"ActuatorSensor"	, NULL,NULL
, 0, "Actuator Sensor", "Sensor to detect state modifications of actuators",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Always Sensor */
StructRNA RNA_AlwaysSensor = {
	{(ContainerRNA *)&RNA_AndController, (ContainerRNA *)&RNA_Addons,
	NULL,
	{NULL, NULL}},
	"AlwaysSensor"	, NULL,NULL
, 0, "Always Sensor", "Sensor to generate continuous pulses",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Armature Sensor */
StringPropertyRNA rna_ArmatureSensor_bone = {
	{(PropertyRNA*)&rna_ArmatureSensor_value, NULL,
	-1, "bone", 1, "Bone Name",
	"Identify the bone to check value from",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Sensor_Armature_update, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureSensor_bone_get, ArmatureSensor_bone_length, ArmatureSensor_bone_set, 32, ""
};

FloatPropertyRNA rna_ArmatureSensor_value = {
	{(PropertyRNA*)&rna_ArmatureSensor_constraint, (PropertyRNA*)&rna_ArmatureSensor_bone,
	-1, "value", 8195, "Compare Value",
	"Specify value to be used in comparison",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bArmatureSensor, value), 4, NULL},
	ArmatureSensor_value_get, ArmatureSensor_value_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_ArmatureSensor_constraint = {
	{(PropertyRNA*)&rna_ArmatureSensor_test_type, (PropertyRNA*)&rna_ArmatureSensor_value,
	-1, "constraint", 1, "Constraint Name",
	"Identify the bone constraint to check value from",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Sensor_Armature_update, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureSensor_constraint_get, ArmatureSensor_constraint_length, ArmatureSensor_constraint_set, 32, ""
};

static EnumPropertyItem rna_ArmatureSensor_test_type_items[6] = {
	{0, "STATECHG", 0, "State Changed", ""},
	{1, "LINERRORBELOW", 0, "Lin error below", ""},
	{2, "LINERRORABOVE", 0, "Lin error above", ""},
	{3, "ROTERRORBELOW", 0, "Rot error below", ""},
	{4, "ROTERRORABOVE", 0, "Rot error above", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ArmatureSensor_test_type = {
	{NULL, (PropertyRNA*)&rna_ArmatureSensor_constraint,
	-1, "test_type", 3, "Test",
	"Type of value and test",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	ArmatureSensor_test_type_get, ArmatureSensor_test_type_set, NULL, rna_ArmatureSensor_test_type_items, 5, 0
};

StructRNA RNA_ArmatureSensor = {
	{(ContainerRNA *)&RNA_ArrayModifier, (ContainerRNA *)&RNA_ArmatureModifier,
	NULL,
	{(PropertyRNA*)&rna_ArmatureSensor_bone, (PropertyRNA*)&rna_ArmatureSensor_test_type}},
	"ArmatureSensor"	, NULL,NULL
, 0, "Armature Sensor", "Sensor to detect values and changes in values of IK solver",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Collision Sensor */
BooleanPropertyRNA rna_CollisionSensor_use_material = {
	{(PropertyRNA*)&rna_CollisionSensor_material, NULL,
	-1, "use_material", 3, "M/P",
	"Toggle collision on material or property",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	CollisionSensor_use_material_get, CollisionSensor_use_material_set, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_CollisionSensor_material = {
	{(PropertyRNA*)&rna_CollisionSensor_property, (PropertyRNA*)&rna_CollisionSensor_use_material,
	-1, "material", 1, "Material",
	"Only look for Objects with this material (blank = all objects)",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	CollisionSensor_material_get, CollisionSensor_material_length, CollisionSensor_material_set, 32, ""
};

StringPropertyRNA rna_CollisionSensor_property = {
	{(PropertyRNA*)&rna_CollisionSensor_use_pulse, (PropertyRNA*)&rna_CollisionSensor_material,
	-1, "property", 1, "Property",
	"Only look for Objects with this property (blank = all objects)",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	CollisionSensor_property_get, CollisionSensor_property_length, CollisionSensor_property_set, 32, ""
};

BooleanPropertyRNA rna_CollisionSensor_use_pulse = {
	{NULL, (PropertyRNA*)&rna_CollisionSensor_property,
	-1, "use_pulse", 3, "Pulse",
	"Changes to the set of colliding objects generates pulse",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	CollisionSensor_use_pulse_get, CollisionSensor_use_pulse_set, NULL, NULL, 0, NULL
};

StructRNA RNA_CollisionSensor = {
	{(ContainerRNA *)&RNA_CollisionSettings, (ContainerRNA *)&RNA_CollisionModifier,
	NULL,
	{(PropertyRNA*)&rna_CollisionSensor_use_material, (PropertyRNA*)&rna_CollisionSensor_use_pulse}},
	"CollisionSensor"	, NULL,NULL
, 0, "Collision Sensor", "Sensor to detect objects colliding with the current object, with more settings than the Touch sensor",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Delay Sensor */
IntPropertyRNA rna_DelaySensor_delay = {
	{(PropertyRNA*)&rna_DelaySensor_duration, NULL,
	-1, "delay", 8195, "Delay",
	"Delay in number of logic tics before the positive trigger (default 60 per second)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bDelaySensor, delay), 1, NULL},
	DelaySensor_delay_get, DelaySensor_delay_set, NULL, NULL, NULL,
	0, 5000, 0, 5000, 1, 0, NULL
};

IntPropertyRNA rna_DelaySensor_duration = {
	{(PropertyRNA*)&rna_DelaySensor_use_repeat, (PropertyRNA*)&rna_DelaySensor_delay,
	-1, "duration", 8195, "Duration",
	"If >0, delay in number of logic tics before the negative trigger following the positive trigger",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bDelaySensor, duration), 1, NULL},
	DelaySensor_duration_get, DelaySensor_duration_set, NULL, NULL, NULL,
	0, 5000, 0, 5000, 1, 0, NULL
};

BooleanPropertyRNA rna_DelaySensor_use_repeat = {
	{NULL, (PropertyRNA*)&rna_DelaySensor_duration,
	-1, "use_repeat", 3, "Repeat",
	"Toggle repeat option. If selected, the sensor restarts after Delay+Dur logic tics",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	DelaySensor_use_repeat_get, DelaySensor_use_repeat_set, NULL, NULL, 0, NULL
};

StructRNA RNA_DelaySensor = {
	{(ContainerRNA *)&RNA_DisplaceModifier, (ContainerRNA *)&RNA_DecimateModifier,
	NULL,
	{(PropertyRNA*)&rna_DelaySensor_delay, (PropertyRNA*)&rna_DelaySensor_use_repeat}},
	"DelaySensor"	, NULL,NULL
, 0, "Delay Sensor", "Sensor to send delayed events",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Joystick Sensor */
BooleanPropertyRNA rna_JoystickSensor_use_all_events = {
	{(PropertyRNA*)&rna_JoystickSensor_axis_direction, NULL,
	-1, "use_all_events", 3, "All Events",
	"Triggered by all events on this joysticks current type (axis/button/hat)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	JoystickSensor_use_all_events_get, JoystickSensor_use_all_events_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_JoystickSensor_axis_direction_items[5] = {
	{0, "RIGHTAXIS", 0, "Right Axis", ""},
	{1, "UPAXIS", 0, "Up Axis", ""},
	{2, "LEFTAXIS", 0, "Left Axis", ""},
	{3, "DOWNAXIS", 0, "Down Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_JoystickSensor_axis_direction = {
	{(PropertyRNA*)&rna_JoystickSensor_axis_number, (PropertyRNA*)&rna_JoystickSensor_use_all_events,
	-1, "axis_direction", 3, "Axis Direction",
	"The direction of the axis",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	JoystickSensor_axis_direction_get, JoystickSensor_axis_direction_set, NULL, rna_JoystickSensor_axis_direction_items, 4, 0
};

IntPropertyRNA rna_JoystickSensor_axis_number = {
	{(PropertyRNA*)&rna_JoystickSensor_single_axis_number, (PropertyRNA*)&rna_JoystickSensor_axis_direction,
	-1, "axis_number", 8195, "Axis Number",
	"Specify which axis pair to use, 1 is usually the main direction input",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bJoystickSensor, axis), 1, NULL},
	JoystickSensor_axis_number_get, JoystickSensor_axis_number_set, NULL, NULL, NULL,
	1, 2, 1, 2, 1, 0, NULL
};

IntPropertyRNA rna_JoystickSensor_single_axis_number = {
	{(PropertyRNA*)&rna_JoystickSensor_axis_threshold, (PropertyRNA*)&rna_JoystickSensor_axis_number,
	-1, "single_axis_number", 8195, "Axis Number",
	"Specify a single axis (verticle/horizontal/other) to detect",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bJoystickSensor, axis_single), 1, NULL},
	JoystickSensor_single_axis_number_get, JoystickSensor_single_axis_number_set, NULL, NULL, NULL,
	1, 16, 1, 16, 1, 0, NULL
};

IntPropertyRNA rna_JoystickSensor_axis_threshold = {
	{(PropertyRNA*)&rna_JoystickSensor_button_number, (PropertyRNA*)&rna_JoystickSensor_single_axis_number,
	-1, "axis_threshold", 8195, "Axis Threshold",
	"Specify the precision of the axis",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bJoystickSensor, precision), 0, NULL},
	JoystickSensor_axis_threshold_get, JoystickSensor_axis_threshold_set, NULL, NULL, NULL,
	0, 32768, 0, 32768, 1, 0, NULL
};

IntPropertyRNA rna_JoystickSensor_button_number = {
	{(PropertyRNA*)&rna_JoystickSensor_event_type, (PropertyRNA*)&rna_JoystickSensor_axis_threshold,
	-1, "button_number", 8195, "Button Number",
	"Specify which button to use",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bJoystickSensor, button), 0, NULL},
	JoystickSensor_button_number_get, JoystickSensor_button_number_set, NULL, NULL, NULL,
	0, 18, 0, 18, 1, 0, NULL
};

static EnumPropertyItem rna_JoystickSensor_event_type_items[5] = {
	{0, "BUTTON", 0, "Button", ""},
	{1, "AXIS", 0, "Axis", ""},
	{2, "HAT", 0, "Hat", ""},
	{3, "AXIS_SINGLE", 0, "Single Axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_JoystickSensor_event_type = {
	{(PropertyRNA*)&rna_JoystickSensor_hat_direction, (PropertyRNA*)&rna_JoystickSensor_button_number,
	-1, "event_type", 3, "Event Type",
	"The type of event this joystick sensor is triggered on",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	JoystickSensor_event_type_get, JoystickSensor_event_type_set, NULL, rna_JoystickSensor_event_type_items, 4, 0
};

static EnumPropertyItem rna_JoystickSensor_hat_direction_items[9] = {
	{1, "UP", 0, "Up", ""},
	{4, "DOWN", 0, "Down", ""},
	{8, "LEFT", 0, "Left", ""},
	{2, "RIGHT", 0, "Right", ""},
	{3, "UPRIGHT", 0, "Up/Right", ""},
	{12, "DOWNLEFT", 0, "Down/Left", ""},
	{9, "UPLEFT", 0, "Up/Left", ""},
	{6, "DOWNRIGHT", 0, "Down/Right", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_JoystickSensor_hat_direction = {
	{(PropertyRNA*)&rna_JoystickSensor_hat_number, (PropertyRNA*)&rna_JoystickSensor_event_type,
	-1, "hat_direction", 3, "Hat Direction",
	"Specify hat direction",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	JoystickSensor_hat_direction_get, JoystickSensor_hat_direction_set, NULL, rna_JoystickSensor_hat_direction_items, 8, 1
};

IntPropertyRNA rna_JoystickSensor_hat_number = {
	{(PropertyRNA*)&rna_JoystickSensor_joystick_index, (PropertyRNA*)&rna_JoystickSensor_hat_direction,
	-1, "hat_number", 8195, "Hat Number",
	"Specify which hat to use",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bJoystickSensor, hat), 0, NULL},
	JoystickSensor_hat_number_get, JoystickSensor_hat_number_set, NULL, NULL, NULL,
	1, 2, 1, 2, 1, 0, NULL
};

IntPropertyRNA rna_JoystickSensor_joystick_index = {
	{NULL, (PropertyRNA*)&rna_JoystickSensor_hat_number,
	-1, "joystick_index", 8195, "Index",
	"Specify which joystick to use",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bJoystickSensor, joyindex), 2, NULL},
	JoystickSensor_joystick_index_get, JoystickSensor_joystick_index_set, NULL, NULL, NULL,
	0, 7, 0, 7, 1, 0, NULL
};

StructRNA RNA_JoystickSensor = {
	{(ContainerRNA *)&RNA_Key, (ContainerRNA *)&RNA_Itasc,
	NULL,
	{(PropertyRNA*)&rna_JoystickSensor_use_all_events, (PropertyRNA*)&rna_JoystickSensor_joystick_index}},
	"JoystickSensor"	, NULL,NULL
, 0, "Joystick Sensor", "Sensor to detect joystick events",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Keyboard Sensor */
BooleanPropertyRNA rna_KeyboardSensor_use_all_keys = {
	{(PropertyRNA*)&rna_KeyboardSensor_key, NULL,
	-1, "use_all_keys", 3, "All Keys",
	"Trigger this sensor on any keystroke",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	KeyboardSensor_use_all_keys_get, KeyboardSensor_use_all_keys_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyboardSensor_key_items[148] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "Inbetween Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20482, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20483, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20484, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20485, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20486, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyboardSensor_key = {
	{(PropertyRNA*)&rna_KeyboardSensor_log, (PropertyRNA*)&rna_KeyboardSensor_use_all_keys,
	-1, "key", 3, "Key",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	KeyboardSensor_key_get, KeyboardSensor_key_set, NULL, rna_KeyboardSensor_key_items, 147, 0
};

StringPropertyRNA rna_KeyboardSensor_log = {
	{(PropertyRNA*)&rna_KeyboardSensor_modifier_key_1, (PropertyRNA*)&rna_KeyboardSensor_key,
	-1, "log", 1, "Log Toggle",
	"Property that indicates whether to log keystrokes as a string",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	KeyboardSensor_log_get, KeyboardSensor_log_length, KeyboardSensor_log_set, 32, ""
};

static EnumPropertyItem rna_KeyboardSensor_modifier_key_1_items[148] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "Inbetween Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20482, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20483, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20484, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20485, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20486, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyboardSensor_modifier_key_1 = {
	{(PropertyRNA*)&rna_KeyboardSensor_modifier_key_2, (PropertyRNA*)&rna_KeyboardSensor_log,
	-1, "modifier_key_1", 3, "Modifier Key",
	"Modifier key code",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	KeyboardSensor_modifier_key_1_get, KeyboardSensor_modifier_key_1_set, NULL, rna_KeyboardSensor_modifier_key_1_items, 147, 0
};

static EnumPropertyItem rna_KeyboardSensor_modifier_key_2_items[148] = {
	{0, "NONE", 0, "", ""},
	{1, "LEFTMOUSE", 0, "Left Mouse", ""},
	{2, "MIDDLEMOUSE", 0, "Middle Mouse", ""},
	{3, "RIGHTMOUSE", 0, "Right Mouse", ""},
	{7, "BUTTON4MOUSE", 0, "Button4 Mouse", ""},
	{8, "BUTTON5MOUSE", 0, "Button5 Mouse", ""},
	{5, "ACTIONMOUSE", 0, "Action Mouse", ""},
	{6, "SELECTMOUSE", 0, "Select Mouse", ""},
	{0, "", 0, NULL, NULL},
	{4, "MOUSEMOVE", 0, "Mouse Move", ""},
	{17, "INBETWEEN_MOUSEMOVE", 0, "Inbetween Move", ""},
	{14, "TRACKPADPAN", 0, "Mouse/Trackpad Pan", ""},
	{15, "TRACKPADZOOM", 0, "Mouse/Trackpad Zoom", ""},
	{16, "MOUSEROTATE", 0, "Mouse/Trackpad Rotate", ""},
	{0, "", 0, NULL, NULL},
	{10, "WHEELUPMOUSE", 0, "Wheel Up", ""},
	{11, "WHEELDOWNMOUSE", 0, "Wheel Down", ""},
	{12, "WHEELINMOUSE", 0, "Wheel In", ""},
	{13, "WHEELOUTMOUSE", 0, "Wheel Out", ""},
	{0, "", 0, NULL, NULL},
	{20482, "EVT_TWEAK_L", 0, "Tweak Left", ""},
	{20483, "EVT_TWEAK_M", 0, "Tweak Middle", ""},
	{20484, "EVT_TWEAK_R", 0, "Tweak Right", ""},
	{20485, "EVT_TWEAK_A", 0, "Tweak Action", ""},
	{20486, "EVT_TWEAK_S", 0, "Tweak Select", ""},
	{0, "", 0, NULL, NULL},
	{97, "A", 0, "A", ""},
	{98, "B", 0, "B", ""},
	{99, "C", 0, "C", ""},
	{100, "D", 0, "D", ""},
	{101, "E", 0, "E", ""},
	{102, "F", 0, "F", ""},
	{103, "G", 0, "G", ""},
	{104, "H", 0, "H", ""},
	{105, "I", 0, "I", ""},
	{106, "J", 0, "J", ""},
	{107, "K", 0, "K", ""},
	{108, "L", 0, "L", ""},
	{109, "M", 0, "M", ""},
	{110, "N", 0, "N", ""},
	{111, "O", 0, "O", ""},
	{112, "P", 0, "P", ""},
	{113, "Q", 0, "Q", ""},
	{114, "R", 0, "R", ""},
	{115, "S", 0, "S", ""},
	{116, "T", 0, "T", ""},
	{117, "U", 0, "U", ""},
	{118, "V", 0, "V", ""},
	{119, "W", 0, "W", ""},
	{120, "X", 0, "X", ""},
	{121, "Y", 0, "Y", ""},
	{122, "Z", 0, "Z", ""},
	{0, "", 0, NULL, NULL},
	{48, "ZERO", 0, "0", ""},
	{49, "ONE", 0, "1", ""},
	{50, "TWO", 0, "2", ""},
	{51, "THREE", 0, "3", ""},
	{52, "FOUR", 0, "4", ""},
	{53, "FIVE", 0, "5", ""},
	{54, "SIX", 0, "6", ""},
	{55, "SEVEN", 0, "7", ""},
	{56, "EIGHT", 0, "8", ""},
	{57, "NINE", 0, "9", ""},
	{0, "", 0, NULL, NULL},
	{212, "LEFT_CTRL", 0, "Left Ctrl", ""},
	{213, "LEFT_ALT", 0, "Left Alt", ""},
	{217, "LEFT_SHIFT", 0, "Left Shift", ""},
	{214, "RIGHT_ALT", 0, "Right Alt", ""},
	{215, "RIGHT_CTRL", 0, "Right Ctrl", ""},
	{216, "RIGHT_SHIFT", 0, "Right Shift", ""},
	{0, "", 0, NULL, NULL},
	{172, "OSKEY", 0, "OS Key", ""},
	{173, "GRLESS", 0, "Grless", ""},
	{218, "ESC", 0, "Esc", ""},
	{219, "TAB", 0, "Tab", ""},
	{220, "RET", 0, "Return", ""},
	{221, "SPACE", 0, "Spacebar", ""},
	{222, "LINE_FEED", 0, "Line Feed", ""},
	{223, "BACK_SPACE", 0, "Back Space", ""},
	{224, "DEL", 0, "Delete", ""},
	{225, "SEMI_COLON", 0, ";", ""},
	{226, "PERIOD", 0, ".", ""},
	{227, "COMMA", 0, ",", ""},
	{228, "QUOTE", 0, "\"", ""},
	{229, "ACCENT_GRAVE", 0, "`", ""},
	{230, "MINUS", 0, "-", ""},
	{232, "SLASH", 0, "/", ""},
	{233, "BACK_SLASH", 0, "\\", ""},
	{234, "EQUAL", 0, "=", ""},
	{235, "LEFT_BRACKET", 0, "[", ""},
	{236, "RIGHT_BRACKET", 0, "]", ""},
	{137, "LEFT_ARROW", 0, "Left Arrow", ""},
	{138, "DOWN_ARROW", 0, "Down Arrow", ""},
	{139, "RIGHT_ARROW", 0, "Right Arrow", ""},
	{140, "UP_ARROW", 0, "Up Arrow", ""},
	{152, "NUMPAD_2", 0, "Numpad 2", ""},
	{154, "NUMPAD_4", 0, "Numpad 4", ""},
	{156, "NUMPAD_6", 0, "Numpad 6", ""},
	{158, "NUMPAD_8", 0, "Numpad 8", ""},
	{151, "NUMPAD_1", 0, "Numpad 1", ""},
	{153, "NUMPAD_3", 0, "Numpad 3", ""},
	{155, "NUMPAD_5", 0, "Numpad 5", ""},
	{157, "NUMPAD_7", 0, "Numpad 7", ""},
	{159, "NUMPAD_9", 0, "Numpad 9", ""},
	{199, "NUMPAD_PERIOD", 0, "Numpad .", ""},
	{161, "NUMPAD_SLASH", 0, "Numpad /", ""},
	{160, "NUMPAD_ASTERIX", 0, "Numpad *", ""},
	{150, "NUMPAD_0", 0, "Numpad 0", ""},
	{162, "NUMPAD_MINUS", 0, "Numpad -", ""},
	{163, "NUMPAD_ENTER", 0, "Numpad Enter", ""},
	{164, "NUMPAD_PLUS", 0, "Numpad +", ""},
	{300, "F1", 0, "F1", ""},
	{301, "F2", 0, "F2", ""},
	{302, "F3", 0, "F3", ""},
	{303, "F4", 0, "F4", ""},
	{304, "F5", 0, "F5", ""},
	{305, "F6", 0, "F6", ""},
	{306, "F7", 0, "F7", ""},
	{307, "F8", 0, "F8", ""},
	{308, "F9", 0, "F9", ""},
	{309, "F10", 0, "F10", ""},
	{310, "F11", 0, "F11", ""},
	{311, "F12", 0, "F12", ""},
	{312, "F13", 0, "F13", ""},
	{313, "F14", 0, "F14", ""},
	{314, "F15", 0, "F15", ""},
	{315, "F16", 0, "F16", ""},
	{316, "F17", 0, "F17", ""},
	{317, "F18", 0, "F18", ""},
	{318, "F19", 0, "F19", ""},
	{165, "PAUSE", 0, "Pause", ""},
	{166, "INSERT", 0, "Insert", ""},
	{167, "HOME", 0, "Home", ""},
	{168, "PAGE_UP", 0, "Page Up", ""},
	{169, "PAGE_DOWN", 0, "Page Down", ""},
	{170, "END", 0, "End", ""},
	{0, "", 0, NULL, NULL},
	{174, "MEDIA_PLAY", 0, "Media Play/Pause", ""},
	{175, "MEDIA_STOP", 0, "Media Stop", ""},
	{176, "MEDIA_FIRST", 0, "Media First", ""},
	{177, "MEDIA_LAST", 0, "Media Last", ""},
	{0, "", 0, NULL, NULL},
	{260, "WINDOW_DEACTIVATE", 0, "Window Deactivate", ""},
	{272, "TIMER", 0, "Timer", ""},
	{273, "TIMER0", 0, "Timer 0", ""},
	{274, "TIMER1", 0, "Timer 1", ""},
	{275, "TIMER2", 0, "Timer 2", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyboardSensor_modifier_key_2 = {
	{(PropertyRNA*)&rna_KeyboardSensor_target, (PropertyRNA*)&rna_KeyboardSensor_modifier_key_1,
	-1, "modifier_key_2", 3, "Second Modifier Key",
	"Modifier key code",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	KeyboardSensor_modifier_key_2_get, KeyboardSensor_modifier_key_2_set, NULL, rna_KeyboardSensor_modifier_key_2_items, 147, 0
};

StringPropertyRNA rna_KeyboardSensor_target = {
	{NULL, (PropertyRNA*)&rna_KeyboardSensor_modifier_key_2,
	-1, "target", 1, "Target",
	"Property that receive the keystrokes in case a string is logged",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	KeyboardSensor_target_get, KeyboardSensor_target_length, KeyboardSensor_target_set, 32, ""
};

StructRNA RNA_KeyboardSensor = {
	{(ContainerRNA *)&RNA_Keyframe, (ContainerRNA *)&RNA_KeyMaps,
	NULL,
	{(PropertyRNA*)&rna_KeyboardSensor_use_all_keys, (PropertyRNA*)&rna_KeyboardSensor_target}},
	"KeyboardSensor"	, NULL,NULL
, 0, "Keyboard Sensor", "Sensor to detect keyboard events",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Message Sensor */
StringPropertyRNA rna_MessageSensor_subject = {
	{NULL, NULL,
	-1, "subject", 1, "Subject",
	"Optional subject filter: only accept messages with this subject, or empty for all",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MessageSensor_subject_get, MessageSensor_subject_length, MessageSensor_subject_set, 32, ""
};

StructRNA RNA_MessageSensor = {
	{(ContainerRNA *)&RNA_MetaBall, (ContainerRNA *)&RNA_MessageActuator,
	NULL,
	{(PropertyRNA*)&rna_MessageSensor_subject, (PropertyRNA*)&rna_MessageSensor_subject}},
	"MessageSensor"	, NULL,NULL
, 0, "Message Sensor", "Sensor to detect incoming messages",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mouse Sensor */
static EnumPropertyItem rna_MouseSensor_mouse_event_items[9] = {
	{1, "LEFTCLICK", 0, "Left Button", ""},
	{2, "MIDDLECLICK", 0, "Middle Button", ""},
	{4, "RIGHTCLICK", 0, "Right Button", ""},
	{5, "WHEELUP", 0, "Wheel Up", ""},
	{6, "WHEELDOWN", 0, "Wheel Down", ""},
	{8, "MOVEMENT", 0, "Movement", ""},
	{16, "MOUSEOVER", 0, "Mouse Over", ""},
	{32, "MOUSEOVERANY", 0, "Mouse Over Any", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MouseSensor_mouse_event = {
	{NULL, NULL,
	-1, "mouse_event", 3, "Mouse Event",
	"Specify the type of event this mouse sensor should trigger on",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	MouseSensor_mouse_event_get, MouseSensor_mouse_event_set, NULL, rna_MouseSensor_mouse_event_items, 8, 1
};

StructRNA RNA_MouseSensor = {
	{(ContainerRNA *)&RNA_MovieSequence, (ContainerRNA *)&RNA_MotionPathVert,
	NULL,
	{(PropertyRNA*)&rna_MouseSensor_mouse_event, (PropertyRNA*)&rna_MouseSensor_mouse_event}},
	"MouseSensor"	, NULL,NULL
, 0, "Mouse Sensor", "Sensor to detect mouse events",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Near Sensor */
FloatPropertyRNA rna_NearSensor_distance = {
	{(PropertyRNA*)&rna_NearSensor_property, NULL,
	-1, "distance", 8195, "Distance",
	"Trigger distance",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bNearSensor, dist), 4, NULL},
	NearSensor_distance_get, NearSensor_distance_set, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_NearSensor_property = {
	{(PropertyRNA*)&rna_NearSensor_reset_distance, (PropertyRNA*)&rna_NearSensor_distance,
	-1, "property", 1, "Property",
	"Only look for objects with this property (blank = all objects)",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NearSensor_property_get, NearSensor_property_length, NearSensor_property_set, 32, ""
};

FloatPropertyRNA rna_NearSensor_reset_distance = {
	{NULL, (PropertyRNA*)&rna_NearSensor_property,
	-1, "reset_distance", 8195, "Reset Distance",
	"The distance where the sensor forgets the actor",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bNearSensor, resetdist), 4, NULL},
	NearSensor_reset_distance_get, NearSensor_reset_distance_set, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_NearSensor = {
	{(ContainerRNA *)&RNA_NlaStrip, (ContainerRNA *)&RNA_NandController,
	NULL,
	{(PropertyRNA*)&rna_NearSensor_distance, (PropertyRNA*)&rna_NearSensor_reset_distance}},
	"NearSensor"	, NULL,NULL
, 0, "Near Sensor", "Sensor to detect nearby objects",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Property Sensor */
static EnumPropertyItem rna_PropertySensor_evaluation_type_items[5] = {
	{0, "PROPEQUAL", 0, "Equal", ""},
	{1, "PROPNEQUAL", 0, "Not Equal", ""},
	{2, "PROPINTERVAL", 0, "Interval", ""},
	{3, "PROPCHANGED", 0, "Changed", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_PropertySensor_evaluation_type = {
	{(PropertyRNA*)&rna_PropertySensor_value_max, NULL,
	-1, "evaluation_type", 3, "Evaluation Type",
	"Type of property evaluation",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertySensor_evaluation_type_get, PropertySensor_evaluation_type_set, NULL, rna_PropertySensor_evaluation_type_items, 4, 0
};

StringPropertyRNA rna_PropertySensor_value_max = {
	{(PropertyRNA*)&rna_PropertySensor_value_min, (PropertyRNA*)&rna_PropertySensor_evaluation_type,
	-1, "value_max", 1, "Maximum Value",
	"Specify maximum value in Interval type",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertySensor_value_max_get, PropertySensor_value_max_length, PropertySensor_value_max_set, 32, ""
};

StringPropertyRNA rna_PropertySensor_value_min = {
	{(PropertyRNA*)&rna_PropertySensor_property, (PropertyRNA*)&rna_PropertySensor_value_max,
	-1, "value_min", 1, "Minimum Value",
	"Specify minimum value in Interval type",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertySensor_value_min_get, PropertySensor_value_min_length, PropertySensor_value_min_set, 32, ""
};

StringPropertyRNA rna_PropertySensor_property = {
	{(PropertyRNA*)&rna_PropertySensor_value, (PropertyRNA*)&rna_PropertySensor_value_min,
	-1, "property", 1, "Property",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertySensor_property_get, PropertySensor_property_length, PropertySensor_property_set, 32, ""
};

StringPropertyRNA rna_PropertySensor_value = {
	{NULL, (PropertyRNA*)&rna_PropertySensor_property,
	-1, "value", 1, "Value",
	"Check for this value in types in Equal or Not Equal types",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	PropertySensor_value_get, PropertySensor_value_length, PropertySensor_value_set, 32, ""
};

StructRNA RNA_PropertySensor = {
	{(ContainerRNA *)&RNA_PythonConstraint, (ContainerRNA *)&RNA_PropertyGroupItem,
	NULL,
	{(PropertyRNA*)&rna_PropertySensor_evaluation_type, (PropertyRNA*)&rna_PropertySensor_value}},
	"PropertySensor"	, NULL,NULL
, 0, "Property Sensor", "Sensor to detect values and changes in values of properties",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Radar Sensor */
FloatPropertyRNA rna_RadarSensor_angle = {
	{(PropertyRNA*)&rna_RadarSensor_axis, NULL,
	-1, "angle", 8195, "Angle",
	"Opening angle of the radar cone (in degrees)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRadarSensor, angle), 4, NULL},
	RadarSensor_angle_get, RadarSensor_angle_set, NULL, NULL, NULL, 0.0f, 179.8999938965f, 0.0f, 179.8999938965f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_RadarSensor_axis_items[7] = {
	{0, "XAXIS", 0, "+X axis", ""},
	{1, "YAXIS", 0, "+Y axis", ""},
	{2, "ZAXIS", 0, "+Z axis", ""},
	{3, "NEGXAXIS", 0, "-X axis", ""},
	{4, "NEGYAXIS", 0, "-Y axis", ""},
	{5, "NEGZAXIS", 0, "-Z axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RadarSensor_axis = {
	{(PropertyRNA*)&rna_RadarSensor_distance, (PropertyRNA*)&rna_RadarSensor_angle,
	-1, "axis", 3, "Axis",
	"Specify along which axis the radar cone is cast",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RadarSensor_axis_get, RadarSensor_axis_set, NULL, rna_RadarSensor_axis_items, 6, 0
};

FloatPropertyRNA rna_RadarSensor_distance = {
	{(PropertyRNA*)&rna_RadarSensor_property, (PropertyRNA*)&rna_RadarSensor_axis,
	-1, "distance", 8195, "Distance",
	"Depth of the radar cone",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRadarSensor, range), 4, NULL},
	RadarSensor_distance_get, RadarSensor_distance_set, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_RadarSensor_property = {
	{NULL, (PropertyRNA*)&rna_RadarSensor_distance,
	-1, "property", 1, "Property",
	"Only look for Objects with this property (blank = all objects)",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RadarSensor_property_get, RadarSensor_property_length, RadarSensor_property_set, 32, ""
};

StructRNA RNA_RadarSensor = {
	{(ContainerRNA *)&RNA_RandomActuator, (ContainerRNA *)&RNA_RGBANodeSocket,
	NULL,
	{(PropertyRNA*)&rna_RadarSensor_angle, (PropertyRNA*)&rna_RadarSensor_property}},
	"RadarSensor"	, NULL,NULL
, 0, "Radar Sensor", "Sensor to detect objects in a cone shaped radar emanating from the current object",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Random Sensor */
IntPropertyRNA rna_RandomSensor_seed = {
	{NULL, NULL,
	-1, "seed", 8195, "Seed",
	"Initial seed of the generator. (Choose 0 for not random)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRandomSensor, seed), 0, NULL},
	RandomSensor_seed_get, RandomSensor_seed_set, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

StructRNA RNA_RandomSensor = {
	{(ContainerRNA *)&RNA_RaySensor, (ContainerRNA *)&RNA_RandomActuator,
	NULL,
	{(PropertyRNA*)&rna_RandomSensor_seed, (PropertyRNA*)&rna_RandomSensor_seed}},
	"RandomSensor"	, NULL,NULL
, 0, "Random Sensor", "Sensor to send random events",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Ray Sensor */
static EnumPropertyItem rna_RaySensor_axis_items[7] = {
	{1, "XAXIS", 0, "+X axis", ""},
	{0, "YAXIS", 0, "+Y axis", ""},
	{2, "ZAXIS", 0, "+Z axis", ""},
	{3, "NEGXAXIS", 0, "-X axis", ""},
	{4, "NEGYAXIS", 0, "-Y axis", ""},
	{5, "NEGZAXIS", 0, "-Z axis", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RaySensor_axis = {
	{(PropertyRNA*)&rna_RaySensor_material, NULL,
	-1, "axis", 3, "Axis",
	"Specify along which axis the ray is cast",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RaySensor_axis_get, RaySensor_axis_set, NULL, rna_RaySensor_axis_items, 6, 0
};

StringPropertyRNA rna_RaySensor_material = {
	{(PropertyRNA*)&rna_RaySensor_property, (PropertyRNA*)&rna_RaySensor_axis,
	-1, "material", 1, "Material",
	"Only look for Objects with this material (blank = all objects)",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RaySensor_material_get, RaySensor_material_length, RaySensor_material_set, 32, ""
};

StringPropertyRNA rna_RaySensor_property = {
	{(PropertyRNA*)&rna_RaySensor_range, (PropertyRNA*)&rna_RaySensor_material,
	-1, "property", 1, "Property",
	"Only look for Objects with this property (blank = all objects)",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RaySensor_property_get, RaySensor_property_length, RaySensor_property_set, 32, ""
};

FloatPropertyRNA rna_RaySensor_range = {
	{(PropertyRNA*)&rna_RaySensor_ray_type, (PropertyRNA*)&rna_RaySensor_property,
	-1, "range", 8195, "Range",
	"Sense objects no farther than this distance",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bRaySensor, range), 4, NULL},
	RaySensor_range_get, RaySensor_range_set, NULL, NULL, NULL, 0.0099999998f, 10000.0f, 0.0099999998f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_RaySensor_ray_type_items[3] = {
	{0, "PROPERTY", 120, "Property", "Use a material for ray intersections"},
	{1, "MATERIAL", 165, "Material", "Use a property for ray intersections"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RaySensor_ray_type = {
	{(PropertyRNA*)&rna_RaySensor_use_x_ray, (PropertyRNA*)&rna_RaySensor_range,
	-1, "ray_type", 3, "Ray Type",
	"Toggle collision on material or property",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RaySensor_ray_type_get, RaySensor_ray_type_set, NULL, rna_RaySensor_ray_type_items, 2, 0
};

BooleanPropertyRNA rna_RaySensor_use_x_ray = {
	{NULL, (PropertyRNA*)&rna_RaySensor_ray_type,
	-1, "use_x_ray", 3, "X-Ray Mode",
	"Toggle X-Ray option (see through objects that don\'t have the property)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	RaySensor_use_x_ray_get, RaySensor_use_x_ray_set, NULL, NULL, 0, NULL
};

StructRNA RNA_RaySensor = {
	{(ContainerRNA *)&RNA_Region, (ContainerRNA *)&RNA_RandomSensor,
	NULL,
	{(PropertyRNA*)&rna_RaySensor_axis, (PropertyRNA*)&rna_RaySensor_use_x_ray}},
	"RaySensor"	, NULL,NULL
, 0, "Ray Sensor", "Sensor to detect intersections with a ray emanating from the current object",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sensor */
PointerPropertyRNA rna_Sensor_rna_type = {
	{(PropertyRNA*)&rna_Sensor_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sensor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Sensor_name = {
	{(PropertyRNA*)&rna_Sensor_show_expanded, (PropertyRNA*)&rna_Sensor_rna_type,
	-1, "name", 1, "Name",
	"Sensor name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_name_get, Sensor_name_length, Sensor_name_set, 32, ""
};

BooleanPropertyRNA rna_Sensor_show_expanded = {
	{(PropertyRNA*)&rna_Sensor_frequency, (PropertyRNA*)&rna_Sensor_name,
	-1, "show_expanded", 4099, "Expanded",
	"Set sensor expanded in the user interface",
	4,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_show_expanded_get, Sensor_show_expanded_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Sensor_frequency = {
	{(PropertyRNA*)&rna_Sensor_invert, (PropertyRNA*)&rna_Sensor_show_expanded,
	-1, "frequency", 8195, "Frequency",
	"Delay between repeated pulses(in logic tics, 0=no delay)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSensor, freq), 1, NULL},
	Sensor_frequency_get, Sensor_frequency_set, NULL, NULL, NULL,
	0, 10000, 0, 10000, 1, 0, NULL
};

BooleanPropertyRNA rna_Sensor_invert = {
	{(PropertyRNA*)&rna_Sensor_use_level, (PropertyRNA*)&rna_Sensor_frequency,
	-1, "invert", 8195, "Invert Output",
	"Invert the level(output) of this sensor",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	offsetof(bSensor, invert), 1, NULL},
	Sensor_invert_get, Sensor_invert_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sensor_use_level = {
	{(PropertyRNA*)&rna_Sensor_pin, (PropertyRNA*)&rna_Sensor_invert,
	-1, "use_level", 3, "Level",
	"Level detector, trigger controllers of new states(only applicable upon logic state transition)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_use_level_get, Sensor_use_level_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sensor_pin = {
	{(PropertyRNA*)&rna_Sensor_rna_properties, (PropertyRNA*)&rna_Sensor_use_level,
	-1, "pin", 4099, "Pinned",
	"Display when not linked to a visible states controller",
	42,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_pin_get, Sensor_pin_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Sensor_rna_properties = {
	{(PropertyRNA*)&rna_Sensor_use_pulse_false_level, (PropertyRNA*)&rna_Sensor_pin,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sensor_rna_properties_begin, Sensor_rna_properties_next, Sensor_rna_properties_end, Sensor_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Sensor_use_pulse_false_level = {
	{(PropertyRNA*)&rna_Sensor_use_pulse_true_level, (PropertyRNA*)&rna_Sensor_rna_properties,
	-1, "use_pulse_false_level", 3, "Pulse False Level",
	"Activate FALSE level triggering (pulse mode)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_use_pulse_false_level_get, Sensor_use_pulse_false_level_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sensor_use_pulse_true_level = {
	{(PropertyRNA*)&rna_Sensor_use_tap, (PropertyRNA*)&rna_Sensor_use_pulse_false_level,
	-1, "use_pulse_true_level", 3, "Pulse True Level",
	"Activate TRUE level triggering (pulse mode)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_use_pulse_true_level_get, Sensor_use_pulse_true_level_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sensor_use_tap = {
	{(PropertyRNA*)&rna_Sensor_type, (PropertyRNA*)&rna_Sensor_use_pulse_true_level,
	-1, "use_tap", 3, "Tap",
	"Trigger controllers only for an instant, even while the sensor remains true",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_use_tap_get, Sensor_use_tap_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Sensor_type_items[16] = {
	{12, "ACTUATOR", 0, "Actuator", ""},
	{0, "ALWAYS", 0, "Always", ""},
	{14, "ARMATURE", 0, "Armature", ""},
	{6, "COLLISION", 0, "Collision", ""},
	{13, "DELAY", 0, "Delay", ""},
	{11, "JOYSTICK", 0, "Joystick", ""},
	{3, "KEYBOARD", 0, "Keyboard", ""},
	{10, "MESSAGE", 0, "Message", ""},
	{5, "MOUSE", 0, "Mouse", ""},
	{2, "NEAR", 0, "Near", ""},
	{4, "PROPERTY", 0, "Property", ""},
	{7, "RADAR", 0, "Radar", ""},
	{8, "RANDOM", 0, "Random", ""},
	{9, "RAY", 0, "Ray", ""},
	{1, "TOUCH", 0, "Touch", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Sensor_type = {
	{NULL, (PropertyRNA*)&rna_Sensor_use_tap,
	-1, "type", 1, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	Sensor_type_get, Sensor_type_set, rna_Sensor_type_itemf, rna_Sensor_type_items, 15, 0
};

PointerPropertyRNA rna_Sensor_link_controller = {
	{NULL, NULL,
	-1, "controller", 4, "",
	"Controller to link to.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Controller
};

FunctionRNA rna_Sensor_link_func = {
	{(FunctionRNA*)&rna_Sensor_unlink_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_Sensor_link_controller, (PropertyRNA*)&rna_Sensor_link_controller}},
	"link", 0, "Link the sensor to a controller.",
	Sensor_link_call,
	NULL
};

PointerPropertyRNA rna_Sensor_unlink_controller = {
	{NULL, NULL,
	-1, "controller", 4, "",
	"Controller to unlink from.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Controller
};

FunctionRNA rna_Sensor_unlink_func = {
	{NULL, (FunctionRNA*)&rna_Sensor_link_func,
	NULL,
	{(PropertyRNA*)&rna_Sensor_unlink_controller, (PropertyRNA*)&rna_Sensor_unlink_controller}},
	"unlink", 0, "Unlink the sensor from a controller.",
	Sensor_unlink_call,
	NULL
};

StructRNA RNA_Sensor = {
	{(ContainerRNA *)&RNA_Sequence, (ContainerRNA *)&RNA_Sculpt,
	NULL,
	{(PropertyRNA*)&rna_Sensor_rna_type, (PropertyRNA*)&rna_Sensor_type}},
	"Sensor"	, NULL,NULL
, 0, "Sensor", "Game engine logic brick to detect events",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	NULL,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_Sensor_link_func, (FunctionRNA*)&rna_Sensor_unlink_func}
};

/* Touch Sensor */
PointerPropertyRNA rna_TouchSensor_material = {
	{NULL, NULL,
	-1, "material", 65, "Material",
	"Only look for objects with this material (blank = all objects)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	TouchSensor_material_get, TouchSensor_material_set, NULL, NULL,&RNA_Material
};

StructRNA RNA_TouchSensor = {
	{(ContainerRNA *)&RNA_TrackToConstraint, (ContainerRNA *)&RNA_ToolSettings,
	NULL,
	{(PropertyRNA*)&rna_TouchSensor_material, (PropertyRNA*)&rna_TouchSensor_material}},
	"TouchSensor"	, NULL,NULL
, 0, "Touch Sensor", "Sensor to detect objects colliding with the current object",
	17,
	(PropertyRNA*)&rna_Sensor_name, (PropertyRNA*)&rna_Sensor_rna_properties,
	&RNA_Sensor,
	NULL,
	rna_Sensor_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

