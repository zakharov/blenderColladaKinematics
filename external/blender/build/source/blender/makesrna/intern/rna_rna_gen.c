
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

#include "rna_rna.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_BlenderRNA_rna_type;
CollectionPropertyRNA rna_BlenderRNA_rna_properties;
CollectionPropertyRNA rna_BlenderRNA_structs;


extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern PointerPropertyRNA rna_Property_srna;
extern StringPropertyRNA rna_Property_description;
extern BooleanPropertyRNA rna_Property_is_enum_flag;
extern BooleanPropertyRNA rna_Property_is_hidden;
extern StringPropertyRNA rna_Property_identifier;
extern BooleanPropertyRNA rna_Property_is_never_none;
extern CollectionPropertyRNA rna_Property_rna_properties;
extern BooleanPropertyRNA rna_Property_is_readonly;
extern BooleanPropertyRNA rna_Property_is_runtime;
extern BooleanPropertyRNA rna_Property_is_registered;
extern BooleanPropertyRNA rna_Property_is_registered_optional;
extern BooleanPropertyRNA rna_Property_is_required;
extern BooleanPropertyRNA rna_Property_is_output;
extern EnumPropertyRNA rna_Property_subtype;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_unit;

IntPropertyRNA rna_BooleanProperty_array_length;
BooleanPropertyRNA rna_BooleanProperty_default;
BooleanPropertyRNA rna_BooleanProperty_default_array;


extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern PointerPropertyRNA rna_Property_srna;
extern StringPropertyRNA rna_Property_description;
extern BooleanPropertyRNA rna_Property_is_enum_flag;
extern BooleanPropertyRNA rna_Property_is_hidden;
extern StringPropertyRNA rna_Property_identifier;
extern BooleanPropertyRNA rna_Property_is_never_none;
extern CollectionPropertyRNA rna_Property_rna_properties;
extern BooleanPropertyRNA rna_Property_is_readonly;
extern BooleanPropertyRNA rna_Property_is_runtime;
extern BooleanPropertyRNA rna_Property_is_registered;
extern BooleanPropertyRNA rna_Property_is_registered_optional;
extern BooleanPropertyRNA rna_Property_is_required;
extern BooleanPropertyRNA rna_Property_is_output;
extern EnumPropertyRNA rna_Property_subtype;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_unit;

PointerPropertyRNA rna_CollectionProperty_fixed_type;


extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern PointerPropertyRNA rna_Property_srna;
extern StringPropertyRNA rna_Property_description;
extern BooleanPropertyRNA rna_Property_is_enum_flag;
extern BooleanPropertyRNA rna_Property_is_hidden;
extern StringPropertyRNA rna_Property_identifier;
extern BooleanPropertyRNA rna_Property_is_never_none;
extern CollectionPropertyRNA rna_Property_rna_properties;
extern BooleanPropertyRNA rna_Property_is_readonly;
extern BooleanPropertyRNA rna_Property_is_runtime;
extern BooleanPropertyRNA rna_Property_is_registered;
extern BooleanPropertyRNA rna_Property_is_registered_optional;
extern BooleanPropertyRNA rna_Property_is_required;
extern BooleanPropertyRNA rna_Property_is_output;
extern EnumPropertyRNA rna_Property_subtype;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_unit;

EnumPropertyRNA rna_EnumProperty_default;
EnumPropertyRNA rna_EnumProperty_default_flag;
CollectionPropertyRNA rna_EnumProperty_items;


PointerPropertyRNA rna_EnumPropertyItem_rna_type;
StringPropertyRNA rna_EnumPropertyItem_name;
StringPropertyRNA rna_EnumPropertyItem_description;
StringPropertyRNA rna_EnumPropertyItem_identifier;
CollectionPropertyRNA rna_EnumPropertyItem_rna_properties;
IntPropertyRNA rna_EnumPropertyItem_value;


extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern PointerPropertyRNA rna_Property_srna;
extern StringPropertyRNA rna_Property_description;
extern BooleanPropertyRNA rna_Property_is_enum_flag;
extern BooleanPropertyRNA rna_Property_is_hidden;
extern StringPropertyRNA rna_Property_identifier;
extern BooleanPropertyRNA rna_Property_is_never_none;
extern CollectionPropertyRNA rna_Property_rna_properties;
extern BooleanPropertyRNA rna_Property_is_readonly;
extern BooleanPropertyRNA rna_Property_is_runtime;
extern BooleanPropertyRNA rna_Property_is_registered;
extern BooleanPropertyRNA rna_Property_is_registered_optional;
extern BooleanPropertyRNA rna_Property_is_required;
extern BooleanPropertyRNA rna_Property_is_output;
extern EnumPropertyRNA rna_Property_subtype;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_unit;

IntPropertyRNA rna_FloatProperty_array_length;
FloatPropertyRNA rna_FloatProperty_default;
FloatPropertyRNA rna_FloatProperty_default_array;
FloatPropertyRNA rna_FloatProperty_hard_max;
FloatPropertyRNA rna_FloatProperty_hard_min;
IntPropertyRNA rna_FloatProperty_precision;
FloatPropertyRNA rna_FloatProperty_soft_max;
FloatPropertyRNA rna_FloatProperty_soft_min;
FloatPropertyRNA rna_FloatProperty_step;


PointerPropertyRNA rna_Function_rna_type;
StringPropertyRNA rna_Function_description;
StringPropertyRNA rna_Function_identifier;
BooleanPropertyRNA rna_Function_use_self;
CollectionPropertyRNA rna_Function_parameters;
CollectionPropertyRNA rna_Function_rna_properties;
BooleanPropertyRNA rna_Function_is_registered;
BooleanPropertyRNA rna_Function_is_registered_optional;


extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern PointerPropertyRNA rna_Property_srna;
extern StringPropertyRNA rna_Property_description;
extern BooleanPropertyRNA rna_Property_is_enum_flag;
extern BooleanPropertyRNA rna_Property_is_hidden;
extern StringPropertyRNA rna_Property_identifier;
extern BooleanPropertyRNA rna_Property_is_never_none;
extern CollectionPropertyRNA rna_Property_rna_properties;
extern BooleanPropertyRNA rna_Property_is_readonly;
extern BooleanPropertyRNA rna_Property_is_runtime;
extern BooleanPropertyRNA rna_Property_is_registered;
extern BooleanPropertyRNA rna_Property_is_registered_optional;
extern BooleanPropertyRNA rna_Property_is_required;
extern BooleanPropertyRNA rna_Property_is_output;
extern EnumPropertyRNA rna_Property_subtype;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_unit;

