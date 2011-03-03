
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

#include "rna_mesh.c"
#include "rna_mesh_api.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

BooleanPropertyRNA rna_Mesh_show_all_edges;
PointerPropertyRNA rna_Mesh_animation_data;
BooleanPropertyRNA rna_Mesh_use_auto_smooth;
IntPropertyRNA rna_Mesh_auto_smooth_angle;
BooleanPropertyRNA rna_Mesh_use_auto_texspace;
PointerPropertyRNA rna_Mesh_uv_texture_clone;
IntPropertyRNA rna_Mesh_uv_texture_clone_index;
BooleanPropertyRNA rna_Mesh_show_double_sided;
BooleanPropertyRNA rna_Mesh_show_edge_bevel_weight;
BooleanPropertyRNA rna_Mesh_show_edge_crease;
BooleanPropertyRNA rna_Mesh_show_edges;
BooleanPropertyRNA rna_Mesh_show_faces;
BooleanPropertyRNA rna_Mesh_show_normal_face;
BooleanPropertyRNA rna_Mesh_show_edge_seams;
BooleanPropertyRNA rna_Mesh_show_edge_sharp;
BooleanPropertyRNA rna_Mesh_show_normal_vertex;
BooleanPropertyRNA rna_Mesh_show_extra_edge_length;
CollectionPropertyRNA rna_Mesh_edges;
BooleanPropertyRNA rna_Mesh_show_extra_face_area;
CollectionPropertyRNA rna_Mesh_faces;
BooleanPropertyRNA rna_Mesh_show_extra_face_angle;
CollectionPropertyRNA rna_Mesh_layers_float;
CollectionPropertyRNA rna_Mesh_layers_int;
PointerPropertyRNA rna_Mesh_uv_texture_stencil;
IntPropertyRNA rna_Mesh_uv_texture_stencil_index;
CollectionPropertyRNA rna_Mesh_materials;
BooleanPropertyRNA rna_Mesh_use_paint_mask;
IntPropertyRNA rna_Mesh_total_edge_sel;
IntPropertyRNA rna_Mesh_total_face_sel;
IntPropertyRNA rna_Mesh_total_vert_sel;
PointerPropertyRNA rna_Mesh_shape_keys;
CollectionPropertyRNA rna_Mesh_sticky;
CollectionPropertyRNA rna_Mesh_layers_string;
PointerPropertyRNA rna_Mesh_texture_mesh;
FloatPropertyRNA rna_Mesh_texspace_location;
PointerPropertyRNA rna_Mesh_texco_mesh;
FloatPropertyRNA rna_Mesh_texspace_size;
BooleanPropertyRNA rna_Mesh_use_mirror_topology;
CollectionPropertyRNA rna_Mesh_uv_textures;
CollectionPropertyRNA rna_Mesh_vertex_colors;
CollectionPropertyRNA rna_Mesh_vertices;
BooleanPropertyRNA rna_Mesh_use_mirror_x;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_Mesh_transform_func;
extern FloatPropertyRNA rna_Mesh_transform_matrix;

extern FunctionRNA rna_Mesh_calc_normals_func;
extern FunctionRNA rna_Mesh_update_func;
extern BooleanPropertyRNA rna_Mesh_update_calc_edges;

extern FunctionRNA rna_Mesh_validate_func;
extern BooleanPropertyRNA rna_Mesh_validate_verbose;
extern BooleanPropertyRNA rna_Mesh_validate_result;



PointerPropertyRNA rna_MeshColor_rna_type;
FloatPropertyRNA rna_MeshColor_color1;
FloatPropertyRNA rna_MeshColor_color2;
FloatPropertyRNA rna_MeshColor_color3;
FloatPropertyRNA rna_MeshColor_color4;
CollectionPropertyRNA rna_MeshColor_rna_properties;


PointerPropertyRNA rna_MeshColorLayer_rna_type;
StringPropertyRNA rna_MeshColorLayer_name;
BooleanPropertyRNA rna_MeshColorLayer_active;
BooleanPropertyRNA rna_MeshColorLayer_active_render;
CollectionPropertyRNA rna_MeshColorLayer_data;
CollectionPropertyRNA rna_MeshColorLayer_rna_properties;


PointerPropertyRNA rna_MeshEdge_rna_type;
FloatPropertyRNA rna_MeshEdge_bevel_weight;
FloatPropertyRNA rna_MeshEdge_crease;
BooleanPropertyRNA rna_MeshEdge_is_fgon;
BooleanPropertyRNA rna_MeshEdge_hide;
IntPropertyRNA rna_MeshEdge_index;
BooleanPropertyRNA rna_MeshEdge_is_loose;
CollectionPropertyRNA rna_MeshEdge_rna_properties;
BooleanPropertyRNA rna_MeshEdge_use_seam;
BooleanPropertyRNA rna_MeshEdge_select;
BooleanPropertyRNA rna_MeshEdge_use_edge_sharp;
IntPropertyRNA rna_MeshEdge_vertices;


PointerPropertyRNA rna_MeshEdges_rna_type;
CollectionPropertyRNA rna_MeshEdges_rna_properties;

extern FunctionRNA rna_MeshEdges_add_func;
extern IntPropertyRNA rna_MeshEdges_add_count;



PointerPropertyRNA rna_MeshFace_rna_type;
BooleanPropertyRNA rna_MeshFace_hide;
IntPropertyRNA rna_MeshFace_index;
IntPropertyRNA rna_MeshFace_material_index;
CollectionPropertyRNA rna_MeshFace_rna_properties;
BooleanPropertyRNA rna_MeshFace_select;
BooleanPropertyRNA rna_MeshFace_use_smooth;
IntPropertyRNA rna_MeshFace_vertices;
IntPropertyRNA rna_MeshFace_vertices_raw;
FloatPropertyRNA rna_MeshFace_area;
FloatPropertyRNA rna_MeshFace_normal;


PointerPropertyRNA rna_MeshFaces_rna_type;
IntPropertyRNA rna_MeshFaces_active;
PointerPropertyRNA rna_MeshFaces_active_tface;
CollectionPropertyRNA rna_MeshFaces_rna_properties;

extern FunctionRNA rna_MeshFaces_add_func;
extern IntPropertyRNA rna_MeshFaces_add_count;



PointerPropertyRNA rna_MeshFloatProperty_rna_type;
CollectionPropertyRNA rna_MeshFloatProperty_rna_properties;
FloatPropertyRNA rna_MeshFloatProperty_value;


PointerPropertyRNA rna_MeshFloatPropertyLayer_rna_type;
StringPropertyRNA rna_MeshFloatPropertyLayer_name;
CollectionPropertyRNA rna_MeshFloatPropertyLayer_data;
CollectionPropertyRNA rna_MeshFloatPropertyLayer_rna_properties;


PointerPropertyRNA rna_MeshIntProperty_rna_type;
CollectionPropertyRNA rna_MeshIntProperty_rna_properties;
IntPropertyRNA rna_MeshIntProperty_value;


PointerPropertyRNA rna_MeshIntPropertyLayer_rna_type;
StringPropertyRNA rna_MeshIntPropertyLayer_name;
CollectionPropertyRNA rna_MeshIntPropertyLayer_data;
CollectionPropertyRNA rna_MeshIntPropertyLayer_rna_properties;


PointerPropertyRNA rna_MeshSticky_rna_type;
FloatPropertyRNA rna_MeshSticky_co;
CollectionPropertyRNA rna_MeshSticky_rna_properties;


PointerPropertyRNA rna_MeshStringProperty_rna_type;
CollectionPropertyRNA rna_MeshStringProperty_rna_properties;
StringPropertyRNA rna_MeshStringProperty_value;


PointerPropertyRNA rna_MeshStringPropertyLayer_rna_type;
StringPropertyRNA rna_MeshStringPropertyLayer_name;
CollectionPropertyRNA rna_MeshStringPropertyLayer_data;
CollectionPropertyRNA rna_MeshStringPropertyLayer_rna_properties;


PointerPropertyRNA rna_MeshTextureFace_rna_type;
BooleanPropertyRNA rna_MeshTextureFace_use_alpha_sort;
BooleanPropertyRNA rna_MeshTextureFace_use_billboard;
BooleanPropertyRNA rna_MeshTextureFace_use_collision;
BooleanPropertyRNA rna_MeshTextureFace_use_halo;
PointerPropertyRNA rna_MeshTextureFace_image;
BooleanPropertyRNA rna_MeshTextureFace_hide;
BooleanPropertyRNA rna_MeshTextureFace_use_light;
BooleanPropertyRNA rna_MeshTextureFace_use_object_color;
CollectionPropertyRNA rna_MeshTextureFace_rna_properties;
BooleanPropertyRNA rna_MeshTextureFace_use_shadow_cast;
BooleanPropertyRNA rna_MeshTextureFace_use_blend_shared;
BooleanPropertyRNA rna_MeshTextureFace_use_image;
BooleanPropertyRNA rna_MeshTextureFace_use_bitmap_text;
EnumPropertyRNA rna_MeshTextureFace_blend_type;
BooleanPropertyRNA rna_MeshTextureFace_use_twoside;
FloatPropertyRNA rna_MeshTextureFace_uv;
FloatPropertyRNA rna_MeshTextureFace_uv_raw;
FloatPropertyRNA rna_MeshTextureFace_uv1;
FloatPropertyRNA rna_MeshTextureFace_uv2;
FloatPropertyRNA rna_MeshTextureFace_uv3;
FloatPropertyRNA rna_MeshTextureFace_uv4;
BooleanPropertyRNA rna_MeshTextureFace_pin_uv;
BooleanPropertyRNA rna_MeshTextureFace_select_uv;


PointerPropertyRNA rna_MeshTextureFaceLayer_rna_type;
StringPropertyRNA rna_MeshTextureFaceLayer_name;
BooleanPropertyRNA rna_MeshTextureFaceLayer_active;
BooleanPropertyRNA rna_MeshTextureFaceLayer_active_clone;
BooleanPropertyRNA rna_MeshTextureFaceLayer_active_render;
CollectionPropertyRNA rna_MeshTextureFaceLayer_data;
CollectionPropertyRNA rna_MeshTextureFaceLayer_rna_properties;


PointerPropertyRNA rna_MeshVertex_rna_type;
FloatPropertyRNA rna_MeshVertex_bevel_weight;
CollectionPropertyRNA rna_MeshVertex_groups;
BooleanPropertyRNA rna_MeshVertex_hide;
IntPropertyRNA rna_MeshVertex_index;
FloatPropertyRNA rna_MeshVertex_co;
FloatPropertyRNA rna_MeshVertex_normal;
CollectionPropertyRNA rna_MeshVertex_rna_properties;
BooleanPropertyRNA rna_MeshVertex_select;


PointerPropertyRNA rna_MeshVertices_rna_type;
CollectionPropertyRNA rna_MeshVertices_rna_properties;

extern FunctionRNA rna_MeshVertices_add_func;
extern IntPropertyRNA rna_MeshVertices_add_count;



PointerPropertyRNA rna_UVTextures_rna_type;
PointerPropertyRNA rna_UVTextures_active;
IntPropertyRNA rna_UVTextures_active_index;
CollectionPropertyRNA rna_UVTextures_rna_properties;

extern FunctionRNA rna_UVTextures_new_func;
extern StringPropertyRNA rna_UVTextures_new_name;
extern PointerPropertyRNA rna_UVTextures_new_layer;



PointerPropertyRNA rna_VertexColors_rna_type;
IntPropertyRNA rna_VertexColors_active_index;
PointerPropertyRNA rna_VertexColors_active;
CollectionPropertyRNA rna_VertexColors_rna_properties;

extern FunctionRNA rna_VertexColors_new_func;
extern StringPropertyRNA rna_VertexColors_new_name;
extern PointerPropertyRNA rna_VertexColors_new_layer;



PointerPropertyRNA rna_VertexGroupElement_rna_type;
IntPropertyRNA rna_VertexGroupElement_group;
CollectionPropertyRNA rna_VertexGroupElement_rna_properties;
FloatPropertyRNA rna_VertexGroupElement_weight;

int Mesh_show_all_edges_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 16) != 0);
}

void Mesh_show_all_edges_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 16;
	else data->drawflag &= ~16;
}

PointerRNA Mesh_animation_data_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

int Mesh_use_auto_smooth_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Mesh_use_auto_smooth_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

int Mesh_auto_smooth_angle_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (int)(data->smoothresh);
}

void Mesh_auto_smooth_angle_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	data->smoothresh= CLAMPIS(value, 1, 80);
}

int Mesh_use_auto_texspace_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->texflag) & 1) != 0);
}

void Mesh_use_auto_texspace_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->texflag |= 1;
	else data->texflag &= ~1;
}

PointerRNA Mesh_uv_texture_clone_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_clone_get(ptr);
}

void Mesh_uv_texture_clone_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_texture_clone_set(ptr, value);
}

int Mesh_uv_texture_clone_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_clone_index_get(ptr);
}

void Mesh_uv_texture_clone_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_texture_clone_index_set(ptr, value);
}

int Mesh_show_double_sided_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Mesh_show_double_sided_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int Mesh_show_edge_bevel_weight_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 512) != 0);
}

void Mesh_show_edge_bevel_weight_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 512;
	else data->drawflag &= ~512;
}

int Mesh_show_edge_crease_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 64) != 0);
}

void Mesh_show_edge_crease_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 64;
	else data->drawflag &= ~64;
}

int Mesh_show_edges_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 1) != 0);
}

void Mesh_show_edges_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 1;
	else data->drawflag &= ~1;
}

int Mesh_show_faces_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 2) != 0);
}

void Mesh_show_faces_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 2;
	else data->drawflag &= ~2;
}

int Mesh_show_normal_face_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 4) != 0);
}

void Mesh_show_normal_face_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 4;
	else data->drawflag &= ~4;
}

int Mesh_show_edge_seams_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 128) != 0);
}

void Mesh_show_edge_seams_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 128;
	else data->drawflag &= ~128;
}

int Mesh_show_edge_sharp_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 256) != 0);
}

void Mesh_show_edge_sharp_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 256;
	else data->drawflag &= ~256;
}

int Mesh_show_normal_vertex_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 8) != 0);
}

void Mesh_show_normal_vertex_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 8;
	else data->drawflag &= ~8;
}

int Mesh_show_extra_edge_length_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 1024) != 0);
}

void Mesh_show_extra_edge_length_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 1024;
	else data->drawflag &= ~1024;
}

int Mesh_edges_length(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (data->medge == NULL)? 0: data->totedge;
}

static PointerRNA Mesh_edges_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshEdge, rna_iterator_array_get(iter));
}

void Mesh_edges_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_edges;

	rna_iterator_array_begin(iter, data->medge, sizeof(data->medge[0]), data->totedge, 0, NULL);

	if(iter->valid)
		iter->ptr= Mesh_edges_get(iter);
}

void Mesh_edges_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_edges_get(iter);
}

void Mesh_edges_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_edges_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_edges_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_edges_get(&iter);
	}

	Mesh_edges_end(&iter);

	return found;
}

