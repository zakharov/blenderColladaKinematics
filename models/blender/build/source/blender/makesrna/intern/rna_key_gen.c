
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

#include "rna_key.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

PointerPropertyRNA rna_Key_animation_data;
CollectionPropertyRNA rna_Key_keys;
PointerPropertyRNA rna_Key_reference_key;
BooleanPropertyRNA rna_Key_use_relative;
IntPropertyRNA rna_Key_slurph;
PointerPropertyRNA rna_Key_user;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_ShapeKey_rna_type;
StringPropertyRNA rna_ShapeKey_name;
CollectionPropertyRNA rna_ShapeKey_data;
FloatPropertyRNA rna_ShapeKey_frame;
EnumPropertyRNA rna_ShapeKey_interpolation;
BooleanPropertyRNA rna_ShapeKey_mute;
CollectionPropertyRNA rna_ShapeKey_rna_properties;
PointerPropertyRNA rna_ShapeKey_relative_key;
FloatPropertyRNA rna_ShapeKey_slider_max;
FloatPropertyRNA rna_ShapeKey_slider_min;
FloatPropertyRNA rna_ShapeKey_value;
StringPropertyRNA rna_ShapeKey_vertex_group;


PointerPropertyRNA rna_ShapeKeyBezierPoint_rna_type;
FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_left;
FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_right;
FloatPropertyRNA rna_ShapeKeyBezierPoint_co;
CollectionPropertyRNA rna_ShapeKeyBezierPoint_rna_properties;


PointerPropertyRNA rna_ShapeKeyCurvePoint_rna_type;
FloatPropertyRNA rna_ShapeKeyCurvePoint_co;
CollectionPropertyRNA rna_ShapeKeyCurvePoint_rna_properties;
FloatPropertyRNA rna_ShapeKeyCurvePoint_tilt;


PointerPropertyRNA rna_ShapeKeyPoint_rna_type;
FloatPropertyRNA rna_ShapeKeyPoint_co;
CollectionPropertyRNA rna_ShapeKeyPoint_rna_properties;

PointerRNA Key_animation_data_get(PointerRNA *ptr)
{
	Key *data= (Key*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

static PointerRNA Key_keys_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ShapeKey, rna_iterator_listbase_get(iter));
}

void Key_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Key *data= (Key*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Key_keys;

	rna_iterator_listbase_begin(iter, &data->block, NULL);

	if(iter->valid)
		iter->ptr= Key_keys_get(iter);
}

void Key_keys_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Key_keys_get(iter);
}

void Key_keys_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Key_keys_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Key_keys_begin(&iter, ptr);

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
		if(found) *r_ptr = Key_keys_get(&iter);
	}

	Key_keys_end(&iter);

	return found;
}

PointerRNA Key_reference_key_get(PointerRNA *ptr)
{
	Key *data= (Key*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ShapeKey, data->refkey);
}

int Key_use_relative_get(PointerRNA *ptr)
{
	Key *data= (Key*)(ptr->data);
	return (((data->type) & 1) != 0);
}

void Key_use_relative_set(PointerRNA *ptr, int value)
{
	Key *data= (Key*)(ptr->data);
	if(value) data->type |= 1;
	else data->type &= ~1;
}

int Key_slurph_get(PointerRNA *ptr)
{
	Key *data= (Key*)(ptr->data);
	return (int)(data->slurph);
}

void Key_slurph_set(PointerRNA *ptr, int value)
{
	Key *data= (Key*)(ptr->data);
	data->slurph= CLAMPIS(value, -500, 500);
}

PointerRNA Key_user_get(PointerRNA *ptr)
{
	Key *data= (Key*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->from);
}

PointerRNA ShapeKey_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ShapeKey_name_get(PointerRNA *ptr, char *value)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int ShapeKey_name_length(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return strlen(data->name);
}

void ShapeKey_name_set(PointerRNA *ptr, const char *value)
{
	rna_ShapeKey_name_set(ptr, value);
}

int ShapeKey_data_length(PointerRNA *ptr)
{
	return rna_ShapeKey_data_length(ptr);
}

static PointerRNA ShapeKey_data_get(CollectionPropertyIterator *iter)
{
	return rna_ShapeKey_data_get(iter);
}

void ShapeKey_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ShapeKey_data;

	rna_ShapeKey_data_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ShapeKey_data_get(iter);
}

void ShapeKey_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= ShapeKey_data_get(iter);
}

void ShapeKey_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int ShapeKey_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	ShapeKey_data_begin(&iter, ptr);

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
		if(found) *r_ptr = ShapeKey_data_get(&iter);
	}

	ShapeKey_data_end(&iter);

	return found;
}

