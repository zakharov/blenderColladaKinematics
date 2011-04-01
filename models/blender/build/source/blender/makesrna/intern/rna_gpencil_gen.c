
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

#include "rna_gpencil.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_GPencilFrame_rna_type;
IntPropertyRNA rna_GPencilFrame_frame_number;
BooleanPropertyRNA rna_GPencilFrame_is_edited;
CollectionPropertyRNA rna_GPencilFrame_rna_properties;
BooleanPropertyRNA rna_GPencilFrame_select;
CollectionPropertyRNA rna_GPencilFrame_strokes;


PointerPropertyRNA rna_GPencilLayer_rna_type;
BooleanPropertyRNA rna_GPencilLayer_active;
PointerPropertyRNA rna_GPencilLayer_active_frame;
FloatPropertyRNA rna_GPencilLayer_color;
BooleanPropertyRNA rna_GPencilLayer_lock_frame;
CollectionPropertyRNA rna_GPencilLayer_frames;
BooleanPropertyRNA rna_GPencilLayer_hide;
StringPropertyRNA rna_GPencilLayer_info;
BooleanPropertyRNA rna_GPencilLayer_lock;
IntPropertyRNA rna_GPencilLayer_ghost_range_max;
FloatPropertyRNA rna_GPencilLayer_alpha;
CollectionPropertyRNA rna_GPencilLayer_rna_properties;
BooleanPropertyRNA rna_GPencilLayer_select;
BooleanPropertyRNA rna_GPencilLayer_show_points;
IntPropertyRNA rna_GPencilLayer_line_width;
BooleanPropertyRNA rna_GPencilLayer_use_onion_skinning;


PointerPropertyRNA rna_GPencilStroke_rna_type;
CollectionPropertyRNA rna_GPencilStroke_rna_properties;
CollectionPropertyRNA rna_GPencilStroke_points;


PointerPropertyRNA rna_GPencilStrokePoint_rna_type;
FloatPropertyRNA rna_GPencilStrokePoint_co;
FloatPropertyRNA rna_GPencilStrokePoint_pressure;
CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties;


extern PointerPropertyRNA rna_ID_rna_type;
extern StringPropertyRNA rna_ID_name;
extern BooleanPropertyRNA rna_ID_use_fake_user;
extern PointerPropertyRNA rna_ID_library;
extern CollectionPropertyRNA rna_ID_rna_properties;
extern BooleanPropertyRNA rna_ID_tag;
extern IntPropertyRNA rna_ID_users;

EnumPropertyRNA rna_GreasePencil_draw_mode;
CollectionPropertyRNA rna_GreasePencil_layers;
BooleanPropertyRNA rna_GreasePencil_use_stroke_endpoints;

extern FunctionRNA rna_ID_copy_func;
extern PointerPropertyRNA rna_ID_copy_id;

extern FunctionRNA rna_ID_user_clear_func;
extern FunctionRNA rna_ID_animation_data_create_func;
extern PointerPropertyRNA rna_ID_animation_data_create_anim_data;

extern FunctionRNA rna_ID_animation_data_clear_func;
extern FunctionRNA rna_ID_update_tag_func;
extern EnumPropertyRNA rna_ID_update_tag_refresh;


PointerRNA GPencilFrame_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int GPencilFrame_frame_number_get(PointerRNA *ptr)
{
	bGPDframe *data= (bGPDframe*)(ptr->data);
	return (int)(data->framenum);
}

void GPencilFrame_frame_number_set(PointerRNA *ptr, int value)
{
	bGPDframe *data= (bGPDframe*)(ptr->data);
	data->framenum= CLAMPIS(value, 0, 300000);
}

