
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

#include "rna_sculpt_paint.c"

/* Autogenerated Functions */


extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern BooleanPropertyRNA rna_Paint_show_low_resolution;
extern CollectionPropertyRNA rna_Paint_rna_properties;
extern BooleanPropertyRNA rna_Paint_show_brush;
extern BooleanPropertyRNA rna_Paint_show_brush_on_surface;

IntPropertyRNA rna_ImagePaint_normal_angle;
IntPropertyRNA rna_ImagePaint_seam_bleed;
BooleanPropertyRNA rna_ImagePaint_use_clone_layer;
BooleanPropertyRNA rna_ImagePaint_use_backface_culling;
BooleanPropertyRNA rna_ImagePaint_invert_stencil;
BooleanPropertyRNA rna_ImagePaint_use_normal_falloff;
BooleanPropertyRNA rna_ImagePaint_use_occlude;
BooleanPropertyRNA rna_ImagePaint_use_projection;
BooleanPropertyRNA rna_ImagePaint_use_stencil_layer;
IntPropertyRNA rna_ImagePaint_screen_grab_size;


PointerPropertyRNA rna_Paint_rna_type;
PointerPropertyRNA rna_Paint_brush;
BooleanPropertyRNA rna_Paint_show_low_resolution;
CollectionPropertyRNA rna_Paint_rna_properties;
BooleanPropertyRNA rna_Paint_show_brush;
BooleanPropertyRNA rna_Paint_show_brush_on_surface;


PointerPropertyRNA rna_ParticleBrush_rna_type;
IntPropertyRNA rna_ParticleBrush_count;
PointerPropertyRNA rna_ParticleBrush_curve;
EnumPropertyRNA rna_ParticleBrush_length_mode;
CollectionPropertyRNA rna_ParticleBrush_rna_properties;
EnumPropertyRNA rna_ParticleBrush_puff_mode;
BooleanPropertyRNA rna_ParticleBrush_use_puff_volume;
IntPropertyRNA rna_ParticleBrush_size;
IntPropertyRNA rna_ParticleBrush_steps;
FloatPropertyRNA rna_ParticleBrush_strength;


PointerPropertyRNA rna_ParticleEdit_rna_type;
BooleanPropertyRNA rna_ParticleEdit_use_auto_velocity;
PointerPropertyRNA rna_ParticleEdit_brush;
BooleanPropertyRNA rna_ParticleEdit_use_emitter_deflect;
BooleanPropertyRNA rna_ParticleEdit_show_particles;
BooleanPropertyRNA rna_ParticleEdit_is_editable;
FloatPropertyRNA rna_ParticleEdit_emitter_distance;
BooleanPropertyRNA rna_ParticleEdit_use_fade_time;
IntPropertyRNA rna_ParticleEdit_fade_frames;
BooleanPropertyRNA rna_ParticleEdit_is_hair;
BooleanPropertyRNA rna_ParticleEdit_use_default_interpolate;
BooleanPropertyRNA rna_ParticleEdit_use_preserve_length;
BooleanPropertyRNA rna_ParticleEdit_use_preserve_root;
IntPropertyRNA rna_ParticleEdit_default_key_count;
PointerPropertyRNA rna_ParticleEdit_object;
CollectionPropertyRNA rna_ParticleEdit_rna_properties;
EnumPropertyRNA rna_ParticleEdit_select_mode;
IntPropertyRNA rna_ParticleEdit_draw_step;
EnumPropertyRNA rna_ParticleEdit_tool;
EnumPropertyRNA rna_ParticleEdit_type;


extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern BooleanPropertyRNA rna_Paint_show_low_resolution;
extern CollectionPropertyRNA rna_Paint_rna_properties;
extern BooleanPropertyRNA rna_Paint_show_brush;
extern BooleanPropertyRNA rna_Paint_show_brush_on_surface;

BooleanPropertyRNA rna_Sculpt_lock_x;
BooleanPropertyRNA rna_Sculpt_lock_y;
BooleanPropertyRNA rna_Sculpt_lock_z;
IntPropertyRNA rna_Sculpt_radial_symmetry;
BooleanPropertyRNA rna_Sculpt_use_symmetry_feather;
BooleanPropertyRNA rna_Sculpt_use_symmetry_x;
BooleanPropertyRNA rna_Sculpt_use_symmetry_y;
BooleanPropertyRNA rna_Sculpt_use_symmetry_z;
BooleanPropertyRNA rna_Sculpt_use_threaded;


extern PointerPropertyRNA rna_Paint_rna_type;
extern PointerPropertyRNA rna_Paint_brush;
extern BooleanPropertyRNA rna_Paint_show_low_resolution;
extern CollectionPropertyRNA rna_Paint_rna_properties;
extern BooleanPropertyRNA rna_Paint_show_brush;
extern BooleanPropertyRNA rna_Paint_show_brush_on_surface;

BooleanPropertyRNA rna_VertexPaint_use_all_faces;
BooleanPropertyRNA rna_VertexPaint_use_normal;
BooleanPropertyRNA rna_VertexPaint_use_spray;

int ImagePaint_normal_angle_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return (int)(data->normal_angle);
}

void ImagePaint_normal_angle_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	data->normal_angle= CLAMPIS(value, 0, 90);
}

int ImagePaint_seam_bleed_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return (int)(data->seam_bleed);
}

void ImagePaint_seam_bleed_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	data->seam_bleed= CLAMPIS(value, 0, 32767);
}

