
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

#include "rna_boid.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_BoidRule_rna_type;
StringPropertyRNA rna_BoidRule_name;
BooleanPropertyRNA rna_BoidRule_use_in_air;
BooleanPropertyRNA rna_BoidRule_use_on_land;
CollectionPropertyRNA rna_BoidRule_rna_properties;
EnumPropertyRNA rna_BoidRule_type;


extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern BooleanPropertyRNA rna_BoidRule_use_in_air;
extern BooleanPropertyRNA rna_BoidRule_use_on_land;
extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern EnumPropertyRNA rna_BoidRule_type;

FloatPropertyRNA rna_BoidRuleAverageSpeed_level;
FloatPropertyRNA rna_BoidRuleAverageSpeed_speed;
FloatPropertyRNA rna_BoidRuleAverageSpeed_wander;


extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern BooleanPropertyRNA rna_BoidRule_use_in_air;
extern BooleanPropertyRNA rna_BoidRule_use_on_land;
extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern EnumPropertyRNA rna_BoidRule_type;

FloatPropertyRNA rna_BoidRuleAvoid_fear_factor;
PointerPropertyRNA rna_BoidRuleAvoid_object;
BooleanPropertyRNA rna_BoidRuleAvoid_use_predict;


extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern BooleanPropertyRNA rna_BoidRule_use_in_air;
extern BooleanPropertyRNA rna_BoidRule_use_on_land;
extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern EnumPropertyRNA rna_BoidRule_type;

BooleanPropertyRNA rna_BoidRuleAvoidCollision_use_avoid;
BooleanPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision;
FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead;


extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern BooleanPropertyRNA rna_BoidRule_use_in_air;
extern BooleanPropertyRNA rna_BoidRule_use_on_land;
extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern EnumPropertyRNA rna_BoidRule_type;

FloatPropertyRNA rna_BoidRuleFight_distance;
FloatPropertyRNA rna_BoidRuleFight_flee_distance;


extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern BooleanPropertyRNA rna_BoidRule_use_in_air;
extern BooleanPropertyRNA rna_BoidRule_use_on_land;
extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern EnumPropertyRNA rna_BoidRule_type;

FloatPropertyRNA rna_BoidRuleFollowLeader_distance;
BooleanPropertyRNA rna_BoidRuleFollowLeader_use_line;
PointerPropertyRNA rna_BoidRuleFollowLeader_object;
IntPropertyRNA rna_BoidRuleFollowLeader_queue_count;


extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern BooleanPropertyRNA rna_BoidRule_use_in_air;
extern BooleanPropertyRNA rna_BoidRule_use_on_land;
extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern EnumPropertyRNA rna_BoidRule_type;

PointerPropertyRNA rna_BoidRuleGoal_object;
BooleanPropertyRNA rna_BoidRuleGoal_use_predict;


PointerPropertyRNA rna_BoidSettings_rna_type;
FloatPropertyRNA rna_BoidSettings_accuracy;
PointerPropertyRNA rna_BoidSettings_active_boid_state;
IntPropertyRNA rna_BoidSettings_active_boid_state_index;
FloatPropertyRNA rna_BoidSettings_aggression;
FloatPropertyRNA rna_BoidSettings_air_personal_space;
BooleanPropertyRNA rna_BoidSettings_use_climb;
BooleanPropertyRNA rna_BoidSettings_use_flight;
BooleanPropertyRNA rna_BoidSettings_use_land;
FloatPropertyRNA rna_BoidSettings_bank;
CollectionPropertyRNA rna_BoidSettings_states;
FloatPropertyRNA rna_BoidSettings_health;
FloatPropertyRNA rna_BoidSettings_height;
FloatPropertyRNA rna_BoidSettings_land_jump_speed;
FloatPropertyRNA rna_BoidSettings_land_personal_space;
FloatPropertyRNA rna_BoidSettings_land_stick_force;
FloatPropertyRNA rna_BoidSettings_land_smooth;
FloatPropertyRNA rna_BoidSettings_air_acc_max;
FloatPropertyRNA rna_BoidSettings_air_ave_max;
FloatPropertyRNA rna_BoidSettings_air_speed_max;
FloatPropertyRNA rna_BoidSettings_land_acc_max;
FloatPropertyRNA rna_BoidSettings_land_ave_max;
FloatPropertyRNA rna_BoidSettings_land_speed_max;
FloatPropertyRNA rna_BoidSettings_air_speed_min;
FloatPropertyRNA rna_BoidSettings_pitch;
CollectionPropertyRNA rna_BoidSettings_rna_properties;
FloatPropertyRNA rna_BoidSettings_range;
FloatPropertyRNA rna_BoidSettings_strength;


PointerPropertyRNA rna_BoidState_rna_type;
StringPropertyRNA rna_BoidState_name;
PointerPropertyRNA rna_BoidState_active_boid_rule;
IntPropertyRNA rna_BoidState_active_boid_rule_index;
CollectionPropertyRNA rna_BoidState_rules;
FloatPropertyRNA rna_BoidState_falloff;
CollectionPropertyRNA rna_BoidState_rna_properties;
EnumPropertyRNA rna_BoidState_ruleset_type;
FloatPropertyRNA rna_BoidState_rule_fuzzy;
FloatPropertyRNA rna_BoidState_volume;

PointerRNA BoidRule_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void BoidRule_name_get(PointerRNA *ptr, char *value)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int BoidRule_name_length(PointerRNA *ptr)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	return strlen(data->name);
}

void BoidRule_name_set(PointerRNA *ptr, const char *value)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	BLI_strncpy(data->name, value, 32);
}

int BoidRule_use_in_air_get(PointerRNA *ptr)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void BoidRule_use_in_air_set(PointerRNA *ptr, int value)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int BoidRule_use_on_land_get(PointerRNA *ptr)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void BoidRule_use_on_land_set(PointerRNA *ptr, int value)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

