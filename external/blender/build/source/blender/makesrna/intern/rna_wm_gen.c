
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

#include "rna_wm.c"
#include "rna_wm_api.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_Event_rna_type;
StringPropertyRNA rna_Event_ascii;
BooleanPropertyRNA rna_Event_alt;
BooleanPropertyRNA rna_Event_ctrl;
IntPropertyRNA rna_Event_mouse_prev_x;
IntPropertyRNA rna_Event_mouse_prev_y;
IntPropertyRNA rna_Event_mouse_x;
IntPropertyRNA rna_Event_mouse_region_x;
IntPropertyRNA rna_Event_mouse_y;
IntPropertyRNA rna_Event_mouse_region_y;
BooleanPropertyRNA rna_Event_oskey;
CollectionPropertyRNA rna_Event_rna_properties;
BooleanPropertyRNA rna_Event_shift;
EnumPropertyRNA rna_Event_type;
EnumPropertyRNA rna_Event_value;


PointerPropertyRNA rna_KeyConfig_rna_type;
StringPropertyRNA rna_KeyConfig_name;
CollectionPropertyRNA rna_KeyConfig_keymaps;
CollectionPropertyRNA rna_KeyConfig_rna_properties;
BooleanPropertyRNA rna_KeyConfig_is_user_defined;


PointerPropertyRNA rna_KeyConfigurations_rna_type;
PointerPropertyRNA rna_KeyConfigurations_active;
PointerPropertyRNA rna_KeyConfigurations_default;
CollectionPropertyRNA rna_KeyConfigurations_rna_properties;

extern FunctionRNA rna_KeyConfigurations_new_func;
extern StringPropertyRNA rna_KeyConfigurations_new_name;
extern PointerPropertyRNA rna_KeyConfigurations_new_keyconfig;

extern FunctionRNA rna_KeyConfigurations_remove_func;
extern PointerPropertyRNA rna_KeyConfigurations_remove_keyconfig;



PointerPropertyRNA rna_KeyMap_rna_type;
StringPropertyRNA rna_KeyMap_name;
BooleanPropertyRNA rna_KeyMap_show_expanded_children;
CollectionPropertyRNA rna_KeyMap_items;
BooleanPropertyRNA rna_KeyMap_show_expanded_items;
BooleanPropertyRNA rna_KeyMap_is_modal;
CollectionPropertyRNA rna_KeyMap_rna_properties;
EnumPropertyRNA rna_KeyMap_region_type;
EnumPropertyRNA rna_KeyMap_space_type;
BooleanPropertyRNA rna_KeyMap_is_user_defined;

extern FunctionRNA rna_KeyMap_active_func;
extern PointerPropertyRNA rna_KeyMap_active_keymap;

extern FunctionRNA rna_KeyMap_copy_to_user_func;
extern PointerPropertyRNA rna_KeyMap_copy_to_user_keymap;

extern FunctionRNA rna_KeyMap_restore_to_default_func;
extern FunctionRNA rna_KeyMap_restore_item_to_default_func;
extern PointerPropertyRNA rna_KeyMap_restore_item_to_default_item;



PointerPropertyRNA rna_KeyMapItem_rna_type;
StringPropertyRNA rna_KeyMapItem_name;
BooleanPropertyRNA rna_KeyMapItem_active;
BooleanPropertyRNA rna_KeyMapItem_alt;
BooleanPropertyRNA rna_KeyMapItem_any;
BooleanPropertyRNA rna_KeyMapItem_ctrl;
BooleanPropertyRNA rna_KeyMapItem_show_expanded;
StringPropertyRNA rna_KeyMapItem_idname;
EnumPropertyRNA rna_KeyMapItem_key_modifier;
EnumPropertyRNA rna_KeyMapItem_map_type;
BooleanPropertyRNA rna_KeyMapItem_oskey;
CollectionPropertyRNA rna_KeyMapItem_rna_properties;
PointerPropertyRNA rna_KeyMapItem_properties;
EnumPropertyRNA rna_KeyMapItem_propvalue;
BooleanPropertyRNA rna_KeyMapItem_shift;
EnumPropertyRNA rna_KeyMapItem_type;
BooleanPropertyRNA rna_KeyMapItem_is_user_defined;
EnumPropertyRNA rna_KeyMapItem_value;
IntPropertyRNA rna_KeyMapItem_id;

extern FunctionRNA rna_KeyMapItem_compare_func;
extern PointerPropertyRNA rna_KeyMapItem_compare_item;
extern BooleanPropertyRNA rna_KeyMapItem_compare_result;



PointerPropertyRNA rna_KeyMapItems_rna_type;
CollectionPropertyRNA rna_KeyMapItems_rna_properties;

extern FunctionRNA rna_KeyMapItems_new_func;
extern StringPropertyRNA rna_KeyMapItems_new_idname;
extern EnumPropertyRNA rna_KeyMapItems_new_type;
extern EnumPropertyRNA rna_KeyMapItems_new_value;
extern BooleanPropertyRNA rna_KeyMapItems_new_any;
extern BooleanPropertyRNA rna_KeyMapItems_new_shift;
extern BooleanPropertyRNA rna_KeyMapItems_new_ctrl;
extern BooleanPropertyRNA rna_KeyMapItems_new_alt;
extern BooleanPropertyRNA rna_KeyMapItems_new_oskey;
extern EnumPropertyRNA rna_KeyMapItems_new_key_modifier;
extern PointerPropertyRNA rna_KeyMapItems_new_item;

extern FunctionRNA rna_KeyMapItems_new_modal_func;
extern StringPropertyRNA rna_KeyMapItems_new_modal_propvalue;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_type;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_value;
extern BooleanPropertyRNA rna_KeyMapItems_new_modal_any;
extern BooleanPropertyRNA rna_KeyMapItems_new_modal_shift;
extern BooleanPropertyRNA rna_KeyMapItems_new_modal_ctrl;
extern BooleanPropertyRNA rna_KeyMapItems_new_modal_alt;
extern BooleanPropertyRNA rna_KeyMapItems_new_modal_oskey;
extern EnumPropertyRNA rna_KeyMapItems_new_modal_key_modifier;
extern PointerPropertyRNA rna_KeyMapItems_new_modal_item;

extern FunctionRNA rna_KeyMapItems_remove_func;
extern PointerPropertyRNA rna_KeyMapItems_remove_item;

extern FunctionRNA rna_KeyMapItems_from_id_func;
extern IntPropertyRNA rna_KeyMapItems_from_id_id;
extern PointerPropertyRNA rna_KeyMapItems_from_id_item;



PointerPropertyRNA rna_KeyMaps_rna_type;
CollectionPropertyRNA rna_KeyMaps_rna_properties;

extern FunctionRNA rna_KeyMaps_new_func;
extern StringPropertyRNA rna_KeyMaps_new_name;
extern EnumPropertyRNA rna_KeyMaps_new_space_type;
extern EnumPropertyRNA rna_KeyMaps_new_region_type;
extern BooleanPropertyRNA rna_KeyMaps_new_modal;
extern PointerPropertyRNA rna_KeyMaps_new_keymap;

extern FunctionRNA rna_KeyMaps_find_func;
extern StringPropertyRNA rna_KeyMaps_find_name;
extern EnumPropertyRNA rna_KeyMaps_find_space_type;
extern EnumPropertyRNA rna_KeyMaps_find_region_type;
extern PointerPropertyRNA rna_KeyMaps_find_keymap;

extern FunctionRNA rna_KeyMaps_find_modal_func;
extern StringPropertyRNA rna_KeyMaps_find_modal_name;
extern PointerPropertyRNA rna_KeyMaps_find_modal_keymap;



PointerPropertyRNA rna_Macro_rna_type;
StringPropertyRNA rna_Macro_name;
EnumPropertyRNA rna_Macro_bl_options;
CollectionPropertyRNA rna_Macro_rna_properties;
PointerPropertyRNA rna_Macro_properties;
StringPropertyRNA rna_Macro_bl_description;
StringPropertyRNA rna_Macro_bl_idname;
StringPropertyRNA rna_Macro_bl_label;

extern FunctionRNA rna_Macro_report_func;
extern EnumPropertyRNA rna_Macro_report_type;
extern StringPropertyRNA rna_Macro_report_message;

extern FunctionRNA rna_Macro_poll_func;
extern BooleanPropertyRNA rna_Macro_poll_visible;
extern PointerPropertyRNA rna_Macro_poll_context;

extern FunctionRNA rna_Macro_draw_func;
extern PointerPropertyRNA rna_Macro_draw_context;



PointerPropertyRNA rna_Operator_rna_type;
StringPropertyRNA rna_Operator_name;
BooleanPropertyRNA rna_Operator_has_reports;
EnumPropertyRNA rna_Operator_bl_options;
CollectionPropertyRNA rna_Operator_rna_properties;
PointerPropertyRNA rna_Operator_properties;
StringPropertyRNA rna_Operator_bl_description;
StringPropertyRNA rna_Operator_bl_idname;
StringPropertyRNA rna_Operator_bl_label;
PointerPropertyRNA rna_Operator_layout;

extern FunctionRNA rna_Operator_report_func;
extern EnumPropertyRNA rna_Operator_report_type;
extern StringPropertyRNA rna_Operator_report_message;

extern FunctionRNA rna_Operator_poll_func;
extern BooleanPropertyRNA rna_Operator_poll_visible;
extern PointerPropertyRNA rna_Operator_poll_context;

extern FunctionRNA rna_Operator_execute_func;
extern PointerPropertyRNA rna_Operator_execute_context;
extern EnumPropertyRNA rna_Operator_execute_result;

extern FunctionRNA rna_Operator_check_func;
extern PointerPropertyRNA rna_Operator_check_context;
extern BooleanPropertyRNA rna_Operator_check_result;

extern FunctionRNA rna_Operator_invoke_func;
extern PointerPropertyRNA rna_Operator_invoke_context;
extern PointerPropertyRNA rna_Operator_invoke_event;
extern EnumPropertyRNA rna_Operator_invoke_result;

extern FunctionRNA rna_Operator_modal_func;
extern PointerPropertyRNA rna_Operator_modal_context;
extern PointerPropertyRNA rna_Operator_modal_event;
extern EnumPropertyRNA rna_Operator_modal_result;

extern FunctionRNA rna_Operator_draw_func;
extern PointerPropertyRNA rna_Operator_draw_context;



extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;
extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;

StringPropertyRNA rna_OperatorFileListElement_name;


extern PointerPropertyRNA rna_PropertyGroup_rna_type;
extern StringPropertyRNA rna_PropertyGroup_name;
extern CollectionPropertyRNA rna_PropertyGroup_rna_properties;

FloatPropertyRNA rna_OperatorMousePath_loc;
FloatPropertyRNA rna_OperatorMousePath_time;


PointerPropertyRNA rna_OperatorProperties_rna_type;
CollectionPropertyRNA rna_OperatorProperties_rna_properties;


PointerPropertyRNA rna_OperatorTypeMacro_rna_type;
CollectionPropertyRNA rna_OperatorTypeMacro_rna_properties;
PointerPropertyRNA rna_OperatorTypeMacro_properties;


PointerPropertyRNA rna_Window_rna_type;
CollectionPropertyRNA rna_Window_rna_properties;
PointerPropertyRNA rna_Window_screen;


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

CollectionPropertyRNA rna_WindowManager_keyconfigs;
CollectionPropertyRNA rna_WindowManager_operators;
StringPropertyRNA rna_WindowManager_clipboard;
CollectionPropertyRNA rna_WindowManager_windows;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_WindowManager_fileselect_add_func;
extern PointerPropertyRNA rna_WindowManager_fileselect_add_operator;

extern FunctionRNA rna_WindowManager_modal_handler_add_func;
extern PointerPropertyRNA rna_WindowManager_modal_handler_add_operator;
extern BooleanPropertyRNA rna_WindowManager_modal_handler_add_handle;

extern FunctionRNA rna_WindowManager_invoke_props_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_props_popup_operator;
extern PointerPropertyRNA rna_WindowManager_invoke_props_popup_event;
extern EnumPropertyRNA rna_WindowManager_invoke_props_popup_result;

extern FunctionRNA rna_WindowManager_invoke_props_dialog_func;
extern PointerPropertyRNA rna_WindowManager_invoke_props_dialog_operator;
extern IntPropertyRNA rna_WindowManager_invoke_props_dialog_width;
extern IntPropertyRNA rna_WindowManager_invoke_props_dialog_height;
extern EnumPropertyRNA rna_WindowManager_invoke_props_dialog_result;

extern FunctionRNA rna_WindowManager_invoke_search_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_search_popup_operator;

extern FunctionRNA rna_WindowManager_invoke_popup_func;
extern PointerPropertyRNA rna_WindowManager_invoke_popup_operator;
extern IntPropertyRNA rna_WindowManager_invoke_popup_width;
extern IntPropertyRNA rna_WindowManager_invoke_popup_height;
extern EnumPropertyRNA rna_WindowManager_invoke_popup_result;

extern FunctionRNA rna_WindowManager_invoke_confirm_func;
extern PointerPropertyRNA rna_WindowManager_invoke_confirm_operator;
extern PointerPropertyRNA rna_WindowManager_invoke_confirm_event;
extern EnumPropertyRNA rna_WindowManager_invoke_confirm_result;


PointerRNA Event_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Event_ascii_get(PointerRNA *ptr, char *value)
{
	rna_Event_ascii_get(ptr, value);
}

int Event_ascii_length(PointerRNA *ptr)
{
	return rna_Event_ascii_length(ptr);
}

int Event_alt_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (((data->alt) & 1) != 0);
}

int Event_ctrl_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (((data->ctrl) & 1) != 0);
}

int Event_mouse_prev_x_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->prevx);
}

int Event_mouse_prev_y_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->prevy);
}

int Event_mouse_x_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->x);
}

int Event_mouse_region_x_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->mval[0]);
}

int Event_mouse_y_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->y);
}

int Event_mouse_region_y_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->mval[1]);
}

int Event_oskey_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (((data->oskey) & 1) != 0);
}

static PointerRNA Event_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Event_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Event_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Event_rna_properties_get(iter);
}

void Event_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Event_rna_properties_get(iter);
}

void Event_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Event_shift_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (((data->shift) & 1) != 0);
}

int Event_type_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->type);
}

int Event_value_get(PointerRNA *ptr)
{
	wmEvent *data= (wmEvent*)(ptr->data);
	return (int)(data->val);
}