int ImagePaint_use_clone_layer_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ImagePaint_use_clone_layer_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

int ImagePaint_use_backface_culling_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return !(((data->flag) & 32) != 0);
}

void ImagePaint_use_backface_culling_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	if(!value) data->flag |= 32;
	else data->flag &= ~32;
}

int ImagePaint_invert_stencil_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return (((data->flag) & 512) != 0);
}

void ImagePaint_invert_stencil_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	if(value) data->flag |= 512;
	else data->flag &= ~512;
}

int ImagePaint_use_normal_falloff_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return !(((data->flag) & 64) != 0);
}

void ImagePaint_use_normal_falloff_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	if(!value) data->flag |= 64;
	else data->flag &= ~64;
}

int ImagePaint_use_occlude_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return !(((data->flag) & 16) != 0);
}

void ImagePaint_use_occlude_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	if(!value) data->flag |= 16;
	else data->flag &= ~16;
}

int ImagePaint_use_projection_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return !(((data->flag) & 8) != 0);
}

void ImagePaint_use_projection_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	if(!value) data->flag |= 8;
	else data->flag &= ~8;
}

int ImagePaint_use_stencil_layer_get(PointerRNA *ptr)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void ImagePaint_use_stencil_layer_set(PointerRNA *ptr, int value)
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	if(value) data->flag |= 256;
	else data->flag &= ~256;
}

void ImagePaint_screen_grab_size_get(PointerRNA *ptr, int values[2])
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		values[i]= (int)(((short*)data->screen_grab_size)[i]);
	}
}

void ImagePaint_screen_grab_size_set(PointerRNA *ptr, const int values[2])
{
	ImagePaintSettings *data= (ImagePaintSettings*)(ptr->data);
	int i;

	for(i=0; i<2; i++) {
		((short*)data->screen_grab_size)[i]= CLAMPIS(values[i], 512, 16384);
	}
}

PointerRNA Paint_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA Paint_brush_get(PointerRNA *ptr)
{
	Paint *data= (Paint*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Brush, data->brush);
}

void Paint_brush_set(PointerRNA *ptr, PointerRNA value)
{
	Paint *data= (Paint*)(ptr->data);

	if(data->brush)
		id_us_min((ID*)data->brush);
	if(value.data)
		id_us_plus((ID*)value.data);

	data->brush= value.data;
}

int Paint_show_low_resolution_get(PointerRNA *ptr)
{
	Paint *data= (Paint*)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void Paint_show_low_resolution_set(PointerRNA *ptr, int value)
{
	Paint *data= (Paint*)(ptr->data);
	if(value) data->flags |= 2;
	else data->flags &= ~2;
}

static PointerRNA Paint_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Paint_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_Paint_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= Paint_rna_properties_get(iter);
}

void Paint_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= Paint_rna_properties_get(iter);
}

void Paint_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Paint_show_brush_get(PointerRNA *ptr)
{
	Paint *data= (Paint*)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void Paint_show_brush_set(PointerRNA *ptr, int value)
{
	Paint *data= (Paint*)(ptr->data);
	if(value) data->flags |= 1;
	else data->flags &= ~1;
}

int Paint_show_brush_on_surface_get(PointerRNA *ptr)
{
	Paint *data= (Paint*)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void Paint_show_brush_on_surface_set(PointerRNA *ptr, int value)
{
	Paint *data= (Paint*)(ptr->data);
	if(value) data->flags |= 4;
	else data->flags &= ~4;
}

PointerRNA ParticleBrush_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ParticleBrush_count_get(PointerRNA *ptr)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	return (int)(data->count);
}

void ParticleBrush_count_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	data->count= CLAMPIS(value, 1, 1000);
}

PointerRNA ParticleBrush_curve_get(PointerRNA *ptr)
{
	return rna_ParticleBrush_curve_get(ptr);
}

int ParticleBrush_length_mode_get(PointerRNA *ptr)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	return (int)(data->invert);
}

void ParticleBrush_length_mode_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	data->invert= value;
}

static PointerRNA ParticleBrush_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleBrush_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ParticleBrush_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ParticleBrush_rna_properties_get(iter);
}

void ParticleBrush_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ParticleBrush_rna_properties_get(iter);
}

void ParticleBrush_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleBrush_puff_mode_get(PointerRNA *ptr)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	return (int)(data->invert);
}

void ParticleBrush_puff_mode_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	data->invert= value;
}

int ParticleBrush_use_puff_volume_get(PointerRNA *ptr)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ParticleBrush_use_puff_volume_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParticleBrush_size_get(PointerRNA *ptr)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	return (int)(data->size);
}

void ParticleBrush_size_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	data->size= CLAMPIS(value, 1, 32767);
}

int ParticleBrush_steps_get(PointerRNA *ptr)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	return (int)(data->step);
}

void ParticleBrush_steps_set(PointerRNA *ptr, int value)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	data->step= CLAMPIS(value, 1, 32767);
}

float ParticleBrush_strength_get(PointerRNA *ptr)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	return (float)(data->strength);
}

void ParticleBrush_strength_set(PointerRNA *ptr, float value)
{
	ParticleBrushData *data= (ParticleBrushData*)(ptr->data);
	data->strength= CLAMPIS(value, 0.0010000000f, 1.0f);
}

PointerRNA ParticleEdit_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ParticleEdit_use_auto_velocity_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (((data->flag) & 256) != 0);
}

void ParticleEdit_use_auto_velocity_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	if(value) data->flag |= 256;
	else data->flag &= ~256;
}