IntPropertyRNA rna_IntProperty_array_length;
IntPropertyRNA rna_IntProperty_default;
IntPropertyRNA rna_IntProperty_default_array;
IntPropertyRNA rna_IntProperty_hard_max;
IntPropertyRNA rna_IntProperty_hard_min;
IntPropertyRNA rna_IntProperty_soft_max;
IntPropertyRNA rna_IntProperty_soft_min;
IntPropertyRNA rna_IntProperty_step;


extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern PointerPropertyRNA rna_Property_srna;
extern StringPropertyRNA rna_Property_description;
extern BooleanPropertyRNA rna_Property_is_enum_flag;
extern BooleanPropertyRNA rna_Property_is_hidden;
extern StringPropertyRNA rna_Property_identifier;
extern BooleanPropertyRNA rna_Property_is_never_none;
extern CollectionPropertyRNA rna_Property_rna_properties;
extern BooleanPropertyRNA rna_Property_is_readonly;
extern BooleanPropertyRNA rna_Property_is_runtime;
extern BooleanPropertyRNA rna_Property_is_registered;
extern BooleanPropertyRNA rna_Property_is_registered_optional;
extern BooleanPropertyRNA rna_Property_is_required;
extern BooleanPropertyRNA rna_Property_is_output;
extern EnumPropertyRNA rna_Property_subtype;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_unit;

PointerPropertyRNA rna_PointerProperty_fixed_type;


PointerPropertyRNA rna_Property_rna_type;
StringPropertyRNA rna_Property_name;
PointerPropertyRNA rna_Property_srna;
StringPropertyRNA rna_Property_description;
BooleanPropertyRNA rna_Property_is_enum_flag;
BooleanPropertyRNA rna_Property_is_hidden;
StringPropertyRNA rna_Property_identifier;
BooleanPropertyRNA rna_Property_is_never_none;
CollectionPropertyRNA rna_Property_rna_properties;
BooleanPropertyRNA rna_Property_is_readonly;
BooleanPropertyRNA rna_Property_is_runtime;
BooleanPropertyRNA rna_Property_is_registered;
BooleanPropertyRNA rna_Property_is_registered_optional;
BooleanPropertyRNA rna_Property_is_required;
BooleanPropertyRNA rna_Property_is_output;
EnumPropertyRNA rna_Property_subtype;
EnumPropertyRNA rna_Property_type;
EnumPropertyRNA rna_Property_unit;


extern PointerPropertyRNA rna_Property_rna_type;
extern StringPropertyRNA rna_Property_name;
extern PointerPropertyRNA rna_Property_srna;
extern StringPropertyRNA rna_Property_description;
extern BooleanPropertyRNA rna_Property_is_enum_flag;
extern BooleanPropertyRNA rna_Property_is_hidden;
extern StringPropertyRNA rna_Property_identifier;
extern BooleanPropertyRNA rna_Property_is_never_none;
extern CollectionPropertyRNA rna_Property_rna_properties;
extern BooleanPropertyRNA rna_Property_is_readonly;
extern BooleanPropertyRNA rna_Property_is_runtime;
extern BooleanPropertyRNA rna_Property_is_registered;
extern BooleanPropertyRNA rna_Property_is_registered_optional;
extern BooleanPropertyRNA rna_Property_is_required;
extern BooleanPropertyRNA rna_Property_is_output;
extern EnumPropertyRNA rna_Property_subtype;
extern EnumPropertyRNA rna_Property_type;
extern EnumPropertyRNA rna_Property_unit;

StringPropertyRNA rna_StringProperty_default;
IntPropertyRNA rna_StringProperty_length_max;


PointerPropertyRNA rna_Struct_rna_type;
StringPropertyRNA rna_Struct_name;
PointerPropertyRNA rna_Struct_base;
StringPropertyRNA rna_Struct_description;
CollectionPropertyRNA rna_Struct_functions;
StringPropertyRNA rna_Struct_identifier;
PointerPropertyRNA rna_Struct_name_property;
PointerPropertyRNA rna_Struct_nested;
CollectionPropertyRNA rna_Struct_rna_properties;
CollectionPropertyRNA rna_Struct_properties;

PointerRNA BlenderRNA_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlenderRNA_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlenderRNA_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlenderRNA_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlenderRNA_rna_properties_get(iter);
}

void BlenderRNA_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlenderRNA_rna_properties_get(iter);
}

void BlenderRNA_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlenderRNA_structs_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Struct, rna_iterator_listbase_get(iter));
}

void BlenderRNA_structs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlenderRNA_structs;

	rna_BlenderRNA_structs_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlenderRNA_structs_get(iter);
}

void BlenderRNA_structs_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlenderRNA_structs_get(iter);
}

void BlenderRNA_structs_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlenderRNA_structs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{

	return rna_BlenderRNA_structs_lookup_int(ptr, index, r_ptr);
}

int BooleanProperty_array_length_get(PointerRNA *ptr)
{
	return rna_Property_array_length_get(ptr);
}

int BooleanProperty_default_get(PointerRNA *ptr)
{
	return rna_BoolProperty_default_get(ptr);
}

void BooleanProperty_default_array_get(PointerRNA *ptr, int values[])
{
	rna_BoolProperty_default_array_get(ptr, values);
}

PointerRNA CollectionProperty_fixed_type_get(PointerRNA *ptr)
{
	return rna_CollectionProperty_fixed_type_get(ptr);
}

int EnumProperty_default_get(PointerRNA *ptr)
{
	return rna_EnumProperty_default_get(ptr);
}

int EnumProperty_default_flag_get(PointerRNA *ptr)
{
	return rna_EnumProperty_default_get(ptr);
}

static PointerRNA EnumProperty_items_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_EnumPropertyItem, rna_iterator_array_get(iter));
}

void EnumProperty_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_EnumProperty_items;

	rna_EnumProperty_items_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= EnumProperty_items_get(iter);
}

void EnumProperty_items_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= EnumProperty_items_get(iter);
}

void EnumProperty_items_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

