
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

#include "rna_color.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_ColorRamp_rna_type;
CollectionPropertyRNA rna_ColorRamp_elements;
EnumPropertyRNA rna_ColorRamp_interpolation;
CollectionPropertyRNA rna_ColorRamp_rna_properties;

extern FunctionRNA rna_ColorRamp_evaluate_func;
extern FloatPropertyRNA rna_ColorRamp_evaluate_position;
extern FloatPropertyRNA rna_ColorRamp_evaluate_color;



PointerPropertyRNA rna_ColorRampElement_rna_type;
FloatPropertyRNA rna_ColorRampElement_color;
FloatPropertyRNA rna_ColorRampElement_position;
CollectionPropertyRNA rna_ColorRampElement_rna_properties;


PointerPropertyRNA rna_ColorRampElements_rna_type;
CollectionPropertyRNA rna_ColorRampElements_rna_properties;

extern FunctionRNA rna_ColorRampElements_new_func;
extern FloatPropertyRNA rna_ColorRampElements_new_position;
extern PointerPropertyRNA rna_ColorRampElements_new_element;

extern FunctionRNA rna_ColorRampElements_remove_func;
extern PointerPropertyRNA rna_ColorRampElements_remove_element;



PointerPropertyRNA rna_CurveMap_rna_type;
EnumPropertyRNA rna_CurveMap_extend;
CollectionPropertyRNA rna_CurveMap_points;
CollectionPropertyRNA rna_CurveMap_rna_properties;


PointerPropertyRNA rna_CurveMapPoint_rna_type;
EnumPropertyRNA rna_CurveMapPoint_handle_type;
FloatPropertyRNA rna_CurveMapPoint_location;
CollectionPropertyRNA rna_CurveMapPoint_rna_properties;
BooleanPropertyRNA rna_CurveMapPoint_select;


PointerPropertyRNA rna_CurveMapping_rna_type;
FloatPropertyRNA rna_CurveMapping_black_level;
BooleanPropertyRNA rna_CurveMapping_use_clip;
FloatPropertyRNA rna_CurveMapping_clip_max_x;
FloatPropertyRNA rna_CurveMapping_clip_max_y;
FloatPropertyRNA rna_CurveMapping_clip_min_x;
FloatPropertyRNA rna_CurveMapping_clip_min_y;
CollectionPropertyRNA rna_CurveMapping_curves;
CollectionPropertyRNA rna_CurveMapping_rna_properties;
FloatPropertyRNA rna_CurveMapping_white_level;


PointerPropertyRNA rna_Histogram_rna_type;
EnumPropertyRNA rna_Histogram_mode;
CollectionPropertyRNA rna_Histogram_rna_properties;


PointerPropertyRNA rna_Scopes_rna_type;
FloatPropertyRNA rna_Scopes_accuracy;
BooleanPropertyRNA rna_Scopes_use_full_resolution;
PointerPropertyRNA rna_Scopes_histogram;
CollectionPropertyRNA rna_Scopes_rna_properties;
FloatPropertyRNA rna_Scopes_vectorscope_alpha;
EnumPropertyRNA rna_Scopes_waveform_mode;
FloatPropertyRNA rna_Scopes_waveform_alpha;

PointerRNA ColorRamp_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ColorRamp_elements_length(PointerRNA *ptr)
{
	ColorBand *data= (ColorBand*)(ptr->data);
	return (data->data == NULL)? 0: data->tot;
}

static PointerRNA ColorRamp_elements_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ColorRampElement, rna_iterator_array_get(iter));
}

void ColorRamp_elements_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	ColorBand *data= (ColorBand*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ColorRamp_elements;

	rna_iterator_array_begin(iter, data->data, sizeof(data->data[0]), data->tot, 0, NULL);

	if(iter->valid)
		iter->ptr= ColorRamp_elements_get(iter);
}

void ColorRamp_elements_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= ColorRamp_elements_get(iter);
}

void ColorRamp_elements_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int ColorRamp_elements_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	ColorRamp_elements_begin(&iter, ptr);

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
		if(found) *r_ptr = ColorRamp_elements_get(&iter);
	}

	ColorRamp_elements_end(&iter);

	return found;
}

int ColorRamp_interpolation_get(PointerRNA *ptr)
{
	ColorBand *data= (ColorBand*)(ptr->data);
	return (int)(data->ipotype);
}

void ColorRamp_interpolation_set(PointerRNA *ptr, int value)
{
	ColorBand *data= (ColorBand*)(ptr->data);
	data->ipotype= value;
}

