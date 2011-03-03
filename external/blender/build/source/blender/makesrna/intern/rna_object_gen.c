
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

#include "rna_object.c"
#include "rna_object_api.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_DupliObject_rna_type;
PointerPropertyRNA rna_DupliObject_object;
FloatPropertyRNA rna_DupliObject_matrix;
FloatPropertyRNA rna_DupliObject_matrix_original;
CollectionPropertyRNA rna_DupliObject_rna_properties;


PointerPropertyRNA rna_GameObjectSettings_rna_type;
BooleanPropertyRNA rna_GameObjectSettings_use_actor;
CollectionPropertyRNA rna_GameObjectSettings_actuators;
BooleanPropertyRNA rna_GameObjectSettings_use_all_states;
BooleanPropertyRNA rna_GameObjectSettings_use_anisotropic_friction;
EnumPropertyRNA rna_GameObjectSettings_collision_bounds_type;
BooleanPropertyRNA rna_GameObjectSettings_use_collision_compound;
FloatPropertyRNA rna_GameObjectSettings_collision_margin;
CollectionPropertyRNA rna_GameObjectSettings_controllers;
FloatPropertyRNA rna_GameObjectSettings_damping;
BooleanPropertyRNA rna_GameObjectSettings_show_debug_state;
FloatPropertyRNA rna_GameObjectSettings_form_factor;
FloatPropertyRNA rna_GameObjectSettings_friction_coefficients;
BooleanPropertyRNA rna_GameObjectSettings_use_ghost;
BooleanPropertyRNA rna_GameObjectSettings_states_initial;
BooleanPropertyRNA rna_GameObjectSettings_lock_location_x;
BooleanPropertyRNA rna_GameObjectSettings_lock_rotation_x;
BooleanPropertyRNA rna_GameObjectSettings_lock_location_y;
BooleanPropertyRNA rna_GameObjectSettings_lock_rotation_y;
BooleanPropertyRNA rna_GameObjectSettings_lock_location_z;
BooleanPropertyRNA rna_GameObjectSettings_lock_rotation_z;
BooleanPropertyRNA rna_GameObjectSettings_use_activity_culling;
FloatPropertyRNA rna_GameObjectSettings_mass;
BooleanPropertyRNA rna_GameObjectSettings_use_sleep;
EnumPropertyRNA rna_GameObjectSettings_physics_type;
CollectionPropertyRNA rna_GameObjectSettings_rna_properties;
CollectionPropertyRNA rna_GameObjectSettings_properties;
FloatPropertyRNA rna_GameObjectSettings_radius;
BooleanPropertyRNA rna_GameObjectSettings_use_rotate_from_normal;
FloatPropertyRNA rna_GameObjectSettings_rotation_damping;
CollectionPropertyRNA rna_GameObjectSettings_sensors;
BooleanPropertyRNA rna_GameObjectSettings_show_actuators;
BooleanPropertyRNA rna_GameObjectSettings_show_controllers;
BooleanPropertyRNA rna_GameObjectSettings_show_sensors;
PointerPropertyRNA rna_GameObjectSettings_soft_body;
BooleanPropertyRNA rna_GameObjectSettings_states_visible;
BooleanPropertyRNA rna_GameObjectSettings_show_state_panel;
BooleanPropertyRNA rna_GameObjectSettings_use_collision_bounds;
BooleanPropertyRNA rna_GameObjectSettings_use_material_physics_fh;
BooleanPropertyRNA rna_GameObjectSettings_used_states;
FloatPropertyRNA rna_GameObjectSettings_velocity_max;
FloatPropertyRNA rna_GameObjectSettings_velocity_min;


PointerPropertyRNA rna_MaterialSlot_rna_type;
StringPropertyRNA rna_MaterialSlot_name;
EnumPropertyRNA rna_MaterialSlot_link;
PointerPropertyRNA rna_MaterialSlot_material;
CollectionPropertyRNA rna_MaterialSlot_rna_properties;


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

PointerPropertyRNA rna_Object_active_material;
IntPropertyRNA rna_Object_active_material_index;
PointerPropertyRNA rna_Object_active_shape_key;
IntPropertyRNA rna_Object_active_shape_key_index;
PointerPropertyRNA rna_Object_animation_data;
PointerPropertyRNA rna_Object_animation_visualisation;
FloatPropertyRNA rna_Object_rotation_axis_angle;
FloatPropertyRNA rna_Object_bound_box;
PointerPropertyRNA rna_Object_collision;
FloatPropertyRNA rna_Object_color;
CollectionPropertyRNA rna_Object_constraints;
PointerPropertyRNA rna_Object_data;
FloatPropertyRNA rna_Object_delta_location;
FloatPropertyRNA rna_Object_delta_rotation_euler;
FloatPropertyRNA rna_Object_delta_rotation_quaternion;
FloatPropertyRNA rna_Object_delta_scale;
FloatPropertyRNA rna_Object_dimensions;
BooleanPropertyRNA rna_Object_show_axis;
BooleanPropertyRNA rna_Object_show_bounds;
EnumPropertyRNA rna_Object_draw_bounds_type;
BooleanPropertyRNA rna_Object_show_name;
BooleanPropertyRNA rna_Object_show_texture_space;
BooleanPropertyRNA rna_Object_show_transparent;
BooleanPropertyRNA rna_Object_show_wire;
BooleanPropertyRNA rna_Object_use_dupli_faces_scale;
FloatPropertyRNA rna_Object_dupli_faces_scale;
IntPropertyRNA rna_Object_dupli_frames_end;
IntPropertyRNA rna_Object_dupli_frames_off;
IntPropertyRNA rna_Object_dupli_frames_on;
BooleanPropertyRNA rna_Object_use_dupli_frames_speed;
IntPropertyRNA rna_Object_dupli_frames_start;
PointerPropertyRNA rna_Object_dupli_group;
EnumPropertyRNA rna_Object_dupli_type;
BooleanPropertyRNA rna_Object_use_dupli_vertices_rotation;
CollectionPropertyRNA rna_Object_dupli_list;
FloatPropertyRNA rna_Object_empty_draw_size;
EnumPropertyRNA rna_Object_empty_draw_type;
FloatPropertyRNA rna_Object_rotation_euler;
PointerPropertyRNA rna_Object_field;
PointerPropertyRNA rna_Object_game;
PointerPropertyRNA rna_Object_grease_pencil;
FloatPropertyRNA rna_Object_matrix_basis;
BooleanPropertyRNA rna_Object_layers;
FloatPropertyRNA rna_Object_matrix_local;
FloatPropertyRNA rna_Object_location;
BooleanPropertyRNA rna_Object_lock_location;
BooleanPropertyRNA rna_Object_lock_rotation;
BooleanPropertyRNA rna_Object_lock_rotation_w;
BooleanPropertyRNA rna_Object_lock_rotations_4d;
BooleanPropertyRNA rna_Object_lock_scale;
CollectionPropertyRNA rna_Object_material_slots;
FloatPropertyRNA rna_Object_matrix_world;
EnumPropertyRNA rna_Object_draw_type;
EnumPropertyRNA rna_Object_mode;
CollectionPropertyRNA rna_Object_modifiers;
PointerPropertyRNA rna_Object_motion_path;
PointerPropertyRNA rna_Object_parent;
StringPropertyRNA rna_Object_parent_bone;
EnumPropertyRNA rna_Object_parent_type;
IntPropertyRNA rna_Object_parent_vertices;
CollectionPropertyRNA rna_Object_particle_systems;
IntPropertyRNA rna_Object_pass_index;
PointerPropertyRNA rna_Object_pose;
PointerPropertyRNA rna_Object_pose_library;
PointerPropertyRNA rna_Object_proxy;
PointerPropertyRNA rna_Object_proxy_group;
FloatPropertyRNA rna_Object_rotation_quaternion;
BooleanPropertyRNA rna_Object_hide_render;
BooleanPropertyRNA rna_Object_hide_select;
BooleanPropertyRNA rna_Object_hide;
EnumPropertyRNA rna_Object_rotation_mode;
FloatPropertyRNA rna_Object_scale;
BooleanPropertyRNA rna_Object_select;
BooleanPropertyRNA rna_Object_use_shape_key_edit_mode;
BooleanPropertyRNA rna_Object_show_only_shape_key;
BooleanPropertyRNA rna_Object_use_slow_parent;
PointerPropertyRNA rna_Object_soft_body;
FloatPropertyRNA rna_Object_time_offset;
BooleanPropertyRNA rna_Object_use_time_offset_add_parent;
BooleanPropertyRNA rna_Object_use_time_offset_edit;
BooleanPropertyRNA rna_Object_use_time_offset_parent;
BooleanPropertyRNA rna_Object_use_time_offset_particle;
EnumPropertyRNA rna_Object_track_axis;
EnumPropertyRNA rna_Object_type;
EnumPropertyRNA rna_Object_up_axis;
CollectionPropertyRNA rna_Object_vertex_groups;
BooleanPropertyRNA rna_Object_show_x_ray;
BooleanPropertyRNA rna_Object_is_duplicator;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


extern FunctionRNA rna_Object_create_mesh_func;
extern PointerPropertyRNA rna_Object_create_mesh_scene;
extern BooleanPropertyRNA rna_Object_create_mesh_apply_modifiers;
extern EnumPropertyRNA rna_Object_create_mesh_settings;
extern PointerPropertyRNA rna_Object_create_mesh_mesh;

extern FunctionRNA rna_Object_create_dupli_list_func;
extern PointerPropertyRNA rna_Object_create_dupli_list_scene;

extern FunctionRNA rna_Object_free_dupli_list_func;
extern FunctionRNA rna_Object_find_armature_func;
extern PointerPropertyRNA rna_Object_find_armature_ob_arm;

extern FunctionRNA rna_Object_shape_key_add_func;
extern StringPropertyRNA rna_Object_shape_key_add_name;
extern BooleanPropertyRNA rna_Object_shape_key_add_from_mix;
extern PointerPropertyRNA rna_Object_shape_key_add_key;

extern FunctionRNA rna_Object_ray_cast_func;
extern FloatPropertyRNA rna_Object_ray_cast_start;
extern FloatPropertyRNA rna_Object_ray_cast_end;
extern FloatPropertyRNA rna_Object_ray_cast_location;
extern FloatPropertyRNA rna_Object_ray_cast_normal;
extern IntPropertyRNA rna_Object_ray_cast_index;

extern FunctionRNA rna_Object_is_visible_func;
extern PointerPropertyRNA rna_Object_is_visible_scene;
extern BooleanPropertyRNA rna_Object_is_visible_is_visible;



PointerPropertyRNA rna_ObjectBase_rna_type;
BooleanPropertyRNA rna_ObjectBase_layers;
PointerPropertyRNA rna_ObjectBase_object;
CollectionPropertyRNA rna_ObjectBase_rna_properties;
BooleanPropertyRNA rna_ObjectBase_select;

extern FunctionRNA rna_ObjectBase_layers_from_view_func;
extern PointerPropertyRNA rna_ObjectBase_layers_from_view_view;



PointerPropertyRNA rna_ObjectConstraints_rna_type;
PointerPropertyRNA rna_ObjectConstraints_active;
CollectionPropertyRNA rna_ObjectConstraints_rna_properties;

extern FunctionRNA rna_ObjectConstraints_new_func;
extern EnumPropertyRNA rna_ObjectConstraints_new_type;
extern PointerPropertyRNA rna_ObjectConstraints_new_constraint;

extern FunctionRNA rna_ObjectConstraints_remove_func;
extern PointerPropertyRNA rna_ObjectConstraints_remove_constraint;



PointerPropertyRNA rna_ObjectModifiers_rna_type;
CollectionPropertyRNA rna_ObjectModifiers_rna_properties;

extern FunctionRNA rna_ObjectModifiers_new_func;
extern StringPropertyRNA rna_ObjectModifiers_new_name;
extern EnumPropertyRNA rna_ObjectModifiers_new_type;
extern PointerPropertyRNA rna_ObjectModifiers_new_modifier;

extern FunctionRNA rna_ObjectModifiers_remove_func;
extern PointerPropertyRNA rna_ObjectModifiers_remove_modifier;



PointerPropertyRNA rna_ParticleSystems_rna_type;
PointerPropertyRNA rna_ParticleSystems_active;
IntPropertyRNA rna_ParticleSystems_active_index;
CollectionPropertyRNA rna_ParticleSystems_rna_properties;


PointerPropertyRNA rna_VertexGroup_rna_type;
StringPropertyRNA rna_VertexGroup_name;
IntPropertyRNA rna_VertexGroup_index;
CollectionPropertyRNA rna_VertexGroup_rna_properties;

extern FunctionRNA rna_VertexGroup_add_func;
extern IntPropertyRNA rna_VertexGroup_add_index;
extern FloatPropertyRNA rna_VertexGroup_add_weight;
extern EnumPropertyRNA rna_VertexGroup_add_type;

extern FunctionRNA rna_VertexGroup_remove_func;
extern IntPropertyRNA rna_VertexGroup_remove_index;

extern FunctionRNA rna_VertexGroup_weight_func;
extern IntPropertyRNA rna_VertexGroup_weight_index;
extern FloatPropertyRNA rna_VertexGroup_weight_weight;



PointerPropertyRNA rna_VertexGroups_rna_type;
PointerPropertyRNA rna_VertexGroups_active;
IntPropertyRNA rna_VertexGroups_active_index;
CollectionPropertyRNA rna_VertexGroups_rna_properties;

extern FunctionRNA rna_VertexGroups_new_func;
extern StringPropertyRNA rna_VertexGroups_new_name;
extern PointerPropertyRNA rna_VertexGroups_new_group;

extern FunctionRNA rna_VertexGroups_remove_func;
extern PointerPropertyRNA rna_VertexGroups_remove_group;


PointerRNA DupliObject_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA DupliObject_object_get(PointerRNA *ptr)
{
	DupliObject *data= (DupliObject*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void DupliObject_matrix_get(PointerRNA *ptr, float values[16])
{
	DupliObject *data= (DupliObject*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		values[i]= (float)(((float*)data->mat)[i]);
	}
}

void DupliObject_matrix_set(PointerRNA *ptr, const float values[16])
{
	DupliObject *data= (DupliObject*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		((float*)data->mat)[i]= values[i];
	}
}

void DupliObject_matrix_original_get(PointerRNA *ptr, float values[16])
{
	DupliObject *data= (DupliObject*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		values[i]= (float)(((float*)data->omat)[i]);
	}
}

void DupliObject_matrix_original_set(PointerRNA *ptr, const float values[16])
{
	DupliObject *data= (DupliObject*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		((float*)data->omat)[i]= values[i];
	}
}

static PointerRNA DupliObject_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void DupliObject_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_DupliObject_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= DupliObject_rna_properties_get(iter);
}

void DupliObject_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= DupliObject_rna_properties_get(iter);
}

void DupliObject_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA GameObjectSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int GameObjectSettings_use_actor_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 4) != 0);
}

void GameObjectSettings_use_actor_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 4;
	else data->gameflag &= ~4;
}

static PointerRNA GameObjectSettings_actuators_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Actuator, rna_iterator_listbase_get(iter));
}

void GameObjectSettings_actuators_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GameObjectSettings_actuators;

	rna_iterator_listbase_begin(iter, &data->actuators, NULL);

	if(iter->valid)
		iter->ptr= GameObjectSettings_actuators_get(iter);
}

void GameObjectSettings_actuators_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= GameObjectSettings_actuators_get(iter);
}

void GameObjectSettings_actuators_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GameObjectSettings_actuators_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GameObjectSettings_actuators_begin(&iter, ptr);

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
		if(found) *r_ptr = GameObjectSettings_actuators_get(&iter);
	}

	GameObjectSettings_actuators_end(&iter);

	return found;
}

int GameObjectSettings_use_all_states_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->scaflag) & 4096) != 0);
}

void GameObjectSettings_use_all_states_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->scaflag |= 4096;
	else data->scaflag &= ~4096;
}

int GameObjectSettings_use_anisotropic_friction_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 256) != 0);
}

void GameObjectSettings_use_anisotropic_friction_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 256;
	else data->gameflag &= ~256;
}

int GameObjectSettings_collision_bounds_type_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->boundtype);
}

void GameObjectSettings_collision_bounds_type_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->boundtype= value;
}

int GameObjectSettings_use_collision_compound_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 2) != 0);
}

void GameObjectSettings_use_collision_compound_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 2;
	else data->gameflag &= ~2;
}

float GameObjectSettings_collision_margin_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->margin);
}

void GameObjectSettings_collision_margin_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->margin= CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA GameObjectSettings_controllers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Controller, rna_iterator_listbase_get(iter));
}

void GameObjectSettings_controllers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GameObjectSettings_controllers;

	rna_iterator_listbase_begin(iter, &data->controllers, NULL);

	if(iter->valid)
		iter->ptr= GameObjectSettings_controllers_get(iter);
}

void GameObjectSettings_controllers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= GameObjectSettings_controllers_get(iter);
}

void GameObjectSettings_controllers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GameObjectSettings_controllers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GameObjectSettings_controllers_begin(&iter, ptr);

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
		if(found) *r_ptr = GameObjectSettings_controllers_get(&iter);
	}

	GameObjectSettings_controllers_end(&iter);

	return found;
}

float GameObjectSettings_damping_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->damping);
}

void GameObjectSettings_damping_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->damping= CLAMPIS(value, 0.0f, 1.0f);
}

int GameObjectSettings_show_debug_state_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->scaflag) & 16384) != 0);
}

void GameObjectSettings_show_debug_state_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->scaflag |= 16384;
	else data->scaflag &= ~16384;
}

float GameObjectSettings_form_factor_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->formfactor);
}

void GameObjectSettings_form_factor_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->formfactor= CLAMPIS(value, 0.0f, 1.0f);
}

void GameObjectSettings_friction_coefficients_get(PointerRNA *ptr, float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->anisotropicFriction)[i]);
	}
}

void GameObjectSettings_friction_coefficients_set(PointerRNA *ptr, const float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->anisotropicFriction)[i]= CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int GameObjectSettings_use_ghost_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 512) != 0);
}

void GameObjectSettings_use_ghost_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 512;
	else data->gameflag &= ~512;
}

void GameObjectSettings_states_initial_get(PointerRNA *ptr, int values[30])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<30; i++) {
		values[i]= ((data->init_state & (1<<i)) != 0);
	}
}

void GameObjectSettings_states_initial_set(PointerRNA *ptr, const int values[30])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<30; i++) {
		if(values[i]) data->init_state |= (1<<i);
		else data->init_state &= ~(1<<i);
	}
}

int GameObjectSettings_lock_location_x_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag2) & 4) != 0);
}