int GPencilFrame_is_edited_get(PointerRNA *ptr)
{
	bGPDframe *data= (bGPDframe*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void GPencilFrame_is_edited_set(PointerRNA *ptr, int value)
{
	bGPDframe *data= (bGPDframe*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA GPencilFrame_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilFrame_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GPencilFrame_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= GPencilFrame_rna_properties_get(iter);
}

void GPencilFrame_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= GPencilFrame_rna_properties_get(iter);
}

void GPencilFrame_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilFrame_select_get(PointerRNA *ptr)
{
	bGPDframe *data= (bGPDframe*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void GPencilFrame_select_set(PointerRNA *ptr, int value)
{
	bGPDframe *data= (bGPDframe*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA GPencilFrame_strokes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStroke, rna_iterator_listbase_get(iter));
}

void GPencilFrame_strokes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPDframe *data= (bGPDframe*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GPencilFrame_strokes;

	rna_iterator_listbase_begin(iter, &data->strokes, NULL);

	if(iter->valid)
		iter->ptr= GPencilFrame_strokes_get(iter);
}

void GPencilFrame_strokes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= GPencilFrame_strokes_get(iter);
}

void GPencilFrame_strokes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilFrame_strokes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GPencilFrame_strokes_begin(&iter, ptr);

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
		if(found) *r_ptr = GPencilFrame_strokes_get(&iter);
	}

	GPencilFrame_strokes_end(&iter);

	return found;
}

PointerRNA GPencilLayer_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int GPencilLayer_active_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void GPencilLayer_active_set(PointerRNA *ptr, int value)
{
	rna_GPencilLayer_active_set(ptr, value);
}

PointerRNA GPencilLayer_active_frame_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_GPencilFrame, data->actframe);
}

void GPencilLayer_color_get(PointerRNA *ptr, float values[3])
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)(((float*)data->color)[i]);
	}
}

void GPencilLayer_color_set(PointerRNA *ptr, const float values[3])
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((float*)data->color)[i]= CLAMPIS(values[i], 0.0f, 1.0f);
	}
}

int GPencilLayer_lock_frame_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (((data->flag) & 64) != 0);
}

void GPencilLayer_lock_frame_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	if(value) data->flag |= 64;
	else data->flag &= ~64;
}

static PointerRNA GPencilLayer_frames_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilFrame, rna_iterator_listbase_get(iter));
}

void GPencilLayer_frames_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GPencilLayer_frames;

	rna_iterator_listbase_begin(iter, &data->frames, NULL);

	if(iter->valid)
		iter->ptr= GPencilLayer_frames_get(iter);
}

void GPencilLayer_frames_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= GPencilLayer_frames_get(iter);
}

void GPencilLayer_frames_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilLayer_frames_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GPencilLayer_frames_begin(&iter, ptr);

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
		if(found) *r_ptr = GPencilLayer_frames_get(&iter);
	}

	GPencilLayer_frames_end(&iter);

	return found;
}

int GPencilLayer_hide_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void GPencilLayer_hide_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

void GPencilLayer_info_get(PointerRNA *ptr, char *value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	BLI_strncpy(value, data->info, 128);
}

int GPencilLayer_info_length(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return strlen(data->info);
}

void GPencilLayer_info_set(PointerRNA *ptr, const char *value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	BLI_strncpy(data->info, value, 128);
}

int GPencilLayer_lock_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void GPencilLayer_lock_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int GPencilLayer_ghost_range_max_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (int)(data->gstep);
}

void GPencilLayer_ghost_range_max_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	data->gstep= CLAMPIS(value, 0, 120);
}

float GPencilLayer_alpha_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (float)(data->color[3]);
}

void GPencilLayer_alpha_set(PointerRNA *ptr, float value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	data->color[3]= CLAMPIS(value, 0.3000000119f, 1.0f);
}

static PointerRNA GPencilLayer_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilLayer_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GPencilLayer_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= GPencilLayer_rna_properties_get(iter);
}

void GPencilLayer_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= GPencilLayer_rna_properties_get(iter);
}

void GPencilLayer_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilLayer_select_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (((data->flag) & 32) != 0);
}

