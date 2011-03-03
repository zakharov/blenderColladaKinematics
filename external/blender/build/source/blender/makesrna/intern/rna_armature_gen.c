
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

#include "rna_armature.c"
#include "rna_armature_api.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

PointerPropertyRNA rna_Armature_animation_data;
BooleanPropertyRNA rna_Armature_use_auto_ik;
CollectionPropertyRNA rna_Armature_bones;
BooleanPropertyRNA rna_Armature_use_deform_envelopes;
BooleanPropertyRNA rna_Armature_use_deform_vertex_groups;
BooleanPropertyRNA rna_Armature_use_deform_delay;
BooleanPropertyRNA rna_Armature_show_axes;
BooleanPropertyRNA rna_Armature_show_group_colors;
BooleanPropertyRNA rna_Armature_show_bone_custom_shapes;
BooleanPropertyRNA rna_Armature_show_only_ghost_selected;
BooleanPropertyRNA rna_Armature_show_names;
EnumPropertyRNA rna_Armature_draw_type;
CollectionPropertyRNA rna_Armature_edit_bones;
EnumPropertyRNA rna_Armature_ghost_type;
IntPropertyRNA rna_Armature_ghost_frame_end;
IntPropertyRNA rna_Armature_ghost_size;
IntPropertyRNA rna_Armature_ghost_frame_start;
IntPropertyRNA rna_Armature_ghost_step;
BooleanPropertyRNA rna_Armature_layers_protected;
EnumPropertyRNA rna_Armature_pose_position;
BooleanPropertyRNA rna_Armature_use_deform_preserve_volume;
BooleanPropertyRNA rna_Armature_layers;
BooleanPropertyRNA rna_Armature_use_mirror_x;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_ArmatureBones_rna_type;
PointerPropertyRNA rna_ArmatureBones_active;
CollectionPropertyRNA rna_ArmatureBones_rna_properties;


PointerPropertyRNA rna_ArmatureEditBones_rna_type;
PointerPropertyRNA rna_ArmatureEditBones_active;
CollectionPropertyRNA rna_ArmatureEditBones_rna_properties;

extern FunctionRNA rna_ArmatureEditBones_new_func;
extern StringPropertyRNA rna_ArmatureEditBones_new_name;
extern PointerPropertyRNA rna_ArmatureEditBones_new_bone;

extern FunctionRNA rna_ArmatureEditBones_remove_func;
extern PointerPropertyRNA rna_ArmatureEditBones_remove_bone;



PointerPropertyRNA rna_Bone_rna_type;
StringPropertyRNA rna_Bone_name;
FloatPropertyRNA rna_Bone_head_local;
FloatPropertyRNA rna_Bone_tail_local;
FloatPropertyRNA rna_Bone_bbone_x;
FloatPropertyRNA rna_Bone_bbone_z;
FloatPropertyRNA rna_Bone_bbone_in;
FloatPropertyRNA rna_Bone_bbone_out;
IntPropertyRNA rna_Bone_bbone_segments;
FloatPropertyRNA rna_Bone_matrix_local;
FloatPropertyRNA rna_Bone_matrix;
CollectionPropertyRNA rna_Bone_children;
BooleanPropertyRNA rna_Bone_use_connect;
BooleanPropertyRNA rna_Bone_use_cyclic_offset;
BooleanPropertyRNA rna_Bone_use_deform;
BooleanPropertyRNA rna_Bone_show_wire;
FloatPropertyRNA rna_Bone_envelope_distance;
FloatPropertyRNA rna_Bone_envelope_weight;
FloatPropertyRNA rna_Bone_head_radius;
FloatPropertyRNA rna_Bone_tail_radius;
FloatPropertyRNA rna_Bone_head;
BooleanPropertyRNA rna_Bone_hide;
BooleanPropertyRNA rna_Bone_use_inherit_rotation;
BooleanPropertyRNA rna_Bone_use_inherit_scale;
BooleanPropertyRNA rna_Bone_layers;
BooleanPropertyRNA rna_Bone_use_local_location;
BooleanPropertyRNA rna_Bone_use_envelope_multiply;
PointerPropertyRNA rna_Bone_parent;
CollectionPropertyRNA rna_Bone_rna_properties;
BooleanPropertyRNA rna_Bone_select;
BooleanPropertyRNA rna_Bone_select_head;
BooleanPropertyRNA rna_Bone_select_tail;
BooleanPropertyRNA rna_Bone_hide_select;
FloatPropertyRNA rna_Bone_tail;

extern FunctionRNA rna_Bone_evaluate_envelope_func;
extern FloatPropertyRNA rna_Bone_evaluate_envelope_point;
extern FloatPropertyRNA rna_Bone_evaluate_envelope_factor;



PointerPropertyRNA rna_EditBone_rna_type;
StringPropertyRNA rna_EditBone_name;
FloatPropertyRNA rna_EditBone_bbone_x;
FloatPropertyRNA rna_EditBone_bbone_z;
FloatPropertyRNA rna_EditBone_bbone_in;
FloatPropertyRNA rna_EditBone_bbone_out;
IntPropertyRNA rna_EditBone_bbone_segments;
BooleanPropertyRNA rna_EditBone_use_connect;
BooleanPropertyRNA rna_EditBone_use_cyclic_offset;
BooleanPropertyRNA rna_EditBone_use_deform;
BooleanPropertyRNA rna_EditBone_show_wire;
FloatPropertyRNA rna_EditBone_matrix;
FloatPropertyRNA rna_EditBone_envelope_distance;
FloatPropertyRNA rna_EditBone_envelope_weight;
FloatPropertyRNA rna_EditBone_head_radius;
FloatPropertyRNA rna_EditBone_tail_radius;
FloatPropertyRNA rna_EditBone_head;
BooleanPropertyRNA rna_EditBone_select_head;
BooleanPropertyRNA rna_EditBone_hide;
BooleanPropertyRNA rna_EditBone_use_inherit_rotation;
BooleanPropertyRNA rna_EditBone_use_inherit_scale;
BooleanPropertyRNA rna_EditBone_layers;
BooleanPropertyRNA rna_EditBone_use_local_location;
BooleanPropertyRNA rna_EditBone_lock;
BooleanPropertyRNA rna_EditBone_use_envelope_multiply;
PointerPropertyRNA rna_EditBone_parent;
CollectionPropertyRNA rna_EditBone_rna_properties;
FloatPropertyRNA rna_EditBone_roll;
BooleanPropertyRNA rna_EditBone_select;
BooleanPropertyRNA rna_EditBone_hide_select;
FloatPropertyRNA rna_EditBone_tail;
BooleanPropertyRNA rna_EditBone_select_tail;

extern FunctionRNA rna_EditBone_align_roll_func;
extern FloatPropertyRNA rna_EditBone_align_roll_vector;


PointerRNA Armature_animation_data_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

int Armature_use_auto_ik_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void Armature_use_auto_ik_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->flag |= 512;
	else data->flag &= ~512;
}

static PointerRNA Armature_bones_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Bone, rna_iterator_listbase_get(iter));
}

void Armature_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Armature_bones;

	rna_iterator_listbase_begin(iter, &data->bonebase, NULL);

	if(iter->valid)
		iter->ptr= Armature_bones_get(iter);
}

void Armature_bones_next(CollectionPropertyIterator *iter)
{
	rna_Armature_bones_next(iter);

	if(iter->valid)
		iter->ptr= Armature_bones_get(iter);
}

void Armature_bones_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Armature_use_deform_envelopes_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->deformflag) & 2) != 0);
}

void Armature_use_deform_envelopes_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->deformflag |= 2;
	else data->deformflag &= ~2;
}

int Armature_use_deform_vertex_groups_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->deformflag) & 1) != 0);
}

void Armature_use_deform_vertex_groups_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->deformflag |= 1;
	else data->deformflag &= ~1;
}

int Armature_use_deform_delay_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void Armature_use_deform_delay_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->flag |= 64;
	else data->flag &= ~64;
}

int Armature_show_axes_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Armature_show_axes_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int Armature_show_group_colors_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void Armature_show_group_colors_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int Armature_show_bone_custom_shapes_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return !(((data->flag) & 1024) != 0);
}