static PointerRNA BoidRule_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoidRule_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BoidRule_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BoidRule_rna_properties_get(iter);
}

void BoidRule_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BoidRule_rna_properties_get(iter);
}

void BoidRule_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidRule_type_get(PointerRNA *ptr)
{
	BoidRule *data= (BoidRule*)(ptr->data);
	return (int)(data->type);
}

float BoidRuleAverageSpeed_level_get(PointerRNA *ptr)
{
	BoidRuleAverageSpeed *data= (BoidRuleAverageSpeed*)(ptr->data);
	return (float)(data->level);
}

void BoidRuleAverageSpeed_level_set(PointerRNA *ptr, float value)
{
	BoidRuleAverageSpeed *data= (BoidRuleAverageSpeed*)(ptr->data);
	data->level= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_speed_get(PointerRNA *ptr)
{
	BoidRuleAverageSpeed *data= (BoidRuleAverageSpeed*)(ptr->data);
	return (float)(data->speed);
}

void BoidRuleAverageSpeed_speed_set(PointerRNA *ptr, float value)
{
	BoidRuleAverageSpeed *data= (BoidRuleAverageSpeed*)(ptr->data);
	data->speed= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_wander_get(PointerRNA *ptr)
{
	BoidRuleAverageSpeed *data= (BoidRuleAverageSpeed*)(ptr->data);
	return (float)(data->wander);
}

void BoidRuleAverageSpeed_wander_set(PointerRNA *ptr, float value)
{
	BoidRuleAverageSpeed *data= (BoidRuleAverageSpeed*)(ptr->data);
	data->wander= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleAvoid_fear_factor_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	return (float)(data->fear_factor);
}

void BoidRuleAvoid_fear_factor_set(PointerRNA *ptr, float value)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	data->fear_factor= CLAMPIS(value, 0.0f, 100.0f);
}

PointerRNA BoidRuleAvoid_object_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleAvoid_object_set(PointerRNA *ptr, PointerRNA value)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->ob= value.data;
}

int BoidRuleAvoid_use_predict_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleAvoid_use_predict_set(PointerRNA *ptr, int value)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	if(value) data->options |= 1;
	else data->options &= ~1;
}

int BoidRuleAvoidCollision_use_avoid_get(PointerRNA *ptr)
{
	BoidRuleAvoidCollision *data= (BoidRuleAvoidCollision*)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleAvoidCollision_use_avoid_set(PointerRNA *ptr, int value)
{
	BoidRuleAvoidCollision *data= (BoidRuleAvoidCollision*)(ptr->data);
	if(value) data->options |= 1;
	else data->options &= ~1;
}

int BoidRuleAvoidCollision_use_avoid_collision_get(PointerRNA *ptr)
{
	BoidRuleAvoidCollision *data= (BoidRuleAvoidCollision*)(ptr->data);
	return (((data->options) & 2) != 0);
}

void BoidRuleAvoidCollision_use_avoid_collision_set(PointerRNA *ptr, int value)
{
	BoidRuleAvoidCollision *data= (BoidRuleAvoidCollision*)(ptr->data);
	if(value) data->options |= 2;
	else data->options &= ~2;
}

float BoidRuleAvoidCollision_look_ahead_get(PointerRNA *ptr)
{
	BoidRuleAvoidCollision *data= (BoidRuleAvoidCollision*)(ptr->data);
	return (float)(data->look_ahead);
}

void BoidRuleAvoidCollision_look_ahead_set(PointerRNA *ptr, float value)
{
	BoidRuleAvoidCollision *data= (BoidRuleAvoidCollision*)(ptr->data);
	data->look_ahead= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidRuleFight_distance_get(PointerRNA *ptr)
{
	BoidRuleFight *data= (BoidRuleFight*)(ptr->data);
	return (float)(data->distance);
}

void BoidRuleFight_distance_set(PointerRNA *ptr, float value)
{
	BoidRuleFight *data= (BoidRuleFight*)(ptr->data);
	data->distance= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidRuleFight_flee_distance_get(PointerRNA *ptr)
{
	BoidRuleFight *data= (BoidRuleFight*)(ptr->data);
	return (float)(data->flee_distance);
}

void BoidRuleFight_flee_distance_set(PointerRNA *ptr, float value)
{
	BoidRuleFight *data= (BoidRuleFight*)(ptr->data);
	data->flee_distance= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidRuleFollowLeader_distance_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	return (float)(data->distance);
}

void BoidRuleFollowLeader_distance_set(PointerRNA *ptr, float value)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	data->distance= CLAMPIS(value, 0.0f, 100.0f);
}

int BoidRuleFollowLeader_use_line_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleFollowLeader_use_line_set(PointerRNA *ptr, int value)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	if(value) data->options |= 1;
	else data->options &= ~1;
}

PointerRNA BoidRuleFollowLeader_object_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleFollowLeader_object_set(PointerRNA *ptr, PointerRNA value)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->ob= value.data;
}

int BoidRuleFollowLeader_queue_count_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	return (int)(data->queue_size);
}

void BoidRuleFollowLeader_queue_count_set(PointerRNA *ptr, int value)
{
	BoidRuleFollowLeader *data= (BoidRuleFollowLeader*)(ptr->data);
	data->queue_size= CLAMPIS(value, 0, 100);
}

PointerRNA BoidRuleGoal_object_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleGoal_object_set(PointerRNA *ptr, PointerRNA value)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->ob= value.data;
}

int BoidRuleGoal_use_predict_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleGoal_use_predict_set(PointerRNA *ptr, int value)
{
	BoidRuleGoalAvoid *data= (BoidRuleGoalAvoid*)(ptr->data);
	if(value) data->options |= 1;
	else data->options &= ~1;
}

