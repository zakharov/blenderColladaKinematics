
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

#include "rna_curve.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_BezierSplinePoint_rna_type;
FloatPropertyRNA rna_BezierSplinePoint_radius;
FloatPropertyRNA rna_BezierSplinePoint_co;
BooleanPropertyRNA rna_BezierSplinePoint_select_control_point;
FloatPropertyRNA rna_BezierSplinePoint_handle_left;
EnumPropertyRNA rna_BezierSplinePoint_handle_left_type;
BooleanPropertyRNA rna_BezierSplinePoint_select_left_handle;
FloatPropertyRNA rna_BezierSplinePoint_handle_right;
EnumPropertyRNA rna_BezierSplinePoint_handle_right_type;
BooleanPropertyRNA rna_BezierSplinePoint_select_right_handle;
BooleanPropertyRNA rna_BezierSplinePoint_hide;
CollectionPropertyRNA rna_BezierSplinePoint_rna_properties;
FloatPropertyRNA rna_BezierSplinePoint_tilt;
FloatPropertyRNA rna_BezierSplinePoint_weight;


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

PointerPropertyRNA rna_Curve_animation_data;
BooleanPropertyRNA rna_Curve_use_auto_texspace;
BooleanPropertyRNA rna_Curve_use_fill_back;
FloatPropertyRNA rna_Curve_bevel_depth;
PointerPropertyRNA rna_Curve_bevel_object;
IntPropertyRNA rna_Curve_bevel_resolution;
BooleanPropertyRNA rna_Curve_use_deform_bounds;
EnumPropertyRNA rna_Curve_dimensions;
BooleanPropertyRNA rna_Curve_show_handles;
BooleanPropertyRNA rna_Curve_show_normal_face;
FloatPropertyRNA rna_Curve_eval_time;
FloatPropertyRNA rna_Curve_extrude;
BooleanPropertyRNA rna_Curve_use_fill_deform;
BooleanPropertyRNA rna_Curve_use_path_follow;
BooleanPropertyRNA rna_Curve_use_fill_front;
CollectionPropertyRNA rna_Curve_materials;
FloatPropertyRNA rna_Curve_offset;
BooleanPropertyRNA rna_Curve_use_time_offset;
BooleanPropertyRNA rna_Curve_use_path;
IntPropertyRNA rna_Curve_path_duration;
BooleanPropertyRNA rna_Curve_use_radius;
IntPropertyRNA rna_Curve_render_resolution_u;
IntPropertyRNA rna_Curve_render_resolution_v;
IntPropertyRNA rna_Curve_resolution_u;
IntPropertyRNA rna_Curve_resolution_v;
PointerPropertyRNA rna_Curve_shape_keys;
CollectionPropertyRNA rna_Curve_splines;
BooleanPropertyRNA rna_Curve_use_stretch;
PointerPropertyRNA rna_Curve_taper_object;
FloatPropertyRNA rna_Curve_texspace_location;
FloatPropertyRNA rna_Curve_texspace_size;
EnumPropertyRNA rna_Curve_twist_mode;
FloatPropertyRNA rna_Curve_twist_smooth;
BooleanPropertyRNA rna_Curve_use_uv_as_generated;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_CurveSplines_rna_type;
PointerPropertyRNA rna_CurveSplines_active;
CollectionPropertyRNA rna_CurveSplines_rna_properties;

extern FunctionRNA rna_CurveSplines_new_func;
extern EnumPropertyRNA rna_CurveSplines_new_type;
extern PointerPropertyRNA rna_CurveSplines_new_spline;

extern FunctionRNA rna_CurveSplines_remove_func;
extern PointerPropertyRNA rna_CurveSplines_remove_spline;



PointerPropertyRNA rna_Spline_rna_type;
CollectionPropertyRNA rna_Spline_bezier_points;
BooleanPropertyRNA rna_Spline_use_bezier_u;
BooleanPropertyRNA rna_Spline_use_bezier_v;
IntPropertyRNA rna_Spline_character_index;
BooleanPropertyRNA rna_Spline_use_cyclic_u;
BooleanPropertyRNA rna_Spline_use_cyclic_v;
BooleanPropertyRNA rna_Spline_use_endpoint_u;
BooleanPropertyRNA rna_Spline_use_endpoint_v;
BooleanPropertyRNA rna_Spline_hide;
IntPropertyRNA rna_Spline_material_index;
IntPropertyRNA rna_Spline_order_u;
IntPropertyRNA rna_Spline_order_v;
CollectionPropertyRNA rna_Spline_points;
IntPropertyRNA rna_Spline_point_count_u;
IntPropertyRNA rna_Spline_point_count_v;
CollectionPropertyRNA rna_Spline_rna_properties;
EnumPropertyRNA rna_Spline_radius_interpolation;
IntPropertyRNA rna_Spline_resolution_u;
IntPropertyRNA rna_Spline_resolution_v;
BooleanPropertyRNA rna_Spline_use_smooth;
EnumPropertyRNA rna_Spline_tilt_interpolation;
EnumPropertyRNA rna_Spline_type;


PointerPropertyRNA rna_SplineBezierPoints_rna_type;
CollectionPropertyRNA rna_SplineBezierPoints_rna_properties;

extern FunctionRNA rna_SplineBezierPoints_add_func;
extern IntPropertyRNA rna_SplineBezierPoints_add_count;



PointerPropertyRNA rna_SplinePoint_rna_type;
FloatPropertyRNA rna_SplinePoint_radius;
BooleanPropertyRNA rna_SplinePoint_hide;
FloatPropertyRNA rna_SplinePoint_co;
CollectionPropertyRNA rna_SplinePoint_rna_properties;
BooleanPropertyRNA rna_SplinePoint_select;
FloatPropertyRNA rna_SplinePoint_tilt;
FloatPropertyRNA rna_SplinePoint_weight;
FloatPropertyRNA rna_SplinePoint_weight_softbody;


PointerPropertyRNA rna_SplinePoints_rna_type;
CollectionPropertyRNA rna_SplinePoints_rna_properties;

extern FunctionRNA rna_SplinePoints_add_func;
extern IntPropertyRNA rna_SplinePoints_add_count;



extern PointerPropertyRNA rna_Curve_animation_data;
extern BooleanPropertyRNA rna_Curve_use_auto_texspace;
extern BooleanPropertyRNA rna_Curve_use_fill_back;
extern FloatPropertyRNA rna_Curve_bevel_depth;
extern PointerPropertyRNA rna_Curve_bevel_object;
extern IntPropertyRNA rna_Curve_bevel_resolution;
extern BooleanPropertyRNA rna_Curve_use_deform_bounds;
extern EnumPropertyRNA rna_Curve_dimensions;
extern BooleanPropertyRNA rna_Curve_show_handles;
extern BooleanPropertyRNA rna_Curve_show_normal_face;
extern FloatPropertyRNA rna_Curve_eval_time;
extern FloatPropertyRNA rna_Curve_extrude;
extern BooleanPropertyRNA rna_Curve_use_fill_deform;
extern BooleanPropertyRNA rna_Curve_use_path_follow;
extern BooleanPropertyRNA rna_Curve_use_fill_front;
extern CollectionPropertyRNA rna_Curve_materials;
extern FloatPropertyRNA rna_Curve_offset;
extern BooleanPropertyRNA rna_Curve_use_time_offset;
extern BooleanPropertyRNA rna_Curve_use_path;
extern IntPropertyRNA rna_Curve_path_duration;
extern BooleanPropertyRNA rna_Curve_use_radius;
extern IntPropertyRNA rna_Curve_render_resolution_u;
extern IntPropertyRNA rna_Curve_render_resolution_v;
extern IntPropertyRNA rna_Curve_resolution_u;
extern IntPropertyRNA rna_Curve_resolution_v;
extern PointerPropertyRNA rna_Curve_shape_keys;
extern CollectionPropertyRNA rna_Curve_splines;
extern BooleanPropertyRNA rna_Curve_use_stretch;
extern PointerPropertyRNA rna_Curve_taper_object;
extern FloatPropertyRNA rna_Curve_texspace_location;
extern FloatPropertyRNA rna_Curve_texspace_size;
extern EnumPropertyRNA rna_Curve_twist_mode;
extern FloatPropertyRNA rna_Curve_twist_smooth;
extern BooleanPropertyRNA rna_Curve_use_uv_as_generated;

extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

BooleanPropertyRNA rna_SurfaceCurve_use_uv_as_generated;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;



PointerPropertyRNA rna_TextBox_rna_type;
CollectionPropertyRNA rna_TextBox_rna_properties;
FloatPropertyRNA rna_TextBox_height;
FloatPropertyRNA rna_TextBox_width;
FloatPropertyRNA rna_TextBox_x;
FloatPropertyRNA rna_TextBox_y;


PointerPropertyRNA rna_TextCharacterFormat_rna_type;
BooleanPropertyRNA rna_TextCharacterFormat_use_bold;
BooleanPropertyRNA rna_TextCharacterFormat_use_italic;
CollectionPropertyRNA rna_TextCharacterFormat_rna_properties;
BooleanPropertyRNA rna_TextCharacterFormat_use_small_caps;
BooleanPropertyRNA rna_TextCharacterFormat_use_underline;


extern PointerPropertyRNA rna_Curve_animation_data;
extern BooleanPropertyRNA rna_Curve_use_auto_texspace;
extern BooleanPropertyRNA rna_Curve_use_fill_back;
extern FloatPropertyRNA rna_Curve_bevel_depth;
extern PointerPropertyRNA rna_Curve_bevel_object;
extern IntPropertyRNA rna_Curve_bevel_resolution;
extern BooleanPropertyRNA rna_Curve_use_deform_bounds;
extern EnumPropertyRNA rna_Curve_dimensions;
extern BooleanPropertyRNA rna_Curve_show_handles;
extern BooleanPropertyRNA rna_Curve_show_normal_face;
extern FloatPropertyRNA rna_Curve_eval_time;
extern FloatPropertyRNA rna_Curve_extrude;
extern BooleanPropertyRNA rna_Curve_use_fill_deform;
extern BooleanPropertyRNA rna_Curve_use_path_follow;
extern BooleanPropertyRNA rna_Curve_use_fill_front;
extern CollectionPropertyRNA rna_Curve_materials;
extern FloatPropertyRNA rna_Curve_offset;
extern BooleanPropertyRNA rna_Curve_use_time_offset;
extern BooleanPropertyRNA rna_Curve_use_path;
extern IntPropertyRNA rna_Curve_path_duration;
extern BooleanPropertyRNA rna_Curve_use_radius;
extern IntPropertyRNA rna_Curve_render_resolution_u;
extern IntPropertyRNA rna_Curve_render_resolution_v;
extern IntPropertyRNA rna_Curve_resolution_u;
extern IntPropertyRNA rna_Curve_resolution_v;
extern PointerPropertyRNA rna_Curve_shape_keys;
extern CollectionPropertyRNA rna_Curve_splines;
extern BooleanPropertyRNA rna_Curve_use_stretch;
extern PointerPropertyRNA rna_Curve_taper_object;
extern FloatPropertyRNA rna_Curve_texspace_location;
extern FloatPropertyRNA rna_Curve_texspace_size;
extern EnumPropertyRNA rna_Curve_twist_mode;
extern FloatPropertyRNA rna_Curve_twist_smooth;
extern BooleanPropertyRNA rna_Curve_use_uv_as_generated;

extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