int Mesh_show_extra_face_area_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 2048) != 0);
}

void Mesh_show_extra_face_area_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 2048;
	else data->drawflag &= ~2048;
}

int Mesh_faces_length(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (data->mface == NULL)? 0: data->totface;
}

static PointerRNA Mesh_faces_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshFace, rna_iterator_array_get(iter));
}

void Mesh_faces_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_faces;

	rna_iterator_array_begin(iter, data->mface, sizeof(data->mface[0]), data->totface, 0, NULL);

	if(iter->valid)
		iter->ptr= Mesh_faces_get(iter);
}

void Mesh_faces_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_faces_get(iter);
}

void Mesh_faces_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_faces_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_faces_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_faces_get(&iter);
	}

	Mesh_faces_end(&iter);

	return found;
}

int Mesh_show_extra_face_angle_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->drawflag) & 4096) != 0);
}

void Mesh_show_extra_face_angle_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->drawflag |= 4096;
	else data->drawflag &= ~4096;
}

int Mesh_layers_float_length(PointerRNA *ptr)
{
	return rna_Mesh_float_layers_length(ptr);
}

static PointerRNA Mesh_layers_float_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshFloatPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_layers_float_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_layers_float;

	rna_Mesh_float_layers_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Mesh_layers_float_get(iter);
}

void Mesh_layers_float_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_layers_float_get(iter);
}

void Mesh_layers_float_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_layers_float_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_layers_float_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_layers_float_get(&iter);
	}

	Mesh_layers_float_end(&iter);

	return found;
}

int Mesh_layers_int_length(PointerRNA *ptr)
{
	return rna_Mesh_int_layers_length(ptr);
}

static PointerRNA Mesh_layers_int_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshIntPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_layers_int_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_layers_int;

	rna_Mesh_int_layers_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Mesh_layers_int_get(iter);
}

void Mesh_layers_int_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_layers_int_get(iter);
}

void Mesh_layers_int_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_layers_int_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_layers_int_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_layers_int_get(&iter);
	}

	Mesh_layers_int_end(&iter);

	return found;
}

PointerRNA Mesh_uv_texture_stencil_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_stencil_get(ptr);
}

void Mesh_uv_texture_stencil_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_uv_texture_stencil_set(ptr, value);
}

int Mesh_uv_texture_stencil_index_get(PointerRNA *ptr)
{
	return rna_Mesh_uv_texture_stencil_index_get(ptr);
}

void Mesh_uv_texture_stencil_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_uv_texture_stencil_index_set(ptr, value);
}

int Mesh_materials_length(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (data->mat == NULL)? 0: data->totcol;
}

static PointerRNA Mesh_materials_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Mesh_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_materials;

	rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

	if(iter->valid)
		iter->ptr= Mesh_materials_get(iter);
}

void Mesh_materials_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_materials_get(iter);
}

void Mesh_materials_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_materials_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_materials_get(&iter);
	}

	Mesh_materials_end(&iter);

	return found;
}

int Mesh_use_paint_mask_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->editflag) & 8) != 0);
}

void Mesh_use_paint_mask_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->editflag |= 8;
	else data->editflag &= ~8;
}

int Mesh_total_edge_sel_get(PointerRNA *ptr)
{
	return rna_Mesh_tot_edge_get(ptr);
}

int Mesh_total_face_sel_get(PointerRNA *ptr)
{
	return rna_Mesh_tot_face_get(ptr);
}

int Mesh_total_vert_sel_get(PointerRNA *ptr)
{
	return rna_Mesh_tot_vert_get(ptr);
}

PointerRNA Mesh_shape_keys_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

int Mesh_sticky_length(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (data->msticky == NULL)? 0: data->totvert;
}

static PointerRNA Mesh_sticky_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshSticky, rna_iterator_array_get(iter));
}

void Mesh_sticky_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_sticky;

	rna_iterator_array_begin(iter, data->msticky, sizeof(data->msticky[0]), data->totvert, 0, NULL);

	if(iter->valid)
		iter->ptr= Mesh_sticky_get(iter);
}

void Mesh_sticky_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_sticky_get(iter);
}

void Mesh_sticky_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_sticky_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_sticky_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_sticky_get(&iter);
	}

	Mesh_sticky_end(&iter);

	return found;
}

int Mesh_layers_string_length(PointerRNA *ptr)
{
	return rna_Mesh_string_layers_length(ptr);
}

static PointerRNA Mesh_layers_string_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshStringPropertyLayer, rna_iterator_array_get(iter));
}

void Mesh_layers_string_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_layers_string;

	rna_Mesh_string_layers_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Mesh_layers_string_get(iter);
}

void Mesh_layers_string_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_layers_string_get(iter);
}

void Mesh_layers_string_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_layers_string_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_layers_string_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_layers_string_get(&iter);
	}

	Mesh_layers_string_end(&iter);

	return found;
}

PointerRNA Mesh_texture_mesh_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

void Mesh_texture_mesh_set(PointerRNA *ptr, PointerRNA value)
{
	Mesh *data= (Mesh*)(ptr->data);
	ID *id= ptr->id.data;
	if(id==value.data) return;


	if(data->texcomesh)
		id_us_min((ID*)data->texcomesh);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->texcomesh= value.data;
}

void Mesh_texspace_location_get(PointerRNA *ptr, float values[3])
{
	rna_Mesh_texspace_loc_get(ptr, values);
}

void Mesh_texspace_location_set(PointerRNA *ptr, const float values[3])
{
	rna_Mesh_texspace_loc_set(ptr, values);
}

PointerRNA Mesh_texco_mesh_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Mesh, data->texcomesh);
}

void Mesh_texco_mesh_set(PointerRNA *ptr, PointerRNA value)
{
	Mesh *data= (Mesh*)(ptr->data);

	if(data->texcomesh)
		id_us_min((ID*)data->texcomesh);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->texcomesh= value.data;
}

void Mesh_texspace_size_get(PointerRNA *ptr, float values[3])
{
	rna_Mesh_texspace_size_get(ptr, values);
}

void Mesh_texspace_size_set(PointerRNA *ptr, const float values[3])
{
	rna_Mesh_texspace_size_set(ptr, values);
}

int Mesh_use_mirror_topology_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->editflag) & 16) != 0);
}

void Mesh_use_mirror_topology_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->editflag |= 16;
	else data->editflag &= ~16;
}

int Mesh_uv_textures_length(PointerRNA *ptr)
{
	return rna_Mesh_uv_textures_length(ptr);
}

static PointerRNA Mesh_uv_textures_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshTextureFaceLayer, rna_iterator_array_get(iter));
}

void Mesh_uv_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_uv_textures;

	rna_Mesh_uv_textures_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Mesh_uv_textures_get(iter);
}

void Mesh_uv_textures_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_uv_textures_get(iter);
}

void Mesh_uv_textures_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_uv_textures_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_uv_textures_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_uv_textures_get(&iter);
	}

	Mesh_uv_textures_end(&iter);

	return found;
}

int Mesh_vertex_colors_length(PointerRNA *ptr)
{
	return rna_Mesh_vertex_colors_length(ptr);
}

static PointerRNA Mesh_vertex_colors_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshColorLayer, rna_iterator_array_get(iter));
}

void Mesh_vertex_colors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_vertex_colors;

	rna_Mesh_vertex_colors_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Mesh_vertex_colors_get(iter);
}

void Mesh_vertex_colors_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_vertex_colors_get(iter);
}

void Mesh_vertex_colors_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_vertex_colors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_vertex_colors_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_vertex_colors_get(&iter);
	}

	Mesh_vertex_colors_end(&iter);

	return found;
}

int Mesh_vertices_length(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (data->mvert == NULL)? 0: data->totvert;
}

static PointerRNA Mesh_vertices_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshVertex, rna_iterator_array_get(iter));
}

void Mesh_vertices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Mesh_vertices;

	rna_iterator_array_begin(iter, data->mvert, sizeof(data->mvert[0]), data->totvert, 0, NULL);

	if(iter->valid)
		iter->ptr= Mesh_vertices_get(iter);
}

void Mesh_vertices_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Mesh_vertices_get(iter);
}

void Mesh_vertices_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Mesh_vertices_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Mesh_vertices_begin(&iter, ptr);

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
		if(found) *r_ptr = Mesh_vertices_get(&iter);
	}

	Mesh_vertices_end(&iter);

	return found;
}

int Mesh_use_mirror_x_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (((data->editflag) & 1) != 0);
}

void Mesh_use_mirror_x_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	if(value) data->editflag |= 1;
	else data->editflag &= ~1;
}

PointerRNA MeshColor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshColor_color1_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color1_get(ptr, values);
}

void MeshColor_color1_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color1_set(ptr, values);
}

void MeshColor_color2_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color2_get(ptr, values);
}

void MeshColor_color2_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color2_set(ptr, values);
}

void MeshColor_color3_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color3_get(ptr, values);
}

void MeshColor_color3_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color3_set(ptr, values);
}

void MeshColor_color4_get(PointerRNA *ptr, float values[3])
{
	rna_MeshColor_color4_get(ptr, values);
}

void MeshColor_color4_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshColor_color4_set(ptr, values);
}

static PointerRNA MeshColor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshColor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshColor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshColor_rna_properties_get(iter);
}

void MeshColor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshColor_rna_properties_get(iter);
}

void MeshColor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshColorLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshColorLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int MeshColorLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	return strlen(data->name);
}

void MeshColorLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshColorLayer_name_set(ptr, value);
}

int MeshColorLayer_active_get(PointerRNA *ptr)
{
	return rna_MeshColorLayer_active_get(ptr);
}

void MeshColorLayer_active_set(PointerRNA *ptr, int value)
{
	rna_MeshColorLayer_active_set(ptr, value);
}

int MeshColorLayer_active_render_get(PointerRNA *ptr)
{
	return rna_MeshColorLayer_active_render_get(ptr);
}

void MeshColorLayer_active_render_set(PointerRNA *ptr, int value)
{
	rna_MeshColorLayer_active_render_set(ptr, value);
}

static PointerRNA MeshColorLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshColor, rna_iterator_array_get(iter));
}

void MeshColorLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshColorLayer_data;

	rna_MeshColorLayer_data_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshColorLayer_data_get(iter);
}

void MeshColorLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MeshColorLayer_data_get(iter);
}

void MeshColorLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshColorLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MeshColorLayer_data_begin(&iter, ptr);

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
		if(found) *r_ptr = MeshColorLayer_data_get(&iter);
	}

	MeshColorLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshColorLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshColorLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshColorLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshColorLayer_rna_properties_get(iter);
}

void MeshColorLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshColorLayer_rna_properties_get(iter);
}

void MeshColorLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshEdge_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float MeshEdge_bevel_weight_get(PointerRNA *ptr)
{
	return rna_MEdge_bevel_weight_get(ptr);
}

void MeshEdge_bevel_weight_set(PointerRNA *ptr, float value)
{
	rna_MEdge_bevel_weight_set(ptr, value);
}

float MeshEdge_crease_get(PointerRNA *ptr)
{
	return rna_MEdge_crease_get(ptr);
}

void MeshEdge_crease_set(PointerRNA *ptr, float value)
{
	rna_MEdge_crease_set(ptr, value);
}