PointerRNA BoidSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float BoidSettings_accuracy_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->accuracy);
}

void BoidSettings_accuracy_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->accuracy= CLAMPIS(value, 0.0f, 1.0f);
}

PointerRNA BoidSettings_active_boid_state_get(PointerRNA *ptr)
{
	return rna_BoidSettings_active_boid_state_get(ptr);
}

int BoidSettings_active_boid_state_index_get(PointerRNA *ptr)
{
	return rna_BoidSettings_active_boid_state_index_get(ptr);
}

void BoidSettings_active_boid_state_index_set(PointerRNA *ptr, int value)
{
	rna_BoidSettings_active_boid_state_index_set(ptr, value);
}

float BoidSettings_aggression_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->aggression);
}

void BoidSettings_aggression_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->aggression= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_air_personal_space_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->air_personal_space);
}

void BoidSettings_air_personal_space_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->air_personal_space= CLAMPIS(value, 0.0f, 10.0f);
}

int BoidSettings_use_climb_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (((data->options) & 4) != 0);
}

void BoidSettings_use_climb_set(PointerRNA *ptr, int value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	if(value) data->options |= 4;
	else data->options &= ~4;
}

int BoidSettings_use_flight_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidSettings_use_flight_set(PointerRNA *ptr, int value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	if(value) data->options |= 1;
	else data->options &= ~1;
}

int BoidSettings_use_land_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (((data->options) & 2) != 0);
}

void BoidSettings_use_land_set(PointerRNA *ptr, int value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	if(value) data->options |= 2;
	else data->options &= ~2;
}

float BoidSettings_bank_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->banking);
}

void BoidSettings_bank_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->banking= CLAMPIS(value, 0.0f, 2.0f);
}

static PointerRNA BoidSettings_states_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidState, rna_iterator_listbase_get(iter));
}

void BoidSettings_states_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BoidSettings_states;

	rna_iterator_listbase_begin(iter, &data->states, NULL);

	if(iter->valid)
		iter->ptr= BoidSettings_states_get(iter);
}

void BoidSettings_states_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BoidSettings_states_get(iter);
}

void BoidSettings_states_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidSettings_states_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	BoidSettings_states_begin(&iter, ptr);

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
		if(found) *r_ptr = BoidSettings_states_get(&iter);
	}

	BoidSettings_states_end(&iter);

	return found;
}

float BoidSettings_health_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->health);
}

void BoidSettings_health_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->health= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_height_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->height);
}

void BoidSettings_height_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->height= CLAMPIS(value, 0.0f, 2.0f);
}

float BoidSettings_land_jump_speed_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->land_jump_speed);
}

void BoidSettings_land_jump_speed_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->land_jump_speed= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_land_personal_space_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->land_personal_space);
}

void BoidSettings_land_personal_space_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->land_personal_space= CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_land_stick_force_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->land_stick_force);
}

void BoidSettings_land_stick_force_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->land_stick_force= CLAMPIS(value, 0.0f, 1000.0f);
}

float BoidSettings_land_smooth_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->landing_smoothness);
}

void BoidSettings_land_smooth_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->landing_smoothness= CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_air_acc_max_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->air_max_acc);
}

void BoidSettings_air_acc_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->air_max_acc= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_ave_max_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->air_max_ave);
}

void BoidSettings_air_ave_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->air_max_ave= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_speed_max_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->air_max_speed);
}

void BoidSettings_air_speed_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->air_max_speed= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_land_acc_max_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->land_max_acc);
}

void BoidSettings_land_acc_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->land_max_acc= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_land_ave_max_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->land_max_ave);
}

void BoidSettings_land_ave_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->land_max_ave= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_land_speed_max_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->land_max_speed);
}

void BoidSettings_land_speed_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->land_max_speed= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_air_speed_min_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->air_min_speed);
}

void BoidSettings_air_speed_min_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->air_min_speed= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_pitch_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->pitch);
}

void BoidSettings_pitch_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->pitch= CLAMPIS(value, 0.0f, 2.0f);
}

static PointerRNA BoidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BoidSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BoidSettings_rna_properties_get(iter);
}

void BoidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BoidSettings_rna_properties_get(iter);
}

void BoidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float BoidSettings_range_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->range);
}

void BoidSettings_range_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->range= CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_strength_get(PointerRNA *ptr)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	return (float)(data->strength);
}

void BoidSettings_strength_set(PointerRNA *ptr, float value)
{
	BoidSettings *data= (BoidSettings*)(ptr->data);
	data->strength= CLAMPIS(value, 0.0f, 100.0f);
}

PointerRNA BoidState_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void BoidState_name_get(PointerRNA *ptr, char *value)
{
	BoidState *data= (BoidState*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int BoidState_name_length(PointerRNA *ptr)
{
	BoidState *data= (BoidState*)(ptr->data);
	return strlen(data->name);
}

void BoidState_name_set(PointerRNA *ptr, const char *value)
{
	BoidState *data= (BoidState*)(ptr->data);
	BLI_strncpy(data->name, value, 32);
}

PointerRNA BoidState_active_boid_rule_get(PointerRNA *ptr)
{
	return rna_BoidState_active_boid_rule_get(ptr);
}

int BoidState_active_boid_rule_index_get(PointerRNA *ptr)
{
	return rna_BoidState_active_boid_rule_index_get(ptr);
}

void BoidState_active_boid_rule_index_set(PointerRNA *ptr, int value)
{
	rna_BoidState_active_boid_rule_index_set(ptr, value);
}

static PointerRNA BoidState_rules_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidRule, rna_iterator_listbase_get(iter));
}

void BoidState_rules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	BoidState *data= (BoidState*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BoidState_rules;

	rna_iterator_listbase_begin(iter, &data->rules, NULL);

	if(iter->valid)
		iter->ptr= BoidState_rules_get(iter);
}