StringPropertyRNA rna_TextCurve_body;
CollectionPropertyRNA rna_TextCurve_body_format;
FloatPropertyRNA rna_TextCurve_space_line;
PointerPropertyRNA rna_TextCurve_edit_format;
BooleanPropertyRNA rna_TextCurve_use_fast_edit;
PointerPropertyRNA rna_TextCurve_font;
PointerPropertyRNA rna_TextCurve_font_bold;
PointerPropertyRNA rna_TextCurve_font_italic;
PointerPropertyRNA rna_TextCurve_font_bold_italic;
FloatPropertyRNA rna_TextCurve_size;
FloatPropertyRNA rna_TextCurve_space_character;
StringPropertyRNA rna_TextCurve_family;
FloatPropertyRNA rna_TextCurve_shear;
FloatPropertyRNA rna_TextCurve_small_caps_scale;
FloatPropertyRNA rna_TextCurve_space_word;
EnumPropertyRNA rna_TextCurve_align;
PointerPropertyRNA rna_TextCurve_follow_curve;
CollectionPropertyRNA rna_TextCurve_text_boxes;
IntPropertyRNA rna_TextCurve_active_textbox;
FloatPropertyRNA rna_TextCurve_underline_position;
FloatPropertyRNA rna_TextCurve_underline_height;
BooleanPropertyRNA rna_TextCurve_use_uv_as_generated;
FloatPropertyRNA rna_TextCurve_offset_x;
FloatPropertyRNA rna_TextCurve_offset_y;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


PointerRNA BezierSplinePoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float BezierSplinePoint_radius_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (float)(data->radius);
}

void BezierSplinePoint_radius_set(PointerRNA *ptr, float value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->radius= CLAMPIS(value, 0.0f, FLT_MAX);
}

void BezierSplinePoint_co_get(PointerRNA *ptr, float values[3])
{
	rna_BezTriple_ctrlpoint_get(ptr, values);
}

void BezierSplinePoint_co_set(PointerRNA *ptr, const float values[3])
{
	rna_BezTriple_ctrlpoint_set(ptr, values);
}

int BezierSplinePoint_select_control_point_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->f2);
}

void BezierSplinePoint_select_control_point_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->f2= value;
}

void BezierSplinePoint_handle_left_get(PointerRNA *ptr, float values[3])
{
	rna_BezTriple_handle1_get(ptr, values);
}

void BezierSplinePoint_handle_left_set(PointerRNA *ptr, const float values[3])
{
	rna_BezTriple_handle1_set(ptr, values);
}

int BezierSplinePoint_handle_left_type_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->h1);
}

void BezierSplinePoint_handle_left_type_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->h1= value;
}

int BezierSplinePoint_select_left_handle_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->f1);
}

void BezierSplinePoint_select_left_handle_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->f1= value;
}

void BezierSplinePoint_handle_right_get(PointerRNA *ptr, float values[3])
{
	rna_BezTriple_handle2_get(ptr, values);
}

void BezierSplinePoint_handle_right_set(PointerRNA *ptr, const float values[3])
{
	rna_BezTriple_handle2_set(ptr, values);
}

int BezierSplinePoint_handle_right_type_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->h2);
}

void BezierSplinePoint_handle_right_type_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->h2= value;
}

int BezierSplinePoint_select_right_handle_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->f3);
}

void BezierSplinePoint_select_right_handle_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->f3= value;
}

int BezierSplinePoint_hide_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (int)(data->hide);
}

void BezierSplinePoint_hide_set(PointerRNA *ptr, int value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->hide= value;
}

static PointerRNA BezierSplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BezierSplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BezierSplinePoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BezierSplinePoint_rna_properties_get(iter);
}

void BezierSplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BezierSplinePoint_rna_properties_get(iter);
}

void BezierSplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float BezierSplinePoint_tilt_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (float)(data->alfa);
}

void BezierSplinePoint_tilt_set(PointerRNA *ptr, float value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->alfa= value;
}

float BezierSplinePoint_weight_get(PointerRNA *ptr)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	return (float)(data->weight);
}

void BezierSplinePoint_weight_set(PointerRNA *ptr, float value)
{
	BezTriple *data= (BezTriple*)(ptr->data);
	data->weight= CLAMPIS(value, 0.0099999998f, 100.0f);
}

PointerRNA Curve_animation_data_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

int Curve_use_auto_texspace_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->texflag) & 1) != 0);
}

void Curve_use_auto_texspace_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->texflag |= 1;
	else data->texflag &= ~1;
}

int Curve_use_fill_back_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void Curve_use_fill_back_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

float Curve_bevel_depth_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->ext2);
}

void Curve_bevel_depth_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->ext2= value;
}

PointerRNA Curve_bevel_object_get(PointerRNA *ptr)
{
	return rna_Curve_bevelObject_get(ptr);
}

void Curve_bevel_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Curve_bevelObject_set(ptr, value);
}

int Curve_bevel_resolution_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->bevresol);
}

void Curve_bevel_resolution_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->bevresol= CLAMPIS(value, 0, 32);
}

int Curve_use_deform_bounds_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void Curve_use_deform_bounds_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(!value) data->flag |= 64;
	else data->flag &= ~64;
}

int Curve_dimensions_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return ((data->flag) & 1);
}

void Curve_dimensions_set(PointerRNA *ptr, int value)
{
	rna_Curve_dimension_set(ptr, value);
}

int Curve_show_handles_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return !(((data->drawflag) & 1) != 0);
}

void Curve_show_handles_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(!value) data->drawflag |= 1;
	else data->drawflag &= ~1;
}

int Curve_show_normal_face_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return !(((data->drawflag) & 2) != 0);
}

void Curve_show_normal_face_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(!value) data->drawflag |= 2;
	else data->drawflag &= ~2;
}

float Curve_eval_time_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->ctime);
}

void Curve_eval_time_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->ctime= value;
}

float Curve_extrude_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->ext1);
}

void Curve_extrude_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->ext1= CLAMPIS(value, 0.0f, FLT_MAX);
}

int Curve_use_fill_deform_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void Curve_use_fill_deform_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int Curve_use_path_follow_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void Curve_use_path_follow_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

int Curve_use_fill_front_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void Curve_use_fill_front_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int Curve_materials_length(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (data->mat == NULL)? 0: data->totcol;
}

static PointerRNA Curve_materials_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_array_dereference_get(iter));
}

void Curve_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Curve_materials;

	rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

	if(iter->valid)
		iter->ptr= Curve_materials_get(iter);
}

void Curve_materials_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Curve_materials_get(iter);
}

void Curve_materials_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Curve_materials_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Curve_materials_begin(&iter, ptr);

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
		if(found) *r_ptr = Curve_materials_get(&iter);
	}

	Curve_materials_end(&iter);

	return found;
}

float Curve_offset_get(PointerRNA *ptr)
{
	return rna_Curve_offset_get(ptr);
}

void Curve_offset_set(PointerRNA *ptr, float value)
{
	rna_Curve_offset_set(ptr, value);
}

int Curve_use_time_offset_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void Curve_use_time_offset_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 256;
	else data->flag &= ~256;
}

int Curve_use_path_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void Curve_use_path_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int Curve_path_duration_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->pathlen);
}

void Curve_path_duration_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->pathlen= CLAMPIS(value, 1, 300000);
}

int Curve_use_radius_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void Curve_use_radius_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int Curve_render_resolution_u_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->resolu_ren);
}

void Curve_render_resolution_u_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->resolu_ren= CLAMPIS(value, 0, 32767);
}

int Curve_render_resolution_v_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->resolv_ren);
}

void Curve_render_resolution_v_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->resolv_ren= CLAMPIS(value, 0, 32767);
}

int Curve_resolution_u_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->resolu);
}

void Curve_resolution_u_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->resolu= CLAMPIS(value, 1, 32767);
}

int Curve_resolution_v_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->resolv);
}

void Curve_resolution_v_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->resolv= CLAMPIS(value, 1, 32767);
}

PointerRNA Curve_shape_keys_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Key, data->key);
}

static PointerRNA Curve_splines_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Spline, rna_iterator_listbase_get(iter));
}

void Curve_splines_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Curve_splines;

	rna_Curve_splines_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Curve_splines_get(iter);
}

void Curve_splines_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Curve_splines_get(iter);
}

void Curve_splines_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Curve_use_stretch_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void Curve_use_stretch_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

PointerRNA Curve_taper_object_get(PointerRNA *ptr)
{
	return rna_Curve_taperObject_get(ptr);
}

void Curve_taper_object_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Curve_taperObject_set(ptr, value);
}

void Curve_texspace_location_get(PointerRNA *ptr, float values[3])
{
	rna_Curve_texspace_loc_get(ptr, values);
}

void Curve_texspace_location_set(PointerRNA *ptr, const float values[3])
{
	rna_Curve_texspace_loc_set(ptr, values);
}

void Curve_texspace_size_get(PointerRNA *ptr, float values[3])
{
	rna_Curve_texspace_size_get(ptr, values);
}

void Curve_texspace_size_set(PointerRNA *ptr, const float values[3])
{
	rna_Curve_texspace_size_set(ptr, values);
}

int Curve_twist_mode_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->twist_mode);
}

void Curve_twist_mode_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->twist_mode= value;
}

float Curve_twist_smooth_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->twist_smooth);
}

void Curve_twist_smooth_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->twist_smooth= value;
}

int Curve_use_uv_as_generated_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void Curve_use_uv_as_generated_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

PointerRNA CurveSplines_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA CurveSplines_active_get(PointerRNA *ptr)
{
	return rna_Curve_active_spline_get(ptr);
}

void CurveSplines_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Curve_active_spline_set(ptr, value);
}

static PointerRNA CurveSplines_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void CurveSplines_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_CurveSplines_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= CurveSplines_rna_properties_get(iter);
}

void CurveSplines_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= CurveSplines_rna_properties_get(iter);
}

void CurveSplines_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Spline_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int Spline_bezier_points_length(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (data->bezt == NULL)? 0: data->pntsu;
}

static PointerRNA Spline_bezier_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_BezierSplinePoint, rna_iterator_array_get(iter));
}

void Spline_bezier_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Spline_bezier_points;

	rna_iterator_array_begin(iter, data->bezt, sizeof(data->bezt[0]), data->pntsu, 0, NULL);

	if(iter->valid)
		iter->ptr= Spline_bezier_points_get(iter);
}

void Spline_bezier_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Spline_bezier_points_get(iter);
}

void Spline_bezier_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Spline_bezier_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Spline_bezier_points_begin(&iter, ptr);

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
		if(found) *r_ptr = Spline_bezier_points_get(&iter);
	}

	Spline_bezier_points_end(&iter);

	return found;
}

int Spline_use_bezier_u_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->flagu) & 4) != 0);
}

void Spline_use_bezier_u_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->flagu |= 4;
	else data->flagu &= ~4;
}

int Spline_use_bezier_v_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->flagv) & 4) != 0);
}

void Spline_use_bezier_v_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->flagv |= 4;
	else data->flagv &= ~4;
}

int Spline_character_index_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->charidx);
}

int Spline_use_cyclic_u_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->flagu) & 1) != 0);
}

void Spline_use_cyclic_u_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->flagu |= 1;
	else data->flagu &= ~1;
}

int Spline_use_cyclic_v_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->flagv) & 1) != 0);
}

void Spline_use_cyclic_v_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->flagv |= 1;
	else data->flagv &= ~1;
}

int Spline_use_endpoint_u_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->flagu) & 2) != 0);
}

void Spline_use_endpoint_u_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->flagu |= 2;
	else data->flagu &= ~2;
}

int Spline_use_endpoint_v_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->flagv) & 2) != 0);
}

void Spline_use_endpoint_v_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->flagv |= 2;
	else data->flagv &= ~2;
}

int Spline_hide_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->hide) & 1) != 0);
}

void Spline_hide_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->hide |= 1;
	else data->hide &= ~1;
}

int Spline_material_index_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->mat_nr);
}

void Spline_material_index_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	data->mat_nr= CLAMPIS(value, 0, 32767);
}

int Spline_order_u_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->orderu);
}

void Spline_order_u_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	data->orderu= CLAMPIS(value, 2, 6);
}

int Spline_order_v_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->orderv);
}

void Spline_order_v_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	data->orderv= CLAMPIS(value, 2, 6);
}

static PointerRNA Spline_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_SplinePoint, rna_iterator_array_get(iter));
}

void Spline_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Spline_points;

	rna_BPoint_array_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Spline_points_get(iter);
}

void Spline_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Spline_points_get(iter);
}