int MeshEdge_is_fgon_get(PointerRNA *ptr)
{
	MEdge *data= (MEdge*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void MeshEdge_is_fgon_set(PointerRNA *ptr, int value)
{
	MEdge *data= (MEdge*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int MeshEdge_hide_get(PointerRNA *ptr)
{
	MEdge *data= (MEdge*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MeshEdge_hide_set(PointerRNA *ptr, int value)
{
	MEdge *data= (MEdge*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

int MeshEdge_index_get(PointerRNA *ptr)
{
	return rna_MeshEdge_index_get(ptr);
}

int MeshEdge_is_loose_get(PointerRNA *ptr)
{
	MEdge *data= (MEdge*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void MeshEdge_is_loose_set(PointerRNA *ptr, int value)
{
	MEdge *data= (MEdge*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

static PointerRNA MeshEdge_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshEdge_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshEdge_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshEdge_rna_properties_get(iter);
}

void MeshEdge_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshEdge_rna_properties_get(iter);
}

void MeshEdge_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshEdge_use_seam_get(PointerRNA *ptr)
{
	MEdge *data= (MEdge*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void MeshEdge_use_seam_set(PointerRNA *ptr, int value)
{
	MEdge *data= (MEdge*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int MeshEdge_select_get(PointerRNA *ptr)
{
	MEdge *data= (MEdge*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshEdge_select_set(PointerRNA *ptr, int value)
{
	MEdge *data= (MEdge*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int MeshEdge_use_edge_sharp_get(PointerRNA *ptr)
{
	MEdge *data= (MEdge*)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void MeshEdge_use_edge_sharp_set(PointerRNA *ptr, int value)
{
	MEdge *data= (MEdge*)(ptr->data);
	if(value) data->flag |= 512;
	else data->flag &= ~512;
}

void MeshEdge_vertices_get(PointerRNA *ptr, int values[2])
{
	MEdge *data= (MEdge*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		values[i]= (int)((&data->v1)[i]);
	}
}

void MeshEdge_vertices_set(PointerRNA *ptr, const int values[2])
{
	MEdge *data= (MEdge*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		(&data->v1)[i]= CLAMPIS(values[i], 0, INT_MAX);
	}
}

PointerRNA MeshEdges_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshEdges_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshEdges_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshEdges_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshEdges_rna_properties_get(iter);
}

void MeshEdges_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshEdges_rna_properties_get(iter);
}

void MeshEdges_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshFace_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshFace_hide_get(PointerRNA *ptr)
{
	MFace *data= (MFace*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MeshFace_hide_set(PointerRNA *ptr, int value)
{
	MFace *data= (MFace*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

int MeshFace_index_get(PointerRNA *ptr)
{
	return rna_MeshFace_index_get(ptr);
}

int MeshFace_material_index_get(PointerRNA *ptr)
{
	MFace *data= (MFace*)(ptr->data);
	return (int)(data->mat_nr);
}

void MeshFace_material_index_set(PointerRNA *ptr, int value)
{
	MFace *data= (MFace*)(ptr->data);
	data->mat_nr= CLAMPIS(value, 0, 32767);
}

static PointerRNA MeshFace_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshFace_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshFace_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshFace_rna_properties_get(iter);
}

void MeshFace_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshFace_rna_properties_get(iter);
}

void MeshFace_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshFace_select_get(PointerRNA *ptr)
{
	MFace *data= (MFace*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MeshFace_select_set(PointerRNA *ptr, int value)
{
	MFace *data= (MFace*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int MeshFace_use_smooth_get(PointerRNA *ptr)
{
	MFace *data= (MFace*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshFace_use_smooth_set(PointerRNA *ptr, int value)
{
	MFace *data= (MFace*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

void MeshFace_vertices_get(PointerRNA *ptr, int values[])
{
	rna_MeshFace_verts_get(ptr, values);
}

void MeshFace_vertices_set(PointerRNA *ptr, const int values[])
{
	rna_MeshFace_verts_set(ptr, values);
}

void MeshFace_vertices_raw_get(PointerRNA *ptr, int values[4])
{
	MFace *data= (MFace*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= (int)((&data->v1)[i]);
	}
}

void MeshFace_vertices_raw_set(PointerRNA *ptr, const int values[4])
{
	MFace *data= (MFace*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		(&data->v1)[i]= CLAMPIS(values[i], 0, INT_MAX);
	}
}

float MeshFace_area_get(PointerRNA *ptr)
{
	return rna_MeshFace_area_get(ptr);
}

void MeshFace_normal_get(PointerRNA *ptr, float values[3])
{
	rna_MeshFace_normal_get(ptr, values);
}

PointerRNA MeshFaces_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshFaces_active_get(PointerRNA *ptr)
{
	Mesh *data= (Mesh*)(ptr->data);
	return (int)(data->act_face);
}

void MeshFaces_active_set(PointerRNA *ptr, int value)
{
	Mesh *data= (Mesh*)(ptr->data);
	data->act_face= value;
}

PointerRNA MeshFaces_active_tface_get(PointerRNA *ptr)
{
	return rna_Mesh_active_mtface_get(ptr);
}

static PointerRNA MeshFaces_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshFaces_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshFaces_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshFaces_rna_properties_get(iter);
}

void MeshFaces_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshFaces_rna_properties_get(iter);
}

void MeshFaces_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshFloatProperty_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshFloatProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshFloatProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshFloatProperty_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshFloatProperty_rna_properties_get(iter);
}

void MeshFloatProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshFloatProperty_rna_properties_get(iter);
}

void MeshFloatProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float MeshFloatProperty_value_get(PointerRNA *ptr)
{
	MFloatProperty *data= (MFloatProperty*)(ptr->data);
	return (float)(data->f);
}

void MeshFloatProperty_value_set(PointerRNA *ptr, float value)
{
	MFloatProperty *data= (MFloatProperty*)(ptr->data);
	data->f= value;
}

PointerRNA MeshFloatPropertyLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshFloatPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int MeshFloatPropertyLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	return strlen(data->name);
}

void MeshFloatPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(data->name, value, 32);
}

static PointerRNA MeshFloatPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshFloatProperty, rna_iterator_array_get(iter));
}

void MeshFloatPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshFloatPropertyLayer_data;

	rna_MeshFloatPropertyLayer_data_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshFloatPropertyLayer_data_get(iter);
}

void MeshFloatPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MeshFloatPropertyLayer_data_get(iter);
}

void MeshFloatPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshFloatPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MeshFloatPropertyLayer_data_begin(&iter, ptr);

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
		if(found) *r_ptr = MeshFloatPropertyLayer_data_get(&iter);
	}

	MeshFloatPropertyLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshFloatPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshFloatPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshFloatPropertyLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshFloatPropertyLayer_rna_properties_get(iter);
}

void MeshFloatPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshFloatPropertyLayer_rna_properties_get(iter);
}

void MeshFloatPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshIntProperty_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshIntProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshIntProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshIntProperty_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshIntProperty_rna_properties_get(iter);
}

void MeshIntProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshIntProperty_rna_properties_get(iter);
}

void MeshIntProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshIntProperty_value_get(PointerRNA *ptr)
{
	MIntProperty *data= (MIntProperty*)(ptr->data);
	return (int)(data->i);
}

void MeshIntProperty_value_set(PointerRNA *ptr, int value)
{
	MIntProperty *data= (MIntProperty*)(ptr->data);
	data->i= value;
}

PointerRNA MeshIntPropertyLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshIntPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int MeshIntPropertyLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	return strlen(data->name);
}

void MeshIntPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(data->name, value, 32);
}

static PointerRNA MeshIntPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshIntProperty, rna_iterator_array_get(iter));
}

void MeshIntPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshIntPropertyLayer_data;

	rna_MeshIntPropertyLayer_data_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshIntPropertyLayer_data_get(iter);
}

void MeshIntPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MeshIntPropertyLayer_data_get(iter);
}

void MeshIntPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshIntPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MeshIntPropertyLayer_data_begin(&iter, ptr);

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
		if(found) *r_ptr = MeshIntPropertyLayer_data_get(&iter);
	}

	MeshIntPropertyLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshIntPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshIntPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshIntPropertyLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshIntPropertyLayer_rna_properties_get(iter);
}

void MeshIntPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshIntPropertyLayer_rna_properties_get(iter);
}

void MeshIntPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshSticky_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshSticky_co_get(PointerRNA *ptr, float values[2])
{
	MSticky *data= (MSticky*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		values[i]= (float)(((float*)data->co)[i]);
	}
}

void MeshSticky_co_set(PointerRNA *ptr, const float values[2])
{
	MSticky *data= (MSticky*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		((float*)data->co)[i]= values[i];
	}
}

static PointerRNA MeshSticky_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshSticky_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshSticky_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshSticky_rna_properties_get(iter);
}

void MeshSticky_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshSticky_rna_properties_get(iter);
}

void MeshSticky_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshStringProperty_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshStringProperty_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshStringProperty_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshStringProperty_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshStringProperty_rna_properties_get(iter);
}

void MeshStringProperty_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshStringProperty_rna_properties_get(iter);
}

void MeshStringProperty_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void MeshStringProperty_value_get(PointerRNA *ptr, char *value)
{
	MStringProperty *data= (MStringProperty*)(ptr->data);
	BLI_strncpy(value, data->s, 256);
}

int MeshStringProperty_value_length(PointerRNA *ptr)
{
	MStringProperty *data= (MStringProperty*)(ptr->data);
	return strlen(data->s);
}

void MeshStringProperty_value_set(PointerRNA *ptr, const char *value)
{
	MStringProperty *data= (MStringProperty*)(ptr->data);
	BLI_strncpy(data->s, value, 256);
}

PointerRNA MeshStringPropertyLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshStringPropertyLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int MeshStringPropertyLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	return strlen(data->name);
}

void MeshStringPropertyLayer_name_set(PointerRNA *ptr, const char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(data->name, value, 32);
}

static PointerRNA MeshStringPropertyLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshStringProperty, rna_iterator_array_get(iter));
}

void MeshStringPropertyLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshStringPropertyLayer_data;

	rna_MeshStringPropertyLayer_data_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshStringPropertyLayer_data_get(iter);
}

void MeshStringPropertyLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MeshStringPropertyLayer_data_get(iter);
}

void MeshStringPropertyLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshStringPropertyLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MeshStringPropertyLayer_data_begin(&iter, ptr);

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
		if(found) *r_ptr = MeshStringPropertyLayer_data_get(&iter);
	}

	MeshStringPropertyLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshStringPropertyLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshStringPropertyLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshStringPropertyLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshStringPropertyLayer_rna_properties_get(iter);
}

void MeshStringPropertyLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshStringPropertyLayer_rna_properties_get(iter);
}

void MeshStringPropertyLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshTextureFace_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MeshTextureFace_use_alpha_sort_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 2) != 0);
}

void MeshTextureFace_use_alpha_sort_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 2;
	else data->mode &= ~2;
}

int MeshTextureFace_use_billboard_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 4096) != 0);
}

void MeshTextureFace_use_billboard_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 4096;
	else data->mode &= ~4096;
}

int MeshTextureFace_use_collision_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 1) != 0);
}

void MeshTextureFace_use_collision_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 1;
	else data->mode &= ~1;
}

int MeshTextureFace_use_halo_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 256) != 0);
}

void MeshTextureFace_use_halo_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 256;
	else data->mode &= ~256;
}

PointerRNA MeshTextureFace_image_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Image, data->tpage);
}

void MeshTextureFace_image_set(PointerRNA *ptr, PointerRNA value)
{
	rna_TextureFace_image_set(ptr, value);
}

int MeshTextureFace_hide_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 1024) != 0);
}

void MeshTextureFace_hide_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 1024;
	else data->mode &= ~1024;
}

int MeshTextureFace_use_light_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 16) != 0);
}

void MeshTextureFace_use_light_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 16;
	else data->mode &= ~16;
}

int MeshTextureFace_use_object_color_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 2048) != 0);
}

void MeshTextureFace_use_object_color_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 2048;
	else data->mode &= ~2048;
}

static PointerRNA MeshTextureFace_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTextureFace_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshTextureFace_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshTextureFace_rna_properties_get(iter);
}

void MeshTextureFace_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshTextureFace_rna_properties_get(iter);
}

void MeshTextureFace_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshTextureFace_use_shadow_cast_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 8192) != 0);
}

void MeshTextureFace_use_shadow_cast_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 8192;
	else data->mode &= ~8192;
}

int MeshTextureFace_use_blend_shared_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 64) != 0);
}

void MeshTextureFace_use_blend_shared_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 64;
	else data->mode &= ~64;
}

int MeshTextureFace_use_image_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 4) != 0);
}

void MeshTextureFace_use_image_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 4;
	else data->mode &= ~4;
}

int MeshTextureFace_use_bitmap_text_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 16384) != 0);
}

void MeshTextureFace_use_bitmap_text_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 16384;
	else data->mode &= ~16384;
}

int MeshTextureFace_blend_type_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (int)(data->transp);
}

void MeshTextureFace_blend_type_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	data->transp= value;
}

int MeshTextureFace_use_twoside_get(PointerRNA *ptr)
{
	MTFace *data= (MTFace*)(ptr->data);
	return (((data->mode) & 512) != 0);
}

void MeshTextureFace_use_twoside_set(PointerRNA *ptr, int value)
{
	MTFace *data= (MTFace*)(ptr->data);
	if(value) data->mode |= 512;
	else data->mode &= ~512;
}

void MeshTextureFace_uv_get(PointerRNA *ptr, float values[])
{
	rna_MeshTextureFace_uv_get(ptr, values);
}

void MeshTextureFace_uv_set(PointerRNA *ptr, const float values[])
{
	rna_MeshTextureFace_uv_set(ptr, values);
}

void MeshTextureFace_uv_raw_get(PointerRNA *ptr, float values[8])
{
	MTFace *data= (MTFace*)(ptr->data);
	int i;

	for(i=0; i<8; i++) {
		values[i]= (float)(((float*)data->uv)[i]);
	}
}

void MeshTextureFace_uv_raw_set(PointerRNA *ptr, const float values[8])
{
	MTFace *data= (MTFace*)(ptr->data);
	int i;

	for(i=0; i<8; i++) {
		((float*)data->uv)[i]= values[i];
	}
}

void MeshTextureFace_uv1_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv1_get(ptr, values);
}

void MeshTextureFace_uv1_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv1_set(ptr, values);
}

void MeshTextureFace_uv2_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv2_get(ptr, values);
}

void MeshTextureFace_uv2_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv2_set(ptr, values);
}

void MeshTextureFace_uv3_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv3_get(ptr, values);
}

void MeshTextureFace_uv3_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv3_set(ptr, values);
}

void MeshTextureFace_uv4_get(PointerRNA *ptr, float values[2])
{
	rna_MeshTextureFace_uv4_get(ptr, values);
}

void MeshTextureFace_uv4_set(PointerRNA *ptr, const float values[2])
{
	rna_MeshTextureFace_uv4_set(ptr, values);
}

void MeshTextureFace_pin_uv_get(PointerRNA *ptr, int values[4])
{
	MTFace *data= (MTFace*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= ((data->unwrap & (16<<i)) != 0);
	}
}

void MeshTextureFace_pin_uv_set(PointerRNA *ptr, const int values[4])
{
	MTFace *data= (MTFace*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		if(values[i]) data->unwrap |= (16<<i);
		else data->unwrap &= ~(16<<i);
	}
}

void MeshTextureFace_select_uv_get(PointerRNA *ptr, int values[4])
{
	MTFace *data= (MTFace*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= ((data->flag & (4<<i)) != 0);
	}
}

void MeshTextureFace_select_uv_set(PointerRNA *ptr, const int values[4])
{
	MTFace *data= (MTFace*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		if(values[i]) data->flag |= (4<<i);
		else data->flag &= ~(4<<i);
	}
}

PointerRNA MeshTextureFaceLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MeshTextureFaceLayer_name_get(PointerRNA *ptr, char *value)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int MeshTextureFaceLayer_name_length(PointerRNA *ptr)
{
	CustomDataLayer *data= (CustomDataLayer*)(ptr->data);
	return strlen(data->name);
}

void MeshTextureFaceLayer_name_set(PointerRNA *ptr, const char *value)
{
	rna_MeshTextureFaceLayer_name_set(ptr, value);
}

int MeshTextureFaceLayer_active_get(PointerRNA *ptr)
{
	return rna_MeshTextureFaceLayer_active_get(ptr);
}

void MeshTextureFaceLayer_active_set(PointerRNA *ptr, int value)
{
	rna_MeshTextureFaceLayer_active_set(ptr, value);
}

int MeshTextureFaceLayer_active_clone_get(PointerRNA *ptr)
{
	return rna_MeshTextureFaceLayer_clone_get(ptr);
}

void MeshTextureFaceLayer_active_clone_set(PointerRNA *ptr, int value)
{
	rna_MeshTextureFaceLayer_clone_set(ptr, value);
}

int MeshTextureFaceLayer_active_render_get(PointerRNA *ptr)
{
	return rna_MeshTextureFaceLayer_active_render_get(ptr);
}

void MeshTextureFaceLayer_active_render_set(PointerRNA *ptr, int value)
{
	rna_MeshTextureFaceLayer_active_render_set(ptr, value);
}

static PointerRNA MeshTextureFaceLayer_data_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MeshTextureFace, rna_iterator_array_get(iter));
}

void MeshTextureFaceLayer_data_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshTextureFaceLayer_data;

	rna_MeshTextureFaceLayer_data_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshTextureFaceLayer_data_get(iter);
}

void MeshTextureFaceLayer_data_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MeshTextureFaceLayer_data_get(iter);
}

void MeshTextureFaceLayer_data_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshTextureFaceLayer_data_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MeshTextureFaceLayer_data_begin(&iter, ptr);

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
		if(found) *r_ptr = MeshTextureFaceLayer_data_get(&iter);
	}

	MeshTextureFaceLayer_data_end(&iter);

	return found;
}

static PointerRNA MeshTextureFaceLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshTextureFaceLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshTextureFaceLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshTextureFaceLayer_rna_properties_get(iter);
}

void MeshTextureFaceLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshTextureFaceLayer_rna_properties_get(iter);
}

void MeshTextureFaceLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA MeshVertex_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float MeshVertex_bevel_weight_get(PointerRNA *ptr)
{
	return rna_MeshVertex_bevel_weight_get(ptr);
}

void MeshVertex_bevel_weight_set(PointerRNA *ptr, float value)
{
	rna_MeshVertex_bevel_weight_set(ptr, value);
}

static PointerRNA MeshVertex_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroupElement, rna_iterator_array_get(iter));
}

void MeshVertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshVertex_groups;

	rna_MeshVertex_groups_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshVertex_groups_get(iter);
}

void MeshVertex_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MeshVertex_groups_get(iter);
}