static PointerRNA ColorRamp_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorRamp_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ColorRamp_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ColorRamp_rna_properties_get(iter);
}

void ColorRamp_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ColorRamp_rna_properties_get(iter);
}

void ColorRamp_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ColorRampElement_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ColorRampElement_color_get(PointerRNA *ptr, float values[4])
{
	CBData *data= (CBData*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= (float)((&data->r)[i]);
	}
}

void ColorRampElement_color_set(PointerRNA *ptr, const float values[4])
{
	CBData *data= (CBData*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		(&data->r)[i]= values[i];
	}
}

float ColorRampElement_position_get(PointerRNA *ptr)
{
	CBData *data= (CBData*)(ptr->data);
	return (float)(data->pos);
}

void ColorRampElement_position_set(PointerRNA *ptr, float value)
{
	CBData *data= (CBData*)(ptr->data);
	data->pos= CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA ColorRampElement_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorRampElement_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ColorRampElement_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ColorRampElement_rna_properties_get(iter);
}

void ColorRampElement_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ColorRampElement_rna_properties_get(iter);
}

void ColorRampElement_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ColorRampElements_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ColorRampElements_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ColorRampElements_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ColorRampElements_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ColorRampElements_rna_properties_get(iter);
}

void ColorRampElements_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ColorRampElements_rna_properties_get(iter);
}

void ColorRampElements_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA CurveMap_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int CurveMap_extend_get(PointerRNA *ptr)
{
	CurveMap *data= (CurveMap*)(ptr->data);
	return ((data->flag) & 1);
}

int CurveMap_points_length(PointerRNA *ptr)
{
	CurveMap *data= (CurveMap*)(ptr->data);
	return (data->curve == NULL)? 0: data->totpoint;
}

static PointerRNA CurveMap_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveMapPoint, rna_iterator_array_get(iter));
}

void CurveMap_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	CurveMap *data= (CurveMap*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_CurveMap_points;

	rna_iterator_array_begin(iter, data->curve, sizeof(data->curve[0]), data->totpoint, 0, NULL);

	if(iter->valid)
		iter->ptr= CurveMap_points_get(iter);
}

void CurveMap_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= CurveMap_points_get(iter);
}

void CurveMap_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int CurveMap_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	CurveMap_points_begin(&iter, ptr);

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
		if(found) *r_ptr = CurveMap_points_get(&iter);
	}

	CurveMap_points_end(&iter);

	return found;
}

static PointerRNA CurveMap_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_CurveMap_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= CurveMap_rna_properties_get(iter);
}

void CurveMap_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= CurveMap_rna_properties_get(iter);
}

void CurveMap_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA CurveMapPoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int CurveMapPoint_handle_type_get(PointerRNA *ptr)
{
	CurveMapPoint *data= (CurveMapPoint*)(ptr->data);
	return ((data->flag) & 2);
}

void CurveMapPoint_location_get(PointerRNA *ptr, float values[2])
{
	CurveMapPoint *data= (CurveMapPoint*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		values[i]= (float)((&data->x)[i]);
	}
}

static PointerRNA CurveMapPoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveMapPoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_CurveMapPoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= CurveMapPoint_rna_properties_get(iter);
}

void CurveMapPoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= CurveMapPoint_rna_properties_get(iter);
}

void CurveMapPoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int CurveMapPoint_select_get(PointerRNA *ptr)
{
	CurveMapPoint *data= (CurveMapPoint*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void CurveMapPoint_select_set(PointerRNA *ptr, int value)
{
	CurveMapPoint *data= (CurveMapPoint*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA CurveMapping_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void CurveMapping_black_level_get(PointerRNA *ptr, float values[3])
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->black)[i]);
	}
}

void CurveMapping_black_level_set(PointerRNA *ptr, const float values[3])
{
	rna_CurveMapping_black_level_set(ptr, values);
}

int CurveMapping_use_clip_get(PointerRNA *ptr)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void CurveMapping_use_clip_set(PointerRNA *ptr, int value)
{
	rna_CurveMapping_clip_set(ptr, value);
}

float CurveMapping_clip_max_x_get(PointerRNA *ptr)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	return (float)(data->clipr.xmax);
}

void CurveMapping_clip_max_x_set(PointerRNA *ptr, float value)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	data->clipr.xmax= CLAMPIS(value, -100.0f, 100.0f);
}

float CurveMapping_clip_max_y_get(PointerRNA *ptr)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	return (float)(data->clipr.ymax);
}

void CurveMapping_clip_max_y_set(PointerRNA *ptr, float value)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	data->clipr.ymax= CLAMPIS(value, -100.0f, 100.0f);
}