void GameObjectSettings_lock_location_x_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag2 |= 4;
	else data->gameflag2 &= ~4;
}

int GameObjectSettings_lock_rotation_x_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag2) & 32) != 0);
}

void GameObjectSettings_lock_rotation_x_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag2 |= 32;
	else data->gameflag2 &= ~32;
}

int GameObjectSettings_lock_location_y_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag2) & 8) != 0);
}

void GameObjectSettings_lock_location_y_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag2 |= 8;
	else data->gameflag2 &= ~8;
}

int GameObjectSettings_lock_rotation_y_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag2) & 64) != 0);
}

void GameObjectSettings_lock_rotation_y_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag2 |= 64;
	else data->gameflag2 &= ~64;
}

int GameObjectSettings_lock_location_z_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag2) & 16) != 0);
}

void GameObjectSettings_lock_location_z_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag2 |= 16;
	else data->gameflag2 &= ~16;
}

int GameObjectSettings_lock_rotation_z_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag2) & 128) != 0);
}

void GameObjectSettings_lock_rotation_z_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag2 |= 128;
	else data->gameflag2 &= ~128;
}

int GameObjectSettings_use_activity_culling_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return !(((data->gameflag2) & 1) != 0);
}

void GameObjectSettings_use_activity_culling_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(!value) data->gameflag2 |= 1;
	else data->gameflag2 &= ~1;
}

float GameObjectSettings_mass_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->mass);
}

void GameObjectSettings_mass_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->mass= CLAMPIS(value, 0.0099999998f, 10000.0f);
}

int GameObjectSettings_use_sleep_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 4096) != 0);
}

void GameObjectSettings_use_sleep_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 4096;
	else data->gameflag &= ~4096;
}

int GameObjectSettings_physics_type_get(PointerRNA *ptr)
{
	return rna_GameObjectSettings_physics_type_get(ptr);
}

void GameObjectSettings_physics_type_set(PointerRNA *ptr, int value)
{
	rna_GameObjectSettings_physics_type_set(ptr, value);
}

static PointerRNA GameObjectSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GameObjectSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GameObjectSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= GameObjectSettings_rna_properties_get(iter);
}

void GameObjectSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= GameObjectSettings_rna_properties_get(iter);
}

void GameObjectSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA GameObjectSettings_properties_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GameProperty, rna_iterator_listbase_get(iter));
}

void GameObjectSettings_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GameObjectSettings_properties;

	rna_iterator_listbase_begin(iter, &data->prop, NULL);

	if(iter->valid)
		iter->ptr= GameObjectSettings_properties_get(iter);
}

void GameObjectSettings_properties_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= GameObjectSettings_properties_get(iter);
}

void GameObjectSettings_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GameObjectSettings_properties_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GameObjectSettings_properties_begin(&iter, ptr);

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
		if(found) *r_ptr = GameObjectSettings_properties_get(&iter);
	}

	GameObjectSettings_properties_end(&iter);

	return found;
}

float GameObjectSettings_radius_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->inertia);
}

void GameObjectSettings_radius_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->inertia= CLAMPIS(value, 0.0099999998f, 10.0f);
}

int GameObjectSettings_use_rotate_from_normal_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 128) != 0);
}

void GameObjectSettings_use_rotate_from_normal_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 128;
	else data->gameflag &= ~128;
}

float GameObjectSettings_rotation_damping_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->rdamping);
}

void GameObjectSettings_rotation_damping_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->rdamping= CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA GameObjectSettings_sensors_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Sensor, rna_iterator_listbase_get(iter));
}

void GameObjectSettings_sensors_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GameObjectSettings_sensors;

	rna_iterator_listbase_begin(iter, &data->sensors, NULL);

	if(iter->valid)
		iter->ptr= GameObjectSettings_sensors_get(iter);
}

void GameObjectSettings_sensors_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= GameObjectSettings_sensors_get(iter);
}

void GameObjectSettings_sensors_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GameObjectSettings_sensors_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GameObjectSettings_sensors_begin(&iter, ptr);

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
		if(found) *r_ptr = GameObjectSettings_sensors_get(&iter);
	}

	GameObjectSettings_sensors_end(&iter);

	return found;
}

int GameObjectSettings_show_actuators_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->scaflag) & 128) != 0);
}

void GameObjectSettings_show_actuators_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->scaflag |= 128;
	else data->scaflag &= ~128;
}

int GameObjectSettings_show_controllers_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->scaflag) & 2048) != 0);
}

void GameObjectSettings_show_controllers_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->scaflag |= 2048;
	else data->scaflag &= ~2048;
}

int GameObjectSettings_show_sensors_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->scaflag) & 64) != 0);
}

void GameObjectSettings_show_sensors_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->scaflag |= 64;
	else data->scaflag &= ~64;
}

PointerRNA GameObjectSettings_soft_body_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GameSoftBodySettings, data->bsoft);
}

void GameObjectSettings_states_visible_get(PointerRNA *ptr, int values[30])
{
	rna_GameObjectSettings_state_get(ptr, values);
}

void GameObjectSettings_states_visible_set(PointerRNA *ptr, const int values[30])
{
	rna_GameObjectSettings_state_set(ptr, values);
}

int GameObjectSettings_show_state_panel_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->scaflag) & 32768) != 0);
}

void GameObjectSettings_show_state_panel_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->scaflag |= 32768;
	else data->scaflag &= ~32768;
}

int GameObjectSettings_use_collision_bounds_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 2048) != 0);
}

void GameObjectSettings_use_collision_bounds_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 2048;
	else data->gameflag &= ~2048;
}

int GameObjectSettings_use_material_physics_fh_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->gameflag) & 64) != 0);
}

void GameObjectSettings_use_material_physics_fh_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->gameflag |= 64;
	else data->gameflag &= ~64;
}

void GameObjectSettings_used_states_get(PointerRNA *ptr, int values[30])
{
	rna_GameObjectSettings_used_state_get(ptr, values);
}

float GameObjectSettings_velocity_max_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->max_vel);
}

void GameObjectSettings_velocity_max_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->max_vel= CLAMPIS(value, 0.0f, 1000.0f);
}

float GameObjectSettings_velocity_min_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->min_vel);
}

void GameObjectSettings_velocity_min_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->min_vel= CLAMPIS(value, 0.0f, 1000.0f);
}

PointerRNA MaterialSlot_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void MaterialSlot_name_get(PointerRNA *ptr, char *value)
{
	rna_MaterialSlot_name_get(ptr, value);
}

int MaterialSlot_name_length(PointerRNA *ptr)
{
	return rna_MaterialSlot_name_length(ptr);
}

int MaterialSlot_link_get(PointerRNA *ptr)
{
	return rna_MaterialSlot_link_get(ptr);
}

void MaterialSlot_link_set(PointerRNA *ptr, int value)
{
	rna_MaterialSlot_link_set(ptr, value);
}

PointerRNA MaterialSlot_material_get(PointerRNA *ptr)
{
	return rna_MaterialSlot_material_get(ptr);
}

void MaterialSlot_material_set(PointerRNA *ptr, PointerRNA value)
{
	rna_MaterialSlot_material_set(ptr, value);
}

static PointerRNA MaterialSlot_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void MaterialSlot_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_MaterialSlot_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= MaterialSlot_rna_properties_get(iter);
}

void MaterialSlot_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= MaterialSlot_rna_properties_get(iter);
}

void MaterialSlot_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA Object_active_material_get(PointerRNA *ptr)
{
	return rna_Object_active_material_get(ptr);
}

void Object_active_material_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Object_active_material_set(ptr, value);
}

int Object_active_material_index_get(PointerRNA *ptr)
{
	return rna_Object_active_material_index_get(ptr);
}

void Object_active_material_index_set(PointerRNA *ptr, int value)
{
	rna_Object_active_material_index_set(ptr, value);
}

PointerRNA Object_active_shape_key_get(PointerRNA *ptr)
{
	return rna_Object_active_shape_key_get(ptr);
}

int Object_active_shape_key_index_get(PointerRNA *ptr)
{
	return rna_Object_active_shape_key_index_get(ptr);
}

void Object_active_shape_key_index_set(PointerRNA *ptr, int value)
{
	rna_Object_active_shape_key_index_set(ptr, value);
}

PointerRNA Object_animation_data_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimData, data->adt);
}

PointerRNA Object_animation_visualisation_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_AnimViz, &data->avs);
}

void Object_rotation_axis_angle_get(PointerRNA *ptr, float values[4])
{
	rna_Object_rotation_axis_angle_get(ptr, values);
}

void Object_rotation_axis_angle_set(PointerRNA *ptr, const float values[4])
{
	rna_Object_rotation_axis_angle_set(ptr, values);
}

void Object_bound_box_get(PointerRNA *ptr, float values[24])
{
	rna_Object_boundbox_get(ptr, values);
}

PointerRNA Object_collision_get(PointerRNA *ptr)
{
	return rna_Object_collision_get(ptr);
}

void Object_color_get(PointerRNA *ptr, float values[4])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= (float)(((float*)data->col)[i]);
	}
}

void Object_color_set(PointerRNA *ptr, const float values[4])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		((float*)data->col)[i]= values[i];
	}
}

static PointerRNA Object_constraints_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Constraint, rna_iterator_listbase_get(iter));
}

void Object_constraints_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Object_constraints;

	rna_iterator_listbase_begin(iter, &data->constraints, NULL);

	if(iter->valid)
		iter->ptr= Object_constraints_get(iter);
}

void Object_constraints_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Object_constraints_get(iter);
}

void Object_constraints_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Object_constraints_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Object_constraints_begin(&iter, ptr);

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
		if(found) *r_ptr = Object_constraints_get(&iter);
	}

	Object_constraints_end(&iter);

	return found;
}

PointerRNA Object_data_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ID, data->data);
}

void Object_data_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Object_data_set(ptr, value);
}

void Object_delta_location_get(PointerRNA *ptr, float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->dloc)[i]);
	}
}

void Object_delta_location_set(PointerRNA *ptr, const float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->dloc)[i]= values[i];
	}
}

void Object_delta_rotation_euler_get(PointerRNA *ptr, float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->drot)[i]);
	}
}

void Object_delta_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->drot)[i]= values[i];
	}
}

void Object_delta_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= (float)(((float*)data->dquat)[i]);
	}
}

void Object_delta_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		((float*)data->dquat)[i]= values[i];
	}
}

void Object_delta_scale_get(PointerRNA *ptr, float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->dsize)[i]);
	}
}

void Object_delta_scale_set(PointerRNA *ptr, const float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->dsize)[i]= values[i];
	}
}

void Object_dimensions_get(PointerRNA *ptr, float values[3])
{
	rna_Object_dimensions_get(ptr, values);
}

void Object_dimensions_set(PointerRNA *ptr, const float values[3])
{
	rna_Object_dimensions_set(ptr, values);
}

int Object_show_axis_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->dtx) & 2) != 0);
}

void Object_show_axis_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->dtx |= 2;
	else data->dtx &= ~2;
}

int Object_show_bounds_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->dtx) & 1) != 0);
}

void Object_show_bounds_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->dtx |= 1;
	else data->dtx &= ~1;
}

int Object_draw_bounds_type_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->boundtype);
}

void Object_draw_bounds_type_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->boundtype= value;
}

int Object_show_name_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->dtx) & 8) != 0);
}

void Object_show_name_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->dtx |= 8;
	else data->dtx &= ~8;
}

int Object_show_texture_space_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->dtx) & 4) != 0);
}

void Object_show_texture_space_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->dtx |= 4;
	else data->dtx &= ~4;
}

int Object_show_transparent_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->dtx) & 128) != 0);
}

void Object_show_transparent_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->dtx |= 128;
	else data->dtx &= ~128;
}

int Object_show_wire_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->dtx) & 32) != 0);
}

void Object_show_wire_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->dtx |= 32;
	else data->dtx &= ~32;
}

int Object_use_dupli_faces_scale_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->transflag) & 1024) != 0);
}

void Object_use_dupli_faces_scale_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->transflag |= 1024;
	else data->transflag &= ~1024;
}

float Object_dupli_faces_scale_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->dupfacesca);
}

void Object_dupli_faces_scale_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->dupfacesca= CLAMPIS(value, 0.0010000000f, 10000.0f);
}

int Object_dupli_frames_end_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->dupend);
}

void Object_dupli_frames_end_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->dupend= CLAMPIS(value, -300000, 300000);
}

int Object_dupli_frames_off_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->dupoff);
}

void Object_dupli_frames_off_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->dupoff= CLAMPIS(value, 0, 300000);
}

int Object_dupli_frames_on_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->dupon);
}

void Object_dupli_frames_on_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->dupon= CLAMPIS(value, 0, 300000);
}

int Object_use_dupli_frames_speed_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return !(((data->transflag) & 64) != 0);
}

void Object_use_dupli_frames_speed_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(!value) data->transflag |= 64;
	else data->transflag &= ~64;
}

int Object_dupli_frames_start_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->dupsta);
}

void Object_dupli_frames_start_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->dupsta= CLAMPIS(value, -300000, 300000);
}

PointerRNA Object_dupli_group_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->dup_group);
}

void Object_dupli_group_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Object_dup_group_set(ptr, value);
}

int Object_dupli_type_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return ((data->transflag) & 792);
}

void Object_dupli_type_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->transflag &= ~792;
	data->transflag |= value;
}

int Object_use_dupli_vertices_rotation_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->transflag) & 32) != 0);
}

void Object_use_dupli_vertices_rotation_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->transflag |= 32;
	else data->transflag &= ~32;
}

static PointerRNA Object_dupli_list_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_DupliObject, rna_iterator_listbase_get(iter));
}

void Object_dupli_list_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Object_dupli_list;

	rna_iterator_listbase_begin(iter, data->duplilist, NULL);

	if(iter->valid)
		iter->ptr= Object_dupli_list_get(iter);
}

void Object_dupli_list_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Object_dupli_list_get(iter);
}

void Object_dupli_list_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Object_dupli_list_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Object_dupli_list_begin(&iter, ptr);

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
		if(found) *r_ptr = Object_dupli_list_get(&iter);
	}

	Object_dupli_list_end(&iter);

	return found;
}

float Object_empty_draw_size_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->empty_drawsize);
}

void Object_empty_draw_size_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->empty_drawsize= CLAMPIS(value, 0.0001000000f, 1000.0f);
}

int Object_empty_draw_type_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->empty_drawtype);
}

void Object_empty_draw_type_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->empty_drawtype= value;
}

void Object_rotation_euler_get(PointerRNA *ptr, float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->rot)[i]);
	}
}

void Object_rotation_euler_set(PointerRNA *ptr, const float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->rot)[i]= values[i];
	}
}

PointerRNA Object_field_get(PointerRNA *ptr)
{
	return rna_Object_field_get(ptr);
}

PointerRNA Object_game_get(PointerRNA *ptr)
{
	return rna_Object_game_settings_get(ptr);
}

PointerRNA Object_grease_pencil_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GreasePencil, data->gpd);
}

void Object_grease_pencil_set(PointerRNA *ptr, PointerRNA value)
{
	Object *data= (Object*)(ptr->data);

	if(data->gpd)
		id_us_min((ID*)data->gpd);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->gpd= value.data;
}

void Object_matrix_basis_get(PointerRNA *ptr, float values[16])
{
	rna_Object_matrix_basis_get(ptr, values);
}

void Object_matrix_basis_set(PointerRNA *ptr, const float values[16])
{
	rna_Object_matrix_basis_set(ptr, values);
}

void Object_layers_get(PointerRNA *ptr, int values[20])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<20; i++) {
		values[i]= ((data->lay & (1<<i)) != 0);
	}
}

void Object_layers_set(PointerRNA *ptr, const int values[20])
{
	rna_Object_layer_set(ptr, values);
}

void Object_matrix_local_get(PointerRNA *ptr, float values[16])
{
	rna_Object_matrix_local_get(ptr, values);
}

void Object_matrix_local_set(PointerRNA *ptr, const float values[16])
{
	rna_Object_matrix_local_set(ptr, values);
}

void Object_location_get(PointerRNA *ptr, float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->loc)[i]);
	}
}

void Object_location_set(PointerRNA *ptr, const float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->loc)[i]= values[i];
	}
}

void Object_lock_location_get(PointerRNA *ptr, int values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= ((data->protectflag & (1<<i)) != 0);
	}
}

void Object_lock_location_set(PointerRNA *ptr, const int values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		if(values[i]) data->protectflag |= (1<<i);
		else data->protectflag &= ~(1<<i);
	}
}

void Object_lock_rotation_get(PointerRNA *ptr, int values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= ((data->protectflag & (8<<i)) != 0);
	}
}

void Object_lock_rotation_set(PointerRNA *ptr, const int values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		if(values[i]) data->protectflag |= (8<<i);
		else data->protectflag &= ~(8<<i);
	}
}

int Object_lock_rotation_w_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->protectflag) & 512) != 0);
}

void Object_lock_rotation_w_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->protectflag |= 512;
	else data->protectflag &= ~512;
}

int Object_lock_rotations_4d_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->protectflag) & 1024) != 0);
}

void Object_lock_rotations_4d_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->protectflag |= 1024;
	else data->protectflag &= ~1024;
}

void Object_lock_scale_get(PointerRNA *ptr, int values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= ((data->protectflag & (64<<i)) != 0);
	}
}

void Object_lock_scale_set(PointerRNA *ptr, const int values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		if(values[i]) data->protectflag |= (64<<i);
		else data->protectflag &= ~(64<<i);
	}
}

int Object_material_slots_length(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (data->mat == NULL)? 0: data->totcol;
}

static PointerRNA Object_material_slots_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MaterialSlot, rna_iterator_array_get(iter));
}

void Object_material_slots_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Object_material_slots;

	rna_iterator_array_begin(iter, data->mat, sizeof(data->mat[0]), data->totcol, 0, NULL);

	if(iter->valid)
		iter->ptr= Object_material_slots_get(iter);
}

void Object_material_slots_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= Object_material_slots_get(iter);
}

void Object_material_slots_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Object_material_slots_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Object_material_slots_begin(&iter, ptr);

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
		if(found) *r_ptr = Object_material_slots_get(&iter);
	}

	Object_material_slots_end(&iter);

	return found;
}

void Object_matrix_world_get(PointerRNA *ptr, float values[16])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		values[i]= (float)(((float*)data->obmat)[i]);
	}
}

void Object_matrix_world_set(PointerRNA *ptr, const float values[16])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<16; i++) {
		((float*)data->obmat)[i]= values[i];
	}
}

int Object_draw_type_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->dt);
}

void Object_draw_type_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->dt= value;
}