void MeshVertex_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MeshVertex_hide_get(PointerRNA *ptr)
{
	MVert *data= (MVert*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void MeshVertex_hide_set(PointerRNA *ptr, int value)
{
	MVert *data= (MVert*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

int MeshVertex_index_get(PointerRNA *ptr)
{
	return rna_MeshVertex_index_get(ptr);
}

void MeshVertex_co_get(PointerRNA *ptr, float values[3])
{
	MVert *data= (MVert*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->co)[i]);
	}
}

void MeshVertex_co_set(PointerRNA *ptr, const float values[3])
{
	MVert *data= (MVert*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->co)[i]= values[i];
	}
}

void MeshVertex_normal_get(PointerRNA *ptr, float values[3])
{
	rna_MeshVertex_normal_get(ptr, values);
}

void MeshVertex_normal_set(PointerRNA *ptr, const float values[3])
{
	rna_MeshVertex_normal_set(ptr, values);
}

static PointerRNA MeshVertex_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshVertex_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshVertex_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshVertex_rna_properties_get(iter);
}

void MeshVertex_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshVertex_rna_properties_get(iter);
}

void MeshVertex_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MeshVertex_select_get(PointerRNA *ptr)
{
	MVert *data= (MVert*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MeshVertex_select_set(PointerRNA *ptr, int value)
{
	MVert *data= (MVert*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA MeshVertices_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA MeshVertices_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MeshVertices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MeshVertices_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MeshVertices_rna_properties_get(iter);
}

void MeshVertices_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MeshVertices_rna_properties_get(iter);
}

void MeshVertices_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA UVTextures_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA UVTextures_active_get(PointerRNA *ptr)
{
	return rna_Mesh_active_uv_texture_get(ptr);
}

void UVTextures_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_active_uv_texture_set(ptr, value);
}

int UVTextures_active_index_get(PointerRNA *ptr)
{
	return rna_Mesh_active_uv_texture_index_get(ptr);
}

void UVTextures_active_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_active_uv_texture_index_set(ptr, value);
}

static PointerRNA UVTextures_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UVTextures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_UVTextures_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= UVTextures_rna_properties_get(iter);
}

void UVTextures_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= UVTextures_rna_properties_get(iter);
}

void UVTextures_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA VertexColors_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int VertexColors_active_index_get(PointerRNA *ptr)
{
	return rna_Mesh_active_vertex_color_index_get(ptr);
}

void VertexColors_active_index_set(PointerRNA *ptr, int value)
{
	rna_Mesh_active_vertex_color_index_set(ptr, value);
}

PointerRNA VertexColors_active_get(PointerRNA *ptr)
{
	return rna_Mesh_active_vertex_color_get(ptr);
}

void VertexColors_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Mesh_active_vertex_color_set(ptr, value);
}

static PointerRNA VertexColors_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void VertexColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_VertexColors_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= VertexColors_rna_properties_get(iter);
}

void VertexColors_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= VertexColors_rna_properties_get(iter);
}

void VertexColors_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA VertexGroupElement_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int VertexGroupElement_group_get(PointerRNA *ptr)
{
	MDeformWeight *data= (MDeformWeight*)(ptr->data);
	return (int)(data->def_nr);
}

static PointerRNA VertexGroupElement_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void VertexGroupElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_VertexGroupElement_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= VertexGroupElement_rna_properties_get(iter);
}

void VertexGroupElement_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= VertexGroupElement_rna_properties_get(iter);
}

void VertexGroupElement_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float VertexGroupElement_weight_get(PointerRNA *ptr)
{
	MDeformWeight *data= (MDeformWeight*)(ptr->data);
	return (float)(data->weight);
}

void VertexGroupElement_weight_set(PointerRNA *ptr, float value)
{
	MDeformWeight *data= (MDeformWeight*)(ptr->data);
	data->weight= CLAMPIS(value, 0.0f, 1.0f);
}

void Mesh_transform_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	float *matrix;
	char *_data;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	matrix= ((float*)_data);
	
	ED_mesh_transform(_self, matrix);
}

void Mesh_calc_normals_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	_self= (struct Mesh *)_ptr->data;
	
	ED_mesh_calc_normals(_self);
}

void Mesh_update_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int calc_edges;
	char *_data;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	calc_edges= *((int*)_data);
	
	ED_mesh_update(_self, C, calc_edges);
}

void Mesh_validate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int verbose;
	int result;
	char *_data, *_retdata;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	verbose= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	result= BKE_mesh_validate(_self, verbose);
	*((int*)_retdata)= result;
}

/* Repeated prototypes to detect errors */

void ED_mesh_transform(struct Mesh *_self, float matrix[16]);
void ED_mesh_calc_normals(struct Mesh *_self);
void ED_mesh_update(struct Mesh *_self, bContext *C, int calc_edges);
int BKE_mesh_validate(struct Mesh *_self, int verbose);




void MeshEdges_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	count= *((int*)_data);
	
	ED_mesh_edges_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_edges_add(struct Mesh *_self, ReportList *reports, int count);


void MeshFaces_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	count= *((int*)_data);
	
	ED_mesh_faces_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_faces_add(struct Mesh *_self, ReportList *reports, int count);











void MeshVertices_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	int count;
	char *_data;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	count= *((int*)_data);
	
	ED_mesh_vertices_add(_self, reports, count);
}

/* Repeated prototypes to detect errors */

void ED_mesh_vertices_add(struct Mesh *_self, ReportList *reports, int count);

void UVTextures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char* name;
	struct CustomDataLayer *layer;
	char *_data, *_retdata;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	layer= rna_Mesh_uv_texture_new(_self, C, name);
	*((struct CustomDataLayer**)_retdata)= layer;
}

/* Repeated prototypes to detect errors */

struct CustomDataLayer *rna_Mesh_uv_texture_new(struct Mesh *_self, bContext *C, const char* name);

void VertexColors_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Mesh *_self;
	const char* name;
	struct CustomDataLayer *layer;
	char *_data, *_retdata;
	
	_self= (struct Mesh *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	layer= rna_Mesh_vertex_color_new(_self, C, name);
	*((struct CustomDataLayer**)_retdata)= layer;
}

/* Repeated prototypes to detect errors */

struct CustomDataLayer *rna_Mesh_vertex_color_new(struct Mesh *_self, bContext *C, const char* name);


