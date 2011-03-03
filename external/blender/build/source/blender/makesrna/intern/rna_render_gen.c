
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

#include "rna_render.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_RenderEngine_rna_type;
CollectionPropertyRNA rna_RenderEngine_rna_properties;
StringPropertyRNA rna_RenderEngine_bl_idname;
StringPropertyRNA rna_RenderEngine_bl_label;
BooleanPropertyRNA rna_RenderEngine_bl_use_postprocess;
BooleanPropertyRNA rna_RenderEngine_bl_use_preview;

extern FunctionRNA rna_RenderEngine_render_func;
extern PointerPropertyRNA rna_RenderEngine_render_scene;

extern FunctionRNA rna_RenderEngine_begin_result_func;
extern IntPropertyRNA rna_RenderEngine_begin_result_x;
extern IntPropertyRNA rna_RenderEngine_begin_result_y;
extern IntPropertyRNA rna_RenderEngine_begin_result_w;
extern IntPropertyRNA rna_RenderEngine_begin_result_h;
extern PointerPropertyRNA rna_RenderEngine_begin_result_result;

extern FunctionRNA rna_RenderEngine_update_result_func;
extern PointerPropertyRNA rna_RenderEngine_update_result_result;

extern FunctionRNA rna_RenderEngine_end_result_func;
extern PointerPropertyRNA rna_RenderEngine_end_result_result;

extern FunctionRNA rna_RenderEngine_test_break_func;
extern BooleanPropertyRNA rna_RenderEngine_test_break_do_break;

extern FunctionRNA rna_RenderEngine_update_stats_func;
extern StringPropertyRNA rna_RenderEngine_update_stats_stats;
extern StringPropertyRNA rna_RenderEngine_update_stats_info;



PointerPropertyRNA rna_RenderLayer_rna_type;
StringPropertyRNA rna_RenderLayer_name;
BooleanPropertyRNA rna_RenderLayer_use_pass_ambient_occlusion;
BooleanPropertyRNA rna_RenderLayer_exclude_ambient_occlusion;
BooleanPropertyRNA rna_RenderLayer_use_all_z;
BooleanPropertyRNA rna_RenderLayer_use_pass_color;
BooleanPropertyRNA rna_RenderLayer_use_pass_combined;
BooleanPropertyRNA rna_RenderLayer_use_pass_diffuse;
BooleanPropertyRNA rna_RenderLayer_use_edge_enhance;
BooleanPropertyRNA rna_RenderLayer_use_pass_emit;
BooleanPropertyRNA rna_RenderLayer_exclude_emit;
BooleanPropertyRNA rna_RenderLayer_use;
BooleanPropertyRNA rna_RenderLayer_use_pass_environment;
BooleanPropertyRNA rna_RenderLayer_exclude_environment;
BooleanPropertyRNA rna_RenderLayer_use_halo;
BooleanPropertyRNA rna_RenderLayer_use_pass_indirect;
BooleanPropertyRNA rna_RenderLayer_exclude_indirect;
PointerPropertyRNA rna_RenderLayer_light_override;
PointerPropertyRNA rna_RenderLayer_material_override;
BooleanPropertyRNA rna_RenderLayer_use_pass_mist;
BooleanPropertyRNA rna_RenderLayer_use_pass_normal;
BooleanPropertyRNA rna_RenderLayer_use_pass_object_index;
CollectionPropertyRNA rna_RenderLayer_rna_properties;
BooleanPropertyRNA rna_RenderLayer_use_pass_reflection;
BooleanPropertyRNA rna_RenderLayer_exclude_reflection;
BooleanPropertyRNA rna_RenderLayer_use_pass_refraction;
BooleanPropertyRNA rna_RenderLayer_exclude_refraction;
BooleanPropertyRNA rna_RenderLayer_use_pass_shadow;
BooleanPropertyRNA rna_RenderLayer_exclude_shadow;
BooleanPropertyRNA rna_RenderLayer_use_sky;
BooleanPropertyRNA rna_RenderLayer_use_solid;
BooleanPropertyRNA rna_RenderLayer_use_pass_specular;
BooleanPropertyRNA rna_RenderLayer_exclude_specular;
BooleanPropertyRNA rna_RenderLayer_use_strand;
BooleanPropertyRNA rna_RenderLayer_use_pass_uv;
BooleanPropertyRNA rna_RenderLayer_use_pass_vector;
BooleanPropertyRNA rna_RenderLayer_layers;
BooleanPropertyRNA rna_RenderLayer_use_pass_z;
BooleanPropertyRNA rna_RenderLayer_use_ztransp;
BooleanPropertyRNA rna_RenderLayer_use_zmask;
BooleanPropertyRNA rna_RenderLayer_layers_zmask;
BooleanPropertyRNA rna_RenderLayer_invert_zmask;
CollectionPropertyRNA rna_RenderLayer_passes;
FloatPropertyRNA rna_RenderLayer_rect;

extern FunctionRNA rna_RenderLayer_load_from_file_func;
extern StringPropertyRNA rna_RenderLayer_load_from_file_filename;
extern IntPropertyRNA rna_RenderLayer_load_from_file_x;
extern IntPropertyRNA rna_RenderLayer_load_from_file_y;



PointerPropertyRNA rna_RenderPass_rna_type;
StringPropertyRNA rna_RenderPass_name;
CollectionPropertyRNA rna_RenderPass_rna_properties;
StringPropertyRNA rna_RenderPass_channel_id;
IntPropertyRNA rna_RenderPass_channels;
FloatPropertyRNA rna_RenderPass_rect;
EnumPropertyRNA rna_RenderPass_type;