PointerRNA KeyConfig_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyConfig_name_get(PointerRNA *ptr, char *value)
{
	wmKeyConfig *data= (wmKeyConfig*)(ptr->data);
	BLI_strncpy(value, data->idname, 64);
}

int KeyConfig_name_length(PointerRNA *ptr)
{
	wmKeyConfig *data= (wmKeyConfig*)(ptr->data);
	return strlen(data->idname);
}

void KeyConfig_name_set(PointerRNA *ptr, const char *value)
{
	wmKeyConfig *data= (wmKeyConfig*)(ptr->data);
	BLI_strncpy(data->idname, value, 64);
}

static PointerRNA KeyConfig_keymaps_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyMap, rna_iterator_listbase_get(iter));
}

void KeyConfig_keymaps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmKeyConfig *data= (wmKeyConfig*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyConfig_keymaps;

	rna_iterator_listbase_begin(iter, &data->keymaps, NULL);

	if(iter->valid)
		iter->ptr= KeyConfig_keymaps_get(iter);
}

void KeyConfig_keymaps_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= KeyConfig_keymaps_get(iter);
}

void KeyConfig_keymaps_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyConfig_keymaps_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	KeyConfig_keymaps_begin(&iter, ptr);

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
		if(found) *r_ptr = KeyConfig_keymaps_get(&iter);
	}

	KeyConfig_keymaps_end(&iter);

	return found;
}

static PointerRNA KeyConfig_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyConfig_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyConfig_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= KeyConfig_rna_properties_get(iter);
}

void KeyConfig_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= KeyConfig_rna_properties_get(iter);
}

void KeyConfig_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyConfig_is_user_defined_get(PointerRNA *ptr)
{
	wmKeyConfig *data= (wmKeyConfig*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

PointerRNA KeyConfigurations_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA KeyConfigurations_active_get(PointerRNA *ptr)
{
	return rna_WindowManager_active_keyconfig_get(ptr);
}

void KeyConfigurations_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_WindowManager_active_keyconfig_set(ptr, value);
}

PointerRNA KeyConfigurations_default_get(PointerRNA *ptr)
{
	wmWindowManager *data= (wmWindowManager*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_KeyConfig, data->defaultconf);
}

static PointerRNA KeyConfigurations_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyConfigurations_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyConfigurations_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= KeyConfigurations_rna_properties_get(iter);
}

void KeyConfigurations_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= KeyConfigurations_rna_properties_get(iter);
}

void KeyConfigurations_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA KeyMap_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyMap_name_get(PointerRNA *ptr, char *value)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	BLI_strncpy(value, data->idname, 64);
}

int KeyMap_name_length(PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	return strlen(data->idname);
}

int KeyMap_show_expanded_children_get(PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void KeyMap_show_expanded_children_set(PointerRNA *ptr, int value)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

static PointerRNA KeyMap_items_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyMapItem, rna_iterator_listbase_get(iter));
}

void KeyMap_items_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyMap_items;

	rna_iterator_listbase_begin(iter, &data->items, NULL);

	if(iter->valid)
		iter->ptr= KeyMap_items_get(iter);
}

void KeyMap_items_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= KeyMap_items_get(iter);
}

void KeyMap_items_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyMap_items_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	KeyMap_items_begin(&iter, ptr);

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
		if(found) *r_ptr = KeyMap_items_get(&iter);
	}

	KeyMap_items_end(&iter);

	return found;
}

int KeyMap_show_expanded_items_get(PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void KeyMap_show_expanded_items_set(PointerRNA *ptr, int value)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int KeyMap_is_modal_get(PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

static PointerRNA KeyMap_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMap_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyMap_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= KeyMap_rna_properties_get(iter);
}

void KeyMap_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= KeyMap_rna_properties_get(iter);
}

void KeyMap_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int KeyMap_region_type_get(PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	return (int)(data->regionid);
}

int KeyMap_space_type_get(PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	return (int)(data->spaceid);
}

int KeyMap_is_user_defined_get(PointerRNA *ptr)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void KeyMap_is_user_defined_set(PointerRNA *ptr, int value)
{
	wmKeyMap *data= (wmKeyMap*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

PointerRNA KeyMapItem_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void KeyMapItem_name_get(PointerRNA *ptr, char *value)
{
	rna_wmKeyMapItem_name_get(ptr, value);
}

int KeyMapItem_name_length(PointerRNA *ptr)
{
	return rna_wmKeyMapItem_name_length(ptr);
}

int KeyMapItem_active_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return !(((data->flag) & 1) != 0);
}

void KeyMapItem_active_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	if(!value) data->flag |= 1;
	else data->flag &= ~1;
}

int KeyMapItem_alt_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->alt);
}

void KeyMapItem_alt_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->alt= value;
}

int KeyMapItem_any_get(PointerRNA *ptr)
{
	return rna_KeyMapItem_any_getf(ptr);
}

void KeyMapItem_any_set(PointerRNA *ptr, int value)
{
	rna_KeyMapItem_any_setf(ptr, value);
}

int KeyMapItem_ctrl_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->ctrl);
}

void KeyMapItem_ctrl_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->ctrl= value;
}

int KeyMapItem_show_expanded_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void KeyMapItem_show_expanded_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

void KeyMapItem_idname_get(PointerRNA *ptr, char *value)
{
	rna_wmKeyMapItem_idname_get(ptr, value);
}

int KeyMapItem_idname_length(PointerRNA *ptr)
{
	return rna_wmKeyMapItem_idname_length(ptr);
}

void KeyMapItem_idname_set(PointerRNA *ptr, const char *value)
{
	rna_wmKeyMapItem_idname_set(ptr, value);
}

int KeyMapItem_key_modifier_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->keymodifier);
}

void KeyMapItem_key_modifier_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->keymodifier= value;
}

int KeyMapItem_map_type_get(PointerRNA *ptr)
{
	return rna_wmKeyMapItem_map_type_get(ptr);
}

void KeyMapItem_map_type_set(PointerRNA *ptr, int value)
{
	rna_wmKeyMapItem_map_type_set(ptr, value);
}

int KeyMapItem_oskey_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->oskey);
}

void KeyMapItem_oskey_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->oskey= value;
}

static PointerRNA KeyMapItem_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMapItem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyMapItem_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= KeyMapItem_rna_properties_get(iter);
}

void KeyMapItem_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= KeyMapItem_rna_properties_get(iter);
}

void KeyMapItem_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA KeyMapItem_properties_get(PointerRNA *ptr)
{
	return rna_KeyMapItem_properties_get(ptr);
}

int KeyMapItem_propvalue_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->propvalue);
}

void KeyMapItem_propvalue_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->propvalue= value;
}

int KeyMapItem_shift_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->shift);
}

void KeyMapItem_shift_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->shift= value;
}

int KeyMapItem_type_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->type);
}

void KeyMapItem_type_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->type= value;
}

int KeyMapItem_is_user_defined_get(PointerRNA *ptr)
{
	return rna_KeyMapItem_userdefined_get(ptr);
}

int KeyMapItem_value_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->val);
}

void KeyMapItem_value_set(PointerRNA *ptr, int value)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	data->val= value;
}

int KeyMapItem_id_get(PointerRNA *ptr)
{
	wmKeyMapItem *data= (wmKeyMapItem*)(ptr->data);
	return (int)(data->id);
}

PointerRNA KeyMapItems_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA KeyMapItems_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMapItems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyMapItems_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= KeyMapItems_rna_properties_get(iter);
}

void KeyMapItems_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= KeyMapItems_rna_properties_get(iter);
}

void KeyMapItems_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA KeyMaps_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA KeyMaps_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void KeyMaps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_KeyMaps_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= KeyMaps_rna_properties_get(iter);
}

void KeyMaps_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= KeyMaps_rna_properties_get(iter);
}

void KeyMaps_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Macro_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Macro_name_get(PointerRNA *ptr, char *value)
{
	rna_Operator_name_get(ptr, value);
}

int Macro_name_length(PointerRNA *ptr)
{
	return rna_Operator_name_length(ptr);
}

int Macro_bl_options_get(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return (int)(data->type->flag);
}

void Macro_bl_options_set(PointerRNA *ptr, int value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	data->type->flag= value;
}

static PointerRNA Macro_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Macro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Macro_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Macro_rna_properties_get(iter);
}

void Macro_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Macro_rna_properties_get(iter);
}

void Macro_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Macro_properties_get(PointerRNA *ptr)
{
	return rna_Operator_properties_get(ptr);
}

void Macro_bl_description_get(PointerRNA *ptr, char *value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	BLI_strncpy(value, data->type->description, 1024);
}

int Macro_bl_description_length(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return strlen(data->type->description);
}

void Macro_bl_description_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_description_set(ptr, value);
}

void Macro_bl_idname_get(PointerRNA *ptr, char *value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	BLI_strncpy(value, data->type->idname, 64);
}

int Macro_bl_idname_length(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return strlen(data->type->idname);
}

void Macro_bl_idname_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_idname_set(ptr, value);
}

void Macro_bl_label_get(PointerRNA *ptr, char *value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	BLI_strncpy(value, data->type->name, 1024);
}

int Macro_bl_label_length(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return strlen(data->type->name);
}

void Macro_bl_label_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_label_set(ptr, value);
}

PointerRNA Operator_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Operator_name_get(PointerRNA *ptr, char *value)
{
	rna_Operator_name_get(ptr, value);
}

int Operator_name_length(PointerRNA *ptr)
{
	return rna_Operator_name_length(ptr);
}

int Operator_has_reports_get(PointerRNA *ptr)
{
	return rna_Operator_has_reports_get(ptr);
}

int Operator_bl_options_get(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return (int)(data->type->flag);
}

void Operator_bl_options_set(PointerRNA *ptr, int value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	data->type->flag= value;
}

static PointerRNA Operator_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Operator_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Operator_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Operator_rna_properties_get(iter);
}

void Operator_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Operator_rna_properties_get(iter);
}

void Operator_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Operator_properties_get(PointerRNA *ptr)
{
	return rna_Operator_properties_get(ptr);
}

void Operator_bl_description_get(PointerRNA *ptr, char *value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	BLI_strncpy(value, data->type->description, 1024);
}

int Operator_bl_description_length(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return strlen(data->type->description);
}

void Operator_bl_description_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_description_set(ptr, value);
}

void Operator_bl_idname_get(PointerRNA *ptr, char *value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	BLI_strncpy(value, data->type->idname, 61);
}

int Operator_bl_idname_length(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return strlen(data->type->idname);
}

void Operator_bl_idname_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_idname_set(ptr, value);
}

void Operator_bl_label_get(PointerRNA *ptr, char *value)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	BLI_strncpy(value, data->type->name, 1024);
}

int Operator_bl_label_length(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return strlen(data->type->name);
}

void Operator_bl_label_set(PointerRNA *ptr, const char *value)
{
	rna_Operator_bl_label_set(ptr, value);
}

PointerRNA Operator_layout_get(PointerRNA *ptr)
{
	wmOperator *data= (wmOperator*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_UILayout, data->layout);
}

PointerRNA OperatorProperties_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA OperatorProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void OperatorProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_OperatorProperties_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= OperatorProperties_rna_properties_get(iter);
}

void OperatorProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= OperatorProperties_rna_properties_get(iter);
}

void OperatorProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA OperatorTypeMacro_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA OperatorTypeMacro_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void OperatorTypeMacro_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_OperatorTypeMacro_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= OperatorTypeMacro_rna_properties_get(iter);
}

void OperatorTypeMacro_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= OperatorTypeMacro_rna_properties_get(iter);
}

void OperatorTypeMacro_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA OperatorTypeMacro_properties_get(PointerRNA *ptr)
{
	return rna_OperatorTypeMacro_properties_get(ptr);
}

PointerRNA Window_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA Window_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Window_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Window_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Window_rna_properties_get(iter);
}

void Window_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Window_rna_properties_get(iter);
}

void Window_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Window_screen_get(PointerRNA *ptr)
{
	wmWindow *data= (wmWindow*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Screen, data->screen);
}

void Window_screen_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Window_screen_set(ptr, value);
}

static PointerRNA WindowManager_keyconfigs_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_KeyConfig, rna_iterator_listbase_get(iter));
}

void WindowManager_keyconfigs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmWindowManager *data= (wmWindowManager*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_WindowManager_keyconfigs;

	rna_iterator_listbase_begin(iter, &data->keyconfigs, NULL);

	if(iter->valid)
		iter->ptr= WindowManager_keyconfigs_get(iter);
}

void WindowManager_keyconfigs_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= WindowManager_keyconfigs_get(iter);
}

void WindowManager_keyconfigs_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WindowManager_keyconfigs_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	WindowManager_keyconfigs_begin(&iter, ptr);

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
		if(found) *r_ptr = WindowManager_keyconfigs_get(&iter);
	}

	WindowManager_keyconfigs_end(&iter);

	return found;
}

static PointerRNA WindowManager_operators_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Operator, rna_iterator_listbase_get(iter));
}

void WindowManager_operators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmWindowManager *data= (wmWindowManager*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_WindowManager_operators;

	rna_iterator_listbase_begin(iter, &data->operators, NULL);

	if(iter->valid)
		iter->ptr= WindowManager_operators_get(iter);
}

void WindowManager_operators_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= WindowManager_operators_get(iter);
}

void WindowManager_operators_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WindowManager_operators_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	WindowManager_operators_begin(&iter, ptr);

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
		if(found) *r_ptr = WindowManager_operators_get(&iter);
	}

	WindowManager_operators_end(&iter);

	return found;
}

void WindowManager_clipboard_get(PointerRNA *ptr, char *value)
{
	rna_wmClipboard_get(ptr, value);
}

int WindowManager_clipboard_length(PointerRNA *ptr)
{
	return rna_wmClipboard_length(ptr);
}

void WindowManager_clipboard_set(PointerRNA *ptr, const char *value)
{
	rna_wmClipboard_set(ptr, value);
}

static PointerRNA WindowManager_windows_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Window, rna_iterator_listbase_get(iter));
}

void WindowManager_windows_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	wmWindowManager *data= (wmWindowManager*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_WindowManager_windows;

	rna_iterator_listbase_begin(iter, &data->windows, NULL);

	if(iter->valid)
		iter->ptr= WindowManager_windows_get(iter);
}

void WindowManager_windows_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= WindowManager_windows_get(iter);
}

void WindowManager_windows_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WindowManager_windows_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	WindowManager_windows_begin(&iter, ptr);

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
		if(found) *r_ptr = WindowManager_windows_get(&iter);
	}

	WindowManager_windows_end(&iter);

	return found;
}