/* Mesh */
BooleanPropertyRNA rna_Mesh_show_all_edges = {
	{(PropertyRNA*)&rna_Mesh_animation_data, NULL,
	-1, "show_all_edges", 3, "All Edges",
	"Displays all edges for wireframe in all view modes in the 3D view",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Mesh_show_all_edges_get, Mesh_show_all_edges_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Mesh_animation_data = {
	{(PropertyRNA*)&rna_Mesh_use_auto_smooth, (PropertyRNA*)&rna_Mesh_show_all_edges,
	-1, "animation_data", 0, "Animation Data",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

BooleanPropertyRNA rna_Mesh_use_auto_smooth = {
	{(PropertyRNA*)&rna_Mesh_auto_smooth_angle, (PropertyRNA*)&rna_Mesh_animation_data,
	-1, "use_auto_smooth", 3, "Auto Smooth",
	"Treats all set-smoothed faces with angles less than the specified angle as \'smooth\' during render",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_auto_smooth_get, Mesh_use_auto_smooth_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Mesh_auto_smooth_angle = {
	{(PropertyRNA*)&rna_Mesh_use_auto_texspace, (PropertyRNA*)&rna_Mesh_use_auto_smooth,
	-1, "auto_smooth_angle", 8195, "Auto Smooth Angle",
	"Defines maximum angle between face normals that \'Auto Smooth\' will operate on",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Mesh, smoothresh), 1, NULL},
	Mesh_auto_smooth_angle_get, Mesh_auto_smooth_angle_set, NULL, NULL, NULL,
	1, 80, 1, 80, 1, 0, NULL
};

BooleanPropertyRNA rna_Mesh_use_auto_texspace = {
	{(PropertyRNA*)&rna_Mesh_uv_texture_clone, (PropertyRNA*)&rna_Mesh_auto_smooth_angle,
	-1, "use_auto_texspace", 3, "Auto Texture Space",
	"Adjusts active object\'s texture space automatically when transforming object",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_texspace_set, 85393408, NULL, NULL,
	0, -1, NULL},
	Mesh_use_auto_texspace_get, Mesh_use_auto_texspace_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Mesh_uv_texture_clone = {
	{(PropertyRNA*)&rna_Mesh_uv_texture_clone_index, (PropertyRNA*)&rna_Mesh_use_auto_texspace,
	-1, "uv_texture_clone", 1, "Clone UV Texture",
	"UV texture to be used as cloning source",
	0,
	PROP_POINTER, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_clone_get, Mesh_uv_texture_clone_set, NULL, NULL,&RNA_MeshTextureFaceLayer
};

IntPropertyRNA rna_Mesh_uv_texture_clone_index = {
	{(PropertyRNA*)&rna_Mesh_show_double_sided, (PropertyRNA*)&rna_Mesh_uv_texture_clone,
	-1, "uv_texture_clone_index", 3, "Clone UV Texture Index",
	"Clone UV texture index",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_clone_index_get, Mesh_uv_texture_clone_index_set, NULL, NULL, rna_Mesh_active_uv_texture_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_double_sided = {
	{(PropertyRNA*)&rna_Mesh_show_edge_bevel_weight, (PropertyRNA*)&rna_Mesh_uv_texture_clone_index,
	-1, "show_double_sided", 3, "Double Sided",
	"Render/display the mesh with double or single sided lighting",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_double_sided_get, Mesh_show_double_sided_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_edge_bevel_weight = {
	{(PropertyRNA*)&rna_Mesh_show_edge_crease, (PropertyRNA*)&rna_Mesh_show_double_sided,
	-1, "show_edge_bevel_weight", 3, "Draw Bevel Weights",
	"Displays weights created for the Bevel modifier",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_bevel_weight_get, Mesh_show_edge_bevel_weight_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_edge_crease = {
	{(PropertyRNA*)&rna_Mesh_show_edges, (PropertyRNA*)&rna_Mesh_show_edge_bevel_weight,
	-1, "show_edge_crease", 3, "Draw Creases",
	"Displays creases created for subsurf weighting",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_crease_get, Mesh_show_edge_crease_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_edges = {
	{(PropertyRNA*)&rna_Mesh_show_faces, (PropertyRNA*)&rna_Mesh_show_edge_crease,
	-1, "show_edges", 3, "Draw Edges",
	"Displays selected edges using highlights in the 3D view and UV editor",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edges_get, Mesh_show_edges_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_faces = {
	{(PropertyRNA*)&rna_Mesh_show_normal_face, (PropertyRNA*)&rna_Mesh_show_edges,
	-1, "show_faces", 3, "Draw Faces",
	"Displays all faces as shades in the 3D view and UV editor",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_faces_get, Mesh_show_faces_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_normal_face = {
	{(PropertyRNA*)&rna_Mesh_show_edge_seams, (PropertyRNA*)&rna_Mesh_show_faces,
	-1, "show_normal_face", 3, "Draw Normals",
	"Displays face normals as lines",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_normal_face_get, Mesh_show_normal_face_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_edge_seams = {
	{(PropertyRNA*)&rna_Mesh_show_edge_sharp, (PropertyRNA*)&rna_Mesh_show_normal_face,
	-1, "show_edge_seams", 3, "Draw Seams",
	"Displays UV unwrapping seams",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_seams_get, Mesh_show_edge_seams_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_edge_sharp = {
	{(PropertyRNA*)&rna_Mesh_show_normal_vertex, (PropertyRNA*)&rna_Mesh_show_edge_seams,
	-1, "show_edge_sharp", 3, "Draw Sharp",
	"Displays sharp edges, used with the EdgeSplit modifier",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_edge_sharp_get, Mesh_show_edge_sharp_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_normal_vertex = {
	{(PropertyRNA*)&rna_Mesh_show_extra_edge_length, (PropertyRNA*)&rna_Mesh_show_edge_sharp,
	-1, "show_normal_vertex", 3, "Draw Vertex Normals",
	"Displays vertex normals as lines",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_normal_vertex_get, Mesh_show_normal_vertex_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_show_extra_edge_length = {
	{(PropertyRNA*)&rna_Mesh_edges, (PropertyRNA*)&rna_Mesh_show_normal_vertex,
	-1, "show_extra_edge_length", 3, "Edge Length",
	"Displays selected edge lengths, Using global values when set in the transform panel",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_edge_length_get, Mesh_show_extra_edge_length_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Mesh_edges = {
	{(PropertyRNA*)&rna_Mesh_show_extra_face_area, (PropertyRNA*)&rna_Mesh_show_extra_edge_length,
	-1, "edges", 16384, "Edges",
	"Edges of the mesh",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshEdges},
	Mesh_edges_begin, Mesh_edges_next, Mesh_edges_end, Mesh_edges_get, Mesh_edges_length, Mesh_edges_lookup_int, NULL, &RNA_MeshEdge
};

BooleanPropertyRNA rna_Mesh_show_extra_face_area = {
	{(PropertyRNA*)&rna_Mesh_faces, (PropertyRNA*)&rna_Mesh_edges,
	-1, "show_extra_face_area", 3, "Face Area",
	"Displays the area of selected faces, Using global values when set in the transform panel",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_face_area_get, Mesh_show_extra_face_area_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Mesh_faces = {
	{(PropertyRNA*)&rna_Mesh_show_extra_face_angle, (PropertyRNA*)&rna_Mesh_show_extra_face_area,
	-1, "faces", 16384, "Faces",
	"Faces of the mesh",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshFaces},
	Mesh_faces_begin, Mesh_faces_next, Mesh_faces_end, Mesh_faces_get, Mesh_faces_length, Mesh_faces_lookup_int, NULL, &RNA_MeshFace
};

BooleanPropertyRNA rna_Mesh_show_extra_face_angle = {
	{(PropertyRNA*)&rna_Mesh_layers_float, (PropertyRNA*)&rna_Mesh_faces,
	-1, "show_extra_face_angle", 3, "Faces Angles",
	"Displays the angles in the selected edges in degrees, Using global values when set in the transform panel",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_show_extra_face_angle_get, Mesh_show_extra_face_angle_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Mesh_layers_float = {
	{(PropertyRNA*)&rna_Mesh_layers_int, (PropertyRNA*)&rna_Mesh_show_extra_face_angle,
	-1, "layers_float", 16384, "Float Property Layers",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_layers_float_begin, Mesh_layers_float_next, Mesh_layers_float_end, Mesh_layers_float_get, Mesh_layers_float_length, Mesh_layers_float_lookup_int, NULL, &RNA_MeshFloatPropertyLayer
};

CollectionPropertyRNA rna_Mesh_layers_int = {
	{(PropertyRNA*)&rna_Mesh_uv_texture_stencil, (PropertyRNA*)&rna_Mesh_layers_float,
	-1, "layers_int", 16384, "Int Property Layers",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_layers_int_begin, Mesh_layers_int_next, Mesh_layers_int_end, Mesh_layers_int_get, Mesh_layers_int_length, Mesh_layers_int_lookup_int, NULL, &RNA_MeshIntPropertyLayer
};

PointerPropertyRNA rna_Mesh_uv_texture_stencil = {
	{(PropertyRNA*)&rna_Mesh_uv_texture_stencil_index, (PropertyRNA*)&rna_Mesh_layers_int,
	-1, "uv_texture_stencil", 1, "Mask UV Texture",
	"UV texture to mask the painted area",
	0,
	PROP_POINTER, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_stencil_get, Mesh_uv_texture_stencil_set, NULL, NULL,&RNA_MeshTextureFaceLayer
};

IntPropertyRNA rna_Mesh_uv_texture_stencil_index = {
	{(PropertyRNA*)&rna_Mesh_materials, (PropertyRNA*)&rna_Mesh_uv_texture_stencil,
	-1, "uv_texture_stencil_index", 3, "Mask UV Texture Index",
	"Mask UV texture index",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_uv_texture_stencil_index_get, Mesh_uv_texture_stencil_index_set, NULL, NULL, rna_Mesh_active_uv_texture_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_Mesh_materials = {
	{(PropertyRNA*)&rna_Mesh_use_paint_mask, (PropertyRNA*)&rna_Mesh_uv_texture_stencil_index,
	-1, "materials", 0, "Materials",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_IDMaterials},
	Mesh_materials_begin, Mesh_materials_next, Mesh_materials_end, Mesh_materials_get, Mesh_materials_length, Mesh_materials_lookup_int, NULL, &RNA_Material
};

BooleanPropertyRNA rna_Mesh_use_paint_mask = {
	{(PropertyRNA*)&rna_Mesh_total_edge_sel, (PropertyRNA*)&rna_Mesh_materials,
	-1, "use_paint_mask", 3, "Paint Mask",
	"Face selection masking for painting",
	132,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_draw, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_paint_mask_get, Mesh_use_paint_mask_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Mesh_total_edge_sel = {
	{(PropertyRNA*)&rna_Mesh_total_face_sel, (PropertyRNA*)&rna_Mesh_use_paint_mask,
	-1, "total_edge_sel", 2, "Selected Edge Total",
	"Selected edge count in editmode",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_total_edge_sel_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mesh_total_face_sel = {
	{(PropertyRNA*)&rna_Mesh_total_vert_sel, (PropertyRNA*)&rna_Mesh_total_edge_sel,
	-1, "total_face_sel", 2, "Selected Face Total",
	"Selected face count in editmode",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_total_face_sel_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Mesh_total_vert_sel = {
	{(PropertyRNA*)&rna_Mesh_shape_keys, (PropertyRNA*)&rna_Mesh_total_face_sel,
	-1, "total_vert_sel", 2, "Selected Vert Total",
	"Selected vertex count in editmode",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_total_vert_sel_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_Mesh_shape_keys = {
	{(PropertyRNA*)&rna_Mesh_sticky, (PropertyRNA*)&rna_Mesh_total_vert_sel,
	-1, "shape_keys", 64, "Shape Keys",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_shape_keys_get, NULL, NULL, NULL,&RNA_Key
};

CollectionPropertyRNA rna_Mesh_sticky = {
	{(PropertyRNA*)&rna_Mesh_layers_string, (PropertyRNA*)&rna_Mesh_shape_keys,
	-1, "sticky", 16384, "Sticky",
	"Sticky texture coordinates",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_sticky_begin, Mesh_sticky_next, Mesh_sticky_end, Mesh_sticky_get, Mesh_sticky_length, Mesh_sticky_lookup_int, NULL, &RNA_MeshSticky
};

CollectionPropertyRNA rna_Mesh_layers_string = {
	{(PropertyRNA*)&rna_Mesh_texture_mesh, (PropertyRNA*)&rna_Mesh_sticky,
	-1, "layers_string", 16384, "String Property Layers",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_layers_string_begin, Mesh_layers_string_next, Mesh_layers_string_end, Mesh_layers_string_get, Mesh_layers_string_length, Mesh_layers_string_lookup_int, NULL, &RNA_MeshStringPropertyLayer
};

PointerPropertyRNA rna_Mesh_texture_mesh = {
	{(PropertyRNA*)&rna_Mesh_texspace_location, (PropertyRNA*)&rna_Mesh_layers_string,
	-1, "texture_mesh", 1048641, "Texture Mesh",
	"Use another mesh for texture indices (vertex indices must be aligned)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_texture_mesh_get, Mesh_texture_mesh_set, NULL, NULL,&RNA_Mesh
};

static float rna_Mesh_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_texspace_location = {
	{(PropertyRNA*)&rna_Mesh_texco_mesh, (PropertyRNA*)&rna_Mesh_texture_mesh,
	-1, "texspace_location", 3, "Texture Space Location",
	"Texture space location",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_draw, 0, rna_Mesh_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, Mesh_texspace_location_get, Mesh_texspace_location_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_location_default
};

PointerPropertyRNA rna_Mesh_texco_mesh = {
	{(PropertyRNA*)&rna_Mesh_texspace_size, (PropertyRNA*)&rna_Mesh_texspace_location,
	-1, "texco_mesh", 65, "Texture Space Mesh",
	"Derive texture coordinates from another mesh",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_texco_mesh_get, Mesh_texco_mesh_set, NULL, NULL,&RNA_Mesh
};

static float rna_Mesh_texspace_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Mesh_texspace_size = {
	{(PropertyRNA*)&rna_Mesh_use_mirror_topology, (PropertyRNA*)&rna_Mesh_texco_mesh,
	-1, "texspace_size", 3, "Texture Space Size",
	"Texture space size",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_draw, 0, rna_Mesh_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, Mesh_texspace_size_get, Mesh_texspace_size_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Mesh_texspace_size_default
};

BooleanPropertyRNA rna_Mesh_use_mirror_topology = {
	{(PropertyRNA*)&rna_Mesh_uv_textures, (PropertyRNA*)&rna_Mesh_texspace_size,
	-1, "use_mirror_topology", 3, "Topology Mirror",
	"Use topology based mirroring",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_mirror_topology_get, Mesh_use_mirror_topology_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Mesh_uv_textures = {
	{(PropertyRNA*)&rna_Mesh_vertex_colors, (PropertyRNA*)&rna_Mesh_use_mirror_topology,
	-1, "uv_textures", 16384, "UV Textures",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_UVTextures},
	Mesh_uv_textures_begin, Mesh_uv_textures_next, Mesh_uv_textures_end, Mesh_uv_textures_get, Mesh_uv_textures_length, Mesh_uv_textures_lookup_int, NULL, &RNA_MeshTextureFaceLayer
};

CollectionPropertyRNA rna_Mesh_vertex_colors = {
	{(PropertyRNA*)&rna_Mesh_vertices, (PropertyRNA*)&rna_Mesh_uv_textures,
	-1, "vertex_colors", 16384, "Vertex Colors",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_VertexColors},
	Mesh_vertex_colors_begin, Mesh_vertex_colors_next, Mesh_vertex_colors_end, Mesh_vertex_colors_get, Mesh_vertex_colors_length, Mesh_vertex_colors_lookup_int, NULL, &RNA_MeshColorLayer
};

CollectionPropertyRNA rna_Mesh_vertices = {
	{(PropertyRNA*)&rna_Mesh_use_mirror_x, (PropertyRNA*)&rna_Mesh_vertex_colors,
	-1, "vertices", 16384, "Vertices",
	"Vertices of the mesh",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_MeshVertices},
	Mesh_vertices_begin, Mesh_vertices_next, Mesh_vertices_end, Mesh_vertices_get, Mesh_vertices_length, Mesh_vertices_lookup_int, NULL, &RNA_MeshVertex
};

BooleanPropertyRNA rna_Mesh_use_mirror_x = {
	{NULL, (PropertyRNA*)&rna_Mesh_vertices,
	-1, "use_mirror_x", 3, "X Mirror",
	"X Axis mirror editing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Mesh_use_mirror_x_get, Mesh_use_mirror_x_set, NULL, NULL, 0, NULL
};

static float rna_Mesh_transform_matrix_default[16] = {
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

FloatPropertyRNA rna_Mesh_transform_matrix = {
	{NULL, NULL,
	-1, "matrix", 7, "",
	"Matrix.",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, 0.0f, 0.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Mesh_transform_matrix_default
};

FunctionRNA rna_Mesh_transform_func = {
	{(FunctionRNA*)&rna_Mesh_calc_normals_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_Mesh_transform_matrix, (PropertyRNA*)&rna_Mesh_transform_matrix}},
	"transform", 0, "Transform mesh vertices by a matrix.",
	Mesh_transform_call,
	NULL
};

FunctionRNA rna_Mesh_calc_normals_func = {
	{(FunctionRNA*)&rna_Mesh_update_func, (FunctionRNA*)&rna_Mesh_transform_func,
	NULL,
	{NULL, NULL}},
	"calc_normals", 0, "Calculate vertex normals.",
	Mesh_calc_normals_call,
	NULL
};

BooleanPropertyRNA rna_Mesh_update_calc_edges = {
	{NULL, NULL,
	-1, "calc_edges", 3, "Calculate Edges",
	"Force recalculation of edges.",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_update_func = {
	{(FunctionRNA*)&rna_Mesh_validate_func, (FunctionRNA*)&rna_Mesh_calc_normals_func,
	NULL,
	{(PropertyRNA*)&rna_Mesh_update_calc_edges, (PropertyRNA*)&rna_Mesh_update_calc_edges}},
	"update", 2, "update",
	Mesh_update_call,
	NULL
};

BooleanPropertyRNA rna_Mesh_validate_verbose = {
	{(PropertyRNA*)&rna_Mesh_validate_result, NULL,
	-1, "verbose", 3, "Verbose",
	"Output information about the errors found",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Mesh_validate_result = {
	{NULL, (PropertyRNA*)&rna_Mesh_validate_verbose,
	-1, "result", 11, "Result",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Mesh_validate_func = {
	{NULL, (FunctionRNA*)&rna_Mesh_update_func,
	NULL,
	{(PropertyRNA*)&rna_Mesh_validate_verbose, (PropertyRNA*)&rna_Mesh_validate_result}},
	"validate", 0, "validate geometry, return True when the mesh has had invalid geometry corrected/removed.",
	Mesh_validate_call,
	(PropertyRNA*)&rna_Mesh_validate_result
};

StructRNA RNA_Mesh = {
	{(ContainerRNA *)&RNA_MeshColor, (ContainerRNA *)&RNA_Menu,
	NULL,
	{(PropertyRNA*)&rna_Mesh_show_all_edges, (PropertyRNA*)&rna_Mesh_use_mirror_x}},
	"Mesh"	, NULL,NULL
, 3, "Mesh", "Mesh datablock defining geometric surfaces",
	160,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA*)&rna_Mesh_transform_func, (FunctionRNA*)&rna_Mesh_validate_func}
};

/* Mesh Vertex Color */
PointerPropertyRNA rna_MeshColor_rna_type = {
	{(PropertyRNA*)&rna_MeshColor_color1, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshColor_color1_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color1 = {
	{(PropertyRNA*)&rna_MeshColor_color2, (PropertyRNA*)&rna_MeshColor_rna_type,
	-1, "color1", 3, "Color 1",
	"",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color1_get, MeshColor_color1_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color1_default
};

static float rna_MeshColor_color2_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color2 = {
	{(PropertyRNA*)&rna_MeshColor_color3, (PropertyRNA*)&rna_MeshColor_color1,
	-1, "color2", 3, "Color 2",
	"",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color2_get, MeshColor_color2_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color2_default
};

static float rna_MeshColor_color3_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color3 = {
	{(PropertyRNA*)&rna_MeshColor_color4, (PropertyRNA*)&rna_MeshColor_color2,
	-1, "color3", 3, "Color 3",
	"",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color3_get, MeshColor_color3_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color3_default
};

static float rna_MeshColor_color4_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshColor_color4 = {
	{(PropertyRNA*)&rna_MeshColor_rna_properties, (PropertyRNA*)&rna_MeshColor_color3,
	-1, "color4", 3, "Color 4",
	"",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshColor_color4_get, MeshColor_color4_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshColor_color4_default
};

CollectionPropertyRNA rna_MeshColor_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshColor_color4,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColor_rna_properties_begin, MeshColor_rna_properties_next, MeshColor_rna_properties_end, MeshColor_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MeshColor = {
	{(ContainerRNA *)&RNA_MeshColorLayer, (ContainerRNA *)&RNA_Mesh,
	NULL,
	{(PropertyRNA*)&rna_MeshColor_rna_type, (PropertyRNA*)&rna_MeshColor_rna_properties}},
	"MeshColor"	, NULL,NULL
, 0, "Mesh Vertex Color", "Vertex colors for a face in a Mesh",
	17,
	NULL, (PropertyRNA*)&rna_MeshColor_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshColor_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Color Layer */
PointerPropertyRNA rna_MeshColorLayer_rna_type = {
	{(PropertyRNA*)&rna_MeshColorLayer_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshColorLayer_name = {
	{(PropertyRNA*)&rna_MeshColorLayer_active, (PropertyRNA*)&rna_MeshColorLayer_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_name_get, MeshColorLayer_name_length, MeshColorLayer_name_set, 32, ""
};

BooleanPropertyRNA rna_MeshColorLayer_active = {
	{(PropertyRNA*)&rna_MeshColorLayer_active_render, (PropertyRNA*)&rna_MeshColorLayer_name,
	-1, "active", 3, "Active",
	"Sets the layer as active for display and editing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_active_get, MeshColorLayer_active_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshColorLayer_active_render = {
	{(PropertyRNA*)&rna_MeshColorLayer_data, (PropertyRNA*)&rna_MeshColorLayer_active,
	-1, "active_render", 3, "Active Render",
	"Sets the layer as active for rendering",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_active_render_get, MeshColorLayer_active_render_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshColorLayer_data = {
	{(PropertyRNA*)&rna_MeshColorLayer_rna_properties, (PropertyRNA*)&rna_MeshColorLayer_active_render,
	-1, "data", 16384, "Data",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_data_begin, MeshColorLayer_data_next, MeshColorLayer_data_end, MeshColorLayer_data_get, rna_MeshColorLayer_data_length, MeshColorLayer_data_lookup_int, NULL, &RNA_MeshColor
};

CollectionPropertyRNA rna_MeshColorLayer_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshColorLayer_data,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshColorLayer_rna_properties_begin, MeshColorLayer_rna_properties_next, MeshColorLayer_rna_properties_end, MeshColorLayer_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MeshColorLayer = {
	{(ContainerRNA *)&RNA_MeshDeformModifier, (ContainerRNA *)&RNA_MeshColor,
	NULL,
	{(PropertyRNA*)&rna_MeshColorLayer_rna_type, (PropertyRNA*)&rna_MeshColorLayer_rna_properties}},
	"MeshColorLayer"	, NULL,NULL
, 0, "Mesh Vertex Color Layer", "Layer of vertex colors in a Mesh datablock",
	202,
	(PropertyRNA*)&rna_MeshColorLayer_name, (PropertyRNA*)&rna_MeshColorLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshColorLayer_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Edge */
PointerPropertyRNA rna_MeshEdge_rna_type = {
	{(PropertyRNA*)&rna_MeshEdge_bevel_weight, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MeshEdge_bevel_weight = {
	{(PropertyRNA*)&rna_MeshEdge_crease, (PropertyRNA*)&rna_MeshEdge_rna_type,
	-1, "bevel_weight", 3, "Bevel Weight",
	"Weight used by the Bevel modifier",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_bevel_weight_get, MeshEdge_bevel_weight_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_MeshEdge_crease = {
	{(PropertyRNA*)&rna_MeshEdge_is_fgon, (PropertyRNA*)&rna_MeshEdge_bevel_weight,
	-1, "crease", 3, "Crease",
	"Weight used by the Subsurf modifier for creasing",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_crease_get, MeshEdge_crease_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_MeshEdge_is_fgon = {
	{(PropertyRNA*)&rna_MeshEdge_hide, (PropertyRNA*)&rna_MeshEdge_crease,
	-1, "is_fgon", 3, "Fgon",
	"Fgon edge",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_is_fgon_get, MeshEdge_is_fgon_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshEdge_hide = {
	{(PropertyRNA*)&rna_MeshEdge_index, (PropertyRNA*)&rna_MeshEdge_is_fgon,
	-1, "hide", 3, "Hide",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_hide_get, MeshEdge_hide_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MeshEdge_index = {
	{(PropertyRNA*)&rna_MeshEdge_is_loose, (PropertyRNA*)&rna_MeshEdge_hide,
	-1, "index", 2, "Index",
	"Index number of the vertex",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_index_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_MeshEdge_is_loose = {
	{(PropertyRNA*)&rna_MeshEdge_rna_properties, (PropertyRNA*)&rna_MeshEdge_index,
	-1, "is_loose", 3, "Loose",
	"Loose edge",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_is_loose_get, MeshEdge_is_loose_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshEdge_rna_properties = {
	{(PropertyRNA*)&rna_MeshEdge_use_seam, (PropertyRNA*)&rna_MeshEdge_is_loose,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_rna_properties_begin, MeshEdge_rna_properties_next, MeshEdge_rna_properties_end, MeshEdge_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_MeshEdge_use_seam = {
	{(PropertyRNA*)&rna_MeshEdge_select, (PropertyRNA*)&rna_MeshEdge_rna_properties,
	-1, "use_seam", 3, "Seam",
	"Seam edge for UV unwrapping",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_use_seam_get, MeshEdge_use_seam_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshEdge_select = {
	{(PropertyRNA*)&rna_MeshEdge_use_edge_sharp, (PropertyRNA*)&rna_MeshEdge_use_seam,
	-1, "select", 3, "Select",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_select_get, MeshEdge_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshEdge_use_edge_sharp = {
	{(PropertyRNA*)&rna_MeshEdge_vertices, (PropertyRNA*)&rna_MeshEdge_select,
	-1, "use_edge_sharp", 3, "Sharp",
	"Sharp edge for the EdgeSplit modifier",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdge_use_edge_sharp_get, MeshEdge_use_edge_sharp_set, NULL, NULL, 0, NULL
};

static int rna_MeshEdge_vertices_default[2] = {
	0,
	0
};

IntPropertyRNA rna_MeshEdge_vertices = {
	{NULL, (PropertyRNA*)&rna_MeshEdge_use_edge_sharp,
	-1, "vertices", 8195, "Vertices",
	"Vertex indices",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	offsetof(MEdge, v1), 0, NULL},
	NULL, NULL, MeshEdge_vertices_get, MeshEdge_vertices_set, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_MeshEdge_vertices_default
};

StructRNA RNA_MeshEdge = {
	{(ContainerRNA *)&RNA_MeshEdges, (ContainerRNA *)&RNA_MeshDeformModifier,
	NULL,
	{(PropertyRNA*)&rna_MeshEdge_rna_type, (PropertyRNA*)&rna_MeshEdge_vertices}},
	"MeshEdge"	, NULL,NULL
, 0, "Mesh Edge", "Edge in a Mesh datablock",
	547,
	NULL, (PropertyRNA*)&rna_MeshEdge_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshEdge_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Edges */
PointerPropertyRNA rna_MeshEdges_rna_type = {
	{(PropertyRNA*)&rna_MeshEdges_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdges_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshEdges_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshEdges_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshEdges_rna_properties_begin, MeshEdges_rna_properties_next, MeshEdges_rna_properties_end, MeshEdges_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_MeshEdges_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of vertices to add.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshEdges_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_MeshEdges_add_count, (PropertyRNA*)&rna_MeshEdges_add_count}},
	"add", 4, "add",
	MeshEdges_add_call,
	NULL
};

StructRNA RNA_MeshEdges = {
	{(ContainerRNA *)&RNA_MeshFace, (ContainerRNA *)&RNA_MeshEdge,
	NULL,
	{(PropertyRNA*)&rna_MeshEdges_rna_type, (PropertyRNA*)&rna_MeshEdges_rna_properties}},
	"MeshEdges"	, NULL,NULL
, 0, "Mesh Edges", "Collection of mesh edges",
	17,
	NULL, (PropertyRNA*)&rna_MeshEdges_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_MeshEdges_add_func, (FunctionRNA*)&rna_MeshEdges_add_func}
};

/* Mesh Face */
PointerPropertyRNA rna_MeshFace_rna_type = {
	{(PropertyRNA*)&rna_MeshFace_hide, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFace_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_MeshFace_hide = {
	{(PropertyRNA*)&rna_MeshFace_index, (PropertyRNA*)&rna_MeshFace_rna_type,
	-1, "hide", 3, "Hide",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshFace_hide_get, MeshFace_hide_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MeshFace_index = {
	{(PropertyRNA*)&rna_MeshFace_material_index, (PropertyRNA*)&rna_MeshFace_hide,
	-1, "index", 2, "Index",
	"Index number of the vertex",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFace_index_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MeshFace_material_index = {
	{(PropertyRNA*)&rna_MeshFace_rna_properties, (PropertyRNA*)&rna_MeshFace_index,
	-1, "material_index", 8195, "Material Index",
	"",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MFace, mat_nr), 1, NULL},
	MeshFace_material_index_get, MeshFace_material_index_set, NULL, NULL, rna_MeshFace_material_index_range,
	0, 32767, 0, 32767, 1, 0, NULL
};

CollectionPropertyRNA rna_MeshFace_rna_properties = {
	{(PropertyRNA*)&rna_MeshFace_select, (PropertyRNA*)&rna_MeshFace_material_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFace_rna_properties_begin, MeshFace_rna_properties_next, MeshFace_rna_properties_end, MeshFace_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_MeshFace_select = {
	{(PropertyRNA*)&rna_MeshFace_use_smooth, (PropertyRNA*)&rna_MeshFace_rna_properties,
	-1, "select", 3, "Select",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshFace_select_get, MeshFace_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshFace_use_smooth = {
	{(PropertyRNA*)&rna_MeshFace_vertices, (PropertyRNA*)&rna_MeshFace_select,
	-1, "use_smooth", 3, "Smooth",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshFace_use_smooth_get, MeshFace_use_smooth_set, NULL, NULL, 0, NULL
};

static int rna_MeshFace_vertices_default[4] = {
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_MeshFace_vertices = {
	{(PropertyRNA*)&rna_MeshFace_vertices_raw, (PropertyRNA*)&rna_MeshFace_use_smooth,
	-1, "vertices", 131075, "Vertices",
	"Vertex indices",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, rna_MeshFace_verts_get_length, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshFace_vertices_get, MeshFace_vertices_set, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_MeshFace_vertices_default
};

static int rna_MeshFace_vertices_raw_default[4] = {
	0,
	0,
	0,
	0
};

IntPropertyRNA rna_MeshFace_vertices_raw = {
	{(PropertyRNA*)&rna_MeshFace_area, (PropertyRNA*)&rna_MeshFace_vertices,
	-1, "vertices_raw", 8195, "Vertices",
	"Fixed size vertex indices array",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	offsetof(MFace, v1), 0, NULL},
	NULL, NULL, MeshFace_vertices_raw_get, MeshFace_vertices_raw_set, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_MeshFace_vertices_raw_default
};

FloatPropertyRNA rna_MeshFace_area = {
	{(PropertyRNA*)&rna_MeshFace_normal, (PropertyRNA*)&rna_MeshFace_vertices_raw,
	-1, "area", 2, "face area",
	"read only area of the face",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFace_area_get, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_MeshFace_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshFace_normal = {
	{NULL, (PropertyRNA*)&rna_MeshFace_area,
	-1, "normal", 2, "face normal",
	"local space unit length normal vector for this face",
	0,
	PROP_FLOAT, PROP_DIRECTION|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshFace_normal_get, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshFace_normal_default
};

StructRNA RNA_MeshFace = {
	{(ContainerRNA *)&RNA_MeshFaces, (ContainerRNA *)&RNA_MeshEdges,
	NULL,
	{(PropertyRNA*)&rna_MeshFace_rna_type, (PropertyRNA*)&rna_MeshFace_normal}},
	"MeshFace"	, NULL,NULL
, 0, "Mesh Face", "Face in a Mesh datablock",
	548,
	NULL, (PropertyRNA*)&rna_MeshFace_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshFace_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Faces */
PointerPropertyRNA rna_MeshFaces_rna_type = {
	{(PropertyRNA*)&rna_MeshFaces_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFaces_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_MeshFaces_active = {
	{(PropertyRNA*)&rna_MeshFaces_active_tface, (PropertyRNA*)&rna_MeshFaces_rna_type,
	-1, "active", 8195, "Active Face",
	"The active face for this mesh",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Mesh, act_face), 0, NULL},
	MeshFaces_active_get, MeshFaces_active_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_MeshFaces_active_tface = {
	{(PropertyRNA*)&rna_MeshFaces_rna_properties, (PropertyRNA*)&rna_MeshFaces_active,
	-1, "active_tface", 0, "Active Texture Face",
	"Active Texture Face",
	0,
	PROP_POINTER, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshFaces_active_tface_get, NULL, NULL, NULL,&RNA_MeshTextureFace
};

CollectionPropertyRNA rna_MeshFaces_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshFaces_active_tface,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFaces_rna_properties_begin, MeshFaces_rna_properties_next, MeshFaces_rna_properties_end, MeshFaces_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_MeshFaces_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of vertices to add.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshFaces_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_MeshFaces_add_count, (PropertyRNA*)&rna_MeshFaces_add_count}},
	"add", 4, "add",
	MeshFaces_add_call,
	NULL
};

StructRNA RNA_MeshFaces = {
	{(ContainerRNA *)&RNA_MeshFloatProperty, (ContainerRNA *)&RNA_MeshFace,
	NULL,
	{(PropertyRNA*)&rna_MeshFaces_rna_type, (PropertyRNA*)&rna_MeshFaces_rna_properties}},
	"MeshFaces"	, NULL,NULL
, 0, "Mesh Faces", "Collection of mesh faces",
	17,
	NULL, (PropertyRNA*)&rna_MeshFaces_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_MeshFaces_add_func, (FunctionRNA*)&rna_MeshFaces_add_func}
};

/* Mesh Float Property */
PointerPropertyRNA rna_MeshFloatProperty_rna_type = {
	{(PropertyRNA*)&rna_MeshFloatProperty_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshFloatProperty_rna_properties = {
	{(PropertyRNA*)&rna_MeshFloatProperty_value, (PropertyRNA*)&rna_MeshFloatProperty_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatProperty_rna_properties_begin, MeshFloatProperty_rna_properties_next, MeshFloatProperty_rna_properties_end, MeshFloatProperty_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_MeshFloatProperty_value = {
	{NULL, (PropertyRNA*)&rna_MeshFloatProperty_rna_properties,
	-1, "value", 8195, "Value",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MFloatProperty, f), 4, NULL},
	MeshFloatProperty_value_get, MeshFloatProperty_value_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_MeshFloatProperty = {
	{(ContainerRNA *)&RNA_MeshFloatPropertyLayer, (ContainerRNA *)&RNA_MeshFaces,
	NULL,
	{(PropertyRNA*)&rna_MeshFloatProperty_rna_type, (PropertyRNA*)&rna_MeshFloatProperty_value}},
	"MeshFloatProperty"	, NULL,NULL
, 0, "Mesh Float Property", "User defined floating point number value in a float properties layer",
	17,
	NULL, (PropertyRNA*)&rna_MeshFloatProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshFloatProperty_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Float Property Layer */
PointerPropertyRNA rna_MeshFloatPropertyLayer_rna_type = {
	{(PropertyRNA*)&rna_MeshFloatPropertyLayer_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshFloatPropertyLayer_name = {
	{(PropertyRNA*)&rna_MeshFloatPropertyLayer_data, (PropertyRNA*)&rna_MeshFloatPropertyLayer_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_name_get, MeshFloatPropertyLayer_name_length, MeshFloatPropertyLayer_name_set, 32, ""
};

CollectionPropertyRNA rna_MeshFloatPropertyLayer_data = {
	{(PropertyRNA*)&rna_MeshFloatPropertyLayer_rna_properties, (PropertyRNA*)&rna_MeshFloatPropertyLayer_name,
	-1, "data", 16384, "Data",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_data_begin, MeshFloatPropertyLayer_data_next, MeshFloatPropertyLayer_data_end, MeshFloatPropertyLayer_data_get, rna_MeshFloatPropertyLayer_data_length, MeshFloatPropertyLayer_data_lookup_int, NULL, &RNA_MeshFloatProperty
};

CollectionPropertyRNA rna_MeshFloatPropertyLayer_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshFloatPropertyLayer_data,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshFloatPropertyLayer_rna_properties_begin, MeshFloatPropertyLayer_rna_properties_next, MeshFloatPropertyLayer_rna_properties_end, MeshFloatPropertyLayer_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MeshFloatPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshIntProperty, (ContainerRNA *)&RNA_MeshFloatProperty,
	NULL,
	{(PropertyRNA*)&rna_MeshFloatPropertyLayer_rna_type, (PropertyRNA*)&rna_MeshFloatPropertyLayer_rna_properties}},
	"MeshFloatPropertyLayer"	, NULL,NULL
, 0, "Mesh Float Property Layer", "User defined layer of floating pointer number values",
	17,
	(PropertyRNA*)&rna_MeshFloatPropertyLayer_name, (PropertyRNA*)&rna_MeshFloatPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshFloatPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Int Property */
PointerPropertyRNA rna_MeshIntProperty_rna_type = {
	{(PropertyRNA*)&rna_MeshIntProperty_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshIntProperty_rna_properties = {
	{(PropertyRNA*)&rna_MeshIntProperty_value, (PropertyRNA*)&rna_MeshIntProperty_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntProperty_rna_properties_begin, MeshIntProperty_rna_properties_next, MeshIntProperty_rna_properties_end, MeshIntProperty_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_MeshIntProperty_value = {
	{NULL, (PropertyRNA*)&rna_MeshIntProperty_rna_properties,
	-1, "value", 8195, "Value",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MIntProperty, i), 0, NULL},
	MeshIntProperty_value_get, MeshIntProperty_value_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_MeshIntProperty = {
	{(ContainerRNA *)&RNA_MeshIntPropertyLayer, (ContainerRNA *)&RNA_MeshFloatPropertyLayer,
	NULL,
	{(PropertyRNA*)&rna_MeshIntProperty_rna_type, (PropertyRNA*)&rna_MeshIntProperty_value}},
	"MeshIntProperty"	, NULL,NULL
, 0, "Mesh Int Property", "User defined integer number value in an integer properties layer",
	17,
	NULL, (PropertyRNA*)&rna_MeshIntProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshIntProperty_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Int Property Layer */
PointerPropertyRNA rna_MeshIntPropertyLayer_rna_type = {
	{(PropertyRNA*)&rna_MeshIntPropertyLayer_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshIntPropertyLayer_name = {
	{(PropertyRNA*)&rna_MeshIntPropertyLayer_data, (PropertyRNA*)&rna_MeshIntPropertyLayer_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_name_get, MeshIntPropertyLayer_name_length, MeshIntPropertyLayer_name_set, 32, ""
};

CollectionPropertyRNA rna_MeshIntPropertyLayer_data = {
	{(PropertyRNA*)&rna_MeshIntPropertyLayer_rna_properties, (PropertyRNA*)&rna_MeshIntPropertyLayer_name,
	-1, "data", 16384, "Data",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_data_begin, MeshIntPropertyLayer_data_next, MeshIntPropertyLayer_data_end, MeshIntPropertyLayer_data_get, rna_MeshIntPropertyLayer_data_length, MeshIntPropertyLayer_data_lookup_int, NULL, &RNA_MeshIntProperty
};

CollectionPropertyRNA rna_MeshIntPropertyLayer_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshIntPropertyLayer_data,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshIntPropertyLayer_rna_properties_begin, MeshIntPropertyLayer_rna_properties_next, MeshIntPropertyLayer_rna_properties_end, MeshIntPropertyLayer_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MeshIntPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshSticky, (ContainerRNA *)&RNA_MeshIntProperty,
	NULL,
	{(PropertyRNA*)&rna_MeshIntPropertyLayer_rna_type, (PropertyRNA*)&rna_MeshIntPropertyLayer_rna_properties}},
	"MeshIntPropertyLayer"	, NULL,NULL
, 0, "Mesh Int Property Layer", "User defined layer of integer number values",
	17,
	(PropertyRNA*)&rna_MeshIntPropertyLayer_name, (PropertyRNA*)&rna_MeshIntPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshIntPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex Sticky Texture Coordinate */
PointerPropertyRNA rna_MeshSticky_rna_type = {
	{(PropertyRNA*)&rna_MeshSticky_co, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshSticky_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MeshSticky_co_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshSticky_co = {
	{(PropertyRNA*)&rna_MeshSticky_rna_properties, (PropertyRNA*)&rna_MeshSticky_rna_type,
	-1, "co", 8195, "Location",
	"Sticky texture coordinate location",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MSticky, co), 4, NULL},
	NULL, NULL, MeshSticky_co_get, MeshSticky_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshSticky_co_default
};

CollectionPropertyRNA rna_MeshSticky_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshSticky_co,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshSticky_rna_properties_begin, MeshSticky_rna_properties_next, MeshSticky_rna_properties_end, MeshSticky_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MeshSticky = {
	{(ContainerRNA *)&RNA_MeshStringProperty, (ContainerRNA *)&RNA_MeshIntPropertyLayer,
	NULL,
	{(PropertyRNA*)&rna_MeshSticky_rna_type, (PropertyRNA*)&rna_MeshSticky_rna_properties}},
	"MeshSticky"	, NULL,NULL
, 0, "Mesh Vertex Sticky Texture Coordinate", "Stricky texture coordinate",
	17,
	NULL, (PropertyRNA*)&rna_MeshSticky_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshSticky_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh String Property */
PointerPropertyRNA rna_MeshStringProperty_rna_type = {
	{(PropertyRNA*)&rna_MeshStringProperty_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringProperty_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshStringProperty_rna_properties = {
	{(PropertyRNA*)&rna_MeshStringProperty_value, (PropertyRNA*)&rna_MeshStringProperty_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringProperty_rna_properties_begin, MeshStringProperty_rna_properties_next, MeshStringProperty_rna_properties_end, MeshStringProperty_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_MeshStringProperty_value = {
	{NULL, (PropertyRNA*)&rna_MeshStringProperty_rna_properties,
	-1, "value", 1, "Value",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringProperty_value_get, MeshStringProperty_value_length, MeshStringProperty_value_set, 256, ""
};

StructRNA RNA_MeshStringProperty = {
	{(ContainerRNA *)&RNA_MeshStringPropertyLayer, (ContainerRNA *)&RNA_MeshSticky,
	NULL,
	{(PropertyRNA*)&rna_MeshStringProperty_rna_type, (PropertyRNA*)&rna_MeshStringProperty_value}},
	"MeshStringProperty"	, NULL,NULL
, 0, "Mesh String Property", "User defined string text value in a string properties layer",
	17,
	NULL, (PropertyRNA*)&rna_MeshStringProperty_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshStringProperty_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh String Property Layer */
PointerPropertyRNA rna_MeshStringPropertyLayer_rna_type = {
	{(PropertyRNA*)&rna_MeshStringPropertyLayer_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshStringPropertyLayer_name = {
	{(PropertyRNA*)&rna_MeshStringPropertyLayer_data, (PropertyRNA*)&rna_MeshStringPropertyLayer_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_name_get, MeshStringPropertyLayer_name_length, MeshStringPropertyLayer_name_set, 32, ""
};

CollectionPropertyRNA rna_MeshStringPropertyLayer_data = {
	{(PropertyRNA*)&rna_MeshStringPropertyLayer_rna_properties, (PropertyRNA*)&rna_MeshStringPropertyLayer_name,
	-1, "data", 16384, "Data",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_data_begin, MeshStringPropertyLayer_data_next, MeshStringPropertyLayer_data_end, MeshStringPropertyLayer_data_get, rna_MeshStringPropertyLayer_data_length, MeshStringPropertyLayer_data_lookup_int, NULL, &RNA_MeshStringProperty
};

CollectionPropertyRNA rna_MeshStringPropertyLayer_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshStringPropertyLayer_data,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshStringPropertyLayer_rna_properties_begin, MeshStringPropertyLayer_rna_properties_next, MeshStringPropertyLayer_rna_properties_end, MeshStringPropertyLayer_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MeshStringPropertyLayer = {
	{(ContainerRNA *)&RNA_MeshTextureFace, (ContainerRNA *)&RNA_MeshStringProperty,
	NULL,
	{(PropertyRNA*)&rna_MeshStringPropertyLayer_rna_type, (PropertyRNA*)&rna_MeshStringPropertyLayer_rna_properties}},
	"MeshStringPropertyLayer"	, NULL,NULL
, 0, "Mesh String Property Layer", "User defined layer of string text values",
	17,
	(PropertyRNA*)&rna_MeshStringPropertyLayer_name, (PropertyRNA*)&rna_MeshStringPropertyLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshStringPropertyLayer_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Texture Face */
PointerPropertyRNA rna_MeshTextureFace_rna_type = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_alpha_sort, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_MeshTextureFace_use_alpha_sort = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_billboard, (PropertyRNA*)&rna_MeshTextureFace_rna_type,
	-1, "use_alpha_sort", 3, "Alpha Sort",
	"Enable sorting of faces for correct alpha drawing (slow, use Clip Alpha instead when possible)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_alpha_sort_get, MeshTextureFace_use_alpha_sort_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_billboard = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_collision, (PropertyRNA*)&rna_MeshTextureFace_use_alpha_sort,
	-1, "use_billboard", 3, "Billboard",
	"Billboard with Z-axis constraint",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_billboard_get, MeshTextureFace_use_billboard_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_collision = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_halo, (PropertyRNA*)&rna_MeshTextureFace_use_billboard,
	-1, "use_collision", 3, "Collision",
	"Use face for collision and ray-sensor detection",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_collision_get, MeshTextureFace_use_collision_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_halo = {
	{(PropertyRNA*)&rna_MeshTextureFace_image, (PropertyRNA*)&rna_MeshTextureFace_use_collision,
	-1, "use_halo", 3, "Halo",
	"Screen aligned billboard",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_halo_get, MeshTextureFace_use_halo_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_MeshTextureFace_image = {
	{(PropertyRNA*)&rna_MeshTextureFace_hide, (PropertyRNA*)&rna_MeshTextureFace_use_halo,
	-1, "image", 65, "Image",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_image_get, MeshTextureFace_image_set, NULL, NULL,&RNA_Image
};

BooleanPropertyRNA rna_MeshTextureFace_hide = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_light, (PropertyRNA*)&rna_MeshTextureFace_image,
	-1, "hide", 3, "Invisible",
	"Make face invisible",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_hide_get, MeshTextureFace_hide_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_light = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_object_color, (PropertyRNA*)&rna_MeshTextureFace_hide,
	-1, "use_light", 3, "Light",
	"Use light for face",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_light_get, MeshTextureFace_use_light_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_object_color = {
	{(PropertyRNA*)&rna_MeshTextureFace_rna_properties, (PropertyRNA*)&rna_MeshTextureFace_use_light,
	-1, "use_object_color", 3, "Object Color",
	"Use ObColor instead of vertex colors",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_object_color_get, MeshTextureFace_use_object_color_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshTextureFace_rna_properties = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_shadow_cast, (PropertyRNA*)&rna_MeshTextureFace_use_object_color,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_rna_properties_begin, MeshTextureFace_rna_properties_next, MeshTextureFace_rna_properties_end, MeshTextureFace_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_MeshTextureFace_use_shadow_cast = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_blend_shared, (PropertyRNA*)&rna_MeshTextureFace_rna_properties,
	-1, "use_shadow_cast", 3, "Shadow",
	"Face is used for shadow",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_shadow_cast_get, MeshTextureFace_use_shadow_cast_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_blend_shared = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_image, (PropertyRNA*)&rna_MeshTextureFace_use_shadow_cast,
	-1, "use_blend_shared", 3, "Shared",
	"Blend vertex colors across face when vertices are shared",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_blend_shared_get, MeshTextureFace_use_blend_shared_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_image = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_bitmap_text, (PropertyRNA*)&rna_MeshTextureFace_use_blend_shared,
	-1, "use_image", 3, "Tex",
	"Render face with texture",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_image_get, MeshTextureFace_use_image_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFace_use_bitmap_text = {
	{(PropertyRNA*)&rna_MeshTextureFace_blend_type, (PropertyRNA*)&rna_MeshTextureFace_use_image,
	-1, "use_bitmap_text", 3, "Text",
	"Enable bitmap text on face",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_bitmap_text_get, MeshTextureFace_use_bitmap_text_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_MeshTextureFace_blend_type_items[5] = {
	{0, "OPAQUE", 0, "Opaque", "Render color of textured face as color"},
	{1, "ADD", 0, "Add", "Render face transparent and add color of face"},
	{2, "ALPHA", 0, "Alpha", "Render polygon transparent, depending on alpha channel of the texture"},
	{4, "CLIPALPHA", 0, "Clip Alpha", "Use the images alpha values clipped with no blending (binary alpha)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MeshTextureFace_blend_type = {
	{(PropertyRNA*)&rna_MeshTextureFace_use_twoside, (PropertyRNA*)&rna_MeshTextureFace_use_bitmap_text,
	-1, "blend_type", 3, "Transparency",
	"Transparency blending mode",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_blend_type_get, MeshTextureFace_blend_type_set, NULL, rna_MeshTextureFace_blend_type_items, 4, 0
};

BooleanPropertyRNA rna_MeshTextureFace_use_twoside = {
	{(PropertyRNA*)&rna_MeshTextureFace_uv, (PropertyRNA*)&rna_MeshTextureFace_blend_type,
	-1, "use_twoside", 3, "Two-side",
	"Render face two-sided",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFace_use_twoside_get, MeshTextureFace_use_twoside_set, NULL, NULL, 0, NULL
};

static float rna_MeshTextureFace_uv_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv = {
	{(PropertyRNA*)&rna_MeshTextureFace_uv_raw, (PropertyRNA*)&rna_MeshTextureFace_use_twoside,
	-1, "uv", 131075, "UV",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, rna_MeshTextureFace_uv_get_length, 2, {4, 2, 0}, 8,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv_get, MeshTextureFace_uv_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv_default
};

static float rna_MeshTextureFace_uv_raw_default[8] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv_raw = {
	{(PropertyRNA*)&rna_MeshTextureFace_uv1, (PropertyRNA*)&rna_MeshTextureFace_uv,
	-1, "uv_raw", 8195, "UV",
	"Fixed size UV coordinates array",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {8, 2, 0}, 8,
	NULL, 0, NULL, NULL,
	offsetof(MTFace, uv), 4, NULL},
	NULL, NULL, MeshTextureFace_uv_raw_get, MeshTextureFace_uv_raw_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv_raw_default
};

static float rna_MeshTextureFace_uv1_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv1 = {
	{(PropertyRNA*)&rna_MeshTextureFace_uv2, (PropertyRNA*)&rna_MeshTextureFace_uv_raw,
	-1, "uv1", 3, "UV 1",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv1_get, MeshTextureFace_uv1_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv1_default
};

static float rna_MeshTextureFace_uv2_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv2 = {
	{(PropertyRNA*)&rna_MeshTextureFace_uv3, (PropertyRNA*)&rna_MeshTextureFace_uv1,
	-1, "uv2", 3, "UV 2",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv2_get, MeshTextureFace_uv2_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv2_default
};

static float rna_MeshTextureFace_uv3_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv3 = {
	{(PropertyRNA*)&rna_MeshTextureFace_uv4, (PropertyRNA*)&rna_MeshTextureFace_uv2,
	-1, "uv3", 3, "UV 3",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv3_get, MeshTextureFace_uv3_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv3_default
};

static float rna_MeshTextureFace_uv4_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshTextureFace_uv4 = {
	{(PropertyRNA*)&rna_MeshTextureFace_pin_uv, (PropertyRNA*)&rna_MeshTextureFace_uv3,
	-1, "uv4", 3, "UV 4",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_uv4_get, MeshTextureFace_uv4_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshTextureFace_uv4_default
};

static int rna_MeshTextureFace_pin_uv_default[4] = {
	0,
	0,
	0,
	0
};

BooleanPropertyRNA rna_MeshTextureFace_pin_uv = {
	{(PropertyRNA*)&rna_MeshTextureFace_select_uv, (PropertyRNA*)&rna_MeshTextureFace_uv4,
	-1, "pin_uv", 3, "UV Pinned",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_pin_uv_get, MeshTextureFace_pin_uv_set, 0, rna_MeshTextureFace_pin_uv_default
};

static int rna_MeshTextureFace_select_uv_default[4] = {
	0,
	0,
	0,
	0
};

BooleanPropertyRNA rna_MeshTextureFace_select_uv = {
	{NULL, (PropertyRNA*)&rna_MeshTextureFace_pin_uv,
	-1, "select_uv", 3, "UV Selected",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshTextureFace_select_uv_get, MeshTextureFace_select_uv_set, 0, rna_MeshTextureFace_select_uv_default
};

StructRNA RNA_MeshTextureFace = {
	{(ContainerRNA *)&RNA_MeshTextureFaceLayer, (ContainerRNA *)&RNA_MeshStringPropertyLayer,
	NULL,
	{(PropertyRNA*)&rna_MeshTextureFace_rna_type, (PropertyRNA*)&rna_MeshTextureFace_select_uv}},
	"MeshTextureFace"	, NULL,NULL
, 0, "Mesh Texture Face", "UV mapping, texturing and game engine data for a face",
	132,
	NULL, (PropertyRNA*)&rna_MeshTextureFace_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshTextureFace_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Texture Face Layer */
PointerPropertyRNA rna_MeshTextureFaceLayer_rna_type = {
	{(PropertyRNA*)&rna_MeshTextureFaceLayer_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MeshTextureFaceLayer_name = {
	{(PropertyRNA*)&rna_MeshTextureFaceLayer_active, (PropertyRNA*)&rna_MeshTextureFaceLayer_rna_type,
	-1, "name", 1, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_name_get, MeshTextureFaceLayer_name_length, MeshTextureFaceLayer_name_set, 32, ""
};

BooleanPropertyRNA rna_MeshTextureFaceLayer_active = {
	{(PropertyRNA*)&rna_MeshTextureFaceLayer_active_clone, (PropertyRNA*)&rna_MeshTextureFaceLayer_name,
	-1, "active", 3, "Active",
	"Sets the layer as active for display and editing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_active_get, MeshTextureFaceLayer_active_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFaceLayer_active_clone = {
	{(PropertyRNA*)&rna_MeshTextureFaceLayer_active_render, (PropertyRNA*)&rna_MeshTextureFaceLayer_active,
	-1, "active_clone", 3, "Active Clone",
	"Sets the layer as active for cloning",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_active_clone_get, MeshTextureFaceLayer_active_clone_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_MeshTextureFaceLayer_active_render = {
	{(PropertyRNA*)&rna_MeshTextureFaceLayer_data, (PropertyRNA*)&rna_MeshTextureFaceLayer_active_clone,
	-1, "active_render", 3, "Active Render",
	"Sets the layer as active for rendering",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_active_render_get, MeshTextureFaceLayer_active_render_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_MeshTextureFaceLayer_data = {
	{(PropertyRNA*)&rna_MeshTextureFaceLayer_rna_properties, (PropertyRNA*)&rna_MeshTextureFaceLayer_active_render,
	-1, "data", 16384, "Data",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_data_begin, MeshTextureFaceLayer_data_next, MeshTextureFaceLayer_data_end, MeshTextureFaceLayer_data_get, rna_MeshTextureFaceLayer_data_length, MeshTextureFaceLayer_data_lookup_int, NULL, &RNA_MeshTextureFace
};

CollectionPropertyRNA rna_MeshTextureFaceLayer_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshTextureFaceLayer_data,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshTextureFaceLayer_rna_properties_begin, MeshTextureFaceLayer_rna_properties_next, MeshTextureFaceLayer_rna_properties_end, MeshTextureFaceLayer_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MeshTextureFaceLayer = {
	{(ContainerRNA *)&RNA_MeshVertex, (ContainerRNA *)&RNA_MeshTextureFace,
	NULL,
	{(PropertyRNA*)&rna_MeshTextureFaceLayer_rna_type, (PropertyRNA*)&rna_MeshTextureFaceLayer_rna_properties}},
	"MeshTextureFaceLayer"	, NULL,NULL
, 0, "Mesh Texture Face Layer", "Layer of texture faces in a Mesh datablock",
	203,
	(PropertyRNA*)&rna_MeshTextureFaceLayer_name, (PropertyRNA*)&rna_MeshTextureFaceLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshTextureFaceLayer_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertex */
PointerPropertyRNA rna_MeshVertex_rna_type = {
	{(PropertyRNA*)&rna_MeshVertex_bevel_weight, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_MeshVertex_bevel_weight = {
	{(PropertyRNA*)&rna_MeshVertex_groups, (PropertyRNA*)&rna_MeshVertex_rna_type,
	-1, "bevel_weight", 3, "Bevel Weight",
	"Weight used by the Bevel modifier \'Only Vertices\' option",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_bevel_weight_get, MeshVertex_bevel_weight_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_MeshVertex_groups = {
	{(PropertyRNA*)&rna_MeshVertex_hide, (PropertyRNA*)&rna_MeshVertex_bevel_weight,
	-1, "groups", 16384, "Groups",
	"Weights for the vertex groups this vertex is member of",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_groups_begin, MeshVertex_groups_next, MeshVertex_groups_end, MeshVertex_groups_get, NULL, NULL, NULL, &RNA_VertexGroupElement
};

BooleanPropertyRNA rna_MeshVertex_hide = {
	{(PropertyRNA*)&rna_MeshVertex_index, (PropertyRNA*)&rna_MeshVertex_groups,
	-1, "hide", 3, "Hide",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_hide_get, MeshVertex_hide_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MeshVertex_index = {
	{(PropertyRNA*)&rna_MeshVertex_co, (PropertyRNA*)&rna_MeshVertex_hide,
	-1, "index", 2, "Index",
	"Index number of the vertex",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_index_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

static float rna_MeshVertex_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_co = {
	{(PropertyRNA*)&rna_MeshVertex_normal, (PropertyRNA*)&rna_MeshVertex_index,
	-1, "co", 8195, "Location",
	"",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MVert, co), 4, NULL},
	NULL, NULL, MeshVertex_co_get, MeshVertex_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MeshVertex_co_default
};

static float rna_MeshVertex_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MeshVertex_normal = {
	{(PropertyRNA*)&rna_MeshVertex_rna_properties, (PropertyRNA*)&rna_MeshVertex_co,
	-1, "normal", 3, "Normal",
	"Vertex Normal",
	0,
	PROP_FLOAT, PROP_DIRECTION|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, MeshVertex_normal_get, MeshVertex_normal_set, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, rna_MeshVertex_normal_default
};

CollectionPropertyRNA rna_MeshVertex_rna_properties = {
	{(PropertyRNA*)&rna_MeshVertex_select, (PropertyRNA*)&rna_MeshVertex_normal,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_rna_properties_begin, MeshVertex_rna_properties_next, MeshVertex_rna_properties_end, MeshVertex_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_MeshVertex_select = {
	{NULL, (PropertyRNA*)&rna_MeshVertex_rna_properties,
	-1, "select", 3, "Select",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_select, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertex_select_get, MeshVertex_select_set, NULL, NULL, 0, NULL
};

StructRNA RNA_MeshVertex = {
	{(ContainerRNA *)&RNA_MeshVertices, (ContainerRNA *)&RNA_MeshTextureFaceLayer,
	NULL,
	{(PropertyRNA*)&rna_MeshVertex_rna_type, (PropertyRNA*)&rna_MeshVertex_select}},
	"MeshVertex"	, NULL,NULL
, 0, "Mesh Vertex", "Vertex in a Mesh datablock",
	546,
	NULL, (PropertyRNA*)&rna_MeshVertex_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_MeshVertex_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Mesh Vertices */
PointerPropertyRNA rna_MeshVertices_rna_type = {
	{(PropertyRNA*)&rna_MeshVertices_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertices_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_MeshVertices_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MeshVertices_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MeshVertices_rna_properties_begin, MeshVertices_rna_properties_next, MeshVertices_rna_properties_end, MeshVertices_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_MeshVertices_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Count",
	"Number of vertices to add.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_MeshVertices_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_MeshVertices_add_count, (PropertyRNA*)&rna_MeshVertices_add_count}},
	"add", 4, "add",
	MeshVertices_add_call,
	NULL
};

StructRNA RNA_MeshVertices = {
	{(ContainerRNA *)&RNA_MessageActuator, (ContainerRNA *)&RNA_MeshVertex,
	NULL,
	{(PropertyRNA*)&rna_MeshVertices_rna_type, (PropertyRNA*)&rna_MeshVertices_rna_properties}},
	"MeshVertices"	, NULL,NULL
, 0, "Mesh Vertices", "Collection of mesh vertices",
	17,
	NULL, (PropertyRNA*)&rna_MeshVertices_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_MeshVertices_add_func, (FunctionRNA*)&rna_MeshVertices_add_func}
};

/* UV Textures */
PointerPropertyRNA rna_UVTextures_rna_type = {
	{(PropertyRNA*)&rna_UVTextures_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_UVTextures_active = {
	{(PropertyRNA*)&rna_UVTextures_active_index, (PropertyRNA*)&rna_UVTextures_rna_type,
	-1, "active", 1, "Active UV Texture",
	"Active UV texture",
	0,
	PROP_POINTER, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_active_get, UVTextures_active_set, NULL, NULL,&RNA_MeshTextureFaceLayer
};

IntPropertyRNA rna_UVTextures_active_index = {
	{(PropertyRNA*)&rna_UVTextures_rna_properties, (PropertyRNA*)&rna_UVTextures_active,
	-1, "active_index", 3, "Active UV Texture Index",
	"Active UV texture index",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_active_index_get, UVTextures_active_index_set, NULL, NULL, rna_Mesh_active_uv_texture_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_UVTextures_rna_properties = {
	{NULL, (PropertyRNA*)&rna_UVTextures_active_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UVTextures_rna_properties_begin, UVTextures_rna_properties_next, UVTextures_rna_properties_end, UVTextures_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_UVTextures_new_name = {
	{(PropertyRNA*)&rna_UVTextures_new_layer, NULL,
	-1, "name", 1, "",
	"UV Texture name.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "UVTex"
};

PointerPropertyRNA rna_UVTextures_new_layer = {
	{NULL, (PropertyRNA*)&rna_UVTextures_new_name,
	-1, "layer", 8, "",
	"The newly created layer.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshTextureFaceLayer
};

FunctionRNA rna_UVTextures_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_UVTextures_new_name, (PropertyRNA*)&rna_UVTextures_new_layer}},
	"new", 2, "Add a UV texture layer to Mesh.",
	UVTextures_new_call,
	(PropertyRNA*)&rna_UVTextures_new_layer
};

StructRNA RNA_UVTextures = {
	{(ContainerRNA *)&RNA_UnitSettings, (ContainerRNA *)&RNA_UVProjector,
	NULL,
	{(PropertyRNA*)&rna_UVTextures_rna_type, (PropertyRNA*)&rna_UVTextures_rna_properties}},
	"UVTextures"	, NULL,NULL
, 0, "UV Textures", "Collection of uv textures",
	17,
	NULL, (PropertyRNA*)&rna_UVTextures_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_UVTextures_new_func, (FunctionRNA*)&rna_UVTextures_new_func}
};

/* Vertex Colors */
PointerPropertyRNA rna_VertexColors_rna_type = {
	{(PropertyRNA*)&rna_VertexColors_active_index, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_VertexColors_active_index = {
	{(PropertyRNA*)&rna_VertexColors_active, (PropertyRNA*)&rna_VertexColors_rna_type,
	-1, "active_index", 3, "Active Vertex Color Index",
	"Active vertex color index",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_active_index_get, VertexColors_active_index_set, NULL, NULL, rna_Mesh_active_vertex_color_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_VertexColors_active = {
	{(PropertyRNA*)&rna_VertexColors_rna_properties, (PropertyRNA*)&rna_VertexColors_active_index,
	-1, "active", 1, "Active Vertex Color Layer",
	"Active vertex color layer",
	0,
	PROP_POINTER, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_active_get, VertexColors_active_set, NULL, NULL,&RNA_MeshColorLayer
};

CollectionPropertyRNA rna_VertexColors_rna_properties = {
	{NULL, (PropertyRNA*)&rna_VertexColors_active,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexColors_rna_properties_begin, VertexColors_rna_properties_next, VertexColors_rna_properties_end, VertexColors_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_VertexColors_new_name = {
	{(PropertyRNA*)&rna_VertexColors_new_layer, NULL,
	-1, "name", 1, "",
	"Vertex color name.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Col"
};

PointerPropertyRNA rna_VertexColors_new_layer = {
	{NULL, (PropertyRNA*)&rna_VertexColors_new_name,
	-1, "layer", 8, "",
	"The newly created layer.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MeshColorLayer
};

FunctionRNA rna_VertexColors_new_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_VertexColors_new_name, (PropertyRNA*)&rna_VertexColors_new_layer}},
	"new", 2, "Add a vertex color layer to Mesh.",
	VertexColors_new_call,
	(PropertyRNA*)&rna_VertexColors_new_layer
};

StructRNA RNA_VertexColors = {
	{(ContainerRNA *)&RNA_VertexGroup, (ContainerRNA *)&RNA_VectorNodeSocket,
	NULL,
	{(PropertyRNA*)&rna_VertexColors_rna_type, (PropertyRNA*)&rna_VertexColors_rna_properties}},
	"VertexColors"	, NULL,NULL
, 0, "Vertex Colors", "Collection of vertex colors",
	17,
	NULL, (PropertyRNA*)&rna_VertexColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_VertexColors_new_func, (FunctionRNA*)&rna_VertexColors_new_func}
};

/* Vertex Group Element */
PointerPropertyRNA rna_VertexGroupElement_rna_type = {
	{(PropertyRNA*)&rna_VertexGroupElement_group, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroupElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_VertexGroupElement_group = {
	{(PropertyRNA*)&rna_VertexGroupElement_rna_properties, (PropertyRNA*)&rna_VertexGroupElement_rna_type,
	-1, "group", 8194, "Group Index",
	"",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MDeformWeight, def_nr), 0, NULL},
	VertexGroupElement_group_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_VertexGroupElement_rna_properties = {
	{(PropertyRNA*)&rna_VertexGroupElement_weight, (PropertyRNA*)&rna_VertexGroupElement_group,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroupElement_rna_properties_begin, VertexGroupElement_rna_properties_next, VertexGroupElement_rna_properties_end, VertexGroupElement_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_VertexGroupElement_weight = {
	{NULL, (PropertyRNA*)&rna_VertexGroupElement_rna_properties,
	-1, "weight", 8195, "Weight",
	"Vertex Weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Mesh_update_data, 0, NULL, NULL,
	offsetof(MDeformWeight, weight), 4, NULL},
	VertexGroupElement_weight_get, VertexGroupElement_weight_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_VertexGroupElement = {
	{(ContainerRNA *)&RNA_VertexGroups, (ContainerRNA *)&RNA_VertexGroup,
	NULL,
	{(PropertyRNA*)&rna_VertexGroupElement_rna_type, (PropertyRNA*)&rna_VertexGroupElement_weight}},
	"VertexGroupElement"	, NULL,NULL
, 0, "Vertex Group Element", "Weight value of a vertex in a vertex group",
	201,
	NULL, (PropertyRNA*)&rna_VertexGroupElement_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_VertexGroupElement_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