float CurveMapping_clip_min_x_get(PointerRNA *ptr)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	return (float)(data->clipr.xmin);
}

void CurveMapping_clip_min_x_set(PointerRNA *ptr, float value)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	data->clipr.xmin= CLAMPIS(value, -100.0f, 100.0f);
}

float CurveMapping_clip_min_y_get(PointerRNA *ptr)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	return (float)(data->clipr.ymin);
}

void CurveMapping_clip_min_y_set(PointerRNA *ptr, float value)
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	data->clipr.ymin= CLAMPIS(value, -100.0f, 100.0f);
}

static PointerRNA CurveMapping_curves_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_CurveMap, rna_iterator_array_get(iter));
}

void CurveMapping_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_CurveMapping_curves;

	rna_CurveMapping_curves_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= CurveMapping_curves_get(iter);
}

void CurveMapping_curves_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= CurveMapping_curves_get(iter);
}

void CurveMapping_curves_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

static PointerRNA CurveMapping_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveMapping_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_CurveMapping_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= CurveMapping_rna_properties_get(iter);
}

void CurveMapping_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= CurveMapping_rna_properties_get(iter);
}

void CurveMapping_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void CurveMapping_white_level_get(PointerRNA *ptr, float values[3])
{
	CurveMapping *data= (CurveMapping*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->white)[i]);
	}
}

void CurveMapping_white_level_set(PointerRNA *ptr, const float values[3])
{
	rna_CurveMapping_white_level_set(ptr, values);
}

PointerRNA Histogram_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int Histogram_mode_get(PointerRNA *ptr)
{
	Histogram *data= (Histogram*)(ptr->data);
	return (int)(data->mode);
}

void Histogram_mode_set(PointerRNA *ptr, int value)
{
	Histogram *data= (Histogram*)(ptr->data);
	data->mode= value;
}

static PointerRNA Histogram_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Histogram_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Histogram_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Histogram_rna_properties_get(iter);
}

void Histogram_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Histogram_rna_properties_get(iter);
}

void Histogram_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Scopes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float Scopes_accuracy_get(PointerRNA *ptr)
{
	Scopes *data= (Scopes*)(ptr->data);
	return (float)(data->accuracy);
}

void Scopes_accuracy_set(PointerRNA *ptr, float value)
{
	Scopes *data= (Scopes*)(ptr->data);
	data->accuracy= CLAMPIS(value, 0.0f, 100.0f);
}

int Scopes_use_full_resolution_get(PointerRNA *ptr)
{
	Scopes *data= (Scopes*)(ptr->data);
	return (((data->sample_full) & 1) != 0);
}

void Scopes_use_full_resolution_set(PointerRNA *ptr, int value)
{
	Scopes *data= (Scopes*)(ptr->data);
	if(value) data->sample_full |= 1;
	else data->sample_full &= ~1;
}

PointerRNA Scopes_histogram_get(PointerRNA *ptr)
{
	Scopes *data= (Scopes*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Histogram, &data->hist);
}

static PointerRNA Scopes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Scopes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Scopes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Scopes_rna_properties_get(iter);
}

void Scopes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Scopes_rna_properties_get(iter);
}

void Scopes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float Scopes_vectorscope_alpha_get(PointerRNA *ptr)
{
	Scopes *data= (Scopes*)(ptr->data);
	return (float)(data->vecscope_alpha);
}

void Scopes_vectorscope_alpha_set(PointerRNA *ptr, float value)
{
	Scopes *data= (Scopes*)(ptr->data);
	data->vecscope_alpha= CLAMPIS(value, 0.0f, 1.0f);
}

int Scopes_waveform_mode_get(PointerRNA *ptr)
{
	Scopes *data= (Scopes*)(ptr->data);
	return (int)(data->wavefrm_mode);
}

void Scopes_waveform_mode_set(PointerRNA *ptr, int value)
{
	Scopes *data= (Scopes*)(ptr->data);
	data->wavefrm_mode= value;
}

float Scopes_waveform_alpha_get(PointerRNA *ptr)
{
	Scopes *data= (Scopes*)(ptr->data);
	return (float)(data->wavefrm_alpha);
}

void Scopes_waveform_alpha_set(PointerRNA *ptr, float value)
{
	Scopes *data= (Scopes*)(ptr->data);
	data->wavefrm_alpha= CLAMPIS(value, 0.0f, 1.0f);
}