PointerPropertyRNA rna_RenderResult_rna_type;
CollectionPropertyRNA rna_RenderResult_rna_properties;
CollectionPropertyRNA rna_RenderResult_layers;
IntPropertyRNA rna_RenderResult_resolution_x;
IntPropertyRNA rna_RenderResult_resolution_y;

extern FunctionRNA rna_RenderResult_load_from_file_func;
extern StringPropertyRNA rna_RenderResult_load_from_file_filename;


PointerRNA RenderEngine_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA RenderEngine_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderEngine_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_RenderEngine_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= RenderEngine_rna_properties_get(iter);
}

void RenderEngine_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= RenderEngine_rna_properties_get(iter);
}

void RenderEngine_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void RenderEngine_bl_idname_get(PointerRNA *ptr, char *value)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	BLI_strncpy(value, data->type->idname, sizeof(data->type->idname));
}

int RenderEngine_bl_idname_length(PointerRNA *ptr)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	return strlen(data->type->idname);
}

void RenderEngine_bl_idname_set(PointerRNA *ptr, const char *value)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	BLI_strncpy(data->type->idname, value, sizeof(data->type->idname));
}

void RenderEngine_bl_label_get(PointerRNA *ptr, char *value)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	BLI_strncpy(value, data->type->name, sizeof(data->type->name));
}

int RenderEngine_bl_label_length(PointerRNA *ptr)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	return strlen(data->type->name);
}

void RenderEngine_bl_label_set(PointerRNA *ptr, const char *value)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	BLI_strncpy(data->type->name, value, sizeof(data->type->name));
}

int RenderEngine_bl_use_postprocess_get(PointerRNA *ptr)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	return !(((data->type->flag) & 8) != 0);
}

void RenderEngine_bl_use_postprocess_set(PointerRNA *ptr, int value)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	if(!value) data->type->flag |= 8;
	else data->type->flag &= ~8;
}

int RenderEngine_bl_use_preview_get(PointerRNA *ptr)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	return (((data->type->flag) & 4) != 0);
}

void RenderEngine_bl_use_preview_set(PointerRNA *ptr, int value)
{
	RenderEngine *data= (RenderEngine*)(ptr->data);
	if(value) data->type->flag |= 4;
	else data->type->flag &= ~4;
}

PointerRNA RenderLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void RenderLayer_name_get(PointerRNA *ptr, char *value)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	BLI_strncpy(value, data->name, sizeof(data->name));
}

int RenderLayer_name_length(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return strlen(data->name);
}

int RenderLayer_use_pass_ambient_occlusion_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 64) != 0);
}

int RenderLayer_exclude_ambient_occlusion_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 64) != 0);
}

int RenderLayer_use_all_z_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 32768) != 0);
}

int RenderLayer_use_pass_color_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 4) != 0);
}

int RenderLayer_use_pass_combined_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 1) != 0);
}

int RenderLayer_use_pass_diffuse_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 8) != 0);
}

int RenderLayer_use_edge_enhance_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 8) != 0);
}

int RenderLayer_use_pass_emit_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 65536) != 0);
}

int RenderLayer_exclude_emit_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 65536) != 0);
}

int RenderLayer_use_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return !(((data->layflag) & 131072) != 0);
}

int RenderLayer_use_pass_environment_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 131072) != 0);
}

int RenderLayer_exclude_environment_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 131072) != 0);
}

int RenderLayer_use_halo_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 4) != 0);
}

int RenderLayer_use_pass_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 8192) != 0);
}

int RenderLayer_exclude_indirect_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 8192) != 0);
}

PointerRNA RenderLayer_light_override_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Group, data->light_override);
}

PointerRNA RenderLayer_material_override_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Material, data->mat_override);
}

int RenderLayer_use_pass_mist_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 16384) != 0);
}

int RenderLayer_use_pass_normal_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 256) != 0);
}

int RenderLayer_use_pass_object_index_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 2048) != 0);
}

static PointerRNA RenderLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_RenderLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= RenderLayer_rna_properties_get(iter);
}

void RenderLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= RenderLayer_rna_properties_get(iter);
}

void RenderLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderLayer_use_pass_reflection_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 128) != 0);
}

int RenderLayer_exclude_reflection_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 128) != 0);
}

int RenderLayer_use_pass_refraction_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 1024) != 0);
}

int RenderLayer_exclude_refraction_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 1024) != 0);
}

int RenderLayer_use_pass_shadow_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 32) != 0);
}

int RenderLayer_exclude_shadow_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 32) != 0);
}

int RenderLayer_use_sky_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 16) != 0);
}

int RenderLayer_use_solid_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 1) != 0);
}

int RenderLayer_use_pass_specular_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 16) != 0);
}

int RenderLayer_exclude_specular_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->pass_xor) & 16) != 0);
}

int RenderLayer_use_strand_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 32) != 0);
}

int RenderLayer_use_pass_uv_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 4096) != 0);
}

int RenderLayer_use_pass_vector_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 512) != 0);
}

void RenderLayer_layers_get(PointerRNA *ptr, int values[20])
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	int i;

	for(i=0; i<20; i++) {
		values[i]= ((data->lay & (1<<i)) != 0);
	}
}

int RenderLayer_use_pass_z_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->passflag) & 2) != 0);
}

int RenderLayer_use_ztransp_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 2) != 0);
}

int RenderLayer_use_zmask_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 262144) != 0);
}

void RenderLayer_layers_zmask_get(PointerRNA *ptr, int values[20])
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	int i;

	for(i=0; i<20; i++) {
		values[i]= ((data->lay_zmask & (1<<i)) != 0);
	}
}