void Armature_show_bone_custom_shapes_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(!value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int Armature_show_only_ghost_selected_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void Armature_show_only_ghost_selected_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int Armature_show_names_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void Armature_show_names_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int Armature_draw_type_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (int)(data->drawtype);
}

void Armature_draw_type_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	data->drawtype= value;
}

static PointerRNA Armature_edit_bones_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_EditBone, rna_iterator_listbase_get(iter));
}

void Armature_edit_bones_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Armature_edit_bones;

	rna_iterator_listbase_begin(iter, data->edbo, NULL);

	if(iter->valid)
		iter->ptr= Armature_edit_bones_get(iter);
}

void Armature_edit_bones_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Armature_edit_bones_get(iter);
}

void Armature_edit_bones_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Armature_edit_bones_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Armature_edit_bones_begin(&iter, ptr);

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
		if(found) *r_ptr = Armature_edit_bones_get(&iter);
	}

	Armature_edit_bones_end(&iter);

	return found;
}

int Armature_ghost_type_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (int)(data->ghosttype);
}

void Armature_ghost_type_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	data->ghosttype= value;
}

int Armature_ghost_frame_end_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (int)(data->ghostef);
}

void Armature_ghost_frame_end_set(PointerRNA *ptr, int value)
{
	rna_Armature_ghost_end_frame_set(ptr, value);
}

int Armature_ghost_size_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (int)(data->ghostsize);
}

void Armature_ghost_size_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	data->ghostsize= CLAMPIS(value, 1, 20);
}

int Armature_ghost_frame_start_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (int)(data->ghostsf);
}

void Armature_ghost_frame_start_set(PointerRNA *ptr, int value)
{
	rna_Armature_ghost_start_frame_set(ptr, value);
}

int Armature_ghost_step_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (int)(data->ghostep);
}

void Armature_ghost_step_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	data->ghostep= CLAMPIS(value, 0, 30);
}

void Armature_layers_protected_get(PointerRNA *ptr, int values[32])
{
	bArmature *data= (bArmature*)(ptr->data);
	int i;

	for(i=0; i<32; i++) {
		values[i]= ((data->layer_protected & (1<<i)) != 0);
	}
}

void Armature_layers_protected_set(PointerRNA *ptr, const int values[32])
{
	bArmature *data= (bArmature*)(ptr->data);
	int i;

	for(i=0; i<32; i++) {
		if(values[i]) data->layer_protected |= (1<<i);
		else data->layer_protected &= ~(1<<i);
	}
}

int Armature_pose_position_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return ((data->flag) & 1);
}

void Armature_pose_position_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	data->flag &= ~1;
	data->flag |= value;
}

int Armature_use_deform_preserve_volume_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->deformflag) & 4) != 0);
}

void Armature_use_deform_preserve_volume_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->deformflag |= 4;
	else data->deformflag &= ~4;
}

void Armature_layers_get(PointerRNA *ptr, int values[32])
{
	bArmature *data= (bArmature*)(ptr->data);
	int i;

	for(i=0; i<32; i++) {
		values[i]= ((data->layer & (1<<i)) != 0);
	}
}

void Armature_layers_set(PointerRNA *ptr, const int values[32])
{
	rna_Armature_layer_set(ptr, values);
}

int Armature_use_mirror_x_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void Armature_use_mirror_x_set(PointerRNA *ptr, int value)
{
	bArmature *data= (bArmature*)(ptr->data);
	if(value) data->flag |= 256;
	else data->flag &= ~256;
}

PointerRNA ArmatureBones_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ArmatureBones_active_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->act_bone);
}

void ArmatureBones_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Armature_act_bone_set(ptr, value);
}

static PointerRNA ArmatureBones_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ArmatureBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ArmatureBones_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ArmatureBones_rna_properties_get(iter);
}

void ArmatureBones_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ArmatureBones_rna_properties_get(iter);
}

void ArmatureBones_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ArmatureEditBones_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ArmatureEditBones_active_get(PointerRNA *ptr)
{
	bArmature *data= (bArmature*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_EditBone, data->act_edbone);
}

void ArmatureEditBones_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Armature_act_edit_bone_set(ptr, value);
}

static PointerRNA ArmatureEditBones_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ArmatureEditBones_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ArmatureEditBones_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ArmatureEditBones_rna_properties_get(iter);
}

void ArmatureEditBones_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ArmatureEditBones_rna_properties_get(iter);
}

void ArmatureEditBones_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Bone_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Bone_name_get(PointerRNA *ptr, char *value)
{
	Bone *data= (Bone*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int Bone_name_length(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return strlen(data->name);
}

void Bone_name_set(PointerRNA *ptr, const char *value)
{
	rna_Bone_name_set(ptr, value);
}

void Bone_head_local_get(PointerRNA *ptr, float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->arm_head)[i]);
	}
}

void Bone_head_local_set(PointerRNA *ptr, const float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->arm_head)[i]= values[i];
	}
}

void Bone_tail_local_get(PointerRNA *ptr, float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->arm_tail)[i]);
	}
}

void Bone_tail_local_set(PointerRNA *ptr, const float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->arm_tail)[i]= values[i];
	}
}

float Bone_bbone_x_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->xwidth);
}

void Bone_bbone_x_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->xwidth= CLAMPIS(value, 0.0f, 1000.0f);
}

float Bone_bbone_z_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->zwidth);
}

void Bone_bbone_z_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->zwidth= CLAMPIS(value, 0.0f, 1000.0f);
}

float Bone_bbone_in_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->ease1);
}

void Bone_bbone_in_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->ease1= CLAMPIS(value, 0.0f, 2.0f);
}

float Bone_bbone_out_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->ease2);
}

void Bone_bbone_out_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->ease2= CLAMPIS(value, 0.0f, 2.0f);
}

int Bone_bbone_segments_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (int)(data->segments);
}

void Bone_bbone_segments_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	data->segments= CLAMPIS(value, 1, 32);
}

void Bone_matrix_local_get(PointerRNA *ptr, float values[16])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		values[i]= (float)(((float*)data->arm_mat)[i]);
	}
}

void Bone_matrix_local_set(PointerRNA *ptr, const float values[16])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		((float*)data->arm_mat)[i]= values[i];
	}
}

void Bone_matrix_get(PointerRNA *ptr, float values[9])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<9; i++) {
		values[i]= (float)(((float*)data->bone_mat)[i]);
	}
}

void Bone_matrix_set(PointerRNA *ptr, const float values[9])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<9; i++) {
		((float*)data->bone_mat)[i]= values[i];
	}
}

static PointerRNA Bone_children_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Bone, rna_iterator_listbase_get(iter));
}

void Bone_children_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Bone_children;

	rna_iterator_listbase_begin(iter, &data->childbase, NULL);

	if(iter->valid)
		iter->ptr= Bone_children_get(iter);
}

void Bone_children_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Bone_children_get(iter);
}

void Bone_children_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Bone_children_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Bone_children_begin(&iter, ptr);

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
		if(found) *r_ptr = Bone_children_get(&iter);
	}

	Bone_children_end(&iter);

	return found;
}

int Bone_use_connect_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

int Bone_use_cyclic_offset_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return !(((data->flag) & 262144) != 0);
}

void Bone_use_cyclic_offset_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(!value) data->flag |= 262144;
	else data->flag &= ~262144;
}

int Bone_use_deform_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return !(((data->flag) & 4096) != 0);
}

void Bone_use_deform_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(!value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int Bone_show_wire_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void Bone_show_wire_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(value) data->flag |= 131072;
	else data->flag &= ~131072;
}

float Bone_envelope_distance_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->dist);
}

void Bone_envelope_distance_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->dist= CLAMPIS(value, 0.0f, 1000.0f);
}

float Bone_envelope_weight_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->weight);
}

void Bone_envelope_weight_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->weight= CLAMPIS(value, 0.0f, 1000.0f);
}

float Bone_head_radius_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->rad_head);
}

void Bone_head_radius_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->rad_head= CLAMPIS(value, 0.0f, FLT_MAX);
}

float Bone_tail_radius_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (float)(data->rad_tail);
}

void Bone_tail_radius_set(PointerRNA *ptr, float value)
{
	Bone *data= (Bone*)(ptr->data);
	data->rad_tail= CLAMPIS(value, 0.0f, FLT_MAX);
}