void BoidState_rules_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BoidState_rules_get(iter);
}

void BoidState_rules_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidState_rules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	BoidState_rules_begin(&iter, ptr);

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
		if(found) *r_ptr = BoidState_rules_get(&iter);
	}

	BoidState_rules_end(&iter);

	return found;
}

float BoidState_falloff_get(PointerRNA *ptr)
{
	BoidState *data= (BoidState*)(ptr->data);
	return (float)(data->falloff);
}

void BoidState_falloff_set(PointerRNA *ptr, float value)
{
	BoidState *data= (BoidState*)(ptr->data);
	data->falloff= CLAMPIS(value, 0.0f, 10.0f);
}

static PointerRNA BoidState_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoidState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BoidState_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BoidState_rna_properties_get(iter);
}

void BoidState_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BoidState_rna_properties_get(iter);
}

void BoidState_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidState_ruleset_type_get(PointerRNA *ptr)
{
	BoidState *data= (BoidState*)(ptr->data);
	return (int)(data->ruleset_type);
}

void BoidState_ruleset_type_set(PointerRNA *ptr, int value)
{
	BoidState *data= (BoidState*)(ptr->data);
	data->ruleset_type= value;
}

float BoidState_rule_fuzzy_get(PointerRNA *ptr)
{
	BoidState *data= (BoidState*)(ptr->data);
	return (float)(data->rule_fuzziness);
}

void BoidState_rule_fuzzy_set(PointerRNA *ptr, float value)
{
	BoidState *data= (BoidState*)(ptr->data);
	data->rule_fuzziness= CLAMPIS(value, 0.0f, 1.0f);
}

float BoidState_volume_get(PointerRNA *ptr)
{
	BoidState *data= (BoidState*)(ptr->data);
	return (float)(data->volume);
}

void BoidState_volume_set(PointerRNA *ptr, float value)
{
	BoidState *data= (BoidState*)(ptr->data);
	data->volume= CLAMPIS(value, 0.0f, 100.0f);
}