int RenderLayer_invert_zmask_get(PointerRNA *ptr)
{
	RenderLayer *data= (RenderLayer*)(ptr->data);
	return (((data->layflag) & 524288) != 0);
}

static PointerRNA RenderLayer_passes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderPass, rna_iterator_listbase_get(iter));
}

void RenderLayer_passes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_RenderLayer_passes;

	rna_RenderLayer_passes_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= RenderLayer_passes_get(iter);
}

void RenderLayer_passes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= RenderLayer_passes_get(iter);
}

void RenderLayer_passes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void RenderLayer_rect_get(PointerRNA *ptr, float values[])
{
	rna_RenderLayer_rect_get(ptr, values);
}

void RenderLayer_rect_set(PointerRNA *ptr, const float values[])
{
	rna_RenderLayer_rect_set(ptr, values);
}

PointerRNA RenderPass_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void RenderPass_name_get(PointerRNA *ptr, char *value)
{
	RenderPass *data= (RenderPass*)(ptr->data);
	BLI_strncpy(value, data->name, sizeof(data->name));
}

int RenderPass_name_length(PointerRNA *ptr)
{
	RenderPass *data= (RenderPass*)(ptr->data);
	return strlen(data->name);
}

static PointerRNA RenderPass_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderPass_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_RenderPass_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= RenderPass_rna_properties_get(iter);
}

void RenderPass_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= RenderPass_rna_properties_get(iter);
}

void RenderPass_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

void RenderPass_channel_id_get(PointerRNA *ptr, char *value)
{
	RenderPass *data= (RenderPass*)(ptr->data);
	BLI_strncpy(value, data->chan_id, sizeof(data->chan_id));
}

int RenderPass_channel_id_length(PointerRNA *ptr)
{
	RenderPass *data= (RenderPass*)(ptr->data);
	return strlen(data->chan_id);
}

int RenderPass_channels_get(PointerRNA *ptr)
{
	RenderPass *data= (RenderPass*)(ptr->data);
	return (int)(data->channels);
}

void RenderPass_rect_get(PointerRNA *ptr, float values[])
{
	rna_RenderPass_rect_get(ptr, values);
}

void RenderPass_rect_set(PointerRNA *ptr, const float values[])
{
	rna_RenderPass_rect_set(ptr, values);
}

int RenderPass_type_get(PointerRNA *ptr)
{
	RenderPass *data= (RenderPass*)(ptr->data);
	return (int)(data->passtype);
}

PointerRNA RenderResult_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA RenderResult_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void RenderResult_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_RenderResult_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= RenderResult_rna_properties_get(iter);
}

void RenderResult_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= RenderResult_rna_properties_get(iter);
}

void RenderResult_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA RenderResult_layers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_RenderLayer, rna_iterator_listbase_get(iter));
}

void RenderResult_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_RenderResult_layers;

	rna_RenderResult_layers_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= RenderResult_layers_get(iter);
}

void RenderResult_layers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= RenderResult_layers_get(iter);
}

void RenderResult_layers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int RenderResult_resolution_x_get(PointerRNA *ptr)
{
	RenderResult *data= (RenderResult*)(ptr->data);
	return (int)(data->rectx);
}

int RenderResult_resolution_y_get(PointerRNA *ptr)
{
	RenderResult *data= (RenderResult*)(ptr->data);
	return (int)(data->recty);
}

void RenderEngine_begin_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int x;
	int y;
	int w;
	int h;
	struct RenderResult *result;
	char *_data, *_retdata;
	
	_self= (struct RenderEngine *)_ptr->data;
	_data= (char *)_parms->data;
	x= *((int*)_data);
	_data+= 4;
	y= *((int*)_data);
	_data+= 4;
	w= *((int*)_data);
	_data+= 4;
	h= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	result= RE_engine_begin_result(_self, x, y, w, h);
	*((struct RenderResult**)_retdata)= result;
}

void RenderEngine_update_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct RenderResult *result;
	char *_data;
	
	_self= (struct RenderEngine *)_ptr->data;
	_data= (char *)_parms->data;
	result= *((struct RenderResult**)_data);
	
	RE_engine_update_result(_self, result);
}

void RenderEngine_end_result_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	struct RenderResult *result;
	char *_data;
	
	_self= (struct RenderEngine *)_ptr->data;
	_data= (char *)_parms->data;
	result= *((struct RenderResult**)_data);
	
	RE_engine_end_result(_self, result);
}

void RenderEngine_test_break_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	int do_break;
	char *_data, *_retdata;
	
	_self= (struct RenderEngine *)_ptr->data;
	_data= (char *)_parms->data;
	_retdata= _data;
	
	do_break= RE_engine_test_break(_self);
	*((int*)_retdata)= do_break;
}

void RenderEngine_update_stats_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderEngine *_self;
	const char* stats;
	const char* info;
	char *_data;
	
	_self= (struct RenderEngine *)_ptr->data;
	_data= (char *)_parms->data;
	stats= *((const char**)_data);
	_data+= 4;
	info= *((const char**)_data);
	
	RE_engine_update_stats(_self, stats, info);
}

/* Repeated prototypes to detect errors */

struct RenderResult *RE_engine_begin_result(struct RenderEngine *_self, int x, int y, int w, int h);
void RE_engine_update_result(struct RenderEngine *_self, struct RenderResult *result);
void RE_engine_end_result(struct RenderEngine *_self, struct RenderResult *result);
int RE_engine_test_break(struct RenderEngine *_self);
void RE_engine_update_stats(struct RenderEngine *_self, const char* stats, const char* info);