void GPencilLayer_select_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	if(value) data->flag |= 32;
	else data->flag &= ~32;
}

int GPencilLayer_show_points_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void GPencilLayer_show_points_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int GPencilLayer_line_width_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (int)(data->thickness);
}

void GPencilLayer_line_width_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	data->thickness= CLAMPIS(value, 1, 10);
}

int GPencilLayer_use_onion_skinning_get(PointerRNA *ptr)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void GPencilLayer_use_onion_skinning_set(PointerRNA *ptr, int value)
{
	bGPDlayer *data= (bGPDlayer*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

PointerRNA GPencilStroke_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA GPencilStroke_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilStroke_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GPencilStroke_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= GPencilStroke_rna_properties_get(iter);
}

void GPencilStroke_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= GPencilStroke_rna_properties_get(iter);
}

void GPencilStroke_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GPencilStroke_points_length(PointerRNA *ptr)
{
	bGPDstroke *data= (bGPDstroke*)(ptr->data);
	return (data->points == NULL)? 0: data->totpoints;
}

static PointerRNA GPencilStroke_points_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilStrokePoint, rna_iterator_array_get(iter));
}

void GPencilStroke_points_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPDstroke *data= (bGPDstroke*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GPencilStroke_points;

	rna_iterator_array_begin(iter, data->points, sizeof(data->points[0]), data->totpoints, 0, NULL);

	if(iter->valid)
		iter->ptr= GPencilStroke_points_get(iter);
}

void GPencilStroke_points_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if(iter->valid)
		iter->ptr= GPencilStroke_points_get(iter);
}

void GPencilStroke_points_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int GPencilStroke_points_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GPencilStroke_points_begin(&iter, ptr);

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
		if(found) *r_ptr = GPencilStroke_points_get(&iter);
	}

	GPencilStroke_points_end(&iter);

	return found;
}

PointerRNA GPencilStrokePoint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void GPencilStrokePoint_co_get(PointerRNA *ptr, float values[3])
{
	bGPDspoint *data= (bGPDspoint*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (float)((&data->x)[i]);
	}
}

void GPencilStrokePoint_co_set(PointerRNA *ptr, const float values[3])
{
	bGPDspoint *data= (bGPDspoint*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		(&data->x)[i]= values[i];
	}
}

float GPencilStrokePoint_pressure_get(PointerRNA *ptr)
{
	bGPDspoint *data= (bGPDspoint*)(ptr->data);
	return (float)(data->pressure);
}

void GPencilStrokePoint_pressure_set(PointerRNA *ptr, float value)
{
	bGPDspoint *data= (bGPDspoint*)(ptr->data);
	data->pressure= CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA GPencilStrokePoint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void GPencilStrokePoint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GPencilStrokePoint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= GPencilStrokePoint_rna_properties_get(iter);
}

void GPencilStrokePoint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= GPencilStrokePoint_rna_properties_get(iter);
}

void GPencilStrokePoint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GreasePencil_draw_mode_get(PointerRNA *ptr)
{
	bGPdata *data= (bGPdata*)(ptr->data);
	return ((data->flag) & 112);
}

void GreasePencil_draw_mode_set(PointerRNA *ptr, int value)
{
	bGPdata *data= (bGPdata*)(ptr->data);
	data->flag &= ~112;
	data->flag |= value;
}

static PointerRNA GreasePencil_layers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GPencilLayer, rna_iterator_listbase_get(iter));
}

void GreasePencil_layers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bGPdata *data= (bGPdata*)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_GreasePencil_layers;

	rna_iterator_listbase_begin(iter, &data->layers, NULL);

	if(iter->valid)
		iter->ptr= GreasePencil_layers_get(iter);
}

void GreasePencil_layers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= GreasePencil_layers_get(iter);
}

void GreasePencil_layers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int GreasePencil_layers_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found= 0;
	CollectionPropertyIterator iter;

	GreasePencil_layers_begin(&iter, ptr);

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
		if(found) *r_ptr = GreasePencil_layers_get(&iter);
	}

	GreasePencil_layers_end(&iter);

	return found;
}