/* Boid Rule */
PointerPropertyRNA rna_BoidRule_rna_type = {
	{(PropertyRNA*)&rna_BoidRule_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoidRule_name = {
	{(PropertyRNA*)&rna_BoidRule_use_in_air, (PropertyRNA*)&rna_BoidRule_rna_type,
	-1, "name", 1, "Name",
	"Boid rule name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_name_get, BoidRule_name_length, BoidRule_name_set, 32, ""
};

BooleanPropertyRNA rna_BoidRule_use_in_air = {
	{(PropertyRNA*)&rna_BoidRule_use_on_land, (PropertyRNA*)&rna_BoidRule_name,
	-1, "use_in_air", 3, "In Air",
	"Use rule when boid is flying",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_use_in_air_get, BoidRule_use_in_air_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_BoidRule_use_on_land = {
	{(PropertyRNA*)&rna_BoidRule_rna_properties, (PropertyRNA*)&rna_BoidRule_use_in_air,
	-1, "use_on_land", 3, "On Land",
	"Use rule when boid is on land",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_use_on_land_get, BoidRule_use_on_land_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_BoidRule_rna_properties = {
	{(PropertyRNA*)&rna_BoidRule_type, (PropertyRNA*)&rna_BoidRule_use_on_land,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_rna_properties_begin, BoidRule_rna_properties_next, BoidRule_rna_properties_end, BoidRule_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_BoidRule_type_items[9] = {
	{1, "GOAL", 0, "Goal", "Go to assigned object or loudest assigned signal source"},
	{2, "AVOID", 0, "Avoid", "Get away from assigned object or loudest assigned signal source"},
	{3, "AVOID_COLLISION", 0, "Avoid Collision", "Maneuver to avoid collisions with other boids and deflector objects in near future"},
	{4, "SEPARATE", 0, "Separate", "Keep from going through other boids"},
	{5, "FLOCK", 0, "Flock", "Move to center of neighbors and match their velocity"},
	{6, "FOLLOW_LEADER", 0, "Follow Leader", "Follow a boid or assigned object"},
	{7, "AVERAGE_SPEED", 0, "Average Speed", "Maintain speed, flight level or wander"},
	{8, "FIGHT", 0, "Fight", "Go to closest enemy and attack when in range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BoidRule_type = {
	{NULL, (PropertyRNA*)&rna_BoidRule_rna_properties,
	-1, "type", 2, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_type_get, NULL, NULL, rna_BoidRule_type_items, 8, 1
};

StructRNA RNA_BoidRule = {
	{(ContainerRNA *)&RNA_BoidRuleAverageSpeed, (ContainerRNA *)&RNA_BlenderRNA,
	NULL,
	{(PropertyRNA*)&rna_BoidRule_rna_type, (PropertyRNA*)&rna_BoidRule_type}},
	"BoidRule"	, NULL,NULL
, 0, "Boid Rule", "",
	17,
	(PropertyRNA*)&rna_BoidRule_name, (PropertyRNA*)&rna_BoidRule_rna_properties,
	NULL,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Average Speed */
FloatPropertyRNA rna_BoidRuleAverageSpeed_level = {
	{(PropertyRNA*)&rna_BoidRuleAverageSpeed_speed, NULL,
	-1, "level", 8195, "Level",
	"How much velocity\'s z-component is kept constant",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAverageSpeed, level), 4, NULL},
	BoidRuleAverageSpeed_level_get, BoidRuleAverageSpeed_level_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_speed = {
	{(PropertyRNA*)&rna_BoidRuleAverageSpeed_wander, (PropertyRNA*)&rna_BoidRuleAverageSpeed_level,
	-1, "speed", 8195, "Speed",
	"Percentage of maximum speed",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAverageSpeed, speed), 4, NULL},
	BoidRuleAverageSpeed_speed_get, BoidRuleAverageSpeed_speed_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_wander = {
	{NULL, (PropertyRNA*)&rna_BoidRuleAverageSpeed_speed,
	-1, "wander", 8195, "Wander",
	"How fast velocity\'s direction is randomized",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAverageSpeed, wander), 4, NULL},
	BoidRuleAverageSpeed_wander_get, BoidRuleAverageSpeed_wander_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAverageSpeed = {
	{(ContainerRNA *)&RNA_BoidRuleAvoid, (ContainerRNA *)&RNA_BoidRule,
	NULL,
	{(PropertyRNA*)&rna_BoidRuleAverageSpeed_level, (PropertyRNA*)&rna_BoidRuleAverageSpeed_wander}},
	"BoidRuleAverageSpeed"	, NULL,NULL
, 0, "Average Speed", "",
	17,
	(PropertyRNA*)&rna_BoidRule_name, (PropertyRNA*)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Avoid */
FloatPropertyRNA rna_BoidRuleAvoid_fear_factor = {
	{(PropertyRNA*)&rna_BoidRuleAvoid_object, NULL,
	-1, "fear_factor", 8195, "Fear factor",
	"Avoid object if danger from it is above this threshold",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleGoalAvoid, fear_factor), 4, NULL},
	BoidRuleAvoid_fear_factor_get, BoidRuleAvoid_fear_factor_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_BoidRuleAvoid_object = {
	{(PropertyRNA*)&rna_BoidRuleAvoid_use_predict, (PropertyRNA*)&rna_BoidRuleAvoid_fear_factor,
	-1, "object", 1, "Object",
	"Object to avoid",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoid_object_get, BoidRuleAvoid_object_set, NULL, NULL,&RNA_Object
};

BooleanPropertyRNA rna_BoidRuleAvoid_use_predict = {
	{NULL, (PropertyRNA*)&rna_BoidRuleAvoid_object,
	-1, "use_predict", 3, "Predict",
	"Predict target movement",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoid_use_predict_get, BoidRuleAvoid_use_predict_set, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRuleAvoid = {
	{(ContainerRNA *)&RNA_BoidRuleAvoidCollision, (ContainerRNA *)&RNA_BoidRuleAverageSpeed,
	NULL,
	{(PropertyRNA*)&rna_BoidRuleAvoid_fear_factor, (PropertyRNA*)&rna_BoidRuleAvoid_use_predict}},
	"BoidRuleAvoid"	, NULL,NULL
, 0, "Avoid", "",
	17,
	(PropertyRNA*)&rna_BoidRule_name, (PropertyRNA*)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Avoid Collision */
BooleanPropertyRNA rna_BoidRuleAvoidCollision_use_avoid = {
	{(PropertyRNA*)&rna_BoidRuleAvoidCollision_use_avoid_collision, NULL,
	-1, "use_avoid", 3, "Boids",
	"Avoid collision with other boids",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoidCollision_use_avoid_get, BoidRuleAvoidCollision_use_avoid_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision = {
	{(PropertyRNA*)&rna_BoidRuleAvoidCollision_look_ahead, (PropertyRNA*)&rna_BoidRuleAvoidCollision_use_avoid,
	-1, "use_avoid_collision", 3, "Deflectors",
	"Avoid collision with deflector objects",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoidCollision_use_avoid_collision_get, BoidRuleAvoidCollision_use_avoid_collision_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead = {
	{NULL, (PropertyRNA*)&rna_BoidRuleAvoidCollision_use_avoid_collision,
	-1, "look_ahead", 8195, "Look ahead",
	"Time to look ahead in seconds",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAvoidCollision, look_ahead), 4, NULL},
	BoidRuleAvoidCollision_look_ahead_get, BoidRuleAvoidCollision_look_ahead_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAvoidCollision = {
	{(ContainerRNA *)&RNA_BoidRuleFight, (ContainerRNA *)&RNA_BoidRuleAvoid,
	NULL,
	{(PropertyRNA*)&rna_BoidRuleAvoidCollision_use_avoid, (PropertyRNA*)&rna_BoidRuleAvoidCollision_look_ahead}},
	"BoidRuleAvoidCollision"	, NULL,NULL
, 0, "Avoid Collision", "",
	17,
	(PropertyRNA*)&rna_BoidRule_name, (PropertyRNA*)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Fight */
FloatPropertyRNA rna_BoidRuleFight_distance = {
	{(PropertyRNA*)&rna_BoidRuleFight_flee_distance, NULL,
	-1, "distance", 8195, "Fight Distance",
	"Attack boids at max this distance",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFight, distance), 4, NULL},
	BoidRuleFight_distance_get, BoidRuleFight_distance_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleFight_flee_distance = {
	{NULL, (PropertyRNA*)&rna_BoidRuleFight_distance,
	-1, "flee_distance", 8195, "Flee Distance",
	"Flee to this distance",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFight, flee_distance), 4, NULL},
	BoidRuleFight_flee_distance_get, BoidRuleFight_flee_distance_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleFight = {
	{(ContainerRNA *)&RNA_BoidRuleFollowLeader, (ContainerRNA *)&RNA_BoidRuleAvoidCollision,
	NULL,
	{(PropertyRNA*)&rna_BoidRuleFight_distance, (PropertyRNA*)&rna_BoidRuleFight_flee_distance}},
	"BoidRuleFight"	, NULL,NULL
, 0, "Fight", "",
	17,
	(PropertyRNA*)&rna_BoidRule_name, (PropertyRNA*)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Follow Leader */
FloatPropertyRNA rna_BoidRuleFollowLeader_distance = {
	{(PropertyRNA*)&rna_BoidRuleFollowLeader_use_line, NULL,
	-1, "distance", 8195, "Distance",
	"Distance behind leader to follow",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFollowLeader, distance), 4, NULL},
	BoidRuleFollowLeader_distance_get, BoidRuleFollowLeader_distance_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_BoidRuleFollowLeader_use_line = {
	{(PropertyRNA*)&rna_BoidRuleFollowLeader_object, (PropertyRNA*)&rna_BoidRuleFollowLeader_distance,
	-1, "use_line", 3, "Line",
	"Follow leader in a line",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleFollowLeader_use_line_get, BoidRuleFollowLeader_use_line_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BoidRuleFollowLeader_object = {
	{(PropertyRNA*)&rna_BoidRuleFollowLeader_queue_count, (PropertyRNA*)&rna_BoidRuleFollowLeader_use_line,
	-1, "object", 1, "Object",
	"Follow this object instead of a boid",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleFollowLeader_object_get, BoidRuleFollowLeader_object_set, NULL, NULL,&RNA_Object
};

IntPropertyRNA rna_BoidRuleFollowLeader_queue_count = {
	{NULL, (PropertyRNA*)&rna_BoidRuleFollowLeader_object,
	-1, "queue_count", 8195, "Queue Size",
	"How many boids in a line",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFollowLeader, queue_size), 0, NULL},
	BoidRuleFollowLeader_queue_count_get, BoidRuleFollowLeader_queue_count_set, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

StructRNA RNA_BoidRuleFollowLeader = {
	{(ContainerRNA *)&RNA_BoidRuleGoal, (ContainerRNA *)&RNA_BoidRuleFight,
	NULL,
	{(PropertyRNA*)&rna_BoidRuleFollowLeader_distance, (PropertyRNA*)&rna_BoidRuleFollowLeader_queue_count}},
	"BoidRuleFollowLeader"	, NULL,NULL
, 0, "Follow Leader", "",
	17,
	(PropertyRNA*)&rna_BoidRule_name, (PropertyRNA*)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Goal */
PointerPropertyRNA rna_BoidRuleGoal_object = {
	{(PropertyRNA*)&rna_BoidRuleGoal_use_predict, NULL,
	-1, "object", 1, "Object",
	"Goal object",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleGoal_object_get, BoidRuleGoal_object_set, NULL, NULL,&RNA_Object
};

BooleanPropertyRNA rna_BoidRuleGoal_use_predict = {
	{NULL, (PropertyRNA*)&rna_BoidRuleGoal_object,
	-1, "use_predict", 3, "Predict",
	"Predict target movement",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleGoal_use_predict_get, BoidRuleGoal_use_predict_set, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRuleGoal = {
	{(ContainerRNA *)&RNA_BoidSettings, (ContainerRNA *)&RNA_BoidRuleFollowLeader,
	NULL,
	{(PropertyRNA*)&rna_BoidRuleGoal_object, (PropertyRNA*)&rna_BoidRuleGoal_use_predict}},
	"BoidRuleGoal"	, NULL,NULL
, 0, "Goal", "",
	17,
	(PropertyRNA*)&rna_BoidRule_name, (PropertyRNA*)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Boid Settings */
PointerPropertyRNA rna_BoidSettings_rna_type = {
	{(PropertyRNA*)&rna_BoidSettings_accuracy, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_BoidSettings_accuracy = {
	{(PropertyRNA*)&rna_BoidSettings_active_boid_state, (PropertyRNA*)&rna_BoidSettings_rna_type,
	-1, "accuracy", 8195, "Accuracy",
	"Accuracy of attack",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, accuracy), 4, NULL},
	BoidSettings_accuracy_get, BoidSettings_accuracy_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_BoidSettings_active_boid_state = {
	{(PropertyRNA*)&rna_BoidSettings_active_boid_state_index, (PropertyRNA*)&rna_BoidSettings_accuracy,
	-1, "active_boid_state", 0, "Active Boid Rule",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_active_boid_state_get, NULL, NULL, NULL,&RNA_BoidRule
};

IntPropertyRNA rna_BoidSettings_active_boid_state_index = {
	{(PropertyRNA*)&rna_BoidSettings_aggression, (PropertyRNA*)&rna_BoidSettings_active_boid_state,
	-1, "active_boid_state_index", 3, "Active Boid State Index",
	"",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_active_boid_state_index_get, BoidSettings_active_boid_state_index_set, NULL, NULL, rna_BoidSettings_active_boid_state_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_BoidSettings_aggression = {
	{(PropertyRNA*)&rna_BoidSettings_air_personal_space, (PropertyRNA*)&rna_BoidSettings_active_boid_state_index,
	-1, "aggression", 8195, "Aggression",
	"Boid will fight this times stronger enemy",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, aggression), 4, NULL},
	BoidSettings_aggression_get, BoidSettings_aggression_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_personal_space = {
	{(PropertyRNA*)&rna_BoidSettings_use_climb, (PropertyRNA*)&rna_BoidSettings_aggression,
	-1, "air_personal_space", 8195, "Air Personal Space",
	"Radius of boids personal space in air (% of particle size)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_personal_space), 4, NULL},
	BoidSettings_air_personal_space_get, BoidSettings_air_personal_space_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_BoidSettings_use_climb = {
	{(PropertyRNA*)&rna_BoidSettings_use_flight, (PropertyRNA*)&rna_BoidSettings_air_personal_space,
	-1, "use_climb", 3, "Allow Climbing",
	"Allow boids to climb goal objects",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_use_climb_get, BoidSettings_use_climb_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_BoidSettings_use_flight = {
	{(PropertyRNA*)&rna_BoidSettings_use_land, (PropertyRNA*)&rna_BoidSettings_use_climb,
	-1, "use_flight", 3, "Allow Flight",
	"Allow boids to move in air",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_use_flight_get, BoidSettings_use_flight_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_BoidSettings_use_land = {
	{(PropertyRNA*)&rna_BoidSettings_bank, (PropertyRNA*)&rna_BoidSettings_use_flight,
	-1, "use_land", 3, "Allow Land",
	"Allow boids to move on land",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_use_land_get, BoidSettings_use_land_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BoidSettings_bank = {
	{(PropertyRNA*)&rna_BoidSettings_states, (PropertyRNA*)&rna_BoidSettings_use_land,
	-1, "bank", 8195, "Banking",
	"Amount of rotation around velocity vector on turns",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, banking), 4, NULL},
	BoidSettings_bank_get, BoidSettings_bank_set, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_BoidSettings_states = {
	{(PropertyRNA*)&rna_BoidSettings_health, (PropertyRNA*)&rna_BoidSettings_bank,
	-1, "states", 0, "Boid States",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_states_begin, BoidSettings_states_next, BoidSettings_states_end, BoidSettings_states_get, NULL, BoidSettings_states_lookup_int, NULL, &RNA_BoidState
};

FloatPropertyRNA rna_BoidSettings_health = {
	{(PropertyRNA*)&rna_BoidSettings_height, (PropertyRNA*)&rna_BoidSettings_states,
	-1, "health", 8195, "Health",
	"Initial boid health when born",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, health), 4, NULL},
	BoidSettings_health_get, BoidSettings_health_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_height = {
	{(PropertyRNA*)&rna_BoidSettings_land_jump_speed, (PropertyRNA*)&rna_BoidSettings_health,
	-1, "height", 8195, "Height",
	"Boid height relative to particle size",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, height), 4, NULL},
	BoidSettings_height_get, BoidSettings_height_set, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_jump_speed = {
	{(PropertyRNA*)&rna_BoidSettings_land_personal_space, (PropertyRNA*)&rna_BoidSettings_height,
	-1, "land_jump_speed", 8195, "Jump Speed",
	"Maximum speed for jumping",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_jump_speed), 4, NULL},
	BoidSettings_land_jump_speed_get, BoidSettings_land_jump_speed_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_personal_space = {
	{(PropertyRNA*)&rna_BoidSettings_land_stick_force, (PropertyRNA*)&rna_BoidSettings_land_jump_speed,
	-1, "land_personal_space", 8195, "Land Personal Space",
	"Radius of boids personal space on land (% of particle size)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_personal_space), 4, NULL},
	BoidSettings_land_personal_space_get, BoidSettings_land_personal_space_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_stick_force = {
	{(PropertyRNA*)&rna_BoidSettings_land_smooth, (PropertyRNA*)&rna_BoidSettings_land_personal_space,
	-1, "land_stick_force", 8195, "Land Stick Force",
	"How strong a force must be to start effecting a boid on land",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_stick_force), 4, NULL},
	BoidSettings_land_stick_force_get, BoidSettings_land_stick_force_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_smooth = {
	{(PropertyRNA*)&rna_BoidSettings_air_acc_max, (PropertyRNA*)&rna_BoidSettings_land_stick_force,
	-1, "land_smooth", 8195, "Landing Smoothness",
	"How smoothly the boids land",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, landing_smoothness), 4, NULL},
	BoidSettings_land_smooth_get, BoidSettings_land_smooth_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_acc_max = {
	{(PropertyRNA*)&rna_BoidSettings_air_ave_max, (PropertyRNA*)&rna_BoidSettings_land_smooth,
	-1, "air_acc_max", 8195, "Max Air Acceleration",
	"Maximum acceleration in air (relative to maximum speed)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_max_acc), 4, NULL},
	BoidSettings_air_acc_max_get, BoidSettings_air_acc_max_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_ave_max = {
	{(PropertyRNA*)&rna_BoidSettings_air_speed_max, (PropertyRNA*)&rna_BoidSettings_air_acc_max,
	-1, "air_ave_max", 8195, "Max Air Angular Velocity",
	"Maximum angular velocity in air (relative to 180 degrees)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_max_ave), 4, NULL},
	BoidSettings_air_ave_max_get, BoidSettings_air_ave_max_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_speed_max = {
	{(PropertyRNA*)&rna_BoidSettings_land_acc_max, (PropertyRNA*)&rna_BoidSettings_air_ave_max,
	-1, "air_speed_max", 8195, "Max Air Speed",
	"Maximum speed in air",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_max_speed), 4, NULL},
	BoidSettings_air_speed_max_get, BoidSettings_air_speed_max_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_acc_max = {
	{(PropertyRNA*)&rna_BoidSettings_land_ave_max, (PropertyRNA*)&rna_BoidSettings_air_speed_max,
	-1, "land_acc_max", 8195, "Max Land Acceleration",
	"Maximum acceleration on land (relative to maximum speed)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_max_acc), 4, NULL},
	BoidSettings_land_acc_max_get, BoidSettings_land_acc_max_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_ave_max = {
	{(PropertyRNA*)&rna_BoidSettings_land_speed_max, (PropertyRNA*)&rna_BoidSettings_land_acc_max,
	-1, "land_ave_max", 8195, "Max Land Angular Velocity",
	"Maximum angular velocity on land (relative to 180 degrees)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_max_ave), 4, NULL},
	BoidSettings_land_ave_max_get, BoidSettings_land_ave_max_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_speed_max = {
	{(PropertyRNA*)&rna_BoidSettings_air_speed_min, (PropertyRNA*)&rna_BoidSettings_land_ave_max,
	-1, "land_speed_max", 8195, "Max Land Speed",
	"Maximum speed on land",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_max_speed), 4, NULL},
	BoidSettings_land_speed_max_get, BoidSettings_land_speed_max_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_speed_min = {
	{(PropertyRNA*)&rna_BoidSettings_pitch, (PropertyRNA*)&rna_BoidSettings_land_speed_max,
	-1, "air_speed_min", 8195, "Min Air Speed",
	"Minimum speed in air (relative to maximum speed)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_min_speed), 4, NULL},
	BoidSettings_air_speed_min_get, BoidSettings_air_speed_min_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_pitch = {
	{(PropertyRNA*)&rna_BoidSettings_rna_properties, (PropertyRNA*)&rna_BoidSettings_air_speed_min,
	-1, "pitch", 8195, "Pitch",
	"Amount of rotation around side vector",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, pitch), 4, NULL},
	BoidSettings_pitch_get, BoidSettings_pitch_set, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_BoidSettings_rna_properties = {
	{(PropertyRNA*)&rna_BoidSettings_range, (PropertyRNA*)&rna_BoidSettings_pitch,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_rna_properties_begin, BoidSettings_rna_properties_next, BoidSettings_rna_properties_end, BoidSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_BoidSettings_range = {
	{(PropertyRNA*)&rna_BoidSettings_strength, (PropertyRNA*)&rna_BoidSettings_rna_properties,
	-1, "range", 8195, "Range",
	"The maximum distance from which a boid can attack",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, range), 4, NULL},
	BoidSettings_range_get, BoidSettings_range_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_strength = {
	{NULL, (PropertyRNA*)&rna_BoidSettings_range,
	-1, "strength", 8195, "Strength",
	"Maximum caused damage on attack per second",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, strength), 4, NULL},
	BoidSettings_strength_get, BoidSettings_strength_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidSettings = {
	{(ContainerRNA *)&RNA_BoidState, (ContainerRNA *)&RNA_BoidRuleGoal,
	NULL,
	{(PropertyRNA*)&rna_BoidSettings_rna_type, (PropertyRNA*)&rna_BoidSettings_strength}},
	"BoidSettings"	, NULL,NULL
, 0, "Boid Settings", "Settings for boid physics",
	17,
	NULL, (PropertyRNA*)&rna_BoidSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_BoidSettings_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Boid State */
PointerPropertyRNA rna_BoidState_rna_type = {
	{(PropertyRNA*)&rna_BoidState_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoidState_name = {
	{(PropertyRNA*)&rna_BoidState_active_boid_rule, (PropertyRNA*)&rna_BoidState_rna_type,
	-1, "name", 1, "Name",
	"Boid state name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_name_get, BoidState_name_length, BoidState_name_set, 32, ""
};

PointerPropertyRNA rna_BoidState_active_boid_rule = {
	{(PropertyRNA*)&rna_BoidState_active_boid_rule_index, (PropertyRNA*)&rna_BoidState_name,
	-1, "active_boid_rule", 0, "Active Boid Rule",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_active_boid_rule_get, NULL, NULL, NULL,&RNA_BoidRule
};

IntPropertyRNA rna_BoidState_active_boid_rule_index = {
	{(PropertyRNA*)&rna_BoidState_rules, (PropertyRNA*)&rna_BoidState_active_boid_rule,
	-1, "active_boid_rule_index", 3, "Active Boid Rule Index",
	"",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_active_boid_rule_index_get, BoidState_active_boid_rule_index_set, NULL, NULL, rna_BoidState_active_boid_rule_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_BoidState_rules = {
	{(PropertyRNA*)&rna_BoidState_falloff, (PropertyRNA*)&rna_BoidState_active_boid_rule_index,
	-1, "rules", 0, "Boid Rules",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_rules_begin, BoidState_rules_next, BoidState_rules_end, BoidState_rules_get, NULL, BoidState_rules_lookup_int, NULL, &RNA_BoidRule
};

FloatPropertyRNA rna_BoidState_falloff = {
	{(PropertyRNA*)&rna_BoidState_rna_properties, (PropertyRNA*)&rna_BoidState_rules,
	-1, "falloff", 8195, "Falloff",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidState, falloff), 4, NULL},
	BoidState_falloff_get, BoidState_falloff_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_BoidState_rna_properties = {
	{(PropertyRNA*)&rna_BoidState_ruleset_type, (PropertyRNA*)&rna_BoidState_falloff,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_rna_properties_begin, BoidState_rna_properties_next, BoidState_rna_properties_end, BoidState_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_BoidState_ruleset_type_items[4] = {
	{0, "FUZZY", 0, "Fuzzy", "Rules are gone through top to bottom. Only the first rule that effect above fuzziness threshold is evaluated"},
	{1, "RANDOM", 0, "Random", "A random rule is selected for each boid"},
	{2, "AVERAGE", 0, "Average", "All rules are averaged"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BoidState_ruleset_type = {
	{(PropertyRNA*)&rna_BoidState_rule_fuzzy, (PropertyRNA*)&rna_BoidState_rna_properties,
	-1, "ruleset_type", 3, "Rule Evaluation",
	"How the rules in the list are evaluated",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_ruleset_type_get, BoidState_ruleset_type_set, NULL, rna_BoidState_ruleset_type_items, 3, 0
};

FloatPropertyRNA rna_BoidState_rule_fuzzy = {
	{(PropertyRNA*)&rna_BoidState_volume, (PropertyRNA*)&rna_BoidState_ruleset_type,
	-1, "rule_fuzzy", 8195, "Rule Fuzziness",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidState, rule_fuzziness), 4, NULL},
	BoidState_rule_fuzzy_get, BoidState_rule_fuzzy_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidState_volume = {
	{NULL, (PropertyRNA*)&rna_BoidState_rule_fuzzy,
	-1, "volume", 8195, "Volume",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidState, volume), 4, NULL},
	BoidState_volume_get, BoidState_volume_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidState = {
	{(ContainerRNA *)&RNA_Bone, (ContainerRNA *)&RNA_BoidSettings,
	NULL,
	{(PropertyRNA*)&rna_BoidState_rna_type, (PropertyRNA*)&rna_BoidState_volume}},
	"BoidState"	, NULL,NULL
, 0, "Boid State", "Boid state for boid physics",
	17,
	(PropertyRNA*)&rna_BoidState_name, (PropertyRNA*)&rna_BoidState_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