PointerRNA EnumPropertyItem_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void EnumPropertyItem_name_get(PointerRNA *ptr, char *value)
{
	rna_EnumPropertyItem_name_get(ptr, value);
}

int EnumPropertyItem_name_length(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_name_length(ptr);
}

void EnumPropertyItem_description_get(PointerRNA *ptr, char *value)
{
	rna_EnumPropertyItem_description_get(ptr, value);
}

int EnumPropertyItem_description_length(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_description_length(ptr);
}

void EnumPropertyItem_identifier_get(PointerRNA *ptr, char *value)
{
	rna_EnumPropertyItem_identifier_get(ptr, value);
}

int EnumPropertyItem_identifier_length(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_identifier_length(ptr);
}

static PointerRNA EnumPropertyItem_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void EnumPropertyItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_EnumPropertyItem_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= EnumPropertyItem_rna_properties_get(iter);
}

void EnumPropertyItem_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= EnumPropertyItem_rna_properties_get(iter);
}

void EnumPropertyItem_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int EnumPropertyItem_value_get(PointerRNA *ptr)
{
	return rna_EnumPropertyItem_value_get(ptr);
}

int FloatProperty_array_length_get(PointerRNA *ptr)
{
	return rna_Property_array_length_get(ptr);
}

float FloatProperty_default_get(PointerRNA *ptr)
{
	return rna_FloatProperty_default_get(ptr);
}

void FloatProperty_default_array_get(PointerRNA *ptr, float values[])
{
	rna_FloatProperty_default_array_get(ptr, values);
}

float FloatProperty_hard_max_get(PointerRNA *ptr)
{
	return rna_FloatProperty_hard_max_get(ptr);
}

float FloatProperty_hard_min_get(PointerRNA *ptr)
{
	return rna_FloatProperty_hard_min_get(ptr);
}

int FloatProperty_precision_get(PointerRNA *ptr)
{
	return rna_FloatProperty_precision_get(ptr);
}

float FloatProperty_soft_max_get(PointerRNA *ptr)
{
	return rna_FloatProperty_soft_max_get(ptr);
}

float FloatProperty_soft_min_get(PointerRNA *ptr)
{
	return rna_FloatProperty_soft_min_get(ptr);
}

float FloatProperty_step_get(PointerRNA *ptr)
{
	return rna_FloatProperty_step_get(ptr);
}

PointerRNA Function_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Function_description_get(PointerRNA *ptr, char *value)
{
	rna_Function_description_get(ptr, value);
}

int Function_description_length(PointerRNA *ptr)
{
	return rna_Function_description_length(ptr);
}

void Function_identifier_get(PointerRNA *ptr, char *value)
{
	rna_Function_identifier_get(ptr, value);
}

int Function_identifier_length(PointerRNA *ptr)
{
	return rna_Function_identifier_length(ptr);
}

int Function_use_self_get(PointerRNA *ptr)
{
	return rna_Function_no_self_get(ptr);
}

static PointerRNA Function_parameters_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Property, rna_iterator_listbase_get(iter));
}

void Function_parameters_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Function_parameters;

	rna_Function_parameters_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Function_parameters_get(iter);
}

void Function_parameters_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Function_parameters_get(iter);
}

void Function_parameters_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA Function_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Function_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Function_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Function_rna_properties_get(iter);
}

void Function_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Function_rna_properties_get(iter);
}

void Function_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Function_is_registered_get(PointerRNA *ptr)
{
	return rna_Function_registered_get(ptr);
}

int Function_is_registered_optional_get(PointerRNA *ptr)
{
	return rna_Function_registered_optional_get(ptr);
}

int IntProperty_array_length_get(PointerRNA *ptr)
{
	return rna_Property_array_length_get(ptr);
}

int IntProperty_default_get(PointerRNA *ptr)
{
	return rna_IntProperty_default_get(ptr);
}

void IntProperty_default_array_get(PointerRNA *ptr, int values[])
{
	rna_IntProperty_default_array_get(ptr, values);
}

int IntProperty_hard_max_get(PointerRNA *ptr)
{
	return rna_IntProperty_hard_max_get(ptr);
}

int IntProperty_hard_min_get(PointerRNA *ptr)
{
	return rna_IntProperty_hard_min_get(ptr);
}

int IntProperty_soft_max_get(PointerRNA *ptr)
{
	return rna_IntProperty_soft_max_get(ptr);
}

int IntProperty_soft_min_get(PointerRNA *ptr)
{
	return rna_IntProperty_soft_min_get(ptr);
}

int IntProperty_step_get(PointerRNA *ptr)
{
	return rna_IntProperty_step_get(ptr);
}

PointerRNA PointerProperty_fixed_type_get(PointerRNA *ptr)
{
	return rna_PointerProperty_fixed_type_get(ptr);
}

PointerRNA Property_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Property_name_get(PointerRNA *ptr, char *value)
{
	rna_Property_name_get(ptr, value);
}

int Property_name_length(PointerRNA *ptr)
{
	return rna_Property_name_length(ptr);
}

PointerRNA Property_srna_get(PointerRNA *ptr)
{
	return rna_Property_srna_get(ptr);
}

void Property_description_get(PointerRNA *ptr, char *value)
{
	rna_Property_description_get(ptr, value);
}

int Property_description_length(PointerRNA *ptr)
{
	return rna_Property_description_length(ptr);
}

int Property_is_enum_flag_get(PointerRNA *ptr)
{
	return rna_Property_is_enum_flag_get(ptr);
}

int Property_is_hidden_get(PointerRNA *ptr)
{
	return rna_Property_is_hidden_get(ptr);
}

void Property_identifier_get(PointerRNA *ptr, char *value)
{
	rna_Property_identifier_get(ptr, value);
}

int Property_identifier_length(PointerRNA *ptr)
{
	return rna_Property_identifier_length(ptr);
}

int Property_is_never_none_get(PointerRNA *ptr)
{
	return rna_Property_is_never_none_get(ptr);
}

static PointerRNA Property_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Property_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Property_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Property_rna_properties_get(iter);
}

void Property_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Property_rna_properties_get(iter);
}

void Property_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Property_is_readonly_get(PointerRNA *ptr)
{
	return rna_Property_readonly_get(ptr);
}

int Property_is_runtime_get(PointerRNA *ptr)
{
	return rna_Property_runtime_get(ptr);
}