PointerRNA ParticleEdit_brush_get(PointerRNA *ptr)
{
	return rna_ParticleEdit_brush_get(ptr);
}

int ParticleEdit_use_emitter_deflect_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void ParticleEdit_use_emitter_deflect_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	if(value) data->flag |= 4;
	else data->flag &= ~4;
}

int ParticleEdit_show_particles_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void ParticleEdit_show_particles_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}

int ParticleEdit_is_editable_get(PointerRNA *ptr)
{
	return rna_ParticleEdit_editable_get(ptr);
}

float ParticleEdit_emitter_distance_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (float)(data->emitterdist);
}

void ParticleEdit_emitter_distance_set(PointerRNA *ptr, float value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	data->emitterdist= CLAMPIS(value, 0.0f, FLT_MAX);
}

int ParticleEdit_use_fade_time_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (((data->flag) & 128) != 0);
}

void ParticleEdit_use_fade_time_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	if(value) data->flag |= 128;
	else data->flag &= ~128;
}

int ParticleEdit_fade_frames_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (int)(data->fade_frames);
}

void ParticleEdit_fade_frames_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	data->fade_frames= CLAMPIS(value, 2, 100);
}

int ParticleEdit_is_hair_get(PointerRNA *ptr)
{
	return rna_ParticleEdit_hair_get(ptr);
}

int ParticleEdit_use_default_interpolate_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void ParticleEdit_use_default_interpolate_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int ParticleEdit_use_preserve_length_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ParticleEdit_use_preserve_length_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	if(value) data->flag |= 1;
	else data->flag &= ~1;
}

int ParticleEdit_use_preserve_root_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void ParticleEdit_use_preserve_root_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int ParticleEdit_default_key_count_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (int)(data->totaddkey);
}

void ParticleEdit_default_key_count_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	data->totaddkey= CLAMPIS(value, 2, 32767);
}

PointerRNA ParticleEdit_object_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->object);
}

static PointerRNA ParticleEdit_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ParticleEdit_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_ParticleEdit_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= ParticleEdit_rna_properties_get(iter);
}

void ParticleEdit_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= ParticleEdit_rna_properties_get(iter);
}

void ParticleEdit_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ParticleEdit_select_mode_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return ((data->selectmode) & 7);
}

void ParticleEdit_select_mode_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	data->selectmode &= ~7;
	data->selectmode |= value;
}

int ParticleEdit_draw_step_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (int)(data->draw_step);
}

void ParticleEdit_draw_step_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	data->draw_step= CLAMPIS(value, 2, 10);
}

int ParticleEdit_tool_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (int)(data->brushtype);
}

void ParticleEdit_tool_set(PointerRNA *ptr, int value)
{
	rna_ParticleEdit_tool_set(ptr, value);
}

int ParticleEdit_type_get(PointerRNA *ptr)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	return (int)(data->edittype);
}

void ParticleEdit_type_set(PointerRNA *ptr, int value)
{
	ParticleEditSettings *data= (ParticleEditSettings*)(ptr->data);
	data->edittype= value;
}

int Sculpt_lock_x_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 8) != 0);
}

void Sculpt_lock_x_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 8;
	else data->flags &= ~8;
}

int Sculpt_lock_y_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 16) != 0);
}

void Sculpt_lock_y_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 16;
	else data->flags &= ~16;
}

int Sculpt_lock_z_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 32) != 0);
}

void Sculpt_lock_z_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 32;
	else data->flags &= ~32;
}

void Sculpt_radial_symmetry_get(PointerRNA *ptr, int values[3])
{
	Sculpt *data= (Sculpt*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		values[i]= (int)(((int*)data->radial_symm)[i]);
	}
}

void Sculpt_radial_symmetry_set(PointerRNA *ptr, const int values[3])
{
	Sculpt *data= (Sculpt*)(ptr->data);
	int i;

	for(i=0; i<3; i++) {
		((int*)data->radial_symm)[i]= CLAMPIS(values[i], 1, 64);
	}
}

int Sculpt_use_symmetry_feather_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 64) != 0);
}

void Sculpt_use_symmetry_feather_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 64;
	else data->flags &= ~64;
}

int Sculpt_use_symmetry_x_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 1) != 0);
}

void Sculpt_use_symmetry_x_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 1;
	else data->flags &= ~1;
}

int Sculpt_use_symmetry_y_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 2) != 0);
}

void Sculpt_use_symmetry_y_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 2;
	else data->flags &= ~2;
}

int Sculpt_use_symmetry_z_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 4) != 0);
}

void Sculpt_use_symmetry_z_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 4;
	else data->flags &= ~4;
}

int Sculpt_use_threaded_get(PointerRNA *ptr)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	return (((data->flags) & 128) != 0);
}

void Sculpt_use_threaded_set(PointerRNA *ptr, int value)
{
	Sculpt *data= (Sculpt*)(ptr->data);
	if(value) data->flags |= 128;
	else data->flags &= ~128;
}