float ShapeKey_frame_get(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return (float)(data->pos);
}

int ShapeKey_interpolation_get(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return (int)(data->type);
}

void ShapeKey_interpolation_set(PointerRNA *ptr, int value)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	data->type= value;
}

int ShapeKey_mute_get(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ShapeKey_mute_set(PointerRNA *ptr, int value)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA ShapeKey_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ShapeKey_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ShapeKey_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ShapeKey_rna_properties_get(iter);
}

void ShapeKey_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ShapeKey_rna_properties_get(iter);
}

void ShapeKey_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ShapeKey_relative_key_get(PointerRNA *ptr)
{
	return rna_ShapeKey_relative_key_get(ptr);
}

void ShapeKey_relative_key_set(PointerRNA *ptr, PointerRNA value)
{
	rna_ShapeKey_relative_key_set(ptr, value);
}

float ShapeKey_slider_max_get(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return (float)(data->slidermax);
}

void ShapeKey_slider_max_set(PointerRNA *ptr, float value)
{
	rna_ShapeKey_slider_max_set(ptr, value);
}

float ShapeKey_slider_min_get(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return (float)(data->slidermin);
}

void ShapeKey_slider_min_set(PointerRNA *ptr, float value)
{
	rna_ShapeKey_slider_min_set(ptr, value);
}

float ShapeKey_value_get(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return (float)(data->curval);
}

void ShapeKey_value_set(PointerRNA *ptr, float value)
{
	rna_ShapeKey_value_set(ptr, value);
}

void ShapeKey_vertex_group_get(PointerRNA *ptr, char *value)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	BLI_strncpy(value, data->vgroup, 32);
}

int ShapeKey_vertex_group_length(PointerRNA *ptr)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	return strlen(data->vgroup);
}

void ShapeKey_vertex_group_set(PointerRNA *ptr, const char *value)
{
	KeyBlock *data= (KeyBlock*)(ptr->data);
	BLI_strncpy(data->vgroup, value, 32);
}

PointerRNA ShapeKeyBezierPoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ShapeKeyBezierPoint_handle_left_get(PointerRNA *ptr, float values[3])
{
	rna_ShapeKeyBezierPoint_handle_1_co_get(ptr, values);
}

void ShapeKeyBezierPoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
	rna_ShapeKeyBezierPoint_handle_1_co_set(ptr, values);
}

void ShapeKeyBezierPoint_handle_right_get(PointerRNA *ptr, float values[3])
{
	rna_ShapeKeyBezierPoint_handle_2_co_get(ptr, values);
}

void ShapeKeyBezierPoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
	rna_ShapeKeyBezierPoint_handle_2_co_set(ptr, values);
}

void ShapeKeyBezierPoint_co_get(PointerRNA *ptr, float values[3])
{
	rna_ShapeKeyBezierPoint_co_get(ptr, values);
}

void ShapeKeyBezierPoint_co_set(PointerRNA *ptr, const float values[3])
{
	rna_ShapeKeyBezierPoint_co_set(ptr, values);
}

static PointerRNA ShapeKeyBezierPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ShapeKeyBezierPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ShapeKeyBezierPoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ShapeKeyBezierPoint_rna_properties_get(iter);
}

void ShapeKeyBezierPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ShapeKeyBezierPoint_rna_properties_get(iter);
}

void ShapeKeyBezierPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ShapeKeyCurvePoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ShapeKeyCurvePoint_co_get(PointerRNA *ptr, float values[3])
{
	rna_ShapeKeyPoint_co_get(ptr, values);
}

void ShapeKeyCurvePoint_co_set(PointerRNA *ptr, const float values[3])
{
	rna_ShapeKeyPoint_co_set(ptr, values);
}

static PointerRNA ShapeKeyCurvePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ShapeKeyCurvePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ShapeKeyCurvePoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ShapeKeyCurvePoint_rna_properties_get(iter);
}

void ShapeKeyCurvePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ShapeKeyCurvePoint_rna_properties_get(iter);
}

void ShapeKeyCurvePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float ShapeKeyCurvePoint_tilt_get(PointerRNA *ptr)
{
	return rna_ShapeKeyCurvePoint_tilt_get(ptr);
}

void ShapeKeyCurvePoint_tilt_set(PointerRNA *ptr, float value)
{
	rna_ShapeKeyCurvePoint_tilt_set(ptr, value);
}

PointerRNA ShapeKeyPoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ShapeKeyPoint_co_get(PointerRNA *ptr, float values[3])
{
	rna_ShapeKeyPoint_co_get(ptr, values);
}