void Spline_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Spline_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Spline_points_begin(&iter, ptr);

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
		if(found) *r_ptr = Spline_points_get(&iter);
	}

	Spline_points_end(&iter);

	return found;
}

int Spline_point_count_u_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->pntsu);
}

int Spline_point_count_v_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->pntsv);
}

static PointerRNA Spline_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Spline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Spline_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Spline_rna_properties_get(iter);
}

void Spline_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Spline_rna_properties_get(iter);
}

void Spline_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Spline_radius_interpolation_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->radius_interp);
}

void Spline_radius_interpolation_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	data->radius_interp= value;
}

int Spline_resolution_u_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->resolu);
}

void Spline_resolution_u_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	data->resolu= CLAMPIS(value, 1, 32767);
}

int Spline_resolution_v_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->resolv);
}

void Spline_resolution_v_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	data->resolv= CLAMPIS(value, 1, 32767);
}

int Spline_use_smooth_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Spline_use_smooth_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int Spline_tilt_interpolation_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->tilt_interp);
}

void Spline_tilt_interpolation_set(PointerRNA *ptr, int value)
{
	Nurb *data= (Nurb*)(ptr->data);
	data->tilt_interp= value;
}

int Spline_type_get(PointerRNA *ptr)
{
	Nurb *data= (Nurb*)(ptr->data);
	return (int)(data->type);
}

void Spline_type_set(PointerRNA *ptr, int value)
{
	rna_Nurb_type_set(ptr, value);
}

PointerRNA SplineBezierPoints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA SplineBezierPoints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SplineBezierPoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_SplineBezierPoints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= SplineBezierPoints_rna_properties_get(iter);
}

void SplineBezierPoints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= SplineBezierPoints_rna_properties_get(iter);
}

void SplineBezierPoints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA SplinePoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float SplinePoint_radius_get(PointerRNA *ptr)
{
	BPoint *data= (BPoint*)(ptr->data);
	return (float)(data->radius);
}

void SplinePoint_radius_set(PointerRNA *ptr, float value)
{
	BPoint *data= (BPoint*)(ptr->data);
	data->radius= CLAMPIS(value, 0.0f, FLT_MAX);
}

int SplinePoint_hide_get(PointerRNA *ptr)
{
	BPoint *data= (BPoint*)(ptr->data);
	return (int)(data->hide);
}

void SplinePoint_hide_set(PointerRNA *ptr, int value)
{
	BPoint *data= (BPoint*)(ptr->data);
	data->hide= value;
}

void SplinePoint_co_get(PointerRNA *ptr, float values[4])
{
	BPoint *data= (BPoint*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= (float)(((float*)data->vec)[i]);
	}
}

void SplinePoint_co_set(PointerRNA *ptr, const float values[4])
{
	BPoint *data= (BPoint*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		((float*)data->vec)[i]= values[i];
	}
}

static PointerRNA SplinePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SplinePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_SplinePoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= SplinePoint_rna_properties_get(iter);
}

void SplinePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= SplinePoint_rna_properties_get(iter);
}

void SplinePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SplinePoint_select_get(PointerRNA *ptr)
{
	BPoint *data= (BPoint*)(ptr->data);
	return (int)(data->f1);
}

void SplinePoint_select_set(PointerRNA *ptr, int value)
{
	BPoint *data= (BPoint*)(ptr->data);
	data->f1= value;
}

float SplinePoint_tilt_get(PointerRNA *ptr)
{
	BPoint *data= (BPoint*)(ptr->data);
	return (float)(data->alfa);
}

void SplinePoint_tilt_set(PointerRNA *ptr, float value)
{
	BPoint *data= (BPoint*)(ptr->data);
	data->alfa= value;
}

float SplinePoint_weight_get(PointerRNA *ptr)
{
	BPoint *data= (BPoint*)(ptr->data);
	return (float)(data->vec[3]);
}

void SplinePoint_weight_set(PointerRNA *ptr, float value)
{
	BPoint *data= (BPoint*)(ptr->data);
	data->vec[3]= value;
}

float SplinePoint_weight_softbody_get(PointerRNA *ptr)
{
	BPoint *data= (BPoint*)(ptr->data);
	return (float)(data->weight);
}

void SplinePoint_weight_softbody_set(PointerRNA *ptr, float value)
{
	BPoint *data= (BPoint*)(ptr->data);
	data->weight= CLAMPIS(value, 0.0099999998f, 100.0f);
}

PointerRNA SplinePoints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA SplinePoints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void SplinePoints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_SplinePoints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= SplinePoints_rna_properties_get(iter);
}

void SplinePoints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= SplinePoints_rna_properties_get(iter);
}

void SplinePoints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int SurfaceCurve_use_uv_as_generated_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void SurfaceCurve_use_uv_as_generated_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

PointerRNA TextBox_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA TextBox_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TextBox_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_TextBox_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= TextBox_rna_properties_get(iter);
}

void TextBox_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= TextBox_rna_properties_get(iter);
}

void TextBox_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

float TextBox_height_get(PointerRNA *ptr)
{
	TextBox *data= (TextBox*)(ptr->data);
	return (float)(data->h);
}

void TextBox_height_set(PointerRNA *ptr, float value)
{
	TextBox *data= (TextBox*)(ptr->data);
	data->h= CLAMPIS(value, 0.0f, 50.0f);
}

float TextBox_width_get(PointerRNA *ptr)
{
	TextBox *data= (TextBox*)(ptr->data);
	return (float)(data->w);
}

void TextBox_width_set(PointerRNA *ptr, float value)
{
	TextBox *data= (TextBox*)(ptr->data);
	data->w= CLAMPIS(value, 0.0f, 50.0f);
}

float TextBox_x_get(PointerRNA *ptr)
{
	TextBox *data= (TextBox*)(ptr->data);
	return (float)(data->x);
}

void TextBox_x_set(PointerRNA *ptr, float value)
{
	TextBox *data= (TextBox*)(ptr->data);
	data->x= CLAMPIS(value, -50.0f, 50.0f);
}

float TextBox_y_get(PointerRNA *ptr)
{
	TextBox *data= (TextBox*)(ptr->data);
	return (float)(data->y);
}

void TextBox_y_set(PointerRNA *ptr, float value)
{
	TextBox *data= (TextBox*)(ptr->data);
	data->y= CLAMPIS(value, -50.0f, 50.0f);
}

PointerRNA TextCharacterFormat_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int TextCharacterFormat_use_bold_get(PointerRNA *ptr)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void TextCharacterFormat_use_bold_set(PointerRNA *ptr, int value)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int TextCharacterFormat_use_italic_get(PointerRNA *ptr)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void TextCharacterFormat_use_italic_set(PointerRNA *ptr, int value)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA TextCharacterFormat_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void TextCharacterFormat_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_TextCharacterFormat_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= TextCharacterFormat_rna_properties_get(iter);
}

void TextCharacterFormat_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= TextCharacterFormat_rna_properties_get(iter);
}

void TextCharacterFormat_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int TextCharacterFormat_use_small_caps_get(PointerRNA *ptr)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void TextCharacterFormat_use_small_caps_set(PointerRNA *ptr, int value)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

int TextCharacterFormat_use_underline_get(PointerRNA *ptr)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void TextCharacterFormat_use_underline_set(PointerRNA *ptr, int value)
{
	CharInfo *data= (CharInfo*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

void TextCurve_body_get(PointerRNA *ptr, char *value)
{
	rna_Curve_body_get(ptr, value);
}

int TextCurve_body_length(PointerRNA *ptr)
{
	return rna_Curve_body_length(ptr);
}

void TextCurve_body_set(PointerRNA *ptr, const char *value)
{
	rna_Curve_body_set(ptr, value);
}

int TextCurve_body_format_length(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (data->strinfo == NULL)? 0: data->len;
}

static PointerRNA TextCurve_body_format_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_TextCharacterFormat, rna_iterator_array_get(iter));
}

void TextCurve_body_format_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_TextCurve_body_format;

	rna_iterator_array_begin(iter, data->strinfo, sizeof(data->strinfo[0]), data->len, 0, NULL);

	if(iter->valid)
		iter->ptr= TextCurve_body_format_get(iter);
}

void TextCurve_body_format_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= TextCurve_body_format_get(iter);
}

void TextCurve_body_format_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int TextCurve_body_format_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	TextCurve_body_format_begin(&iter, ptr);

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
		if(found) *r_ptr = TextCurve_body_format_get(&iter);
	}

	TextCurve_body_format_end(&iter);

	return found;
}

float TextCurve_space_line_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->linedist);
}

void TextCurve_space_line_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->linedist= CLAMPIS(value, 0.0f, 10.0f);
}

PointerRNA TextCurve_edit_format_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_TextCharacterFormat, &data->curinfo);
}

int TextCurve_use_fast_edit_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void TextCurve_use_fast_edit_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 512;
	else data->flag &= ~512;
}

PointerRNA TextCurve_font_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfont);
}

void TextCurve_font_set(PointerRNA *ptr, PointerRNA value)
{
	Curve *data= (Curve*)(ptr->data);

	if(data->vfont)
		id_us_min((ID*)data->vfont);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->vfont= value.data;
}

PointerRNA TextCurve_font_bold_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfontb);
}

void TextCurve_font_bold_set(PointerRNA *ptr, PointerRNA value)
{
	Curve *data= (Curve*)(ptr->data);

	if(data->vfontb)
		id_us_min((ID*)data->vfontb);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->vfontb= value.data;
}

PointerRNA TextCurve_font_italic_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfonti);
}

void TextCurve_font_italic_set(PointerRNA *ptr, PointerRNA value)
{
	Curve *data= (Curve*)(ptr->data);

	if(data->vfonti)
		id_us_min((ID*)data->vfonti);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->vfonti= value.data;
}

PointerRNA TextCurve_font_bold_italic_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_VectorFont, data->vfontbi);
}

void TextCurve_font_bold_italic_set(PointerRNA *ptr, PointerRNA value)
{
	Curve *data= (Curve*)(ptr->data);

	if(data->vfontbi)
		id_us_min((ID*)data->vfontbi);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->vfontbi= value.data;
}

float TextCurve_size_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->fsize);
}

void TextCurve_size_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->fsize= CLAMPIS(value, 0.0001000000f, 10000.0f);
}

float TextCurve_space_character_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->spacing);
}

void TextCurve_space_character_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->spacing= CLAMPIS(value, 0.0f, 10.0f);
}

void TextCurve_family_get(PointerRNA *ptr, char *value)
{
	Curve *data= (Curve*)(ptr->data);
	BLI_strncpy(value, data->family, 22);
}

int TextCurve_family_length(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return strlen(data->family);
}

void TextCurve_family_set(PointerRNA *ptr, const char *value)
{
	Curve *data= (Curve*)(ptr->data);
	BLI_strncpy(data->family, value, 22);
}

float TextCurve_shear_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->shear);
}

void TextCurve_shear_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->shear= CLAMPIS(value, -1.0f, 1.0f);
}

float TextCurve_small_caps_scale_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->smallcaps_scale);
}

void TextCurve_small_caps_scale_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->smallcaps_scale= value;
}

float TextCurve_space_word_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->wordspace);
}

void TextCurve_space_word_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->wordspace= CLAMPIS(value, 0.0f, 10.0f);
}

int TextCurve_align_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->spacemode);
}

void TextCurve_align_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->spacemode= value;
}

PointerRNA TextCurve_follow_curve_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->textoncurve);
}

void TextCurve_follow_curve_set(PointerRNA *ptr, PointerRNA value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value.data)
		id_lib_extern((ID*)value.data);

	data->textoncurve= value.data;
}

int TextCurve_text_boxes_length(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (data->tb == NULL)? 0: data->totbox;
}

static PointerRNA TextCurve_text_boxes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_TextBox, rna_iterator_array_get(iter));
}

void TextCurve_text_boxes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_TextCurve_text_boxes;

	rna_iterator_array_begin(iter, data->tb, sizeof(data->tb[0]), data->totbox, 0, NULL);

	if(iter->valid)
		iter->ptr= TextCurve_text_boxes_get(iter);
}