void Bone_head_get(PointerRNA *ptr, float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->head)[i]);
	}
}

void Bone_head_set(PointerRNA *ptr, const float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->head)[i]= values[i];
	}
}

int Bone_hide_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void Bone_hide_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(value) data->flag |= 64;
	else data->flag &= ~64;
}

int Bone_use_inherit_rotation_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return !(((data->flag) & 512) != 0);
}

void Bone_use_inherit_rotation_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(!value) data->flag |= 512;
	else data->flag &= ~512;
}

int Bone_use_inherit_scale_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return !(((data->flag) & 32768) != 0);
}

void Bone_use_inherit_scale_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(!value) data->flag |= 32768;
	else data->flag &= ~32768;
}

void Bone_layers_get(PointerRNA *ptr, int values[32])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<32; i++) {
		values[i]= ((data->layer & (1<<i)) != 0);
	}
}

void Bone_layers_set(PointerRNA *ptr, const int values[32])
{
	rna_Bone_layer_set(ptr, values);
}

int Bone_use_local_location_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return !(((data->flag) & 4194304) != 0);
}

void Bone_use_local_location_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(!value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

int Bone_use_envelope_multiply_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void Bone_use_envelope_multiply_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(value) data->flag |= 2048;
	else data->flag &= ~2048;
}

PointerRNA Bone_parent_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Bone, data->parent);
}

static PointerRNA Bone_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Bone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Bone_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Bone_rna_properties_get(iter);
}

void Bone_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Bone_rna_properties_get(iter);
}

void Bone_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Bone_select_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Bone_select_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int Bone_select_head_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void Bone_select_head_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int Bone_select_tail_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Bone_select_tail_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int Bone_hide_select_get(PointerRNA *ptr)
{
	Bone *data= (Bone*)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void Bone_hide_select_set(PointerRNA *ptr, int value)
{
	Bone *data= (Bone*)(ptr->data);
	if(value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

void Bone_tail_get(PointerRNA *ptr, float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->tail)[i]);
	}
}

void Bone_tail_set(PointerRNA *ptr, const float values[3])
{
	Bone *data= (Bone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->tail)[i]= values[i];
	}
}

PointerRNA EditBone_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void EditBone_name_get(PointerRNA *ptr, char *value)
{
	EditBone *data= (EditBone*)(ptr->data);
	BLI_strncpy(value, data->name, sizeof(data->name));
}

int EditBone_name_length(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return strlen(data->name);
}

void EditBone_name_set(PointerRNA *ptr, const char *value)
{
	rna_EditBone_name_set(ptr, value);
}

float EditBone_bbone_x_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->xwidth);
}

void EditBone_bbone_x_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->xwidth= CLAMPIS(value, 0.0f, 1000.0f);
}

float EditBone_bbone_z_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->zwidth);
}

void EditBone_bbone_z_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->zwidth= CLAMPIS(value, 0.0f, 1000.0f);
}

float EditBone_bbone_in_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->ease1);
}

void EditBone_bbone_in_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->ease1= CLAMPIS(value, 0.0f, 2.0f);
}

float EditBone_bbone_out_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->ease2);
}

void EditBone_bbone_out_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->ease2= CLAMPIS(value, 0.0f, 2.0f);
}

int EditBone_bbone_segments_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (int)(data->segments);
}

void EditBone_bbone_segments_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->segments= CLAMPIS(value, 1, 32);
}

int EditBone_use_connect_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void EditBone_use_connect_set(PointerRNA *ptr, int value)
{
	rna_EditBone_connected_set(ptr, value);
}

int EditBone_use_cyclic_offset_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return !(((data->flag) & 262144) != 0);
}

void EditBone_use_cyclic_offset_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(!value) data->flag |= 262144;
	else data->flag &= ~262144;
}

int EditBone_use_deform_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return !(((data->flag) & 4096) != 0);
}

void EditBone_use_deform_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(!value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int EditBone_show_wire_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void EditBone_show_wire_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 131072;
	else data->flag &= ~131072;
}

void EditBone_matrix_get(PointerRNA *ptr, float values[16])
{
	rna_EditBone_matrix_get(ptr, values);
}

float EditBone_envelope_distance_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->dist);
}

void EditBone_envelope_distance_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->dist= CLAMPIS(value, 0.0f, 1000.0f);
}

float EditBone_envelope_weight_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->weight);
}

void EditBone_envelope_weight_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->weight= CLAMPIS(value, 0.0f, 1000.0f);
}

float EditBone_head_radius_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->rad_head);
}

void EditBone_head_radius_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->rad_head= CLAMPIS(value, 0.0f, FLT_MAX);
}

float EditBone_tail_radius_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->rad_tail);
}

void EditBone_tail_radius_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->rad_tail= CLAMPIS(value, 0.0f, FLT_MAX);
}

void EditBone_head_get(PointerRNA *ptr, float values[3])
{
	EditBone *data= (EditBone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)((data->head)[i]);
	}
}

void EditBone_head_set(PointerRNA *ptr, const float values[3])
{
	EditBone *data= (EditBone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		(data->head)[i]= values[i];
	}
}

int EditBone_select_head_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void EditBone_select_head_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int EditBone_hide_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 1024) != 0);
}

void EditBone_hide_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 1024;
	else data->flag &= ~1024;
}

int EditBone_use_inherit_rotation_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return !(((data->flag) & 512) != 0);
}

void EditBone_use_inherit_rotation_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(!value) data->flag |= 512;
	else data->flag &= ~512;
}

int EditBone_use_inherit_scale_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return !(((data->flag) & 32768) != 0);
}

void EditBone_use_inherit_scale_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(!value) data->flag |= 32768;
	else data->flag &= ~32768;
}

void EditBone_layers_get(PointerRNA *ptr, int values[32])
{
	EditBone *data= (EditBone*)(ptr->data);
	int i;

	for(i=0; i<32; i++) {
		values[i]= ((data->layer & (1<<i)) != 0);
	}
}

void EditBone_layers_set(PointerRNA *ptr, const int values[32])
{
	rna_EditBone_layer_set(ptr, values);
}

int EditBone_use_local_location_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return !(((data->flag) & 4194304) != 0);
}

void EditBone_use_local_location_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(!value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

int EditBone_lock_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 524288) != 0);
}

void EditBone_lock_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 524288;
	else data->flag &= ~524288;
}

int EditBone_use_envelope_multiply_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void EditBone_use_envelope_multiply_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 2048;
	else data->flag &= ~2048;
}

PointerRNA EditBone_parent_get(PointerRNA *ptr)
{
	return rna_EditBone_parent_get(ptr);
}

void EditBone_parent_set(PointerRNA *ptr, PointerRNA value)
{
	rna_EditBone_parent_set(ptr, value);
}

static PointerRNA EditBone_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void EditBone_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_EditBone_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= EditBone_rna_properties_get(iter);
}

void EditBone_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= EditBone_rna_properties_get(iter);
}

void EditBone_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float EditBone_roll_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (float)(data->roll);
}

void EditBone_roll_set(PointerRNA *ptr, float value)
{
	EditBone *data= (EditBone*)(ptr->data);
	data->roll= value;
}

int EditBone_select_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void EditBone_select_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int EditBone_hide_select_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void EditBone_hide_select_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

void EditBone_tail_get(PointerRNA *ptr, float values[3])
{
	EditBone *data= (EditBone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)((data->tail)[i]);
	}
}

void EditBone_tail_set(PointerRNA *ptr, const float values[3])
{
	EditBone *data= (EditBone*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		(data->tail)[i]= values[i];
	}
}