void ShapeKeyPoint_co_set(PointerRNA *ptr, const float values[3])
{
	rna_ShapeKeyPoint_co_set(ptr, values);
}

static PointerRNA ShapeKeyPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ShapeKeyPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ShapeKeyPoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ShapeKeyPoint_rna_properties_get(iter);
}

void ShapeKeyPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ShapeKeyPoint_rna_properties_get(iter);
}

void ShapeKeyPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}






/* Key */
PointerPropertyRNA rna_Key_animation_data = {
	{(PropertyRNA*)&rna_Key_keys, NULL,
	-1, "animation_data", 0, "Animation Data",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Key_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

CollectionPropertyRNA rna_Key_keys = {
	{(PropertyRNA*)&rna_Key_reference_key, (PropertyRNA*)&rna_Key_animation_data,
	-1, "keys", 0, "Keys",
	"Shape keys",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Key_keys_begin, Key_keys_next, Key_keys_end, Key_keys_get, NULL, Key_keys_lookup_int, NULL, &RNA_ShapeKey
};

PointerPropertyRNA rna_Key_reference_key = {
	{(PropertyRNA*)&rna_Key_use_relative, (PropertyRNA*)&rna_Key_keys,
	-1, "reference_key", 262144, "Reference Key",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Key_reference_key_get, NULL, NULL, NULL,&RNA_ShapeKey
};

BooleanPropertyRNA rna_Key_use_relative = {
	{(PropertyRNA*)&rna_Key_slurph, (PropertyRNA*)&rna_Key_reference_key,
	-1, "use_relative", 3, "Relative",
	"Makes shape keys relative",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Key_use_relative_get, Key_use_relative_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Key_slurph = {
	{(PropertyRNA*)&rna_Key_user, (PropertyRNA*)&rna_Key_use_relative,
	-1, "slurph", 8195, "Slurph",
	"Creates a delay in amount of frames in applying keypositions, first vertex goes first",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	offsetof(Key, slurph), 1, NULL},
	Key_slurph_get, Key_slurph_set, NULL, NULL, NULL,
	-500, 500, -500, 500, 1, 0, NULL
};

PointerPropertyRNA rna_Key_user = {
	{NULL, (PropertyRNA*)&rna_Key_slurph,
	-1, "user", 262208, "User",
	"Datablock using these shape keys",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Key_user_get, NULL, NULL, NULL,&RNA_ID
};

StructRNA RNA_Key = {
	{(ContainerRNA *)&RNA_KeyConfig, (ContainerRNA *)&RNA_JoystickSensor,
	NULL,
	{(PropertyRNA*)&rna_Key_animation_data, (PropertyRNA*)&rna_Key_user}},
	"Key"	, NULL,NULL
, 3, "Key", "Shape keys datablock containing different shapes of geometric datablocks",
	176,
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

/* Shape Key */
PointerPropertyRNA rna_ShapeKey_rna_type = {
	{(PropertyRNA*)&rna_ShapeKey_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_ShapeKey_name = {
	{(PropertyRNA*)&rna_ShapeKey_data, (PropertyRNA*)&rna_ShapeKey_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_name_get, ShapeKey_name_length, ShapeKey_name_set, 32, ""
};

CollectionPropertyRNA rna_ShapeKey_data = {
	{(PropertyRNA*)&rna_ShapeKey_frame, (PropertyRNA*)&rna_ShapeKey_name,
	-1, "data", 0, "Data",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_data_begin, ShapeKey_data_next, ShapeKey_data_end, ShapeKey_data_get, ShapeKey_data_length, ShapeKey_data_lookup_int, NULL, &RNA_UnknownType
};

FloatPropertyRNA rna_ShapeKey_frame = {
	{(PropertyRNA*)&rna_ShapeKey_interpolation, (PropertyRNA*)&rna_ShapeKey_data,
	-1, "frame", 8194, "Frame",
	"Frame for absolute keys",
	0,
	PROP_FLOAT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	offsetof(KeyBlock, pos), 4, NULL},
	ShapeKey_frame_get, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_ShapeKey_interpolation_items[4] = {
	{0, "KEY_LINEAR", 0, "Linear", ""},
	{1, "KEY_CARDINAL", 0, "Cardinal", ""},
	{2, "KEY_BSPLINE", 0, "BSpline", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ShapeKey_interpolation = {
	{(PropertyRNA*)&rna_ShapeKey_mute, (PropertyRNA*)&rna_ShapeKey_frame,
	-1, "interpolation", 3, "Interpolation",
	"Interpolation type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_interpolation_get, ShapeKey_interpolation_set, NULL, rna_ShapeKey_interpolation_items, 3, 0
};

BooleanPropertyRNA rna_ShapeKey_mute = {
	{(PropertyRNA*)&rna_ShapeKey_rna_properties, (PropertyRNA*)&rna_ShapeKey_interpolation,
	-1, "mute", 4099, "Mute",
	"Mute this shape key",
	515,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_mute_get, ShapeKey_mute_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_ShapeKey_rna_properties = {
	{(PropertyRNA*)&rna_ShapeKey_relative_key, (PropertyRNA*)&rna_ShapeKey_mute,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_rna_properties_begin, ShapeKey_rna_properties_next, ShapeKey_rna_properties_end, ShapeKey_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_ShapeKey_relative_key = {
	{(PropertyRNA*)&rna_ShapeKey_slider_max, (PropertyRNA*)&rna_ShapeKey_rna_properties,
	-1, "relative_key", 1, "Relative Key",
	"Shape used as a relative key",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_relative_key_get, ShapeKey_relative_key_set, NULL, NULL,&RNA_ShapeKey
};

FloatPropertyRNA rna_ShapeKey_slider_max = {
	{(PropertyRNA*)&rna_ShapeKey_slider_min, (PropertyRNA*)&rna_ShapeKey_relative_key,
	-1, "slider_max", 3, "Slider Max",
	"Maximum for slider",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_slider_max_get, ShapeKey_slider_max_set, NULL, NULL, rna_ShapeKey_slider_max_range, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 1.0f, NULL
};

FloatPropertyRNA rna_ShapeKey_slider_min = {
	{(PropertyRNA*)&rna_ShapeKey_value, (PropertyRNA*)&rna_ShapeKey_slider_max,
	-1, "slider_min", 3, "Slider Min",
	"Minimum for slider",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_slider_min_get, ShapeKey_slider_min_set, NULL, NULL, rna_ShapeKey_slider_min_range, -10.0f, 10.0f, -10.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ShapeKey_value = {
	{(PropertyRNA*)&rna_ShapeKey_vertex_group, (PropertyRNA*)&rna_ShapeKey_slider_min,
	-1, "value", 3, "Value",
	"Value of shape key at the current frame",
	0,
	PROP_FLOAT, PROP_FACTOR|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_value_get, ShapeKey_value_set, NULL, NULL, rna_ShapeKey_value_range, -10.0f, 10.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_ShapeKey_vertex_group = {
	{NULL, (PropertyRNA*)&rna_ShapeKey_value,
	-1, "vertex_group", 1, "Vertex Group",
	"Vertex weight group, to blend with basis shape",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKey_vertex_group_get, ShapeKey_vertex_group_length, ShapeKey_vertex_group_set, 32, ""
};

StructRNA RNA_ShapeKey = {
	{(ContainerRNA *)&RNA_ShapeKeyBezierPoint, (ContainerRNA *)&RNA_ShapeActionActuator,
	NULL,
	{(PropertyRNA*)&rna_ShapeKey_rna_type, (PropertyRNA*)&rna_ShapeKey_vertex_group}},
	"ShapeKey"	, NULL,NULL
, 0, "Shape Key", "Shape key in a shape keys datablock",
	176,
	(PropertyRNA*)&rna_ShapeKey_name, (PropertyRNA*)&rna_ShapeKey_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKey_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shape Key Bezier Point */
PointerPropertyRNA rna_ShapeKeyBezierPoint_rna_type = {
	{(PropertyRNA*)&rna_ShapeKeyBezierPoint_handle_left, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKeyBezierPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ShapeKeyBezierPoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_left = {
	{(PropertyRNA*)&rna_ShapeKeyBezierPoint_handle_right, (PropertyRNA*)&rna_ShapeKeyBezierPoint_rna_type,
	-1, "handle_left", 3, "Handle 1 Location",
	"",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ShapeKeyBezierPoint_handle_left_get, ShapeKeyBezierPoint_handle_left_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_handle_left_default
};

static float rna_ShapeKeyBezierPoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_handle_right = {
	{(PropertyRNA*)&rna_ShapeKeyBezierPoint_co, (PropertyRNA*)&rna_ShapeKeyBezierPoint_handle_left,
	-1, "handle_right", 3, "Handle 2 Location",
	"",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ShapeKeyBezierPoint_handle_right_get, ShapeKeyBezierPoint_handle_right_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_handle_right_default
};

static float rna_ShapeKeyBezierPoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyBezierPoint_co = {
	{(PropertyRNA*)&rna_ShapeKeyBezierPoint_rna_properties, (PropertyRNA*)&rna_ShapeKeyBezierPoint_handle_right,
	-1, "co", 3, "Location",
	"",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ShapeKeyBezierPoint_co_get, ShapeKeyBezierPoint_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyBezierPoint_co_default
};

CollectionPropertyRNA rna_ShapeKeyBezierPoint_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ShapeKeyBezierPoint_co,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKeyBezierPoint_rna_properties_begin, ShapeKeyBezierPoint_rna_properties_next, ShapeKeyBezierPoint_rna_properties_end, ShapeKeyBezierPoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_ShapeKeyBezierPoint = {
	{(ContainerRNA *)&RNA_ShapeKeyCurvePoint, (ContainerRNA *)&RNA_ShapeKey,
	NULL,
	{(PropertyRNA*)&rna_ShapeKeyBezierPoint_rna_type, (PropertyRNA*)&rna_ShapeKeyBezierPoint_rna_properties}},
	"ShapeKeyBezierPoint"	, NULL,NULL
, 0, "Shape Key Bezier Point", "Point in a shape key for bezier curves",
	17,
	NULL, (PropertyRNA*)&rna_ShapeKeyBezierPoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKeyPoint_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shape Key Curve Point */
PointerPropertyRNA rna_ShapeKeyCurvePoint_rna_type = {
	{(PropertyRNA*)&rna_ShapeKeyCurvePoint_co, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKeyCurvePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ShapeKeyCurvePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_co = {
	{(PropertyRNA*)&rna_ShapeKeyCurvePoint_rna_properties, (PropertyRNA*)&rna_ShapeKeyCurvePoint_rna_type,
	-1, "co", 3, "Location",
	"",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ShapeKeyCurvePoint_co_get, ShapeKeyCurvePoint_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyCurvePoint_co_default
};

CollectionPropertyRNA rna_ShapeKeyCurvePoint_rna_properties = {
	{(PropertyRNA*)&rna_ShapeKeyCurvePoint_tilt, (PropertyRNA*)&rna_ShapeKeyCurvePoint_co,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKeyCurvePoint_rna_properties_begin, ShapeKeyCurvePoint_rna_properties_next, ShapeKeyCurvePoint_rna_properties_end, ShapeKeyCurvePoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_ShapeKeyCurvePoint_tilt = {
	{NULL, (PropertyRNA*)&rna_ShapeKeyCurvePoint_rna_properties,
	-1, "tilt", 3, "Tilt",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKeyCurvePoint_tilt_get, ShapeKeyCurvePoint_tilt_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ShapeKeyCurvePoint = {
	{(ContainerRNA *)&RNA_ShapeKeyPoint, (ContainerRNA *)&RNA_ShapeKeyBezierPoint,
	NULL,
	{(PropertyRNA*)&rna_ShapeKeyCurvePoint_rna_type, (PropertyRNA*)&rna_ShapeKeyCurvePoint_tilt}},
	"ShapeKeyCurvePoint"	, NULL,NULL
, 0, "Shape Key Curve Point", "Point in a shape key for curves",
	17,
	NULL, (PropertyRNA*)&rna_ShapeKeyCurvePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKeyPoint_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Shape Key Point */
PointerPropertyRNA rna_ShapeKeyPoint_rna_type = {
	{(PropertyRNA*)&rna_ShapeKeyPoint_co, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKeyPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ShapeKeyPoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ShapeKeyPoint_co = {
	{(PropertyRNA*)&rna_ShapeKeyPoint_rna_properties, (PropertyRNA*)&rna_ShapeKeyPoint_rna_type,
	-1, "co", 3, "Location",
	"",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Key_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ShapeKeyPoint_co_get, ShapeKeyPoint_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ShapeKeyPoint_co_default
};

CollectionPropertyRNA rna_ShapeKeyPoint_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ShapeKeyPoint_co,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ShapeKeyPoint_rna_properties_begin, ShapeKeyPoint_rna_properties_next, ShapeKeyPoint_rna_properties_end, ShapeKeyPoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_ShapeKeyPoint = {
	{(ContainerRNA *)&RNA_ShrinkwrapConstraint, (ContainerRNA *)&RNA_ShapeKeyCurvePoint,
	NULL,
	{(PropertyRNA*)&rna_ShapeKeyPoint_rna_type, (PropertyRNA*)&rna_ShapeKeyPoint_rna_properties}},
	"ShapeKeyPoint"	, NULL,NULL
, 0, "Shape Key Point", "Point in a shape key",
	17,
	NULL, (PropertyRNA*)&rna_ShapeKeyPoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ShapeKeyPoint_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