int Property_is_registered_get(PointerRNA *ptr)
{
	return rna_Property_registered_get(ptr);
}

int Property_is_registered_optional_get(PointerRNA *ptr)
{
	return rna_Property_registered_optional_get(ptr);
}

int Property_is_required_get(PointerRNA *ptr)
{
	return rna_Property_is_required_get(ptr);
}

int Property_is_output_get(PointerRNA *ptr)
{
	return rna_Property_use_output_get(ptr);
}

int Property_subtype_get(PointerRNA *ptr)
{
	return rna_Property_subtype_get(ptr);
}

int Property_type_get(PointerRNA *ptr)
{
	return rna_Property_type_get(ptr);
}

int Property_unit_get(PointerRNA *ptr)
{
	return rna_Property_unit_get(ptr);
}

void StringProperty_default_get(PointerRNA *ptr, char *value)
{
	rna_StringProperty_default_get(ptr, value);
}

int StringProperty_default_length(PointerRNA *ptr)
{
	return rna_StringProperty_default_length(ptr);
}

int StringProperty_length_max_get(PointerRNA *ptr)
{
	return rna_StringProperty_max_length_get(ptr);
}

PointerRNA Struct_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Struct_name_get(PointerRNA *ptr, char *value)
{
	rna_Struct_name_get(ptr, value);
}

int Struct_name_length(PointerRNA *ptr)
{
	return rna_Struct_name_length(ptr);
}

PointerRNA Struct_base_get(PointerRNA *ptr)
{
	return rna_Struct_base_get(ptr);
}

void Struct_description_get(PointerRNA *ptr, char *value)
{
	rna_Struct_description_get(ptr, value);
}

int Struct_description_length(PointerRNA *ptr)
{
	return rna_Struct_description_length(ptr);
}

static PointerRNA Struct_functions_get(CollectionPropertyIterator *iter)
{
	return rna_Struct_functions_get(iter);
}

void Struct_functions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Struct_functions;

	rna_Struct_functions_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Struct_functions_get(iter);
}

void Struct_functions_next(CollectionPropertyIterator *iter)
{
	rna_Struct_functions_next(iter);

	if(iter->valid)
		iter->ptr= Struct_functions_get(iter);
}

void Struct_functions_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void Struct_identifier_get(PointerRNA *ptr, char *value)
{
	rna_Struct_identifier_get(ptr, value);
}

int Struct_identifier_length(PointerRNA *ptr)
{
	return rna_Struct_identifier_length(ptr);
}

PointerRNA Struct_name_property_get(PointerRNA *ptr)
{
	return rna_Struct_name_property_get(ptr);
}

PointerRNA Struct_nested_get(PointerRNA *ptr)
{
	return rna_Struct_nested_get(ptr);
}

static PointerRNA Struct_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Struct_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Struct_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Struct_rna_properties_get(iter);
}

void Struct_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Struct_rna_properties_get(iter);
}

void Struct_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA Struct_properties_get(CollectionPropertyIterator *iter)
{
	return rna_Struct_properties_get(iter);
}

void Struct_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Struct_properties;

	rna_Struct_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Struct_properties_get(iter);
}

void Struct_properties_next(CollectionPropertyIterator *iter)
{
	rna_Struct_properties_next(iter);

	if(iter->valid)
		iter->ptr= Struct_properties_get(iter);
}

void Struct_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}