void TextCurve_text_boxes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= TextCurve_text_boxes_get(iter);
}

void TextCurve_text_boxes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int TextCurve_text_boxes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	TextCurve_text_boxes_begin(&iter, ptr);

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
		if(found) *r_ptr = TextCurve_text_boxes_get(&iter);
	}

	TextCurve_text_boxes_end(&iter);

	return found;
}

int TextCurve_active_textbox_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (int)(data->actbox);
}

void TextCurve_active_textbox_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	data->actbox= value;
}

float TextCurve_underline_position_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->ulpos);
}

void TextCurve_underline_position_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->ulpos= CLAMPIS(value, -0.2000000030f, 0.8000000119f);
}

float TextCurve_underline_height_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->ulheight);
}

void TextCurve_underline_height_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->ulheight= CLAMPIS(value, -0.2000000030f, 0.8000000119f);
}

int TextCurve_use_uv_as_generated_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void TextCurve_use_uv_as_generated_set(PointerRNA *ptr, int value)
{
	Curve *data= (Curve*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

float TextCurve_offset_x_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->xof);
}

void TextCurve_offset_x_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->xof= CLAMPIS(value, -50.0f, 50.0f);
}

float TextCurve_offset_y_get(PointerRNA *ptr)
{
	Curve *data= (Curve*)(ptr->data);
	return (float)(data->yof);
}

void TextCurve_offset_y_set(PointerRNA *ptr, float value)
{
	Curve *data= (Curve*)(ptr->data);
	data->yof= CLAMPIS(value, -50.0f, 50.0f);
}



void CurveSplines_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	int type;
	struct Nurb *spline;
	char *_data, *_retdata;
	
	_self= (struct Curve *)_ptr->data;
	_data= (char *)_parms->data;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	spline= rna_Curve_spline_new(_self, type);
	*((struct Nurb**)_retdata)= spline;
}

void CurveSplines_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Curve *_self;
	struct Nurb *spline;
	char *_data;
	
	_self= (struct Curve *)_ptr->data;
	_data= (char *)_parms->data;
	spline= *((struct Nurb**)_data);
	
	rna_Curve_spline_remove(_self, reports, spline);
}

/* Repeated prototypes to detect errors */

struct Nurb *rna_Curve_spline_new(struct Curve *_self, int type);
void rna_Curve_spline_remove(struct Curve *_self, ReportList *reports, struct Nurb *spline);


void SplineBezierPoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Nurb *_self;
	int count;
	char *_data;
	
	_selfid= (struct ID*)_ptr->id.data;
	_self= (struct Nurb *)_ptr->data;
	_data= (char *)_parms->data;
	count= *((int*)_data);
	
	rna_Curve_spline_bezpoints_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_bezpoints_add(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count);


void SplinePoints_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct Nurb *_self;
	int count;
	char *_data;
	
	_selfid= (struct ID*)_ptr->id.data;
	_self= (struct Nurb *)_ptr->data;
	_data= (char *)_parms->data;
	count= *((int*)_data);
	
	rna_Curve_spline_points_add(_selfid, _self, reports, count);
}

/* Repeated prototypes to detect errors */

void rna_Curve_spline_points_add(struct ID *_selfid, struct Nurb *_self, ReportList *reports, int count);