void ColorRamp_evaluate_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	float position;
	float *color;
	char *_data;
	
	_self= (struct ColorBand *)_ptr->data;
	_data= (char *)_parms->data;
	position= *((float*)_data);
	_data+= 4;
	color= ((float*)_data);
	
	rna_ColorRamp_eval(_self, position, color);
}

/* Repeated prototypes to detect errors */

void rna_ColorRamp_eval(struct ColorBand *_self, float position, float color[4]);


void ColorRampElements_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	float position;
	struct CBData *element;
	char *_data, *_retdata;
	
	_self= (struct ColorBand *)_ptr->data;
	_data= (char *)_parms->data;
	position= *((float*)_data);
	_data+= 4;
	_retdata= _data;
	
	element= rna_ColorRampElement_new(_self, reports, position);
	*((struct CBData**)_retdata)= element;
}

void ColorRampElements_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ColorBand *_self;
	struct CBData *element;
	char *_data;
	
	_self= (struct ColorBand *)_ptr->data;
	_data= (char *)_parms->data;
	element= *((struct CBData**)_data);
	
	rna_ColorRampElement_remove(_self, reports, element);
}

/* Repeated prototypes to detect errors */

struct CBData *rna_ColorRampElement_new(struct ColorBand *_self, ReportList *reports, float position);
void rna_ColorRampElement_remove(struct ColorBand *_self, ReportList *reports, struct CBData *element);