int VertexPaint_use_all_faces_get(PointerRNA *ptr)
{
	VPaint *data= (VPaint*)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void VertexPaint_use_all_faces_set(PointerRNA *ptr, int value)
{
	VPaint *data= (VPaint*)(ptr->data);
	if(value) data->flag |= 2;
	else data->flag &= ~2;
}

int VertexPaint_use_normal_get(PointerRNA *ptr)
{
	VPaint *data= (VPaint*)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void VertexPaint_use_normal_set(PointerRNA *ptr, int value)
{
	VPaint *data= (VPaint*)(ptr->data);
	if(value) data->flag |= 8;
	else data->flag &= ~8;
}

int VertexPaint_use_spray_get(PointerRNA *ptr)
{
	VPaint *data= (VPaint*)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void VertexPaint_use_spray_set(PointerRNA *ptr, int value)
{
	VPaint *data= (VPaint*)(ptr->data);
	if(value) data->flag |= 16;
	else data->flag &= ~16;
}







/* Image Paint */
IntPropertyRNA rna_ImagePaint_normal_angle = {
	{(PropertyRNA*)&rna_ImagePaint_seam_bleed, NULL,
	-1, "normal_angle", 8195, "Angle",
	"Paint most on faces pointing towards the view according to this angle",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImagePaintSettings, normal_angle), 1, NULL},
	ImagePaint_normal_angle_get, ImagePaint_normal_angle_set, NULL, NULL, NULL,
	0, 90, 0, 90, 1, 0, NULL
};

IntPropertyRNA rna_ImagePaint_seam_bleed = {
	{(PropertyRNA*)&rna_ImagePaint_use_clone_layer, (PropertyRNA*)&rna_ImagePaint_normal_angle,
	-1, "seam_bleed", 8195, "Bleed",
	"Extend paint beyond the faces UVs to reduce seams (in pixels, slower)",
	0,
	PROP_INT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ImagePaintSettings, seam_bleed), 1, NULL},
	ImagePaint_seam_bleed_get, ImagePaint_seam_bleed_set, NULL, NULL, NULL,
	0, 8, 0, 32767, 0, 0, NULL
};

BooleanPropertyRNA rna_ImagePaint_use_clone_layer = {
	{(PropertyRNA*)&rna_ImagePaint_use_backface_culling, (PropertyRNA*)&rna_ImagePaint_seam_bleed,
	-1, "use_clone_layer", 3, "Clone Layer",
	"Use another UV layer as clone source, otherwise use 3D the cursor as the source",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_clone_layer_get, ImagePaint_use_clone_layer_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ImagePaint_use_backface_culling = {
	{(PropertyRNA*)&rna_ImagePaint_invert_stencil, (PropertyRNA*)&rna_ImagePaint_use_clone_layer,
	-1, "use_backface_culling", 3, "Cull",
	"Ignore faces pointing away from the view (faster)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_backface_culling_get, ImagePaint_use_backface_culling_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ImagePaint_invert_stencil = {
	{(PropertyRNA*)&rna_ImagePaint_use_normal_falloff, (PropertyRNA*)&rna_ImagePaint_use_backface_culling,
	-1, "invert_stencil", 3, "Invert",
	"Invert the stencil layer",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_invert_stencil_get, ImagePaint_invert_stencil_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ImagePaint_use_normal_falloff = {
	{(PropertyRNA*)&rna_ImagePaint_use_occlude, (PropertyRNA*)&rna_ImagePaint_invert_stencil,
	-1, "use_normal_falloff", 3, "Normal",
	"Paint most on faces pointing towards the view",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_normal_falloff_get, ImagePaint_use_normal_falloff_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ImagePaint_use_occlude = {
	{(PropertyRNA*)&rna_ImagePaint_use_projection, (PropertyRNA*)&rna_ImagePaint_use_normal_falloff,
	-1, "use_occlude", 3, "Occlude",
	"Only paint onto the faces directly under the brush (slower)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_occlude_get, ImagePaint_use_occlude_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ImagePaint_use_projection = {
	{(PropertyRNA*)&rna_ImagePaint_use_stencil_layer, (PropertyRNA*)&rna_ImagePaint_use_occlude,
	-1, "use_projection", 3, "Project Paint",
	"Use projection painting for improved consistency in the brush strokes",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_projection_get, ImagePaint_use_projection_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ImagePaint_use_stencil_layer = {
	{(PropertyRNA*)&rna_ImagePaint_screen_grab_size, (PropertyRNA*)&rna_ImagePaint_use_projection,
	-1, "use_stencil_layer", 3, "Stencil Layer",
	"Set the mask layer from the UV layer buttons",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ImagePaint_use_stencil_layer_get, ImagePaint_use_stencil_layer_set, NULL, NULL, 0, NULL
};

static int rna_ImagePaint_screen_grab_size_default[2] = {
	0,
	0
};

IntPropertyRNA rna_ImagePaint_screen_grab_size = {
	{NULL, (PropertyRNA*)&rna_ImagePaint_use_stencil_layer,
	-1, "screen_grab_size", 8195, "screen_grab_size",
	"Size to capture the image for re-projecting",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 1, {2, 0, 0}, 2,
	NULL, 0, NULL, NULL,
	offsetof(ImagePaintSettings, screen_grab_size), 1, NULL},
	NULL, NULL, ImagePaint_screen_grab_size_get, ImagePaint_screen_grab_size_set, NULL,
	512, 16384, 512, 16384, 1, 0, rna_ImagePaint_screen_grab_size_default
};

StructRNA RNA_ImagePaint = {
	{(ContainerRNA *)&RNA_ImageSequence, (ContainerRNA *)&RNA_Image,
	NULL,
	{(PropertyRNA*)&rna_ImagePaint_normal_angle, (PropertyRNA*)&rna_ImagePaint_screen_grab_size}},
	"ImagePaint"	, NULL,NULL
, 0, "Image Paint", "Properties of image and texture painting mode",
	17,
	NULL, (PropertyRNA*)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Paint */
PointerPropertyRNA rna_Paint_rna_type = {
	{(PropertyRNA*)&rna_Paint_brush, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Paint_brush = {
	{(PropertyRNA*)&rna_Paint_show_low_resolution, (PropertyRNA*)&rna_Paint_rna_type,
	-1, "brush", 65, "Brush",
	"Active Brush",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 184549377, NULL, NULL,
	0, -1, NULL},
	Paint_brush_get, Paint_brush_set, NULL, rna_Brush_mode_poll,&RNA_Brush
};

BooleanPropertyRNA rna_Paint_show_low_resolution = {
	{(PropertyRNA*)&rna_Paint_rna_properties, (PropertyRNA*)&rna_Paint_brush,
	-1, "show_low_resolution", 3, "Fast Navigate",
	"For multires, show low resolution while navigating the view",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_show_low_resolution_get, Paint_show_low_resolution_set, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_Paint_rna_properties = {
	{(PropertyRNA*)&rna_Paint_show_brush, (PropertyRNA*)&rna_Paint_show_low_resolution,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_rna_properties_begin, Paint_rna_properties_next, Paint_rna_properties_end, Paint_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_Paint_show_brush = {
	{(PropertyRNA*)&rna_Paint_show_brush_on_surface, (PropertyRNA*)&rna_Paint_rna_properties,
	-1, "show_brush", 3, "Show Brush",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_show_brush_get, Paint_show_brush_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Paint_show_brush_on_surface = {
	{NULL, (PropertyRNA*)&rna_Paint_show_brush,
	-1, "show_brush_on_surface", 3, "Show Brush On Surface",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Paint_show_brush_on_surface_get, Paint_show_brush_on_surface_set, NULL, NULL, 0, NULL
};

StructRNA RNA_Paint = {
	{(ContainerRNA *)&RNA_Panel, (ContainerRNA *)&RNA_PackedFile,
	NULL,
	{(PropertyRNA*)&rna_Paint_rna_type, (PropertyRNA*)&rna_Paint_show_brush_on_surface}},
	"Paint"	, NULL,NULL
, 0, "Paint", "",
	17,
	NULL, (PropertyRNA*)&rna_Paint_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Brush */
PointerPropertyRNA rna_ParticleBrush_rna_type = {
	{(PropertyRNA*)&rna_ParticleBrush_count, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_ParticleBrush_count = {
	{(PropertyRNA*)&rna_ParticleBrush_curve, (PropertyRNA*)&rna_ParticleBrush_rna_type,
	-1, "count", 8195, "Count",
	"Particle count",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, count), 1, NULL},
	ParticleBrush_count_get, ParticleBrush_count_set, NULL, NULL, NULL,
	1, 100, 1, 1000, 10, 0, NULL
};

PointerPropertyRNA rna_ParticleBrush_curve = {
	{(PropertyRNA*)&rna_ParticleBrush_length_mode, (PropertyRNA*)&rna_ParticleBrush_count,
	-1, "curve", 0, "Curve",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_curve_get, NULL, NULL, NULL,&RNA_CurveMapping
};

static EnumPropertyItem rna_ParticleBrush_length_mode_items[3] = {
	{0, "GROW", 0, "Grow", "Make hairs longer"},
	{1, "SHRINK", 0, "Shrink", "Make hairs shorter"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleBrush_length_mode = {
	{(PropertyRNA*)&rna_ParticleBrush_rna_properties, (PropertyRNA*)&rna_ParticleBrush_curve,
	-1, "length_mode", 3, "Length Mode",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_length_mode_get, ParticleBrush_length_mode_set, NULL, rna_ParticleBrush_length_mode_items, 2, 0
};

CollectionPropertyRNA rna_ParticleBrush_rna_properties = {
	{(PropertyRNA*)&rna_ParticleBrush_puff_mode, (PropertyRNA*)&rna_ParticleBrush_length_mode,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_rna_properties_begin, ParticleBrush_rna_properties_next, ParticleBrush_rna_properties_end, ParticleBrush_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_ParticleBrush_puff_mode_items[3] = {
	{0, "ADD", 0, "Add", "Make hairs more puffy"},
	{1, "SUB", 0, "Sub", "Make hairs less puffy"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleBrush_puff_mode = {
	{(PropertyRNA*)&rna_ParticleBrush_use_puff_volume, (PropertyRNA*)&rna_ParticleBrush_rna_properties,
	-1, "puff_mode", 3, "Puff Mode",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_puff_mode_get, ParticleBrush_puff_mode_set, NULL, rna_ParticleBrush_puff_mode_items, 2, 0
};

BooleanPropertyRNA rna_ParticleBrush_use_puff_volume = {
	{(PropertyRNA*)&rna_ParticleBrush_size, (PropertyRNA*)&rna_ParticleBrush_puff_mode,
	-1, "use_puff_volume", 3, "Puff Volume",
	"Apply puff to unselected end-points, (helps maintain hair volume when puffing root)",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleBrush_use_puff_volume_get, ParticleBrush_use_puff_volume_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleBrush_size = {
	{(PropertyRNA*)&rna_ParticleBrush_steps, (PropertyRNA*)&rna_ParticleBrush_use_puff_volume,
	-1, "size", 8195, "Size",
	"Brush size",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, size), 1, NULL},
	ParticleBrush_size_get, ParticleBrush_size_set, NULL, NULL, NULL,
	1, 100, 1, 32767, 10, 0, NULL
};

IntPropertyRNA rna_ParticleBrush_steps = {
	{(PropertyRNA*)&rna_ParticleBrush_strength, (PropertyRNA*)&rna_ParticleBrush_size,
	-1, "steps", 8195, "Steps",
	"Brush steps",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, step), 1, NULL},
	ParticleBrush_steps_get, ParticleBrush_steps_set, NULL, NULL, NULL,
	1, 50, 1, 32767, 10, 0, NULL
};

FloatPropertyRNA rna_ParticleBrush_strength = {
	{NULL, (PropertyRNA*)&rna_ParticleBrush_steps,
	-1, "strength", 8195, "Strength",
	"Brush strength",
	0,
	PROP_FLOAT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleBrushData, strength), 4, NULL},
	ParticleBrush_strength_get, ParticleBrush_strength_set, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ParticleBrush = {
	{(ContainerRNA *)&RNA_ParticleDupliWeight, (ContainerRNA *)&RNA_Particle,
	NULL,
	{(PropertyRNA*)&rna_ParticleBrush_rna_type, (PropertyRNA*)&rna_ParticleBrush_strength}},
	"ParticleBrush"	, NULL,NULL
, 0, "Particle Brush", "Particle editing brush",
	17,
	NULL, (PropertyRNA*)&rna_ParticleBrush_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Particle Edit */
PointerPropertyRNA rna_ParticleEdit_rna_type = {
	{(PropertyRNA*)&rna_ParticleEdit_use_auto_velocity, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BooleanPropertyRNA rna_ParticleEdit_use_auto_velocity = {
	{(PropertyRNA*)&rna_ParticleEdit_brush, (PropertyRNA*)&rna_ParticleEdit_rna_type,
	-1, "use_auto_velocity", 3, "Auto Velocity",
	"Calculate point velocities automatically",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_auto_velocity_get, ParticleEdit_use_auto_velocity_set, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_ParticleEdit_brush = {
	{(PropertyRNA*)&rna_ParticleEdit_use_emitter_deflect, (PropertyRNA*)&rna_ParticleEdit_use_auto_velocity,
	-1, "brush", 0, "Brush",
	"",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {7, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_brush_get, NULL, NULL, NULL,&RNA_ParticleBrush
};

BooleanPropertyRNA rna_ParticleEdit_use_emitter_deflect = {
	{(PropertyRNA*)&rna_ParticleEdit_show_particles, (PropertyRNA*)&rna_ParticleEdit_brush,
	-1, "use_emitter_deflect", 3, "Deflect Emitter",
	"Keep paths from intersecting the emitter",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_emitter_deflect_get, ParticleEdit_use_emitter_deflect_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ParticleEdit_show_particles = {
	{(PropertyRNA*)&rna_ParticleEdit_is_editable, (PropertyRNA*)&rna_ParticleEdit_use_emitter_deflect,
	-1, "show_particles", 3, "Draw Particles",
	"Draw actual particles",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_redo, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_show_particles_get, ParticleEdit_show_particles_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ParticleEdit_is_editable = {
	{(PropertyRNA*)&rna_ParticleEdit_emitter_distance, (PropertyRNA*)&rna_ParticleEdit_show_particles,
	-1, "is_editable", 2, "Editable",
	"A valid edit mode exists",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_is_editable_get, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_ParticleEdit_emitter_distance = {
	{(PropertyRNA*)&rna_ParticleEdit_use_fade_time, (PropertyRNA*)&rna_ParticleEdit_is_editable,
	-1, "emitter_distance", 8195, "Emitter Distance",
	"Distance to keep particles away from the emitter",
	0,
	PROP_FLOAT, PROP_UNSIGNED|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleEditSettings, emitterdist), 4, NULL},
	ParticleEdit_emitter_distance_get, ParticleEdit_emitter_distance_set, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, NULL
};

BooleanPropertyRNA rna_ParticleEdit_use_fade_time = {
	{(PropertyRNA*)&rna_ParticleEdit_fade_frames, (PropertyRNA*)&rna_ParticleEdit_emitter_distance,
	-1, "use_fade_time", 3, "Fade Time",
	"Fade paths and keys further away from current frame",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_update, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_fade_time_get, ParticleEdit_use_fade_time_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleEdit_fade_frames = {
	{(PropertyRNA*)&rna_ParticleEdit_is_hair, (PropertyRNA*)&rna_ParticleEdit_use_fade_time,
	-1, "fade_frames", 8195, "Frames",
	"How many frames to fade",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_update, 85393408, NULL, NULL,
	offsetof(ParticleEditSettings, fade_frames), 0, NULL},
	ParticleEdit_fade_frames_get, ParticleEdit_fade_frames_set, NULL, NULL, NULL,
	2, 100, 2, 100, 1, 0, NULL
};

BooleanPropertyRNA rna_ParticleEdit_is_hair = {
	{(PropertyRNA*)&rna_ParticleEdit_use_default_interpolate, (PropertyRNA*)&rna_ParticleEdit_fade_frames,
	-1, "is_hair", 2, "Hair",
	"Editing hair",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_is_hair_get, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ParticleEdit_use_default_interpolate = {
	{(PropertyRNA*)&rna_ParticleEdit_use_preserve_length, (PropertyRNA*)&rna_ParticleEdit_is_hair,
	-1, "use_default_interpolate", 3, "Interpolate",
	"Interpolate new particles from the existing ones",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_default_interpolate_get, ParticleEdit_use_default_interpolate_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ParticleEdit_use_preserve_length = {
	{(PropertyRNA*)&rna_ParticleEdit_use_preserve_root, (PropertyRNA*)&rna_ParticleEdit_use_default_interpolate,
	-1, "use_preserve_length", 3, "Keep Lengths",
	"Keep path lengths constant",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_preserve_length_get, ParticleEdit_use_preserve_length_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_ParticleEdit_use_preserve_root = {
	{(PropertyRNA*)&rna_ParticleEdit_default_key_count, (PropertyRNA*)&rna_ParticleEdit_use_preserve_length,
	-1, "use_preserve_root", 3, "Keep Root",
	"Keep root keys unmodified",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_use_preserve_root_get, ParticleEdit_use_preserve_root_set, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ParticleEdit_default_key_count = {
	{(PropertyRNA*)&rna_ParticleEdit_object, (PropertyRNA*)&rna_ParticleEdit_use_preserve_root,
	-1, "default_key_count", 8195, "Keys",
	"How many keys to make new particles with",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(ParticleEditSettings, totaddkey), 1, NULL},
	ParticleEdit_default_key_count_get, ParticleEdit_default_key_count_set, NULL, NULL, NULL,
	2, 20, 2, 32767, 10, 0, NULL
};

PointerPropertyRNA rna_ParticleEdit_object = {
	{(PropertyRNA*)&rna_ParticleEdit_rna_properties, (PropertyRNA*)&rna_ParticleEdit_default_key_count,
	-1, "object", 0, "Object",
	"The edited object",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_object_get, NULL, NULL, NULL,&RNA_Object
};

CollectionPropertyRNA rna_ParticleEdit_rna_properties = {
	{(PropertyRNA*)&rna_ParticleEdit_select_mode, (PropertyRNA*)&rna_ParticleEdit_object,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_rna_properties_begin, ParticleEdit_rna_properties_next, ParticleEdit_rna_properties_end, ParticleEdit_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

static EnumPropertyItem rna_ParticleEdit_select_mode_items[4] = {
	{1, "PATH", 571, "Path", "Path edit mode"},
	{2, "POINT", 569, "Point", "Point select mode"},
	{4, "TIP", 570, "Tip", "Tip select mode"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_select_mode = {
	{(PropertyRNA*)&rna_ParticleEdit_draw_step, (PropertyRNA*)&rna_ParticleEdit_rna_properties,
	-1, "select_mode", 3, "Selection Mode",
	"Particle select and display mode",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_update, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_select_mode_get, ParticleEdit_select_mode_set, NULL, rna_ParticleEdit_select_mode_items, 3, 1
};

IntPropertyRNA rna_ParticleEdit_draw_step = {
	{(PropertyRNA*)&rna_ParticleEdit_tool, (PropertyRNA*)&rna_ParticleEdit_select_mode,
	-1, "draw_step", 8195, "Steps",
	"How many steps to draw the path with",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_redo, 85393408, NULL, NULL,
	offsetof(ParticleEditSettings, draw_step), 0, NULL},
	ParticleEdit_draw_step_get, ParticleEdit_draw_step_set, NULL, NULL, NULL,
	2, 10, 2, 10, 1, 0, NULL
};

static EnumPropertyItem rna_ParticleEdit_tool_items[9] = {
	{-1, "NONE", 0, "None", "Don\'t use any brush"},
	{0, "COMB", 0, "Comb", "Comb hairs"},
	{5, "SMOOTH", 0, "Smooth", "Smooth hairs"},
	{4, "ADD", 0, "Add", "Add hairs"},
	{2, "LENGTH", 0, "Length", "Make hairs longer or shorter"},
	{3, "PUFF", 0, "Puff", "Make hairs stand up"},
	{1, "CUT", 0, "Cut", "Cut hairs"},
	{6, "WEIGHT", 0, "Weight", "Weight hair particles"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_tool = {
	{(PropertyRNA*)&rna_ParticleEdit_type, (PropertyRNA*)&rna_ParticleEdit_draw_step,
	-1, "tool", 3, "Tool",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_tool_get, ParticleEdit_tool_set, rna_ParticleEdit_tool_itemf, rna_ParticleEdit_tool_items, 8, 0
};

static EnumPropertyItem rna_ParticleEdit_type_items[4] = {
	{0, "PARTICLES", 0, "Particles", ""},
	{1, "SOFT_BODY", 0, "Soft body", ""},
	{2, "CLOTH", 0, "Cloth", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ParticleEdit_type = {
	{NULL, (PropertyRNA*)&rna_ParticleEdit_tool,
	-1, "type", 3, "Type",
	"",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_ParticleEdit_redo, 85393408, NULL, NULL,
	0, -1, NULL},
	ParticleEdit_type_get, ParticleEdit_type_set, NULL, rna_ParticleEdit_type_items, 3, 0
};

StructRNA RNA_ParticleEdit = {
	{(ContainerRNA *)&RNA_ParticleFluidSettings, (ContainerRNA *)&RNA_ParticleDupliWeight,
	NULL,
	{(PropertyRNA*)&rna_ParticleEdit_rna_type, (PropertyRNA*)&rna_ParticleEdit_type}},
	"ParticleEdit"	, NULL,NULL
, 0, "Particle Edit", "Properties of particle editing mode",
	17,
	NULL, (PropertyRNA*)&rna_ParticleEdit_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Sculpt */
BooleanPropertyRNA rna_Sculpt_lock_x = {
	{(PropertyRNA*)&rna_Sculpt_lock_y, NULL,
	-1, "lock_x", 3, "Lock X",
	"Disallow changes to the X axis of vertices",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_lock_x_get, Sculpt_lock_x_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sculpt_lock_y = {
	{(PropertyRNA*)&rna_Sculpt_lock_z, (PropertyRNA*)&rna_Sculpt_lock_x,
	-1, "lock_y", 3, "Lock Y",
	"Disallow changes to the Y axis of vertices",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_lock_y_get, Sculpt_lock_y_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sculpt_lock_z = {
	{(PropertyRNA*)&rna_Sculpt_radial_symmetry, (PropertyRNA*)&rna_Sculpt_lock_y,
	-1, "lock_z", 3, "Lock Z",
	"Disallow changes to the Z axis of vertices",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_lock_z_get, Sculpt_lock_z_set, NULL, NULL, 0, NULL
};

static int rna_Sculpt_radial_symmetry_default[3] = {
	1,
	1,
	1
};

IntPropertyRNA rna_Sculpt_radial_symmetry = {
	{(PropertyRNA*)&rna_Sculpt_use_symmetry_feather, (PropertyRNA*)&rna_Sculpt_lock_z,
	-1, "radial_symmetry", 8195, "Radial Symmetry Count X Axis",
	"Number of times to copy strokes across the surface",
	0,
	PROP_INT, PROP_XYZ|PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(Sculpt, radial_symm), 0, NULL},
	NULL, NULL, Sculpt_radial_symmetry_get, Sculpt_radial_symmetry_set, NULL,
	0, 32, 1, 64, 1, 1, rna_Sculpt_radial_symmetry_default
};

BooleanPropertyRNA rna_Sculpt_use_symmetry_feather = {
	{(PropertyRNA*)&rna_Sculpt_use_symmetry_x, (PropertyRNA*)&rna_Sculpt_radial_symmetry,
	-1, "use_symmetry_feather", 3, "Symmetry Feathering",
	"Reduce the strength of the brush where it overlaps symmetrical daubs",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_symmetry_feather_get, Sculpt_use_symmetry_feather_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sculpt_use_symmetry_x = {
	{(PropertyRNA*)&rna_Sculpt_use_symmetry_y, (PropertyRNA*)&rna_Sculpt_use_symmetry_feather,
	-1, "use_symmetry_x", 3, "Symmetry X",
	"Mirror brush across the X axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_symmetry_x_get, Sculpt_use_symmetry_x_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sculpt_use_symmetry_y = {
	{(PropertyRNA*)&rna_Sculpt_use_symmetry_z, (PropertyRNA*)&rna_Sculpt_use_symmetry_x,
	-1, "use_symmetry_y", 3, "Symmetry Y",
	"Mirror brush across the Y axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_symmetry_y_get, Sculpt_use_symmetry_y_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sculpt_use_symmetry_z = {
	{(PropertyRNA*)&rna_Sculpt_use_threaded, (PropertyRNA*)&rna_Sculpt_use_symmetry_y,
	-1, "use_symmetry_z", 3, "Symmetry Z",
	"Mirror brush across the Z axis",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_symmetry_z_get, Sculpt_use_symmetry_z_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_Sculpt_use_threaded = {
	{NULL, (PropertyRNA*)&rna_Sculpt_use_symmetry_z,
	-1, "use_threaded", 3, "Use OpenMP",
	"Take advantage of multiple CPU cores to improve sculpting performance",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Sculpt_use_threaded_get, Sculpt_use_threaded_set, NULL, NULL, 0, NULL
};

StructRNA RNA_Sculpt = {
	{(ContainerRNA *)&RNA_Sensor, (ContainerRNA *)&RNA_ScrewModifier,
	NULL,
	{(PropertyRNA*)&rna_Sculpt_lock_x, (PropertyRNA*)&rna_Sculpt_use_threaded}},
	"Sculpt"	, NULL,NULL
, 0, "Sculpt", "",
	17,
	NULL, (PropertyRNA*)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Vertex Paint */
BooleanPropertyRNA rna_VertexPaint_use_all_faces = {
	{(PropertyRNA*)&rna_VertexPaint_use_normal, NULL,
	-1, "use_all_faces", 3, "All Faces",
	"Paint on all faces inside brush",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexPaint_use_all_faces_get, VertexPaint_use_all_faces_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_VertexPaint_use_normal = {
	{(PropertyRNA*)&rna_VertexPaint_use_spray, (PropertyRNA*)&rna_VertexPaint_use_all_faces,
	-1, "use_normal", 3, "Normals",
	"Applies the vertex normal before painting",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexPaint_use_normal_get, VertexPaint_use_normal_set, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_VertexPaint_use_spray = {
	{NULL, (PropertyRNA*)&rna_VertexPaint_use_normal,
	-1, "use_spray", 3, "Spray",
	"Keep applying paint effect while holding mouse",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	VertexPaint_use_spray_get, VertexPaint_use_spray_set, NULL, NULL, 0, NULL
};

StructRNA RNA_VertexPaint = {
	{(ContainerRNA *)&RNA_VisibilityActuator, (ContainerRNA *)&RNA_VertexGroups,
	NULL,
	{(PropertyRNA*)&rna_VertexPaint_use_all_faces, (PropertyRNA*)&rna_VertexPaint_use_spray}},
	"VertexPaint"	, NULL,NULL
, 0, "Vertex Paint", "Properties of vertex and weight paint mode",
	17,
	NULL, (PropertyRNA*)&rna_Paint_rna_properties,
	&RNA_Paint,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