int Object_mode_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->mode);
}

static PointerRNA Object_modifiers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Modifier, rna_iterator_listbase_get(iter));
}

void Object_modifiers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Object_modifiers;

	rna_iterator_listbase_begin(iter, &data->modifiers, NULL);

	if(iter->valid)
		iter->ptr= Object_modifiers_get(iter);
}

void Object_modifiers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Object_modifiers_get(iter);
}

void Object_modifiers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Object_modifiers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Object_modifiers_begin(&iter, ptr);

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
		if(found) *r_ptr = Object_modifiers_get(&iter);
	}

	Object_modifiers_end(&iter);

	return found;
}

PointerRNA Object_motion_path_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_MotionPath, data->mpath);
}

PointerRNA Object_parent_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->parent);
}

void Object_parent_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Object_parent_set(ptr, value);
}

void Object_parent_bone_get(PointerRNA *ptr, char *value)
{
	Object *data= (Object*)(ptr->data);
	BLI_strncpy(value, data->parsubstr, 32);
}

int Object_parent_bone_length(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return strlen(data->parsubstr);
}

void Object_parent_bone_set(PointerRNA *ptr, const char *value)
{
	rna_Object_parent_bone_set(ptr, value);
}

int Object_parent_type_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return ((data->partype) & 7);
}

void Object_parent_type_set(PointerRNA *ptr, int value)
{
	rna_Object_parent_type_set(ptr, value);
}

void Object_parent_vertices_get(PointerRNA *ptr, int values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (int)((&data->par1)[i]);
	}
}

static PointerRNA Object_particle_systems_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSystem, rna_iterator_listbase_get(iter));
}

void Object_particle_systems_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Object_particle_systems;

	rna_iterator_listbase_begin(iter, &data->particlesystem, NULL);

	if(iter->valid)
		iter->ptr= Object_particle_systems_get(iter);
}

void Object_particle_systems_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Object_particle_systems_get(iter);
}

void Object_particle_systems_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Object_particle_systems_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Object_particle_systems_begin(&iter, ptr);

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
		if(found) *r_ptr = Object_particle_systems_get(&iter);
	}

	Object_particle_systems_end(&iter);

	return found;
}

int Object_pass_index_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->index);
}

void Object_pass_index_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->index= CLAMPIS(value, 0, 32767);
}

PointerRNA Object_pose_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Pose, data->pose);
}

PointerRNA Object_pose_library_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Action, data->poselib);
}

void Object_pose_library_set(PointerRNA *ptr, PointerRNA value)
{
	Object *data= (Object*)(ptr->data);

	if(data->poselib)
		id_us_min((ID*)data->poselib);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->poselib= value.data;
}

PointerRNA Object_proxy_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->proxy);
}

PointerRNA Object_proxy_group_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->proxy_group);
}

void Object_rotation_quaternion_get(PointerRNA *ptr, float values[4])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		values[i]= (float)(((float*)data->quat)[i]);
	}
}

void Object_rotation_quaternion_set(PointerRNA *ptr, const float values[4])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<4; i++) {
		((float*)data->quat)[i]= values[i];
	}
}

int Object_hide_render_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->restrictflag) & 4) != 0);
}

void Object_hide_render_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->restrictflag |= 4;
	else data->restrictflag &= ~4;
}

int Object_hide_select_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->restrictflag) & 2) != 0);
}

void Object_hide_select_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->restrictflag |= 2;
	else data->restrictflag &= ~2;
}

int Object_hide_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->restrictflag) & 1) != 0);
}

void Object_hide_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->restrictflag |= 1;
	else data->restrictflag &= ~1;
}

int Object_rotation_mode_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->rotmode);
}

void Object_rotation_mode_set(PointerRNA *ptr, int value)
{
	rna_Object_rotation_mode_set(ptr, value);
}

void Object_scale_get(PointerRNA *ptr, float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->size)[i]);
	}
}

void Object_scale_set(PointerRNA *ptr, const float values[3])
{
	Object *data= (Object*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->size)[i]= values[i];
	}
}

int Object_select_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void Object_select_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int Object_use_shape_key_edit_mode_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->shapeflag) & 4) != 0);
}

void Object_use_shape_key_edit_mode_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->shapeflag |= 4;
	else data->shapeflag &= ~4;
}

int Object_show_only_shape_key_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->shapeflag) & 1) != 0);
}

void Object_show_only_shape_key_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->shapeflag |= 1;
	else data->shapeflag &= ~1;
}

int Object_use_slow_parent_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->partype) & 16) != 0);
}

void Object_use_slow_parent_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->partype |= 16;
	else data->partype &= ~16;
}

PointerRNA Object_soft_body_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_SoftBodySettings, data->soft);
}

float Object_time_offset_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (float)(data->sf);
}

void Object_time_offset_set(PointerRNA *ptr, float value)
{
	Object *data= (Object*)(ptr->data);
	data->sf= CLAMPIS(value, -300000.0f, 300000.0f);
}

int Object_use_time_offset_add_parent_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->ipoflag) & 2048) != 0);
}

void Object_use_time_offset_add_parent_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->ipoflag |= 2048;
	else data->ipoflag &= ~2048;
}

int Object_use_time_offset_edit_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->ipoflag) & 4) != 0);
}

void Object_use_time_offset_edit_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->ipoflag |= 4;
	else data->ipoflag &= ~4;
}

int Object_use_time_offset_parent_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->ipoflag) & 64) != 0);
}

void Object_use_time_offset_parent_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->ipoflag |= 64;
	else data->ipoflag &= ~64;
}

int Object_use_time_offset_particle_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->ipoflag) & 128) != 0);
}

void Object_use_time_offset_particle_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->ipoflag |= 128;
	else data->ipoflag &= ~128;
}

int Object_track_axis_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->trackflag);
}

void Object_track_axis_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->trackflag= value;
}

int Object_type_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->type);
}

int Object_up_axis_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (int)(data->upflag);
}

void Object_up_axis_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	data->upflag= value;
}

static PointerRNA Object_vertex_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_VertexGroup, rna_iterator_listbase_get(iter));
}

void Object_vertex_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Object_vertex_groups;

	rna_iterator_listbase_begin(iter, &data->defbase, NULL);

	if(iter->valid)
		iter->ptr= Object_vertex_groups_get(iter);
}

void Object_vertex_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= Object_vertex_groups_get(iter);
}

void Object_vertex_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Object_vertex_groups_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	Object_vertex_groups_begin(&iter, ptr);

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
		if(found) *r_ptr = Object_vertex_groups_get(&iter);
	}

	Object_vertex_groups_end(&iter);

	return found;
}

int Object_show_x_ray_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->dtx) & 64) != 0);
}

void Object_show_x_ray_set(PointerRNA *ptr, int value)
{
	Object *data= (Object*)(ptr->data);
	if(value) data->dtx |= 64;
	else data->dtx &= ~64;
}

int Object_is_duplicator_get(PointerRNA *ptr)
{
	Object *data= (Object*)(ptr->data);
	return (((data->transflag) & 2840) != 0);
}

PointerRNA ObjectBase_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ObjectBase_layers_get(PointerRNA *ptr, int values[20])
{
	Base *data= (Base*)(ptr->data);
	int i;

	for(i=0; i<20; i++) {
		values[i]= ((data->lay & (1<<i)) != 0);
	}
}

void ObjectBase_layers_set(PointerRNA *ptr, const int values[20])
{
	rna_Base_layer_set(ptr, values);
}

PointerRNA ObjectBase_object_get(PointerRNA *ptr)
{
	Base *data= (Base*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

static PointerRNA ObjectBase_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ObjectBase_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ObjectBase_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ObjectBase_rna_properties_get(iter);
}

void ObjectBase_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ObjectBase_rna_properties_get(iter);
}

void ObjectBase_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ObjectBase_select_get(PointerRNA *ptr)
{
	Base *data= (Base*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ObjectBase_select_set(PointerRNA *ptr, int value)
{
	Base *data= (Base*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

PointerRNA ObjectConstraints_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ObjectConstraints_active_get(PointerRNA *ptr)
{
	return rna_Object_active_constraint_get(ptr);
}

void ObjectConstraints_active_set(PointerRNA *ptr, PointerRNA value)
{
	rna_Object_active_constraint_set(ptr, value);
}

static PointerRNA ObjectConstraints_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ObjectConstraints_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ObjectConstraints_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ObjectConstraints_rna_properties_get(iter);
}

void ObjectConstraints_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ObjectConstraints_rna_properties_get(iter);
}

void ObjectConstraints_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ObjectModifiers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA ObjectModifiers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ObjectModifiers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ObjectModifiers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ObjectModifiers_rna_properties_get(iter);
}

void ObjectModifiers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ObjectModifiers_rna_properties_get(iter);
}

void ObjectModifiers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA ParticleSystems_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ParticleSystems_active_get(PointerRNA *ptr)
{
	return rna_Object_active_particle_system_get(ptr);
}

int ParticleSystems_active_index_get(PointerRNA *ptr)
{
	return rna_Object_active_particle_system_index_get(ptr);
}

void ParticleSystems_active_index_set(PointerRNA *ptr, int value)
{
	rna_Object_active_particle_system_index_set(ptr, value);
}

static PointerRNA ParticleSystems_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleSystems_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ParticleSystems_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ParticleSystems_rna_properties_get(iter);
}

void ParticleSystems_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ParticleSystems_rna_properties_get(iter);
}

void ParticleSystems_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA VertexGroup_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void VertexGroup_name_get(PointerRNA *ptr, char *value)
{
	bDeformGroup *data= (bDeformGroup*)(ptr->data);
	BLI_strncpy(value, data->name, 32);
}

int VertexGroup_name_length(PointerRNA *ptr)
{
	bDeformGroup *data= (bDeformGroup*)(ptr->data);
	return strlen(data->name);
}

void VertexGroup_name_set(PointerRNA *ptr, const char *value)
{
	bDeformGroup *data= (bDeformGroup*)(ptr->data);
	BLI_strncpy(data->name, value, 32);
}

int VertexGroup_index_get(PointerRNA *ptr)
{
	return rna_VertexGroup_index_get(ptr);
}

static PointerRNA VertexGroup_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void VertexGroup_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_VertexGroup_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= VertexGroup_rna_properties_get(iter);
}

void VertexGroup_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= VertexGroup_rna_properties_get(iter);
}

void VertexGroup_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA VertexGroups_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA VertexGroups_active_get(PointerRNA *ptr)
{
	return rna_Object_active_vertex_group_get(ptr);
}

int VertexGroups_active_index_get(PointerRNA *ptr)
{
	return rna_Object_active_vertex_group_index_get(ptr);
}

void VertexGroups_active_index_set(PointerRNA *ptr, int value)
{
	rna_Object_active_vertex_group_index_set(ptr, value);
}

static PointerRNA VertexGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void VertexGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_VertexGroups_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= VertexGroups_rna_properties_get(iter);
}

void VertexGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= VertexGroups_rna_properties_get(iter);
}

void VertexGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}




void Object_create_mesh_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Scene *scene;
	int apply_modifiers;
	int settings;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	scene= *((struct Scene**)_data);
	_data+= 4;
	apply_modifiers= *((int*)_data);
	_data+= 4;
	settings= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	mesh= rna_Object_create_mesh(_self, reports, scene, apply_modifiers, settings);
	*((struct Mesh**)_retdata)= mesh;
}

void Object_create_dupli_list_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Scene *scene;
	char *_data;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	scene= *((struct Scene**)_data);
	
	rna_Object_create_duplilist(_self, reports, scene);
}

void Object_free_dupli_list_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	_self= (struct Object *)_ptr->data;
	
	rna_Object_free_duplilist(_self);
}

void Object_find_armature_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Object *ob_arm;
	char *_data, *_retdata;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	
	ob_arm= modifiers_isDeformedByArmature(_self);
	*((struct Object**)_retdata)= ob_arm;
}

void Object_shape_key_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char* name;
	int from_mix;
	struct PointerRNA key;
	char *_data, *_retdata;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	from_mix= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	key= rna_Object_shape_key_add(_self, C, reports, name, from_mix);
	*((struct PointerRNA*)_retdata)= key;
}

void Object_ray_cast_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	float *start;
	float *end;
	float *location;
	float *normal;
	int *index;
	char *_data;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	start= ((float*)_data);
	_data+= 12;
	end= ((float*)_data);
	_data+= 12;
	location= ((float*)_data);
	_data+= 12;
	normal= ((float*)_data);
	_data+= 12;
	index= ((int*)_data);
	
	rna_Object_ray_cast(_self, reports, start, end, location, normal, index);
}

void Object_is_visible_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct Scene *scene;
	int is_visible;
	char *_data, *_retdata;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	scene= *((struct Scene**)_data);
	_data+= 4;
	_retdata= _data;
	
	is_visible= rna_Object_is_visible(_self, scene);
	*((int*)_retdata)= is_visible;
}

/* Repeated prototypes to detect errors */

struct Mesh *rna_Object_create_mesh(struct Object *_self, ReportList *reports, struct Scene *scene, int apply_modifiers, int settings);
void rna_Object_create_duplilist(struct Object *_self, ReportList *reports, struct Scene *scene);
void rna_Object_free_duplilist(struct Object *_self);
struct Object *modifiers_isDeformedByArmature(struct Object *_self);
struct PointerRNA rna_Object_shape_key_add(struct Object *_self, bContext *C, ReportList *reports, const char* name, int from_mix);
void rna_Object_ray_cast(struct Object *_self, ReportList *reports, float start[3], float end[3], float location[3], float normal[3], int *index);
int rna_Object_is_visible(struct Object *_self, struct Scene *scene);

void ObjectBase_layers_from_view_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Base *_self;
	struct View3D *view;
	char *_data;
	
	_self= (struct Base *)_ptr->data;
	_data= (char *)_parms->data;
	view= *((struct View3D**)_data);
	
	rna_ObjectBase_layers_from_view(_self, view);
}

/* Repeated prototypes to detect errors */

void rna_ObjectBase_layers_from_view(struct Base *_self, struct View3D *view);

void ObjectConstraints_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	int type;
	struct bConstraint *constraint;
	char *_data, *_retdata;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	constraint= rna_Object_constraints_new(_self, type);
	*((struct bConstraint**)_retdata)= constraint;
}

void ObjectConstraints_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct bConstraint *constraint;
	char *_data;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	constraint= *((struct bConstraint**)_data);
	
	rna_Object_constraints_remove(_self, reports, constraint);
}

/* Repeated prototypes to detect errors */

struct bConstraint *rna_Object_constraints_new(struct Object *_self, int type);
void rna_Object_constraints_remove(struct Object *_self, ReportList *reports, struct bConstraint *constraint);

void ObjectModifiers_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char* name;
	int type;
	struct ModifierData *modifier;
	char *_data, *_retdata;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	modifier= rna_Object_modifier_new(_self, C, reports, name, type);
	*((struct ModifierData**)_retdata)= modifier;
}

void ObjectModifiers_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct ModifierData *modifier;
	char *_data;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	modifier= *((struct ModifierData**)_data);
	
	rna_Object_modifier_remove(_self, C, reports, modifier);
}

/* Repeated prototypes to detect errors */

struct ModifierData *rna_Object_modifier_new(struct Object *_self, bContext *C, ReportList *reports, const char* name, int type);
void rna_Object_modifier_remove(struct Object *_self, bContext *C, ReportList *reports, struct ModifierData *modifier);


void VertexGroup_add_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index_len;
	int *index;
	float weight;
	int type;
	char *_data;
	
	_selfid= (struct ID*)_ptr->id.data;
	_self= (struct bDeformGroup *)_ptr->data;
	_data= (char *)_parms->data;
	index_len= *((int *)_data);
	index= *((int**)(&(((char *)_data)[sizeof(void *)])));
	_data+= 8;
	weight= *((float*)_data);
	_data+= 4;
	type= *((int*)_data);
	
	rna_VertexGroup_vertex_add(_selfid, _self, reports, index_len, index, weight, type);
}

void VertexGroup_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index_len;
	int *index;
	char *_data;
	
	_selfid= (struct ID*)_ptr->id.data;
	_self= (struct bDeformGroup *)_ptr->data;
	_data= (char *)_parms->data;
	index_len= *((int *)_data);
	index= *((int**)(&(((char *)_data)[sizeof(void *)])));
	
	rna_VertexGroup_vertex_remove(_selfid, _self, reports, index_len, index);
}

void VertexGroup_weight_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct ID *_selfid;
	struct bDeformGroup *_self;
	int index;
	float weight;
	char *_data, *_retdata;
	
	_selfid= (struct ID*)_ptr->id.data;
	_self= (struct bDeformGroup *)_ptr->data;
	_data= (char *)_parms->data;
	index= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	weight= rna_VertexGroup_weight(_selfid, _self, reports, index);
	*((float*)_retdata)= weight;
}

/* Repeated prototypes to detect errors */

void rna_VertexGroup_vertex_add(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_len, int *index, float weight, int type);
void rna_VertexGroup_vertex_remove(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index_len, int *index);
float rna_VertexGroup_weight(struct ID *_selfid, struct bDeformGroup *_self, ReportList *reports, int index);

void VertexGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	const char* name;
	struct bDeformGroup *group;
	char *_data, *_retdata;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	group= rna_Object_vgroup_new(_self, name);
	*((struct bDeformGroup**)_retdata)= group;
}

void VertexGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct Object *_self;
	struct bDeformGroup *group;
	char *_data;
	
	_self= (struct Object *)_ptr->data;
	_data= (char *)_parms->data;
	group= *((struct bDeformGroup**)_data);
	
	rna_Object_vgroup_remove(_self, group);
}

/* Repeated prototypes to detect errors */

struct bDeformGroup *rna_Object_vgroup_new(struct Object *_self, const char* name);
void rna_Object_vgroup_remove(struct Object *_self, struct bDeformGroup *group);

