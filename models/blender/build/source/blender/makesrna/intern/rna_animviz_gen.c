
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

#include "rna_animviz.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_AnimViz_rna_type;
PointerPropertyRNA rna_AnimViz_motion_path;
PointerPropertyRNA rna_AnimViz_onion_skin_frames;
CollectionPropertyRNA rna_AnimViz_rna_properties;


PointerPropertyRNA rna_AnimVizMotionPaths_rna_type;
IntPropertyRNA rna_AnimVizMotionPaths_frame_after;
BooleanPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all;
EnumPropertyRNA rna_AnimVizMotionPaths_bake_location;
IntPropertyRNA rna_AnimVizMotionPaths_frame_before;
IntPropertyRNA rna_AnimVizMotionPaths_frame_end;
IntPropertyRNA rna_AnimVizMotionPaths_frame_step;
BooleanPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight;
EnumPropertyRNA rna_AnimVizMotionPaths_type;
CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties;
BooleanPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers;
BooleanPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers;
IntPropertyRNA rna_AnimVizMotionPaths_frame_start;


PointerPropertyRNA rna_AnimVizOnionSkinning_rna_type;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_after;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_before;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_end;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_step;
BooleanPropertyRNA rna_AnimVizOnionSkinning_show_only_selected;
CollectionPropertyRNA rna_AnimVizOnionSkinning_rna_properties;
IntPropertyRNA rna_AnimVizOnionSkinning_frame_start;
EnumPropertyRNA rna_AnimVizOnionSkinning_type;


PointerPropertyRNA rna_MotionPath_rna_type;
BooleanPropertyRNA rna_MotionPath_is_modified;
IntPropertyRNA rna_MotionPath_frame_end;
IntPropertyRNA rna_MotionPath_length;
CollectionPropertyRNA rna_MotionPath_points;
CollectionPropertyRNA rna_MotionPath_rna_properties;
IntPropertyRNA rna_MotionPath_frame_start;
BooleanPropertyRNA rna_MotionPath_use_bone_head;


PointerPropertyRNA rna_MotionPathVert_rna_type;
FloatPropertyRNA rna_MotionPathVert_co;
CollectionPropertyRNA rna_MotionPathVert_rna_properties;
BooleanPropertyRNA rna_MotionPathVert_select;

PointerRNA AnimViz_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA AnimViz_motion_path_get(PointerRNA *ptr)
{
	return rna_AnimViz_motion_paths_get(ptr);
}

PointerRNA AnimViz_onion_skin_frames_get(PointerRNA *ptr)
{
	return rna_AnimViz_onion_skinning_get(ptr);
}

static PointerRNA AnimViz_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimViz_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_AnimViz_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= AnimViz_rna_properties_get(iter);
}

void AnimViz_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= AnimViz_rna_properties_get(iter);
}

void AnimViz_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA AnimVizMotionPaths_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int AnimVizMotionPaths_frame_after_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->path_ac);
}

void AnimVizMotionPaths_frame_after_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->path_ac= CLAMPIS(value, 1, 150000);
}

int AnimVizMotionPaths_show_keyframe_action_all_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (((data->path_viewflag) & 8) != 0);
}

void AnimVizMotionPaths_show_keyframe_action_all_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	if(value) data->path_viewflag |= 8;
	else data->path_viewflag &= ~8;
}

int AnimVizMotionPaths_bake_location_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return ((data->path_bakeflag) & 2);
}

void AnimVizMotionPaths_bake_location_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->path_bakeflag &= ~2;
	data->path_bakeflag |= value;
}

int AnimVizMotionPaths_frame_before_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->path_bc);
}

void AnimVizMotionPaths_frame_before_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->path_bc= CLAMPIS(value, 1, 150000);
}

int AnimVizMotionPaths_frame_end_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->path_ef);
}

void AnimVizMotionPaths_frame_end_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_path_end_frame_set(ptr, value);
}

int AnimVizMotionPaths_frame_step_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->path_step);
}

void AnimVizMotionPaths_frame_step_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->path_step= CLAMPIS(value, 1, 100);
}

int AnimVizMotionPaths_show_keyframe_highlight_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (((data->path_viewflag) & 2) != 0);
}

void AnimVizMotionPaths_show_keyframe_highlight_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	if(value) data->path_viewflag |= 2;
	else data->path_viewflag &= ~2;
}

int AnimVizMotionPaths_type_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->path_type);
}