int EditBone_select_tail_get(PointerRNA *ptr)
{
	EditBone *data= (EditBone*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void EditBone_select_tail_set(PointerRNA *ptr, int value)
{
	EditBone *data= (EditBone*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}



void ArmatureEditBones_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	const char* name;
	struct EditBone *bone;
	char *_data, *_retdata;
	
	_self= (struct bArmature *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	bone= rna_Armature_edit_bone_new(_self, reports, name);
	*((struct EditBone**)_retdata)= bone;
}

void ArmatureEditBones_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bArmature *_self;
	struct EditBone *bone;
	char *_data;
	
	_self= (struct bArmature *)_ptr->data;
	_data= (char *)_parms->data;
	bone= *((struct EditBone**)_data);
	
	rna_Armature_edit_bone_remove(_self, reports, bone);
}

/* Repeated prototypes to detect errors */

struct EditBone *rna_Armature_edit_bone_new(struct bArmature *_self, ReportList *reports, const char* name);
void rna_Armature_edit_bone_remove(struct bArmature *_self, ReportList *reports, struct EditBone *bone);

void Bone_evaluate_envelope_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Bone *_self;
	float *point;
	float factor;
	char *_data, *_retdata;
	
	_self= (struct Bone *)_ptr->data;
	_data= (char *)_parms->data;
	point= ((float*)_data);
	_data+= 12;
	_retdata= _data;
	
	factor= rna_Bone_do_envelope(_self, point);
	*((float*)_retdata)= factor;
}

/* Repeated prototypes to detect errors */

float rna_Bone_do_envelope(struct Bone *_self, float point[3]);

void EditBone_align_roll_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct EditBone *_self;
	float *vector;
	char *_data;
	
	_self= (struct EditBone *)_ptr->data;
	_data= (char *)_parms->data;
	vector= ((float*)_data);
	
	rna_EditBone_align_roll(_self, vector);
}

/* Repeated prototypes to detect errors */

void rna_EditBone_align_roll(struct EditBone *_self, float vector[3]);