int GreasePencil_use_stroke_endpoints_get(PointerRNA *ptr)
{
	bGPdata *data= (bGPdata*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void GreasePencil_use_stroke_endpoints_set(PointerRNA *ptr, int value)
{
	bGPdata *data= (bGPdata*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}






/* Grease Pencil Frame */
PointerPropertyRNA rna_GPencilFrame_rna_type = {
	{(PropertyRNA*)&rna_GPencilFrame_frame_number, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_GPencilFrame_frame_number = {
	{(PropertyRNA*)&rna_GPencilFrame_is_edited, (PropertyRNA*)&rna_GPencilFrame_rna_type,
	-1, "frame_number", 8195, "Frame Number",
	"The frame on which this sketch appears",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(bGPDframe, framenum), 0, NULL},
	GPencilFrame_frame_number_get, GPencilFrame_frame_number_set, NULL, NULL, NULL,
	0, 300000, 0, 300000, 1, 0, NULL
};

BooleanPropertyRNA rna_GPencilFrame_is_edited = {
	{(PropertyRNA*)&rna_GPencilFrame_rna_properties, (PropertyRNA*)&rna_GPencilFrame_frame_number,
	-1, "is_edited", 3, "Paint Lock",
	"Frame is being edited (painted on)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_is_edited_get, GPencilFrame_is_edited_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_GPencilFrame_rna_properties = {
	{(PropertyRNA*)&rna_GPencilFrame_select, (PropertyRNA*)&rna_GPencilFrame_is_edited,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_rna_properties_begin, GPencilFrame_rna_properties_next, GPencilFrame_rna_properties_end, GPencilFrame_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_GPencilFrame_select = {
	{(PropertyRNA*)&rna_GPencilFrame_strokes, (PropertyRNA*)&rna_GPencilFrame_rna_properties,
	-1, "select", 3, "Select",
	"Frame is selected for editing in the DopeSheet",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_select_get, GPencilFrame_select_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_GPencilFrame_strokes = {
	{NULL, (PropertyRNA*)&rna_GPencilFrame_select,
	-1, "strokes", 0, "Strokes",
	"Freehand curves defining the sketch on this frame",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilFrame_strokes_begin, GPencilFrame_strokes_next, GPencilFrame_strokes_end, GPencilFrame_strokes_get, NULL, GPencilFrame_strokes_lookup_int, NULL, &RNA_GPencilStroke
};

StructRNA RNA_GPencilFrame = {
	{(ContainerRNA *)&RNA_GPencilLayer, (ContainerRNA *)&RNA_Function,
	NULL,
	{(PropertyRNA*)&rna_GPencilFrame_rna_type, (PropertyRNA*)&rna_GPencilFrame_strokes}},
	"GPencilFrame"	, NULL,NULL
, 0, "Grease Pencil Frame", "Collection of related sketches on a particular frame",
	17,
	NULL, (PropertyRNA*)&rna_GPencilFrame_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Layer */
PointerPropertyRNA rna_GPencilLayer_rna_type = {
	{(PropertyRNA*)&rna_GPencilLayer_active, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_GPencilLayer_active = {
	{(PropertyRNA*)&rna_GPencilLayer_active_frame, (PropertyRNA*)&rna_GPencilLayer_rna_type,
	-1, "active", 3, "Active",
	"Set active layer for editing",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_active_get, GPencilLayer_active_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_GPencilLayer_active_frame = {
	{(PropertyRNA*)&rna_GPencilLayer_color, (PropertyRNA*)&rna_GPencilLayer_active,
	-1, "active_frame", 0, "Active Frame",
	"Frame currently being displayed for this layer",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, rna_GPencilLayer_active_frame_editable, NULL,
	0, -1, NULL},
	GPencilLayer_active_frame_get, NULL, NULL, NULL,&RNA_GPencilFrame
};

static float rna_GPencilLayer_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilLayer_color = {
	{(PropertyRNA*)&rna_GPencilLayer_lock_frame, (PropertyRNA*)&rna_GPencilLayer_active_frame,
	-1, "color", 8195, "Color",
	"Color for all strokes in this layer",
	0,
	PROP_FLOAT, PROP_COLOR|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 50659328, NULL, NULL,
	offsetof(bGPDlayer, color), 4, NULL},
	NULL, NULL, GPencilLayer_color_get, GPencilLayer_color_set, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_GPencilLayer_color_default
};

BooleanPropertyRNA rna_GPencilLayer_lock_frame = {
	{(PropertyRNA*)&rna_GPencilLayer_frames, (PropertyRNA*)&rna_GPencilLayer_color,
	-1, "lock_frame", 3, "Frame Locked",
	"Lock current frame displayed by layer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_lock_frame_get, GPencilLayer_lock_frame_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_GPencilLayer_frames = {
	{(PropertyRNA*)&rna_GPencilLayer_hide, (PropertyRNA*)&rna_GPencilLayer_lock_frame,
	-1, "frames", 0, "Frames",
	"Sketches for this layer on different frames",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_frames_begin, GPencilLayer_frames_next, GPencilLayer_frames_end, GPencilLayer_frames_get, NULL, GPencilLayer_frames_lookup_int, NULL, &RNA_GPencilFrame
};

BooleanPropertyRNA rna_GPencilLayer_hide = {
	{(PropertyRNA*)&rna_GPencilLayer_info, (PropertyRNA*)&rna_GPencilLayer_frames,
	-1, "hide", 3, "Hide",
	"Set layer Visibility",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_hide_get, GPencilLayer_hide_set, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_GPencilLayer_info = {
	{(PropertyRNA*)&rna_GPencilLayer_lock, (PropertyRNA*)&rna_GPencilLayer_hide,
	-1, "info", 1, "Info",
	"Layer name",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {128, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_info_get, GPencilLayer_info_length, GPencilLayer_info_set, 128, ""
};

BooleanPropertyRNA rna_GPencilLayer_lock = {
	{(PropertyRNA*)&rna_GPencilLayer_ghost_range_max, (PropertyRNA*)&rna_GPencilLayer_info,
	-1, "lock", 3, "Locked",
	"Protect layer from further editing and/or frame changes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_lock_get, GPencilLayer_lock_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_GPencilLayer_ghost_range_max = {
	{(PropertyRNA*)&rna_GPencilLayer_alpha, (PropertyRNA*)&rna_GPencilLayer_lock,
	-1, "ghost_range_max", 8195, "Max Ghost Range",
	"Maximum number of frames on either side of the active frame to show (0 = show the \'first\' available sketch on either side)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	offsetof(bGPDlayer, gstep), 1, NULL},
	GPencilLayer_ghost_range_max_get, GPencilLayer_ghost_range_max_set, NULL, NULL, NULL,
	0, 120, 0, 120, 1, 0, NULL
};

FloatPropertyRNA rna_GPencilLayer_alpha = {
	{(PropertyRNA*)&rna_GPencilLayer_rna_properties, (PropertyRNA*)&rna_GPencilLayer_ghost_range_max,
	-1, "alpha", 8195, "Opacity",
	"Layer Opacity",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	offsetof(bGPDlayer, color[3]), 4, NULL},
	GPencilLayer_alpha_get, GPencilLayer_alpha_set, NULL, NULL, NULL, 0.3000000119f, 1.0f, 0.3000000119f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_GPencilLayer_rna_properties = {
	{(PropertyRNA*)&rna_GPencilLayer_select, (PropertyRNA*)&rna_GPencilLayer_alpha,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_rna_properties_begin, GPencilLayer_rna_properties_next, GPencilLayer_rna_properties_end, GPencilLayer_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_GPencilLayer_select = {
	{(PropertyRNA*)&rna_GPencilLayer_show_points, (PropertyRNA*)&rna_GPencilLayer_rna_properties,
	-1, "select", 3, "Select",
	"Layer is selected for editing in the DopeSheet",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_select_get, GPencilLayer_select_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_GPencilLayer_show_points = {
	{(PropertyRNA*)&rna_GPencilLayer_line_width, (PropertyRNA*)&rna_GPencilLayer_select,
	-1, "show_points", 3, "Show Points",
	"Draw the points which make up the strokes (for debugging purposes)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_show_points_get, GPencilLayer_show_points_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_GPencilLayer_line_width = {
	{(PropertyRNA*)&rna_GPencilLayer_use_onion_skinning, (PropertyRNA*)&rna_GPencilLayer_show_points,
	-1, "line_width", 8195, "Thickness",
	"Thickness of strokes (in pixels)",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	offsetof(bGPDlayer, thickness), 1, NULL},
	GPencilLayer_line_width_get, GPencilLayer_line_width_set, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

BooleanPropertyRNA rna_GPencilLayer_use_onion_skinning = {
	{NULL, (PropertyRNA*)&rna_GPencilLayer_line_width,
	-1, "use_onion_skinning", 3, "Use Onion Skinning",
	"Ghost frames on either side of frame",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	0, -1, NULL},
	GPencilLayer_use_onion_skinning_get, GPencilLayer_use_onion_skinning_set, NULL, NULL, 0, NULL
};

StructRNA RNA_GPencilLayer = {
	{(ContainerRNA *)&RNA_GPencilStroke, (ContainerRNA *)&RNA_GPencilFrame,
	NULL,
	{(PropertyRNA*)&rna_GPencilLayer_rna_type, (PropertyRNA*)&rna_GPencilLayer_use_onion_skinning}},
	"GPencilLayer"	, NULL,NULL
, 0, "Grease Pencil Layer", "Collection of related sketches",
	17,
	(PropertyRNA*)&rna_GPencilLayer_info, (PropertyRNA*)&rna_GPencilLayer_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Stroke */
PointerPropertyRNA rna_GPencilStroke_rna_type = {
	{(PropertyRNA*)&rna_GPencilStroke_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStroke_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_GPencilStroke_rna_properties = {
	{(PropertyRNA*)&rna_GPencilStroke_points, (PropertyRNA*)&rna_GPencilStroke_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStroke_rna_properties_begin, GPencilStroke_rna_properties_next, GPencilStroke_rna_properties_end, GPencilStroke_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_GPencilStroke_points = {
	{NULL, (PropertyRNA*)&rna_GPencilStroke_rna_properties,
	-1, "points", 16384, "Stroke Points",
	"Stroke data points",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStroke_points_begin, GPencilStroke_points_next, GPencilStroke_points_end, GPencilStroke_points_get, GPencilStroke_points_length, GPencilStroke_points_lookup_int, NULL, &RNA_GPencilStrokePoint
};

StructRNA RNA_GPencilStroke = {
	{(ContainerRNA *)&RNA_GPencilStrokePoint, (ContainerRNA *)&RNA_GPencilLayer,
	NULL,
	{(PropertyRNA*)&rna_GPencilStroke_rna_type, (PropertyRNA*)&rna_GPencilStroke_points}},
	"GPencilStroke"	, NULL,NULL
, 0, "Grease Pencil Stroke", "Freehand curve defining part of a sketch",
	17,
	NULL, (PropertyRNA*)&rna_GPencilStroke_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil Stroke Point */
PointerPropertyRNA rna_GPencilStrokePoint_rna_type = {
	{(PropertyRNA*)&rna_GPencilStrokePoint_co, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokePoint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_GPencilStrokePoint_co_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_GPencilStrokePoint_co = {
	{(PropertyRNA*)&rna_GPencilStrokePoint_pressure, (PropertyRNA*)&rna_GPencilStrokePoint_rna_type,
	-1, "co", 8195, "Coordinates",
	"",
	0,
	PROP_FLOAT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 50659328, NULL, NULL,
	offsetof(bGPDspoint, x), 4, NULL},
	NULL, NULL, GPencilStrokePoint_co_get, GPencilStrokePoint_co_set, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_GPencilStrokePoint_co_default
};

FloatPropertyRNA rna_GPencilStrokePoint_pressure = {
	{(PropertyRNA*)&rna_GPencilStrokePoint_rna_properties, (PropertyRNA*)&rna_GPencilStrokePoint_co,
	-1, "pressure", 8195, "Pressure",
	"Pressure of tablet at point when drawing it",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 50659328, NULL, NULL,
	offsetof(bGPDspoint, pressure), 4, NULL},
	GPencilStrokePoint_pressure_get, GPencilStrokePoint_pressure_set, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_GPencilStrokePoint_rna_properties = {
	{NULL, (PropertyRNA*)&rna_GPencilStrokePoint_pressure,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GPencilStrokePoint_rna_properties_begin, GPencilStrokePoint_rna_properties_next, GPencilStrokePoint_rna_properties_end, GPencilStrokePoint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StructRNA RNA_GPencilStrokePoint = {
	{(ContainerRNA *)&RNA_GameActuator, (ContainerRNA *)&RNA_GPencilStroke,
	NULL,
	{(PropertyRNA*)&rna_GPencilStrokePoint_rna_type, (PropertyRNA*)&rna_GPencilStrokePoint_rna_properties}},
	"GPencilStrokePoint"	, NULL,NULL
, 0, "Grease Pencil Stroke Point", "Data point for freehand stroke curve",
	17,
	NULL, (PropertyRNA*)&rna_GPencilStrokePoint_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Grease Pencil */
static EnumPropertyItem rna_GreasePencil_draw_mode_items[5] = {
	{16, "CURSOR", 0, "Cursor", "Draw stroke at the 3D cursor"},
	{0, "VIEW", 0, "View", "Stick stroke to the view "},
	{48, "SURFACE", 0, "Surface", "Stick stroke to surfaces"},
	{80, "STROKE", 0, "Stroke", "Stick stroke to other strokes"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_GreasePencil_draw_mode = {
	{(PropertyRNA*)&rna_GreasePencil_layers, NULL,
	-1, "draw_mode", 3, "Draw Mode",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GreasePencil_draw_mode_get, GreasePencil_draw_mode_set, NULL, rna_GreasePencil_draw_mode_items, 4, 0
};

CollectionPropertyRNA rna_GreasePencil_layers = {
	{(PropertyRNA*)&rna_GreasePencil_use_stroke_endpoints, (PropertyRNA*)&rna_GreasePencil_draw_mode,
	-1, "layers", 0, "Layers",
	"",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GreasePencil_layers_begin, GreasePencil_layers_next, GreasePencil_layers_end, GreasePencil_layers_get, NULL, GreasePencil_layers_lookup_int, NULL, &RNA_GPencilLayer
};

BooleanPropertyRNA rna_GreasePencil_use_stroke_endpoints = {
	{NULL, (PropertyRNA*)&rna_GreasePencil_layers,
	-1, "use_stroke_endpoints", 3, "Only Endpoints",
	"Only use the first and last parts of the stroke for snapping",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	GreasePencil_use_stroke_endpoints_get, GreasePencil_use_stroke_endpoints_set, NULL, NULL, 0, NULL
};

StructRNA RNA_GreasePencil = {
	{(ContainerRNA *)&RNA_Group, (ContainerRNA *)&RNA_GlowSequence,
	NULL,
	{(PropertyRNA*)&rna_GreasePencil_draw_mode, (PropertyRNA*)&rna_GreasePencil_use_stroke_endpoints}},
	"GreasePencil"	, NULL,NULL
, 3, "Grease Pencil", "Freehand annotation sketchbook",
	197,
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