void AnimVizMotionPaths_type_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->path_type= value;
}

static PointerRNA AnimVizMotionPaths_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_AnimVizMotionPaths_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= AnimVizMotionPaths_rna_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= AnimVizMotionPaths_rna_properties_get(iter);
}

void AnimVizMotionPaths_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimVizMotionPaths_show_frame_numbers_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (((data->path_viewflag) & 1) != 0);
}

void AnimVizMotionPaths_show_frame_numbers_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	if(value) data->path_viewflag |= 1;
	else data->path_viewflag &= ~1;
}

int AnimVizMotionPaths_show_keyframe_numbers_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (((data->path_viewflag) & 4) != 0);
}

void AnimVizMotionPaths_show_keyframe_numbers_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	if(value) data->path_viewflag |= 4;
	else data->path_viewflag &= ~4;
}

int AnimVizMotionPaths_frame_start_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->path_sf);
}

void AnimVizMotionPaths_frame_start_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_path_start_frame_set(ptr, value);
}

PointerRNA AnimVizOnionSkinning_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int AnimVizOnionSkinning_frame_after_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->ghost_ac);
}

void AnimVizOnionSkinning_frame_after_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->ghost_ac= CLAMPIS(value, 0, 30);
}

int AnimVizOnionSkinning_frame_before_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->ghost_bc);
}

void AnimVizOnionSkinning_frame_before_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->ghost_bc= CLAMPIS(value, 0, 30);
}

int AnimVizOnionSkinning_frame_end_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->ghost_ef);
}

void AnimVizOnionSkinning_frame_end_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_ghost_end_frame_set(ptr, value);
}

int AnimVizOnionSkinning_frame_step_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->ghost_step);
}

void AnimVizOnionSkinning_frame_step_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->ghost_step= CLAMPIS(value, 1, 20);
}

int AnimVizOnionSkinning_show_only_selected_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (((data->ghost_flag) & 1) != 0);
}

void AnimVizOnionSkinning_show_only_selected_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	if(value) data->ghost_flag |= 1;
	else data->ghost_flag &= ~1;
}

static PointerRNA AnimVizOnionSkinning_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_AnimVizOnionSkinning_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= AnimVizOnionSkinning_rna_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= AnimVizOnionSkinning_rna_properties_get(iter);
}

void AnimVizOnionSkinning_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AnimVizOnionSkinning_frame_start_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->ghost_sf);
}

void AnimVizOnionSkinning_frame_start_set(PointerRNA *ptr, int value)
{
	rna_AnimViz_ghost_start_frame_set(ptr, value);
}

int AnimVizOnionSkinning_type_get(PointerRNA *ptr)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	return (int)(data->ghost_type);
}

void AnimVizOnionSkinning_type_set(PointerRNA *ptr, int value)
{
	bAnimVizSettings *data= (bAnimVizSettings*)(ptr->data);
	data->ghost_type= value;
}

PointerRNA MotionPath_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int MotionPath_is_modified_get(PointerRNA *ptr)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void MotionPath_is_modified_set(PointerRNA *ptr, int value)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int MotionPath_frame_end_get(PointerRNA *ptr)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);
	return (int)(data->end_frame);
}

int MotionPath_length_get(PointerRNA *ptr)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);
	return (int)(data->length);
}

int MotionPath_points_length(PointerRNA *ptr)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);
	return (data->points == NULL)? 0: data->length;
}

static PointerRNA MotionPath_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MotionPathVert, rna_iterator_array_get(iter));
}

void MotionPath_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MotionPath_points;

	rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->length, 0, NULL);

	if(iter->valid)
		iter->ptr= MotionPath_points_get(iter);
}

void MotionPath_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= MotionPath_points_get(iter);
}

void MotionPath_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int MotionPath_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	MotionPath_points_begin(&iter, ptr);

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
		if(found) *r_ptr = MotionPath_points_get(&iter);
	}

	MotionPath_points_end(&iter);

	return found;
}

static PointerRNA MotionPath_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MotionPath_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MotionPath_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MotionPath_rna_properties_get(iter);
}

void MotionPath_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MotionPath_rna_properties_get(iter);
}

void MotionPath_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MotionPath_frame_start_get(PointerRNA *ptr)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);
	return (int)(data->start_frame);
}