/* Bezier Curve Point */
PointerPropertyRNA rna_BezierSplinePoint_rna_type = {
	{(PropertyRNA*)&rna_BezierSplinePoint_radius, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BezierSplinePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_BezierSplinePoint_radius = {
	{(PropertyRNA*)&rna_BezierSplinePoint_co, (PropertyRNA*)&rna_BezierSplinePoint_rna_type,
	-1, "radius", 8195, "Bevel Radius",
	"Radius for bevelling",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BezTriple, radius), 4, NULL},
	BezierSplinePoint_radius_get, BezierSplinePoint_radius_set, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static float rna_BezierSplinePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_co = {
	{(PropertyRNA*)&rna_BezierSplinePoint_select_control_point, (PropertyRNA*)&rna_BezierSplinePoint_radius,
	-1, "co", 3, "Control Point",
	"Coordinates of the control point",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, BezierSplinePoint_co_get, BezierSplinePoint_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_BezierSplinePoint_co_default
};

BooleanPropertyRNA rna_BezierSplinePoint_select_control_point = {
	{(PropertyRNA*)&rna_BezierSplinePoint_handle_left, (PropertyRNA*)&rna_BezierSplinePoint_co,
	-1, "select_control_point", 8195, "Control Point selected",
	"Control point selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BezTriple, f2), 2, NULL},
	BezierSplinePoint_select_control_point_get, BezierSplinePoint_select_control_point_set, NULL, NULL, 0, NULL
};

static float rna_BezierSplinePoint_handle_left_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_handle_left = {
	{(PropertyRNA*)&rna_BezierSplinePoint_handle_left_type, (PropertyRNA*)&rna_BezierSplinePoint_select_control_point,
	-1, "handle_left", 3, "Handle 1",
	"Coordinates of the first handle",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, BezierSplinePoint_handle_left_get, BezierSplinePoint_handle_left_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_BezierSplinePoint_handle_left_default
};

static EnumPropertyItem rna_BezierSplinePoint_handle_left_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BezierSplinePoint_handle_left_type = {
	{(PropertyRNA*)&rna_BezierSplinePoint_select_left_handle, (PropertyRNA*)&rna_BezierSplinePoint_handle_left,
	-1, "handle_left_type", 3, "Handle 1 Type",
	"Handle types",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_points, 0, NULL, NULL,
	0, -1, NULL},
	BezierSplinePoint_handle_left_type_get, BezierSplinePoint_handle_left_type_set, NULL, rna_BezierSplinePoint_handle_left_type_items, 4, 0
};

BooleanPropertyRNA rna_BezierSplinePoint_select_left_handle = {
	{(PropertyRNA*)&rna_BezierSplinePoint_handle_right, (PropertyRNA*)&rna_BezierSplinePoint_handle_left_type,
	-1, "select_left_handle", 8195, "Handle 1 selected",
	"Handle 1 selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BezTriple, f1), 2, NULL},
	BezierSplinePoint_select_left_handle_get, BezierSplinePoint_select_left_handle_set, NULL, NULL, 0, NULL
};

static float rna_BezierSplinePoint_handle_right_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_BezierSplinePoint_handle_right = {
	{(PropertyRNA*)&rna_BezierSplinePoint_handle_right_type, (PropertyRNA*)&rna_BezierSplinePoint_select_left_handle,
	-1, "handle_right", 3, "Handle 2",
	"Coordinates of the second handle",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_points, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, BezierSplinePoint_handle_right_get, BezierSplinePoint_handle_right_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_BezierSplinePoint_handle_right_default
};

static EnumPropertyItem rna_BezierSplinePoint_handle_right_type_items[5] = {
	{0, "FREE", 0, "Free", ""},
	{1, "AUTO", 0, "Auto", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BezierSplinePoint_handle_right_type = {
	{(PropertyRNA*)&rna_BezierSplinePoint_select_right_handle, (PropertyRNA*)&rna_BezierSplinePoint_handle_right,
	-1, "handle_right_type", 3, "Handle 2 Type",
	"Handle types",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_points, 0, NULL, NULL,
	0, -1, NULL},
	BezierSplinePoint_handle_right_type_get, BezierSplinePoint_handle_right_type_set, NULL, rna_BezierSplinePoint_handle_right_type_items, 4, 0
};

BooleanPropertyRNA rna_BezierSplinePoint_select_right_handle = {
	{(PropertyRNA*)&rna_BezierSplinePoint_hide, (PropertyRNA*)&rna_BezierSplinePoint_handle_right_type,
	-1, "select_right_handle", 8195, "Handle 2 selected",
	"Handle 2 selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BezTriple, f3), 2, NULL},
	BezierSplinePoint_select_right_handle_get, BezierSplinePoint_select_right_handle_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_BezierSplinePoint_hide = {
	{(PropertyRNA*)&rna_BezierSplinePoint_rna_properties, (PropertyRNA*)&rna_BezierSplinePoint_select_right_handle,
	-1, "hide", 8195, "Hide",
	"Visibility status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BezTriple, hide), 2, NULL},
	BezierSplinePoint_hide_get, BezierSplinePoint_hide_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_BezierSplinePoint_rna_properties = {
	{(PropertyRNA*)&rna_BezierSplinePoint_tilt, (PropertyRNA*)&rna_BezierSplinePoint_hide,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BezierSplinePoint_rna_properties_begin, BezierSplinePoint_rna_properties_next, BezierSplinePoint_rna_properties_end, BezierSplinePoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_BezierSplinePoint_tilt = {
	{(PropertyRNA*)&rna_BezierSplinePoint_weight, (PropertyRNA*)&rna_BezierSplinePoint_rna_properties,
	-1, "tilt", 8195, "Tilt",
	"Tilt in 3D View",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BezTriple, alfa), 4, NULL},
	BezierSplinePoint_tilt_get, BezierSplinePoint_tilt_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BezierSplinePoint_weight = {
	{NULL, (PropertyRNA*)&rna_BezierSplinePoint_tilt,
	-1, "weight", 8195, "Weight",
	"Softbody goal weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BezTriple, weight), 4, NULL},
	BezierSplinePoint_weight_get, BezierSplinePoint_weight_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BezierSplinePoint = {
	{(ContainerRNA *)&RNA_BlendData, (ContainerRNA *)&RNA_BevelModifier,
	NULL,
	{(PropertyRNA*)&rna_BezierSplinePoint_rna_type, (PropertyRNA*)&rna_BezierSplinePoint_weight}},
	"BezierSplinePoint"	, NULL,NULL
, 0, "Bezier Curve Point", "Bezier curve point with two handles",
	17,
	NULL, (PropertyRNA*)&rna_BezierSplinePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Curve_spline_point_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Curve */
PointerPropertyRNA rna_Curve_animation_data = {
	{(PropertyRNA*)&rna_Curve_use_auto_texspace, NULL,
	-1, "animation_data", 0, "Animation Data",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Curve_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

BooleanPropertyRNA rna_Curve_use_auto_texspace = {
	{(PropertyRNA*)&rna_Curve_use_fill_back, (PropertyRNA*)&rna_Curve_animation_data,
	-1, "use_auto_texspace", 3, "Auto Texture Space",
	"Adjusts active object\'s texture space automatically when transforming object",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_texspace_set, 85393408, NULL, NULL,
	0, -1, NULL},
	Curve_use_auto_texspace_get, Curve_use_auto_texspace_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Curve_use_fill_back = {
	{(PropertyRNA*)&rna_Curve_bevel_depth, (PropertyRNA*)&rna_Curve_use_auto_texspace,
	-1, "use_fill_back", 3, "Back",
	"Draw filled back for extruded/beveled curves",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_fill_back_get, Curve_use_fill_back_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Curve_bevel_depth = {
	{(PropertyRNA*)&rna_Curve_bevel_object, (PropertyRNA*)&rna_Curve_use_fill_back,
	-1, "bevel_depth", 8195, "Bevel Depth",
	"Bevel depth when not using a bevel object",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, ext2), 4, NULL},
	Curve_bevel_depth_get, Curve_bevel_depth_set, NULL, NULL, NULL, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_Curve_bevel_object = {
	{(PropertyRNA*)&rna_Curve_bevel_resolution, (PropertyRNA*)&rna_Curve_bevel_depth,
	-1, "bevel_object", 1, "Bevel Object",
	"Curve object name that defines the bevel shape",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, NULL, NULL,
	0, -1, NULL},
	Curve_bevel_object_get, Curve_bevel_object_set, NULL, rna_Curve_otherObject_poll,&RNA_Object
};

IntPropertyRNA rna_Curve_bevel_resolution = {
	{(PropertyRNA*)&rna_Curve_use_deform_bounds, (PropertyRNA*)&rna_Curve_bevel_object,
	-1, "bevel_resolution", 8195, "Bevel Resolution",
	"Bevel resolution when depth is non-zero and no specific bevel object has been defined",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, bevresol), 1, NULL},
	Curve_bevel_resolution_get, Curve_bevel_resolution_set, NULL, NULL, NULL,
	0, 32, 0, 32, 1, 0, NULL
};

BooleanPropertyRNA rna_Curve_use_deform_bounds = {
	{(PropertyRNA*)&rna_Curve_dimensions, (PropertyRNA*)&rna_Curve_bevel_resolution,
	-1, "use_deform_bounds", 3, "Bounds Clamp",
	"Use the mesh bounds to clamp the deformation",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_deform_bounds_get, Curve_use_deform_bounds_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Curve_dimensions_items[3] = {
	{0, "2D", 0, "2D", "Clamp the Z axis of of the curve"},
	{1, "3D", 0, "3D", "Allow editing on the Z axis of this curve, also alows tilt and curve radius to be used"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_dimensions = {
	{(PropertyRNA*)&rna_Curve_show_handles, (PropertyRNA*)&rna_Curve_use_deform_bounds,
	-1, "dimensions", 3, "Dimensions",
	"Select 2D or 3D curve type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_dimensions_get, Curve_dimensions_set, NULL, rna_Curve_dimensions_items, 2, 0
};

BooleanPropertyRNA rna_Curve_show_handles = {
	{(PropertyRNA*)&rna_Curve_show_normal_face, (PropertyRNA*)&rna_Curve_dimensions,
	-1, "show_handles", 3, "Draw Handles",
	"Display bezier handles in editmode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 274399232, NULL, NULL,
	0, -1, NULL},
	Curve_show_handles_get, Curve_show_handles_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Curve_show_normal_face = {
	{(PropertyRNA*)&rna_Curve_eval_time, (PropertyRNA*)&rna_Curve_show_handles,
	-1, "show_normal_face", 3, "Draw Normals",
	"Display 3D curve normals in editmode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 274399232, NULL, NULL,
	0, -1, NULL},
	Curve_show_normal_face_get, Curve_show_normal_face_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Curve_eval_time = {
	{(PropertyRNA*)&rna_Curve_extrude, (PropertyRNA*)&rna_Curve_show_normal_face,
	-1, "eval_time", 8195, "Evaluation Time",
	"Parametric position along the length of the curve that Objects \'following\' it should be at. Position is evaluated by dividing by the \'Path Length\' value",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, ctime), 4, NULL},
	Curve_eval_time_get, Curve_eval_time_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_Curve_extrude = {
	{(PropertyRNA*)&rna_Curve_use_fill_deform, (PropertyRNA*)&rna_Curve_eval_time,
	-1, "extrude", 8195, "Extrude",
	"Amount of curve extrusion when not using a bevel object",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, ext1), 4, NULL},
	Curve_extrude_get, Curve_extrude_set, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Curve_use_fill_deform = {
	{(PropertyRNA*)&rna_Curve_use_path_follow, (PropertyRNA*)&rna_Curve_extrude,
	-1, "use_fill_deform", 3, "Fill deformed",
	"Fill curve after applying shape keys and all modifiers",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_fill_deform_get, Curve_use_fill_deform_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Curve_use_path_follow = {
	{(PropertyRNA*)&rna_Curve_use_fill_front, (PropertyRNA*)&rna_Curve_use_fill_deform,
	-1, "use_path_follow", 3, "Follow",
	"Make curve path children to rotate along the path",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_path_follow_get, Curve_use_path_follow_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Curve_use_fill_front = {
	{(PropertyRNA*)&rna_Curve_materials, (PropertyRNA*)&rna_Curve_use_path_follow,
	-1, "use_fill_front", 3, "Front",
	"Draw filled front for extruded/beveled curves",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_fill_front_get, Curve_use_fill_front_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Curve_materials = {
	{(PropertyRNA*)&rna_Curve_offset, (PropertyRNA*)&rna_Curve_use_fill_front,
	-1, "materials", 0, "Materials",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_IDMaterials},
	Curve_materials_begin, Curve_materials_next, Curve_materials_end, Curve_materials_get, Curve_materials_length, Curve_materials_lookup_int, NULL, &RNA_Material
};

FloatPropertyRNA rna_Curve_offset = {
	{(PropertyRNA*)&rna_Curve_use_time_offset, (PropertyRNA*)&rna_Curve_materials,
	-1, "offset", 3, "Offset",
	"Offset the curve to adjust the width of a text",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_offset_get, Curve_offset_set, NULL, NULL, NULL, -1.0f, 1.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Curve_use_time_offset = {
	{(PropertyRNA*)&rna_Curve_use_path, (PropertyRNA*)&rna_Curve_offset,
	-1, "use_time_offset", 3, "Offset Path Distance",
	"Children will use TimeOffs value as path distance offset",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_time_offset_get, Curve_use_time_offset_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Curve_use_path = {
	{(PropertyRNA*)&rna_Curve_path_duration, (PropertyRNA*)&rna_Curve_use_time_offset,
	-1, "use_path", 3, "Path",
	"Enable the curve to become a translation path",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_path_get, Curve_use_path_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Curve_path_duration = {
	{(PropertyRNA*)&rna_Curve_use_radius, (PropertyRNA*)&rna_Curve_use_path,
	-1, "path_duration", 8195, "Path Length",
	"The number of frames that are needed to traverse the path, defining the maximum value for the \'Evaluation Time\' setting",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, pathlen), 0, NULL},
	Curve_path_duration_get, Curve_path_duration_set, NULL, NULL, NULL,
	1, 300000, 1, 300000, 1, 0, NULL
};

BooleanPropertyRNA rna_Curve_use_radius = {
	{(PropertyRNA*)&rna_Curve_render_resolution_u, (PropertyRNA*)&rna_Curve_path_duration,
	-1, "use_radius", 3, "Radius",
	"Option for paths: apply the curve radius with path following it and deforming",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_radius_get, Curve_use_radius_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Curve_render_resolution_u = {
	{(PropertyRNA*)&rna_Curve_render_resolution_v, (PropertyRNA*)&rna_Curve_use_radius,
	-1, "render_resolution_u", 8195, "Render Resolution U",
	"Surface resolution in U direction used while rendering. Zero skips this property",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Curve, resolu_ren), 1, NULL},
	Curve_render_resolution_u_get, Curve_render_resolution_u_set, NULL, NULL, NULL,
	0, 64, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Curve_render_resolution_v = {
	{(PropertyRNA*)&rna_Curve_resolution_u, (PropertyRNA*)&rna_Curve_render_resolution_u,
	-1, "render_resolution_v", 8195, "Render Resolution V",
	"Surface resolution in V direction used while rendering. Zero skips this property",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Curve, resolv_ren), 1, NULL},
	Curve_render_resolution_v_get, Curve_render_resolution_v_set, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Curve_resolution_u = {
	{(PropertyRNA*)&rna_Curve_resolution_v, (PropertyRNA*)&rna_Curve_render_resolution_v,
	-1, "resolution_u", 8195, "Resolution U",
	"Surface resolution in U direction",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_resolution_u_update_data, 0, NULL, NULL,
	offsetof(Curve, resolu), 1, NULL},
	Curve_resolution_u_get, Curve_resolution_u_set, NULL, NULL, NULL,
	1, 64, 1, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Curve_resolution_v = {
	{(PropertyRNA*)&rna_Curve_shape_keys, (PropertyRNA*)&rna_Curve_resolution_u,
	-1, "resolution_v", 8195, "Resolution V",
	"Surface resolution in V direction",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_resolution_v_update_data, 0, NULL, NULL,
	offsetof(Curve, resolv), 1, NULL},
	Curve_resolution_v_get, Curve_resolution_v_set, NULL, NULL, NULL,
	1, 32767, 1, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_Curve_shape_keys = {
	{(PropertyRNA*)&rna_Curve_splines, (PropertyRNA*)&rna_Curve_resolution_v,
	-1, "shape_keys", 64, "Shape Keys",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Curve_shape_keys_get, NULL, NULL, NULL,&RNA_Key
};

CollectionPropertyRNA rna_Curve_splines = {
	{(PropertyRNA*)&rna_Curve_use_stretch, (PropertyRNA*)&rna_Curve_shape_keys,
	-1, "splines", 0, "Splines",
	"Collection of splines in this curve data object",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_CurveSplines},
	Curve_splines_begin, Curve_splines_next, Curve_splines_end, Curve_splines_get, NULL, NULL, NULL, &RNA_Spline
};

BooleanPropertyRNA rna_Curve_use_stretch = {
	{(PropertyRNA*)&rna_Curve_taper_object, (PropertyRNA*)&rna_Curve_splines,
	-1, "use_stretch", 3, "Stretch",
	"Option for curve-deform: makes deformed child to stretch along entire path",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_stretch_get, Curve_use_stretch_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Curve_taper_object = {
	{(PropertyRNA*)&rna_Curve_texspace_location, (PropertyRNA*)&rna_Curve_use_stretch,
	-1, "taper_object", 1, "Taper Object",
	"Curve object name that defines the taper (width)",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, NULL, NULL,
	0, -1, NULL},
	Curve_taper_object_get, Curve_taper_object_set, NULL, rna_Curve_otherObject_poll,&RNA_Object
};

static float rna_Curve_texspace_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Curve_texspace_location = {
	{(PropertyRNA*)&rna_Curve_texspace_size, (PropertyRNA*)&rna_Curve_taper_object,
	-1, "texspace_location", 3, "Texture Space Location",
	"Texture space location",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_data, 0, rna_Curve_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, Curve_texspace_location_get, Curve_texspace_location_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Curve_texspace_location_default
};

static float rna_Curve_texspace_size_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Curve_texspace_size = {
	{(PropertyRNA*)&rna_Curve_twist_mode, (PropertyRNA*)&rna_Curve_texspace_location,
	-1, "texspace_size", 3, "Texture Space Size",
	"Texture space size",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Curve_update_data, 0, rna_Curve_texspace_editable, NULL,
	0, -1, NULL},
	NULL, NULL, Curve_texspace_size_get, Curve_texspace_size_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Curve_texspace_size_default
};

static EnumPropertyItem rna_Curve_twist_mode_items[4] = {
	{0, "Z_UP", 0, "Z-Up", "Use Z-Up axis to calculate the curve twist at each point"},
	{3, "MINIMUM", 0, "Minimum", "Use the least twist over the entire curve"},
	{4, "TANGENT", 0, "Tangent", "Use the tangent to calculate twist"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Curve_twist_mode = {
	{(PropertyRNA*)&rna_Curve_twist_smooth, (PropertyRNA*)&rna_Curve_texspace_size,
	-1, "twist_mode", 3, "Twist Method",
	"The type of tilt calculation for 3D Curves",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_twist_mode_get, Curve_twist_mode_set, NULL, rna_Curve_twist_mode_items, 3, 0
};

FloatPropertyRNA rna_Curve_twist_smooth = {
	{(PropertyRNA*)&rna_Curve_use_uv_as_generated, (PropertyRNA*)&rna_Curve_twist_mode,
	-1, "twist_smooth", 8195, "Twist Smooth",
	"Smoothing iteration for tangents",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, twist_smooth), 4, NULL},
	Curve_twist_smooth_get, Curve_twist_smooth_set, NULL, NULL, NULL, 0.0f, 100.0f, -FLT_MAX, FLT_MAX, 0.1000000015f, 0, 0.0f, NULL
};

BooleanPropertyRNA rna_Curve_use_uv_as_generated = {
	{NULL, (PropertyRNA*)&rna_Curve_twist_smooth,
	-1, "use_uv_as_generated", 3, "Use UV for mapping",
	"Uses the UV values as Generated textured coordinates",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Curve_use_uv_as_generated_get, Curve_use_uv_as_generated_set, NULL, NULL, 0, NULL
};

StructRNA RNA_Curve = {
	{(ContainerRNA *)&RNA_CurveMap, (ContainerRNA *)&RNA_CopyTransformsConstraint,
	NULL,
	{(PropertyRNA*)&rna_Curve_animation_data, (PropertyRNA*)&rna_Curve_use_uv_as_generated}},
	"Curve"	, NULL,NULL
, 3, "Curve", "Curve datablock storing curves, splines and NURBS",
	161,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_Curve_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Curve Splines */
PointerPropertyRNA rna_CurveSplines_rna_type = {
	{(PropertyRNA*)&rna_CurveSplines_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveSplines_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_CurveSplines_active = {
	{(PropertyRNA*)&rna_CurveSplines_rna_properties, (PropertyRNA*)&rna_CurveSplines_rna_type,
	-1, "active", 1, "Active Spline",
	"Active curve spline",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 67567616, NULL, NULL,
	0, -1, NULL},
	CurveSplines_active_get, CurveSplines_active_set, NULL, NULL,&RNA_Object
};

CollectionPropertyRNA rna_CurveSplines_rna_properties = {
	{NULL, (PropertyRNA*)&rna_CurveSplines_active,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	CurveSplines_rna_properties_begin, CurveSplines_rna_properties_next, CurveSplines_rna_properties_end, CurveSplines_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_CurveSplines_new_type_items[6] = {
	{0, "POLY", 0, "Poly", ""},
	{1, "BEZIER", 0, "Bezier", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "CARDINAL", 0, "Cardinal", ""},
	{4, "NURBS", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_CurveSplines_new_type = {
	{(PropertyRNA*)&rna_CurveSplines_new_spline, NULL,
	-1, "type", 7, "",
	"type for the new spline.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_CurveSplines_new_type_items, 5, 0
};

PointerPropertyRNA rna_CurveSplines_new_spline = {
	{NULL, (PropertyRNA*)&rna_CurveSplines_new_type,
	-1, "spline", 8, "",
	"The newly created spline.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Spline
};

FunctionRNA rna_CurveSplines_new_func = {
	{(FunctionRNA*)&rna_CurveSplines_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_CurveSplines_new_type, (PropertyRNA*)&rna_CurveSplines_new_spline}},
	"new", 0, "Add a new spline to the curve.",
	CurveSplines_new_call,
	(PropertyRNA*)&rna_CurveSplines_new_spline
};

PointerPropertyRNA rna_CurveSplines_remove_spline = {
	{NULL, NULL,
	-1, "spline", 262148, "",
	"The spline to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Spline
};

FunctionRNA rna_CurveSplines_remove_func = {
	{NULL, (FunctionRNA*)&rna_CurveSplines_new_func,
	NULL,
	{(PropertyRNA*)&rna_CurveSplines_remove_spline, (PropertyRNA*)&rna_CurveSplines_remove_spline}},
	"remove", 4, "Remove a spline from a curve.",
	CurveSplines_remove_call,
	NULL
};

StructRNA RNA_CurveSplines = {
	{(ContainerRNA *)&RNA_DampedTrackConstraint, (ContainerRNA *)&RNA_CurveModifier,
	NULL,
	{(PropertyRNA*)&rna_CurveSplines_rna_type, (PropertyRNA*)&rna_CurveSplines_rna_properties}},
	"CurveSplines"	, NULL,NULL
, 0, "Curve Splines", "Collection of curve splines",
	17,
	NULL, (PropertyRNA*)&rna_CurveSplines_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_CurveSplines_new_func, (FunctionRNA*)&rna_CurveSplines_remove_func}
};

/* Spline */
PointerPropertyRNA rna_Spline_rna_type = {
	{(PropertyRNA*)&rna_Spline_bezier_points, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Spline_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_Spline_bezier_points = {
	{(PropertyRNA*)&rna_Spline_use_bezier_u, (PropertyRNA*)&rna_Spline_rna_type,
	-1, "bezier_points", 16384, "Bezier Points",
	"Collection of points for bezier curves only",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_SplineBezierPoints},
	Spline_bezier_points_begin, Spline_bezier_points_next, Spline_bezier_points_end, Spline_bezier_points_get, Spline_bezier_points_length, Spline_bezier_points_lookup_int, NULL, &RNA_BezierSplinePoint
};

BooleanPropertyRNA rna_Spline_use_bezier_u = {
	{(PropertyRNA*)&rna_Spline_use_bezier_v, (PropertyRNA*)&rna_Spline_bezier_points,
	-1, "use_bezier_u", 3, "Bezier U",
	"Make this nurbs curve or surface act like a bezier spline in the U direction (Order U must be 3 or 4, Cyclic U must be disabled)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, NULL, NULL,
	0, -1, NULL},
	Spline_use_bezier_u_get, Spline_use_bezier_u_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Spline_use_bezier_v = {
	{(PropertyRNA*)&rna_Spline_character_index, (PropertyRNA*)&rna_Spline_use_bezier_u,
	-1, "use_bezier_v", 3, "Bezier V",
	"Make this nurbs surface act like a bezier spline in the V direction (Order V must be 3 or 4, Cyclic V must be disabled)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, NULL, NULL,
	0, -1, NULL},
	Spline_use_bezier_v_get, Spline_use_bezier_v_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Spline_character_index = {
	{(PropertyRNA*)&rna_Spline_use_cyclic_u, (PropertyRNA*)&rna_Spline_use_bezier_v,
	-1, "character_index", 8194, "Character Index",
	"Location of this character in the text data (only for text curves)",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Nurb, charidx), 0, NULL},
	Spline_character_index_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_Spline_use_cyclic_u = {
	{(PropertyRNA*)&rna_Spline_use_cyclic_v, (PropertyRNA*)&rna_Spline_character_index,
	-1, "use_cyclic_u", 3, "Cyclic U",
	"Make this curve or surface a closed loop in the U direction",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_cyclic_u, 0, NULL, NULL,
	0, -1, NULL},
	Spline_use_cyclic_u_get, Spline_use_cyclic_u_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Spline_use_cyclic_v = {
	{(PropertyRNA*)&rna_Spline_use_endpoint_u, (PropertyRNA*)&rna_Spline_use_cyclic_u,
	-1, "use_cyclic_v", 3, "Cyclic V",
	"Make this surface a closed loop in the V direction",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_cyclic_v, 0, NULL, NULL,
	0, -1, NULL},
	Spline_use_cyclic_v_get, Spline_use_cyclic_v_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Spline_use_endpoint_u = {
	{(PropertyRNA*)&rna_Spline_use_endpoint_v, (PropertyRNA*)&rna_Spline_use_cyclic_v,
	-1, "use_endpoint_u", 3, "Endpoint U",
	"Make this nurbs curve or surface meet the endpoints in the U direction (Cyclic U must be disabled)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, NULL, NULL,
	0, -1, NULL},
	Spline_use_endpoint_u_get, Spline_use_endpoint_u_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Spline_use_endpoint_v = {
	{(PropertyRNA*)&rna_Spline_hide, (PropertyRNA*)&rna_Spline_use_endpoint_u,
	-1, "use_endpoint_v", 3, "Endpoint V",
	"Make this nurbs surface meet the endpoints in the V direction (Cyclic V must be disabled)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, NULL, NULL,
	0, -1, NULL},
	Spline_use_endpoint_v_get, Spline_use_endpoint_v_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Spline_hide = {
	{(PropertyRNA*)&rna_Spline_material_index, (PropertyRNA*)&rna_Spline_use_endpoint_v,
	-1, "hide", 3, "Hide",
	"Hide this curve in editmode",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Spline_hide_get, Spline_hide_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Spline_material_index = {
	{(PropertyRNA*)&rna_Spline_order_u, (PropertyRNA*)&rna_Spline_hide,
	-1, "material_index", 8195, "Material Index",
	"",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Nurb, mat_nr), 1, NULL},
	Spline_material_index_get, Spline_material_index_set, NULL, NULL, rna_Curve_material_index_range,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Spline_order_u = {
	{(PropertyRNA*)&rna_Spline_order_v, (PropertyRNA*)&rna_Spline_material_index,
	-1, "order_u", 8195, "Order U",
	"Nurbs order in the U direction (For splines and surfaces), Higher values let points influence a greater area",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_u, 0, NULL, NULL,
	offsetof(Nurb, orderu), 1, NULL},
	Spline_order_u_get, Spline_order_u_set, NULL, NULL, NULL,
	2, 6, 2, 6, 1, 0, NULL
};

IntPropertyRNA rna_Spline_order_v = {
	{(PropertyRNA*)&rna_Spline_points, (PropertyRNA*)&rna_Spline_order_u,
	-1, "order_v", 8195, "Order V",
	"Nurbs order in the V direction (For surfaces only), Higher values let points influence a greater area",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Nurb_update_knot_v, 0, NULL, NULL,
	offsetof(Nurb, orderv), 1, NULL},
	Spline_order_v_get, Spline_order_v_set, NULL, NULL, NULL,
	2, 6, 2, 6, 1, 0, NULL
};

CollectionPropertyRNA rna_Spline_points = {
	{(PropertyRNA*)&rna_Spline_point_count_u, (PropertyRNA*)&rna_Spline_order_v,
	-1, "points", 16384, "Points",
	"Collection of points that make up this poly or nurbs spline",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_SplinePoints},
	Spline_points_begin, Spline_points_next, Spline_points_end, Spline_points_get, rna_Nurb_length, Spline_points_lookup_int, NULL, &RNA_SplinePoint
};

IntPropertyRNA rna_Spline_point_count_u = {
	{(PropertyRNA*)&rna_Spline_point_count_v, (PropertyRNA*)&rna_Spline_points,
	-1, "point_count_u", 8194, "Points U",
	"Total number points for the curve or surface in the U direction",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Nurb, pntsu), 1, NULL},
	Spline_point_count_u_get, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Spline_point_count_v = {
	{(PropertyRNA*)&rna_Spline_rna_properties, (PropertyRNA*)&rna_Spline_point_count_u,
	-1, "point_count_v", 8194, "Points V",
	"Total number points for the surface on the V direction",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Nurb, pntsv), 1, NULL},
	Spline_point_count_v_get, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

CollectionPropertyRNA rna_Spline_rna_properties = {
	{(PropertyRNA*)&rna_Spline_radius_interpolation, (PropertyRNA*)&rna_Spline_point_count_v,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Spline_rna_properties_begin, Spline_rna_properties_next, Spline_rna_properties_end, Spline_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_Spline_radius_interpolation_items[5] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "CARDINAL", 0, "Cardinal", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "EASE", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Spline_radius_interpolation = {
	{(PropertyRNA*)&rna_Spline_resolution_u, (PropertyRNA*)&rna_Spline_rna_properties,
	-1, "radius_interpolation", 3, "Radius Interpolation",
	"The type of radius interpolation for Bezier curves",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Spline_radius_interpolation_get, Spline_radius_interpolation_set, NULL, rna_Spline_radius_interpolation_items, 4, 0
};

IntPropertyRNA rna_Spline_resolution_u = {
	{(PropertyRNA*)&rna_Spline_resolution_v, (PropertyRNA*)&rna_Spline_radius_interpolation,
	-1, "resolution_u", 8195, "Resolution U",
	"Curve or Surface subdivisions per segment",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Nurb, resolu), 1, NULL},
	Spline_resolution_u_get, Spline_resolution_u_set, NULL, NULL, NULL,
	1, 64, 1, 32767, 1, 0, NULL
};

IntPropertyRNA rna_Spline_resolution_v = {
	{(PropertyRNA*)&rna_Spline_use_smooth, (PropertyRNA*)&rna_Spline_resolution_u,
	-1, "resolution_v", 8195, "Resolution V",
	"Surface subdivisions per segment",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Nurb, resolv), 1, NULL},
	Spline_resolution_v_get, Spline_resolution_v_set, NULL, NULL, NULL,
	1, 64, 1, 32767, 1, 0, NULL
};

BooleanPropertyRNA rna_Spline_use_smooth = {
	{(PropertyRNA*)&rna_Spline_tilt_interpolation, (PropertyRNA*)&rna_Spline_resolution_v,
	-1, "use_smooth", 3, "Smooth",
	"Smooth the normals of the surface or beveled curve",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Spline_use_smooth_get, Spline_use_smooth_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Spline_tilt_interpolation_items[5] = {
	{0, "LINEAR", 0, "Linear", ""},
	{1, "CARDINAL", 0, "Cardinal", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "EASE", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Spline_tilt_interpolation = {
	{(PropertyRNA*)&rna_Spline_type, (PropertyRNA*)&rna_Spline_use_smooth,
	-1, "tilt_interpolation", 3, "Tilt Interpolation",
	"The type of tilt interpolation for 3D, Bezier curves",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Spline_tilt_interpolation_get, Spline_tilt_interpolation_set, NULL, rna_Spline_tilt_interpolation_items, 4, 0
};

static EnumPropertyItem rna_Spline_type_items[6] = {
	{0, "POLY", 0, "Poly", ""},
	{1, "BEZIER", 0, "Bezier", ""},
	{2, "BSPLINE", 0, "BSpline", ""},
	{3, "CARDINAL", 0, "Cardinal", ""},
	{4, "NURBS", 0, "Ease", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Spline_type = {
	{NULL, (PropertyRNA*)&rna_Spline_tilt_interpolation,
	-1, "type", 3, "Type",
	"The interpolation type for this curve element",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Spline_type_get, Spline_type_set, NULL, rna_Spline_type_items, 5, 0
};

StructRNA RNA_Spline = {
	{(ContainerRNA *)&RNA_SplineBezierPoints, (ContainerRNA *)&RNA_SpeedControlSequence,
	NULL,
	{(PropertyRNA*)&rna_Spline_rna_type, (PropertyRNA*)&rna_Spline_type}},
	"Spline"	, NULL,NULL
, 0, "Spline", "Element of a curve, either Nurbs, Bezier or Polyline or a character with text objects",
	17,
	NULL, (PropertyRNA*)&rna_Spline_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Curve_spline_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Spline Bezier Points */
PointerPropertyRNA rna_SplineBezierPoints_rna_type = {
	{(PropertyRNA*)&rna_SplineBezierPoints_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SplineBezierPoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_SplineBezierPoints_rna_properties = {
	{NULL, (PropertyRNA*)&rna_SplineBezierPoints_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SplineBezierPoints_rna_properties_begin, SplineBezierPoints_rna_properties_next, SplineBezierPoints_rna_properties_end, SplineBezierPoints_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_SplineBezierPoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Number",
	"Number of points to add to the spline",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, INT_MIN, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_SplineBezierPoints_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_SplineBezierPoints_add_count, (PropertyRNA*)&rna_SplineBezierPoints_add_count}},
	"add", 2052, "Add a number of points to this spline.",
	SplineBezierPoints_add_call,
	NULL
};

StructRNA RNA_SplineBezierPoints = {
	{(ContainerRNA *)&RNA_SplineIKConstraint, (ContainerRNA *)&RNA_Spline,
	NULL,
	{(PropertyRNA*)&rna_SplineBezierPoints_rna_type, (PropertyRNA*)&rna_SplineBezierPoints_rna_properties}},
	"SplineBezierPoints"	, NULL,NULL
, 0, "Spline Bezier Points", "Collection of spline bezirt points",
	17,
	NULL, (PropertyRNA*)&rna_SplineBezierPoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_SplineBezierPoints_add_func, (FunctionRNA*)&rna_SplineBezierPoints_add_func}
};

/* SplinePoint */
PointerPropertyRNA rna_SplinePoint_rna_type = {
	{(PropertyRNA*)&rna_SplinePoint_radius, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SplinePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_SplinePoint_radius = {
	{(PropertyRNA*)&rna_SplinePoint_hide, (PropertyRNA*)&rna_SplinePoint_rna_type,
	-1, "radius", 8195, "Bevel Radius",
	"Radius for bevelling",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BPoint, radius), 4, NULL},
	SplinePoint_radius_get, SplinePoint_radius_set, NULL, NULL, NULL, 0.0f, FLT_MAX, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_SplinePoint_hide = {
	{(PropertyRNA*)&rna_SplinePoint_co, (PropertyRNA*)&rna_SplinePoint_radius,
	-1, "hide", 8195, "Hide",
	"Visibility status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BPoint, hide), 1, NULL},
	SplinePoint_hide_get, SplinePoint_hide_set, NULL, NULL, 0, NULL
};

static float rna_SplinePoint_co_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_SplinePoint_co = {
	{(PropertyRNA*)&rna_SplinePoint_rna_properties, (PropertyRNA*)&rna_SplinePoint_hide,
	-1, "co", 8195, "Point",
	"Point coordinates",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {4, 0, 0}, 4,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BPoint, vec), 4, NULL},
	NULL, NULL, SplinePoint_co_get, SplinePoint_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_SplinePoint_co_default
};

CollectionPropertyRNA rna_SplinePoint_rna_properties = {
	{(PropertyRNA*)&rna_SplinePoint_select, (PropertyRNA*)&rna_SplinePoint_co,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SplinePoint_rna_properties_begin, SplinePoint_rna_properties_next, SplinePoint_rna_properties_end, SplinePoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_SplinePoint_select = {
	{(PropertyRNA*)&rna_SplinePoint_tilt, (PropertyRNA*)&rna_SplinePoint_rna_properties,
	-1, "select", 8195, "Select",
	"Selection status",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BPoint, f1), 1, NULL},
	SplinePoint_select_get, SplinePoint_select_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_SplinePoint_tilt = {
	{(PropertyRNA*)&rna_SplinePoint_weight, (PropertyRNA*)&rna_SplinePoint_select,
	-1, "tilt", 8195, "Tilt",
	"Tilt in 3D View",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BPoint, alfa), 4, NULL},
	SplinePoint_tilt_get, SplinePoint_tilt_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SplinePoint_weight = {
	{(PropertyRNA*)&rna_SplinePoint_weight_softbody, (PropertyRNA*)&rna_SplinePoint_tilt,
	-1, "weight", 8195, "Weight",
	"Nurbs weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BPoint, vec[3]), 4, NULL},
	SplinePoint_weight_get, SplinePoint_weight_set, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_SplinePoint_weight_softbody = {
	{NULL, (PropertyRNA*)&rna_SplinePoint_weight,
	-1, "weight_softbody", 8195, "Weight",
	"Softbody goal weight",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(BPoint, weight), 4, NULL},
	SplinePoint_weight_softbody_get, SplinePoint_weight_softbody_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_SplinePoint = {
	{(ContainerRNA *)&RNA_SplinePoints, (ContainerRNA *)&RNA_SplineIKConstraint,
	NULL,
	{(PropertyRNA*)&rna_SplinePoint_rna_type, (PropertyRNA*)&rna_SplinePoint_weight_softbody}},
	"SplinePoint"	, NULL,NULL
, 0, "SplinePoint", "Spline point without handles",
	17,
	NULL, (PropertyRNA*)&rna_SplinePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_Curve_spline_point_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Spline Points */
PointerPropertyRNA rna_SplinePoints_rna_type = {
	{(PropertyRNA*)&rna_SplinePoints_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SplinePoints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_SplinePoints_rna_properties = {
	{NULL, (PropertyRNA*)&rna_SplinePoints_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	SplinePoints_rna_properties_begin, SplinePoints_rna_properties_next, SplinePoints_rna_properties_end, SplinePoints_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

IntPropertyRNA rna_SplinePoints_add_count = {
	{NULL, NULL,
	-1, "count", 3, "Number",
	"Number of points to add to the spline",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	1, INT_MAX, 1, INT_MAX, 1, 1, NULL
};

FunctionRNA rna_SplinePoints_add_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_SplinePoints_add_count, (PropertyRNA*)&rna_SplinePoints_add_count}},
	"add", 2052, "Add a number of points to this spline.",
	SplinePoints_add_call,
	NULL
};

StructRNA RNA_SplinePoints = {
	{(ContainerRNA *)&RNA_SpotLamp, (ContainerRNA *)&RNA_SplinePoint,
	NULL,
	{(PropertyRNA*)&rna_SplinePoints_rna_type, (PropertyRNA*)&rna_SplinePoints_rna_properties}},
	"SplinePoints"	, NULL,NULL
, 0, "Spline Points", "Collection of spline points",
	17,
	NULL, (PropertyRNA*)&rna_SplinePoints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_SplinePoints_add_func, (FunctionRNA*)&rna_SplinePoints_add_func}
};

/* Surface Curve */
BooleanPropertyRNA rna_SurfaceCurve_use_uv_as_generated = {
	{NULL, NULL,
	-1, "use_uv_as_generated", 3, "Use UV for Mapping",
	"Uses the UV values as Generated textured coordinates",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	SurfaceCurve_use_uv_as_generated_get, SurfaceCurve_use_uv_as_generated_set, NULL, NULL, 0, NULL
};

StructRNA RNA_SurfaceCurve = {
	{(ContainerRNA *)&RNA_SurfaceModifier, (ContainerRNA *)&RNA_SunLamp,
	NULL,
	{(PropertyRNA*)&rna_SurfaceCurve_use_uv_as_generated, (PropertyRNA*)&rna_SurfaceCurve_use_uv_as_generated}},
	"SurfaceCurve"	, NULL,NULL
, 3, "Surface Curve", "Curve datablock used for storing surfaces",
	188,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_Curve,
	NULL,
	rna_Curve_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

/* Text Box */
PointerPropertyRNA rna_TextBox_rna_type = {
	{(PropertyRNA*)&rna_TextBox_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextBox_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_TextBox_rna_properties = {
	{(PropertyRNA*)&rna_TextBox_height, (PropertyRNA*)&rna_TextBox_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextBox_rna_properties_begin, TextBox_rna_properties_next, TextBox_rna_properties_end, TextBox_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

FloatPropertyRNA rna_TextBox_height = {
	{(PropertyRNA*)&rna_TextBox_width, (PropertyRNA*)&rna_TextBox_rna_properties,
	-1, "height", 8195, "Textbox Height",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(TextBox, h), 4, NULL},
	TextBox_height_get, TextBox_height_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextBox_width = {
	{(PropertyRNA*)&rna_TextBox_x, (PropertyRNA*)&rna_TextBox_height,
	-1, "width", 8195, "Textbox Width",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(TextBox, w), 4, NULL},
	TextBox_width_get, TextBox_width_set, NULL, NULL, NULL, 0.0f, 50.0f, 0.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextBox_x = {
	{(PropertyRNA*)&rna_TextBox_y, (PropertyRNA*)&rna_TextBox_width,
	-1, "x", 8195, "Textbox X Offset",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(TextBox, x), 4, NULL},
	TextBox_x_get, TextBox_x_set, NULL, NULL, NULL, -50.0f, 50.0f, -50.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextBox_y = {
	{NULL, (PropertyRNA*)&rna_TextBox_x,
	-1, "y", 8195, "Textbox Y Offset",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(TextBox, y), 4, NULL},
	TextBox_y_get, TextBox_y_set, NULL, NULL, NULL, -50.0f, 50.0f, -50.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_TextBox = {
	{(ContainerRNA *)&RNA_TextCharacterFormat, (ContainerRNA *)&RNA_Text,
	NULL,
	{(PropertyRNA*)&rna_TextBox_rna_type, (PropertyRNA*)&rna_TextBox_y}},
	"TextBox"	, NULL,NULL
, 0, "Text Box", "Text bounding box for layout",
	17,
	NULL, (PropertyRNA*)&rna_TextBox_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_TextBox_path,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Text Character Format */
PointerPropertyRNA rna_TextCharacterFormat_rna_type = {
	{(PropertyRNA*)&rna_TextCharacterFormat_use_bold, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextCharacterFormat_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_TextCharacterFormat_use_bold = {
	{(PropertyRNA*)&rna_TextCharacterFormat_use_italic, (PropertyRNA*)&rna_TextCharacterFormat_rna_type,
	-1, "use_bold", 3, "Bold",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCharacterFormat_use_bold_get, TextCharacterFormat_use_bold_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_TextCharacterFormat_use_italic = {
	{(PropertyRNA*)&rna_TextCharacterFormat_rna_properties, (PropertyRNA*)&rna_TextCharacterFormat_use_bold,
	-1, "use_italic", 3, "Italic",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCharacterFormat_use_italic_get, TextCharacterFormat_use_italic_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_TextCharacterFormat_rna_properties = {
	{(PropertyRNA*)&rna_TextCharacterFormat_use_small_caps, (PropertyRNA*)&rna_TextCharacterFormat_use_italic,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextCharacterFormat_rna_properties_begin, TextCharacterFormat_rna_properties_next, TextCharacterFormat_rna_properties_end, TextCharacterFormat_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_TextCharacterFormat_use_small_caps = {
	{(PropertyRNA*)&rna_TextCharacterFormat_use_underline, (PropertyRNA*)&rna_TextCharacterFormat_rna_properties,
	-1, "use_small_caps", 3, "Small Caps",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCharacterFormat_use_small_caps_get, TextCharacterFormat_use_small_caps_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_TextCharacterFormat_use_underline = {
	{NULL, (PropertyRNA*)&rna_TextCharacterFormat_use_small_caps,
	-1, "use_underline", 3, "Underline",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCharacterFormat_use_underline_get, TextCharacterFormat_use_underline_set, NULL, NULL, 0, NULL
};

StructRNA RNA_TextCharacterFormat = {
	{(ContainerRNA *)&RNA_TextCurve, (ContainerRNA *)&RNA_TextBox,
	NULL,
	{(PropertyRNA*)&rna_TextCharacterFormat_rna_type, (PropertyRNA*)&rna_TextCharacterFormat_use_underline}},
	"TextCharacterFormat"	, NULL,NULL
, 0, "Text Character Format", "Text character formatting settings",
	17,
	NULL, (PropertyRNA*)&rna_TextCharacterFormat_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Text Curve */
StringPropertyRNA rna_TextCurve_body = {
	{(PropertyRNA*)&rna_TextCurve_body_format, NULL,
	-1, "body", 1, "Body Text",
	"contents of this text object",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_body_get, TextCurve_body_length, TextCurve_body_set, 8192, ""
};

CollectionPropertyRNA rna_TextCurve_body_format = {
	{(PropertyRNA*)&rna_TextCurve_space_line, (PropertyRNA*)&rna_TextCurve_body,
	-1, "body_format", 16384, "Character Info",
	"Stores the style of each character",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_body_format_begin, TextCurve_body_format_next, TextCurve_body_format_end, TextCurve_body_format_get, TextCurve_body_format_length, TextCurve_body_format_lookup_int, NULL, &RNA_TextCharacterFormat
};

FloatPropertyRNA rna_TextCurve_space_line = {
	{(PropertyRNA*)&rna_TextCurve_edit_format, (PropertyRNA*)&rna_TextCurve_body_format,
	-1, "space_line", 8195, "Distance between lines of text",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, linedist), 4, NULL},
	TextCurve_space_line_get, TextCurve_space_line_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

PointerPropertyRNA rna_TextCurve_edit_format = {
	{(PropertyRNA*)&rna_TextCurve_use_fast_edit, (PropertyRNA*)&rna_TextCurve_space_line,
	-1, "edit_format", 0, "Edit Format",
	"Editing settings character formatting",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_edit_format_get, NULL, NULL, NULL,&RNA_TextCharacterFormat
};

BooleanPropertyRNA rna_TextCurve_use_fast_edit = {
	{(PropertyRNA*)&rna_TextCurve_font, (PropertyRNA*)&rna_TextCurve_edit_format,
	-1, "use_fast_edit", 3, "Fast",
	"Don\'t fill polygons while editing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_use_fast_edit_get, TextCurve_use_fast_edit_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_TextCurve_font = {
	{(PropertyRNA*)&rna_TextCurve_font_bold, (PropertyRNA*)&rna_TextCurve_use_fast_edit,
	-1, "font", 65, "Font",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_font_get, TextCurve_font_set, NULL, NULL,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_bold = {
	{(PropertyRNA*)&rna_TextCurve_font_italic, (PropertyRNA*)&rna_TextCurve_font,
	-1, "font_bold", 65, "Font",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_font_bold_get, TextCurve_font_bold_set, NULL, NULL,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_italic = {
	{(PropertyRNA*)&rna_TextCurve_font_bold_italic, (PropertyRNA*)&rna_TextCurve_font_bold,
	-1, "font_italic", 65, "Font",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_font_italic_get, TextCurve_font_italic_set, NULL, NULL,&RNA_VectorFont
};

PointerPropertyRNA rna_TextCurve_font_bold_italic = {
	{(PropertyRNA*)&rna_TextCurve_size, (PropertyRNA*)&rna_TextCurve_font_italic,
	-1, "font_bold_italic", 65, "Font",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_font_bold_italic_get, TextCurve_font_bold_italic_set, NULL, NULL,&RNA_VectorFont
};

FloatPropertyRNA rna_TextCurve_size = {
	{(PropertyRNA*)&rna_TextCurve_space_character, (PropertyRNA*)&rna_TextCurve_font_bold_italic,
	-1, "size", 8195, "Font size",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {3, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, fsize), 4, NULL},
	TextCurve_size_get, TextCurve_size_set, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0001000000f, 10000.0f, 1.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_space_character = {
	{(PropertyRNA*)&rna_TextCurve_family, (PropertyRNA*)&rna_TextCurve_size,
	-1, "space_character", 8195, "Global spacing between characters",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, spacing), 4, NULL},
	TextCurve_space_character_get, TextCurve_space_character_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_TextCurve_family = {
	{(PropertyRNA*)&rna_TextCurve_shear, (PropertyRNA*)&rna_TextCurve_space_character,
	-1, "family", 1, "Object Font",
	"Use Blender Objects as font characters. Give font objects a common name followed by the character it represents, eg. familya, familyb etc, and turn on Verts Duplication",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {24, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_family_get, TextCurve_family_length, TextCurve_family_set, 22, ""
};

FloatPropertyRNA rna_TextCurve_shear = {
	{(PropertyRNA*)&rna_TextCurve_small_caps_scale, (PropertyRNA*)&rna_TextCurve_family,
	-1, "shear", 8195, "Shear",
	"Italic angle of the characters",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, shear), 4, NULL},
	TextCurve_shear_get, TextCurve_shear_set, NULL, NULL, NULL, -1.0f, 1.0f, -1.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_small_caps_scale = {
	{(PropertyRNA*)&rna_TextCurve_space_word, (PropertyRNA*)&rna_TextCurve_shear,
	-1, "small_caps_scale", 8195, "Small Caps",
	"Scale of small capitals",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, smallcaps_scale), 4, NULL},
	TextCurve_small_caps_scale_get, TextCurve_small_caps_scale_set, NULL, NULL, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 1.0f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_space_word = {
	{(PropertyRNA*)&rna_TextCurve_align, (PropertyRNA*)&rna_TextCurve_small_caps_scale,
	-1, "space_word", 8195, "Spacing between words",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, wordspace), 4, NULL},
	TextCurve_space_word_get, TextCurve_space_word_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_TextCurve_align_items[6] = {
	{0, "LEFT", 0, "Left", "Align text to the left"},
	{1, "CENTER", 0, "Center", "Center text"},
	{2, "RIGHT", 0, "Right", "Align text to the right"},
	{3, "JUSTIFY", 0, "Justify", "Align to the left and the right"},
	{4, "FLUSH", 0, "Flush", "Align to the left and the right, with equal character spacing"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_TextCurve_align = {
	{(PropertyRNA*)&rna_TextCurve_follow_curve, (PropertyRNA*)&rna_TextCurve_space_word,
	-1, "align", 3, "Text Align",
	"Text align from the object center",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_align_get, TextCurve_align_set, NULL, rna_TextCurve_align_items, 5, 0
};

PointerPropertyRNA rna_TextCurve_follow_curve = {
	{(PropertyRNA*)&rna_TextCurve_text_boxes, (PropertyRNA*)&rna_TextCurve_align,
	-1, "follow_curve", 1, "Text on Curve",
	"Curve deforming text object",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_deps, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_follow_curve_get, TextCurve_follow_curve_set, NULL, rna_Curve_otherObject_poll,&RNA_Object
};

CollectionPropertyRNA rna_TextCurve_text_boxes = {
	{(PropertyRNA*)&rna_TextCurve_active_textbox, (PropertyRNA*)&rna_TextCurve_follow_curve,
	-1, "text_boxes", 16384, "Textboxes",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_text_boxes_begin, TextCurve_text_boxes_next, TextCurve_text_boxes_end, TextCurve_text_boxes_get, TextCurve_text_boxes_length, TextCurve_text_boxes_lookup_int, NULL, &RNA_TextBox
};

IntPropertyRNA rna_TextCurve_active_textbox = {
	{(PropertyRNA*)&rna_TextCurve_underline_position, (PropertyRNA*)&rna_TextCurve_text_boxes,
	-1, "active_textbox", 8195, "The active text box",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Curve, actbox), 0, NULL},
	TextCurve_active_textbox_get, TextCurve_active_textbox_set, NULL, NULL, rna_Curve_active_textbox_index_range,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_TextCurve_underline_position = {
	{(PropertyRNA*)&rna_TextCurve_underline_height, (PropertyRNA*)&rna_TextCurve_active_textbox,
	-1, "underline_position", 8195, "Underline Position",
	"Vertical position of underline",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, ulpos), 4, NULL},
	TextCurve_underline_position_get, TextCurve_underline_position_set, NULL, NULL, NULL, -0.2000000030f, 0.8000000119f, -0.2000000030f, 0.8000000119f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_underline_height = {
	{(PropertyRNA*)&rna_TextCurve_use_uv_as_generated, (PropertyRNA*)&rna_TextCurve_underline_position,
	-1, "underline_height", 8195, "Underline Thickness",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, ulheight), 4, NULL},
	TextCurve_underline_height_get, TextCurve_underline_height_set, NULL, NULL, NULL, -0.2000000030f, 0.8000000119f, -0.2000000030f, 0.8000000119f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_TextCurve_use_uv_as_generated = {
	{(PropertyRNA*)&rna_TextCurve_offset_x, (PropertyRNA*)&rna_TextCurve_underline_height,
	-1, "use_uv_as_generated", 3, "Use UV for Mapping",
	"Uses the UV values as Generated textured coordinates",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	0, -1, NULL},
	TextCurve_use_uv_as_generated_get, TextCurve_use_uv_as_generated_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_TextCurve_offset_x = {
	{(PropertyRNA*)&rna_TextCurve_offset_y, (PropertyRNA*)&rna_TextCurve_use_uv_as_generated,
	-1, "offset_x", 8195, "X Offset",
	"Horizontal offset from the object origin",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, xof), 4, NULL},
	TextCurve_offset_x_get, TextCurve_offset_x_set, NULL, NULL, NULL, -50.0f, 50.0f, -50.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_TextCurve_offset_y = {
	{NULL, (PropertyRNA*)&rna_TextCurve_offset_x,
	-1, "offset_y", 8195, "Y Offset",
	"Vertical offset from the object origin",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Curve_update_data, 0, NULL, NULL,
	offsetof(Curve, yof), 4, NULL},
	TextCurve_offset_y_get, TextCurve_offset_y_set, NULL, NULL, NULL, -50.0f, 50.0f, -50.0f, 50.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_TextCurve = {
	{(ContainerRNA *)&RNA_TextLine, (ContainerRNA *)&RNA_TextCharacterFormat,
	NULL,
	{(PropertyRNA*)&rna_TextCurve_body, (PropertyRNA*)&rna_TextCurve_offset_y}},
	"TextCurve"	, NULL,NULL
, 3, "Text Curve", "Curve datablock used for storing text",
	186,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_Curve,
	NULL,
	rna_Curve_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{NULL, NULL}
};