void KeyConfigurations_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	const char* name;
	struct wmKeyConfig *keyconfig;
	char *_data, *_retdata;
	
	_self= (struct wmWindowManager *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	keyconfig= WM_keyconfig_new_user(_self, name);
	*((struct wmKeyConfig**)_retdata)= keyconfig;
}

void KeyConfigurations_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmWindowManager *_self;
	struct wmKeyConfig *keyconfig;
	char *_data;
	
	_self= (struct wmWindowManager *)_ptr->data;
	_data= (char *)_parms->data;
	keyconfig= *((struct wmKeyConfig**)_data);
	
	WM_keyconfig_remove(_self, keyconfig);
}

/* Repeated prototypes to detect errors */

struct wmKeyConfig *WM_keyconfig_new_user(struct wmWindowManager *_self, const char* name);
void WM_keyconfig_remove(struct wmWindowManager *_self, struct wmKeyConfig *keyconfig);

void KeyMap_active_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self= (struct wmKeyMap *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	
	keymap= rna_keymap_active(_self, C);
	*((struct wmKeyMap**)_retdata)= keymap;
}

void KeyMap_copy_to_user_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self= (struct wmKeyMap *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	
	keymap= WM_keymap_copy_to_user(_self);
	*((struct wmKeyMap**)_retdata)= keymap;
}

void KeyMap_restore_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	_self= (struct wmKeyMap *)_ptr->data;
	
	WM_keymap_restore_to_default(_self);
}

void KeyMap_restore_item_to_default_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMapItem *item;
	char *_data;
	
	_self= (struct wmKeyMap *)_ptr->data;
	_data= (char *)_parms->data;
	item= *((struct wmKeyMapItem**)_data);
	
	rna_keymap_restore_item_to_default(_self, C, item);
}

/* Repeated prototypes to detect errors */

struct wmKeyMap *rna_keymap_active(struct wmKeyMap *_self, bContext *C);
struct wmKeyMap *WM_keymap_copy_to_user(struct wmKeyMap *_self);
void WM_keymap_restore_to_default(struct wmKeyMap *_self);
void rna_keymap_restore_item_to_default(struct wmKeyMap *_self, bContext *C, struct wmKeyMapItem *item);

void KeyMapItem_compare_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMapItem *_self;
	struct wmKeyMapItem *item;
	int result;
	char *_data, *_retdata;
	
	_self= (struct wmKeyMapItem *)_ptr->data;
	_data= (char *)_parms->data;
	item= *((struct wmKeyMapItem**)_data);
	_data+= 4;
	_retdata= _data;
	
	result= WM_keymap_item_compare(_self, item);
	*((int*)_retdata)= result;
}

/* Repeated prototypes to detect errors */

int WM_keymap_item_compare(struct wmKeyMapItem *_self, struct wmKeyMapItem *item);

void KeyMapItems_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	const char* idname;
	int type;
	int value;
	int any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int key_modifier;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self= (struct wmKeyMap *)_ptr->data;
	_data= (char *)_parms->data;
	idname= *((const char**)_data);
	_data+= 4;
	type= *((int*)_data);
	_data+= 4;
	value= *((int*)_data);
	_data+= 4;
	any= *((int*)_data);
	_data+= 4;
	shift= *((int*)_data);
	_data+= 4;
	ctrl= *((int*)_data);
	_data+= 4;
	alt= *((int*)_data);
	_data+= 4;
	oskey= *((int*)_data);
	_data+= 4;
	key_modifier= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	item= rna_KeyMap_item_new(_self, reports, idname, type, value, any, shift, ctrl, alt, oskey, key_modifier);
	*((struct wmKeyMapItem**)_retdata)= item;
}

void KeyMapItems_new_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	const char* propvalue;
	int type;
	int value;
	int any;
	int shift;
	int ctrl;
	int alt;
	int oskey;
	int key_modifier;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self= (struct wmKeyMap *)_ptr->data;
	_data= (char *)_parms->data;
	propvalue= *((const char**)_data);
	_data+= 4;
	type= *((int*)_data);
	_data+= 4;
	value= *((int*)_data);
	_data+= 4;
	any= *((int*)_data);
	_data+= 4;
	shift= *((int*)_data);
	_data+= 4;
	ctrl= *((int*)_data);
	_data+= 4;
	alt= *((int*)_data);
	_data+= 4;
	oskey= *((int*)_data);
	_data+= 4;
	key_modifier= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	item= rna_KeyMap_item_new_modal(_self, C, reports, propvalue, type, value, any, shift, ctrl, alt, oskey, key_modifier);
	*((struct wmKeyMapItem**)_retdata)= item;
}

void KeyMapItems_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	struct wmKeyMapItem *item;
	char *_data;
	
	_self= (struct wmKeyMap *)_ptr->data;
	_data= (char *)_parms->data;
	item= *((struct wmKeyMapItem**)_data);
	
	WM_keymap_remove_item(_self, item);
}

void KeyMapItems_from_id_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyMap *_self;
	int id;
	struct wmKeyMapItem *item;
	char *_data, *_retdata;
	
	_self= (struct wmKeyMap *)_ptr->data;
	_data= (char *)_parms->data;
	id= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	item= WM_keymap_item_find_id(_self, id);
	*((struct wmKeyMapItem**)_retdata)= item;
}

/* Repeated prototypes to detect errors */

struct wmKeyMapItem *rna_KeyMap_item_new(struct wmKeyMap *_self, ReportList *reports, const char* idname, int type, int value, int any, int shift, int ctrl, int alt, int oskey, int key_modifier);
struct wmKeyMapItem *rna_KeyMap_item_new_modal(struct wmKeyMap *_self, bContext *C, ReportList *reports, const char* propvalue, int type, int value, int any, int shift, int ctrl, int alt, int oskey, int key_modifier);
void WM_keymap_remove_item(struct wmKeyMap *_self, struct wmKeyMapItem *item);
struct wmKeyMapItem *WM_keymap_item_find_id(struct wmKeyMap *_self, int id);

void KeyMaps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char* name;
	int space_type;
	int region_type;
	int modal;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self= (struct wmKeyConfig *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	space_type= *((int*)_data);
	_data+= 4;
	region_type= *((int*)_data);
	_data+= 4;
	modal= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	keymap= rna_keymap_new(_self, name, space_type, region_type, modal);
	*((struct wmKeyMap**)_retdata)= keymap;
}

void KeyMaps_find_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char* name;
	int space_type;
	int region_type;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self= (struct wmKeyConfig *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	space_type= *((int*)_data);
	_data+= 4;
	region_type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	keymap= rna_keymap_find(_self, name, space_type, region_type);
	*((struct wmKeyMap**)_retdata)= keymap;
}

void KeyMaps_find_modal_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmKeyConfig *_self;
	const char* name;
	struct wmKeyMap *keymap;
	char *_data, *_retdata;
	
	_self= (struct wmKeyConfig *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	keymap= rna_keymap_find_modal(_self, name);
	*((struct wmKeyMap**)_retdata)= keymap;
}

/* Repeated prototypes to detect errors */

struct wmKeyMap *rna_keymap_new(struct wmKeyConfig *_self, const char* name, int space_type, int region_type, int modal);
struct wmKeyMap *rna_keymap_find(struct wmKeyConfig *_self, const char* name, int space_type, int region_type);
struct wmKeyMap *rna_keymap_find_modal(struct wmKeyConfig *_self, const char* name);

void Macro_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *_self;
	int type;
	const char* message;
	char *_data;
	
	_self= (struct wmOperator *)_ptr->data;
	_data= (char *)_parms->data;
	type= *((int*)_data);
	_data+= 4;
	message= *((const char**)_data);
	
	rna_Operator_report(_self, type, message);
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(struct wmOperator *_self, int type, const char* message);

void Operator_report_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *_self;
	int type;
	const char* message;
	char *_data;
	
	_self= (struct wmOperator *)_ptr->data;
	_data= (char *)_parms->data;
	type= *((int*)_data);
	_data+= 4;
	message= *((const char**)_data);
	
	rna_Operator_report(_self, type, message);
}

/* Repeated prototypes to detect errors */

void rna_Operator_report(struct wmOperator *_self, int type, const char* message);






void WindowManager_fileselect_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	char *_data;
	
	_data= (char *)_parms->data;
	operator= *((struct wmOperator**)_data);
	
	WM_event_add_fileselect(C, operator);
}

void WindowManager_modal_handler_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	int handle;
	char *_data, *_retdata;
	
	_data= (char *)_parms->data;
	operator= *((struct wmOperator**)_data);
	_data+= 4;
	_retdata= _data;
	
	handle= rna_event_modal_handler_add(C, operator);
	*((int*)_retdata)= handle;
}

void WindowManager_invoke_props_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	struct wmEvent *event;
	int result;
	char *_data, *_retdata;
	
	_data= (char *)_parms->data;
	operator= *((struct wmOperator**)_data);
	_data+= 4;
	event= *((struct wmEvent**)_data);
	_data+= 4;
	_retdata= _data;
	
	result= WM_operator_props_popup(C, operator, event);
	*((int*)_retdata)= result;
}

void WindowManager_invoke_props_dialog_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	int width;
	int height;
	int result;
	char *_data, *_retdata;
	
	_data= (char *)_parms->data;
	operator= *((struct wmOperator**)_data);
	_data+= 4;
	width= *((int*)_data);
	_data+= 4;
	height= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	result= WM_operator_props_dialog_popup(C, operator, width, height);
	*((int*)_retdata)= result;
}

void WindowManager_invoke_search_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	char *_data;
	
	_data= (char *)_parms->data;
	operator= *((struct wmOperator**)_data);
	
	rna_Operator_enum_search_invoke(C, operator);
}

void WindowManager_invoke_popup_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	int width;
	int height;
	int result;
	char *_data, *_retdata;
	
	_data= (char *)_parms->data;
	operator= *((struct wmOperator**)_data);
	_data+= 4;
	width= *((int*)_data);
	_data+= 4;
	height= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	result= WM_operator_ui_popup(C, operator, width, height);
	*((int*)_retdata)= result;
}

void WindowManager_invoke_confirm_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct wmOperator *operator;
	struct wmEvent *event;
	int result;
	char *_data, *_retdata;
	
	_data= (char *)_parms->data;
	operator= *((struct wmOperator**)_data);
	_data+= 4;
	event= *((struct wmEvent**)_data);
	_data+= 4;
	_retdata= _data;
	
	result= WM_operator_confirm(C, operator, event);
	*((int*)_retdata)= result;
}

/* Repeated prototypes to detect errors */

void WM_event_add_fileselect(bContext *C, struct wmOperator *operator);
int rna_event_modal_handler_add(bContext *C, struct wmOperator *operator);
int WM_operator_props_popup(bContext *C, struct wmOperator *operator, struct wmEvent *event);
int WM_operator_props_dialog_popup(bContext *C, struct wmOperator *operator, int width, int height);
void rna_Operator_enum_search_invoke(bContext *C, struct wmOperator *operator);
int WM_operator_ui_popup(bContext *C, struct wmOperator *operator, int width, int height);
int WM_operator_confirm(bContext *C, struct wmOperator *operator, struct wmEvent *event);