int MotionPath_use_bone_head_get(PointerRNA *ptr)
{
	bMotionPath *data= (bMotionPath*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

PointerRNA MotionPathVert_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MotionPathVert_co_get(PointerRNA *ptr, float values[3])
{
	bMotionPathVert *data= (bMotionPathVert*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->co)[i]);
	}
}

void MotionPathVert_co_set(PointerRNA *ptr, const float values[3])
{
	bMotionPathVert *data= (bMotionPathVert*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->co)[i]= values[i];
	}
}

static PointerRNA MotionPathVert_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MotionPathVert_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MotionPathVert_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MotionPathVert_rna_properties_get(iter);
}

void MotionPathVert_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MotionPathVert_rna_properties_get(iter);
}

void MotionPathVert_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int MotionPathVert_select_get(PointerRNA *ptr)
{
	bMotionPathVert *data= (bMotionPathVert*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void MotionPathVert_select_set(PointerRNA *ptr, int value)
{
	bMotionPathVert *data= (bMotionPathVert*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}






/* Animation Visualisation */
PointerPropertyRNA rna_AnimViz_rna_type = {
	{(PropertyRNA*)&rna_AnimViz_motion_path, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_AnimViz_motion_path = {
	{(PropertyRNA*)&rna_AnimViz_onion_skin_frames, (PropertyRNA*)&rna_AnimViz_rna_type,
	-1, "motion_path", 262144, "Motion Paths",
	"Motion Path settings for visualisation",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_motion_path_get, NULL, NULL, NULL,&RNA_AnimVizMotionPaths
};

PointerPropertyRNA rna_AnimViz_onion_skin_frames = {
	{(PropertyRNA*)&rna_AnimViz_rna_properties, (PropertyRNA*)&rna_AnimViz_motion_path,
	-1, "onion_skin_frames", 262144, "Onion Skinning",
	"Onion Skinning (ghosting) settings for visualisation",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_onion_skin_frames_get, NULL, NULL, NULL,&RNA_AnimVizOnionSkinning
};

CollectionPropertyRNA rna_AnimViz_rna_properties = {
	{NULL, (PropertyRNA*)&rna_AnimViz_onion_skin_frames,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimViz_rna_properties_begin, AnimViz_rna_properties_next, AnimViz_rna_properties_end, AnimViz_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_AnimViz = {
	{(ContainerRNA *)&RNA_AnimVizMotionPaths, (ContainerRNA *)&RNA_AnimData,
	NULL,
	{(PropertyRNA*)&rna_AnimViz_rna_type, (PropertyRNA*)&rna_AnimViz_rna_properties}},
	"AnimViz"	, NULL,NULL
, 0, "Animation Visualisation", "Settings for the visualisation of motion",
	17,
	NULL, (PropertyRNA*)&rna_AnimViz_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path Settings */
PointerPropertyRNA rna_AnimVizMotionPaths_rna_type = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_frame_after, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_after = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_show_keyframe_action_all, (PropertyRNA*)&rna_AnimVizMotionPaths_rna_type,
	-1, "frame_after", 8195, "After Current",
	"Number of frames to show after the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_ac), 0, NULL},
	AnimVizMotionPaths_frame_after_get, AnimVizMotionPaths_frame_after_set, NULL, NULL, NULL,
	1, 150000, 1, 150000, 1, 0, NULL
};

BooleanPropertyRNA rna_AnimVizMotionPaths_show_keyframe_action_all = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_bake_location, (PropertyRNA*)&rna_AnimVizMotionPaths_frame_after,
	-1, "show_keyframe_action_all", 3, "All Action Keyframes",
	"For bone motion paths, search whole Action for keyframes instead of in group with matching name only (is slower)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_action_all_get, AnimVizMotionPaths_show_keyframe_action_all_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_AnimVizMotionPaths_bake_location_items[3] = {
	{2, "HEADS", 0, "Heads", "Calculate bone paths from heads"},
	{0, "TAILS", 0, "Tails", "Calculate bone paths from tails"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizMotionPaths_bake_location = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_frame_before, (PropertyRNA*)&rna_AnimVizMotionPaths_show_keyframe_action_all,
	-1, "bake_location", 3, "Bake Location",
	"When calculating Bone Paths, use Head or Tips",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_bake_location_get, AnimVizMotionPaths_bake_location_set, NULL, rna_AnimVizMotionPaths_bake_location_items, 2, 0
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_before = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_frame_end, (PropertyRNA*)&rna_AnimVizMotionPaths_bake_location,
	-1, "frame_before", 8195, "Before Current",
	"Number of frames to show before the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_bc), 0, NULL},
	AnimVizMotionPaths_frame_before_get, AnimVizMotionPaths_frame_before_set, NULL, NULL, NULL,
	1, 150000, 1, 150000, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_end = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_frame_step, (PropertyRNA*)&rna_AnimVizMotionPaths_frame_before,
	-1, "frame_end", 3, "End Frame",
	"End frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_frame_end_get, AnimVizMotionPaths_frame_end_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_step = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_show_keyframe_highlight, (PropertyRNA*)&rna_AnimVizMotionPaths_frame_end,
	-1, "frame_step", 8195, "Frame Step",
	"Number of frames between paths shown (not for \'On Keyframes\' Onion-skinning method)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, path_step), 1, NULL},
	AnimVizMotionPaths_frame_step_get, AnimVizMotionPaths_frame_step_set, NULL, NULL, NULL,
	1, 100, 1, 100, 1, 0, NULL
};

BooleanPropertyRNA rna_AnimVizMotionPaths_show_keyframe_highlight = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_type, (PropertyRNA*)&rna_AnimVizMotionPaths_frame_step,
	-1, "show_keyframe_highlight", 3, "Highlight Keyframes",
	"Emphasize position of keyframes on Motion Paths",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_highlight_get, AnimVizMotionPaths_show_keyframe_highlight_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_AnimVizMotionPaths_type_items[3] = {
	{1, "CURRENT_FRAME", 0, "Around Frame", "Display Paths of poses within a fixed number of frames around the current frame"},
	{0, "RANGE", 0, "In Range", "Display Paths of poses within specified range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizMotionPaths_type = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_rna_properties, (PropertyRNA*)&rna_AnimVizMotionPaths_show_keyframe_highlight,
	-1, "type", 3, "Paths Type",
	"Type of range to show for Motion Paths",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_type_get, AnimVizMotionPaths_type_set, NULL, rna_AnimVizMotionPaths_type_items, 2, 0
};

CollectionPropertyRNA rna_AnimVizMotionPaths_rna_properties = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_show_frame_numbers, (PropertyRNA*)&rna_AnimVizMotionPaths_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_rna_properties_begin, AnimVizMotionPaths_rna_properties_next, AnimVizMotionPaths_rna_properties_end, AnimVizMotionPaths_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_AnimVizMotionPaths_show_frame_numbers = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_show_keyframe_numbers, (PropertyRNA*)&rna_AnimVizMotionPaths_rna_properties,
	-1, "show_frame_numbers", 3, "Show Frame Numbers",
	"Show frame numbers on Motion Paths",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_frame_numbers_get, AnimVizMotionPaths_show_frame_numbers_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_AnimVizMotionPaths_show_keyframe_numbers = {
	{(PropertyRNA*)&rna_AnimVizMotionPaths_frame_start, (PropertyRNA*)&rna_AnimVizMotionPaths_show_frame_numbers,
	-1, "show_keyframe_numbers", 3, "Show Keyframe Numbers",
	"Show frame numbers of Keyframes on Motion Paths",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_show_keyframe_numbers_get, AnimVizMotionPaths_show_keyframe_numbers_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_AnimVizMotionPaths_frame_start = {
	{NULL, (PropertyRNA*)&rna_AnimVizMotionPaths_show_keyframe_numbers,
	-1, "frame_start", 3, "Start Frame",
	"Starting frame of range of paths to display/calculate (not for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizMotionPaths_frame_start_get, AnimVizMotionPaths_frame_start_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StructRNA RNA_AnimVizMotionPaths = {
	{(ContainerRNA *)&RNA_AnimVizOnionSkinning, (ContainerRNA *)&RNA_AnimViz,
	NULL,
	{(PropertyRNA*)&rna_AnimVizMotionPaths_rna_type, (PropertyRNA*)&rna_AnimVizMotionPaths_frame_start}},
	"AnimVizMotionPaths"	, NULL,NULL
, 0, "Motion Path Settings", "Motion Path settings for animation visualisation",
	17,
	NULL, (PropertyRNA*)&rna_AnimVizMotionPaths_rna_properties,
	NULL,
	&RNA_AnimViz,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Onion Skinning Settings */
PointerPropertyRNA rna_AnimVizOnionSkinning_rna_type = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_frame_after, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_after = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_frame_before, (PropertyRNA*)&rna_AnimVizOnionSkinning_rna_type,
	-1, "frame_after", 8195, "After Current",
	"Number of frames to show after the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_ac), 0, NULL},
	AnimVizOnionSkinning_frame_after_get, AnimVizOnionSkinning_frame_after_set, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_before = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_frame_end, (PropertyRNA*)&rna_AnimVizOnionSkinning_frame_after,
	-1, "frame_before", 8195, "Before Current",
	"Number of frames to show before the current frame (only for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_bc), 0, NULL},
	AnimVizOnionSkinning_frame_before_get, AnimVizOnionSkinning_frame_before_set, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_end = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_frame_step, (PropertyRNA*)&rna_AnimVizOnionSkinning_frame_before,
	-1, "frame_end", 3, "End Frame",
	"End frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_frame_end_get, AnimVizOnionSkinning_frame_end_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_step = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_show_only_selected, (PropertyRNA*)&rna_AnimVizOnionSkinning_frame_end,
	-1, "frame_step", 8195, "Frame Step",
	"Number of frames between ghosts shown (not for \'On Keyframes\' Onion-skinning method)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	offsetof(bAnimVizSettings, ghost_step), 1, NULL},
	AnimVizOnionSkinning_frame_step_get, AnimVizOnionSkinning_frame_step_set, NULL, NULL, NULL,
	1, 20, 1, 20, 1, 0, NULL
};

BooleanPropertyRNA rna_AnimVizOnionSkinning_show_only_selected = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_rna_properties, (PropertyRNA*)&rna_AnimVizOnionSkinning_frame_step,
	-1, "show_only_selected", 3, "On Selected Bones Only",
	"For Pose-Mode drawing, only draw ghosts for selected bones",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_show_only_selected_get, AnimVizOnionSkinning_show_only_selected_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_AnimVizOnionSkinning_rna_properties = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_frame_start, (PropertyRNA*)&rna_AnimVizOnionSkinning_show_only_selected,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_rna_properties_begin, AnimVizOnionSkinning_rna_properties_next, AnimVizOnionSkinning_rna_properties_end, AnimVizOnionSkinning_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_AnimVizOnionSkinning_frame_start = {
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_type, (PropertyRNA*)&rna_AnimVizOnionSkinning_rna_properties,
	-1, "frame_start", 3, "Start Frame",
	"Starting frame of range of Ghosts to display (not for \'Around Current Frame\' Onion-skinning method)",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_frame_start_get, AnimVizOnionSkinning_frame_start_set, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static EnumPropertyItem rna_AnimVizOnionSkinning_type_items[5] = {
	{0, "NONE", 0, "No Ghosts", "Do not show any ghosts"},
	{1, "CURRENT_FRAME", 0, "Around Current Frame", "Show ghosts from around the current frame"},
	{2, "RANGE", 0, "In Range", "Show ghosts for the specified frame range"},
	{3, "KEYS", 0, "On Keyframes", "Show ghosts on keyframes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_AnimVizOnionSkinning_type = {
	{NULL, (PropertyRNA*)&rna_AnimVizOnionSkinning_frame_start,
	-1, "type", 3, "Type",
	"Method used for determining what ghosts get drawn",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252248064, NULL, NULL,
	0, -1, NULL},
	AnimVizOnionSkinning_type_get, AnimVizOnionSkinning_type_set, NULL, rna_AnimVizOnionSkinning_type_items, 4, 0
};

StructRNA RNA_AnimVizOnionSkinning = {
	{(ContainerRNA *)&RNA_AnyType, (ContainerRNA *)&RNA_AnimVizMotionPaths,
	NULL,
	{(PropertyRNA*)&rna_AnimVizOnionSkinning_rna_type, (PropertyRNA*)&rna_AnimVizOnionSkinning_type}},
	"AnimVizOnionSkinning"	, NULL,NULL
, 0, "Onion Skinning Settings", "Onion Skinning settings for animation visualisation",
	17,
	NULL, (PropertyRNA*)&rna_AnimVizOnionSkinning_rna_properties,
	NULL,
	&RNA_AnimViz,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path */
PointerPropertyRNA rna_MotionPath_rna_type = {
	{(PropertyRNA*)&rna_MotionPath_is_modified, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_MotionPath_is_modified = {
	{(PropertyRNA*)&rna_MotionPath_frame_end, (PropertyRNA*)&rna_MotionPath_rna_type,
	-1, "is_modified", 3, "Edit Path",
	"Path is being edited",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_is_modified_get, MotionPath_is_modified_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_MotionPath_frame_end = {
	{(PropertyRNA*)&rna_MotionPath_length, (PropertyRNA*)&rna_MotionPath_is_modified,
	-1, "frame_end", 8194, "End Frame",
	"End frame of the stored range",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, end_frame), 0, NULL},
	MotionPath_frame_end_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_MotionPath_length = {
	{(PropertyRNA*)&rna_MotionPath_points, (PropertyRNA*)&rna_MotionPath_frame_end,
	-1, "length", 8194, "Length",
	"Number of frames cached",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, length), 0, NULL},
	MotionPath_length_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_MotionPath_points = {
	{(PropertyRNA*)&rna_MotionPath_rna_properties, (PropertyRNA*)&rna_MotionPath_length,
	-1, "points", 16384, "Motion Path Points",
	"Cached positions per frame",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_points_begin, MotionPath_points_next, MotionPath_points_end, MotionPath_points_get, MotionPath_points_length, MotionPath_points_lookup_int, NULL, &RNA_MotionPathVert
};

CollectionPropertyRNA rna_MotionPath_rna_properties = {
	{(PropertyRNA*)&rna_MotionPath_frame_start, (PropertyRNA*)&rna_MotionPath_points,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_rna_properties_begin, MotionPath_rna_properties_next, MotionPath_rna_properties_end, MotionPath_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_MotionPath_frame_start = {
	{(PropertyRNA*)&rna_MotionPath_use_bone_head, (PropertyRNA*)&rna_MotionPath_rna_properties,
	-1, "frame_start", 8194, "Start Frame",
	"Starting frame of the stored range",
	0,
	PROP_INT, PROP_TIME|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPath, start_frame), 0, NULL},
	MotionPath_frame_start_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_MotionPath_use_bone_head = {
	{NULL, (PropertyRNA*)&rna_MotionPath_frame_start,
	-1, "use_bone_head", 2, "Use Bone Heads",
	"For PoseBone paths, use the bone head location when calculating this path",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPath_use_bone_head_get, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPath = {
	{(ContainerRNA *)&RNA_MotionPathVert, (ContainerRNA *)&RNA_Modifier,
	NULL,
	{(PropertyRNA*)&rna_MotionPath_rna_type, (PropertyRNA*)&rna_MotionPath_use_bone_head}},
	"MotionPath"	, NULL,NULL
, 0, "Motion Path", "Cache of the worldspace positions of an element over a frame range",
	17,
	NULL, (PropertyRNA*)&rna_MotionPath_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Motion Path Cache Point */
PointerPropertyRNA rna_MotionPathVert_rna_type = {
	{(PropertyRNA*)&rna_MotionPathVert_co, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_MotionPathVert_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_MotionPathVert_co = {
	{(PropertyRNA*)&rna_MotionPathVert_rna_properties, (PropertyRNA*)&rna_MotionPathVert_rna_type,
	-1, "co", 8195, "Coordinates",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(bMotionPathVert, co), 4, NULL},
	NULL, NULL, MotionPathVert_co_get, MotionPathVert_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_MotionPathVert_co_default
};

CollectionPropertyRNA rna_MotionPathVert_rna_properties = {
	{(PropertyRNA*)&rna_MotionPathVert_select, (PropertyRNA*)&rna_MotionPathVert_co,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_rna_properties_begin, MotionPathVert_rna_properties_next, MotionPathVert_rna_properties_end, MotionPathVert_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_MotionPathVert_select = {
	{NULL, (PropertyRNA*)&rna_MotionPathVert_rna_properties,
	-1, "select", 3, "Select",
	"Path point is selected for editing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MotionPathVert_select_get, MotionPathVert_select_set, NULL, NULL, 0, NULL
};

StructRNA RNA_MotionPathVert = {
	{(ContainerRNA *)&RNA_MouseSensor, (ContainerRNA *)&RNA_MotionPath,
	NULL,
	{(PropertyRNA*)&rna_MotionPathVert_rna_type, (PropertyRNA*)&rna_MotionPathVert_select}},
	"MotionPathVert"	, NULL,NULL
, 0, "Motion Path Cache Point", "Cached location on path",
	17,
	NULL, (PropertyRNA*)&rna_MotionPathVert_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