/* Color Ramp */
PointerPropertyRNA rna_ColorRamp_rna_type = {
	{(PropertyRNA*)&rna_ColorRamp_elements, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_ColorRamp_elements = {
	{(PropertyRNA*)&rna_ColorRamp_interpolation, (PropertyRNA*)&rna_ColorRamp_rna_type,
	-1, "elements", 16384, "Elements",
	"",
	0,
	PROP_COLLECTION, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {32, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	0, -1, &RNA_ColorRampElements},
	ColorRamp_elements_begin, ColorRamp_elements_next, ColorRamp_elements_end, ColorRamp_elements_get, ColorRamp_elements_length, ColorRamp_elements_lookup_int, NULL, &RNA_ColorRampElement
};

static EnumPropertyItem rna_ColorRamp_interpolation_items[6] = {
	{1, "EASE", 0, "Ease", ""},
	{3, "CARDINAL", 0, "Cardinal", ""},
	{0, "LINEAR", 0, "Linear", ""},
	{2, "B_SPLINE", 0, "B-Spline", ""},
	{4, "CONSTANT", 0, "Constant", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ColorRamp_interpolation = {
	{(PropertyRNA*)&rna_ColorRamp_rna_properties, (PropertyRNA*)&rna_ColorRamp_elements,
	-1, "interpolation", 3, "Interpolation",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_interpolation_get, ColorRamp_interpolation_set, NULL, rna_ColorRamp_interpolation_items, 5, 0
};

CollectionPropertyRNA rna_ColorRamp_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ColorRamp_interpolation,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRamp_rna_properties_begin, ColorRamp_rna_properties_next, ColorRamp_rna_properties_end, ColorRamp_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_ColorRamp_evaluate_position = {
	{(PropertyRNA*)&rna_ColorRamp_evaluate_color, NULL,
	-1, "position", 7, "Position",
	"Evaluate ColorRamp at position",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 1.0f, NULL
};

static float rna_ColorRamp_evaluate_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorRamp_evaluate_color = {
	{NULL, (PropertyRNA*)&rna_ColorRamp_evaluate_position,
	-1, "color", 8388619, "Color",
	"Color at given position",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_ColorRamp_evaluate_color_default
};

FunctionRNA rna_ColorRamp_evaluate_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_ColorRamp_evaluate_position, (PropertyRNA*)&rna_ColorRamp_evaluate_color}},
	"evaluate", 0, "Evaluate ColorRamp",
	ColorRamp_evaluate_call,
	NULL
};

StructRNA RNA_ColorRamp = {
	{(ContainerRNA *)&RNA_ColorRampElement, (ContainerRNA *)&RNA_CollisionSettings,
	NULL,
	{(PropertyRNA*)&rna_ColorRamp_rna_type, (PropertyRNA*)&rna_ColorRamp_rna_properties}},
	"ColorRamp"	, NULL,NULL
, 0, "Color Ramp", "Color ramp mapping a scalar value to a color",
	17,
	NULL, (PropertyRNA*)&rna_ColorRamp_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorRamp_path,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ColorRamp_evaluate_func, (FunctionRNA*)&rna_ColorRamp_evaluate_func}
};

/* Color Ramp Element */
PointerPropertyRNA rna_ColorRampElement_rna_type = {
	{(PropertyRNA*)&rna_ColorRampElement_color, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElement_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ColorRampElement_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ColorRampElement_color = {
	{(PropertyRNA*)&rna_ColorRampElement_position, (PropertyRNA*)&rna_ColorRampElement_rna_type,
	-1, "color", 8195, "Color",
	"",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_ColorRamp_update, 0, NULL, NULL,
	offsetof(CBData, r), 4, NULL},
	NULL, NULL, ColorRampElement_color_get, ColorRampElement_color_set, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_ColorRampElement_color_default
};

FloatPropertyRNA rna_ColorRampElement_position = {
	{(PropertyRNA*)&rna_ColorRampElement_rna_properties, (PropertyRNA*)&rna_ColorRampElement_color,
	-1, "position", 8195, "Position",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ColorRamp_update, 0, NULL, NULL,
	offsetof(CBData, pos), 4, NULL},
	ColorRampElement_position_get, ColorRampElement_position_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_ColorRampElement_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ColorRampElement_position,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElement_rna_properties_begin, ColorRampElement_rna_properties_next, ColorRampElement_rna_properties_end, ColorRampElement_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_ColorRampElement = {
	{(ContainerRNA *)&RNA_ColorRampElements, (ContainerRNA *)&RNA_ColorRamp,
	NULL,
	{(PropertyRNA*)&rna_ColorRampElement_rna_type, (PropertyRNA*)&rna_ColorRampElement_rna_properties}},
	"ColorRampElement"	, NULL,NULL
, 0, "Color Ramp Element", "Element defining a color at a position in the color ramp",
	17,
	NULL, (PropertyRNA*)&rna_ColorRampElement_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorRampElement_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Color Ramp Elements */
PointerPropertyRNA rna_ColorRampElements_rna_type = {
	{(PropertyRNA*)&rna_ColorRampElements_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElements_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_ColorRampElements_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ColorRampElements_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ColorRampElements_rna_properties_begin, ColorRampElements_rna_properties_next, ColorRampElements_rna_properties_end, ColorRampElements_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_ColorRampElements_new_position = {
	{(PropertyRNA*)&rna_ColorRampElements_new_element, NULL,
	-1, "position", 7, "Position",
	"Position to add element",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_ColorRampElements_new_element = {
	{NULL, (PropertyRNA*)&rna_ColorRampElements_new_position,
	-1, "element", 8, "",
	"New element.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ColorRampElement
};

FunctionRNA rna_ColorRampElements_new_func = {
	{(FunctionRNA*)&rna_ColorRampElements_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ColorRampElements_new_position, (PropertyRNA*)&rna_ColorRampElements_new_element}},
	"new", 4, "Add element to ColorRamp",
	ColorRampElements_new_call,
	(PropertyRNA*)&rna_ColorRampElements_new_element
};

PointerPropertyRNA rna_ColorRampElements_remove_element = {
	{NULL, NULL,
	-1, "element", 262148, "",
	"Element to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ColorRampElement
};

FunctionRNA rna_ColorRampElements_remove_func = {
	{NULL, (FunctionRNA*)&rna_ColorRampElements_new_func,
	NULL,
	{(PropertyRNA*)&rna_ColorRampElements_remove_element, (PropertyRNA*)&rna_ColorRampElements_remove_element}},
	"remove", 4, "Delete element from ColorRamp",
	ColorRampElements_remove_call,
	NULL
};

StructRNA RNA_ColorRampElements = {
	{(ContainerRNA *)&RNA_ColorSequence, (ContainerRNA *)&RNA_ColorRampElement,
	NULL,
	{(PropertyRNA*)&rna_ColorRampElements_rna_type, (PropertyRNA*)&rna_ColorRampElements_rna_properties}},
	"ColorRampElements"	, NULL,NULL
, 0, "Color Ramp Elements", "Collection of Color Ramp Elements",
	17,
	NULL, (PropertyRNA*)&rna_ColorRampElements_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_ColorRampElement_path,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ColorRampElements_new_func, (FunctionRNA*)&rna_ColorRampElements_remove_func}
};

/* CurveMap */
PointerPropertyRNA rna_CurveMap_rna_type = {
	{(PropertyRNA*)&rna_CurveMap_extend, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_CurveMap_extend_items[3] = {
	{0, "HORIZONTAL", 0, "Horizontal", ""},
	{1, "EXTRAPOLATED", 0, "Extrapolated", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CurveMap_extend = {
	{(PropertyRNA*)&rna_CurveMap_points, (PropertyRNA*)&rna_CurveMap_rna_type,
	-1, "extend", 2, "Extend",
	"Extrapolate the curve or extend it horizontally",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMap_extend_get, NULL, NULL, rna_CurveMap_extend_items, 2, 0
};

CollectionPropertyRNA rna_CurveMap_points = {
	{(PropertyRNA*)&rna_CurveMap_rna_properties, (PropertyRNA*)&rna_CurveMap_extend,
	-1, "points", 16384, "Points",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMap_points_begin, CurveMap_points_next, CurveMap_points_end, CurveMap_points_get, CurveMap_points_length, CurveMap_points_lookup_int, NULL, &RNA_CurveMapPoint
};

CollectionPropertyRNA rna_CurveMap_rna_properties = {
	{NULL, (PropertyRNA*)&rna_CurveMap_points,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMap_rna_properties_begin, CurveMap_rna_properties_next, CurveMap_rna_properties_end, CurveMap_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_CurveMap = {
	{(ContainerRNA *)&RNA_CurveMapPoint, (ContainerRNA *)&RNA_Curve,
	NULL,
	{(PropertyRNA*)&rna_CurveMap_rna_type, (PropertyRNA*)&rna_CurveMap_rna_properties}},
	"CurveMap"	, NULL,NULL
, 0, "CurveMap", "Curve in a curve mapping",
	17,
	NULL, (PropertyRNA*)&rna_CurveMap_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* CurveMapPoint */
PointerPropertyRNA rna_CurveMapPoint_rna_type = {
	{(PropertyRNA*)&rna_CurveMapPoint_handle_type, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_CurveMapPoint_handle_type_items[3] = {
	{0, "AUTO", 0, "Auto Handle", ""},
	{2, "VECTOR", 0, "Vector Handle", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CurveMapPoint_handle_type = {
	{(PropertyRNA*)&rna_CurveMapPoint_location, (PropertyRNA*)&rna_CurveMapPoint_rna_type,
	-1, "handle_type", 2, "Handle Type",
	"Curve interpolation at this point: bezier or vector",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_handle_type_get, NULL, NULL, rna_CurveMapPoint_handle_type_items, 2, 0
};

static float rna_CurveMapPoint_location_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapPoint_location = {
	{(PropertyRNA*)&rna_CurveMapPoint_rna_properties, (PropertyRNA*)&rna_CurveMapPoint_handle_type,
	-1, "location", 8194, "Location",
	"X/Y coordinates of the curve point",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapPoint, x), 4, NULL},
	NULL, NULL, CurveMapPoint_location_get, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_CurveMapPoint_location_default
};

CollectionPropertyRNA rna_CurveMapPoint_rna_properties = {
	{(PropertyRNA*)&rna_CurveMapPoint_select, (PropertyRNA*)&rna_CurveMapPoint_location,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_rna_properties_begin, CurveMapPoint_rna_properties_next, CurveMapPoint_rna_properties_end, CurveMapPoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_CurveMapPoint_select = {
	{NULL, (PropertyRNA*)&rna_CurveMapPoint_rna_properties,
	-1, "select", 3, "Select",
	"Selection state of the curve point",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapPoint_select_get, CurveMapPoint_select_set, NULL, NULL, 0, NULL
};

StructRNA RNA_CurveMapPoint = {
	{(ContainerRNA *)&RNA_CurveMapping, (ContainerRNA *)&RNA_CurveMap,
	NULL,
	{(PropertyRNA*)&rna_CurveMapPoint_rna_type, (PropertyRNA*)&rna_CurveMapPoint_select}},
	"CurveMapPoint"	, NULL,NULL
, 0, "CurveMapPoint", "Point of a curve used for a curve mapping",
	17,
	NULL, (PropertyRNA*)&rna_CurveMapPoint_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* CurveMapping */
PointerPropertyRNA rna_CurveMapping_rna_type = {
	{(PropertyRNA*)&rna_CurveMapping_black_level, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_CurveMapping_black_level_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapping_black_level = {
	{(PropertyRNA*)&rna_CurveMapping_use_clip, (PropertyRNA*)&rna_CurveMapping_rna_type,
	-1, "black_level", 3, "Black Level",
	"For RGB curves, the color that black is mapped to",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, CurveMapping_black_level_get, CurveMapping_black_level_set, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, rna_CurveMapping_black_level_default
};

BooleanPropertyRNA rna_CurveMapping_use_clip = {
	{(PropertyRNA*)&rna_CurveMapping_clip_max_x, (PropertyRNA*)&rna_CurveMapping_black_level,
	-1, "use_clip", 3, "Clip",
	"Force the curve view to fit a defined boundary",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_use_clip_get, CurveMapping_use_clip_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_max_x = {
	{(PropertyRNA*)&rna_CurveMapping_clip_max_y, (PropertyRNA*)&rna_CurveMapping_use_clip,
	-1, "clip_max_x", 8195, "Clip Max X",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.xmax), 4, NULL},
	CurveMapping_clip_max_x_get, CurveMapping_clip_max_x_set, NULL, NULL, rna_CurveMapping_clipmaxx_range, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_max_y = {
	{(PropertyRNA*)&rna_CurveMapping_clip_min_x, (PropertyRNA*)&rna_CurveMapping_clip_max_x,
	-1, "clip_max_y", 8195, "Clip Max Y",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.ymax), 4, NULL},
	CurveMapping_clip_max_y_get, CurveMapping_clip_max_y_set, NULL, NULL, rna_CurveMapping_clipmaxy_range, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_min_x = {
	{(PropertyRNA*)&rna_CurveMapping_clip_min_y, (PropertyRNA*)&rna_CurveMapping_clip_max_y,
	-1, "clip_min_x", 8195, "Clip Min X",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.xmin), 4, NULL},
	CurveMapping_clip_min_x_get, CurveMapping_clip_min_x_set, NULL, NULL, rna_CurveMapping_clipminx_range, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_CurveMapping_clip_min_y = {
	{(PropertyRNA*)&rna_CurveMapping_curves, (PropertyRNA*)&rna_CurveMapping_clip_min_x,
	-1, "clip_min_y", 8195, "Clip Min Y",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(CurveMapping, clipr.ymin), 4, NULL},
	CurveMapping_clip_min_y_get, CurveMapping_clip_min_y_set, NULL, NULL, rna_CurveMapping_clipminy_range, -100.0f, 100.0f, -100.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_CurveMapping_curves = {
	{(PropertyRNA*)&rna_CurveMapping_rna_properties, (PropertyRNA*)&rna_CurveMapping_clip_min_y,
	-1, "curves", 16384, "Curves",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_curves_begin, CurveMapping_curves_next, CurveMapping_curves_end, CurveMapping_curves_get, rna_CurveMapping_curves_length, NULL, NULL, &RNA_CurveMap
};

CollectionPropertyRNA rna_CurveMapping_rna_properties = {
	{(PropertyRNA*)&rna_CurveMapping_white_level, (PropertyRNA*)&rna_CurveMapping_curves,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveMapping_rna_properties_begin, CurveMapping_rna_properties_next, CurveMapping_rna_properties_end, CurveMapping_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static float rna_CurveMapping_white_level_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_CurveMapping_white_level = {
	{NULL, (PropertyRNA*)&rna_CurveMapping_rna_properties,
	-1, "white_level", 3, "White Level",
	"For RGB curves, the color that white is mapped to",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, CurveMapping_white_level_get, CurveMapping_white_level_set, NULL, -1000.0f, 1000.0f, -1000.0f, 1000.0f, 10.0f, 3, 0.0f, rna_CurveMapping_white_level_default
};

StructRNA RNA_CurveMapping = {
	{(ContainerRNA *)&RNA_CurveModifier, (ContainerRNA *)&RNA_CurveMapPoint,
	NULL,
	{(PropertyRNA*)&rna_CurveMapping_rna_type, (PropertyRNA*)&rna_CurveMapping_white_level}},
	"CurveMapping"	, NULL,NULL
, 0, "CurveMapping", "Curve mapping to map color, vector and scalar values to other values using a user defined curve",
	17,
	NULL, (PropertyRNA*)&rna_CurveMapping_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Histogram */
PointerPropertyRNA rna_Histogram_rna_type = {
	{(PropertyRNA*)&rna_Histogram_mode, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Histogram_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_Histogram_mode_items[6] = {
	{0, "LUMA", 54, "Luma", ""},
	{1, "RGB", 54, "Red Green Blue", ""},
	{2, "R", 54, "Red", ""},
	{3, "G", 54, "Green", ""},
	{4, "B", 54, "Blue", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Histogram_mode = {
	{(PropertyRNA*)&rna_Histogram_rna_properties, (PropertyRNA*)&rna_Histogram_rna_type,
	-1, "mode", 3, "Mode",
	"Channels to display when drawing the histogram",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Histogram_mode_get, Histogram_mode_set, NULL, rna_Histogram_mode_items, 5, 0
};

CollectionPropertyRNA rna_Histogram_rna_properties = {
	{NULL, (PropertyRNA*)&rna_Histogram_mode,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Histogram_rna_properties_begin, Histogram_rna_properties_next, Histogram_rna_properties_end, Histogram_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_Histogram = {
	{(ContainerRNA *)&RNA_HookModifier, (ContainerRNA *)&RNA_HemiLamp,
	NULL,
	{(PropertyRNA*)&rna_Histogram_rna_type, (PropertyRNA*)&rna_Histogram_rna_properties}},
	"Histogram"	, NULL,NULL
, 0, "Histogram", "Statistical view of the levels of color in an image",
	17,
	NULL, (PropertyRNA*)&rna_Histogram_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Scopes */
PointerPropertyRNA rna_Scopes_rna_type = {
	{(PropertyRNA*)&rna_Scopes_accuracy, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_Scopes_accuracy = {
	{(PropertyRNA*)&rna_Scopes_use_full_resolution, (PropertyRNA*)&rna_Scopes_rna_type,
	-1, "accuracy", 8195, "Accuracy",
	"Proportion of original image source pixel lines to sample",
	0,
	PROP_FLOAT, PROP_PERCENTAGE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, NULL, NULL,
	offsetof(Scopes, accuracy), 4, NULL},
	Scopes_accuracy_get, Scopes_accuracy_set, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 1, 0.0f, NULL
};

BooleanPropertyRNA rna_Scopes_use_full_resolution = {
	{(PropertyRNA*)&rna_Scopes_histogram, (PropertyRNA*)&rna_Scopes_accuracy,
	-1, "use_full_resolution", 3, "Full Sample",
	"Sample every pixel of the image",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_use_full_resolution_get, Scopes_use_full_resolution_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Scopes_histogram = {
	{(PropertyRNA*)&rna_Scopes_rna_properties, (PropertyRNA*)&rna_Scopes_use_full_resolution,
	-1, "histogram", 0, "Histogram",
	"Histogram for viewing image statistics",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_histogram_get, NULL, NULL, NULL,&RNA_Histogram
};

CollectionPropertyRNA rna_Scopes_rna_properties = {
	{(PropertyRNA*)&rna_Scopes_vectorscope_alpha, (PropertyRNA*)&rna_Scopes_histogram,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_rna_properties_begin, Scopes_rna_properties_next, Scopes_rna_properties_end, Scopes_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_Scopes_vectorscope_alpha = {
	{(PropertyRNA*)&rna_Scopes_waveform_mode, (PropertyRNA*)&rna_Scopes_rna_properties,
	-1, "vectorscope_alpha", 8195, "Vectorscope Opacity",
	"Opacity of the points",
	0,
	PROP_FLOAT, PROP_PERCENTAGE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Scopes, vecscope_alpha), 4, NULL},
	Scopes_vectorscope_alpha_get, Scopes_vectorscope_alpha_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_Scopes_waveform_mode_items[6] = {
	{0, "LUMA", 54, "Luma", ""},
	{1, "RGB", 54, "Red Green Blue", ""},
	{2, "YCBCR601", 54, "YCbCr (ITU 601)", ""},
	{3, "YCBCR709", 54, "YCbCr (ITU 709)", ""},
	{4, "YCBCRJPG", 54, "YCbCr (Jpeg)", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Scopes_waveform_mode = {
	{(PropertyRNA*)&rna_Scopes_waveform_alpha, (PropertyRNA*)&rna_Scopes_vectorscope_alpha,
	-1, "waveform_mode", 3, "Waveform Mode",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Scopes_update, 0, NULL, NULL,
	0, -1, NULL},
	Scopes_waveform_mode_get, Scopes_waveform_mode_set, NULL, rna_Scopes_waveform_mode_items, 5, 0
};

FloatPropertyRNA rna_Scopes_waveform_alpha = {
	{NULL, (PropertyRNA*)&rna_Scopes_waveform_mode,
	-1, "waveform_alpha", 8195, "Waveform Opacity",
	"Opacity of the points",
	0,
	PROP_FLOAT, PROP_PERCENTAGE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Scopes, wavefrm_alpha), 4, NULL},
	Scopes_waveform_alpha_get, Scopes_waveform_alpha_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_Scopes = {
	{(ContainerRNA *)&RNA_Screen, (ContainerRNA *)&RNA_SceneSequence,
	NULL,
	{(PropertyRNA*)&rna_Scopes_rna_type, (PropertyRNA*)&rna_Scopes_waveform_alpha}},
	"Scopes"	, NULL,NULL
, 0, "Scopes", "Scopes for statistical view of an image",
	17,
	NULL, (PropertyRNA*)&rna_Scopes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