/* Event */
PointerPropertyRNA rna_Event_rna_type = {
	{(PropertyRNA*)&rna_Event_ascii, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Event_ascii = {
	{(PropertyRNA*)&rna_Event_alt, (PropertyRNA*)&rna_Event_rna_type,
	-1, "ascii", 0, "ASCII",
	"Single ASCII character for this event",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_ascii_get, Event_ascii_length, NULL, 0, ""
};

BooleanPropertyRNA rna_Event_alt = {
	{(PropertyRNA*)&rna_Event_ctrl, (PropertyRNA*)&rna_Event_ascii,
	-1, "alt", 2, "Alt",
	"True when the Alt/Option key is held",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_alt_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Event_ctrl = {
	{(PropertyRNA*)&rna_Event_mouse_prev_x, (PropertyRNA*)&rna_Event_alt,
	-1, "ctrl", 2, "Ctrl",
	"True when the Ctrl key is held",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_ctrl_get, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Event_mouse_prev_x = {
	{(PropertyRNA*)&rna_Event_mouse_prev_y, (PropertyRNA*)&rna_Event_ctrl,
	-1, "mouse_prev_x", 2, "Mouse Previous X Position",
	"The window relative vertical location of the mouse",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_prev_x_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_prev_y = {
	{(PropertyRNA*)&rna_Event_mouse_x, (PropertyRNA*)&rna_Event_mouse_prev_x,
	-1, "mouse_prev_y", 2, "Mouse Previous Y Position",
	"The window relative horizontal location of the mouse",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_prev_y_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_x = {
	{(PropertyRNA*)&rna_Event_mouse_region_x, (PropertyRNA*)&rna_Event_mouse_prev_y,
	-1, "mouse_x", 2, "Mouse X Position",
	"The window relative vertical location of the mouse",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_x_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_region_x = {
	{(PropertyRNA*)&rna_Event_mouse_y, (PropertyRNA*)&rna_Event_mouse_x,
	-1, "mouse_region_x", 2, "Mouse X Position",
	"The region relative vertical location of the mouse",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_region_x_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_y = {
	{(PropertyRNA*)&rna_Event_mouse_region_y, (PropertyRNA*)&rna_Event_mouse_region_x,
	-1, "mouse_y", 2, "Mouse Y Position",
	"The window relative horizontal location of the mouse",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_y_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_Event_mouse_region_y = {
	{(PropertyRNA*)&rna_Event_oskey, (PropertyRNA*)&rna_Event_mouse_y,
	-1, "mouse_region_y", 2, "Mouse Y Position",
	"The region relative horizontal location of the mouse",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_mouse_region_y_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

BooleanPropertyRNA rna_Event_oskey = {
	{(PropertyRNA*)&rna_Event_rna_properties, (PropertyRNA*)&rna_Event_mouse_region_y,
	-1, "oskey", 2, "OS Key",
	"True when the Cmd key is held",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_oskey_get, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Event_rna_properties = {
	{(PropertyRNA*)&rna_Event_shift, (PropertyRNA*)&rna_Event_oskey,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_rna_properties_begin, Event_rna_properties_next, Event_rna_properties_end, Event_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Event_shift = {
	{(PropertyRNA*)&rna_Event_type, (PropertyRNA*)&rna_Event_rna_properties,
	-1, "shift", 2, "Shift",
	"True when the Shift key is held",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_shift_get, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Event_type_items[148] = {
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

EnumPropertyRNA rna_Event_type = {
	{(PropertyRNA*)&rna_Event_value, (PropertyRNA*)&rna_Event_shift,
	-1, "type", 2, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_type_get, NULL, NULL, rna_Event_type_items, 147, 0
};

static EnumPropertyItem rna_Event_value_items[7] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Event_value = {
	{NULL, (PropertyRNA*)&rna_Event_type,
	-1, "value", 2, "Value",
	"The type of event, only applies to some",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Event_value_get, NULL, NULL, rna_Event_value_items, 6, 0
};

StructRNA RNA_Event = {
	{(ContainerRNA *)&RNA_ExplodeModifier, (ContainerRNA *)&RNA_EnvironmentMapTexture,
	NULL,
	{(PropertyRNA*)&rna_Event_rna_type, (PropertyRNA*)&rna_Event_value}},
	"Event"	, NULL,NULL
, 0, "Event", "Window Manager Event",
	17,
	NULL, (PropertyRNA*)&rna_Event_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Key Configuration */
PointerPropertyRNA rna_KeyConfig_rna_type = {
	{(PropertyRNA*)&rna_KeyConfig_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyConfig_name = {
	{(PropertyRNA*)&rna_KeyConfig_keymaps, (PropertyRNA*)&rna_KeyConfig_rna_type,
	-1, "name", 1, "Name",
	"Name of the key configuration",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_name_get, KeyConfig_name_length, KeyConfig_name_set, 64, ""
};

CollectionPropertyRNA rna_KeyConfig_keymaps = {
	{(PropertyRNA*)&rna_KeyConfig_rna_properties, (PropertyRNA*)&rna_KeyConfig_name,
	-1, "keymaps", 0, "Key Maps",
	"Key maps configured as part of this configuration",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_KeyMaps},
	KeyConfig_keymaps_begin, KeyConfig_keymaps_next, KeyConfig_keymaps_end, KeyConfig_keymaps_get, NULL, KeyConfig_keymaps_lookup_int, NULL, &RNA_KeyMap
};

CollectionPropertyRNA rna_KeyConfig_rna_properties = {
	{(PropertyRNA*)&rna_KeyConfig_is_user_defined, (PropertyRNA*)&rna_KeyConfig_keymaps,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_rna_properties_begin, KeyConfig_rna_properties_next, KeyConfig_rna_properties_end, KeyConfig_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_KeyConfig_is_user_defined = {
	{NULL, (PropertyRNA*)&rna_KeyConfig_rna_properties,
	-1, "is_user_defined", 2, "User Defined",
	"Indicates that a keyconfig was defined by the user",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfig_is_user_defined_get, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_KeyConfig = {
	{(ContainerRNA *)&RNA_KeyConfigurations, (ContainerRNA *)&RNA_Key,
	NULL,
	{(PropertyRNA*)&rna_KeyConfig_rna_type, (PropertyRNA*)&rna_KeyConfig_is_user_defined}},
	"KeyConfig"	, NULL,NULL
, 0, "Key Configuration", "Input configuration, including keymaps",
	17,
	(PropertyRNA*)&rna_KeyConfig_name, (PropertyRNA*)&rna_KeyConfig_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* KeyConfigs */
PointerPropertyRNA rna_KeyConfigurations_rna_type = {
	{(PropertyRNA*)&rna_KeyConfigurations_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_KeyConfigurations_active = {
	{(PropertyRNA*)&rna_KeyConfigurations_default, (PropertyRNA*)&rna_KeyConfigurations_rna_type,
	-1, "active", 1, "Active KeyConfig",
	"Active wm KeyConfig",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_active_get, KeyConfigurations_active_set, NULL, NULL,&RNA_KeyConfig
};

PointerPropertyRNA rna_KeyConfigurations_default = {
	{(PropertyRNA*)&rna_KeyConfigurations_rna_properties, (PropertyRNA*)&rna_KeyConfigurations_active,
	-1, "default", 0, "Default Key Configuration",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_default_get, NULL, NULL, NULL,&RNA_KeyConfig
};

CollectionPropertyRNA rna_KeyConfigurations_rna_properties = {
	{NULL, (PropertyRNA*)&rna_KeyConfigurations_default,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyConfigurations_rna_properties_begin, KeyConfigurations_rna_properties_next, KeyConfigurations_rna_properties_end, KeyConfigurations_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_KeyConfigurations_new_name = {
	{(PropertyRNA*)&rna_KeyConfigurations_new_keyconfig, NULL,
	-1, "name", 5, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_KeyConfigurations_new_keyconfig = {
	{NULL, (PropertyRNA*)&rna_KeyConfigurations_new_name,
	-1, "keyconfig", 8, "Key Configuration",
	"Added key configuration.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyConfig
};

FunctionRNA rna_KeyConfigurations_new_func = {
	{(FunctionRNA*)&rna_KeyConfigurations_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_KeyConfigurations_new_name, (PropertyRNA*)&rna_KeyConfigurations_new_keyconfig}},
	"new", 0, "new",
	KeyConfigurations_new_call,
	(PropertyRNA*)&rna_KeyConfigurations_new_keyconfig
};

PointerPropertyRNA rna_KeyConfigurations_remove_keyconfig = {
	{NULL, NULL,
	-1, "keyconfig", 4, "Key Configuration",
	"Removed key configuration.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyConfig
};

FunctionRNA rna_KeyConfigurations_remove_func = {
	{NULL, (FunctionRNA*)&rna_KeyConfigurations_new_func,
	NULL,
	{(PropertyRNA*)&rna_KeyConfigurations_remove_keyconfig, (PropertyRNA*)&rna_KeyConfigurations_remove_keyconfig}},
	"remove", 0, "remove",
	KeyConfigurations_remove_call,
	NULL
};

StructRNA RNA_KeyConfigurations = {
	{(ContainerRNA *)&RNA_KeyMap, (ContainerRNA *)&RNA_KeyConfig,
	NULL,
	{(PropertyRNA*)&rna_KeyConfigurations_rna_type, (PropertyRNA*)&rna_KeyConfigurations_rna_properties}},
	"KeyConfigurations"	, NULL,NULL
, 0, "KeyConfigs", "Collection of KeyConfigs",
	17,
	NULL, (PropertyRNA*)&rna_KeyConfigurations_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_KeyConfigurations_new_func, (FunctionRNA*)&rna_KeyConfigurations_remove_func}
};

/* Key Map */
PointerPropertyRNA rna_KeyMap_rna_type = {
	{(PropertyRNA*)&rna_KeyMap_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyMap_name = {
	{(PropertyRNA*)&rna_KeyMap_show_expanded_children, (PropertyRNA*)&rna_KeyMap_rna_type,
	-1, "name", 0, "Name",
	"Name of the key map",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_name_get, KeyMap_name_length, NULL, 64, ""
};

BooleanPropertyRNA rna_KeyMap_show_expanded_children = {
	{(PropertyRNA*)&rna_KeyMap_items, (PropertyRNA*)&rna_KeyMap_name,
	-1, "show_expanded_children", 4099, "Children Expanded",
	"Children expanded in the user interface",
	4,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_show_expanded_children_get, KeyMap_show_expanded_children_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_KeyMap_items = {
	{(PropertyRNA*)&rna_KeyMap_show_expanded_items, (PropertyRNA*)&rna_KeyMap_show_expanded_children,
	-1, "items", 0, "Items",
	"Items in the keymap, linking an operator to an input event",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_KeyMapItems},
	KeyMap_items_begin, KeyMap_items_next, KeyMap_items_end, KeyMap_items_get, NULL, KeyMap_items_lookup_int, NULL, &RNA_KeyMapItem
};

BooleanPropertyRNA rna_KeyMap_show_expanded_items = {
	{(PropertyRNA*)&rna_KeyMap_is_modal, (PropertyRNA*)&rna_KeyMap_items,
	-1, "show_expanded_items", 4099, "Items Expanded",
	"Expanded in the user interface",
	4,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_show_expanded_items_get, KeyMap_show_expanded_items_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMap_is_modal = {
	{(PropertyRNA*)&rna_KeyMap_rna_properties, (PropertyRNA*)&rna_KeyMap_show_expanded_items,
	-1, "is_modal", 2, "Modal Keymap",
	"Indicates that a keymap is used for translate modal events for an operator",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_is_modal_get, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_KeyMap_rna_properties = {
	{(PropertyRNA*)&rna_KeyMap_region_type, (PropertyRNA*)&rna_KeyMap_is_modal,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_rna_properties_begin, KeyMap_rna_properties_next, KeyMap_rna_properties_end, KeyMap_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_KeyMap_region_type_items[9] = {
	{0, "WINDOW", 0, "Window", ""},
	{1, "HEADER", 0, "Header", ""},
	{2, "CHANNELS", 0, "Channels", ""},
	{3, "TEMPORARY", 0, "Temporary", ""},
	{4, "UI", 0, "UI", ""},
	{5, "TOOLS", 0, "Tools", ""},
	{6, "TOOL_PROPS", 0, "Tool Properties", ""},
	{7, "PREVIEW", 0, "Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMap_region_type = {
	{(PropertyRNA*)&rna_KeyMap_space_type, (PropertyRNA*)&rna_KeyMap_rna_properties,
	-1, "region_type", 2, "Region Type",
	"Optional region type keymap is associated with",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_region_type_get, NULL, NULL, rna_KeyMap_region_type_items, 8, 0
};

static EnumPropertyItem rna_KeyMap_space_type_items[20] = {
	{0, "EMPTY", 0, "Empty", ""},
	{1, "VIEW_3D", 0, "3D View", ""},
	{2, "GRAPH_EDITOR", 0, "Graph Editor", ""},
	{3, "OUTLINER", 0, "Outliner", ""},
	{4, "PROPERTIES", 0, "Properties", ""},
	{5, "FILE_BROWSER", 0, "File Browser", ""},
	{6, "IMAGE_EDITOR", 0, "Image Editor", ""},
	{7, "INFO", 0, "Info", ""},
	{8, "SEQUENCE_EDITOR", 0, "Sequence Editor", ""},
	{9, "TEXT_EDITOR", 0, "Text Editor", ""},
	{11, "AUDIO_WINDOW", 0, "Audio Window", ""},
	{12, "DOPESHEET_EDITOR", 0, "DopeSheet Editor", ""},
	{13, "NLA_EDITOR", 0, "NLA Editor", ""},
	{14, "SCRIPTS_WINDOW", 0, "Scripts Window", ""},
	{15, "TIMELINE", 0, "Timeline", ""},
	{16, "NODE_EDITOR", 0, "Node Editor", ""},
	{17, "LOGIC_EDITOR", 0, "Logic Editor", ""},
	{18, "CONSOLE", 0, "Python Console", ""},
	{19, "USER_PREFERENCES", 0, "User Preferences", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMap_space_type = {
	{(PropertyRNA*)&rna_KeyMap_is_user_defined, (PropertyRNA*)&rna_KeyMap_region_type,
	-1, "space_type", 2, "Space Type",
	"Optional space type keymap is associated with",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_space_type_get, NULL, NULL, rna_KeyMap_space_type_items, 19, 0
};

BooleanPropertyRNA rna_KeyMap_is_user_defined = {
	{NULL, (PropertyRNA*)&rna_KeyMap_space_type,
	-1, "is_user_defined", 3, "User Defined",
	"Keymap is defined by the user",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_MASS, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMap_is_user_defined_get, KeyMap_is_user_defined_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_KeyMap_active_keymap = {
	{NULL, NULL,
	-1, "keymap", 8, "Key Map",
	"Active key map.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMap_active_func = {
	{(FunctionRNA*)&rna_KeyMap_copy_to_user_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_KeyMap_active_keymap, (PropertyRNA*)&rna_KeyMap_active_keymap}},
	"active", 2, "active",
	KeyMap_active_call,
	(PropertyRNA*)&rna_KeyMap_active_keymap
};

PointerPropertyRNA rna_KeyMap_copy_to_user_keymap = {
	{NULL, NULL,
	-1, "keymap", 8, "Key Map",
	"User editable key map.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMap_copy_to_user_func = {
	{(FunctionRNA*)&rna_KeyMap_restore_to_default_func, (FunctionRNA*)&rna_KeyMap_active_func,
	NULL,
	{(PropertyRNA*)&rna_KeyMap_copy_to_user_keymap, (PropertyRNA*)&rna_KeyMap_copy_to_user_keymap}},
	"copy_to_user", 0, "copy_to_user",
	KeyMap_copy_to_user_call,
	(PropertyRNA*)&rna_KeyMap_copy_to_user_keymap
};

FunctionRNA rna_KeyMap_restore_to_default_func = {
	{(FunctionRNA*)&rna_KeyMap_restore_item_to_default_func, (FunctionRNA*)&rna_KeyMap_copy_to_user_func,
	NULL,
	{NULL, NULL}},
	"restore_to_default", 0, "restore_to_default",
	KeyMap_restore_to_default_call,
	NULL
};

PointerPropertyRNA rna_KeyMap_restore_item_to_default_item = {
	{NULL, NULL,
	-1, "item", 262148, "Item",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMap_restore_item_to_default_func = {
	{NULL, (FunctionRNA*)&rna_KeyMap_restore_to_default_func,
	NULL,
	{(PropertyRNA*)&rna_KeyMap_restore_item_to_default_item, (PropertyRNA*)&rna_KeyMap_restore_item_to_default_item}},
	"restore_item_to_default", 2, "restore_item_to_default",
	KeyMap_restore_item_to_default_call,
	NULL
};

StructRNA RNA_KeyMap = {
	{(ContainerRNA *)&RNA_KeyMapItem, (ContainerRNA *)&RNA_KeyConfigurations,
	NULL,
	{(PropertyRNA*)&rna_KeyMap_rna_type, (PropertyRNA*)&rna_KeyMap_is_user_defined}},
	"KeyMap"	, NULL,NULL
, 0, "Key Map", "Input configuration, including keymaps",
	17,
	(PropertyRNA*)&rna_KeyMap_name, (PropertyRNA*)&rna_KeyMap_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_KeyMap_active_func, (FunctionRNA*)&rna_KeyMap_restore_item_to_default_func}
};

/* Key Map Item */
PointerPropertyRNA rna_KeyMapItem_rna_type = {
	{(PropertyRNA*)&rna_KeyMapItem_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_KeyMapItem_name = {
	{(PropertyRNA*)&rna_KeyMapItem_active, (PropertyRNA*)&rna_KeyMapItem_rna_type,
	-1, "name", 0, "Name",
	"Name of operator to call on input event",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_name_get, KeyMapItem_name_length, NULL, 0, ""
};

BooleanPropertyRNA rna_KeyMapItem_active = {
	{(PropertyRNA*)&rna_KeyMapItem_alt, (PropertyRNA*)&rna_KeyMapItem_name,
	-1, "active", 4099, "Active",
	"Activate or deactivate item",
	38,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_active_get, KeyMapItem_active_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItem_alt = {
	{(PropertyRNA*)&rna_KeyMapItem_any, (PropertyRNA*)&rna_KeyMapItem_active,
	-1, "alt", 8195, "Alt",
	"Alt key pressed",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmKeyMapItem, alt), 1, NULL},
	KeyMapItem_alt_get, KeyMapItem_alt_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItem_any = {
	{(PropertyRNA*)&rna_KeyMapItem_ctrl, (PropertyRNA*)&rna_KeyMapItem_alt,
	-1, "any", 3, "Any",
	"Any modifier keys pressed",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_any_get, KeyMapItem_any_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItem_ctrl = {
	{(PropertyRNA*)&rna_KeyMapItem_show_expanded, (PropertyRNA*)&rna_KeyMapItem_any,
	-1, "ctrl", 8195, "Ctrl",
	"Control key pressed",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmKeyMapItem, ctrl), 1, NULL},
	KeyMapItem_ctrl_get, KeyMapItem_ctrl_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItem_show_expanded = {
	{(PropertyRNA*)&rna_KeyMapItem_idname, (PropertyRNA*)&rna_KeyMapItem_ctrl,
	-1, "show_expanded", 4099, "Expanded",
	"Show key map event and property details in the user interface",
	4,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_show_expanded_get, KeyMapItem_show_expanded_set, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_KeyMapItem_idname = {
	{(PropertyRNA*)&rna_KeyMapItem_key_modifier, (PropertyRNA*)&rna_KeyMapItem_show_expanded,
	-1, "idname", 1, "Identifier",
	"Identifier of operator to call on input event",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_idname_get, KeyMapItem_idname_length, KeyMapItem_idname_set, 64, ""
};

static EnumPropertyItem rna_KeyMapItem_key_modifier_items[148] = {
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

EnumPropertyRNA rna_KeyMapItem_key_modifier = {
	{(PropertyRNA*)&rna_KeyMapItem_map_type, (PropertyRNA*)&rna_KeyMapItem_idname,
	-1, "key_modifier", 3, "Key Modifier",
	"Regular key pressed as a modifier",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_key_modifier_get, KeyMapItem_key_modifier_set, NULL, rna_KeyMapItem_key_modifier_items, 147, 0
};

static EnumPropertyItem rna_KeyMapItem_map_type_items[6] = {
	{0, "KEYBOARD", 0, "Keyboard", ""},
	{2, "TWEAK", 0, "Tweak", ""},
	{1, "MOUSE", 0, "Mouse", ""},
	{3, "TEXTINPUT", 0, "Text Input", ""},
	{4, "TIMER", 0, "Timer", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_map_type = {
	{(PropertyRNA*)&rna_KeyMapItem_oskey, (PropertyRNA*)&rna_KeyMapItem_key_modifier,
	-1, "map_type", 3, "Map Type",
	"Type of event mapping",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_map_type_get, KeyMapItem_map_type_set, NULL, rna_KeyMapItem_map_type_items, 5, 0
};

BooleanPropertyRNA rna_KeyMapItem_oskey = {
	{(PropertyRNA*)&rna_KeyMapItem_rna_properties, (PropertyRNA*)&rna_KeyMapItem_map_type,
	-1, "oskey", 8195, "OS Key",
	"Operating system key pressed",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmKeyMapItem, oskey), 1, NULL},
	KeyMapItem_oskey_get, KeyMapItem_oskey_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_KeyMapItem_rna_properties = {
	{(PropertyRNA*)&rna_KeyMapItem_properties, (PropertyRNA*)&rna_KeyMapItem_oskey,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_rna_properties_begin, KeyMapItem_rna_properties_next, KeyMapItem_rna_properties_end, KeyMapItem_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_KeyMapItem_properties = {
	{(PropertyRNA*)&rna_KeyMapItem_propvalue, (PropertyRNA*)&rna_KeyMapItem_rna_properties,
	-1, "properties", 0, "Properties",
	"Properties to set when the operator is called",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

static EnumPropertyItem rna_KeyMapItem_propvalue_items[2] = {
	{0, "NONE", 0, "", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_propvalue = {
	{(PropertyRNA*)&rna_KeyMapItem_shift, (PropertyRNA*)&rna_KeyMapItem_properties,
	-1, "propvalue", 3, "Property Value",
	"The value this event translates to in a modal keymap",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_propvalue_get, KeyMapItem_propvalue_set, rna_KeyMapItem_propvalue_itemf, rna_KeyMapItem_propvalue_items, 1, 0
};

BooleanPropertyRNA rna_KeyMapItem_shift = {
	{(PropertyRNA*)&rna_KeyMapItem_type, (PropertyRNA*)&rna_KeyMapItem_propvalue,
	-1, "shift", 8195, "Shift",
	"Shift key pressed",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmKeyMapItem, shift), 1, NULL},
	KeyMapItem_shift_get, KeyMapItem_shift_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItem_type_items[148] = {
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

EnumPropertyRNA rna_KeyMapItem_type = {
	{(PropertyRNA*)&rna_KeyMapItem_is_user_defined, (PropertyRNA*)&rna_KeyMapItem_shift,
	-1, "type", 3, "Type",
	"Type of event",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_type_get, KeyMapItem_type_set, rna_KeyMapItem_type_itemf, rna_KeyMapItem_type_items, 147, 0
};

BooleanPropertyRNA rna_KeyMapItem_is_user_defined = {
	{(PropertyRNA*)&rna_KeyMapItem_value, (PropertyRNA*)&rna_KeyMapItem_type,
	-1, "is_user_defined", 2, "User Defined",
	"Is this keymap item user defined (doesn\'t just override a builtin item)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_is_user_defined_get, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItem_value_items[7] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItem_value = {
	{(PropertyRNA*)&rna_KeyMapItem_id, (PropertyRNA*)&rna_KeyMapItem_is_user_defined,
	-1, "value", 3, "Value",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItem_value_get, KeyMapItem_value_set, rna_KeyMapItem_value_itemf, rna_KeyMapItem_value_items, 6, 0
};

IntPropertyRNA rna_KeyMapItem_id = {
	{NULL, (PropertyRNA*)&rna_KeyMapItem_value,
	-1, "id", 8194, "id",
	"ID of the item",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(wmKeyMapItem, id), 1, NULL},
	KeyMapItem_id_get, NULL, NULL, NULL, NULL,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_KeyMapItem_compare_item = {
	{(PropertyRNA*)&rna_KeyMapItem_compare_result, NULL,
	-1, "item", 4, "Item",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

BooleanPropertyRNA rna_KeyMapItem_compare_result = {
	{NULL, (PropertyRNA*)&rna_KeyMapItem_compare_item,
	-1, "result", 11, "Comparison result",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_KeyMapItem_compare_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_KeyMapItem_compare_item, (PropertyRNA*)&rna_KeyMapItem_compare_result}},
	"compare", 0, "compare",
	KeyMapItem_compare_call,
	(PropertyRNA*)&rna_KeyMapItem_compare_result
};

StructRNA RNA_KeyMapItem = {
	{(ContainerRNA *)&RNA_KeyMapItems, (ContainerRNA *)&RNA_KeyMap,
	NULL,
	{(PropertyRNA*)&rna_KeyMapItem_rna_type, (PropertyRNA*)&rna_KeyMapItem_id}},
	"KeyMapItem"	, NULL,NULL
, 0, "Key Map Item", "Item in a Key Map",
	17,
	(PropertyRNA*)&rna_KeyMapItem_idname, (PropertyRNA*)&rna_KeyMapItem_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_KeyMapItem_compare_func, (FunctionRNA*)&rna_KeyMapItem_compare_func}
};

/* KeyMap Items */
PointerPropertyRNA rna_KeyMapItems_rna_type = {
	{(PropertyRNA*)&rna_KeyMapItems_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItems_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_KeyMapItems_rna_properties = {
	{NULL, (PropertyRNA*)&rna_KeyMapItems_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMapItems_rna_properties_begin, KeyMapItems_rna_properties_next, KeyMapItems_rna_properties_end, KeyMapItems_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_KeyMapItems_new_idname = {
	{(PropertyRNA*)&rna_KeyMapItems_new_type, NULL,
	-1, "idname", 5, "Operator Identifier",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMapItems_new_type_items[148] = {
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

EnumPropertyRNA rna_KeyMapItems_new_type = {
	{(PropertyRNA*)&rna_KeyMapItems_new_value, (PropertyRNA*)&rna_KeyMapItems_new_idname,
	-1, "type", 7, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMapItems_new_type_items, 147, 0
};

static EnumPropertyItem rna_KeyMapItems_new_value_items[7] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_value = {
	{(PropertyRNA*)&rna_KeyMapItems_new_any, (PropertyRNA*)&rna_KeyMapItems_new_type,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMapItems_new_value_items, 6, 0
};

BooleanPropertyRNA rna_KeyMapItems_new_any = {
	{(PropertyRNA*)&rna_KeyMapItems_new_shift, (PropertyRNA*)&rna_KeyMapItems_new_value,
	-1, "any", 3, "Any",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_shift = {
	{(PropertyRNA*)&rna_KeyMapItems_new_ctrl, (PropertyRNA*)&rna_KeyMapItems_new_any,
	-1, "shift", 3, "Shift",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_ctrl = {
	{(PropertyRNA*)&rna_KeyMapItems_new_alt, (PropertyRNA*)&rna_KeyMapItems_new_shift,
	-1, "ctrl", 3, "Ctrl",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_alt = {
	{(PropertyRNA*)&rna_KeyMapItems_new_oskey, (PropertyRNA*)&rna_KeyMapItems_new_ctrl,
	-1, "alt", 3, "Alt",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_oskey = {
	{(PropertyRNA*)&rna_KeyMapItems_new_key_modifier, (PropertyRNA*)&rna_KeyMapItems_new_alt,
	-1, "oskey", 3, "OS Key",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItems_new_key_modifier_items[148] = {
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

EnumPropertyRNA rna_KeyMapItems_new_key_modifier = {
	{(PropertyRNA*)&rna_KeyMapItems_new_item, (PropertyRNA*)&rna_KeyMapItems_new_oskey,
	-1, "key_modifier", 3, "Key Modifier",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMapItems_new_key_modifier_items, 147, 0
};

PointerPropertyRNA rna_KeyMapItems_new_item = {
	{NULL, (PropertyRNA*)&rna_KeyMapItems_new_key_modifier,
	-1, "item", 8, "Item",
	"Added key map item.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_new_func = {
	{(FunctionRNA*)&rna_KeyMapItems_new_modal_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_KeyMapItems_new_idname, (PropertyRNA*)&rna_KeyMapItems_new_item}},
	"new", 4, "new",
	KeyMapItems_new_call,
	(PropertyRNA*)&rna_KeyMapItems_new_item
};

StringPropertyRNA rna_KeyMapItems_new_modal_propvalue = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_type, NULL,
	-1, "propvalue", 5, "Property Value",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMapItems_new_modal_type_items[148] = {
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

EnumPropertyRNA rna_KeyMapItems_new_modal_type = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_value, (PropertyRNA*)&rna_KeyMapItems_new_modal_propvalue,
	-1, "type", 7, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMapItems_new_modal_type_items, 147, 0
};

static EnumPropertyItem rna_KeyMapItems_new_modal_value_items[7] = {
	{-1, "ANY", 0, "Any", ""},
	{0, "NOTHING", 0, "Nothing", ""},
	{1, "PRESS", 0, "Press", ""},
	{2, "RELEASE", 0, "Release", ""},
	{3, "CLICK", 0, "Click", ""},
	{4, "DOUBLE_CLICK", 0, "Double Click", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMapItems_new_modal_value = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_any, (PropertyRNA*)&rna_KeyMapItems_new_modal_type,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMapItems_new_modal_value_items, 6, 0
};

BooleanPropertyRNA rna_KeyMapItems_new_modal_any = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_shift, (PropertyRNA*)&rna_KeyMapItems_new_modal_value,
	-1, "any", 3, "Any",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_modal_shift = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_ctrl, (PropertyRNA*)&rna_KeyMapItems_new_modal_any,
	-1, "shift", 3, "Shift",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_modal_ctrl = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_alt, (PropertyRNA*)&rna_KeyMapItems_new_modal_shift,
	-1, "ctrl", 3, "Ctrl",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_modal_alt = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_oskey, (PropertyRNA*)&rna_KeyMapItems_new_modal_ctrl,
	-1, "alt", 3, "Alt",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_KeyMapItems_new_modal_oskey = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_key_modifier, (PropertyRNA*)&rna_KeyMapItems_new_modal_alt,
	-1, "oskey", 3, "OS Key",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_KeyMapItems_new_modal_key_modifier_items[148] = {
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

EnumPropertyRNA rna_KeyMapItems_new_modal_key_modifier = {
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_item, (PropertyRNA*)&rna_KeyMapItems_new_modal_oskey,
	-1, "key_modifier", 3, "Key Modifier",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMapItems_new_modal_key_modifier_items, 147, 0
};

PointerPropertyRNA rna_KeyMapItems_new_modal_item = {
	{NULL, (PropertyRNA*)&rna_KeyMapItems_new_modal_key_modifier,
	-1, "item", 8, "Item",
	"Added key map item.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_new_modal_func = {
	{(FunctionRNA*)&rna_KeyMapItems_remove_func, (FunctionRNA*)&rna_KeyMapItems_new_func,
	NULL,
	{(PropertyRNA*)&rna_KeyMapItems_new_modal_propvalue, (PropertyRNA*)&rna_KeyMapItems_new_modal_item}},
	"new_modal", 6, "new_modal",
	KeyMapItems_new_modal_call,
	(PropertyRNA*)&rna_KeyMapItems_new_modal_item
};

PointerPropertyRNA rna_KeyMapItems_remove_item = {
	{NULL, NULL,
	-1, "item", 4, "Item",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_remove_func = {
	{(FunctionRNA*)&rna_KeyMapItems_from_id_func, (FunctionRNA*)&rna_KeyMapItems_new_modal_func,
	NULL,
	{(PropertyRNA*)&rna_KeyMapItems_remove_item, (PropertyRNA*)&rna_KeyMapItems_remove_item}},
	"remove", 0, "remove",
	KeyMapItems_remove_call,
	NULL
};

IntPropertyRNA rna_KeyMapItems_from_id_id = {
	{(PropertyRNA*)&rna_KeyMapItems_from_id_item, NULL,
	-1, "id", 7, "id",
	"ID of the item",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_KeyMapItems_from_id_item = {
	{NULL, (PropertyRNA*)&rna_KeyMapItems_from_id_id,
	-1, "item", 8, "Item",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMapItem
};

FunctionRNA rna_KeyMapItems_from_id_func = {
	{NULL, (FunctionRNA*)&rna_KeyMapItems_remove_func,
	NULL,
	{(PropertyRNA*)&rna_KeyMapItems_from_id_id, (PropertyRNA*)&rna_KeyMapItems_from_id_item}},
	"from_id", 0, "from_id",
	KeyMapItems_from_id_call,
	(PropertyRNA*)&rna_KeyMapItems_from_id_item
};

StructRNA RNA_KeyMapItems = {
	{(ContainerRNA *)&RNA_KeyMaps, (ContainerRNA *)&RNA_KeyMapItem,
	NULL,
	{(PropertyRNA*)&rna_KeyMapItems_rna_type, (PropertyRNA*)&rna_KeyMapItems_rna_properties}},
	"KeyMapItems"	, NULL,NULL
, 0, "KeyMap Items", "Collection of keymap items",
	17,
	NULL, (PropertyRNA*)&rna_KeyMapItems_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_KeyMapItems_new_func, (FunctionRNA*)&rna_KeyMapItems_from_id_func}
};

/* Key Maps */
PointerPropertyRNA rna_KeyMaps_rna_type = {
	{(PropertyRNA*)&rna_KeyMaps_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMaps_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_KeyMaps_rna_properties = {
	{NULL, (PropertyRNA*)&rna_KeyMaps_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	KeyMaps_rna_properties_begin, KeyMaps_rna_properties_next, KeyMaps_rna_properties_end, KeyMaps_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_KeyMaps_new_name = {
	{(PropertyRNA*)&rna_KeyMaps_new_space_type, NULL,
	-1, "name", 5, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMaps_new_space_type_items[20] = {
	{0, "EMPTY", 0, "Empty", ""},
	{1, "VIEW_3D", 0, "3D View", ""},
	{2, "GRAPH_EDITOR", 0, "Graph Editor", ""},
	{3, "OUTLINER", 0, "Outliner", ""},
	{4, "PROPERTIES", 0, "Properties", ""},
	{5, "FILE_BROWSER", 0, "File Browser", ""},
	{6, "IMAGE_EDITOR", 0, "Image Editor", ""},
	{7, "INFO", 0, "Info", ""},
	{8, "SEQUENCE_EDITOR", 0, "Sequence Editor", ""},
	{9, "TEXT_EDITOR", 0, "Text Editor", ""},
	{11, "AUDIO_WINDOW", 0, "Audio Window", ""},
	{12, "DOPESHEET_EDITOR", 0, "DopeSheet Editor", ""},
	{13, "NLA_EDITOR", 0, "NLA Editor", ""},
	{14, "SCRIPTS_WINDOW", 0, "Scripts Window", ""},
	{15, "TIMELINE", 0, "Timeline", ""},
	{16, "NODE_EDITOR", 0, "Node Editor", ""},
	{17, "LOGIC_EDITOR", 0, "Logic Editor", ""},
	{18, "CONSOLE", 0, "Python Console", ""},
	{19, "USER_PREFERENCES", 0, "User Preferences", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_new_space_type = {
	{(PropertyRNA*)&rna_KeyMaps_new_region_type, (PropertyRNA*)&rna_KeyMaps_new_name,
	-1, "space_type", 3, "Space Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMaps_new_space_type_items, 19, 0
};

static EnumPropertyItem rna_KeyMaps_new_region_type_items[9] = {
	{0, "WINDOW", 0, "Window", ""},
	{1, "HEADER", 0, "Header", ""},
	{2, "CHANNELS", 0, "Channels", ""},
	{3, "TEMPORARY", 0, "Temporary", ""},
	{4, "UI", 0, "UI", ""},
	{5, "TOOLS", 0, "Tools", ""},
	{6, "TOOL_PROPS", 0, "Tool Properties", ""},
	{7, "PREVIEW", 0, "Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_new_region_type = {
	{(PropertyRNA*)&rna_KeyMaps_new_modal, (PropertyRNA*)&rna_KeyMaps_new_space_type,
	-1, "region_type", 3, "Region Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMaps_new_region_type_items, 8, 0
};

BooleanPropertyRNA rna_KeyMaps_new_modal = {
	{(PropertyRNA*)&rna_KeyMaps_new_keymap, (PropertyRNA*)&rna_KeyMaps_new_region_type,
	-1, "modal", 3, "Modal",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_KeyMaps_new_keymap = {
	{NULL, (PropertyRNA*)&rna_KeyMaps_new_modal,
	-1, "keymap", 8, "Key Map",
	"Added key map.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_new_func = {
	{(FunctionRNA*)&rna_KeyMaps_find_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_KeyMaps_new_name, (PropertyRNA*)&rna_KeyMaps_new_keymap}},
	"new", 0, "new",
	KeyMaps_new_call,
	(PropertyRNA*)&rna_KeyMaps_new_keymap
};

StringPropertyRNA rna_KeyMaps_find_name = {
	{(PropertyRNA*)&rna_KeyMaps_find_space_type, NULL,
	-1, "name", 5, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

static EnumPropertyItem rna_KeyMaps_find_space_type_items[20] = {
	{0, "EMPTY", 0, "Empty", ""},
	{1, "VIEW_3D", 0, "3D View", ""},
	{2, "GRAPH_EDITOR", 0, "Graph Editor", ""},
	{3, "OUTLINER", 0, "Outliner", ""},
	{4, "PROPERTIES", 0, "Properties", ""},
	{5, "FILE_BROWSER", 0, "File Browser", ""},
	{6, "IMAGE_EDITOR", 0, "Image Editor", ""},
	{7, "INFO", 0, "Info", ""},
	{8, "SEQUENCE_EDITOR", 0, "Sequence Editor", ""},
	{9, "TEXT_EDITOR", 0, "Text Editor", ""},
	{11, "AUDIO_WINDOW", 0, "Audio Window", ""},
	{12, "DOPESHEET_EDITOR", 0, "DopeSheet Editor", ""},
	{13, "NLA_EDITOR", 0, "NLA Editor", ""},
	{14, "SCRIPTS_WINDOW", 0, "Scripts Window", ""},
	{15, "TIMELINE", 0, "Timeline", ""},
	{16, "NODE_EDITOR", 0, "Node Editor", ""},
	{17, "LOGIC_EDITOR", 0, "Logic Editor", ""},
	{18, "CONSOLE", 0, "Python Console", ""},
	{19, "USER_PREFERENCES", 0, "User Preferences", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_find_space_type = {
	{(PropertyRNA*)&rna_KeyMaps_find_region_type, (PropertyRNA*)&rna_KeyMaps_find_name,
	-1, "space_type", 3, "Space Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMaps_find_space_type_items, 19, 0
};

static EnumPropertyItem rna_KeyMaps_find_region_type_items[9] = {
	{0, "WINDOW", 0, "Window", ""},
	{1, "HEADER", 0, "Header", ""},
	{2, "CHANNELS", 0, "Channels", ""},
	{3, "TEMPORARY", 0, "Temporary", ""},
	{4, "UI", 0, "UI", ""},
	{5, "TOOLS", 0, "Tools", ""},
	{6, "TOOL_PROPS", 0, "Tool Properties", ""},
	{7, "PREVIEW", 0, "Preview", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_KeyMaps_find_region_type = {
	{(PropertyRNA*)&rna_KeyMaps_find_keymap, (PropertyRNA*)&rna_KeyMaps_find_space_type,
	-1, "region_type", 3, "Region Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_KeyMaps_find_region_type_items, 8, 0
};

PointerPropertyRNA rna_KeyMaps_find_keymap = {
	{NULL, (PropertyRNA*)&rna_KeyMaps_find_region_type,
	-1, "keymap", 8, "Key Map",
	"Corresponding key map.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_find_func = {
	{(FunctionRNA*)&rna_KeyMaps_find_modal_func, (FunctionRNA*)&rna_KeyMaps_new_func,
	NULL,
	{(PropertyRNA*)&rna_KeyMaps_find_name, (PropertyRNA*)&rna_KeyMaps_find_keymap}},
	"find", 0, "find",
	KeyMaps_find_call,
	(PropertyRNA*)&rna_KeyMaps_find_keymap
};

StringPropertyRNA rna_KeyMaps_find_modal_name = {
	{(PropertyRNA*)&rna_KeyMaps_find_modal_keymap, NULL,
	-1, "name", 5, "Operator Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

PointerPropertyRNA rna_KeyMaps_find_modal_keymap = {
	{NULL, (PropertyRNA*)&rna_KeyMaps_find_modal_name,
	-1, "keymap", 8, "Key Map",
	"Corresponding key map.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_KeyMap
};

FunctionRNA rna_KeyMaps_find_modal_func = {
	{NULL, (FunctionRNA*)&rna_KeyMaps_find_func,
	NULL,
	{(PropertyRNA*)&rna_KeyMaps_find_modal_name, (PropertyRNA*)&rna_KeyMaps_find_modal_keymap}},
	"find_modal", 0, "find_modal",
	KeyMaps_find_modal_call,
	(PropertyRNA*)&rna_KeyMaps_find_modal_keymap
};

StructRNA RNA_KeyMaps = {
	{(ContainerRNA *)&RNA_KeyboardSensor, (ContainerRNA *)&RNA_KeyMapItems,
	NULL,
	{(PropertyRNA*)&rna_KeyMaps_rna_type, (PropertyRNA*)&rna_KeyMaps_rna_properties}},
	"KeyMaps"	, NULL,NULL
, 0, "Key Maps", "Collection of keymaps",
	17,
	NULL, (PropertyRNA*)&rna_KeyMaps_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_KeyMaps_new_func, (FunctionRNA*)&rna_KeyMaps_find_modal_func}
};

/* Macro Operator */
PointerPropertyRNA rna_Macro_rna_type = {
	{(PropertyRNA*)&rna_Macro_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Macro_name = {
	{(PropertyRNA*)&rna_Macro_bl_options, (PropertyRNA*)&rna_Macro_rna_type,
	-1, "name", 0, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_name_get, Macro_name_length, NULL, 0, ""
};

static EnumPropertyItem rna_Macro_bl_options_items[7] = {
	{1, "REGISTER", 0, "Register", ""},
	{2, "UNDO", 0, "Undo", ""},
	{4, "BLOCKING", 0, "Finished", ""},
	{8, "MACRO", 0, "Macro", ""},
	{16, "GRAB_POINTER", 0, "Grab Pointer", ""},
	{32, "PRESET", 0, "Preset", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Macro_bl_options = {
	{(PropertyRNA*)&rna_Macro_rna_properties, (PropertyRNA*)&rna_Macro_name,
	-1, "bl_options", 2097203, "Options",
	"Options for this operator type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_options_get, Macro_bl_options_set, NULL, rna_Macro_bl_options_items, 6, 1
};

CollectionPropertyRNA rna_Macro_rna_properties = {
	{(PropertyRNA*)&rna_Macro_properties, (PropertyRNA*)&rna_Macro_bl_options,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_rna_properties_begin, Macro_rna_properties_next, Macro_rna_properties_end, Macro_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_Macro_properties = {
	{(PropertyRNA*)&rna_Macro_bl_description, (PropertyRNA*)&rna_Macro_rna_properties,
	-1, "properties", 262144, "Properties",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

StringPropertyRNA rna_Macro_bl_description = {
	{(PropertyRNA*)&rna_Macro_bl_idname, (PropertyRNA*)&rna_Macro_properties,
	-1, "bl_description", 49, "bl_description",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_description_get, Macro_bl_description_length, Macro_bl_description_set, 1024, ""
};

StringPropertyRNA rna_Macro_bl_idname = {
	{(PropertyRNA*)&rna_Macro_bl_label, (PropertyRNA*)&rna_Macro_bl_description,
	-1, "bl_idname", 67108881, "bl_idname",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_idname_get, Macro_bl_idname_length, Macro_bl_idname_set, 64, ""
};

StringPropertyRNA rna_Macro_bl_label = {
	{NULL, (PropertyRNA*)&rna_Macro_bl_idname,
	-1, "bl_label", 17, "bl_label",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Macro_bl_label_get, Macro_bl_label_length, Macro_bl_label_set, 1024, ""
};

static EnumPropertyItem rna_Macro_report_type_items[9] = {
	{1, "DEBUG", 0, "Debug", ""},
	{2, "INFO", 0, "Info", ""},
	{4, "OPERATOR", 0, "Operator", ""},
	{8, "WARNING", 0, "Warning", ""},
	{16, "ERROR", 0, "Error", ""},
	{32, "ERROR_INVALID_INPUT", 0, "Invalid Input", ""},
	{64, "ERROR_INVALID_CONTEXT", 0, "Invalid Context", ""},
	{128, "ERROR_OUT_OF_MEMORY", 0, "Out of Memory", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Macro_report_type = {
	{(PropertyRNA*)&rna_Macro_report_message, NULL,
	-1, "type", 2097159, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_Macro_report_type_items, 8, 0
};

StringPropertyRNA rna_Macro_report_message = {
	{NULL, (PropertyRNA*)&rna_Macro_report_type,
	-1, "message", 5, "Report Message",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_Macro_report_func = {
	{(FunctionRNA*)&rna_Macro_poll_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_Macro_report_type, (PropertyRNA*)&rna_Macro_report_message}},
	"report", 0, "report",
	Macro_report_call,
	NULL
};

BooleanPropertyRNA rna_Macro_poll_visible = {
	{(PropertyRNA*)&rna_Macro_poll_context, NULL,
	-1, "visible", 11, "",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Macro_poll_context = {
	{NULL, (PropertyRNA*)&rna_Macro_poll_visible,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Macro_poll_func = {
	{(FunctionRNA*)&rna_Macro_draw_func, (FunctionRNA*)&rna_Macro_report_func,
	NULL,
	{(PropertyRNA*)&rna_Macro_poll_visible, (PropertyRNA*)&rna_Macro_poll_context}},
	"poll", 25, "Test if the operator can be called or not.",
	NULL,
	(PropertyRNA*)&rna_Macro_poll_visible
};

PointerPropertyRNA rna_Macro_draw_context = {
	{NULL, NULL,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Macro_draw_func = {
	{NULL, (FunctionRNA*)&rna_Macro_poll_func,
	NULL,
	{(PropertyRNA*)&rna_Macro_draw_context, (PropertyRNA*)&rna_Macro_draw_context}},
	"draw", 24, "Draw function for the operator.",
	NULL,
	NULL
};

StructRNA RNA_Macro = {
	{(ContainerRNA *)&RNA_MagicTexture, (ContainerRNA *)&RNA_LockedTrackConstraint,
	NULL,
	{(PropertyRNA*)&rna_Macro_rna_type, (PropertyRNA*)&rna_Macro_bl_label}},
	"Macro"	, NULL,NULL
, 0, "Macro Operator", "Storage of a macro operator being executed, or registered after execution",
	17,
	(PropertyRNA*)&rna_Macro_bl_idname, (PropertyRNA*)&rna_Macro_rna_properties,
	NULL,
	NULL,
	rna_MacroOperator_refine,
	NULL,
	rna_MacroOperator_register,
	rna_Operator_unregister,
	NULL,
	{(FunctionRNA*)&rna_Macro_report_func, (FunctionRNA*)&rna_Macro_draw_func}
};

/* Operator */
PointerPropertyRNA rna_Operator_rna_type = {
	{(PropertyRNA*)&rna_Operator_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Operator_name = {
	{(PropertyRNA*)&rna_Operator_has_reports, (PropertyRNA*)&rna_Operator_rna_type,
	-1, "name", 0, "Name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_name_get, Operator_name_length, NULL, 0, ""
};

BooleanPropertyRNA rna_Operator_has_reports = {
	{(PropertyRNA*)&rna_Operator_bl_options, (PropertyRNA*)&rna_Operator_name,
	-1, "has_reports", 2, "Has Reports",
	"Operator has a set of reports (warnings and errors) from last execution",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_has_reports_get, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Operator_bl_options_items[7] = {
	{1, "REGISTER", 0, "Register", ""},
	{2, "UNDO", 0, "Undo", ""},
	{4, "BLOCKING", 0, "Finished", ""},
	{8, "MACRO", 0, "Macro", ""},
	{16, "GRAB_POINTER", 0, "Grab Pointer", ""},
	{32, "PRESET", 0, "Preset", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_bl_options = {
	{(PropertyRNA*)&rna_Operator_rna_properties, (PropertyRNA*)&rna_Operator_has_reports,
	-1, "bl_options", 2097203, "Options",
	"Options for this operator type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_options_get, Operator_bl_options_set, NULL, rna_Operator_bl_options_items, 6, 1
};

CollectionPropertyRNA rna_Operator_rna_properties = {
	{(PropertyRNA*)&rna_Operator_properties, (PropertyRNA*)&rna_Operator_bl_options,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_rna_properties_begin, Operator_rna_properties_next, Operator_rna_properties_end, Operator_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_Operator_properties = {
	{(PropertyRNA*)&rna_Operator_bl_description, (PropertyRNA*)&rna_Operator_rna_properties,
	-1, "properties", 262144, "Properties",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

StringPropertyRNA rna_Operator_bl_description = {
	{(PropertyRNA*)&rna_Operator_bl_idname, (PropertyRNA*)&rna_Operator_properties,
	-1, "bl_description", 49, "bl_description",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_description_get, Operator_bl_description_length, Operator_bl_description_set, 1024, ""
};

StringPropertyRNA rna_Operator_bl_idname = {
	{(PropertyRNA*)&rna_Operator_bl_label, (PropertyRNA*)&rna_Operator_bl_description,
	-1, "bl_idname", 67108881, "bl_idname",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_idname_get, Operator_bl_idname_length, Operator_bl_idname_set, 61, ""
};

StringPropertyRNA rna_Operator_bl_label = {
	{(PropertyRNA*)&rna_Operator_layout, (PropertyRNA*)&rna_Operator_bl_idname,
	-1, "bl_label", 17, "bl_label",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_bl_label_get, Operator_bl_label_length, Operator_bl_label_set, 1024, ""
};

PointerPropertyRNA rna_Operator_layout = {
	{NULL, (PropertyRNA*)&rna_Operator_bl_label,
	-1, "layout", 0, "layout",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Operator_layout_get, NULL, NULL, NULL,&RNA_UILayout
};

static EnumPropertyItem rna_Operator_report_type_items[9] = {
	{1, "DEBUG", 0, "Debug", ""},
	{2, "INFO", 0, "Info", ""},
	{4, "OPERATOR", 0, "Operator", ""},
	{8, "WARNING", 0, "Warning", ""},
	{16, "ERROR", 0, "Error", ""},
	{32, "ERROR_INVALID_INPUT", 0, "Invalid Input", ""},
	{64, "ERROR_INVALID_CONTEXT", 0, "Invalid Context", ""},
	{128, "ERROR_OUT_OF_MEMORY", 0, "Out of Memory", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_report_type = {
	{(PropertyRNA*)&rna_Operator_report_message, NULL,
	-1, "type", 2097159, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_Operator_report_type_items, 8, 0
};

StringPropertyRNA rna_Operator_report_message = {
	{NULL, (PropertyRNA*)&rna_Operator_report_type,
	-1, "message", 5, "Report Message",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_Operator_report_func = {
	{(FunctionRNA*)&rna_Operator_poll_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_Operator_report_type, (PropertyRNA*)&rna_Operator_report_message}},
	"report", 0, "report",
	Operator_report_call,
	NULL
};

BooleanPropertyRNA rna_Operator_poll_visible = {
	{(PropertyRNA*)&rna_Operator_poll_context, NULL,
	-1, "visible", 11, "",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Operator_poll_context = {
	{NULL, (PropertyRNA*)&rna_Operator_poll_visible,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Operator_poll_func = {
	{(FunctionRNA*)&rna_Operator_execute_func, (FunctionRNA*)&rna_Operator_report_func,
	NULL,
	{(PropertyRNA*)&rna_Operator_poll_visible, (PropertyRNA*)&rna_Operator_poll_context}},
	"poll", 25, "Test if the operator can be called or not.",
	NULL,
	(PropertyRNA*)&rna_Operator_poll_visible
};

PointerPropertyRNA rna_Operator_execute_context = {
	{(PropertyRNA*)&rna_Operator_execute_result, NULL,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

static EnumPropertyItem rna_Operator_execute_result_items[5] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", ""},
	{2, "CANCELLED", 0, "Cancelled", ""},
	{4, "FINISHED", 0, "Finished", ""},
	{8, "PASS_THROUGH", 0, "Pass Through", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_execute_result = {
	{NULL, (PropertyRNA*)&rna_Operator_execute_context,
	-1, "result", 2097163, "result",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_Operator_execute_result_items, 4, 2
};

FunctionRNA rna_Operator_execute_func = {
	{(FunctionRNA*)&rna_Operator_check_func, (FunctionRNA*)&rna_Operator_poll_func,
	NULL,
	{(PropertyRNA*)&rna_Operator_execute_context, (PropertyRNA*)&rna_Operator_execute_result}},
	"execute", 24, "Execute the operator.",
	NULL,
	(PropertyRNA*)&rna_Operator_execute_result
};

PointerPropertyRNA rna_Operator_check_context = {
	{(PropertyRNA*)&rna_Operator_check_result, NULL,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

BooleanPropertyRNA rna_Operator_check_result = {
	{NULL, (PropertyRNA*)&rna_Operator_check_context,
	-1, "result", 11, "result",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Operator_check_func = {
	{(FunctionRNA*)&rna_Operator_invoke_func, (FunctionRNA*)&rna_Operator_execute_func,
	NULL,
	{(PropertyRNA*)&rna_Operator_check_context, (PropertyRNA*)&rna_Operator_check_result}},
	"check", 24, "Check the operator settings.",
	NULL,
	(PropertyRNA*)&rna_Operator_check_result
};

PointerPropertyRNA rna_Operator_invoke_context = {
	{(PropertyRNA*)&rna_Operator_invoke_event, NULL,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_Operator_invoke_event = {
	{(PropertyRNA*)&rna_Operator_invoke_result, (PropertyRNA*)&rna_Operator_invoke_context,
	-1, "event", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_Operator_invoke_result_items[5] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", ""},
	{2, "CANCELLED", 0, "Cancelled", ""},
	{4, "FINISHED", 0, "Finished", ""},
	{8, "PASS_THROUGH", 0, "Pass Through", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_invoke_result = {
	{NULL, (PropertyRNA*)&rna_Operator_invoke_event,
	-1, "result", 2097163, "result",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_Operator_invoke_result_items, 4, 2
};

FunctionRNA rna_Operator_invoke_func = {
	{(FunctionRNA*)&rna_Operator_modal_func, (FunctionRNA*)&rna_Operator_check_func,
	NULL,
	{(PropertyRNA*)&rna_Operator_invoke_context, (PropertyRNA*)&rna_Operator_invoke_result}},
	"invoke", 24, "Invoke the operator.",
	NULL,
	(PropertyRNA*)&rna_Operator_invoke_result
};

PointerPropertyRNA rna_Operator_modal_context = {
	{(PropertyRNA*)&rna_Operator_modal_event, NULL,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

PointerPropertyRNA rna_Operator_modal_event = {
	{(PropertyRNA*)&rna_Operator_modal_result, (PropertyRNA*)&rna_Operator_modal_context,
	-1, "event", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_Operator_modal_result_items[5] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", ""},
	{2, "CANCELLED", 0, "Cancelled", ""},
	{4, "FINISHED", 0, "Finished", ""},
	{8, "PASS_THROUGH", 0, "Pass Through", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Operator_modal_result = {
	{NULL, (PropertyRNA*)&rna_Operator_modal_event,
	-1, "result", 2097163, "result",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_Operator_modal_result_items, 4, 2
};

FunctionRNA rna_Operator_modal_func = {
	{(FunctionRNA*)&rna_Operator_draw_func, (FunctionRNA*)&rna_Operator_invoke_func,
	NULL,
	{(PropertyRNA*)&rna_Operator_modal_context, (PropertyRNA*)&rna_Operator_modal_result}},
	"modal", 24, "Modal operator function.",
	NULL,
	(PropertyRNA*)&rna_Operator_modal_result
};

PointerPropertyRNA rna_Operator_draw_context = {
	{NULL, NULL,
	-1, "context", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Context
};

FunctionRNA rna_Operator_draw_func = {
	{NULL, (FunctionRNA*)&rna_Operator_modal_func,
	NULL,
	{(PropertyRNA*)&rna_Operator_draw_context, (PropertyRNA*)&rna_Operator_draw_context}},
	"draw", 24, "Draw function for the operator.",
	NULL,
	NULL
};

StructRNA RNA_Operator = {
	{(ContainerRNA *)&RNA_OperatorFileListElement, (ContainerRNA *)&RNA_ObstacleFluidSettings,
	NULL,
	{(PropertyRNA*)&rna_Operator_rna_type, (PropertyRNA*)&rna_Operator_layout}},
	"Operator"	, NULL,NULL
, 0, "Operator", "Storage of an operator being executed, or registered after execution",
	17,
	(PropertyRNA*)&rna_Operator_bl_idname, (PropertyRNA*)&rna_Operator_rna_properties,
	NULL,
	NULL,
	rna_Operator_refine,
	NULL,
	rna_Operator_register,
	rna_Operator_unregister,
	NULL,
	{(FunctionRNA*)&rna_Operator_report_func, (FunctionRNA*)&rna_Operator_draw_func}
};

/* Operator File List Element */
StringPropertyRNA rna_OperatorFileListElement_name = {
	{NULL, NULL,
	-1, "name", 1025, "Name",
	"the name of a file or directory within a file list",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

StructRNA RNA_OperatorFileListElement = {
	{(ContainerRNA *)&RNA_OperatorMousePath, (ContainerRNA *)&RNA_Operator,
	NULL,
	{(PropertyRNA*)&rna_OperatorFileListElement_name, (PropertyRNA*)&rna_OperatorFileListElement_name}},
	"OperatorFileListElement"	, NULL,NULL
, 0, "Operator File List Element", "",
	17,
	(PropertyRNA*)&rna_PropertyGroup_name, (PropertyRNA*)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

/* Operator Mouse Path */
static float rna_OperatorMousePath_loc_default[2] = {
	0.0f,
	0.0f
};

FloatPropertyRNA rna_OperatorMousePath_loc = {
	{(PropertyRNA*)&rna_OperatorMousePath_time, NULL,
	-1, "loc", 1027, "Location",
	"Mouse location",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_OperatorMousePath_loc_default
};

FloatPropertyRNA rna_OperatorMousePath_time = {
	{NULL, (PropertyRNA*)&rna_OperatorMousePath_loc,
	-1, "time", 1027, "Time",
	"Time of mouse location",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_OperatorMousePath = {
	{(ContainerRNA *)&RNA_OperatorProperties, (ContainerRNA *)&RNA_OperatorFileListElement,
	NULL,
	{(PropertyRNA*)&rna_OperatorMousePath_loc, (PropertyRNA*)&rna_OperatorMousePath_time}},
	"OperatorMousePath"	, NULL,NULL
, 0, "Operator Mouse Path", "Mouse path values for operators that record such paths",
	17,
	(PropertyRNA*)&rna_PropertyGroup_name, (PropertyRNA*)&rna_PropertyGroup_rna_properties,
	&RNA_PropertyGroup,
	NULL,
	rna_PropertyGroup_refine,
	NULL,
	rna_PropertyGroup_register,
	rna_PropertyGroup_unregister,
	rna_PropertyGroup_idprops,
	{NULL, NULL}
};

/* Operator Properties */
PointerPropertyRNA rna_OperatorProperties_rna_type = {
	{(PropertyRNA*)&rna_OperatorProperties_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_OperatorProperties_rna_properties = {
	{NULL, (PropertyRNA*)&rna_OperatorProperties_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorProperties_rna_properties_begin, OperatorProperties_rna_properties_next, OperatorProperties_rna_properties_end, OperatorProperties_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_OperatorProperties = {
	{(ContainerRNA *)&RNA_OperatorStrokeElement, (ContainerRNA *)&RNA_OperatorMousePath,
	NULL,
	{(PropertyRNA*)&rna_OperatorProperties_rna_type, (PropertyRNA*)&rna_OperatorProperties_rna_properties}},
	"OperatorProperties"	, NULL,NULL
, 0, "Operator Properties", "Input properties of an Operator",
	17,
	NULL, (PropertyRNA*)&rna_OperatorProperties_rna_properties,
	NULL,
	NULL,
	rna_OperatorProperties_refine,
	NULL,
	NULL,
	NULL,
	rna_OperatorProperties_idprops,
	{NULL, NULL}
};

/* OperatorTypeMacro */
PointerPropertyRNA rna_OperatorTypeMacro_rna_type = {
	{(PropertyRNA*)&rna_OperatorTypeMacro_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorTypeMacro_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_OperatorTypeMacro_rna_properties = {
	{(PropertyRNA*)&rna_OperatorTypeMacro_properties, (PropertyRNA*)&rna_OperatorTypeMacro_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorTypeMacro_rna_properties_begin, OperatorTypeMacro_rna_properties_next, OperatorTypeMacro_rna_properties_end, OperatorTypeMacro_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_OperatorTypeMacro_properties = {
	{NULL, (PropertyRNA*)&rna_OperatorTypeMacro_rna_properties,
	-1, "properties", 262144, "Properties",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	OperatorTypeMacro_properties_get, NULL, NULL, NULL,&RNA_OperatorProperties
};

StructRNA RNA_OperatorTypeMacro = {
	{(ContainerRNA *)&RNA_OrController, (ContainerRNA *)&RNA_OperatorStrokeElement,
	NULL,
	{(PropertyRNA*)&rna_OperatorTypeMacro_rna_type, (PropertyRNA*)&rna_OperatorTypeMacro_properties}},
	"OperatorTypeMacro"	, NULL,NULL
, 0, "OperatorTypeMacro", "Storage of a sub operator in a macro after it has been added",
	17,
	NULL, (PropertyRNA*)&rna_OperatorTypeMacro_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Window */
PointerPropertyRNA rna_Window_rna_type = {
	{(PropertyRNA*)&rna_Window_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Window_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_Window_rna_properties = {
	{(PropertyRNA*)&rna_Window_screen, (PropertyRNA*)&rna_Window_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Window_rna_properties_begin, Window_rna_properties_next, Window_rna_properties_end, Window_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

PointerPropertyRNA rna_Window_screen = {
	{NULL, (PropertyRNA*)&rna_Window_rna_properties,
	-1, "screen", 4456513, "Screen",
	"Active screen showing in the window",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	(UpdateFunc)rna_Window_screen_update, 0, NULL, NULL,
	0, -1, NULL},
	Window_screen_get, Window_screen_set, NULL, NULL,&RNA_Screen
};

StructRNA RNA_Window = {
	{(ContainerRNA *)&RNA_WindowManager, (ContainerRNA *)&RNA_WaveModifier,
	NULL,
	{(PropertyRNA*)&rna_Window_rna_type, (PropertyRNA*)&rna_Window_screen}},
	"Window"	, NULL,NULL
, 0, "Window", "Open window",
	17,
	NULL, (PropertyRNA*)&rna_Window_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Window Manager */
CollectionPropertyRNA rna_WindowManager_keyconfigs = {
	{(PropertyRNA*)&rna_WindowManager_operators, NULL,
	-1, "keyconfigs", 0, "Key Configurations",
	"Registered key configurations",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_KeyConfigurations},
	WindowManager_keyconfigs_begin, WindowManager_keyconfigs_next, WindowManager_keyconfigs_end, WindowManager_keyconfigs_get, NULL, WindowManager_keyconfigs_lookup_int, NULL, &RNA_KeyConfig
};

CollectionPropertyRNA rna_WindowManager_operators = {
	{(PropertyRNA*)&rna_WindowManager_clipboard, (PropertyRNA*)&rna_WindowManager_keyconfigs,
	-1, "operators", 0, "Operators",
	"Operator registry",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WindowManager_operators_begin, WindowManager_operators_next, WindowManager_operators_end, WindowManager_operators_get, NULL, WindowManager_operators_lookup_int, NULL, &RNA_Operator
};

StringPropertyRNA rna_WindowManager_clipboard = {
	{(PropertyRNA*)&rna_WindowManager_windows, (PropertyRNA*)&rna_WindowManager_operators,
	-1, "clipboard", 1, "Text Clipboard",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WindowManager_clipboard_get, WindowManager_clipboard_length, WindowManager_clipboard_set, 0, ""
};

CollectionPropertyRNA rna_WindowManager_windows = {
	{NULL, (PropertyRNA*)&rna_WindowManager_clipboard,
	-1, "windows", 0, "Windows",
	"Open windows",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WindowManager_windows_begin, WindowManager_windows_next, WindowManager_windows_end, WindowManager_windows_get, NULL, WindowManager_windows_lookup_int, NULL, &RNA_Window
};

PointerPropertyRNA rna_WindowManager_fileselect_add_operator = {
	{NULL, NULL,
	-1, "operator", 4, "",
	"Operator to call.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

FunctionRNA rna_WindowManager_fileselect_add_func = {
	{(FunctionRNA*)&rna_WindowManager_modal_handler_add_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_fileselect_add_operator, (PropertyRNA*)&rna_WindowManager_fileselect_add_operator}},
	"fileselect_add", 3, "Show up the file selector.",
	WindowManager_fileselect_add_call,
	NULL
};

PointerPropertyRNA rna_WindowManager_modal_handler_add_operator = {
	{(PropertyRNA*)&rna_WindowManager_modal_handler_add_handle, NULL,
	-1, "operator", 4, "",
	"Operator to call.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

BooleanPropertyRNA rna_WindowManager_modal_handler_add_handle = {
	{NULL, (PropertyRNA*)&rna_WindowManager_modal_handler_add_operator,
	-1, "handle", 11, "",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 1, NULL
};

FunctionRNA rna_WindowManager_modal_handler_add_func = {
	{(FunctionRNA*)&rna_WindowManager_invoke_props_popup_func, (FunctionRNA*)&rna_WindowManager_fileselect_add_func,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_modal_handler_add_operator, (PropertyRNA*)&rna_WindowManager_modal_handler_add_handle}},
	"modal_handler_add", 3, "modal_handler_add",
	WindowManager_modal_handler_add_call,
	(PropertyRNA*)&rna_WindowManager_modal_handler_add_handle
};

PointerPropertyRNA rna_WindowManager_invoke_props_popup_operator = {
	{(PropertyRNA*)&rna_WindowManager_invoke_props_popup_event, NULL,
	-1, "operator", 4, "",
	"Operator to call.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

PointerPropertyRNA rna_WindowManager_invoke_props_popup_event = {
	{(PropertyRNA*)&rna_WindowManager_invoke_props_popup_result, (PropertyRNA*)&rna_WindowManager_invoke_props_popup_operator,
	-1, "event", 4, "",
	"Event.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_WindowManager_invoke_props_popup_result_items[5] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", ""},
	{2, "CANCELLED", 0, "Cancelled", ""},
	{4, "FINISHED", 0, "Finished", ""},
	{8, "PASS_THROUGH", 0, "Pass Through", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_props_popup_result = {
	{NULL, (PropertyRNA*)&rna_WindowManager_invoke_props_popup_event,
	-1, "result", 2097163, "result",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_WindowManager_invoke_props_popup_result_items, 4, 2
};

FunctionRNA rna_WindowManager_invoke_props_popup_func = {
	{(FunctionRNA*)&rna_WindowManager_invoke_props_dialog_func, (FunctionRNA*)&rna_WindowManager_modal_handler_add_func,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_invoke_props_popup_operator, (PropertyRNA*)&rna_WindowManager_invoke_props_popup_result}},
	"invoke_props_popup", 3, "Operator popup invoke.",
	WindowManager_invoke_props_popup_call,
	(PropertyRNA*)&rna_WindowManager_invoke_props_popup_result
};

PointerPropertyRNA rna_WindowManager_invoke_props_dialog_operator = {
	{(PropertyRNA*)&rna_WindowManager_invoke_props_dialog_width, NULL,
	-1, "operator", 4, "",
	"Operator to call.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

IntPropertyRNA rna_WindowManager_invoke_props_dialog_width = {
	{(PropertyRNA*)&rna_WindowManager_invoke_props_dialog_height, (PropertyRNA*)&rna_WindowManager_invoke_props_dialog_operator,
	-1, "width", 3, "",
	"Width of the popup.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 300, NULL
};

IntPropertyRNA rna_WindowManager_invoke_props_dialog_height = {
	{(PropertyRNA*)&rna_WindowManager_invoke_props_dialog_result, (PropertyRNA*)&rna_WindowManager_invoke_props_dialog_width,
	-1, "height", 3, "",
	"Height of the popup.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 20, NULL
};

static EnumPropertyItem rna_WindowManager_invoke_props_dialog_result_items[5] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", ""},
	{2, "CANCELLED", 0, "Cancelled", ""},
	{4, "FINISHED", 0, "Finished", ""},
	{8, "PASS_THROUGH", 0, "Pass Through", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_props_dialog_result = {
	{NULL, (PropertyRNA*)&rna_WindowManager_invoke_props_dialog_height,
	-1, "result", 2097163, "result",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_WindowManager_invoke_props_dialog_result_items, 4, 2
};

FunctionRNA rna_WindowManager_invoke_props_dialog_func = {
	{(FunctionRNA*)&rna_WindowManager_invoke_search_popup_func, (FunctionRNA*)&rna_WindowManager_invoke_props_popup_func,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_invoke_props_dialog_operator, (PropertyRNA*)&rna_WindowManager_invoke_props_dialog_result}},
	"invoke_props_dialog", 3, "Operator dialog (non-autoexec popup) invoke.",
	WindowManager_invoke_props_dialog_call,
	(PropertyRNA*)&rna_WindowManager_invoke_props_dialog_result
};

PointerPropertyRNA rna_WindowManager_invoke_search_popup_operator = {
	{NULL, NULL,
	-1, "operator", 4, "",
	"Operator to call.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

FunctionRNA rna_WindowManager_invoke_search_popup_func = {
	{(FunctionRNA*)&rna_WindowManager_invoke_popup_func, (FunctionRNA*)&rna_WindowManager_invoke_props_dialog_func,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_invoke_search_popup_operator, (PropertyRNA*)&rna_WindowManager_invoke_search_popup_operator}},
	"invoke_search_popup", 3, "invoke_search_popup",
	WindowManager_invoke_search_popup_call,
	NULL
};

PointerPropertyRNA rna_WindowManager_invoke_popup_operator = {
	{(PropertyRNA*)&rna_WindowManager_invoke_popup_width, NULL,
	-1, "operator", 4, "",
	"Operator to call.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

IntPropertyRNA rna_WindowManager_invoke_popup_width = {
	{(PropertyRNA*)&rna_WindowManager_invoke_popup_height, (PropertyRNA*)&rna_WindowManager_invoke_popup_operator,
	-1, "width", 3, "",
	"Width of the popup.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 300, NULL
};

IntPropertyRNA rna_WindowManager_invoke_popup_height = {
	{(PropertyRNA*)&rna_WindowManager_invoke_popup_result, (PropertyRNA*)&rna_WindowManager_invoke_popup_width,
	-1, "height", 3, "",
	"Height of the popup.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 20, NULL
};

static EnumPropertyItem rna_WindowManager_invoke_popup_result_items[5] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", ""},
	{2, "CANCELLED", 0, "Cancelled", ""},
	{4, "FINISHED", 0, "Finished", ""},
	{8, "PASS_THROUGH", 0, "Pass Through", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_popup_result = {
	{NULL, (PropertyRNA*)&rna_WindowManager_invoke_popup_height,
	-1, "result", 2097163, "result",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_WindowManager_invoke_popup_result_items, 4, 2
};

FunctionRNA rna_WindowManager_invoke_popup_func = {
	{(FunctionRNA*)&rna_WindowManager_invoke_confirm_func, (FunctionRNA*)&rna_WindowManager_invoke_search_popup_func,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_invoke_popup_operator, (PropertyRNA*)&rna_WindowManager_invoke_popup_result}},
	"invoke_popup", 3, "Operator popup invoke.",
	WindowManager_invoke_popup_call,
	(PropertyRNA*)&rna_WindowManager_invoke_popup_result
};

PointerPropertyRNA rna_WindowManager_invoke_confirm_operator = {
	{(PropertyRNA*)&rna_WindowManager_invoke_confirm_event, NULL,
	-1, "operator", 4, "",
	"Operator to call.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Operator
};

PointerPropertyRNA rna_WindowManager_invoke_confirm_event = {
	{(PropertyRNA*)&rna_WindowManager_invoke_confirm_result, (PropertyRNA*)&rna_WindowManager_invoke_confirm_operator,
	-1, "event", 4, "",
	"Event.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Event
};

static EnumPropertyItem rna_WindowManager_invoke_confirm_result_items[5] = {
	{1, "RUNNING_MODAL", 0, "Running Modal", ""},
	{2, "CANCELLED", 0, "Cancelled", ""},
	{4, "FINISHED", 0, "Finished", ""},
	{8, "PASS_THROUGH", 0, "Pass Through", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_WindowManager_invoke_confirm_result = {
	{NULL, (PropertyRNA*)&rna_WindowManager_invoke_confirm_event,
	-1, "result", 2097163, "result",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_WindowManager_invoke_confirm_result_items, 4, 2
};

FunctionRNA rna_WindowManager_invoke_confirm_func = {
	{NULL, (FunctionRNA*)&rna_WindowManager_invoke_popup_func,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_invoke_confirm_operator, (PropertyRNA*)&rna_WindowManager_invoke_confirm_result}},
	"invoke_confirm", 3, "Operator confirmation.",
	WindowManager_invoke_confirm_call,
	(PropertyRNA*)&rna_WindowManager_invoke_confirm_result
};

StructRNA RNA_WindowManager = {
	{(ContainerRNA *)&RNA_WipeSequence, (ContainerRNA *)&RNA_Window,
	NULL,
	{(PropertyRNA*)&rna_WindowManager_keyconfigs, (PropertyRNA*)&rna_WindowManager_windows}},
	"WindowManager"	, NULL,NULL
, 1, "Window Manager", "Window manager datablock defining open windows and other user interface data",
	17,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA*)&rna_WindowManager_fileselect_add_func, (FunctionRNA*)&rna_WindowManager_invoke_confirm_func}
};