/* Armature */
PointerPropertyRNA rna_Armature_animation_data = {
	{(PropertyRNA*)&rna_Armature_use_auto_ik, NULL,
	-1, "animation_data", 0, "Animation Data",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Armature_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

BooleanPropertyRNA rna_Armature_use_auto_ik = {
	{(PropertyRNA*)&rna_Armature_bones, (PropertyRNA*)&rna_Armature_animation_data,
	-1, "use_auto_ik", 65539, "Auto IK",
	"Add temporaral IK constraints while grabbing bones in Pose Mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_use_auto_ik_get, Armature_use_auto_ik_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Armature_bones = {
	{(PropertyRNA*)&rna_Armature_use_deform_envelopes, (PropertyRNA*)&rna_Armature_use_auto_ik,
	-1, "bones", 0, "Bones",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ArmatureBones},
	Armature_bones_begin, Armature_bones_next, Armature_bones_end, Armature_bones_get, NULL, NULL, NULL, &RNA_Bone
};

BooleanPropertyRNA rna_Armature_use_deform_envelopes = {
	{(PropertyRNA*)&rna_Armature_use_deform_vertex_groups, (PropertyRNA*)&rna_Armature_bones,
	-1, "use_deform_envelopes", 3, "Deform Envelopes",
	"Enable Bone Envelopes when defining deform",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_use_deform_envelopes_get, Armature_use_deform_envelopes_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Armature_use_deform_vertex_groups = {
	{(PropertyRNA*)&rna_Armature_use_deform_delay, (PropertyRNA*)&rna_Armature_use_deform_envelopes,
	-1, "use_deform_vertex_groups", 3, "Deform Vertex Groups",
	"Enable Vertex Groups when defining deform",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_use_deform_vertex_groups_get, Armature_use_deform_vertex_groups_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Armature_use_deform_delay = {
	{(PropertyRNA*)&rna_Armature_show_axes, (PropertyRNA*)&rna_Armature_use_deform_vertex_groups,
	-1, "use_deform_delay", 3, "Delay Deform",
	"Don\'t deform children when manipulating bones in Pose Mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_use_deform_delay_get, Armature_use_deform_delay_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Armature_show_axes = {
	{(PropertyRNA*)&rna_Armature_show_group_colors, (PropertyRNA*)&rna_Armature_use_deform_delay,
	-1, "show_axes", 65539, "Draw Axes",
	"Draw bone axes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_show_axes_get, Armature_show_axes_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Armature_show_group_colors = {
	{(PropertyRNA*)&rna_Armature_show_bone_custom_shapes, (PropertyRNA*)&rna_Armature_show_axes,
	-1, "show_group_colors", 3, "Draw Bone Group Colors",
	"Draw bone group colors",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_show_group_colors_get, Armature_show_group_colors_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Armature_show_bone_custom_shapes = {
	{(PropertyRNA*)&rna_Armature_show_only_ghost_selected, (PropertyRNA*)&rna_Armature_show_group_colors,
	-1, "show_bone_custom_shapes", 3, "Draw Custom Bone Shapes",
	"Draw bones with their custom shapes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_show_bone_custom_shapes_get, Armature_show_bone_custom_shapes_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Armature_show_only_ghost_selected = {
	{(PropertyRNA*)&rna_Armature_show_names, (PropertyRNA*)&rna_Armature_show_bone_custom_shapes,
	-1, "show_only_ghost_selected", 65539, "Draw Ghosts on Selected Bones Only",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_show_only_ghost_selected_get, Armature_show_only_ghost_selected_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Armature_show_names = {
	{(PropertyRNA*)&rna_Armature_draw_type, (PropertyRNA*)&rna_Armature_show_only_ghost_selected,
	-1, "show_names", 65539, "Draw Names",
	"Draw bone names",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_show_names_get, Armature_show_names_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Armature_draw_type_items[5] = {
	{0, "OCTAHEDRAL", 0, "Octahedral", "Display bones as octahedral shape (default)"},
	{1, "STICK", 0, "Stick", "Display bones as simple 2D lines with dots"},
	{2, "BBONE", 0, "B-Bone", "Display bones as boxes, showing subdivision and B-Splines"},
	{3, "ENVELOPE", 0, "Envelope", "Display bones as extruded spheres, showing defomation influence volume"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Armature_draw_type = {
	{(PropertyRNA*)&rna_Armature_edit_bones, (PropertyRNA*)&rna_Armature_show_names,
	-1, "draw_type", 65539, "Draw Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_draw_type_get, Armature_draw_type_set, NULL, rna_Armature_draw_type_items, 4, 0
};

CollectionPropertyRNA rna_Armature_edit_bones = {
	{(PropertyRNA*)&rna_Armature_ghost_type, (PropertyRNA*)&rna_Armature_draw_type,
	-1, "edit_bones", 0, "Edit Bones",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ArmatureEditBones},
	Armature_edit_bones_begin, Armature_edit_bones_next, Armature_edit_bones_end, Armature_edit_bones_get, NULL, Armature_edit_bones_lookup_int, NULL, &RNA_EditBone
};

static EnumPropertyItem rna_Armature_ghost_type_items[4] = {
	{0, "CURRENT_FRAME", 0, "Around Frame", "Display Ghosts of poses within a fixed number of frames around the current frame"},
	{1, "RANGE", 0, "In Range", "Display Ghosts of poses within specified range"},
	{2, "KEYS", 0, "On Keyframes", "Display Ghosts of poses on Keyframes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Armature_ghost_type = {
	{(PropertyRNA*)&rna_Armature_ghost_frame_end, (PropertyRNA*)&rna_Armature_edit_bones,
	-1, "ghost_type", 65539, "Ghost Type",
	"Method of Onion-skinning for active Action",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_ghost_type_get, Armature_ghost_type_set, NULL, rna_Armature_ghost_type_items, 3, 0
};

IntPropertyRNA rna_Armature_ghost_frame_end = {
	{(PropertyRNA*)&rna_Armature_ghost_size, (PropertyRNA*)&rna_Armature_ghost_type,
	-1, "ghost_frame_end", 65539, "Ghosting End Frame",
	"End frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_ghost_frame_end_get, Armature_ghost_frame_end_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Armature_ghost_size = {
	{(PropertyRNA*)&rna_Armature_ghost_frame_start, (PropertyRNA*)&rna_Armature_ghost_frame_end,
	-1, "ghost_size", 73731, "Ghosting Frame Step",
	"Frame step for Ghosts (not for \'On Keyframes\' Onion-skinning method)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	offsetof(bArmature, ghostsize), 1, NULL},
	Armature_ghost_size_get, Armature_ghost_size_set, NULL, NULL, NULL,
	1, 20, 1, 20, 1, 0, NULL
};

IntPropertyRNA rna_Armature_ghost_frame_start = {
	{(PropertyRNA*)&rna_Armature_ghost_step, (PropertyRNA*)&rna_Armature_ghost_size,
	-1, "ghost_frame_start", 65539, "Ghosting Start Frame",
	"Starting frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_ghost_frame_start_get, Armature_ghost_frame_start_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Armature_ghost_step = {
	{(PropertyRNA*)&rna_Armature_layers_protected, (PropertyRNA*)&rna_Armature_ghost_frame_start,
	-1, "ghost_step", 73731, "Ghosting Step",
	"Number of frame steps on either side of current frame to show as ghosts (only for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	offsetof(bArmature, ghostep), 1, NULL},
	Armature_ghost_step_get, Armature_ghost_step_set, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

static int rna_Armature_layers_protected_default[32] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BooleanPropertyRNA rna_Armature_layers_protected = {
	{(PropertyRNA*)&rna_Armature_pose_position, (PropertyRNA*)&rna_Armature_ghost_step,
	-1, "layers_protected", 3, "Layer Proxy Protection",
	"Protected layers in Proxy Instances are restored to Proxy settings on file reload and undo",
	0,
	PROP_BOOLEAN, PROP_LAYER|PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Armature_layers_protected_get, Armature_layers_protected_set, 0, rna_Armature_layers_protected_default
};

static EnumPropertyItem rna_Armature_pose_position_items[3] = {
	{0, "POSE", 0, "Pose Position", "Show armature in posed state"},
	{1, "REST", 0, "Rest Position", "Show Armature in binding pose state. No posing possible"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Armature_pose_position = {
	{(PropertyRNA*)&rna_Armature_use_deform_preserve_volume, (PropertyRNA*)&rna_Armature_layers_protected,
	-1, "pose_position", 65539, "Pose Position",
	"Show armature in binding pose or final posed state",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_pose_position_get, Armature_pose_position_set, NULL, rna_Armature_pose_position_items, 2, 0
};

BooleanPropertyRNA rna_Armature_use_deform_preserve_volume = {
	{(PropertyRNA*)&rna_Armature_layers, (PropertyRNA*)&rna_Armature_pose_position,
	-1, "use_deform_preserve_volume", 3, "Use Dual Quaternion Deformation",
	"Enable deform rotation with Quaternions",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_use_deform_preserve_volume_get, Armature_use_deform_preserve_volume_set, NULL, NULL, 0, NULL
};

static int rna_Armature_layers_default[32] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BooleanPropertyRNA rna_Armature_layers = {
	{(PropertyRNA*)&rna_Armature_use_mirror_x, (PropertyRNA*)&rna_Armature_use_deform_preserve_volume,
	-1, "layers", 65539, "Visible Layers",
	"Armature layer visibility",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_update_layers, 85196800, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Armature_layers_get, Armature_layers_set, 0, rna_Armature_layers_default
};

BooleanPropertyRNA rna_Armature_use_mirror_x = {
	{NULL, (PropertyRNA*)&rna_Armature_layers,
	-1, "use_mirror_x", 65539, "X-Axis Mirror",
	"Apply changes to matching bone on opposite side of X-Axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Armature_use_mirror_x_get, Armature_use_mirror_x_set, NULL, NULL, 0, NULL
};

StructRNA RNA_Armature = {
	{(ContainerRNA *)&RNA_ArmatureActuator, (ContainerRNA *)&RNA_AreaLamp,
	NULL,
	{(PropertyRNA*)&rna_Armature_animation_data, (PropertyRNA*)&rna_Armature_use_mirror_x}},
	"Armature"	, NULL,NULL
, 3, "Armature", "Armature datablock containing a hierarchy of bones, usually used for rigging characters",
	172,
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

/* Armature Bones */
PointerPropertyRNA rna_ArmatureBones_rna_type = {
	{(PropertyRNA*)&rna_ArmatureBones_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureBones_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ArmatureBones_active = {
	{(PropertyRNA*)&rna_ArmatureBones_rna_properties, (PropertyRNA*)&rna_ArmatureBones_rna_type,
	-1, "active", 1, "Active Bone",
	"Armatures active bone",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureBones_active_get, ArmatureBones_active_set, NULL, NULL,&RNA_Bone
};

CollectionPropertyRNA rna_ArmatureBones_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ArmatureBones_active,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureBones_rna_properties_begin, ArmatureBones_rna_properties_next, ArmatureBones_rna_properties_end, ArmatureBones_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_ArmatureBones = {
	{(ContainerRNA *)&RNA_ArmatureEditBones, (ContainerRNA *)&RNA_ArmatureActuator,
	NULL,
	{(PropertyRNA*)&rna_ArmatureBones_rna_type, (PropertyRNA*)&rna_ArmatureBones_rna_properties}},
	"ArmatureBones"	, NULL,NULL
, 0, "Armature Bones", "Collection of armature bones",
	17,
	NULL, (PropertyRNA*)&rna_ArmatureBones_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Armature EditBones */
PointerPropertyRNA rna_ArmatureEditBones_rna_type = {
	{(PropertyRNA*)&rna_ArmatureEditBones_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureEditBones_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ArmatureEditBones_active = {
	{(PropertyRNA*)&rna_ArmatureEditBones_rna_properties, (PropertyRNA*)&rna_ArmatureEditBones_rna_type,
	-1, "active", 1, "Active EditBone",
	"Armatures active edit bone",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureEditBones_active_get, ArmatureEditBones_active_set, NULL, NULL,&RNA_EditBone
};

CollectionPropertyRNA rna_ArmatureEditBones_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ArmatureEditBones_active,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ArmatureEditBones_rna_properties_begin, ArmatureEditBones_rna_properties_next, ArmatureEditBones_rna_properties_end, ArmatureEditBones_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_ArmatureEditBones_new_name = {
	{(PropertyRNA*)&rna_ArmatureEditBones_new_bone, NULL,
	-1, "name", 5, "",
	"New name for the bone",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Object"
};

PointerPropertyRNA rna_ArmatureEditBones_new_bone = {
	{NULL, (PropertyRNA*)&rna_ArmatureEditBones_new_name,
	-1, "bone", 8, "",
	"Newly created edit bone",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_EditBone
};

FunctionRNA rna_ArmatureEditBones_new_func = {
	{(FunctionRNA*)&rna_ArmatureEditBones_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ArmatureEditBones_new_name, (PropertyRNA*)&rna_ArmatureEditBones_new_bone}},
	"new", 4, "Add a new bone.",
	ArmatureEditBones_new_call,
	(PropertyRNA*)&rna_ArmatureEditBones_new_bone
};

PointerPropertyRNA rna_ArmatureEditBones_remove_bone = {
	{NULL, NULL,
	-1, "bone", 262148, "",
	"EditBone to remove",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_EditBone
};

FunctionRNA rna_ArmatureEditBones_remove_func = {
	{NULL, (FunctionRNA*)&rna_ArmatureEditBones_new_func,
	NULL,
	{(PropertyRNA*)&rna_ArmatureEditBones_remove_bone, (PropertyRNA*)&rna_ArmatureEditBones_remove_bone}},
	"remove", 4, "Remove an existing bone from the armature",
	ArmatureEditBones_remove_call,
	NULL
};

StructRNA RNA_ArmatureEditBones = {
	{(ContainerRNA *)&RNA_ArmatureModifier, (ContainerRNA *)&RNA_ArmatureBones,
	NULL,
	{(PropertyRNA*)&rna_ArmatureEditBones_rna_type, (PropertyRNA*)&rna_ArmatureEditBones_rna_properties}},
	"ArmatureEditBones"	, NULL,NULL
, 0, "Armature EditBones", "Collection of armature edit bones",
	17,
	NULL, (PropertyRNA*)&rna_ArmatureEditBones_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ArmatureEditBones_new_func, (FunctionRNA*)&rna_ArmatureEditBones_remove_func}
};

/* Bone */
PointerPropertyRNA rna_Bone_rna_type = {
	{(PropertyRNA*)&rna_Bone_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Bone_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Bone_name = {
	{(PropertyRNA*)&rna_Bone_head_local, (PropertyRNA*)&rna_Bone_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_name_get, Bone_name_length, Bone_name_set, 32, ""
};

static float rna_Bone_head_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_head_local = {
	{(PropertyRNA*)&rna_Bone_tail_local, (PropertyRNA*)&rna_Bone_name,
	-1, "head_local", 8193, "Armature-Relative Head",
	"Location of head end of the bone relative to armature",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(Bone, arm_head), 4, NULL},
	NULL, NULL, Bone_head_local_get, Bone_head_local_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_head_local_default
};

static float rna_Bone_tail_local_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_tail_local = {
	{(PropertyRNA*)&rna_Bone_bbone_x, (PropertyRNA*)&rna_Bone_head_local,
	-1, "tail_local", 8193, "Armature-Relative Tail",
	"Location of tail end of the bone relative to armature",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(Bone, arm_tail), 4, NULL},
	NULL, NULL, Bone_tail_local_get, Bone_tail_local_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_tail_local_default
};

FloatPropertyRNA rna_Bone_bbone_x = {
	{(PropertyRNA*)&rna_Bone_bbone_z, (PropertyRNA*)&rna_Bone_tail_local,
	-1, "bbone_x", 8195, "B-Bone Display X Width",
	"B-Bone X size",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	offsetof(Bone, xwidth), 4, NULL},
	Bone_bbone_x_get, Bone_bbone_x_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_z = {
	{(PropertyRNA*)&rna_Bone_bbone_in, (PropertyRNA*)&rna_Bone_bbone_x,
	-1, "bbone_z", 8195, "B-Bone Display Z Width",
	"B-Bone Z size",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	offsetof(Bone, zwidth), 4, NULL},
	Bone_bbone_z_get, Bone_bbone_z_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_in = {
	{(PropertyRNA*)&rna_Bone_bbone_out, (PropertyRNA*)&rna_Bone_bbone_z,
	-1, "bbone_in", 8195, "B-Bone Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	offsetof(Bone, ease1), 4, NULL},
	Bone_bbone_in_get, Bone_bbone_in_set, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_bbone_out = {
	{(PropertyRNA*)&rna_Bone_bbone_segments, (PropertyRNA*)&rna_Bone_bbone_in,
	-1, "bbone_out", 8195, "B-Bone Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	offsetof(Bone, ease2), 4, NULL},
	Bone_bbone_out_get, Bone_bbone_out_set, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Bone_bbone_segments = {
	{(PropertyRNA*)&rna_Bone_matrix_local, (PropertyRNA*)&rna_Bone_bbone_out,
	-1, "bbone_segments", 8195, "B-Bone Segments",
	"Number of subdivisions of bone (for B-Bones only)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	offsetof(Bone, segments), 1, NULL},
	Bone_bbone_segments_get, Bone_bbone_segments_set, NULL, NULL, NULL,
	1, 32, 1, 32, 1, 0, NULL
};

static float rna_Bone_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Bone_matrix_local = {
	{(PropertyRNA*)&rna_Bone_matrix, (PropertyRNA*)&rna_Bone_bbone_segments,
	-1, "matrix_local", 8193, "Bone Armature-Relative Matrix",
	"4x4 bone matrix relative to armature",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	offsetof(Bone, arm_mat), 4, NULL},
	NULL, NULL, Bone_matrix_local_get, Bone_matrix_local_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_matrix_local_default
};

static float rna_Bone_matrix_default[9] = {
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

FloatPropertyRNA rna_Bone_matrix = {
	{(PropertyRNA*)&rna_Bone_children, (PropertyRNA*)&rna_Bone_matrix_local,
	-1, "matrix", 8193, "Bone Matrix",
	"3x3 bone matrix",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {3, 3, 0}, 9,
	NULL, 0, NULL, NULL,
	offsetof(Bone, bone_mat), 4, NULL},
	NULL, NULL, Bone_matrix_get, Bone_matrix_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_matrix_default
};

CollectionPropertyRNA rna_Bone_children = {
	{(PropertyRNA*)&rna_Bone_use_connect, (PropertyRNA*)&rna_Bone_matrix,
	-1, "children", 0, "Children",
	"Bones which are children of this bone",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Bone_children_begin, Bone_children_next, Bone_children_end, Bone_children_get, NULL, Bone_children_lookup_int, NULL, &RNA_Bone
};

BooleanPropertyRNA rna_Bone_use_connect = {
	{(PropertyRNA*)&rna_Bone_use_cyclic_offset, (PropertyRNA*)&rna_Bone_children,
	-1, "use_connect", 2, "Connected",
	"When bone has a parent, bone\'s head is struck to the parent\'s tail",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_use_connect_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_use_cyclic_offset = {
	{(PropertyRNA*)&rna_Bone_use_deform, (PropertyRNA*)&rna_Bone_use_connect,
	-1, "use_cyclic_offset", 3, "Cyclic Offset",
	"When bone doesn\'t have a parent, it receives cyclic offset effects",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_use_cyclic_offset_get, Bone_use_cyclic_offset_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_use_deform = {
	{(PropertyRNA*)&rna_Bone_show_wire, (PropertyRNA*)&rna_Bone_use_cyclic_offset,
	-1, "use_deform", 3, "Deform",
	"Bone does not deform any geometry",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_use_deform_get, Bone_use_deform_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_show_wire = {
	{(PropertyRNA*)&rna_Bone_envelope_distance, (PropertyRNA*)&rna_Bone_use_deform,
	-1, "show_wire", 3, "Draw Wire",
	"Bone is always drawn as Wireframe regardless of viewport draw mode. Useful for non-obstructive custom bone shapes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_show_wire_get, Bone_show_wire_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Bone_envelope_distance = {
	{(PropertyRNA*)&rna_Bone_envelope_weight, (PropertyRNA*)&rna_Bone_show_wire,
	-1, "envelope_distance", 8195, "Envelope Deform Distance",
	"Bone deformation distance (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	offsetof(Bone, dist), 4, NULL},
	Bone_envelope_distance_get, Bone_envelope_distance_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_envelope_weight = {
	{(PropertyRNA*)&rna_Bone_head_radius, (PropertyRNA*)&rna_Bone_envelope_distance,
	-1, "envelope_weight", 8195, "Envelope Deform Weight",
	"Bone deformation weight (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	offsetof(Bone, weight), 4, NULL},
	Bone_envelope_weight_get, Bone_envelope_weight_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_head_radius = {
	{(PropertyRNA*)&rna_Bone_tail_radius, (PropertyRNA*)&rna_Bone_envelope_weight,
	-1, "head_radius", 8195, "Envelope Head Radius",
	"Radius of head of bone (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Bone, rad_head), 4, NULL},
	Bone_head_radius_get, Bone_head_radius_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Bone_tail_radius = {
	{(PropertyRNA*)&rna_Bone_head, (PropertyRNA*)&rna_Bone_head_radius,
	-1, "tail_radius", 8195, "Envelope Tail Radius",
	"Radius of tail of bone (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Bone, rad_tail), 4, NULL},
	Bone_tail_radius_get, Bone_tail_radius_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

static float rna_Bone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_head = {
	{(PropertyRNA*)&rna_Bone_hide, (PropertyRNA*)&rna_Bone_tail_radius,
	-1, "head", 8193, "Head",
	"Location of head end of the bone relative to its parent",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(Bone, head), 4, NULL},
	NULL, NULL, Bone_head_get, Bone_head_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_head_default
};

BooleanPropertyRNA rna_Bone_hide = {
	{(PropertyRNA*)&rna_Bone_use_inherit_rotation, (PropertyRNA*)&rna_Bone_head,
	-1, "hide", 3, "Hide",
	"Bone is not visible when it is not in Edit Mode (i.e. in Object or Pose Modes)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_hide_get, Bone_hide_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_use_inherit_rotation = {
	{(PropertyRNA*)&rna_Bone_use_inherit_scale, (PropertyRNA*)&rna_Bone_hide,
	-1, "use_inherit_rotation", 3, "Inherit Rotation",
	"Bone inherits rotation or scale from parent bone",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_use_inherit_rotation_get, Bone_use_inherit_rotation_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_use_inherit_scale = {
	{(PropertyRNA*)&rna_Bone_layers, (PropertyRNA*)&rna_Bone_use_inherit_rotation,
	-1, "use_inherit_scale", 3, "Inherit Scale",
	"Bone inherits scaling from parent bone",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_use_inherit_scale_get, Bone_use_inherit_scale_set, NULL, NULL, 0, NULL
};

static int rna_Bone_layers_default[32] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BooleanPropertyRNA rna_Bone_layers = {
	{(PropertyRNA*)&rna_Bone_use_local_location, (PropertyRNA*)&rna_Bone_use_inherit_scale,
	-1, "layers", 3, "Layers",
	"Layers bone exists in",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Bone_layers_get, Bone_layers_set, 0, rna_Bone_layers_default
};

BooleanPropertyRNA rna_Bone_use_local_location = {
	{(PropertyRNA*)&rna_Bone_use_envelope_multiply, (PropertyRNA*)&rna_Bone_layers,
	-1, "use_local_location", 3, "Local Location",
	"Bone location is set in local space",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_use_local_location_get, Bone_use_local_location_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_use_envelope_multiply = {
	{(PropertyRNA*)&rna_Bone_parent, (PropertyRNA*)&rna_Bone_use_local_location,
	-1, "use_envelope_multiply", 3, "Multiply Vertex Group with Envelope",
	"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_use_envelope_multiply_get, Bone_use_envelope_multiply_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Bone_parent = {
	{(PropertyRNA*)&rna_Bone_rna_properties, (PropertyRNA*)&rna_Bone_use_envelope_multiply,
	-1, "parent", 0, "Parent",
	"Parent bone (in same Armature)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_parent_get, NULL, NULL, NULL,&RNA_Bone
};

CollectionPropertyRNA rna_Bone_rna_properties = {
	{(PropertyRNA*)&rna_Bone_select, (PropertyRNA*)&rna_Bone_parent,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Bone_rna_properties_begin, Bone_rna_properties_next, Bone_rna_properties_end, Bone_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Bone_select = {
	{(PropertyRNA*)&rna_Bone_select_head, (PropertyRNA*)&rna_Bone_rna_properties,
	-1, "select", 1, "Select",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_select_get, Bone_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_select_head = {
	{(PropertyRNA*)&rna_Bone_select_tail, (PropertyRNA*)&rna_Bone_select,
	-1, "select_head", 1, "Select Head",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_select_head_get, Bone_select_head_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_select_tail = {
	{(PropertyRNA*)&rna_Bone_hide_select, (PropertyRNA*)&rna_Bone_select_head,
	-1, "select_tail", 1, "Select Tail",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_select_tail_get, Bone_select_tail_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Bone_hide_select = {
	{(PropertyRNA*)&rna_Bone_tail, (PropertyRNA*)&rna_Bone_select_tail,
	-1, "hide_select", 3, "Selectable",
	"Bone is able to be selected",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	Bone_hide_select_get, Bone_hide_select_set, NULL, NULL, 0, NULL
};

static float rna_Bone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_tail = {
	{NULL, (PropertyRNA*)&rna_Bone_hide_select,
	-1, "tail", 8193, "Tail",
	"Location of tail end of the bone",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(Bone, tail), 4, NULL},
	NULL, NULL, Bone_tail_get, Bone_tail_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Bone_tail_default
};

static float rna_Bone_evaluate_envelope_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Bone_evaluate_envelope_point = {
	{(PropertyRNA*)&rna_Bone_evaluate_envelope_factor, NULL,
	-1, "point", 7, "Point",
	"Position in 3d space to evaluate",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Bone_evaluate_envelope_point_default
};

FloatPropertyRNA rna_Bone_evaluate_envelope_factor = {
	{NULL, (PropertyRNA*)&rna_Bone_evaluate_envelope_point,
	-1, "factor", 11, "Factor",
	"Envelope factor",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_Bone_evaluate_envelope_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_Bone_evaluate_envelope_point, (PropertyRNA*)&rna_Bone_evaluate_envelope_factor}},
	"evaluate_envelope", 0, "Calculate bone envelope at given point.",
	Bone_evaluate_envelope_call,
	(PropertyRNA*)&rna_Bone_evaluate_envelope_factor
};

StructRNA RNA_Bone = {
	{(ContainerRNA *)&RNA_BoneGroup, (ContainerRNA *)&RNA_BoidState,
	NULL,
	{(PropertyRNA*)&rna_Bone_rna_type, (PropertyRNA*)&rna_Bone_tail}},
	"Bone"	, NULL,NULL
, 0, "Bone", "Bone in an Armature datablock",
	174,
	(PropertyRNA*)&rna_Bone_name, (PropertyRNA*)&rna_Bone_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Bone_path,
	NULL,
	NULL,
	rna_Bone_idprops,
	{(FunctionRNA*)&rna_Bone_evaluate_envelope_func, (FunctionRNA*)&rna_Bone_evaluate_envelope_func}
};

/* Edit Bone */
PointerPropertyRNA rna_EditBone_rna_type = {
	{(PropertyRNA*)&rna_EditBone_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_EditBone_name = {
	{(PropertyRNA*)&rna_EditBone_bbone_x, (PropertyRNA*)&rna_EditBone_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_name_get, EditBone_name_length, EditBone_name_set, 0, ""
};

FloatPropertyRNA rna_EditBone_bbone_x = {
	{(PropertyRNA*)&rna_EditBone_bbone_z, (PropertyRNA*)&rna_EditBone_name,
	-1, "bbone_x", 3, "B-Bone Display X Width",
	"B-Bone X size",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_bbone_x_get, EditBone_bbone_x_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_z = {
	{(PropertyRNA*)&rna_EditBone_bbone_in, (PropertyRNA*)&rna_EditBone_bbone_x,
	-1, "bbone_z", 3, "B-Bone Display Z Width",
	"B-Bone Z size",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_bbone_z_get, EditBone_bbone_z_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_in = {
	{(PropertyRNA*)&rna_EditBone_bbone_out, (PropertyRNA*)&rna_EditBone_bbone_z,
	-1, "bbone_in", 3, "B-Bone Ease In",
	"Length of first Bezier Handle (for B-Bones only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_bbone_in_get, EditBone_bbone_in_set, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_bbone_out = {
	{(PropertyRNA*)&rna_EditBone_bbone_segments, (PropertyRNA*)&rna_EditBone_bbone_in,
	-1, "bbone_out", 3, "B-Bone Ease Out",
	"Length of second Bezier Handle (for B-Bones only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_bbone_out_get, EditBone_bbone_out_set, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_EditBone_bbone_segments = {
	{(PropertyRNA*)&rna_EditBone_use_connect, (PropertyRNA*)&rna_EditBone_bbone_out,
	-1, "bbone_segments", 3, "B-Bone Segments",
	"Number of subdivisions of bone (for B-Bones only)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_bbone_segments_get, EditBone_bbone_segments_set, NULL, NULL, NULL,
	1, 32, 1, 32, 1, 0, NULL
};

BooleanPropertyRNA rna_EditBone_use_connect = {
	{(PropertyRNA*)&rna_EditBone_use_cyclic_offset, (PropertyRNA*)&rna_EditBone_bbone_segments,
	-1, "use_connect", 3, "Connected",
	"When bone has a parent, bone\'s head is struck to the parent\'s tail",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_use_connect_get, EditBone_use_connect_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_use_cyclic_offset = {
	{(PropertyRNA*)&rna_EditBone_use_deform, (PropertyRNA*)&rna_EditBone_use_connect,
	-1, "use_cyclic_offset", 3, "Cyclic Offset",
	"When bone doesn\'t have a parent, it receives cyclic offset effects",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_use_cyclic_offset_get, EditBone_use_cyclic_offset_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_use_deform = {
	{(PropertyRNA*)&rna_EditBone_show_wire, (PropertyRNA*)&rna_EditBone_use_cyclic_offset,
	-1, "use_deform", 3, "Deform",
	"Bone does not deform any geometry",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_use_deform_get, EditBone_use_deform_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_show_wire = {
	{(PropertyRNA*)&rna_EditBone_matrix, (PropertyRNA*)&rna_EditBone_use_deform,
	-1, "show_wire", 3, "Draw Wire",
	"Bone is always drawn as Wireframe regardless of viewport draw mode. Useful for non-obstructive custom bone shapes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_show_wire_get, EditBone_show_wire_set, NULL, NULL, 0, NULL
};

static float rna_EditBone_matrix_default[16] = {
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

FloatPropertyRNA rna_EditBone_matrix = {
	{(PropertyRNA*)&rna_EditBone_envelope_distance, (PropertyRNA*)&rna_EditBone_show_wire,
	-1, "matrix", 8388610, "Editbone Matrix",
	"Read-only matrix calculated from the roll (armature space)",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, EditBone_matrix_get, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_EditBone_matrix_default
};

FloatPropertyRNA rna_EditBone_envelope_distance = {
	{(PropertyRNA*)&rna_EditBone_envelope_weight, (PropertyRNA*)&rna_EditBone_matrix,
	-1, "envelope_distance", 3, "Envelope Deform Distance",
	"Bone deformation distance (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_envelope_distance_get, EditBone_envelope_distance_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_envelope_weight = {
	{(PropertyRNA*)&rna_EditBone_head_radius, (PropertyRNA*)&rna_EditBone_envelope_distance,
	-1, "envelope_weight", 3, "Envelope Deform Weight",
	"Bone deformation weight (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_envelope_weight_get, EditBone_envelope_weight_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_head_radius = {
	{(PropertyRNA*)&rna_EditBone_tail_radius, (PropertyRNA*)&rna_EditBone_envelope_weight,
	-1, "head_radius", 3, "Envelope Head Radius",
	"Radius of head of bone (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_head_radius_get, EditBone_head_radius_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_EditBone_tail_radius = {
	{(PropertyRNA*)&rna_EditBone_head, (PropertyRNA*)&rna_EditBone_head_radius,
	-1, "tail_radius", 3, "Envelope Tail Radius",
	"Radius of tail of bone (for Envelope deform only)",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_tail_radius_get, EditBone_tail_radius_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

static float rna_EditBone_head_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_head = {
	{(PropertyRNA*)&rna_EditBone_select_head, (PropertyRNA*)&rna_EditBone_tail_radius,
	-1, "head", 1, "Head",
	"Location of head end of the bone",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, EditBone_head_get, EditBone_head_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_EditBone_head_default
};

BooleanPropertyRNA rna_EditBone_select_head = {
	{(PropertyRNA*)&rna_EditBone_hide, (PropertyRNA*)&rna_EditBone_head,
	-1, "select_head", 1, "Head Select",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_select_head_get, EditBone_select_head_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_hide = {
	{(PropertyRNA*)&rna_EditBone_use_inherit_rotation, (PropertyRNA*)&rna_EditBone_select_head,
	-1, "hide", 1, "Hide",
	"Bone is not visible when in Edit Mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_hide_get, EditBone_hide_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_use_inherit_rotation = {
	{(PropertyRNA*)&rna_EditBone_use_inherit_scale, (PropertyRNA*)&rna_EditBone_hide,
	-1, "use_inherit_rotation", 3, "Inherit Rotation",
	"Bone inherits rotation or scale from parent bone",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_use_inherit_rotation_get, EditBone_use_inherit_rotation_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_use_inherit_scale = {
	{(PropertyRNA*)&rna_EditBone_layers, (PropertyRNA*)&rna_EditBone_use_inherit_rotation,
	-1, "use_inherit_scale", 3, "Inherit Scale",
	"Bone inherits scaling from parent bone",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_use_inherit_scale_get, EditBone_use_inherit_scale_set, NULL, NULL, 0, NULL
};

static int rna_EditBone_layers_default[32] = {
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0
};

BooleanPropertyRNA rna_EditBone_layers = {
	{(PropertyRNA*)&rna_EditBone_use_local_location, (PropertyRNA*)&rna_EditBone_use_inherit_scale,
	-1, "layers", 3, "Layers",
	"Layers bone exists in",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 32,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, EditBone_layers_get, EditBone_layers_set, 0, rna_EditBone_layers_default
};

BooleanPropertyRNA rna_EditBone_use_local_location = {
	{(PropertyRNA*)&rna_EditBone_lock, (PropertyRNA*)&rna_EditBone_layers,
	-1, "use_local_location", 3, "Local Location",
	"Bone location is set in local space",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_use_local_location_get, EditBone_use_local_location_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_lock = {
	{(PropertyRNA*)&rna_EditBone_use_envelope_multiply, (PropertyRNA*)&rna_EditBone_use_local_location,
	-1, "lock", 1, "Lock",
	"Bone is not able to be transformed when in Edit Mode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_lock_get, EditBone_lock_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_use_envelope_multiply = {
	{(PropertyRNA*)&rna_EditBone_parent, (PropertyRNA*)&rna_EditBone_lock,
	-1, "use_envelope_multiply", 3, "Multiply Vertex Group with Envelope",
	"When deforming bone, multiply effects of Vertex Group weights with Envelope influence",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_update_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_use_envelope_multiply_get, EditBone_use_envelope_multiply_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_EditBone_parent = {
	{(PropertyRNA*)&rna_EditBone_rna_properties, (PropertyRNA*)&rna_EditBone_use_envelope_multiply,
	-1, "parent", 1, "Parent",
	"Parent edit bone (in same Armature)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_parent_get, EditBone_parent_set, NULL, NULL,&RNA_EditBone
};

CollectionPropertyRNA rna_EditBone_rna_properties = {
	{(PropertyRNA*)&rna_EditBone_roll, (PropertyRNA*)&rna_EditBone_parent,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_rna_properties_begin, EditBone_rna_properties_next, EditBone_rna_properties_end, EditBone_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_EditBone_roll = {
	{(PropertyRNA*)&rna_EditBone_select, (PropertyRNA*)&rna_EditBone_rna_properties,
	-1, "roll", 1, "Roll",
	"Bone rotation around head-tail axis",
	0,
	PROP_FLOAT, PROP_ANGLE|PROP_UNIT_ROTATION, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_editbone_transform_update, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_roll_get, EditBone_roll_set, NULL, NULL, NULL, -6.2831854820f, 6.2831854820f, -FLT_MAX, FLT_MAX, 0.1000000015f, 2, 0.0f, NULL
};

BooleanPropertyRNA rna_EditBone_select = {
	{(PropertyRNA*)&rna_EditBone_hide_select, (PropertyRNA*)&rna_EditBone_roll,
	-1, "select", 1, "Select",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_select_get, EditBone_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_EditBone_hide_select = {
	{(PropertyRNA*)&rna_EditBone_tail, (PropertyRNA*)&rna_EditBone_select,
	-1, "hide_select", 3, "Selectable",
	"Bone is able to be selected",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_hide_select_get, EditBone_hide_select_set, NULL, NULL, 0, NULL
};

static float rna_EditBone_tail_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_tail = {
	{(PropertyRNA*)&rna_EditBone_select_tail, (PropertyRNA*)&rna_EditBone_hide_select,
	-1, "tail", 1, "Tail",
	"Location of tail end of the bone",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Armature_editbone_transform_update, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, EditBone_tail_get, EditBone_tail_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_EditBone_tail_default
};

BooleanPropertyRNA rna_EditBone_select_tail = {
	{NULL, (PropertyRNA*)&rna_EditBone_tail,
	-1, "select_tail", 1, "Tail Select",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Armature_redraw_data, 0, NULL, NULL,
	0, -1, NULL},
	EditBone_select_tail_get, EditBone_select_tail_set, NULL, NULL, 0, NULL
};

static float rna_EditBone_align_roll_vector_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_EditBone_align_roll_vector = {
	{NULL, NULL,
	-1, "vector", 7, "Vector",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_EditBone_align_roll_vector_default
};

FunctionRNA rna_EditBone_align_roll_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_EditBone_align_roll_vector, (PropertyRNA*)&rna_EditBone_align_roll_vector}},
	"align_roll", 0, "Align the bone to a localspace roll so the Z axis points in the direction of the vector given.",
	EditBone_align_roll_call,
	NULL
};

StructRNA RNA_EditBone = {
	{(ContainerRNA *)&RNA_EditObjectActuator, (ContainerRNA *)&RNA_EdgeSplitModifier,
	NULL,
	{(PropertyRNA*)&rna_EditBone_rna_type, (PropertyRNA*)&rna_EditBone_select_tail}},
	"EditBone"	, NULL,NULL
, 0, "Edit Bone", "Editmode bone in an Armature datablock",
	174,
	(PropertyRNA*)&rna_EditBone_name, (PropertyRNA*)&rna_EditBone_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	rna_EditBone_idprops,
	{(FunctionRNA*)&rna_EditBone_align_roll_func, (FunctionRNA*)&rna_EditBone_align_roll_func}
};