void RenderLayer_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderLayer *_self;
	const char* filename;
	int x;
	int y;
	char *_data;
	
	_self= (struct RenderLayer *)_ptr->data;
	_data= (char *)_parms->data;
	filename= *((const char**)_data);
	_data+= 4;
	x= *((int*)_data);
	_data+= 4;
	y= *((int*)_data);
	
	RE_layer_load_from_file(_self, reports, filename, x, y);
}

/* Repeated prototypes to detect errors */

void RE_layer_load_from_file(struct RenderLayer *_self, ReportList *reports, const char* filename, int x, int y);


void RenderResult_load_from_file_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct RenderResult *_self;
	const char* filename;
	char *_data;
	
	_self= (struct RenderResult *)_ptr->data;
	_data= (char *)_parms->data;
	filename= *((const char**)_data);
	
	RE_result_load_from_file(_self, reports, filename);
}

/* Repeated prototypes to detect errors */

void RE_result_load_from_file(struct RenderResult *_self, ReportList *reports, const char* filename);

/* Render Engine */
PointerPropertyRNA rna_RenderEngine_rna_type = {
	{(PropertyRNA*)&rna_RenderEngine_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_RenderEngine_rna_properties = {
	{(PropertyRNA*)&rna_RenderEngine_bl_idname, (PropertyRNA*)&rna_RenderEngine_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_rna_properties_begin, RenderEngine_rna_properties_next, RenderEngine_rna_properties_end, RenderEngine_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_RenderEngine_bl_idname = {
	{(PropertyRNA*)&rna_RenderEngine_bl_label, (PropertyRNA*)&rna_RenderEngine_rna_properties,
	-1, "bl_idname", 67108881, "bl_idname",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_idname_get, RenderEngine_bl_idname_length, RenderEngine_bl_idname_set, 0, ""
};

StringPropertyRNA rna_RenderEngine_bl_label = {
	{(PropertyRNA*)&rna_RenderEngine_bl_use_postprocess, (PropertyRNA*)&rna_RenderEngine_bl_idname,
	-1, "bl_label", 17, "bl_label",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_label_get, RenderEngine_bl_label_length, RenderEngine_bl_label_set, 0, ""
};

BooleanPropertyRNA rna_RenderEngine_bl_use_postprocess = {
	{(PropertyRNA*)&rna_RenderEngine_bl_use_preview, (PropertyRNA*)&rna_RenderEngine_bl_label,
	-1, "bl_use_postprocess", 51, "bl_use_postprocess",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_postprocess_get, RenderEngine_bl_use_postprocess_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderEngine_bl_use_preview = {
	{NULL, (PropertyRNA*)&rna_RenderEngine_bl_use_postprocess,
	-1, "bl_use_preview", 51, "bl_use_preview",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderEngine_bl_use_preview_get, RenderEngine_bl_use_preview_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_render_scene = {
	{NULL, NULL,
	-1, "scene", 0, "",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_RenderEngine_render_func = {
	{(FunctionRNA*)&rna_RenderEngine_begin_result_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_RenderEngine_render_scene, (PropertyRNA*)&rna_RenderEngine_render_scene}},
	"render", 8, "Render scene into an image.",
	NULL,
	NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_x = {
	{(PropertyRNA*)&rna_RenderEngine_begin_result_y, NULL,
	-1, "x", 7, "X",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_y = {
	{(PropertyRNA*)&rna_RenderEngine_begin_result_w, (PropertyRNA*)&rna_RenderEngine_begin_result_x,
	-1, "y", 7, "Y",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_w = {
	{(PropertyRNA*)&rna_RenderEngine_begin_result_h, (PropertyRNA*)&rna_RenderEngine_begin_result_y,
	-1, "w", 7, "Width",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderEngine_begin_result_h = {
	{(PropertyRNA*)&rna_RenderEngine_begin_result_result, (PropertyRNA*)&rna_RenderEngine_begin_result_w,
	-1, "h", 7, "Height",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

PointerPropertyRNA rna_RenderEngine_begin_result_result = {
	{NULL, (PropertyRNA*)&rna_RenderEngine_begin_result_h,
	-1, "result", 8, "Result",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_begin_result_func = {
	{(FunctionRNA*)&rna_RenderEngine_update_result_func, (FunctionRNA*)&rna_RenderEngine_render_func,
	NULL,
	{(PropertyRNA*)&rna_RenderEngine_begin_result_x, (PropertyRNA*)&rna_RenderEngine_begin_result_result}},
	"begin_result", 0, "begin_result",
	RenderEngine_begin_result_call,
	(PropertyRNA*)&rna_RenderEngine_begin_result_result
};

PointerPropertyRNA rna_RenderEngine_update_result_result = {
	{NULL, NULL,
	-1, "result", 4, "Result",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_update_result_func = {
	{(FunctionRNA*)&rna_RenderEngine_end_result_func, (FunctionRNA*)&rna_RenderEngine_begin_result_func,
	NULL,
	{(PropertyRNA*)&rna_RenderEngine_update_result_result, (PropertyRNA*)&rna_RenderEngine_update_result_result}},
	"update_result", 0, "update_result",
	RenderEngine_update_result_call,
	NULL
};

PointerPropertyRNA rna_RenderEngine_end_result_result = {
	{NULL, NULL,
	-1, "result", 4, "Result",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_RenderResult
};

FunctionRNA rna_RenderEngine_end_result_func = {
	{(FunctionRNA*)&rna_RenderEngine_test_break_func, (FunctionRNA*)&rna_RenderEngine_update_result_func,
	NULL,
	{(PropertyRNA*)&rna_RenderEngine_end_result_result, (PropertyRNA*)&rna_RenderEngine_end_result_result}},
	"end_result", 0, "end_result",
	RenderEngine_end_result_call,
	NULL
};

BooleanPropertyRNA rna_RenderEngine_test_break_do_break = {
	{NULL, NULL,
	-1, "do_break", 11, "Break",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_RenderEngine_test_break_func = {
	{(FunctionRNA*)&rna_RenderEngine_update_stats_func, (FunctionRNA*)&rna_RenderEngine_end_result_func,
	NULL,
	{(PropertyRNA*)&rna_RenderEngine_test_break_do_break, (PropertyRNA*)&rna_RenderEngine_test_break_do_break}},
	"test_break", 0, "test_break",
	RenderEngine_test_break_call,
	(PropertyRNA*)&rna_RenderEngine_test_break_do_break
};

StringPropertyRNA rna_RenderEngine_update_stats_stats = {
	{(PropertyRNA*)&rna_RenderEngine_update_stats_info, NULL,
	-1, "stats", 5, "Stats",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

StringPropertyRNA rna_RenderEngine_update_stats_info = {
	{NULL, (PropertyRNA*)&rna_RenderEngine_update_stats_stats,
	-1, "info", 5, "Info",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

FunctionRNA rna_RenderEngine_update_stats_func = {
	{NULL, (FunctionRNA*)&rna_RenderEngine_test_break_func,
	NULL,
	{(PropertyRNA*)&rna_RenderEngine_update_stats_stats, (PropertyRNA*)&rna_RenderEngine_update_stats_info}},
	"update_stats", 0, "update_stats",
	RenderEngine_update_stats_call,
	NULL
};

StructRNA RNA_RenderEngine = {
	{(ContainerRNA *)&RNA_RenderLayer, (ContainerRNA *)&RNA_RegionView3D,
	NULL,
	{(PropertyRNA*)&rna_RenderEngine_rna_type, (PropertyRNA*)&rna_RenderEngine_bl_use_preview}},
	"RenderEngine"	, NULL,NULL
, 0, "Render Engine", "Render engine",
	17,
	NULL, (PropertyRNA*)&rna_RenderEngine_rna_properties,
	NULL,
	NULL,
	rna_RenderEngine_refine,
	NULL,
	rna_RenderEngine_register,
	rna_RenderEngine_unregister,
	NULL,
	{(FunctionRNA*)&rna_RenderEngine_render_func, (FunctionRNA*)&rna_RenderEngine_update_stats_func}
};

/* Render Layer */
PointerPropertyRNA rna_RenderLayer_rna_type = {
	{(PropertyRNA*)&rna_RenderLayer_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderLayer_name = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_ambient_occlusion, (PropertyRNA*)&rna_RenderLayer_rna_type,
	-1, "name", 0, "Name",
	"Render layer name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_name_get, RenderLayer_name_length, NULL, 0, ""
};

BooleanPropertyRNA rna_RenderLayer_use_pass_ambient_occlusion = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_ambient_occlusion, (PropertyRNA*)&rna_RenderLayer_name,
	-1, "use_pass_ambient_occlusion", 2, "AO",
	"Deliver AO pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_ambient_occlusion_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_ambient_occlusion = {
	{(PropertyRNA*)&rna_RenderLayer_use_all_z, (PropertyRNA*)&rna_RenderLayer_use_pass_ambient_occlusion,
	-1, "exclude_ambient_occlusion", 4098, "AO Exclude",
	"Exclude AO pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_ambient_occlusion_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_all_z = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_color, (PropertyRNA*)&rna_RenderLayer_exclude_ambient_occlusion,
	-1, "use_all_z", 2, "All Z",
	"Fill in Z values for solid faces in invisible layers, for masking",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_all_z_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_color = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_combined, (PropertyRNA*)&rna_RenderLayer_use_all_z,
	-1, "use_pass_color", 2, "Color",
	"Deliver shade-less color pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_color_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_combined = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_diffuse, (PropertyRNA*)&rna_RenderLayer_use_pass_color,
	-1, "use_pass_combined", 2, "Combined",
	"Deliver full combined RGBA buffer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_combined_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_diffuse = {
	{(PropertyRNA*)&rna_RenderLayer_use_edge_enhance, (PropertyRNA*)&rna_RenderLayer_use_pass_combined,
	-1, "use_pass_diffuse", 2, "Diffuse",
	"Deliver diffuse pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_diffuse_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_edge_enhance = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_emit, (PropertyRNA*)&rna_RenderLayer_use_pass_diffuse,
	-1, "use_edge_enhance", 2, "Edge",
	"Render Edge-enhance in this Layer (only works for Solid faces)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_edge_enhance_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_emit = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_emit, (PropertyRNA*)&rna_RenderLayer_use_edge_enhance,
	-1, "use_pass_emit", 2, "Emit",
	"Deliver emission pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_emit_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_emit = {
	{(PropertyRNA*)&rna_RenderLayer_use, (PropertyRNA*)&rna_RenderLayer_use_pass_emit,
	-1, "exclude_emit", 4098, "Emit Exclude",
	"Exclude emission pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_emit_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_environment, (PropertyRNA*)&rna_RenderLayer_exclude_emit,
	-1, "use", 2, "Enabled",
	"Disable or enable the render layer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_environment = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_environment, (PropertyRNA*)&rna_RenderLayer_use,
	-1, "use_pass_environment", 2, "Environment",
	"Deliver environment lighting pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_environment_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_environment = {
	{(PropertyRNA*)&rna_RenderLayer_use_halo, (PropertyRNA*)&rna_RenderLayer_use_pass_environment,
	-1, "exclude_environment", 4098, "Environment Exclude",
	"Exclude environment pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_environment_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_halo = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_indirect, (PropertyRNA*)&rna_RenderLayer_exclude_environment,
	-1, "use_halo", 2, "Halo",
	"Render Halos in this Layer (on top of Solid)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_halo_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_indirect = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_indirect, (PropertyRNA*)&rna_RenderLayer_use_halo,
	-1, "use_pass_indirect", 2, "Indirect",
	"Deliver indirect lighting pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_indirect_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_indirect = {
	{(PropertyRNA*)&rna_RenderLayer_light_override, (PropertyRNA*)&rna_RenderLayer_use_pass_indirect,
	-1, "exclude_indirect", 4098, "Indirect Exclude",
	"Exclude indirect pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_indirect_get, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_RenderLayer_light_override = {
	{(PropertyRNA*)&rna_RenderLayer_material_override, (PropertyRNA*)&rna_RenderLayer_exclude_indirect,
	-1, "light_override", 0, "Light Override",
	"Group to override all other lights in this render layer",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_light_override_get, NULL, NULL, NULL,&RNA_Group
};

PointerPropertyRNA rna_RenderLayer_material_override = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_mist, (PropertyRNA*)&rna_RenderLayer_light_override,
	-1, "material_override", 0, "Material Override",
	"Material to override all other materials in this render layer",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_material_override_get, NULL, NULL, NULL,&RNA_Material
};

BooleanPropertyRNA rna_RenderLayer_use_pass_mist = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_normal, (PropertyRNA*)&rna_RenderLayer_material_override,
	-1, "use_pass_mist", 2, "Mist",
	"Deliver mist factor pass (0.0-1.0)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_mist_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_normal = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_object_index, (PropertyRNA*)&rna_RenderLayer_use_pass_mist,
	-1, "use_pass_normal", 2, "Normal",
	"Deliver normal pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_normal_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_object_index = {
	{(PropertyRNA*)&rna_RenderLayer_rna_properties, (PropertyRNA*)&rna_RenderLayer_use_pass_normal,
	-1, "use_pass_object_index", 2, "Object Index",
	"Deliver object index pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_object_index_get, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_RenderLayer_rna_properties = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_reflection, (PropertyRNA*)&rna_RenderLayer_use_pass_object_index,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_rna_properties_begin, RenderLayer_rna_properties_next, RenderLayer_rna_properties_end, RenderLayer_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_RenderLayer_use_pass_reflection = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_reflection, (PropertyRNA*)&rna_RenderLayer_rna_properties,
	-1, "use_pass_reflection", 2, "Reflection",
	"Deliver raytraced reflection pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_reflection_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_reflection = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_refraction, (PropertyRNA*)&rna_RenderLayer_use_pass_reflection,
	-1, "exclude_reflection", 4098, "Reflection Exclude",
	"Exclude raytraced reflection pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_reflection_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_refraction = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_refraction, (PropertyRNA*)&rna_RenderLayer_exclude_reflection,
	-1, "use_pass_refraction", 2, "Refraction",
	"Deliver raytraced refraction pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_refraction_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_refraction = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_shadow, (PropertyRNA*)&rna_RenderLayer_use_pass_refraction,
	-1, "exclude_refraction", 4098, "Refraction Exclude",
	"Exclude raytraced refraction pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_refraction_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_shadow = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_shadow, (PropertyRNA*)&rna_RenderLayer_exclude_refraction,
	-1, "use_pass_shadow", 2, "Shadow",
	"Deliver shadow pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_shadow_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_shadow = {
	{(PropertyRNA*)&rna_RenderLayer_use_sky, (PropertyRNA*)&rna_RenderLayer_use_pass_shadow,
	-1, "exclude_shadow", 4098, "Shadow Exclude",
	"Exclude shadow pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_shadow_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_sky = {
	{(PropertyRNA*)&rna_RenderLayer_use_solid, (PropertyRNA*)&rna_RenderLayer_exclude_shadow,
	-1, "use_sky", 2, "Sky",
	"Render Sky in this Layer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_sky_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_solid = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_specular, (PropertyRNA*)&rna_RenderLayer_use_sky,
	-1, "use_solid", 2, "Solid",
	"Render Solid faces in this Layer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_solid_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_specular = {
	{(PropertyRNA*)&rna_RenderLayer_exclude_specular, (PropertyRNA*)&rna_RenderLayer_use_solid,
	-1, "use_pass_specular", 2, "Specular",
	"Deliver specular pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_specular_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_exclude_specular = {
	{(PropertyRNA*)&rna_RenderLayer_use_strand, (PropertyRNA*)&rna_RenderLayer_use_pass_specular,
	-1, "exclude_specular", 4098, "Specular Exclude",
	"Exclude specular pass from combined",
	257,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_exclude_specular_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_strand = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_uv, (PropertyRNA*)&rna_RenderLayer_exclude_specular,
	-1, "use_strand", 2, "Strand",
	"Render Strands in this Layer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_strand_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_uv = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_vector, (PropertyRNA*)&rna_RenderLayer_use_strand,
	-1, "use_pass_uv", 2, "UV",
	"Deliver texture UV pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_uv_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_pass_vector = {
	{(PropertyRNA*)&rna_RenderLayer_layers, (PropertyRNA*)&rna_RenderLayer_use_pass_uv,
	-1, "use_pass_vector", 2, "Vector",
	"Deliver speed vector pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_vector_get, NULL, NULL, NULL, 0, NULL
};

static int rna_RenderLayer_layers_default[20] = {
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

BooleanPropertyRNA rna_RenderLayer_layers = {
	{(PropertyRNA*)&rna_RenderLayer_use_pass_z, (PropertyRNA*)&rna_RenderLayer_use_pass_vector,
	-1, "layers", 2, "Visible Layers",
	"Scene layers included in this render layer",
	0,
	PROP_BOOLEAN, PROP_LAYER_MEMBER|PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderLayer_layers_get, NULL, 0, rna_RenderLayer_layers_default
};

BooleanPropertyRNA rna_RenderLayer_use_pass_z = {
	{(PropertyRNA*)&rna_RenderLayer_use_ztransp, (PropertyRNA*)&rna_RenderLayer_layers,
	-1, "use_pass_z", 2, "Z",
	"Deliver Z values pass",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_pass_z_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_ztransp = {
	{(PropertyRNA*)&rna_RenderLayer_use_zmask, (PropertyRNA*)&rna_RenderLayer_use_pass_z,
	-1, "use_ztransp", 2, "ZTransp",
	"Render Z-Transparent faces in this Layer (On top of Solid and Halos)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_ztransp_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_RenderLayer_use_zmask = {
	{(PropertyRNA*)&rna_RenderLayer_layers_zmask, (PropertyRNA*)&rna_RenderLayer_use_ztransp,
	-1, "use_zmask", 2, "Zmask",
	"Only render what\'s in front of the solid z values",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_use_zmask_get, NULL, NULL, NULL, 0, NULL
};

static int rna_RenderLayer_layers_zmask_default[20] = {
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

BooleanPropertyRNA rna_RenderLayer_layers_zmask = {
	{(PropertyRNA*)&rna_RenderLayer_invert_zmask, (PropertyRNA*)&rna_RenderLayer_use_zmask,
	-1, "layers_zmask", 2, "Zmask Layers",
	"Zmask scene layers",
	0,
	PROP_BOOLEAN, PROP_LAYER|PROP_UNIT_NONE, NULL, 1, {20, 0, 0}, 20,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderLayer_layers_zmask_get, NULL, 0, rna_RenderLayer_layers_zmask_default
};

BooleanPropertyRNA rna_RenderLayer_invert_zmask = {
	{(PropertyRNA*)&rna_RenderLayer_passes, (PropertyRNA*)&rna_RenderLayer_layers_zmask,
	-1, "invert_zmask", 2, "Zmask Negate",
	"For Zmask, only render what is behind solid z values instead of in front",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_invert_zmask_get, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_RenderLayer_passes = {
	{(PropertyRNA*)&rna_RenderLayer_rect, (PropertyRNA*)&rna_RenderLayer_invert_zmask,
	-1, "passes", 0, "passes",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderLayer_passes_begin, RenderLayer_passes_next, RenderLayer_passes_end, RenderLayer_passes_get, NULL, NULL, NULL, &RNA_RenderPass
};

FloatPropertyRNA rna_RenderLayer_rect = {
	{NULL, (PropertyRNA*)&rna_RenderLayer_passes,
	-1, "rect", 131075, "rect",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, rna_RenderLayer_rect_get_length, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderLayer_rect_get, RenderLayer_rect_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

StringPropertyRNA rna_RenderLayer_load_from_file_filename = {
	{(PropertyRNA*)&rna_RenderLayer_load_from_file_x, NULL,
	-1, "filename", 5, "Filename",
	"Filename to load into this render tile, must be no smaller then the renderlayer",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, ""
};

IntPropertyRNA rna_RenderLayer_load_from_file_x = {
	{(PropertyRNA*)&rna_RenderLayer_load_from_file_y, (PropertyRNA*)&rna_RenderLayer_load_from_file_filename,
	-1, "x", 3, "Offset X",
	"Offset the position to copy from if the image is larger then the render layer",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderLayer_load_from_file_y = {
	{NULL, (PropertyRNA*)&rna_RenderLayer_load_from_file_x,
	-1, "y", 3, "Offset Y",
	"Offset the position to copy from if the image is larger then the render layer",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 0, INT_MAX, 1, 0, NULL
};

FunctionRNA rna_RenderLayer_load_from_file_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_RenderLayer_load_from_file_filename, (PropertyRNA*)&rna_RenderLayer_load_from_file_y}},
	"load_from_file", 4, "Copies the pixels of this renderlayer from an image file.",
	RenderLayer_load_from_file_call,
	NULL
};

StructRNA RNA_RenderLayer = {
	{(ContainerRNA *)&RNA_RenderLayers, (ContainerRNA *)&RNA_RenderEngine,
	NULL,
	{(PropertyRNA*)&rna_RenderLayer_rna_type, (PropertyRNA*)&rna_RenderLayer_rect}},
	"RenderLayer"	, NULL,NULL
, 0, "Render Layer", "",
	17,
	(PropertyRNA*)&rna_RenderLayer_name, (PropertyRNA*)&rna_RenderLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_RenderLayer_load_from_file_func, (FunctionRNA*)&rna_RenderLayer_load_from_file_func}
};

/* Render Pass */
PointerPropertyRNA rna_RenderPass_rna_type = {
	{(PropertyRNA*)&rna_RenderPass_name, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_RenderPass_name = {
	{(PropertyRNA*)&rna_RenderPass_rna_properties, (PropertyRNA*)&rna_RenderPass_rna_type,
	-1, "name", 0, "name",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_name_get, RenderPass_name_length, NULL, 0, ""
};

CollectionPropertyRNA rna_RenderPass_rna_properties = {
	{(PropertyRNA*)&rna_RenderPass_channel_id, (PropertyRNA*)&rna_RenderPass_name,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_rna_properties_begin, RenderPass_rna_properties_next, RenderPass_rna_properties_end, RenderPass_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_RenderPass_channel_id = {
	{(PropertyRNA*)&rna_RenderPass_channels, (PropertyRNA*)&rna_RenderPass_rna_properties,
	-1, "channel_id", 0, "channel_id",
	"",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_channel_id_get, RenderPass_channel_id_length, NULL, 0, ""
};

IntPropertyRNA rna_RenderPass_channels = {
	{(PropertyRNA*)&rna_RenderPass_rect, (PropertyRNA*)&rna_RenderPass_channel_id,
	-1, "channels", 2, "channels",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_channels_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_RenderPass_rect = {
	{(PropertyRNA*)&rna_RenderPass_type, (PropertyRNA*)&rna_RenderPass_channels,
	-1, "rect", 131075, "rect",
	"",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, rna_RenderPass_rect_get_length, 2, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, RenderPass_rect_get, RenderPass_rect_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

static EnumPropertyItem rna_RenderPass_type_items[17] = {
	{1, "COMBINED", 0, "Combined", ""},
	{2, "Z", 0, "Z", ""},
	{4, "COLOR", 0, "Color", ""},
	{8, "DIFFUSE", 0, "Diffuse", ""},
	{16, "SPECULAR", 0, "Specular", ""},
	{32, "SHADOW", 0, "Shadow", ""},
	{64, "AO", 0, "AO", ""},
	{128, "REFLECTION", 0, "Reflection", ""},
	{256, "NORMAL", 0, "Normal", ""},
	{512, "VECTOR", 0, "Vector", ""},
	{1024, "REFRACTION", 0, "Refraction", ""},
	{2048, "OBJECT_INDEX", 0, "Object Index", ""},
	{4096, "UV", 0, "UV", ""},
	{16384, "MIST", 0, "Mist", ""},
	{65536, "EMIT", 0, "Emit", ""},
	{131072, "ENVIRONMENT", 0, "Environment", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_RenderPass_type = {
	{NULL, (PropertyRNA*)&rna_RenderPass_rect,
	-1, "type", 2, "type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderPass_type_get, NULL, NULL, rna_RenderPass_type_items, 16, 1
};

StructRNA RNA_RenderPass = {
	{(ContainerRNA *)&RNA_RenderResult, (ContainerRNA *)&RNA_RenderLayers,
	NULL,
	{(PropertyRNA*)&rna_RenderPass_rna_type, (PropertyRNA*)&rna_RenderPass_type}},
	"RenderPass"	, NULL,NULL
, 0, "Render Pass", "",
	17,
	(PropertyRNA*)&rna_RenderPass_name, (PropertyRNA*)&rna_RenderPass_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Render Result */
PointerPropertyRNA rna_RenderResult_rna_type = {
	{(PropertyRNA*)&rna_RenderResult_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_RenderResult_rna_properties = {
	{(PropertyRNA*)&rna_RenderResult_layers, (PropertyRNA*)&rna_RenderResult_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_rna_properties_begin, RenderResult_rna_properties_next, RenderResult_rna_properties_end, RenderResult_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_RenderResult_layers = {
	{(PropertyRNA*)&rna_RenderResult_resolution_x, (PropertyRNA*)&rna_RenderResult_rna_properties,
	-1, "layers", 0, "layers",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_layers_begin, RenderResult_layers_next, RenderResult_layers_end, RenderResult_layers_get, NULL, NULL, NULL, &RNA_RenderLayer
};

IntPropertyRNA rna_RenderResult_resolution_x = {
	{(PropertyRNA*)&rna_RenderResult_resolution_y, (PropertyRNA*)&rna_RenderResult_layers,
	-1, "resolution_x", 2, "resolution_x",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_resolution_x_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

IntPropertyRNA rna_RenderResult_resolution_y = {
	{NULL, (PropertyRNA*)&rna_RenderResult_resolution_x,
	-1, "resolution_y", 2, "resolution_y",
	"",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	RenderResult_resolution_y_get, NULL, NULL, NULL, NULL,
	-10000, 10000, INT_MIN, INT_MAX, 1, 0, NULL
};

StringPropertyRNA rna_RenderResult_load_from_file_filename = {
	{NULL, NULL,
	-1, "filename", 5, "File Name",
	"Filename to load into this render tile, must be no smaller then the render result",
	0,
	PROP_STRING, PROP_FILENAME|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 240, ""
};

FunctionRNA rna_RenderResult_load_from_file_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_RenderResult_load_from_file_filename, (PropertyRNA*)&rna_RenderResult_load_from_file_filename}},
	"load_from_file", 4, "Copies the pixels of this render result from an image file.",
	RenderResult_load_from_file_call,
	NULL
};

StructRNA RNA_RenderResult = {
	{(ContainerRNA *)&RNA_RenderSettings, (ContainerRNA *)&RNA_RenderPass,
	NULL,
	{(PropertyRNA*)&rna_RenderResult_rna_type, (PropertyRNA*)&rna_RenderResult_resolution_y}},
	"RenderResult"	, NULL,NULL
, 0, "Render Result", "Result of rendering, including all layers and passes",
	17,
	NULL, (PropertyRNA*)&rna_RenderResult_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_RenderResult_load_from_file_func, (FunctionRNA*)&rna_RenderResult_load_from_file_func}
};