/* Object Duplicate */
PointerPropertyRNA rna_DupliObject_rna_type = {
	{(PropertyRNA*)&rna_DupliObject_object, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DupliObject_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_DupliObject_object = {
	{(PropertyRNA*)&rna_DupliObject_matrix, (PropertyRNA*)&rna_DupliObject_rna_type,
	-1, "object", 0, "Object",
	"Object being duplicated",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DupliObject_object_get, NULL, NULL, NULL,&RNA_Object
};

static float rna_DupliObject_matrix_default[16] = {
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

FloatPropertyRNA rna_DupliObject_matrix = {
	{(PropertyRNA*)&rna_DupliObject_matrix_original, (PropertyRNA*)&rna_DupliObject_object,
	-1, "matrix", 8193, "Object Duplicate Matrix",
	"Object duplicate transformation matrix",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	offsetof(DupliObject, mat), 4, NULL},
	NULL, NULL, DupliObject_matrix_get, DupliObject_matrix_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_DupliObject_matrix_default
};

static float rna_DupliObject_matrix_original_default[16] = {
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

FloatPropertyRNA rna_DupliObject_matrix_original = {
	{(PropertyRNA*)&rna_DupliObject_rna_properties, (PropertyRNA*)&rna_DupliObject_matrix,
	-1, "matrix_original", 8193, "Object Matrix",
	"The original matrix of this object before it was duplicated",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 0, NULL, NULL,
	offsetof(DupliObject, omat), 4, NULL},
	NULL, NULL, DupliObject_matrix_original_get, DupliObject_matrix_original_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_DupliObject_matrix_original_default
};

CollectionPropertyRNA rna_DupliObject_rna_properties = {
	{NULL, (PropertyRNA*)&rna_DupliObject_matrix_original,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	DupliObject_rna_properties_begin, DupliObject_rna_properties_next, DupliObject_rna_properties_end, DupliObject_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_DupliObject = {
	{(ContainerRNA *)&RNA_EdgeSplitModifier, (ContainerRNA *)&RNA_DriverVariable,
	NULL,
	{(PropertyRNA*)&rna_DupliObject_rna_type, (PropertyRNA*)&rna_DupliObject_rna_properties}},
	"DupliObject"	, NULL,NULL
, 0, "Object Duplicate", "An object duplicate",
	17,
	NULL, (PropertyRNA*)&rna_DupliObject_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Game Object Settings */
PointerPropertyRNA rna_GameObjectSettings_rna_type = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_actor, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_GameObjectSettings_use_actor = {
	{(PropertyRNA*)&rna_GameObjectSettings_actuators, (PropertyRNA*)&rna_GameObjectSettings_rna_type,
	-1, "use_actor", 3, "Actor",
	"Object is detected by the Near and Radar sensor",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_actor_get, GameObjectSettings_use_actor_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_GameObjectSettings_actuators = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_all_states, (PropertyRNA*)&rna_GameObjectSettings_use_actor,
	-1, "actuators", 0, "Actuators",
	"Game engine actuators to act on events",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_actuators_begin, GameObjectSettings_actuators_next, GameObjectSettings_actuators_end, GameObjectSettings_actuators_get, NULL, GameObjectSettings_actuators_lookup_int, NULL, &RNA_Actuator
};

BooleanPropertyRNA rna_GameObjectSettings_use_all_states = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_anisotropic_friction, (PropertyRNA*)&rna_GameObjectSettings_actuators,
	-1, "use_all_states", 3, "All",
	"Set all state bits",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_all_states_get, GameObjectSettings_use_all_states_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_use_anisotropic_friction = {
	{(PropertyRNA*)&rna_GameObjectSettings_collision_bounds_type, (PropertyRNA*)&rna_GameObjectSettings_use_all_states,
	-1, "use_anisotropic_friction", 3, "Anisotropic Friction",
	"Enable anisotropic friction",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_anisotropic_friction_get, GameObjectSettings_use_anisotropic_friction_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_GameObjectSettings_collision_bounds_type_items[8] = {
	{0, "BOX", 0, "Box", ""},
	{1, "SPHERE", 0, "Sphere", ""},
	{2, "CYLINDER", 0, "Cylinder", ""},
	{3, "CONE", 0, "Cone", ""},
	{5, "CONVEX_HULL", 0, "Convex Hull", ""},
	{4, "TRIANGLE_MESH", 0, "Triangle Mesh", ""},
	{7, "CAPSULE", 0, "Capsule", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GameObjectSettings_collision_bounds_type = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_collision_compound, (PropertyRNA*)&rna_GameObjectSettings_use_anisotropic_friction,
	-1, "collision_bounds_type", 3, "Collision Bounds",
	"Selects the collision type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_collision_bounds_type_get, GameObjectSettings_collision_bounds_type_set, rna_Object_collision_bounds_itemf, rna_GameObjectSettings_collision_bounds_type_items, 7, 0
};

BooleanPropertyRNA rna_GameObjectSettings_use_collision_compound = {
	{(PropertyRNA*)&rna_GameObjectSettings_collision_margin, (PropertyRNA*)&rna_GameObjectSettings_collision_bounds_type,
	-1, "use_collision_compound", 3, "Collision Compound",
	"Add children to form a compound collision object",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_collision_compound_get, GameObjectSettings_use_collision_compound_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_GameObjectSettings_collision_margin = {
	{(PropertyRNA*)&rna_GameObjectSettings_controllers, (PropertyRNA*)&rna_GameObjectSettings_use_collision_compound,
	-1, "collision_margin", 8195, "Collision Margin",
	"Extra margin around object for collision detection, small amount required for stability",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Object, margin), 4, NULL},
	GameObjectSettings_collision_margin_get, GameObjectSettings_collision_margin_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_GameObjectSettings_controllers = {
	{(PropertyRNA*)&rna_GameObjectSettings_damping, (PropertyRNA*)&rna_GameObjectSettings_collision_margin,
	-1, "controllers", 0, "Controllers",
	"Game engine controllers to process events, connecting sensor to actuators",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_controllers_begin, GameObjectSettings_controllers_next, GameObjectSettings_controllers_end, GameObjectSettings_controllers_get, NULL, GameObjectSettings_controllers_lookup_int, NULL, &RNA_Controller
};

FloatPropertyRNA rna_GameObjectSettings_damping = {
	{(PropertyRNA*)&rna_GameObjectSettings_show_debug_state, (PropertyRNA*)&rna_GameObjectSettings_controllers,
	-1, "damping", 8195, "Damping",
	"General movement damping",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Object, damping), 4, NULL},
	GameObjectSettings_damping_get, GameObjectSettings_damping_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_show_debug_state = {
	{(PropertyRNA*)&rna_GameObjectSettings_form_factor, (PropertyRNA*)&rna_GameObjectSettings_damping,
	-1, "show_debug_state", 3, "Debug State",
	"Print state debug info in the game engine",
	110,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_show_debug_state_get, GameObjectSettings_show_debug_state_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_GameObjectSettings_form_factor = {
	{(PropertyRNA*)&rna_GameObjectSettings_friction_coefficients, (PropertyRNA*)&rna_GameObjectSettings_show_debug_state,
	-1, "form_factor", 8195, "Form Factor",
	"Form factor scales the inertia tensor",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Object, formfactor), 4, NULL},
	GameObjectSettings_form_factor_get, GameObjectSettings_form_factor_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_GameObjectSettings_friction_coefficients_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GameObjectSettings_friction_coefficients = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_ghost, (PropertyRNA*)&rna_GameObjectSettings_form_factor,
	-1, "friction_coefficients", 8195, "Friction Coefficients",
	"Relative friction coefficient in the in the X, Y and Z directions, when anisotropic friction is enabled",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(Object, anisotropicFriction), 4, NULL},
	NULL, NULL, GameObjectSettings_friction_coefficients_get, GameObjectSettings_friction_coefficients_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GameObjectSettings_friction_coefficients_default
};

BooleanPropertyRNA rna_GameObjectSettings_use_ghost = {
	{(PropertyRNA*)&rna_GameObjectSettings_states_initial, (PropertyRNA*)&rna_GameObjectSettings_friction_coefficients,
	-1, "use_ghost", 3, "Ghost",
	"Object does not restitute collisions, like a ghost",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_ghost_get, GameObjectSettings_use_ghost_set, NULL, NULL, 0, NULL
};

static int rna_GameObjectSettings_states_initial_default[30] = {
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

BooleanPropertyRNA rna_GameObjectSettings_states_initial = {
	{(PropertyRNA*)&rna_GameObjectSettings_lock_location_x, (PropertyRNA*)&rna_GameObjectSettings_use_ghost,
	-1, "states_initial", 3, "Initial State",
	"Initial state when the game starts",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {30, 0, 0}, 30,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, GameObjectSettings_states_initial_get, GameObjectSettings_states_initial_set, 0, rna_GameObjectSettings_states_initial_default
};

BooleanPropertyRNA rna_GameObjectSettings_lock_location_x = {
	{(PropertyRNA*)&rna_GameObjectSettings_lock_rotation_x, (PropertyRNA*)&rna_GameObjectSettings_states_initial,
	-1, "lock_location_x", 3, "Lock X Axis",
	"Disable simulation of linear motion along the X axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_lock_location_x_get, GameObjectSettings_lock_location_x_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_lock_rotation_x = {
	{(PropertyRNA*)&rna_GameObjectSettings_lock_location_y, (PropertyRNA*)&rna_GameObjectSettings_lock_location_x,
	-1, "lock_rotation_x", 3, "Lock X Rotation Axis",
	"Disable simulation of angular  motion along the X axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_lock_rotation_x_get, GameObjectSettings_lock_rotation_x_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_lock_location_y = {
	{(PropertyRNA*)&rna_GameObjectSettings_lock_rotation_y, (PropertyRNA*)&rna_GameObjectSettings_lock_rotation_x,
	-1, "lock_location_y", 3, "Lock Y Axis",
	"Disable simulation of linear motion along the Y axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_lock_location_y_get, GameObjectSettings_lock_location_y_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_lock_rotation_y = {
	{(PropertyRNA*)&rna_GameObjectSettings_lock_location_z, (PropertyRNA*)&rna_GameObjectSettings_lock_location_y,
	-1, "lock_rotation_y", 3, "Lock Y Rotation Axis",
	"Disable simulation of angular  motion along the Y axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_lock_rotation_y_get, GameObjectSettings_lock_rotation_y_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_lock_location_z = {
	{(PropertyRNA*)&rna_GameObjectSettings_lock_rotation_z, (PropertyRNA*)&rna_GameObjectSettings_lock_rotation_y,
	-1, "lock_location_z", 3, "Lock Z Axis",
	"Disable simulation of linear motion along the Z axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_lock_location_z_get, GameObjectSettings_lock_location_z_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_lock_rotation_z = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_activity_culling, (PropertyRNA*)&rna_GameObjectSettings_lock_location_z,
	-1, "lock_rotation_z", 3, "Lock Z Rotation Axis",
	"Disable simulation of angular  motion along the Z axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_lock_rotation_z_get, GameObjectSettings_lock_rotation_z_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_use_activity_culling = {
	{(PropertyRNA*)&rna_GameObjectSettings_mass, (PropertyRNA*)&rna_GameObjectSettings_lock_rotation_z,
	-1, "use_activity_culling", 3, "Lock Z Rotation Axis",
	"Disable simulation of angular  motion along the Z axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_activity_culling_get, GameObjectSettings_use_activity_culling_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_GameObjectSettings_mass = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_sleep, (PropertyRNA*)&rna_GameObjectSettings_use_activity_culling,
	-1, "mass", 8195, "Mass",
	"Mass of the object",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Object, mass), 4, NULL},
	GameObjectSettings_mass_get, GameObjectSettings_mass_set, NULL, NULL, NULL, 0.0099999998f, 10000.0f, 0.0099999998f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_use_sleep = {
	{(PropertyRNA*)&rna_GameObjectSettings_physics_type, (PropertyRNA*)&rna_GameObjectSettings_mass,
	-1, "use_sleep", 3, "No Sleeping",
	"Disable auto (de)activation in physics simulation",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_sleep_get, GameObjectSettings_use_sleep_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_GameObjectSettings_physics_type_items[8] = {
	{0, "NO_COLLISION", 0, "No Collision", "Disable colision for this object"},
	{1, "STATIC", 0, "Static", "Stationary object"},
	{2, "DYNAMIC", 0, "Dynamic", "Linear physics"},
	{3, "RIGID_BODY", 0, "Rigid Body", "Linear and angular physics"},
	{4, "SOFT_BODY", 0, "Soft Body", "Soft body"},
	{5, "OCCLUDE", 0, "Occlude", "Occluder for optimizing scene rendering"},
	{6, "SENSOR", 0, "Sensor", "Collision Sensor, detects static and dynamic objects but not the other collision sensor objects"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GameObjectSettings_physics_type = {
	{(PropertyRNA*)&rna_GameObjectSettings_rna_properties, (PropertyRNA*)&rna_GameObjectSettings_use_sleep,
	-1, "physics_type", 3, "Physics Type",
	"Selects the type of physical representation",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 318767104, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_physics_type_get, GameObjectSettings_physics_type_set, NULL, rna_GameObjectSettings_physics_type_items, 7, 0
};

CollectionPropertyRNA rna_GameObjectSettings_rna_properties = {
	{(PropertyRNA*)&rna_GameObjectSettings_properties, (PropertyRNA*)&rna_GameObjectSettings_physics_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_rna_properties_begin, GameObjectSettings_rna_properties_next, GameObjectSettings_rna_properties_end, GameObjectSettings_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_GameObjectSettings_properties = {
	{(PropertyRNA*)&rna_GameObjectSettings_radius, (PropertyRNA*)&rna_GameObjectSettings_rna_properties,
	-1, "properties", 0, "Properties",
	"Game engine properties",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_properties_begin, GameObjectSettings_properties_next, GameObjectSettings_properties_end, GameObjectSettings_properties_get, NULL, GameObjectSettings_properties_lookup_int, NULL, &RNA_GameProperty
};

FloatPropertyRNA rna_GameObjectSettings_radius = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_rotate_from_normal, (PropertyRNA*)&rna_GameObjectSettings_properties,
	-1, "radius", 8195, "Radius",
	"Radius of bounding sphere and material physics",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Object, inertia), 4, NULL},
	GameObjectSettings_radius_get, GameObjectSettings_radius_set, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0099999998f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_use_rotate_from_normal = {
	{(PropertyRNA*)&rna_GameObjectSettings_rotation_damping, (PropertyRNA*)&rna_GameObjectSettings_radius,
	-1, "use_rotate_from_normal", 3, "Rotate From Normal",
	"Use face normal to rotate object, so that it points away from the surface",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_rotate_from_normal_get, GameObjectSettings_use_rotate_from_normal_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_GameObjectSettings_rotation_damping = {
	{(PropertyRNA*)&rna_GameObjectSettings_sensors, (PropertyRNA*)&rna_GameObjectSettings_use_rotate_from_normal,
	-1, "rotation_damping", 8195, "Rotation Damping",
	"General rotation damping",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Object, rdamping), 4, NULL},
	GameObjectSettings_rotation_damping_get, GameObjectSettings_rotation_damping_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_GameObjectSettings_sensors = {
	{(PropertyRNA*)&rna_GameObjectSettings_show_actuators, (PropertyRNA*)&rna_GameObjectSettings_rotation_damping,
	-1, "sensors", 0, "Sensors",
	"Game engine sensor to detect events",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_sensors_begin, GameObjectSettings_sensors_next, GameObjectSettings_sensors_end, GameObjectSettings_sensors_get, NULL, GameObjectSettings_sensors_lookup_int, NULL, &RNA_Sensor
};

BooleanPropertyRNA rna_GameObjectSettings_show_actuators = {
	{(PropertyRNA*)&rna_GameObjectSettings_show_controllers, (PropertyRNA*)&rna_GameObjectSettings_sensors,
	-1, "show_actuators", 3, "Show Actuators",
	"Shows actuators for this object in the user interface",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_show_actuators_get, GameObjectSettings_show_actuators_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_show_controllers = {
	{(PropertyRNA*)&rna_GameObjectSettings_show_sensors, (PropertyRNA*)&rna_GameObjectSettings_show_actuators,
	-1, "show_controllers", 3, "Show Controllers",
	"Shows controllers for this object in the user interface",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_show_controllers_get, GameObjectSettings_show_controllers_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_show_sensors = {
	{(PropertyRNA*)&rna_GameObjectSettings_soft_body, (PropertyRNA*)&rna_GameObjectSettings_show_controllers,
	-1, "show_sensors", 3, "Show Sensors",
	"Shows sensors for this object in the user interface",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_show_sensors_get, GameObjectSettings_show_sensors_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GameObjectSettings_soft_body = {
	{(PropertyRNA*)&rna_GameObjectSettings_states_visible, (PropertyRNA*)&rna_GameObjectSettings_show_sensors,
	-1, "soft_body", 0, "Soft Body Settings",
	"Settings for Bullet soft body simulation",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_soft_body_get, NULL, NULL, NULL,&RNA_GameSoftBodySettings
};

static int rna_GameObjectSettings_states_visible_default[30] = {
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

BooleanPropertyRNA rna_GameObjectSettings_states_visible = {
	{(PropertyRNA*)&rna_GameObjectSettings_show_state_panel, (PropertyRNA*)&rna_GameObjectSettings_soft_body,
	-1, "states_visible", 3, "State",
	"State determining which controllers are displayed",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {30, 0, 0}, 30,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, GameObjectSettings_states_visible_get, GameObjectSettings_states_visible_set, 0, rna_GameObjectSettings_states_visible_default
};

BooleanPropertyRNA rna_GameObjectSettings_show_state_panel = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_collision_bounds, (PropertyRNA*)&rna_GameObjectSettings_states_visible,
	-1, "show_state_panel", 4099, "States",
	"Show state panel",
	11,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_show_state_panel_get, GameObjectSettings_show_state_panel_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_use_collision_bounds = {
	{(PropertyRNA*)&rna_GameObjectSettings_use_material_physics_fh, (PropertyRNA*)&rna_GameObjectSettings_show_state_panel,
	-1, "use_collision_bounds", 3, "Use Collision Bounds",
	"Specify a collision bounds type other than the default",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_collision_bounds_get, GameObjectSettings_use_collision_bounds_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GameObjectSettings_use_material_physics_fh = {
	{(PropertyRNA*)&rna_GameObjectSettings_used_states, (PropertyRNA*)&rna_GameObjectSettings_use_collision_bounds,
	-1, "use_material_physics_fh", 3, "Use Material Force Field",
	"React to force field physics settings in materials",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GameObjectSettings_use_material_physics_fh_get, GameObjectSettings_use_material_physics_fh_set, NULL, NULL, 0, NULL
};

static int rna_GameObjectSettings_used_states_default[30] = {
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

BooleanPropertyRNA rna_GameObjectSettings_used_states = {
	{(PropertyRNA*)&rna_GameObjectSettings_velocity_max, (PropertyRNA*)&rna_GameObjectSettings_use_material_physics_fh,
	-1, "used_states", 2, "Used State",
	"States which are being used by controllers",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {30, 0, 0}, 30,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, GameObjectSettings_used_states_get, NULL, 0, rna_GameObjectSettings_used_states_default
};

FloatPropertyRNA rna_GameObjectSettings_velocity_max = {
	{(PropertyRNA*)&rna_GameObjectSettings_velocity_min, (PropertyRNA*)&rna_GameObjectSettings_used_states,
	-1, "velocity_max", 8195, "Velocity Max",
	"Clamp velocity to this maximum speed",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Object, max_vel), 4, NULL},
	GameObjectSettings_velocity_max_get, GameObjectSettings_velocity_max_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_GameObjectSettings_velocity_min = {
	{NULL, (PropertyRNA*)&rna_GameObjectSettings_velocity_max,
	-1, "velocity_min", 8195, "Velocity Min",
	"Clamp velocity to this minimum speed (except when totally still)",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(Object, min_vel), 4, NULL},
	GameObjectSettings_velocity_min_get, GameObjectSettings_velocity_min_set, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_GameObjectSettings = {
	{(ContainerRNA *)&RNA_GameProperty, (ContainerRNA *)&RNA_GameIntProperty,
	NULL,
	{(PropertyRNA*)&rna_GameObjectSettings_rna_type, (PropertyRNA*)&rna_GameObjectSettings_velocity_min}},
	"GameObjectSettings"	, NULL,NULL
, 0, "Game Object Settings", "Game engine related settings for the object",
	85,
	NULL, (PropertyRNA*)&rna_GameObjectSettings_rna_properties,
	NULL,
	&RNA_Object,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Material Slot */
PointerPropertyRNA rna_MaterialSlot_rna_type = {
	{(PropertyRNA*)&rna_MaterialSlot_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialSlot_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_MaterialSlot_name = {
	{(PropertyRNA*)&rna_MaterialSlot_link, (PropertyRNA*)&rna_MaterialSlot_rna_type,
	-1, "name", 0, "Name",
	"Material slot name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialSlot_name_get, MaterialSlot_name_length, NULL, 0, ""
};

static EnumPropertyItem rna_MaterialSlot_link_items[3] = {
	{1, "OBJECT", 0, "Object", ""},
	{0, "DATA", 0, "Data", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_MaterialSlot_link = {
	{(PropertyRNA*)&rna_MaterialSlot_material, (PropertyRNA*)&rna_MaterialSlot_name,
	-1, "link", 3, "Link",
	"Link material to object or the object\'s data",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 85393408, NULL, NULL,
	0, -1, NULL},
	MaterialSlot_link_get, MaterialSlot_link_set, NULL, rna_MaterialSlot_link_items, 2, 0
};

PointerPropertyRNA rna_MaterialSlot_material = {
	{(PropertyRNA*)&rna_MaterialSlot_rna_properties, (PropertyRNA*)&rna_MaterialSlot_link,
	-1, "material", 1, "Material",
	"Material datablock used by this material slot",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 85393408, NULL, NULL,
	0, -1, NULL},
	MaterialSlot_material_get, MaterialSlot_material_set, NULL, NULL,&RNA_Material
};

CollectionPropertyRNA rna_MaterialSlot_rna_properties = {
	{NULL, (PropertyRNA*)&rna_MaterialSlot_material,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	MaterialSlot_rna_properties_begin, MaterialSlot_rna_properties_next, MaterialSlot_rna_properties_end, MaterialSlot_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_MaterialSlot = {
	{(ContainerRNA *)&RNA_MaterialStrand, (ContainerRNA *)&RNA_MaterialRaytraceTransparency,
	NULL,
	{(PropertyRNA*)&rna_MaterialSlot_rna_type, (PropertyRNA*)&rna_MaterialSlot_rna_properties}},
	"MaterialSlot"	, NULL,NULL
, 0, "Material Slot", "Material slot in an object",
	165,
	(PropertyRNA*)&rna_MaterialSlot_name, (PropertyRNA*)&rna_MaterialSlot_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Object */
PointerPropertyRNA rna_Object_active_material = {
	{(PropertyRNA*)&rna_Object_active_material_index, NULL,
	-1, "active_material", 1, "Active Material",
	"Active material being displayed",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_MaterialSlot_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_active_material_get, Object_active_material_set, NULL, NULL,&RNA_Material
};

IntPropertyRNA rna_Object_active_material_index = {
	{(PropertyRNA*)&rna_Object_active_shape_key, (PropertyRNA*)&rna_Object_active_material,
	-1, "active_material_index", 1, "Active Material Index",
	"Index of active material slot",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 102629376, NULL, NULL,
	0, -1, NULL},
	Object_active_material_index_get, Object_active_material_index_set, NULL, NULL, rna_Object_active_material_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_Object_active_shape_key = {
	{(PropertyRNA*)&rna_Object_active_shape_key_index, (PropertyRNA*)&rna_Object_active_material_index,
	-1, "active_shape_key", 0, "Active Shape Key",
	"Current shape key",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_active_shape_key_get, NULL, NULL, NULL,&RNA_ShapeKey
};

IntPropertyRNA rna_Object_active_shape_key_index = {
	{(PropertyRNA*)&rna_Object_animation_data, (PropertyRNA*)&rna_Object_active_shape_key,
	-1, "active_shape_key_index", 1, "Active Shape Key Index",
	"Current shape key index",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_active_shape_update, 0, NULL, NULL,
	0, -1, NULL},
	Object_active_shape_key_index_get, Object_active_shape_key_index_set, NULL, NULL, rna_Object_active_shape_key_index_range,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_Object_animation_data = {
	{(PropertyRNA*)&rna_Object_animation_visualisation, (PropertyRNA*)&rna_Object_active_shape_key_index,
	-1, "animation_data", 0, "Animation Data",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_animation_data_get, NULL, NULL, NULL,&RNA_AnimData
};

PointerPropertyRNA rna_Object_animation_visualisation = {
	{(PropertyRNA*)&rna_Object_rotation_axis_angle, (PropertyRNA*)&rna_Object_animation_data,
	-1, "animation_visualisation", 262144, "Animation Visualisation",
	"Animation data for this datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_animation_visualisation_get, NULL, NULL, NULL,&RNA_AnimViz
};

static float rna_Object_rotation_axis_angle_default[4] = {
	0.0f,
	0.0f,
	1.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_axis_angle = {
	{(PropertyRNA*)&rna_Object_bound_box, (PropertyRNA*)&rna_Object_animation_visualisation,
	-1, "rotation_axis_angle", 3, "Axis-Angle Rotation",
	"Angle of Rotation for Axis-Angle rotation representation",
	0,
	PROP_FLOAT, PROP_AXISANGLE|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 85065728, NULL, rna_Object_rotation_4d_editable,
	0, -1, NULL},
	NULL, NULL, Object_rotation_axis_angle_get, Object_rotation_axis_angle_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_axis_angle_default
};

static float rna_Object_bound_box_default[24] = {
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

FloatPropertyRNA rna_Object_bound_box = {
	{(PropertyRNA*)&rna_Object_collision, (PropertyRNA*)&rna_Object_rotation_axis_angle,
	-1, "bound_box", 2, "Bound Box",
	"Objects bound box in object-space coordinates, all values are -1.0 when not available.",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 2, {8, 3, 0}, 24,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_bound_box_get, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_bound_box_default
};

PointerPropertyRNA rna_Object_collision = {
	{(PropertyRNA*)&rna_Object_color, (PropertyRNA*)&rna_Object_bound_box,
	-1, "collision", 0, "Collision Settings",
	"Settings for using the objects as a collider in physics simulation",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_collision_get, NULL, NULL, NULL,&RNA_CollisionSettings
};

static float rna_Object_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_color = {
	{(PropertyRNA*)&rna_Object_constraints, (PropertyRNA*)&rna_Object_collision,
	-1, "color", 8195, "Color",
	"Object color and alpha, used when faces have the ObColor mode enabled",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 85393408, NULL, NULL,
	offsetof(Object, col), 4, NULL},
	NULL, NULL, Object_color_get, Object_color_set, NULL, 0.0f, 1.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_color_default
};

CollectionPropertyRNA rna_Object_constraints = {
	{(PropertyRNA*)&rna_Object_data, (PropertyRNA*)&rna_Object_color,
	-1, "constraints", 0, "Constraints",
	"Constraints affecting the transformation of the object",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ObjectConstraints},
	Object_constraints_begin, Object_constraints_next, Object_constraints_end, Object_constraints_get, NULL, Object_constraints_lookup_int, NULL, &RNA_Constraint
};

PointerPropertyRNA rna_Object_data = {
	{(PropertyRNA*)&rna_Object_delta_location, (PropertyRNA*)&rna_Object_constraints,
	-1, "data", 33554497, "Data",
	"Object data",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 0, rna_Object_data_editable, NULL,
	0, -1, NULL},
	Object_data_get, Object_data_set, rna_Object_data_typef, NULL,&RNA_ID
};

static float rna_Object_delta_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_location = {
	{(PropertyRNA*)&rna_Object_delta_rotation_euler, (PropertyRNA*)&rna_Object_data,
	-1, "delta_location", 8195, "Delta Location",
	"Extra translation added to the location of the object",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, NULL,
	offsetof(Object, dloc), 4, NULL},
	NULL, NULL, Object_delta_location_get, Object_delta_location_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_delta_location_default
};

static float rna_Object_delta_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_rotation_euler = {
	{(PropertyRNA*)&rna_Object_delta_rotation_quaternion, (PropertyRNA*)&rna_Object_delta_location,
	-1, "delta_rotation_euler", 8195, "Delta Rotation (Euler)",
	"Extra rotation added to the rotation of the object (when using Euler rotations)",
	0,
	PROP_FLOAT, PROP_EULER|PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, NULL,
	offsetof(Object, drot), 4, NULL},
	NULL, NULL, Object_delta_rotation_euler_get, Object_delta_rotation_euler_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_delta_rotation_euler_default
};

static float rna_Object_delta_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_rotation_quaternion = {
	{(PropertyRNA*)&rna_Object_delta_scale, (PropertyRNA*)&rna_Object_delta_rotation_euler,
	-1, "delta_rotation_quaternion", 8195, "Delta Rotation (Quaternion)",
	"Extra rotation added to the rotation of the object (when using Quaternion rotations)",
	0,
	PROP_FLOAT, PROP_QUATERNION|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 85065728, NULL, NULL,
	offsetof(Object, dquat), 4, NULL},
	NULL, NULL, Object_delta_rotation_quaternion_get, Object_delta_rotation_quaternion_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_delta_rotation_quaternion_default
};

static float rna_Object_delta_scale_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_delta_scale = {
	{(PropertyRNA*)&rna_Object_dimensions, (PropertyRNA*)&rna_Object_delta_rotation_quaternion,
	-1, "delta_scale", 8195, "Delta Scale",
	"Extra scaling added to the scale of the object",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, NULL,
	offsetof(Object, dsize), 4, NULL},
	NULL, NULL, Object_delta_scale_get, Object_delta_scale_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_delta_scale_default
};

static float rna_Object_dimensions_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_dimensions = {
	{(PropertyRNA*)&rna_Object_show_axis, (PropertyRNA*)&rna_Object_delta_scale,
	-1, "dimensions", 3, "Dimensions",
	"Absolute bounding box dimensions of the object",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_dimensions_get, Object_dimensions_set, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_dimensions_default
};

BooleanPropertyRNA rna_Object_show_axis = {
	{(PropertyRNA*)&rna_Object_show_bounds, (PropertyRNA*)&rna_Object_dimensions,
	-1, "show_axis", 3, "Draw Axis",
	"Displays the object\'s origin and axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_show_axis_get, Object_show_axis_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_show_bounds = {
	{(PropertyRNA*)&rna_Object_draw_bounds_type, (PropertyRNA*)&rna_Object_show_axis,
	-1, "show_bounds", 3, "Draw Bounds",
	"Displays the object\'s bounds",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_show_bounds_get, Object_show_bounds_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Object_draw_bounds_type_items[7] = {
	{0, "BOX", 0, "Box", ""},
	{1, "SPHERE", 0, "Sphere", ""},
	{2, "CYLINDER", 0, "Cylinder", ""},
	{3, "CONE", 0, "Cone", ""},
	{4, "POLYHEDRON", 0, "Polyhedron", ""},
	{7, "CAPSULE", 0, "Capsule", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_draw_bounds_type = {
	{(PropertyRNA*)&rna_Object_show_name, (PropertyRNA*)&rna_Object_show_bounds,
	-1, "draw_bounds_type", 3, "Draw Bounds Type",
	"Object boundary display type",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_draw_bounds_type_get, Object_draw_bounds_type_set, NULL, rna_Object_draw_bounds_type_items, 6, 0
};

BooleanPropertyRNA rna_Object_show_name = {
	{(PropertyRNA*)&rna_Object_show_texture_space, (PropertyRNA*)&rna_Object_draw_bounds_type,
	-1, "show_name", 3, "Draw Name",
	"Displays the object\'s name",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_show_name_get, Object_show_name_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_show_texture_space = {
	{(PropertyRNA*)&rna_Object_show_transparent, (PropertyRNA*)&rna_Object_show_name,
	-1, "show_texture_space", 3, "Draw Texture Space",
	"Displays the object\'s texture space",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_show_texture_space_get, Object_show_texture_space_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_show_transparent = {
	{(PropertyRNA*)&rna_Object_show_wire, (PropertyRNA*)&rna_Object_show_texture_space,
	-1, "show_transparent", 3, "Draw Transparent",
	"Displays material transparency in the object",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_show_transparent_get, Object_show_transparent_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_show_wire = {
	{(PropertyRNA*)&rna_Object_use_dupli_faces_scale, (PropertyRNA*)&rna_Object_show_transparent,
	-1, "show_wire", 3, "Draw Wire",
	"Adds the object\'s wireframe over solid drawing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_show_wire_get, Object_show_wire_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_use_dupli_faces_scale = {
	{(PropertyRNA*)&rna_Object_dupli_faces_scale, (PropertyRNA*)&rna_Object_show_wire,
	-1, "use_dupli_faces_scale", 3, "Dupli Faces Inherit Scale",
	"Scale dupli based on face size",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_use_dupli_faces_scale_get, Object_use_dupli_faces_scale_set, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_Object_dupli_faces_scale = {
	{(PropertyRNA*)&rna_Object_dupli_frames_end, (PropertyRNA*)&rna_Object_use_dupli_faces_scale,
	-1, "dupli_faces_scale", 8195, "Dupli Faces Scale",
	"Scale the DupliFace objects",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Object, dupfacesca), 4, NULL},
	Object_dupli_faces_scale_get, Object_dupli_faces_scale_set, NULL, NULL, NULL, 0.0010000000f, 10000.0f, 0.0010000000f, 10000.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_Object_dupli_frames_end = {
	{(PropertyRNA*)&rna_Object_dupli_frames_off, (PropertyRNA*)&rna_Object_dupli_faces_scale,
	-1, "dupli_frames_end", 8195, "Dupli Frames End",
	"End frame for DupliFrames",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	offsetof(Object, dupend), 0, NULL},
	Object_dupli_frames_end_get, Object_dupli_frames_end_set, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Object_dupli_frames_off = {
	{(PropertyRNA*)&rna_Object_dupli_frames_on, (PropertyRNA*)&rna_Object_dupli_frames_end,
	-1, "dupli_frames_off", 8195, "Dupli Frames Off",
	"Recurring frames to exclude from the Dupliframes",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	offsetof(Object, dupoff), 0, NULL},
	Object_dupli_frames_off_get, Object_dupli_frames_off_set, NULL, NULL, NULL,
	0, 1500, 0, 300000, 1, 0, NULL
};

IntPropertyRNA rna_Object_dupli_frames_on = {
	{(PropertyRNA*)&rna_Object_use_dupli_frames_speed, (PropertyRNA*)&rna_Object_dupli_frames_off,
	-1, "dupli_frames_on", 8195, "Dupli Frames On",
	"Number of frames to use between DupOff frames",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	offsetof(Object, dupon), 0, NULL},
	Object_dupli_frames_on_get, Object_dupli_frames_on_set, NULL, NULL, NULL,
	1, 1500, 0, 300000, 1, 0, NULL
};

BooleanPropertyRNA rna_Object_use_dupli_frames_speed = {
	{(PropertyRNA*)&rna_Object_dupli_frames_start, (PropertyRNA*)&rna_Object_dupli_frames_on,
	-1, "use_dupli_frames_speed", 3, "Dupli Frames Speed",
	"Set dupliframes to use the frame",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_use_dupli_frames_speed_get, Object_use_dupli_frames_speed_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_Object_dupli_frames_start = {
	{(PropertyRNA*)&rna_Object_dupli_group, (PropertyRNA*)&rna_Object_use_dupli_frames_speed,
	-1, "dupli_frames_start", 8195, "Dupli Frames Start",
	"Start frame for DupliFrames",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	offsetof(Object, dupsta), 0, NULL},
	Object_dupli_frames_start_get, Object_dupli_frames_start_set, NULL, NULL, NULL,
	-300000, 300000, -300000, 300000, 1, 0, NULL
};

PointerPropertyRNA rna_Object_dupli_group = {
	{(PropertyRNA*)&rna_Object_dupli_type, (PropertyRNA*)&rna_Object_dupli_frames_start,
	-1, "dupli_group", 1, "Dupli Group",
	"Instance an existing group",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_dupli_group_get, Object_dupli_group_set, NULL, NULL,&RNA_Group
};

static EnumPropertyItem rna_Object_dupli_type_items[6] = {
	{0, "NONE", 0, "None", ""},
	{8, "FRAMES", 0, "Frames", "Make copy of object for every frame"},
	{16, "VERTS", 0, "Verts", "Duplicate child objects on all vertices"},
	{512, "FACES", 0, "Faces", "Duplicate child objects on all faces"},
	{256, "GROUP", 0, "Group", "Enable group instancing"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_dupli_type = {
	{(PropertyRNA*)&rna_Object_use_dupli_vertices_rotation, (PropertyRNA*)&rna_Object_dupli_group,
	-1, "dupli_type", 3, "Dupli Type",
	"If not None, object duplication method to use",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_dupli_type_get, Object_dupli_type_set, NULL, rna_Object_dupli_type_items, 5, 0
};

BooleanPropertyRNA rna_Object_use_dupli_vertices_rotation = {
	{(PropertyRNA*)&rna_Object_dupli_list, (PropertyRNA*)&rna_Object_dupli_type,
	-1, "use_dupli_vertices_rotation", 3, "Dupli Verts Rotation",
	"Rotate dupli according to vertex normal",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_use_dupli_vertices_rotation_get, Object_use_dupli_vertices_rotation_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Object_dupli_list = {
	{(PropertyRNA*)&rna_Object_empty_draw_size, (PropertyRNA*)&rna_Object_use_dupli_vertices_rotation,
	-1, "dupli_list", 0, "Dupli list",
	"Object duplis",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_dupli_list_begin, Object_dupli_list_next, Object_dupli_list_end, Object_dupli_list_get, NULL, Object_dupli_list_lookup_int, NULL, &RNA_DupliObject
};

FloatPropertyRNA rna_Object_empty_draw_size = {
	{(PropertyRNA*)&rna_Object_empty_draw_type, (PropertyRNA*)&rna_Object_dupli_list,
	-1, "empty_draw_size", 8195, "Empty Display Size",
	"Size of display for empties in the viewport",
	0,
	PROP_FLOAT, PROP_DISTANCE|PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	offsetof(Object, empty_drawsize), 4, NULL},
	Object_empty_draw_size_get, Object_empty_draw_size_set, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0001000000f, 1000.0f, 1.0f, 2, 0.0f, NULL
};

static EnumPropertyItem rna_Object_empty_draw_type_items[8] = {
	{2, "PLAIN_AXES", 0, "Plain Axes", ""},
	{1, "ARROWS", 0, "Arrows", ""},
	{4, "SINGLE_ARROW", 0, "Single Arrow", ""},
	{3, "CIRCLE", 0, "Circle", ""},
	{5, "CUBE", 0, "Cube", ""},
	{6, "SPHERE", 0, "Sphere", ""},
	{7, "CONE", 0, "Cone", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_empty_draw_type = {
	{(PropertyRNA*)&rna_Object_rotation_euler, (PropertyRNA*)&rna_Object_empty_draw_size,
	-1, "empty_draw_type", 3, "Empty Display Type",
	"Viewport display style for empties",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_empty_draw_type_get, Object_empty_draw_type_set, NULL, rna_Object_empty_draw_type_items, 7, 2
};

static float rna_Object_rotation_euler_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_euler = {
	{(PropertyRNA*)&rna_Object_field, (PropertyRNA*)&rna_Object_empty_draw_type,
	-1, "rotation_euler", 8195, "Euler Rotation",
	"Rotation in Eulers",
	0,
	PROP_FLOAT, PROP_EULER|PROP_UNIT_ROTATION, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, rna_Object_rotation_euler_editable,
	offsetof(Object, rot), 4, NULL},
	NULL, NULL, Object_rotation_euler_get, Object_rotation_euler_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_euler_default
};

PointerPropertyRNA rna_Object_field = {
	{(PropertyRNA*)&rna_Object_game, (PropertyRNA*)&rna_Object_rotation_euler,
	-1, "field", 0, "Field Settings",
	"Settings for using the objects as a field in physics simulation",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_field_get, NULL, NULL, NULL,&RNA_FieldSettings
};

PointerPropertyRNA rna_Object_game = {
	{(PropertyRNA*)&rna_Object_grease_pencil, (PropertyRNA*)&rna_Object_field,
	-1, "game", 262144, "Game Settings",
	"Game engine related settings for the object",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_game_get, NULL, NULL, NULL,&RNA_GameObjectSettings
};

PointerPropertyRNA rna_Object_grease_pencil = {
	{(PropertyRNA*)&rna_Object_matrix_basis, (PropertyRNA*)&rna_Object_game,
	-1, "grease_pencil", 65, "Grease Pencil Data",
	"Grease Pencil datablock",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_grease_pencil_get, Object_grease_pencil_set, NULL, NULL,&RNA_GreasePencil
};

static float rna_Object_matrix_basis_default[16] = {
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

FloatPropertyRNA rna_Object_matrix_basis = {
	{(PropertyRNA*)&rna_Object_layers, (PropertyRNA*)&rna_Object_grease_pencil,
	-1, "matrix_basis", 1, "Input Matrix",
	"Matrix access to location, rotation and scale (including deltas), before constraints and parenting are applied.",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_matrix_basis_get, Object_matrix_basis_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_basis_default
};

static int rna_Object_layers_default[20] = {
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

BooleanPropertyRNA rna_Object_layers = {
	{(PropertyRNA*)&rna_Object_matrix_local, (PropertyRNA*)&rna_Object_matrix_basis,
	-1, "layers", 65539, "Layers",
	"Layers the object is on",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_Object_layer_update, 85393408, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_layers_get, Object_layers_set, 0, rna_Object_layers_default
};

static float rna_Object_matrix_local_default[16] = {
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

FloatPropertyRNA rna_Object_matrix_local = {
	{(PropertyRNA*)&rna_Object_location, (PropertyRNA*)&rna_Object_layers,
	-1, "matrix_local", 1, "Local Matrix",
	"Parent relative transformation matrix",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	NULL, 85065728, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_matrix_local_get, Object_matrix_local_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_local_default
};

static float rna_Object_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_location = {
	{(PropertyRNA*)&rna_Object_lock_location, (PropertyRNA*)&rna_Object_matrix_local,
	-1, "location", 8195, "Location",
	"Location of the object",
	0,
	PROP_FLOAT, PROP_TRANSLATION|PROP_UNIT_LENGTH, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, rna_Object_location_editable,
	offsetof(Object, loc), 4, NULL},
	NULL, NULL, Object_location_get, Object_location_set, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_location_default
};

static int rna_Object_lock_location_default[3] = {
	0,
	0,
	0
};

BooleanPropertyRNA rna_Object_lock_location = {
	{(PropertyRNA*)&rna_Object_lock_rotation, (PropertyRNA*)&rna_Object_location,
	-1, "lock_location", 4099, "Lock Location",
	"Lock editing of location in the interface",
	40,
	PROP_BOOLEAN, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_lock_location_get, Object_lock_location_set, 0, rna_Object_lock_location_default
};

static int rna_Object_lock_rotation_default[3] = {
	0,
	0,
	0
};

BooleanPropertyRNA rna_Object_lock_rotation = {
	{(PropertyRNA*)&rna_Object_lock_rotation_w, (PropertyRNA*)&rna_Object_lock_location,
	-1, "lock_rotation", 4099, "Lock Rotation",
	"Lock editing of rotation in the interface",
	40,
	PROP_BOOLEAN, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_lock_rotation_get, Object_lock_rotation_set, 0, rna_Object_lock_rotation_default
};

BooleanPropertyRNA rna_Object_lock_rotation_w = {
	{(PropertyRNA*)&rna_Object_lock_rotations_4d, (PropertyRNA*)&rna_Object_lock_rotation,
	-1, "lock_rotation_w", 4099, "Lock Rotation (4D Angle)",
	"Lock editing of \'angle\' component of four-component rotations in the interface",
	40,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_lock_rotation_w_get, Object_lock_rotation_w_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_lock_rotations_4d = {
	{(PropertyRNA*)&rna_Object_lock_scale, (PropertyRNA*)&rna_Object_lock_rotation_w,
	-1, "lock_rotations_4d", 3, "Lock Rotations (4D)",
	"Lock editing of four component rotations by components (instead of as Eulers)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_lock_rotations_4d_get, Object_lock_rotations_4d_set, NULL, NULL, 0, NULL
};

static int rna_Object_lock_scale_default[3] = {
	0,
	0,
	0
};

BooleanPropertyRNA rna_Object_lock_scale = {
	{(PropertyRNA*)&rna_Object_material_slots, (PropertyRNA*)&rna_Object_lock_rotations_4d,
	-1, "lock_scale", 4099, "Lock Scale",
	"Lock editing of scale in the interface",
	40,
	PROP_BOOLEAN, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, Object_lock_scale_get, Object_lock_scale_set, 0, rna_Object_lock_scale_default
};

CollectionPropertyRNA rna_Object_material_slots = {
	{(PropertyRNA*)&rna_Object_matrix_world, (PropertyRNA*)&rna_Object_lock_scale,
	-1, "material_slots", 16384, "Material Slots",
	"Material slots in the object",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_material_slots_begin, Object_material_slots_next, Object_material_slots_end, Object_material_slots_get, Object_material_slots_length, Object_material_slots_lookup_int, NULL, &RNA_MaterialSlot
};

static float rna_Object_matrix_world_default[16] = {
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

FloatPropertyRNA rna_Object_matrix_world = {
	{(PropertyRNA*)&rna_Object_draw_type, (PropertyRNA*)&rna_Object_material_slots,
	-1, "matrix_world", 8193, "Matrix World",
	"Worldspace transformation matrix",
	0,
	PROP_FLOAT, PROP_MATRIX|PROP_UNIT_NONE, NULL, 2, {4, 4, 0}, 16,
	rna_Object_matrix_world_update, 85065728, NULL, NULL,
	offsetof(Object, obmat), 4, NULL},
	NULL, NULL, Object_matrix_world_get, Object_matrix_world_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_matrix_world_default
};

static EnumPropertyItem rna_Object_draw_type_items[5] = {
	{1, "BOUNDS", 0, "Bounds", ""},
	{2, "WIRE", 0, "Wire", ""},
	{3, "SOLID", 0, "Solid", ""},
	{5, "TEXTURED", 0, "Textured", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_draw_type = {
	{(PropertyRNA*)&rna_Object_mode, (PropertyRNA*)&rna_Object_matrix_world,
	-1, "draw_type", 3, "Maximum Draw Type",
	"Maximum draw type to display object with in viewport",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_draw_type_get, Object_draw_type_set, NULL, rna_Object_draw_type_items, 4, 1
};

static EnumPropertyItem rna_Object_mode_items[9] = {
	{0, "OBJECT", 130, "Object", ""},
	{1, "EDIT", 131, "Edit", ""},
	{2, "SCULPT", 136, "Sculpt", ""},
	{4, "VERTEX_PAINT", 133, "Vertex Paint", ""},
	{8, "WEIGHT_PAINT", 135, "Weight Paint", ""},
	{16, "TEXTURE_PAINT", 134, "Texture Paint", ""},
	{32, "PARTICLE_EDIT", 138, "Particle Edit", ""},
	{64, "POSE", 137, "Pose", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_mode = {
	{(PropertyRNA*)&rna_Object_modifiers, (PropertyRNA*)&rna_Object_draw_type,
	-1, "mode", 2, "Mode",
	"Object interaction mode",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_mode_get, NULL, NULL, rna_Object_mode_items, 8, 0
};

CollectionPropertyRNA rna_Object_modifiers = {
	{(PropertyRNA*)&rna_Object_motion_path, (PropertyRNA*)&rna_Object_mode,
	-1, "modifiers", 0, "Modifiers",
	"Modifiers affecting the geometric data of the object",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ObjectModifiers},
	Object_modifiers_begin, Object_modifiers_next, Object_modifiers_end, Object_modifiers_get, NULL, Object_modifiers_lookup_int, NULL, &RNA_Modifier
};

PointerPropertyRNA rna_Object_motion_path = {
	{(PropertyRNA*)&rna_Object_parent, (PropertyRNA*)&rna_Object_modifiers,
	-1, "motion_path", 0, "Motion Path",
	"Motion Path for this element",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_motion_path_get, NULL, NULL, NULL,&RNA_MotionPath
};

PointerPropertyRNA rna_Object_parent = {
	{(PropertyRNA*)&rna_Object_parent_bone, (PropertyRNA*)&rna_Object_motion_path,
	-1, "parent", 1048577, "Parent",
	"Parent Object",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_parent_get, Object_parent_set, NULL, NULL,&RNA_Object
};

StringPropertyRNA rna_Object_parent_bone = {
	{(PropertyRNA*)&rna_Object_parent_type, (PropertyRNA*)&rna_Object_parent,
	-1, "parent_bone", 1, "Parent Bone",
	"Name of parent bone in case of a bone parenting relation",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Object_dependency_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_parent_bone_get, Object_parent_bone_length, Object_parent_bone_set, 32, ""
};

static EnumPropertyItem rna_Object_parent_type_items[9] = {
	{0, "OBJECT", 0, "Object", ""},
	{1, "CURVE", 0, "Curve", ""},
	{2, "KEY", 0, "Key", ""},
	{4, "ARMATURE", 0, "Armature", ""},
	{4, "LATTICE", 0, "Lattice", ""},
	{5, "VERTEX", 0, "Vertex", ""},
	{6, "VERTEX_3", 0, "3 Vertices", ""},
	{7, "BONE", 0, "Bone", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_parent_type = {
	{(PropertyRNA*)&rna_Object_parent_vertices, (PropertyRNA*)&rna_Object_parent_bone,
	-1, "parent_type", 3, "Parent Type",
	"Type of parent relation",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_dependency_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_parent_type_get, Object_parent_type_set, rna_Object_parent_type_itemf, rna_Object_parent_type_items, 8, 0
};

static int rna_Object_parent_vertices_default[3] = {
	0,
	0,
	0
};

IntPropertyRNA rna_Object_parent_vertices = {
	{(PropertyRNA*)&rna_Object_particle_systems, (PropertyRNA*)&rna_Object_parent_type,
	-1, "parent_vertices", 8194, "Parent Vertices",
	"Indices of vertices in cases of a vertex parenting relation",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85393408, NULL, NULL,
	offsetof(Object, par1), 0, NULL},
	NULL, NULL, Object_parent_vertices_get, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, rna_Object_parent_vertices_default
};

CollectionPropertyRNA rna_Object_particle_systems = {
	{(PropertyRNA*)&rna_Object_pass_index, (PropertyRNA*)&rna_Object_parent_vertices,
	-1, "particle_systems", 0, "Particle Systems",
	"Particle systems emitted from the object",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_ParticleSystems},
	Object_particle_systems_begin, Object_particle_systems_next, Object_particle_systems_end, Object_particle_systems_get, NULL, Object_particle_systems_lookup_int, NULL, &RNA_ParticleSystem
};

IntPropertyRNA rna_Object_pass_index = {
	{(PropertyRNA*)&rna_Object_pose, (PropertyRNA*)&rna_Object_particle_systems,
	-1, "pass_index", 8195, "Pass Index",
	"Index # for the IndexOB render pass",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 83886080, NULL, NULL,
	offsetof(Object, index), 1, NULL},
	Object_pass_index_get, Object_pass_index_set, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

PointerPropertyRNA rna_Object_pose = {
	{(PropertyRNA*)&rna_Object_pose_library, (PropertyRNA*)&rna_Object_pass_index,
	-1, "pose", 0, "Pose",
	"Current pose for armatures",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_pose_get, NULL, NULL, NULL,&RNA_Pose
};

PointerPropertyRNA rna_Object_pose_library = {
	{(PropertyRNA*)&rna_Object_proxy, (PropertyRNA*)&rna_Object_pose,
	-1, "pose_library", 65, "Pose Library",
	"Action used as a pose library for armatures",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_pose_library_get, Object_pose_library_set, NULL, NULL,&RNA_Action
};

PointerPropertyRNA rna_Object_proxy = {
	{(PropertyRNA*)&rna_Object_proxy_group, (PropertyRNA*)&rna_Object_pose_library,
	-1, "proxy", 0, "Proxy",
	"Library object this proxy object controls",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_proxy_get, NULL, NULL, NULL,&RNA_Object
};

PointerPropertyRNA rna_Object_proxy_group = {
	{(PropertyRNA*)&rna_Object_rotation_quaternion, (PropertyRNA*)&rna_Object_proxy,
	-1, "proxy_group", 0, "Proxy Group",
	"Library group duplicator object this proxy object controls",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_proxy_group_get, NULL, NULL, NULL,&RNA_Object
};

static float rna_Object_rotation_quaternion_default[4] = {
	1.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_rotation_quaternion = {
	{(PropertyRNA*)&rna_Object_hide_render, (PropertyRNA*)&rna_Object_proxy_group,
	-1, "rotation_quaternion", 8195, "Quaternion Rotation",
	"Rotation in Quaternions",
	0,
	PROP_FLOAT, PROP_QUATERNION|PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_Object_internal_update, 85065728, NULL, rna_Object_rotation_4d_editable,
	offsetof(Object, quat), 4, NULL},
	NULL, NULL, Object_rotation_quaternion_get, Object_rotation_quaternion_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_Object_rotation_quaternion_default
};

BooleanPropertyRNA rna_Object_hide_render = {
	{(PropertyRNA*)&rna_Object_hide_select, (PropertyRNA*)&rna_Object_rotation_quaternion,
	-1, "hide_render", 4099, "Restrict Render",
	"Restrict renderability",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_hide_render_get, Object_hide_render_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_hide_select = {
	{(PropertyRNA*)&rna_Object_hide, (PropertyRNA*)&rna_Object_hide_render,
	-1, "hide_select", 4099, "Restrict Select",
	"Restrict selection in the viewport",
	255,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_hide_select_get, Object_hide_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_hide = {
	{(PropertyRNA*)&rna_Object_rotation_mode, (PropertyRNA*)&rna_Object_hide_select,
	-1, "hide", 4099, "Restrict View",
	"Restrict visibility in the viewport",
	253,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_hide_get, Object_hide_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Object_rotation_mode_items[9] = {
	{0, "QUATERNION", 0, "Quaternion (WXYZ)", "No Gimbal Lock"},
	{1, "XYZ", 0, "XYZ Euler", "XYZ Rotation Order. Prone to Gimbal Lock. (Default)"},
	{2, "XZY", 0, "XZY Euler", "XZY Rotation Order. Prone to Gimbal Lock"},
	{3, "YXZ", 0, "YXZ Euler", "YXZ Rotation Order. Prone to Gimbal Lock"},
	{4, "YZX", 0, "YZX Euler", "YZX Rotation Order. Prone to Gimbal Lock"},
	{5, "ZXY", 0, "ZXY Euler", "ZXY Rotation Order. Prone to Gimbal Lock"},
	{6, "ZYX", 0, "ZYX Euler", "ZYX Rotation Order. Prone to Gimbal Lock"},
	{-1, "AXIS_ANGLE", 0, "Axis Angle", "Axis Angle (W+XYZ). Defines a rotation around some axis defined by 3D-Vector"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_rotation_mode = {
	{(PropertyRNA*)&rna_Object_scale, (PropertyRNA*)&rna_Object_hide,
	-1, "rotation_mode", 3, "Rotation Mode",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	Object_rotation_mode_get, Object_rotation_mode_set, NULL, rna_Object_rotation_mode_items, 8, 0
};

static float rna_Object_scale_default[3] = {
	1.0f,
	1.0f,
	1.0f
};

FloatPropertyRNA rna_Object_scale = {
	{(PropertyRNA*)&rna_Object_select, (PropertyRNA*)&rna_Object_rotation_mode,
	-1, "scale", 8195, "Scale",
	"Scaling of the object",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_Object_internal_update, 85065728, NULL, rna_Object_scale_editable,
	offsetof(Object, size), 4, NULL},
	NULL, NULL, Object_scale_get, Object_scale_set, NULL, -FLT_MAX, FLT_MAX, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_scale_default
};

BooleanPropertyRNA rna_Object_select = {
	{(PropertyRNA*)&rna_Object_use_shape_key_edit_mode, (PropertyRNA*)&rna_Object_scale,
	-1, "select", 3, "Select",
	"Object selection state",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_select_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_select_get, Object_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_use_shape_key_edit_mode = {
	{(PropertyRNA*)&rna_Object_show_only_shape_key, (PropertyRNA*)&rna_Object_select,
	-1, "use_shape_key_edit_mode", 3, "Shape Key Edit Mode",
	"Apply shape keys in edit mode (for Meshes only)",
	131,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Object_use_shape_key_edit_mode_get, Object_use_shape_key_edit_mode_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_show_only_shape_key = {
	{(PropertyRNA*)&rna_Object_use_slow_parent, (PropertyRNA*)&rna_Object_use_shape_key_edit_mode,
	-1, "show_only_shape_key", 4099, "Shape Key Lock",
	"Always show the current Shape for this Object",
	42,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 0, NULL, NULL,
	0, -1, NULL},
	Object_show_only_shape_key_get, Object_show_only_shape_key_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_use_slow_parent = {
	{(PropertyRNA*)&rna_Object_soft_body, (PropertyRNA*)&rna_Object_show_only_shape_key,
	-1, "use_slow_parent", 3, "Slow Parent",
	"Create a delay in the parent relationship",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_use_slow_parent_get, Object_use_slow_parent_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_soft_body = {
	{(PropertyRNA*)&rna_Object_time_offset, (PropertyRNA*)&rna_Object_use_slow_parent,
	-1, "soft_body", 0, "Soft Body Settings",
	"Settings for soft body simulation",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_soft_body_get, NULL, NULL, NULL,&RNA_SoftBodySettings
};

FloatPropertyRNA rna_Object_time_offset = {
	{(PropertyRNA*)&rna_Object_use_time_offset_add_parent, (PropertyRNA*)&rna_Object_soft_body,
	-1, "time_offset", 8195, "Time Offset",
	"Animation offset in frames for F-Curve and dupligroup instances",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_TIME, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85065728, NULL, NULL,
	offsetof(Object, sf), 4, NULL},
	Object_time_offset_get, Object_time_offset_set, NULL, NULL, NULL, -300000.0f, 300000.0f, -300000.0f, 300000.0f, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_Object_use_time_offset_add_parent = {
	{(PropertyRNA*)&rna_Object_use_time_offset_edit, (PropertyRNA*)&rna_Object_time_offset,
	-1, "use_time_offset_add_parent", 3, "Time Offset Add Parent",
	"Add the parents time offset value",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	Object_use_time_offset_add_parent_get, Object_use_time_offset_add_parent_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_use_time_offset_edit = {
	{(PropertyRNA*)&rna_Object_use_time_offset_parent, (PropertyRNA*)&rna_Object_use_time_offset_add_parent,
	-1, "use_time_offset_edit", 3, "Time Offset Edit",
	"Use time offset when inserting keys and display time offset for F-Curve and action views",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_use_time_offset_edit_get, Object_use_time_offset_edit_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_use_time_offset_parent = {
	{(PropertyRNA*)&rna_Object_use_time_offset_particle, (PropertyRNA*)&rna_Object_use_time_offset_edit,
	-1, "use_time_offset_parent", 3, "Time Offset Parent",
	"Apply the time offset to this objects parent relationship",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	Object_use_time_offset_parent_get, Object_use_time_offset_parent_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_use_time_offset_particle = {
	{(PropertyRNA*)&rna_Object_track_axis, (PropertyRNA*)&rna_Object_use_time_offset_parent,
	-1, "use_time_offset_particle", 3, "Time Offset Particle",
	"Let the time offset work on the particle effect",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85065728, NULL, NULL,
	0, -1, NULL},
	Object_use_time_offset_particle_get, Object_use_time_offset_particle_set, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Object_track_axis_items[7] = {
	{0, "POS_X", 0, "+X", ""},
	{1, "POS_Y", 0, "+Y", ""},
	{2, "POS_Z", 0, "+Z", ""},
	{3, "NEG_X", 0, "-X", ""},
	{4, "NEG_Y", 0, "-Y", ""},
	{5, "NEG_Z", 0, "-Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_track_axis = {
	{(PropertyRNA*)&rna_Object_type, (PropertyRNA*)&rna_Object_use_time_offset_particle,
	-1, "track_axis", 3, "Track Axis",
	"Axis that points in \'forward\' direction",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_track_axis_get, Object_track_axis_set, NULL, rna_Object_track_axis_items, 6, 0
};

static EnumPropertyItem rna_Object_type_items[13] = {
	{1, "MESH", 0, "Mesh", ""},
	{2, "CURVE", 0, "Curve", ""},
	{3, "SURFACE", 0, "Surface", ""},
	{5, "META", 0, "Meta", ""},
	{4, "FONT", 0, "Font", ""},
	{0, "", 0, NULL, NULL},
	{25, "ARMATURE", 0, "Armature", ""},
	{22, "LATTICE", 0, "Lattice", ""},
	{0, "EMPTY", 0, "Empty", ""},
	{0, "", 0, NULL, NULL},
	{11, "CAMERA", 0, "Camera", ""},
	{10, "LAMP", 0, "Lamp", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_type = {
	{(PropertyRNA*)&rna_Object_up_axis, (PropertyRNA*)&rna_Object_track_axis,
	-1, "type", 2, "Type",
	"Type of Object",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_type_get, NULL, NULL, rna_Object_type_items, 12, 0
};

static EnumPropertyItem rna_Object_up_axis_items[4] = {
	{0, "X", 0, "X", ""},
	{1, "Y", 0, "Y", ""},
	{2, "Z", 0, "Z", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_up_axis = {
	{(PropertyRNA*)&rna_Object_vertex_groups, (PropertyRNA*)&rna_Object_type,
	-1, "up_axis", 3, "Up Axis",
	"Axis that points in the upward direction",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_up_axis_get, Object_up_axis_set, NULL, rna_Object_up_axis_items, 3, 0
};

CollectionPropertyRNA rna_Object_vertex_groups = {
	{(PropertyRNA*)&rna_Object_show_x_ray, (PropertyRNA*)&rna_Object_up_axis,
	-1, "vertex_groups", 0, "Vertex Groups",
	"Vertex groups of the object",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_VertexGroups},
	Object_vertex_groups_begin, Object_vertex_groups_next, Object_vertex_groups_end, Object_vertex_groups_get, NULL, Object_vertex_groups_lookup_int, NULL, &RNA_VertexGroup
};

BooleanPropertyRNA rna_Object_show_x_ray = {
	{(PropertyRNA*)&rna_Object_is_duplicator, (PropertyRNA*)&rna_Object_vertex_groups,
	-1, "show_x_ray", 3, "X-Ray",
	"Makes the object draw in front of others",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	Object_show_x_ray_get, Object_show_x_ray_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Object_is_duplicator = {
	{NULL, (PropertyRNA*)&rna_Object_show_x_ray,
	-1, "is_duplicator", 2, "is_duplicator",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Object_is_duplicator_get, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_Object_create_mesh_scene = {
	{(PropertyRNA*)&rna_Object_create_mesh_apply_modifiers, NULL,
	-1, "scene", 262148, "",
	"Scene within which to evaluate modifiers.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

BooleanPropertyRNA rna_Object_create_mesh_apply_modifiers = {
	{(PropertyRNA*)&rna_Object_create_mesh_settings, (PropertyRNA*)&rna_Object_create_mesh_scene,
	-1, "apply_modifiers", 7, "",
	"Apply modifiers.",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_Object_create_mesh_settings_items[3] = {
	{0, "PREVIEW", 0, "Preview", "Apply modifier preview settings"},
	{1, "RENDER", 0, "Render", "Apply modifier render settings"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Object_create_mesh_settings = {
	{(PropertyRNA*)&rna_Object_create_mesh_mesh, (PropertyRNA*)&rna_Object_create_mesh_apply_modifiers,
	-1, "settings", 7, "",
	"Modifier settings to apply.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_Object_create_mesh_settings_items, 2, 0
};

PointerPropertyRNA rna_Object_create_mesh_mesh = {
	{NULL, (PropertyRNA*)&rna_Object_create_mesh_settings,
	-1, "mesh", 8, "",
	"Mesh created from object, remove it if it is only used for export.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FunctionRNA rna_Object_create_mesh_func = {
	{(FunctionRNA*)&rna_Object_create_dupli_list_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_Object_create_mesh_scene, (PropertyRNA*)&rna_Object_create_mesh_mesh}},
	"create_mesh", 4, "Create a Mesh datablock with modifiers applied.",
	Object_create_mesh_call,
	(PropertyRNA*)&rna_Object_create_mesh_mesh
};

PointerPropertyRNA rna_Object_create_dupli_list_scene = {
	{NULL, NULL,
	-1, "scene", 262148, "",
	"Scene within which to evaluate duplis.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_Object_create_dupli_list_func = {
	{(FunctionRNA*)&rna_Object_free_dupli_list_func, (FunctionRNA*)&rna_Object_create_mesh_func,
	NULL,
	{(PropertyRNA*)&rna_Object_create_dupli_list_scene, (PropertyRNA*)&rna_Object_create_dupli_list_scene}},
	"create_dupli_list", 4, "Create a list of dupli objects for this object, needs to be freed manually with free_dupli_list to restore the objects real matrix and layers.",
	Object_create_dupli_list_call,
	NULL
};

FunctionRNA rna_Object_free_dupli_list_func = {
	{(FunctionRNA*)&rna_Object_find_armature_func, (FunctionRNA*)&rna_Object_create_dupli_list_func,
	NULL,
	{NULL, NULL}},
	"free_dupli_list", 0, "Free the list of dupli objects.",
	Object_free_dupli_list_call,
	NULL
};

PointerPropertyRNA rna_Object_find_armature_ob_arm = {
	{NULL, NULL,
	-1, "ob_arm", 8, "",
	"Armature object influencing this object or NULL.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_Object_find_armature_func = {
	{(FunctionRNA*)&rna_Object_shape_key_add_func, (FunctionRNA*)&rna_Object_free_dupli_list_func,
	NULL,
	{(PropertyRNA*)&rna_Object_find_armature_ob_arm, (PropertyRNA*)&rna_Object_find_armature_ob_arm}},
	"find_armature", 0, "Find armature influencing this object as a parent or via a modifier.",
	Object_find_armature_call,
	(PropertyRNA*)&rna_Object_find_armature_ob_arm
};

StringPropertyRNA rna_Object_shape_key_add_name = {
	{(PropertyRNA*)&rna_Object_shape_key_add_from_mix, NULL,
	-1, "name", 1, "",
	"Unique name for the new keylock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Key"
};

BooleanPropertyRNA rna_Object_shape_key_add_from_mix = {
	{(PropertyRNA*)&rna_Object_shape_key_add_key, (PropertyRNA*)&rna_Object_shape_key_add_name,
	-1, "from_mix", 3, "",
	"Create new shape from existing mix of shapes.",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 1, NULL
};

PointerPropertyRNA rna_Object_shape_key_add_key = {
	{NULL, (PropertyRNA*)&rna_Object_shape_key_add_from_mix,
	-1, "key", 2056, "",
	"New shape keyblock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ShapeKey
};

FunctionRNA rna_Object_shape_key_add_func = {
	{(FunctionRNA*)&rna_Object_ray_cast_func, (FunctionRNA*)&rna_Object_find_armature_func,
	NULL,
	{(PropertyRNA*)&rna_Object_shape_key_add_name, (PropertyRNA*)&rna_Object_shape_key_add_key}},
	"shape_key_add", 6, "Add shape key to an object.",
	Object_shape_key_add_call,
	(PropertyRNA*)&rna_Object_shape_key_add_key
};

static float rna_Object_ray_cast_start_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_start = {
	{(PropertyRNA*)&rna_Object_ray_cast_end, NULL,
	-1, "start", 7, "",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_start_default
};

static float rna_Object_ray_cast_end_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_end = {
	{(PropertyRNA*)&rna_Object_ray_cast_location, (PropertyRNA*)&rna_Object_ray_cast_start,
	-1, "end", 7, "",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_end_default
};

static float rna_Object_ray_cast_location_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_location = {
	{(PropertyRNA*)&rna_Object_ray_cast_normal, (PropertyRNA*)&rna_Object_ray_cast_end,
	-1, "location", 8388619, "Location",
	"The hit location of this ray cast",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_location_default
};

static float rna_Object_ray_cast_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_Object_ray_cast_normal = {
	{(PropertyRNA*)&rna_Object_ray_cast_index, (PropertyRNA*)&rna_Object_ray_cast_location,
	-1, "normal", 8388619, "Normal",
	"The face normal at the ray cast hit location",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 1.0f, 3, 0.0f, rna_Object_ray_cast_normal_default
};

IntPropertyRNA rna_Object_ray_cast_index = {
	{NULL, (PropertyRNA*)&rna_Object_ray_cast_normal,
	-1, "index", 11, "",
	"The face index, -1 when no intersection is found.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_Object_ray_cast_func = {
	{(FunctionRNA*)&rna_Object_is_visible_func, (FunctionRNA*)&rna_Object_shape_key_add_func,
	NULL,
	{(PropertyRNA*)&rna_Object_ray_cast_start, (PropertyRNA*)&rna_Object_ray_cast_index}},
	"ray_cast", 4, "Cast a ray onto in object space.",
	Object_ray_cast_call,
	NULL
};

PointerPropertyRNA rna_Object_is_visible_scene = {
	{(PropertyRNA*)&rna_Object_is_visible_is_visible, NULL,
	-1, "scene", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

BooleanPropertyRNA rna_Object_is_visible_is_visible = {
	{NULL, (PropertyRNA*)&rna_Object_is_visible_scene,
	-1, "is_visible", 11, "",
	"Object visibility.",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_Object_is_visible_func = {
	{NULL, (FunctionRNA*)&rna_Object_ray_cast_func,
	NULL,
	{(PropertyRNA*)&rna_Object_is_visible_scene, (PropertyRNA*)&rna_Object_is_visible_is_visible}},
	"is_visible", 0, "Determine if object is visible in a given scene.",
	Object_is_visible_call,
	(PropertyRNA*)&rna_Object_is_visible_is_visible
};

StructRNA RNA_Object = {
	{(ContainerRNA *)&RNA_ObjectActuator, (ContainerRNA *)&RNA_NorController,
	NULL,
	{(PropertyRNA*)&rna_Object_active_material, (PropertyRNA*)&rna_Object_is_duplicator}},
	"Object"	, NULL,NULL
, 1, "Object", "Object datablock defining an object in a scene",
	159,
	(PropertyRNA*)&rna_ID_name, (PropertyRNA*)&rna_ID_rna_properties,
	&RNA_ID,
	NULL,
	rna_ID_refine,
	NULL,
	NULL,
	NULL,
	rna_ID_idprops,
	{(FunctionRNA*)&rna_Object_create_mesh_func, (FunctionRNA*)&rna_Object_is_visible_func}
};

/* Object Base */
PointerPropertyRNA rna_ObjectBase_rna_type = {
	{(PropertyRNA*)&rna_ObjectBase_layers, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectBase_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static int rna_ObjectBase_layers_default[20] = {
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

BooleanPropertyRNA rna_ObjectBase_layers = {
	{(PropertyRNA*)&rna_ObjectBase_object, (PropertyRNA*)&rna_ObjectBase_rna_type,
	-1, "layers", 3, "Layers",
	"Layers the object base is on",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	rna_Base_layer_update, 85393408, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, ObjectBase_layers_get, ObjectBase_layers_set, 0, rna_ObjectBase_layers_default
};

PointerPropertyRNA rna_ObjectBase_object = {
	{(PropertyRNA*)&rna_ObjectBase_rna_properties, (PropertyRNA*)&rna_ObjectBase_layers,
	-1, "object", 0, "Object",
	"Object this base links to",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectBase_object_get, NULL, NULL, NULL,&RNA_Object
};

CollectionPropertyRNA rna_ObjectBase_rna_properties = {
	{(PropertyRNA*)&rna_ObjectBase_select, (PropertyRNA*)&rna_ObjectBase_object,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectBase_rna_properties_begin, ObjectBase_rna_properties_next, ObjectBase_rna_properties_end, ObjectBase_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_ObjectBase_select = {
	{NULL, (PropertyRNA*)&rna_ObjectBase_rna_properties,
	-1, "select", 3, "Select",
	"Object base selection state",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Base_select_update, 85393408, NULL, NULL,
	0, -1, NULL},
	ObjectBase_select_get, ObjectBase_select_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ObjectBase_layers_from_view_view = {
	{NULL, NULL,
	-1, "view", 262148, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_SpaceView3D
};

FunctionRNA rna_ObjectBase_layers_from_view_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_ObjectBase_layers_from_view_view, (PropertyRNA*)&rna_ObjectBase_layers_from_view_view}},
	"layers_from_view", 0, "Sets the object layers from a 3D View (use when adding an object in local view).",
	ObjectBase_layers_from_view_call,
	NULL
};

StructRNA RNA_ObjectBase = {
	{(ContainerRNA *)&RNA_ObjectConstraints, (ContainerRNA *)&RNA_ObjectActuator,
	NULL,
	{(PropertyRNA*)&rna_ObjectBase_rna_type, (PropertyRNA*)&rna_ObjectBase_select}},
	"ObjectBase"	, NULL,NULL
, 0, "Object Base", "An object instance in a scene",
	159,
	NULL, (PropertyRNA*)&rna_ObjectBase_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ObjectBase_layers_from_view_func, (FunctionRNA*)&rna_ObjectBase_layers_from_view_func}
};

/* Object Constraints */
PointerPropertyRNA rna_ObjectConstraints_rna_type = {
	{(PropertyRNA*)&rna_ObjectConstraints_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectConstraints_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ObjectConstraints_active = {
	{(PropertyRNA*)&rna_ObjectConstraints_rna_properties, (PropertyRNA*)&rna_ObjectConstraints_rna_type,
	-1, "active", 1, "Active Constraint",
	"Active Object constraint",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectConstraints_active_get, ObjectConstraints_active_set, NULL, NULL,&RNA_Constraint
};

CollectionPropertyRNA rna_ObjectConstraints_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ObjectConstraints_active,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectConstraints_rna_properties_begin, ObjectConstraints_rna_properties_next, ObjectConstraints_rna_properties_end, ObjectConstraints_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_ObjectConstraints_new_type_items[29] = {
	{0, "", 0, "Transform", ""},
	{9, "COPY_LOCATION", 459, "Copy Location", ""},
	{8, "COPY_ROTATION", 459, "Copy Rotation", ""},
	{10, "COPY_SCALE", 459, "Copy Scale", ""},
	{23, "COPY_TRANSFORMS", 459, "Copy Transforms", ""},
	{14, "LIMIT_DISTANCE", 459, "Limit Distance", ""},
	{6, "LIMIT_LOCATION", 459, "Limit Location", ""},
	{5, "LIMIT_ROTATION", 459, "Limit Rotation", ""},
	{7, "LIMIT_SCALE", 459, "Limit Scale", ""},
	{24, "MAINTAIN_VOLUME", 459, "Maintain Volume", ""},
	{19, "TRANSFORM", 459, "Transformation", ""},
	{0, "", 0, "Tracking", ""},
	{18, "CLAMP_TO", 459, "Clamp To", ""},
	{21, "DAMPED_TRACK", 459, "Damped Track", "Tracking by taking the shortest path"},
	{3, "IK", 459, "Inverse Kinematics", ""},
	{13, "LOCKED_TRACK", 459, "Locked Track", "Tracking along a single axis"},
	{22, "SPLINE_IK", 459, "Spline IK", ""},
	{15, "STRETCH_TO", 459, "Stretch To", ""},
	{2, "TRACK_TO", 459, "Track To", "Legacy tracking constraint prone to twisting artifacts"},
	{0, "", 0, "Relationship", ""},
	{12, "ACTION", 459, "Action", ""},
	{1, "CHILD_OF", 459, "Child Of", ""},
	{16, "FLOOR", 459, "Floor", ""},
	{4, "FOLLOW_PATH", 459, "Follow Path", ""},
	{25, "PIVOT", 459, "Pivot", ""},
	{17, "RIGID_BODY_JOINT", 459, "Rigid Body Joint", ""},
	{11, "SCRIPT", 459, "Script", ""},
	{20, "SHRINKWRAP", 459, "Shrinkwrap", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ObjectConstraints_new_type = {
	{(PropertyRNA*)&rna_ObjectConstraints_new_constraint, NULL,
	-1, "type", 7, "",
	"Constraint type to add.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_ObjectConstraints_new_type_items, 28, 1
};

PointerPropertyRNA rna_ObjectConstraints_new_constraint = {
	{NULL, (PropertyRNA*)&rna_ObjectConstraints_new_type,
	-1, "constraint", 8, "",
	"New constraint.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_new_func = {
	{(FunctionRNA*)&rna_ObjectConstraints_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ObjectConstraints_new_type, (PropertyRNA*)&rna_ObjectConstraints_new_constraint}},
	"new", 0, "Add a new constraint to this object",
	ObjectConstraints_new_call,
	(PropertyRNA*)&rna_ObjectConstraints_new_constraint
};

PointerPropertyRNA rna_ObjectConstraints_remove_constraint = {
	{NULL, NULL,
	-1, "constraint", 262148, "",
	"Removed constraint.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Constraint
};

FunctionRNA rna_ObjectConstraints_remove_func = {
	{NULL, (FunctionRNA*)&rna_ObjectConstraints_new_func,
	NULL,
	{(PropertyRNA*)&rna_ObjectConstraints_remove_constraint, (PropertyRNA*)&rna_ObjectConstraints_remove_constraint}},
	"remove", 4, "Remove a constraint from this object.",
	ObjectConstraints_remove_call,
	NULL
};

StructRNA RNA_ObjectConstraints = {
	{(ContainerRNA *)&RNA_ObjectModifiers, (ContainerRNA *)&RNA_ObjectBase,
	NULL,
	{(PropertyRNA*)&rna_ObjectConstraints_rna_type, (PropertyRNA*)&rna_ObjectConstraints_rna_properties}},
	"ObjectConstraints"	, NULL,NULL
, 0, "Object Constraints", "Collection of object constraints",
	17,
	NULL, (PropertyRNA*)&rna_ObjectConstraints_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ObjectConstraints_new_func, (FunctionRNA*)&rna_ObjectConstraints_remove_func}
};

/* Object Modifiers */
PointerPropertyRNA rna_ObjectModifiers_rna_type = {
	{(PropertyRNA*)&rna_ObjectModifiers_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectModifiers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_ObjectModifiers_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ObjectModifiers_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ObjectModifiers_rna_properties_begin, ObjectModifiers_rna_properties_next, ObjectModifiers_rna_properties_end, ObjectModifiers_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_ObjectModifiers_new_name = {
	{(PropertyRNA*)&rna_ObjectModifiers_new_type, NULL,
	-1, "name", 5, "",
	"New name for the bone.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Name"
};

static EnumPropertyItem rna_ObjectModifiers_new_type_items[37] = {
	{0, "", 0, "Generate", ""},
	{12, "ARRAY", 454, "Array", ""},
	{24, "BEVEL", 464, "Bevel", ""},
	{11, "BOOLEAN", 452, "Boolean", ""},
	{4, "BUILD", 444, "Build", ""},
	{6, "DECIMATE", 445, "Decimate", ""},
	{13, "EDGE_SPLIT", 453, "Edge Split", ""},
	{27, "MASK", 467, "Mask", ""},
	{5, "MIRROR", 446, "Mirror", ""},
	{29, "MULTIRES", 471, "Multiresolution", ""},
	{34, "SCREW", 474, "Screw", ""},
	{33, "SOLIDIFY", 473, "Solidify", ""},
	{1, "SUBSURF", 448, "Subdivision Surface", ""},
	{15, "UV_PROJECT", 455, "UV Project", ""},
	{0, "", 0, "Deform", ""},
	{8, "ARMATURE", 460, "Armature", ""},
	{17, "CAST", 462, "Cast", ""},
	{3, "CURVE", 457, "Curve", ""},
	{14, "DISPLACE", 456, "Displace", ""},
	{9, "HOOK", 449, "Hook", ""},
	{2, "LATTICE", 458, "Lattice", ""},
	{18, "MESH_DEFORM", 463, "Mesh Deform", ""},
	{25, "SHRINKWRAP", 461, "Shrinkwrap", ""},
	{28, "SIMPLE_DEFORM", 466, "Simple Deform", ""},
	{16, "SMOOTH", 465, "Smooth", ""},
	{7, "WAVE", 443, "Wave", ""},
	{0, "", 0, "Simulate", ""},
	{22, "CLOTH", 468, "Cloth", ""},
	{23, "COLLISION", 450, "Collision", ""},
	{21, "EXPLODE", 469, "Explode", ""},
	{26, "FLUID_SIMULATION", 470, "Fluid Simulation", ""},
	{20, "PARTICLE_INSTANCE", 451, "Particle Instance", ""},
	{19, "PARTICLE_SYSTEM", 451, "Particle System", ""},
	{31, "SMOKE", 472, "Smoke", ""},
	{10, "SOFT_BODY", 447, "Soft Body", ""},
	{30, "SURFACE", 450, "Surface", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ObjectModifiers_new_type = {
	{(PropertyRNA*)&rna_ObjectModifiers_new_modifier, (PropertyRNA*)&rna_ObjectModifiers_new_name,
	-1, "type", 7, "",
	"Modifier type to add.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_ObjectModifiers_new_type_items, 36, 1
};

PointerPropertyRNA rna_ObjectModifiers_new_modifier = {
	{NULL, (PropertyRNA*)&rna_ObjectModifiers_new_type,
	-1, "modifier", 8, "",
	"Newly created modifier.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Modifier
};

FunctionRNA rna_ObjectModifiers_new_func = {
	{(FunctionRNA*)&rna_ObjectModifiers_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_ObjectModifiers_new_name, (PropertyRNA*)&rna_ObjectModifiers_new_modifier}},
	"new", 6, "Add a new modifier.",
	ObjectModifiers_new_call,
	(PropertyRNA*)&rna_ObjectModifiers_new_modifier
};

PointerPropertyRNA rna_ObjectModifiers_remove_modifier = {
	{NULL, NULL,
	-1, "modifier", 262148, "",
	"Modifier to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Modifier
};

FunctionRNA rna_ObjectModifiers_remove_func = {
	{NULL, (FunctionRNA*)&rna_ObjectModifiers_new_func,
	NULL,
	{(PropertyRNA*)&rna_ObjectModifiers_remove_modifier, (PropertyRNA*)&rna_ObjectModifiers_remove_modifier}},
	"remove", 6, "Remove an existing modifier from the object.",
	ObjectModifiers_remove_call,
	NULL
};

StructRNA RNA_ObjectModifiers = {
	{(ContainerRNA *)&RNA_ObstacleFluidSettings, (ContainerRNA *)&RNA_ObjectConstraints,
	NULL,
	{(PropertyRNA*)&rna_ObjectModifiers_rna_type, (PropertyRNA*)&rna_ObjectModifiers_rna_properties}},
	"ObjectModifiers"	, NULL,NULL
, 0, "Object Modifiers", "Collection of object modifiers",
	17,
	NULL, (PropertyRNA*)&rna_ObjectModifiers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_ObjectModifiers_new_func, (FunctionRNA*)&rna_ObjectModifiers_remove_func}
};

/* Particle Systems */
PointerPropertyRNA rna_ParticleSystems_rna_type = {
	{(PropertyRNA*)&rna_ParticleSystems_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystems_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ParticleSystems_active = {
	{(PropertyRNA*)&rna_ParticleSystems_active_index, (PropertyRNA*)&rna_ParticleSystems_rna_type,
	-1, "active", 0, "Active Particle System",
	"Active particle system being displayed",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleSystems_active_get, NULL, NULL, NULL,&RNA_ParticleSystem
};

IntPropertyRNA rna_ParticleSystems_active_index = {
	{(PropertyRNA*)&rna_ParticleSystems_rna_properties, (PropertyRNA*)&rna_ParticleSystems_active,
	-1, "active_index", 1, "Active Particle System Index",
	"Index of active particle system slot",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_particle_update, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleSystems_active_index_get, ParticleSystems_active_index_set, NULL, NULL, rna_Object_active_particle_system_index_range,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_ParticleSystems_rna_properties = {
	{NULL, (PropertyRNA*)&rna_ParticleSystems_active_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleSystems_rna_properties_begin, ParticleSystems_rna_properties_next, ParticleSystems_rna_properties_end, ParticleSystems_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_ParticleSystems = {
	{(ContainerRNA *)&RNA_ParticleTarget, (ContainerRNA *)&RNA_ParticleSystemModifier,
	NULL,
	{(PropertyRNA*)&rna_ParticleSystems_rna_type, (PropertyRNA*)&rna_ParticleSystems_rna_properties}},
	"ParticleSystems"	, NULL,NULL
, 0, "Particle Systems", "Collection of particle systems",
	17,
	NULL, (PropertyRNA*)&rna_ParticleSystems_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Vertex Group */
PointerPropertyRNA rna_VertexGroup_rna_type = {
	{(PropertyRNA*)&rna_VertexGroup_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroup_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_VertexGroup_name = {
	{(PropertyRNA*)&rna_VertexGroup_index, (PropertyRNA*)&rna_VertexGroup_rna_type,
	-1, "name", 1, "Name",
	"Vertex group name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	rna_Object_internal_update_data, 274399237, NULL, NULL,
	0, -1, NULL},
	VertexGroup_name_get, VertexGroup_name_length, VertexGroup_name_set, 32, ""
};

IntPropertyRNA rna_VertexGroup_index = {
	{(PropertyRNA*)&rna_VertexGroup_rna_properties, (PropertyRNA*)&rna_VertexGroup_name,
	-1, "index", 2, "Index",
	"Index number of the vertex group",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroup_index_get, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

CollectionPropertyRNA rna_VertexGroup_rna_properties = {
	{NULL, (PropertyRNA*)&rna_VertexGroup_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroup_rna_properties_begin, VertexGroup_rna_properties_next, VertexGroup_rna_properties_end, VertexGroup_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static int rna_VertexGroup_add_index_default[1] = {
	0
};

IntPropertyRNA rna_VertexGroup_add_index = {
	{(PropertyRNA*)&rna_VertexGroup_add_weight, NULL,
	-1, "index", 131079, "",
	"Index List.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, rna_VertexGroup_add_index_default
};

FloatPropertyRNA rna_VertexGroup_add_weight = {
	{(PropertyRNA*)&rna_VertexGroup_add_type, (PropertyRNA*)&rna_VertexGroup_add_index,
	-1, "weight", 7, "",
	"Vertex weight.",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_VertexGroup_add_type_items[4] = {
	{1, "REPLACE", 0, "Replace", "Replace"},
	{2, "ADD", 0, "Add", "Add"},
	{3, "SUBTRACT", 0, "Subtract", "Subtract"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_VertexGroup_add_type = {
	{NULL, (PropertyRNA*)&rna_VertexGroup_add_weight,
	-1, "type", 7, "",
	"Vertex assign mode.",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_VertexGroup_add_type_items, 3, 1
};

FunctionRNA rna_VertexGroup_add_func = {
	{(FunctionRNA*)&rna_VertexGroup_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_VertexGroup_add_index, (PropertyRNA*)&rna_VertexGroup_add_type}},
	"add", 2052, "Add vertices to the group.",
	VertexGroup_add_call,
	NULL
};

static int rna_VertexGroup_remove_index_default[1] = {
	0
};

IntPropertyRNA rna_VertexGroup_remove_index = {
	{NULL, NULL,
	-1, "index", 131079, "",
	"Index List.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {1, 0, 0}, 1,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, 0, INT_MIN, INT_MAX, 1, 0, rna_VertexGroup_remove_index_default
};

FunctionRNA rna_VertexGroup_remove_func = {
	{(FunctionRNA*)&rna_VertexGroup_weight_func, (FunctionRNA*)&rna_VertexGroup_add_func,
	NULL,
	{(PropertyRNA*)&rna_VertexGroup_remove_index, (PropertyRNA*)&rna_VertexGroup_remove_index}},
	"remove", 2052, "Remove a vertex from the group.",
	VertexGroup_remove_call,
	NULL
};

IntPropertyRNA rna_VertexGroup_weight_index = {
	{(PropertyRNA*)&rna_VertexGroup_weight_weight, NULL,
	-1, "index", 7, "Index",
	"The index of the vertex.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_VertexGroup_weight_weight = {
	{NULL, (PropertyRNA*)&rna_VertexGroup_weight_index,
	-1, "weight", 11, "",
	"Vertex weight.",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 3, 0.0f, NULL
};

FunctionRNA rna_VertexGroup_weight_func = {
	{NULL, (FunctionRNA*)&rna_VertexGroup_remove_func,
	NULL,
	{(PropertyRNA*)&rna_VertexGroup_weight_index, (PropertyRNA*)&rna_VertexGroup_weight_weight}},
	"weight", 2052, "Get a vertex weight from the group.",
	VertexGroup_weight_call,
	(PropertyRNA*)&rna_VertexGroup_weight_weight
};

StructRNA RNA_VertexGroup = {
	{(ContainerRNA *)&RNA_VertexGroupElement, (ContainerRNA *)&RNA_VertexColors,
	NULL,
	{(PropertyRNA*)&rna_VertexGroup_rna_type, (PropertyRNA*)&rna_VertexGroup_rna_properties}},
	"VertexGroup"	, NULL,NULL
, 0, "Vertex Group", "Group of vertices, used for armature deform and other purposes",
	201,
	(PropertyRNA*)&rna_VertexGroup_name, (PropertyRNA*)&rna_VertexGroup_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_VertexGroup_add_func, (FunctionRNA*)&rna_VertexGroup_weight_func}
};

/* Vertex Groups */
PointerPropertyRNA rna_VertexGroups_rna_type = {
	{(PropertyRNA*)&rna_VertexGroups_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_VertexGroups_active = {
	{(PropertyRNA*)&rna_VertexGroups_active_index, (PropertyRNA*)&rna_VertexGroups_rna_type,
	-1, "active", 0, "Active Vertex Group",
	"Vertex groups of the object",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 274399232, NULL, NULL,
	0, -1, NULL},
	VertexGroups_active_get, NULL, NULL, NULL,&RNA_VertexGroup
};

IntPropertyRNA rna_VertexGroups_active_index = {
	{(PropertyRNA*)&rna_VertexGroups_rna_properties, (PropertyRNA*)&rna_VertexGroups_active,
	-1, "active_index", 1, "Active Vertex Group Index",
	"Active index in vertex group array",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Object_internal_update_data, 274399232, NULL, NULL,
	0, -1, NULL},
	VertexGroups_active_index_get, VertexGroups_active_index_set, NULL, NULL, rna_Object_active_vertex_group_index_range,
	-32768, 32767, -32768, 32767, 1, 0, NULL
};

CollectionPropertyRNA rna_VertexGroups_rna_properties = {
	{NULL, (PropertyRNA*)&rna_VertexGroups_active_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexGroups_rna_properties_begin, VertexGroups_rna_properties_next, VertexGroups_rna_properties_end, VertexGroups_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_VertexGroups_new_name = {
	{(PropertyRNA*)&rna_VertexGroups_new_group, NULL,
	-1, "name", 1, "",
	"Vertex group name.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Group"
};

PointerPropertyRNA rna_VertexGroups_new_group = {
	{NULL, (PropertyRNA*)&rna_VertexGroups_new_name,
	-1, "group", 8, "",
	"New vertex group.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VertexGroup
};

FunctionRNA rna_VertexGroups_new_func = {
	{(FunctionRNA*)&rna_VertexGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_VertexGroups_new_name, (PropertyRNA*)&rna_VertexGroups_new_group}},
	"new", 0, "Add vertex group to object.",
	VertexGroups_new_call,
	(PropertyRNA*)&rna_VertexGroups_new_group
};

PointerPropertyRNA rna_VertexGroups_remove_group = {
	{NULL, NULL,
	-1, "group", 262148, "",
	"Vertex group to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VertexGroup
};

FunctionRNA rna_VertexGroups_remove_func = {
	{NULL, (FunctionRNA*)&rna_VertexGroups_new_func,
	NULL,
	{(PropertyRNA*)&rna_VertexGroups_remove_group, (PropertyRNA*)&rna_VertexGroups_remove_group}},
	"remove", 0, "Delete vertex group from object.",
	VertexGroups_remove_call,
	NULL
};

StructRNA RNA_VertexGroups = {
	{(ContainerRNA *)&RNA_VertexPaint, (ContainerRNA *)&RNA_VertexGroupElement,
	NULL,
	{(PropertyRNA*)&rna_VertexGroups_rna_type, (PropertyRNA*)&rna_VertexGroups_rna_properties}},
	"VertexGroups"	, NULL,NULL
, 0, "Vertex Groups", "Collection of vertex groups",
	17,
	NULL, (PropertyRNA*)&rna_VertexGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_VertexGroups_new_func, (FunctionRNA*)&rna_VertexGroups_remove_func}
};