/* Blender RNA */
PointerPropertyRNA rna_BlenderRNA_rna_type = {
	{(PropertyRNA*)&rna_BlenderRNA_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlenderRNA_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlenderRNA_rna_properties = {
	{(PropertyRNA*)&rna_BlenderRNA_structs, (PropertyRNA*)&rna_BlenderRNA_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlenderRNA_rna_properties_begin, BlenderRNA_rna_properties_next, BlenderRNA_rna_properties_end, BlenderRNA_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_BlenderRNA_structs = {
	{NULL, (PropertyRNA*)&rna_BlenderRNA_rna_properties,
	-1, "structs", 0, "Structs",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlenderRNA_structs_begin, BlenderRNA_structs_next, BlenderRNA_structs_end, BlenderRNA_structs_get, rna_BlenderRNA_structs_length, BlenderRNA_structs_lookup_int, rna_BlenderRNA_structs_lookup_string, &RNA_Struct
};

StructRNA RNA_BlenderRNA = {
	{(ContainerRNA *)&RNA_BoidRule, (ContainerRNA *)&RNA_BlendTexture,
	NULL,
	{(PropertyRNA*)&rna_BlenderRNA_rna_type, (PropertyRNA*)&rna_BlenderRNA_structs}},
	"BlenderRNA"	, NULL,NULL
, 0, "Blender RNA", "Blender RNA structure definitions",
	206,
	NULL, (PropertyRNA*)&rna_BlenderRNA_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Boolean Definition */
IntPropertyRNA rna_BooleanProperty_array_length = {
	{(PropertyRNA*)&rna_BooleanProperty_default, NULL,
	-1, "array_length", 2, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BooleanProperty_array_length_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_BooleanProperty_default = {
	{(PropertyRNA*)&rna_BooleanProperty_default_array, (PropertyRNA*)&rna_BooleanProperty_array_length,
	-1, "default", 2, "Default",
	"Default value for this number",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BooleanProperty_default_get, NULL, NULL, NULL, 0, NULL
};

static int rna_BooleanProperty_default_array_default[3] = {
	0,
	0,
	0
};

BooleanPropertyRNA rna_BooleanProperty_default_array = {
	{NULL, (PropertyRNA*)&rna_BooleanProperty_default,
	-1, "default_array", 131074, "Default Array",
	"Default value for this array",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, BooleanProperty_default_array_get, NULL, 0, rna_BooleanProperty_default_array_default
};

StructRNA RNA_BooleanProperty = {
	{(ContainerRNA *)&RNA_Brush, (ContainerRNA *)&RNA_BooleanModifier,
	NULL,
	{(PropertyRNA*)&rna_BooleanProperty_array_length, (PropertyRNA*)&rna_BooleanProperty_default_array}},
	"BooleanProperty"	, NULL,NULL
, 0, "Boolean Definition", "RNA boolean property definition",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Collection Definition */
PointerPropertyRNA rna_CollectionProperty_fixed_type = {
	{NULL, NULL,
	-1, "fixed_type", 0, "Pointer Type",
	"Fixed pointer type, empty if variable type",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CollectionProperty_fixed_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_CollectionProperty = {
	{(ContainerRNA *)&RNA_CollisionModifier, (ContainerRNA *)&RNA_CloudsTexture,
	NULL,
	{(PropertyRNA*)&rna_CollectionProperty_fixed_type, (PropertyRNA*)&rna_CollectionProperty_fixed_type}},
	"CollectionProperty"	, NULL,NULL
, 0, "Collection Definition", "RNA collection property to define lists, arrays and mappings",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Enum Definition */
static EnumPropertyItem rna_EnumProperty_default_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnumProperty_default = {
	{(PropertyRNA*)&rna_EnumProperty_default_flag, NULL,
	-1, "default", 2, "Default",
	"Default value for this enum",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumProperty_default_get, NULL, rna_EnumProperty_default_itemf, rna_EnumProperty_default_items, 1, 0
};

static EnumPropertyItem rna_EnumProperty_default_flag_items[2] = {
	{0, "DUMMY", 0, "Dummy", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_EnumProperty_default_flag = {
	{(PropertyRNA*)&rna_EnumProperty_items, (PropertyRNA*)&rna_EnumProperty_default,
	-1, "default_flag", 2097154, "Default",
	"Default value for this enum",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumProperty_default_flag_get, NULL, rna_EnumProperty_default_itemf, rna_EnumProperty_default_flag_items, 1, 0
};

CollectionPropertyRNA rna_EnumProperty_items = {
	{NULL, (PropertyRNA*)&rna_EnumProperty_default_flag,
	-1, "items", 16384, "Items",
	"Possible values for the property",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumProperty_items_begin, EnumProperty_items_next, EnumProperty_items_end, EnumProperty_items_get, NULL, NULL, NULL, &RNA_EnumPropertyItem
};

StructRNA RNA_EnumProperty = {
	{(ContainerRNA *)&RNA_EnumPropertyItem, (ContainerRNA *)&RNA_EffectorWeights,
	NULL,
	{(PropertyRNA*)&rna_EnumProperty_default, (PropertyRNA*)&rna_EnumProperty_items}},
	"EnumProperty"	, NULL,NULL
, 0, "Enum Definition", "RNA enumeration property definition, to choose from a number of predefined options",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Enum Item Definition */
PointerPropertyRNA rna_EnumPropertyItem_rna_type = {
	{(PropertyRNA*)&rna_EnumPropertyItem_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_EnumPropertyItem_name = {
	{(PropertyRNA*)&rna_EnumPropertyItem_description, (PropertyRNA*)&rna_EnumPropertyItem_rna_type,
	-1, "name", 0, "Name",
	"Human readable name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_name_get, EnumPropertyItem_name_length, NULL, 0, ""
};

StringPropertyRNA rna_EnumPropertyItem_description = {
	{(PropertyRNA*)&rna_EnumPropertyItem_identifier, (PropertyRNA*)&rna_EnumPropertyItem_name,
	-1, "description", 0, "Description",
	"Description of the item\'s purpose",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_description_get, EnumPropertyItem_description_length, NULL, 0, ""
};

StringPropertyRNA rna_EnumPropertyItem_identifier = {
	{(PropertyRNA*)&rna_EnumPropertyItem_rna_properties, (PropertyRNA*)&rna_EnumPropertyItem_description,
	-1, "identifier", 0, "Identifier",
	"Unique name used in the code and scripting",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_identifier_get, EnumPropertyItem_identifier_length, NULL, 0, ""
};

CollectionPropertyRNA rna_EnumPropertyItem_rna_properties = {
	{(PropertyRNA*)&rna_EnumPropertyItem_value, (PropertyRNA*)&rna_EnumPropertyItem_identifier,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_rna_properties_begin, EnumPropertyItem_rna_properties_next, EnumPropertyItem_rna_properties_end, EnumPropertyItem_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_EnumPropertyItem_value = {
	{NULL, (PropertyRNA*)&rna_EnumPropertyItem_rna_properties,
	-1, "value", 2, "Value",
	"Value of the item",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	EnumPropertyItem_value_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_EnumPropertyItem = {
	{(ContainerRNA *)&RNA_EnvironmentMap, (ContainerRNA *)&RNA_EnumProperty,
	NULL,
	{(PropertyRNA*)&rna_EnumPropertyItem_rna_type, (PropertyRNA*)&rna_EnumPropertyItem_value}},
	"EnumPropertyItem"	, NULL,NULL
, 0, "Enum Item Definition", "Definition of a choice in an RNA enum property",
	206,
	(PropertyRNA*)&rna_EnumPropertyItem_identifier, (PropertyRNA*)&rna_EnumPropertyItem_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Float Definition */
IntPropertyRNA rna_FloatProperty_array_length = {
	{(PropertyRNA*)&rna_FloatProperty_default, NULL,
	-1, "array_length", 2, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_array_length_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_FloatProperty_default = {
	{(PropertyRNA*)&rna_FloatProperty_default_array, (PropertyRNA*)&rna_FloatProperty_array_length,
	-1, "default", 2, "Default",
	"Default value for this number",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_default_get, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_FloatProperty_default_array_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_FloatProperty_default_array = {
	{(PropertyRNA*)&rna_FloatProperty_hard_max, (PropertyRNA*)&rna_FloatProperty_default,
	-1, "default_array", 131074, "Default Array",
	"Default value for this array",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, FloatProperty_default_array_get, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_FloatProperty_default_array_default
};

FloatPropertyRNA rna_FloatProperty_hard_max = {
	{(PropertyRNA*)&rna_FloatProperty_hard_min, (PropertyRNA*)&rna_FloatProperty_default_array,
	-1, "hard_max", 2, "Hard Maximum",
	"Maximum value used by buttons",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_hard_max_get, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FloatProperty_hard_min = {
	{(PropertyRNA*)&rna_FloatProperty_precision, (PropertyRNA*)&rna_FloatProperty_hard_max,
	-1, "hard_min", 2, "Hard Minimum",
	"Minimum value used by buttons",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_hard_min_get, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_FloatProperty_precision = {
	{(PropertyRNA*)&rna_FloatProperty_soft_max, (PropertyRNA*)&rna_FloatProperty_hard_min,
	-1, "precision", 2, "Precision",
	"Number of digits after the dot used by buttons",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_precision_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_FloatProperty_soft_max = {
	{(PropertyRNA*)&rna_FloatProperty_soft_min, (PropertyRNA*)&rna_FloatProperty_precision,
	-1, "soft_max", 2, "Soft Maximum",
	"Maximum value used by buttons",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_soft_max_get, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FloatProperty_soft_min = {
	{(PropertyRNA*)&rna_FloatProperty_step, (PropertyRNA*)&rna_FloatProperty_soft_max,
	-1, "soft_min", 2, "Soft Minimum",
	"Minimum value used by buttons",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_soft_min_get, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_FloatProperty_step = {
	{NULL, (PropertyRNA*)&rna_FloatProperty_soft_min,
	-1, "step", 2, "Step",
	"Step size used by number buttons, for floats 1/100th of the step size",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	FloatProperty_step_get, NULL, NULL, NULL, NULL, 0.0f, 10000.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_FloatProperty = {
	{(ContainerRNA *)&RNA_FloorConstraint, (ContainerRNA *)&RNA_Filter2DActuator,
	NULL,
	{(PropertyRNA*)&rna_FloatProperty_array_length, (PropertyRNA*)&rna_FloatProperty_step}},
	"FloatProperty"	, NULL,NULL
, 0, "Float Definition", "RNA floating pointer number property definition",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Function Definition */
PointerPropertyRNA rna_Function_rna_type = {
	{(PropertyRNA*)&rna_Function_description, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Function_description = {
	{(PropertyRNA*)&rna_Function_identifier, (PropertyRNA*)&rna_Function_rna_type,
	-1, "description", 0, "Description",
	"Description of the Function\'s purpose",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_description_get, Function_description_length, NULL, 0, ""
};

StringPropertyRNA rna_Function_identifier = {
	{(PropertyRNA*)&rna_Function_use_self, (PropertyRNA*)&rna_Function_description,
	-1, "identifier", 0, "Identifier",
	"Unique name used in the code and scripting",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_identifier_get, Function_identifier_length, NULL, 0, ""
};

BooleanPropertyRNA rna_Function_use_self = {
	{(PropertyRNA*)&rna_Function_parameters, (PropertyRNA*)&rna_Function_identifier,
	-1, "use_self", 2, "No Self",
	"Function does not pass its self as an argument (becomes a class method in python)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_use_self_get, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Function_parameters = {
	{(PropertyRNA*)&rna_Function_rna_properties, (PropertyRNA*)&rna_Function_use_self,
	-1, "parameters", 0, "Parameters",
	"Parameters for the function",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_parameters_begin, Function_parameters_next, Function_parameters_end, Function_parameters_get, NULL, NULL, NULL, &RNA_Property
};

CollectionPropertyRNA rna_Function_rna_properties = {
	{(PropertyRNA*)&rna_Function_is_registered, (PropertyRNA*)&rna_Function_parameters,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_rna_properties_begin, Function_rna_properties_next, Function_rna_properties_end, Function_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Function_is_registered = {
	{(PropertyRNA*)&rna_Function_is_registered_optional, (PropertyRNA*)&rna_Function_rna_properties,
	-1, "is_registered", 2, "Registered",
	"Function is registered as callback as part of type registration",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_is_registered_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Function_is_registered_optional = {
	{NULL, (PropertyRNA*)&rna_Function_is_registered,
	-1, "is_registered_optional", 2, "Registered Optionally",
	"Function is optionally registered as callback part of type registration",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Function_is_registered_optional_get, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_Function = {
	{(ContainerRNA *)&RNA_GPencilFrame, (ContainerRNA *)&RNA_FollowPathConstraint,
	NULL,
	{(PropertyRNA*)&rna_Function_rna_type, (PropertyRNA*)&rna_Function_is_registered_optional}},
	"Function"	, NULL,NULL
, 0, "Function Definition", "RNA function definition",
	206,
	(PropertyRNA*)&rna_Function_identifier, (PropertyRNA*)&rna_Function_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Int Definition */
IntPropertyRNA rna_IntProperty_array_length = {
	{(PropertyRNA*)&rna_IntProperty_default, NULL,
	-1, "array_length", 2, "Array Length",
	"Maximum length of the array, 0 means unlimited",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_array_length_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_default = {
	{(PropertyRNA*)&rna_IntProperty_default_array, (PropertyRNA*)&rna_IntProperty_array_length,
	-1, "default", 2, "Default",
	"Default value for this number",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_default_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

static int rna_IntProperty_default_array_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_IntProperty_default_array = {
	{(PropertyRNA*)&rna_IntProperty_hard_max, (PropertyRNA*)&rna_IntProperty_default,
	-1, "default_array", 131074, "Default Array",
	"Default value for this array",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, rna_NumberProperty_default_array_get_length, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, IntProperty_default_array_get, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, rna_IntProperty_default_array_default
};

IntPropertyRNA rna_IntProperty_hard_max = {
	{(PropertyRNA*)&rna_IntProperty_hard_min, (PropertyRNA*)&rna_IntProperty_default_array,
	-1, "hard_max", 2, "Hard Maximum",
	"Maximum value used by buttons",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_hard_max_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_hard_min = {
	{(PropertyRNA*)&rna_IntProperty_soft_max, (PropertyRNA*)&rna_IntProperty_hard_max,
	-1, "hard_min", 2, "Hard Minimum",
	"Minimum value used by buttons",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_hard_min_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_soft_max = {
	{(PropertyRNA*)&rna_IntProperty_soft_min, (PropertyRNA*)&rna_IntProperty_hard_min,
	-1, "soft_max", 2, "Soft Maximum",
	"Maximum value used by buttons",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_soft_max_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_soft_min = {
	{(PropertyRNA*)&rna_IntProperty_step, (PropertyRNA*)&rna_IntProperty_soft_max,
	-1, "soft_min", 2, "Soft Minimum",
	"Minimum value used by buttons",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_soft_min_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_IntProperty_step = {
	{NULL, (PropertyRNA*)&rna_IntProperty_soft_min,
	-1, "step", 2, "Step",
	"Step size used by number buttons, for floats 1/100th of the step size",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	IntProperty_step_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_IntProperty = {
	{(ContainerRNA *)&RNA_Itasc, (ContainerRNA *)&RNA_InflowFluidSettings,
	NULL,
	{(PropertyRNA*)&rna_IntProperty_array_length, (PropertyRNA*)&rna_IntProperty_step}},
	"IntProperty"	, NULL,NULL
, 0, "Int Definition", "RNA integer number property definition",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Pointer Definition */
PointerPropertyRNA rna_PointerProperty_fixed_type = {
	{NULL, NULL,
	-1, "fixed_type", 0, "Pointer Type",
	"Fixed pointer type, empty if variable type",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PointerProperty_fixed_type_get, NULL, NULL, NULL,&RNA_Struct
};

StructRNA RNA_PointerProperty = {
	{(ContainerRNA *)&RNA_Pose, (ContainerRNA *)&RNA_PointLamp,
	NULL,
	{(PropertyRNA*)&rna_PointerProperty_fixed_type, (PropertyRNA*)&rna_PointerProperty_fixed_type}},
	"PointerProperty"	, NULL,NULL
, 0, "Pointer Definition", "RNA pointer property to point to another RNA struct",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Property Definition */
PointerPropertyRNA rna_Property_rna_type = {
	{(PropertyRNA*)&rna_Property_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Property_name = {
	{(PropertyRNA*)&rna_Property_srna, (PropertyRNA*)&rna_Property_rna_type,
	-1, "name", 0, "Name",
	"Human readable name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_name_get, Property_name_length, NULL, 0, ""
};

PointerPropertyRNA rna_Property_srna = {
	{(PropertyRNA*)&rna_Property_description, (PropertyRNA*)&rna_Property_name,
	-1, "srna", 0, "Base",
	"Struct definition used for properties assigned to this item",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_srna_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Property_description = {
	{(PropertyRNA*)&rna_Property_is_enum_flag, (PropertyRNA*)&rna_Property_srna,
	-1, "description", 0, "Description",
	"Description of the property for tooltips",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_description_get, Property_description_length, NULL, 0, ""
};

BooleanPropertyRNA rna_Property_is_enum_flag = {
	{(PropertyRNA*)&rna_Property_is_hidden, (PropertyRNA*)&rna_Property_description,
	-1, "is_enum_flag", 2, "Enum Flag",
	"True when multiple enums ",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_enum_flag_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Property_is_hidden = {
	{(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_is_enum_flag,
	-1, "is_hidden", 2, "Hidden",
	"True when the property is hidden",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_hidden_get, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_Property_identifier = {
	{(PropertyRNA*)&rna_Property_is_never_none, (PropertyRNA*)&rna_Property_is_hidden,
	-1, "identifier", 0, "Identifier",
	"Unique name used in the code and scripting",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_identifier_get, Property_identifier_length, NULL, 0, ""
};

BooleanPropertyRNA rna_Property_is_never_none = {
	{(PropertyRNA*)&rna_Property_rna_properties, (PropertyRNA*)&rna_Property_identifier,
	-1, "is_never_none", 2, "Never None",
	"True when this value can\'t be set to None",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_never_none_get, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Property_rna_properties = {
	{(PropertyRNA*)&rna_Property_is_readonly, (PropertyRNA*)&rna_Property_is_never_none,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_rna_properties_begin, Property_rna_properties_next, Property_rna_properties_end, Property_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Property_is_readonly = {
	{(PropertyRNA*)&rna_Property_is_runtime, (PropertyRNA*)&rna_Property_rna_properties,
	-1, "is_readonly", 2, "Read Only",
	"Property is editable through RNA",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_readonly_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Property_is_runtime = {
	{(PropertyRNA*)&rna_Property_is_registered, (PropertyRNA*)&rna_Property_is_readonly,
	-1, "is_runtime", 2, "Read Only",
	"Property is editable through RNA",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_runtime_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Property_is_registered = {
	{(PropertyRNA*)&rna_Property_is_registered_optional, (PropertyRNA*)&rna_Property_is_runtime,
	-1, "is_registered", 2, "Registered",
	"Property is registered as part of type registration",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_registered_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Property_is_registered_optional = {
	{(PropertyRNA*)&rna_Property_is_required, (PropertyRNA*)&rna_Property_is_registered,
	-1, "is_registered_optional", 2, "Registered Optionally",
	"Property is optionally registered as part of type registration",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_registered_optional_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Property_is_required = {
	{(PropertyRNA*)&rna_Property_is_output, (PropertyRNA*)&rna_Property_is_registered_optional,
	-1, "is_required", 2, "Required",
	"False when this property is an optional argument in an RNA function",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_required_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Property_is_output = {
	{(PropertyRNA*)&rna_Property_subtype, (PropertyRNA*)&rna_Property_is_required,
	-1, "is_output", 2, "Return",
	"True when this property is an output value from an RNA function",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_is_output_get, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Property_subtype_items[20] = {
	{0, "NONE", 0, "None", ""},
	{1, "FILE_PATH", 0, "File Path", ""},
	{2, "DIRECTORY_PATH", 0, "Directory Path", ""},
	{13, "UNSIGNED", 0, "Unsigned Number", ""},
	{14, "PERCENTAGE", 0, "Percentage", ""},
	{15, "FACTOR", 0, "Factor", ""},
	{327696, "ANGLE", 0, "Angle", ""},
	{393233, "TIME", 0, "Time", ""},
	{65554, "DISTANCE", 0, "Distance", ""},
	{20, "COLOR", 0, "Color", ""},
	{65557, "TRANSLATION", 0, "Translation", ""},
	{22, "DIRECTION", 0, "Direction", ""},
	{25, "MATRIX", 0, "Matrix", ""},
	{327706, "EULER", 0, "Euler", ""},
	{27, "QUATERNION", 0, "Quaternion", ""},
	{29, "XYZ", 0, "XYZ", ""},
	{30, "COLOR_GAMMA", 0, "Gamma Corrected Color", ""},
	{40, "LAYER", 0, "Layer", ""},
	{41, "LAYER_MEMBERSHIP", 0, "Layer Membership", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Property_subtype = {
	{(PropertyRNA*)&rna_Property_type, (PropertyRNA*)&rna_Property_is_output,
	-1, "subtype", 2, "Subtype",
	"Semantic interpretation of the property",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_subtype_get, NULL, NULL, rna_Property_subtype_items, 19, 0
};

static EnumPropertyItem rna_Property_type_items[8] = {
	{0, "BOOLEAN", 0, "Boolean", ""},
	{1, "INT", 0, "Integer", ""},
	{2, "FLOAT", 0, "Float", ""},
	{3, "STRING", 0, "String", ""},
	{4, "ENUM", 0, "Enumeration", ""},
	{5, "POINTER", 0, "Pointer", ""},
	{6, "COLLECTION", 0, "Collection", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Property_type = {
	{(PropertyRNA*)&rna_Property_unit, (PropertyRNA*)&rna_Property_subtype,
	-1, "type", 2, "Type",
	"Data type of the property",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_type_get, NULL, NULL, rna_Property_type_items, 7, 0
};

static EnumPropertyItem rna_Property_unit_items[9] = {
	{0, "NONE", 0, "None", ""},
	{65536, "LENGTH", 0, "Length", ""},
	{131072, "AREA", 0, "Area", ""},
	{196608, "VOLUME", 0, "Volume", ""},
	{327680, "ROTATION", 0, "Rotation", ""},
	{393216, "TIME", 0, "Time", ""},
	{458752, "VELOCITY", 0, "Velocity", ""},
	{524288, "ACCELERATION", 0, "Acceleration", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Property_unit = {
	{NULL, (PropertyRNA*)&rna_Property_type,
	-1, "unit", 2, "Unit",
	"Type of units for this property",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Property_unit_get, NULL, NULL, rna_Property_unit_items, 8, 0
};

StructRNA RNA_Property = {
	{(ContainerRNA *)&RNA_PropertyActuator, (ContainerRNA *)&RNA_PoseBoneConstraints,
	NULL,
	{(PropertyRNA*)&rna_Property_rna_type, (PropertyRNA*)&rna_Property_unit}},
	"Property"	, NULL,NULL
, 0, "Property Definition", "RNA property definition",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	NULL,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* String Definition */
StringPropertyRNA rna_StringProperty_default = {
	{(PropertyRNA*)&rna_StringProperty_length_max, NULL,
	-1, "default", 0, "Default",
	"string default value",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	StringProperty_default_get, StringProperty_default_length, NULL, 0, ""
};

IntPropertyRNA rna_StringProperty_length_max = {
	{NULL, (PropertyRNA*)&rna_StringProperty_default,
	-1, "length_max", 2, "Maximum Length",
	"Maximum length of the string, 0 means unlimited",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	StringProperty_length_max_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

StructRNA RNA_StringProperty = {
	{(ContainerRNA *)&RNA_Struct, (ContainerRNA *)&RNA_StretchToConstraint,
	NULL,
	{(PropertyRNA*)&rna_StringProperty_default, (PropertyRNA*)&rna_StringProperty_length_max}},
	"StringProperty"	, NULL,NULL
, 0, "String Definition", "RNA text string property definition",
	206,
	(PropertyRNA*)&rna_Property_identifier, (PropertyRNA*)&rna_Property_rna_properties,
	&RNA_Property,
	NULL,
	rna_Property_refine,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Struct Definition */
PointerPropertyRNA rna_Struct_rna_type = {
	{(PropertyRNA*)&rna_Struct_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Struct_name = {
	{(PropertyRNA*)&rna_Struct_base, (PropertyRNA*)&rna_Struct_rna_type,
	-1, "name", 0, "Name",
	"Human readable name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_name_get, Struct_name_length, NULL, 0, ""
};

PointerPropertyRNA rna_Struct_base = {
	{(PropertyRNA*)&rna_Struct_description, (PropertyRNA*)&rna_Struct_name,
	-1, "base", 0, "Base",
	"Struct definition this is derived from",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_base_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Struct_description = {
	{(PropertyRNA*)&rna_Struct_functions, (PropertyRNA*)&rna_Struct_base,
	-1, "description", 0, "Description",
	"Description of the Struct\'s purpose",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_description_get, Struct_description_length, NULL, 0, ""
};

CollectionPropertyRNA rna_Struct_functions = {
	{(PropertyRNA*)&rna_Struct_identifier, (PropertyRNA*)&rna_Struct_description,
	-1, "functions", 0, "Functions",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_functions_begin, Struct_functions_next, Struct_functions_end, Struct_functions_get, NULL, NULL, NULL, &RNA_Function
};

StringPropertyRNA rna_Struct_identifier = {
	{(PropertyRNA*)&rna_Struct_name_property, (PropertyRNA*)&rna_Struct_functions,
	-1, "identifier", 0, "Identifier",
	"Unique name used in the code and scripting",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_identifier_get, Struct_identifier_length, NULL, 0, ""
};

PointerPropertyRNA rna_Struct_name_property = {
	{(PropertyRNA*)&rna_Struct_nested, (PropertyRNA*)&rna_Struct_identifier,
	-1, "name_property", 0, "Name Property",
	"Property that gives the name of the struct",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_name_property_get, NULL, NULL, NULL,&RNA_StringProperty
};

PointerPropertyRNA rna_Struct_nested = {
	{(PropertyRNA*)&rna_Struct_rna_properties, (PropertyRNA*)&rna_Struct_name_property,
	-1, "nested", 0, "Nested",
	"Struct in which this struct is always nested, and to which it logically belongs",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_nested_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_Struct_rna_properties = {
	{(PropertyRNA*)&rna_Struct_properties, (PropertyRNA*)&rna_Struct_nested,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_rna_properties_begin, Struct_rna_properties_next, Struct_rna_properties_end, Struct_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_Struct_properties = {
	{NULL, (PropertyRNA*)&rna_Struct_rna_properties,
	-1, "properties", 0, "Properties",
	"Properties in the struct",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Struct_properties_begin, Struct_properties_next, Struct_properties_end, Struct_properties_get, NULL, NULL, NULL, &RNA_Property
};

StructRNA RNA_Struct = {
	{(ContainerRNA *)&RNA_StucciTexture, (ContainerRNA *)&RNA_StringProperty,
	NULL,
	{(PropertyRNA*)&rna_Struct_rna_type, (PropertyRNA*)&rna_Struct_properties}},
	"Struct"	, NULL,NULL
, 0, "Struct Definition", "RNA structure definition",
	206,
	(PropertyRNA*)&rna_Struct_identifier, (PropertyRNA*)&rna_Struct_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

