
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

#include "rna_main.c"
#include "rna_main_api.c"

/* Autogenerated Functions */


PointerPropertyRNA rna_BlendData_rna_type;
CollectionPropertyRNA rna_BlendData_actions;
CollectionPropertyRNA rna_BlendData_armatures;
CollectionPropertyRNA rna_BlendData_brushes;
CollectionPropertyRNA rna_BlendData_cameras;
CollectionPropertyRNA rna_BlendData_curves;
BooleanPropertyRNA rna_BlendData_is_dirty;
StringPropertyRNA rna_BlendData_filepath;
CollectionPropertyRNA rna_BlendData_grease_pencil;
CollectionPropertyRNA rna_BlendData_groups;
CollectionPropertyRNA rna_BlendData_images;
CollectionPropertyRNA rna_BlendData_lamps;
CollectionPropertyRNA rna_BlendData_lattices;
CollectionPropertyRNA rna_BlendData_libraries;
CollectionPropertyRNA rna_BlendData_materials;
CollectionPropertyRNA rna_BlendData_meshes;
CollectionPropertyRNA rna_BlendData_metaballs;
CollectionPropertyRNA rna_BlendData_node_groups;
CollectionPropertyRNA rna_BlendData_objects;
CollectionPropertyRNA rna_BlendData_particles;
CollectionPropertyRNA rna_BlendData_rna_properties;
CollectionPropertyRNA rna_BlendData_scenes;
CollectionPropertyRNA rna_BlendData_screens;
CollectionPropertyRNA rna_BlendData_scripts;
CollectionPropertyRNA rna_BlendData_shape_keys;
CollectionPropertyRNA rna_BlendData_sounds;
CollectionPropertyRNA rna_BlendData_texts;
CollectionPropertyRNA rna_BlendData_textures;
CollectionPropertyRNA rna_BlendData_fonts;
CollectionPropertyRNA rna_BlendData_window_managers;
CollectionPropertyRNA rna_BlendData_worlds;


PointerPropertyRNA rna_BlendDataActions_rna_type;
CollectionPropertyRNA rna_BlendDataActions_rna_properties;

extern FunctionRNA rna_BlendDataActions_new_func;
extern StringPropertyRNA rna_BlendDataActions_new_name;
extern PointerPropertyRNA rna_BlendDataActions_new_action;

extern FunctionRNA rna_BlendDataActions_remove_func;
extern PointerPropertyRNA rna_BlendDataActions_remove_action;

extern FunctionRNA rna_BlendDataActions_tag_func;
extern BooleanPropertyRNA rna_BlendDataActions_tag_value;



PointerPropertyRNA rna_BlendDataArmatures_rna_type;
CollectionPropertyRNA rna_BlendDataArmatures_rna_properties;

extern FunctionRNA rna_BlendDataArmatures_new_func;
extern StringPropertyRNA rna_BlendDataArmatures_new_name;
extern PointerPropertyRNA rna_BlendDataArmatures_new_armature;

extern FunctionRNA rna_BlendDataArmatures_remove_func;
extern PointerPropertyRNA rna_BlendDataArmatures_remove_armature;

extern FunctionRNA rna_BlendDataArmatures_tag_func;
extern BooleanPropertyRNA rna_BlendDataArmatures_tag_value;



PointerPropertyRNA rna_BlendDataBrushes_rna_type;
CollectionPropertyRNA rna_BlendDataBrushes_rna_properties;

extern FunctionRNA rna_BlendDataBrushes_new_func;
extern StringPropertyRNA rna_BlendDataBrushes_new_name;
extern PointerPropertyRNA rna_BlendDataBrushes_new_brush;

extern FunctionRNA rna_BlendDataBrushes_remove_func;
extern PointerPropertyRNA rna_BlendDataBrushes_remove_brush;

extern FunctionRNA rna_BlendDataBrushes_tag_func;
extern BooleanPropertyRNA rna_BlendDataBrushes_tag_value;



PointerPropertyRNA rna_BlendDataCameras_rna_type;
CollectionPropertyRNA rna_BlendDataCameras_rna_properties;

extern FunctionRNA rna_BlendDataCameras_new_func;
extern StringPropertyRNA rna_BlendDataCameras_new_name;
extern PointerPropertyRNA rna_BlendDataCameras_new_camera;

extern FunctionRNA rna_BlendDataCameras_remove_func;
extern PointerPropertyRNA rna_BlendDataCameras_remove_camera;

extern FunctionRNA rna_BlendDataCameras_tag_func;
extern BooleanPropertyRNA rna_BlendDataCameras_tag_value;



PointerPropertyRNA rna_BlendDataCurves_rna_type;
CollectionPropertyRNA rna_BlendDataCurves_rna_properties;

extern FunctionRNA rna_BlendDataCurves_new_func;
extern StringPropertyRNA rna_BlendDataCurves_new_name;
extern EnumPropertyRNA rna_BlendDataCurves_new_type;
extern PointerPropertyRNA rna_BlendDataCurves_new_curve;

extern FunctionRNA rna_BlendDataCurves_remove_func;
extern PointerPropertyRNA rna_BlendDataCurves_remove_curve;

extern FunctionRNA rna_BlendDataCurves_tag_func;
extern BooleanPropertyRNA rna_BlendDataCurves_tag_value;



PointerPropertyRNA rna_BlendDataFonts_rna_type;
CollectionPropertyRNA rna_BlendDataFonts_rna_properties;

extern FunctionRNA rna_BlendDataFonts_load_func;
extern StringPropertyRNA rna_BlendDataFonts_load_filepath;
extern PointerPropertyRNA rna_BlendDataFonts_load_vfont;

extern FunctionRNA rna_BlendDataFonts_remove_func;
extern PointerPropertyRNA rna_BlendDataFonts_remove_vfont;

extern FunctionRNA rna_BlendDataFonts_tag_func;
extern BooleanPropertyRNA rna_BlendDataFonts_tag_value;



PointerPropertyRNA rna_BlendDataGreasePencils_rna_type;
CollectionPropertyRNA rna_BlendDataGreasePencils_rna_properties;

extern FunctionRNA rna_BlendDataGreasePencils_tag_func;
extern BooleanPropertyRNA rna_BlendDataGreasePencils_tag_value;



PointerPropertyRNA rna_BlendDataGroups_rna_type;
CollectionPropertyRNA rna_BlendDataGroups_rna_properties;

extern FunctionRNA rna_BlendDataGroups_new_func;
extern StringPropertyRNA rna_BlendDataGroups_new_name;
extern PointerPropertyRNA rna_BlendDataGroups_new_group;

extern FunctionRNA rna_BlendDataGroups_remove_func;
extern PointerPropertyRNA rna_BlendDataGroups_remove_group;

extern FunctionRNA rna_BlendDataGroups_tag_func;
extern BooleanPropertyRNA rna_BlendDataGroups_tag_value;



PointerPropertyRNA rna_BlendDataImages_rna_type;
CollectionPropertyRNA rna_BlendDataImages_rna_properties;

extern FunctionRNA rna_BlendDataImages_new_func;
extern StringPropertyRNA rna_BlendDataImages_new_name;
extern IntPropertyRNA rna_BlendDataImages_new_width;
extern IntPropertyRNA rna_BlendDataImages_new_height;
extern BooleanPropertyRNA rna_BlendDataImages_new_alpha;
extern BooleanPropertyRNA rna_BlendDataImages_new_float_buffer;
extern PointerPropertyRNA rna_BlendDataImages_new_image;

extern FunctionRNA rna_BlendDataImages_load_func;
extern StringPropertyRNA rna_BlendDataImages_load_filepath;
extern PointerPropertyRNA rna_BlendDataImages_load_image;

extern FunctionRNA rna_BlendDataImages_remove_func;
extern PointerPropertyRNA rna_BlendDataImages_remove_image;

extern FunctionRNA rna_BlendDataImages_tag_func;
extern BooleanPropertyRNA rna_BlendDataImages_tag_value;



PointerPropertyRNA rna_BlendDataLamps_rna_type;
CollectionPropertyRNA rna_BlendDataLamps_rna_properties;

extern FunctionRNA rna_BlendDataLamps_new_func;
extern StringPropertyRNA rna_BlendDataLamps_new_name;
extern EnumPropertyRNA rna_BlendDataLamps_new_type;
extern PointerPropertyRNA rna_BlendDataLamps_new_lamp;

extern FunctionRNA rna_BlendDataLamps_remove_func;
extern PointerPropertyRNA rna_BlendDataLamps_remove_lamp;

extern FunctionRNA rna_BlendDataLamps_tag_func;
extern BooleanPropertyRNA rna_BlendDataLamps_tag_value;



PointerPropertyRNA rna_BlendDataLattices_rna_type;
CollectionPropertyRNA rna_BlendDataLattices_rna_properties;

extern FunctionRNA rna_BlendDataLattices_new_func;
extern StringPropertyRNA rna_BlendDataLattices_new_name;
extern PointerPropertyRNA rna_BlendDataLattices_new_lattice;

extern FunctionRNA rna_BlendDataLattices_remove_func;
extern PointerPropertyRNA rna_BlendDataLattices_remove_lattice;

extern FunctionRNA rna_BlendDataLattices_tag_func;
extern BooleanPropertyRNA rna_BlendDataLattices_tag_value;



PointerPropertyRNA rna_BlendDataLibraries_rna_type;
CollectionPropertyRNA rna_BlendDataLibraries_rna_properties;

extern FunctionRNA rna_BlendDataLibraries_tag_func;
extern BooleanPropertyRNA rna_BlendDataLibraries_tag_value;



PointerPropertyRNA rna_BlendDataMaterials_rna_type;
CollectionPropertyRNA rna_BlendDataMaterials_rna_properties;

extern FunctionRNA rna_BlendDataMaterials_new_func;
extern StringPropertyRNA rna_BlendDataMaterials_new_name;
extern PointerPropertyRNA rna_BlendDataMaterials_new_material;

extern FunctionRNA rna_BlendDataMaterials_remove_func;
extern PointerPropertyRNA rna_BlendDataMaterials_remove_material;

extern FunctionRNA rna_BlendDataMaterials_tag_func;
extern BooleanPropertyRNA rna_BlendDataMaterials_tag_value;



PointerPropertyRNA rna_BlendDataMeshes_rna_type;
CollectionPropertyRNA rna_BlendDataMeshes_rna_properties;

extern FunctionRNA rna_BlendDataMeshes_new_func;
extern StringPropertyRNA rna_BlendDataMeshes_new_name;
extern PointerPropertyRNA rna_BlendDataMeshes_new_mesh;

extern FunctionRNA rna_BlendDataMeshes_remove_func;
extern PointerPropertyRNA rna_BlendDataMeshes_remove_mesh;

extern FunctionRNA rna_BlendDataMeshes_tag_func;
extern BooleanPropertyRNA rna_BlendDataMeshes_tag_value;



PointerPropertyRNA rna_BlendDataMetaBalls_rna_type;
CollectionPropertyRNA rna_BlendDataMetaBalls_rna_properties;

extern FunctionRNA rna_BlendDataMetaBalls_new_func;
extern StringPropertyRNA rna_BlendDataMetaBalls_new_name;
extern PointerPropertyRNA rna_BlendDataMetaBalls_new_metaball;

extern FunctionRNA rna_BlendDataMetaBalls_remove_func;
extern PointerPropertyRNA rna_BlendDataMetaBalls_remove_metaball;

extern FunctionRNA rna_BlendDataMetaBalls_tag_func;
extern BooleanPropertyRNA rna_BlendDataMetaBalls_tag_value;



PointerPropertyRNA rna_BlendDataNodeTrees_rna_type;
CollectionPropertyRNA rna_BlendDataNodeTrees_rna_properties;

extern FunctionRNA rna_BlendDataNodeTrees_new_func;
extern StringPropertyRNA rna_BlendDataNodeTrees_new_name;
extern EnumPropertyRNA rna_BlendDataNodeTrees_new_type;
extern PointerPropertyRNA rna_BlendDataNodeTrees_new_tree;

extern FunctionRNA rna_BlendDataNodeTrees_remove_func;
extern PointerPropertyRNA rna_BlendDataNodeTrees_remove_tree;

extern FunctionRNA rna_BlendDataNodeTrees_tag_func;
extern BooleanPropertyRNA rna_BlendDataNodeTrees_tag_value;



PointerPropertyRNA rna_BlendDataObjects_rna_type;
CollectionPropertyRNA rna_BlendDataObjects_rna_properties;

extern FunctionRNA rna_BlendDataObjects_new_func;
extern StringPropertyRNA rna_BlendDataObjects_new_name;
extern PointerPropertyRNA rna_BlendDataObjects_new_object_data;
extern PointerPropertyRNA rna_BlendDataObjects_new_object;

extern FunctionRNA rna_BlendDataObjects_remove_func;
extern PointerPropertyRNA rna_BlendDataObjects_remove_object;

extern FunctionRNA rna_BlendDataObjects_tag_func;
extern BooleanPropertyRNA rna_BlendDataObjects_tag_value;



PointerPropertyRNA rna_BlendDataParticles_rna_type;
CollectionPropertyRNA rna_BlendDataParticles_rna_properties;

extern FunctionRNA rna_BlendDataParticles_new_func;
extern StringPropertyRNA rna_BlendDataParticles_new_name;
extern PointerPropertyRNA rna_BlendDataParticles_new_particle;

extern FunctionRNA rna_BlendDataParticles_remove_func;
extern PointerPropertyRNA rna_BlendDataParticles_remove_particle;

extern FunctionRNA rna_BlendDataParticles_tag_func;
extern BooleanPropertyRNA rna_BlendDataParticles_tag_value;



PointerPropertyRNA rna_BlendDataScenes_rna_type;
CollectionPropertyRNA rna_BlendDataScenes_rna_properties;

extern FunctionRNA rna_BlendDataScenes_new_func;
extern StringPropertyRNA rna_BlendDataScenes_new_name;
extern PointerPropertyRNA rna_BlendDataScenes_new_scene;

extern FunctionRNA rna_BlendDataScenes_remove_func;
extern PointerPropertyRNA rna_BlendDataScenes_remove_scene;



PointerPropertyRNA rna_BlendDataScreens_rna_type;
CollectionPropertyRNA rna_BlendDataScreens_rna_properties;

extern FunctionRNA rna_BlendDataScreens_tag_func;
extern BooleanPropertyRNA rna_BlendDataScreens_tag_value;



PointerPropertyRNA rna_BlendDataSounds_rna_type;
CollectionPropertyRNA rna_BlendDataSounds_rna_properties;

extern FunctionRNA rna_BlendDataSounds_tag_func;
extern BooleanPropertyRNA rna_BlendDataSounds_tag_value;



PointerPropertyRNA rna_BlendDataTexts_rna_type;
CollectionPropertyRNA rna_BlendDataTexts_rna_properties;

extern FunctionRNA rna_BlendDataTexts_new_func;
extern StringPropertyRNA rna_BlendDataTexts_new_name;
extern PointerPropertyRNA rna_BlendDataTexts_new_text;

extern FunctionRNA rna_BlendDataTexts_remove_func;
extern PointerPropertyRNA rna_BlendDataTexts_remove_text;

extern FunctionRNA rna_BlendDataTexts_load_func;
extern StringPropertyRNA rna_BlendDataTexts_load_filepath;
extern PointerPropertyRNA rna_BlendDataTexts_load_text;

extern FunctionRNA rna_BlendDataTexts_tag_func;
extern BooleanPropertyRNA rna_BlendDataTexts_tag_value;



PointerPropertyRNA rna_BlendDataTextures_rna_type;
CollectionPropertyRNA rna_BlendDataTextures_rna_properties;

extern FunctionRNA rna_BlendDataTextures_new_func;
extern StringPropertyRNA rna_BlendDataTextures_new_name;
extern EnumPropertyRNA rna_BlendDataTextures_new_type;
extern PointerPropertyRNA rna_BlendDataTextures_new_texture;

extern FunctionRNA rna_BlendDataTextures_remove_func;
extern PointerPropertyRNA rna_BlendDataTextures_remove_texture;

extern FunctionRNA rna_BlendDataTextures_tag_func;
extern BooleanPropertyRNA rna_BlendDataTextures_tag_value;



PointerPropertyRNA rna_BlendDataWindowManagers_rna_type;
CollectionPropertyRNA rna_BlendDataWindowManagers_rna_properties;

extern FunctionRNA rna_BlendDataWindowManagers_tag_func;
extern BooleanPropertyRNA rna_BlendDataWindowManagers_tag_value;



PointerPropertyRNA rna_BlendDataWorlds_rna_type;
CollectionPropertyRNA rna_BlendDataWorlds_rna_properties;

extern FunctionRNA rna_BlendDataWorlds_new_func;
extern StringPropertyRNA rna_BlendDataWorlds_new_name;
extern PointerPropertyRNA rna_BlendDataWorlds_new_world;

extern FunctionRNA rna_BlendDataWorlds_remove_func;
extern PointerPropertyRNA rna_BlendDataWorlds_remove_world;

extern FunctionRNA rna_BlendDataWorlds_tag_func;
extern BooleanPropertyRNA rna_BlendDataWorlds_tag_value;


PointerRNA BlendData_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendData_actions_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Action, rna_iterator_listbase_get(iter));
}

void BlendData_actions_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_actions;

	rna_Main_action_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_actions_get(iter);
}

void BlendData_actions_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_actions_get(iter);
}

void BlendData_actions_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_armatures_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Armature, rna_iterator_listbase_get(iter));
}

void BlendData_armatures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_armatures;

	rna_Main_armature_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_armatures_get(iter);
}

void BlendData_armatures_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_armatures_get(iter);
}

void BlendData_armatures_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_brushes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Brush, rna_iterator_listbase_get(iter));
}

void BlendData_brushes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_brushes;

	rna_Main_brush_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_brushes_get(iter);
}

void BlendData_brushes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_brushes_get(iter);
}

void BlendData_brushes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_cameras_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Camera, rna_iterator_listbase_get(iter));
}

void BlendData_cameras_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_cameras;

	rna_Main_camera_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_cameras_get(iter);
}

void BlendData_cameras_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_cameras_get(iter);
}

void BlendData_cameras_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_curves_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Curve, rna_iterator_listbase_get(iter));
}

void BlendData_curves_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_curves;

	rna_Main_curve_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_curves_get(iter);
}

void BlendData_curves_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_curves_get(iter);
}

void BlendData_curves_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BlendData_is_dirty_get(PointerRNA *ptr)
{
	return rna_Main_is_dirty_get(ptr);
}

void BlendData_filepath_get(PointerRNA *ptr, char *value)
{
	rna_Main_filepath_get(ptr, value);
}

int BlendData_filepath_length(PointerRNA *ptr)
{
	return rna_Main_filepath_length(ptr);
}

static PointerRNA BlendData_grease_pencil_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_GreasePencil, rna_iterator_listbase_get(iter));
}

void BlendData_grease_pencil_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_grease_pencil;

	rna_Main_gpencil_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_grease_pencil_get(iter);
}

void BlendData_grease_pencil_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_grease_pencil_get(iter);
}

void BlendData_grease_pencil_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Group, rna_iterator_listbase_get(iter));
}

void BlendData_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_groups;

	rna_Main_group_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_groups_get(iter);
}

void BlendData_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_groups_get(iter);
}

void BlendData_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_images_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Image, rna_iterator_listbase_get(iter));
}

void BlendData_images_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_images;

	rna_Main_image_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_images_get(iter);
}

void BlendData_images_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_images_get(iter);
}

void BlendData_images_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_lamps_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Lamp, rna_iterator_listbase_get(iter));
}

void BlendData_lamps_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_lamps;

	rna_Main_lamp_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_lamps_get(iter);
}

void BlendData_lamps_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_lamps_get(iter);
}

void BlendData_lamps_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_lattices_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Lattice, rna_iterator_listbase_get(iter));
}

void BlendData_lattices_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_lattices;

	rna_Main_latt_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_lattices_get(iter);
}

void BlendData_lattices_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_lattices_get(iter);
}

void BlendData_lattices_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_libraries_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Library, rna_iterator_listbase_get(iter));
}

void BlendData_libraries_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_libraries;

	rna_Main_library_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_libraries_get(iter);
}

void BlendData_libraries_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_libraries_get(iter);
}

void BlendData_libraries_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_materials_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Material, rna_iterator_listbase_get(iter));
}

void BlendData_materials_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_materials;

	rna_Main_mat_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_materials_get(iter);
}

void BlendData_materials_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_materials_get(iter);
}

void BlendData_materials_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_meshes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Mesh, rna_iterator_listbase_get(iter));
}

void BlendData_meshes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_meshes;

	rna_Main_mesh_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_meshes_get(iter);
}

void BlendData_meshes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_meshes_get(iter);
}

void BlendData_meshes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_metaballs_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_MetaBall, rna_iterator_listbase_get(iter));
}

void BlendData_metaballs_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_metaballs;

	rna_Main_mball_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_metaballs_get(iter);
}

void BlendData_metaballs_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_metaballs_get(iter);
}

void BlendData_metaballs_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_node_groups_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_NodeTree, rna_iterator_listbase_get(iter));
}

void BlendData_node_groups_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_node_groups;

	rna_Main_nodetree_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_node_groups_get(iter);
}

void BlendData_node_groups_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_node_groups_get(iter);
}

void BlendData_node_groups_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_objects_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Object, rna_iterator_listbase_get(iter));
}

void BlendData_objects_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_objects;

	rna_Main_object_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_objects_get(iter);
}

void BlendData_objects_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_objects_get(iter);
}

void BlendData_objects_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_particles_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ParticleSettings, rna_iterator_listbase_get(iter));
}

void BlendData_particles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_particles;

	rna_Main_particle_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_particles_get(iter);
}

void BlendData_particles_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_particles_get(iter);
}

void BlendData_particles_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendData_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_rna_properties_get(iter);
}

void BlendData_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_rna_properties_get(iter);
}

void BlendData_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_scenes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Scene, rna_iterator_listbase_get(iter));
}

void BlendData_scenes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_scenes;

	rna_Main_scene_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_scenes_get(iter);
}

void BlendData_scenes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_scenes_get(iter);
}

void BlendData_scenes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_screens_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Screen, rna_iterator_listbase_get(iter));
}

void BlendData_screens_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_screens;

	rna_Main_screen_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_screens_get(iter);
}

void BlendData_screens_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_screens_get(iter);
}

void BlendData_screens_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_scripts_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ID, rna_iterator_listbase_get(iter));
}

void BlendData_scripts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_scripts;

	rna_Main_script_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_scripts_get(iter);
}

void BlendData_scripts_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_scripts_get(iter);
}

void BlendData_scripts_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_shape_keys_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Key, rna_iterator_listbase_get(iter));
}

void BlendData_shape_keys_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_shape_keys;

	rna_Main_key_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_shape_keys_get(iter);
}

void BlendData_shape_keys_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_shape_keys_get(iter);
}

void BlendData_shape_keys_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_sounds_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Sound, rna_iterator_listbase_get(iter));
}

void BlendData_sounds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_sounds;

	rna_Main_sound_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_sounds_get(iter);
}

void BlendData_sounds_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_sounds_get(iter);
}

void BlendData_sounds_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_texts_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Text, rna_iterator_listbase_get(iter));
}

void BlendData_texts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_texts;

	rna_Main_text_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_texts_get(iter);
}

void BlendData_texts_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_texts_get(iter);
}

void BlendData_texts_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_textures_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Texture, rna_iterator_listbase_get(iter));
}

void BlendData_textures_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_textures;

	rna_Main_tex_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_textures_get(iter);
}

void BlendData_textures_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_textures_get(iter);
}

void BlendData_textures_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_fonts_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_VectorFont, rna_iterator_listbase_get(iter));
}

void BlendData_fonts_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_fonts;

	rna_Main_font_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_fonts_get(iter);
}

void BlendData_fonts_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_fonts_get(iter);
}

void BlendData_fonts_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_window_managers_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_WindowManager, rna_iterator_listbase_get(iter));
}

void BlendData_window_managers_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_window_managers;

	rna_Main_wm_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_window_managers_get(iter);
}

void BlendData_window_managers_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_window_managers_get(iter);
}

void BlendData_window_managers_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

static PointerRNA BlendData_worlds_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_World, rna_iterator_listbase_get(iter));
}

void BlendData_worlds_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendData_worlds;

	rna_Main_world_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendData_worlds_get(iter);
}

void BlendData_worlds_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if(iter->valid)
		iter->ptr= BlendData_worlds_get(iter);
}

void BlendData_worlds_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataActions_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataActions_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataActions_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataActions_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataActions_rna_properties_get(iter);
}

void BlendDataActions_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataActions_rna_properties_get(iter);
}

void BlendDataActions_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataArmatures_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataArmatures_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataArmatures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataArmatures_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataArmatures_rna_properties_get(iter);
}

void BlendDataArmatures_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataArmatures_rna_properties_get(iter);
}

void BlendDataArmatures_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataBrushes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataBrushes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataBrushes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataBrushes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataBrushes_rna_properties_get(iter);
}

void BlendDataBrushes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataBrushes_rna_properties_get(iter);
}

void BlendDataBrushes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataCameras_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataCameras_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataCameras_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataCameras_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataCameras_rna_properties_get(iter);
}

void BlendDataCameras_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataCameras_rna_properties_get(iter);
}

void BlendDataCameras_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataCurves_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataCurves_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataCurves_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataCurves_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataCurves_rna_properties_get(iter);
}

void BlendDataCurves_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataCurves_rna_properties_get(iter);
}

void BlendDataCurves_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataFonts_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataFonts_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataFonts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataFonts_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataFonts_rna_properties_get(iter);
}

void BlendDataFonts_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataFonts_rna_properties_get(iter);
}

void BlendDataFonts_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataGreasePencils_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataGreasePencils_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataGreasePencils_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataGreasePencils_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataGreasePencils_rna_properties_get(iter);
}

void BlendDataGreasePencils_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataGreasePencils_rna_properties_get(iter);
}

void BlendDataGreasePencils_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataGroups_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataGroups_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataGroups_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataGroups_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataGroups_rna_properties_get(iter);
}

void BlendDataGroups_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataGroups_rna_properties_get(iter);
}

void BlendDataGroups_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataImages_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataImages_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataImages_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataImages_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataImages_rna_properties_get(iter);
}

void BlendDataImages_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataImages_rna_properties_get(iter);
}

void BlendDataImages_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataLamps_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLamps_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataLamps_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataLamps_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataLamps_rna_properties_get(iter);
}

void BlendDataLamps_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataLamps_rna_properties_get(iter);
}

void BlendDataLamps_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataLattices_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLattices_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataLattices_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataLattices_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataLattices_rna_properties_get(iter);
}

void BlendDataLattices_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataLattices_rna_properties_get(iter);
}

void BlendDataLattices_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataLibraries_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataLibraries_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataLibraries_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataLibraries_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataLibraries_rna_properties_get(iter);
}

void BlendDataLibraries_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataLibraries_rna_properties_get(iter);
}

void BlendDataLibraries_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataMaterials_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMaterials_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMaterials_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataMaterials_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataMaterials_rna_properties_get(iter);
}

void BlendDataMaterials_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataMaterials_rna_properties_get(iter);
}

void BlendDataMaterials_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataMeshes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMeshes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMeshes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataMeshes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataMeshes_rna_properties_get(iter);
}

void BlendDataMeshes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataMeshes_rna_properties_get(iter);
}

void BlendDataMeshes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataMetaBalls_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataMetaBalls_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataMetaBalls_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataMetaBalls_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataMetaBalls_rna_properties_get(iter);
}

void BlendDataMetaBalls_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataMetaBalls_rna_properties_get(iter);
}

void BlendDataMetaBalls_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataNodeTrees_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataNodeTrees_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataNodeTrees_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataNodeTrees_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataNodeTrees_rna_properties_get(iter);
}

void BlendDataNodeTrees_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataNodeTrees_rna_properties_get(iter);
}

void BlendDataNodeTrees_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataObjects_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataObjects_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataObjects_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataObjects_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataObjects_rna_properties_get(iter);
}

void BlendDataObjects_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataObjects_rna_properties_get(iter);
}

void BlendDataObjects_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataParticles_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataParticles_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataParticles_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataParticles_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataParticles_rna_properties_get(iter);
}

void BlendDataParticles_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataParticles_rna_properties_get(iter);
}

void BlendDataParticles_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataScenes_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataScenes_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataScenes_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataScenes_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataScenes_rna_properties_get(iter);
}

void BlendDataScenes_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataScenes_rna_properties_get(iter);
}

void BlendDataScenes_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataScreens_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataScreens_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataScreens_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataScreens_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataScreens_rna_properties_get(iter);
}

void BlendDataScreens_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataScreens_rna_properties_get(iter);
}

void BlendDataScreens_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataSounds_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataSounds_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataSounds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataSounds_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataSounds_rna_properties_get(iter);
}

void BlendDataSounds_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataSounds_rna_properties_get(iter);
}

void BlendDataSounds_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataTexts_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataTexts_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataTexts_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataTexts_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataTexts_rna_properties_get(iter);
}

void BlendDataTexts_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataTexts_rna_properties_get(iter);
}

void BlendDataTexts_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataTextures_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataTextures_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataTextures_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataTextures_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataTextures_rna_properties_get(iter);
}

void BlendDataTextures_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataTextures_rna_properties_get(iter);
}

void BlendDataTextures_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataWindowManagers_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataWindowManagers_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataWindowManagers_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataWindowManagers_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataWindowManagers_rna_properties_get(iter);
}

void BlendDataWindowManagers_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataWindowManagers_rna_properties_get(iter);
}

void BlendDataWindowManagers_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

PointerRNA BlendDataWorlds_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA BlendDataWorlds_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BlendDataWorlds_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent= *ptr;
	iter->prop= (PropertyRNA*)&rna_BlendDataWorlds_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if(iter->valid)
		iter->ptr= BlendDataWorlds_rna_properties_get(iter);
}

void BlendDataWorlds_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if(iter->valid)
		iter->ptr= BlendDataWorlds_rna_properties_get(iter);
}

void BlendDataWorlds_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}


void BlendDataActions_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataActions *_self;
	const char* name;
	struct bAction *action;
	char *_data, *_retdata;
	
	_self= (struct BlendDataActions *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	action= rna_Main_actions_new(_self, name);
	*((struct bAction**)_retdata)= action;
}

void BlendDataActions_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataActions *_self;
	struct bAction *action;
	char *_data;
	
	_self= (struct BlendDataActions *)_ptr->data;
	_data= (char *)_parms->data;
	action= *((struct bAction**)_data);
	
	rna_Main_actions_remove(_self, reports, action);
}

void BlendDataActions_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataActions *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataActions *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_actions_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bAction *rna_Main_actions_new(struct BlendDataActions *_self, const char* name);
void rna_Main_actions_remove(struct BlendDataActions *_self, ReportList *reports, struct bAction *action);
void rna_Main_actions_tag(struct BlendDataActions *_self, int value);

void BlendDataArmatures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataArmatures *_self;
	const char* name;
	struct bArmature *armature;
	char *_data, *_retdata;
	
	_self= (struct BlendDataArmatures *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	armature= rna_Main_armatures_new(_self, name);
	*((struct bArmature**)_retdata)= armature;
}

void BlendDataArmatures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataArmatures *_self;
	struct bArmature *armature;
	char *_data;
	
	_self= (struct BlendDataArmatures *)_ptr->data;
	_data= (char *)_parms->data;
	armature= *((struct bArmature**)_data);
	
	rna_Main_armatures_remove(_self, reports, armature);
}

void BlendDataArmatures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataArmatures *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataArmatures *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_armatures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bArmature *rna_Main_armatures_new(struct BlendDataArmatures *_self, const char* name);
void rna_Main_armatures_remove(struct BlendDataArmatures *_self, ReportList *reports, struct bArmature *armature);
void rna_Main_armatures_tag(struct BlendDataArmatures *_self, int value);

void BlendDataBrushes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataBrushes *_self;
	const char* name;
	struct Brush *brush;
	char *_data, *_retdata;
	
	_self= (struct BlendDataBrushes *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	brush= rna_Main_brushes_new(_self, name);
	*((struct Brush**)_retdata)= brush;
}

void BlendDataBrushes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataBrushes *_self;
	struct Brush *brush;
	char *_data;
	
	_self= (struct BlendDataBrushes *)_ptr->data;
	_data= (char *)_parms->data;
	brush= *((struct Brush**)_data);
	
	rna_Main_brushes_remove(_self, reports, brush);
}

void BlendDataBrushes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataBrushes *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataBrushes *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_brushes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Brush *rna_Main_brushes_new(struct BlendDataBrushes *_self, const char* name);
void rna_Main_brushes_remove(struct BlendDataBrushes *_self, ReportList *reports, struct Brush *brush);
void rna_Main_brushes_tag(struct BlendDataBrushes *_self, int value);

void BlendDataCameras_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataCameras *_self;
	const char* name;
	struct Camera *camera;
	char *_data, *_retdata;
	
	_self= (struct BlendDataCameras *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	camera= rna_Main_cameras_new(_self, name);
	*((struct Camera**)_retdata)= camera;
}

void BlendDataCameras_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataCameras *_self;
	struct Camera *camera;
	char *_data;
	
	_self= (struct BlendDataCameras *)_ptr->data;
	_data= (char *)_parms->data;
	camera= *((struct Camera**)_data);
	
	rna_Main_cameras_remove(_self, reports, camera);
}

void BlendDataCameras_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataCameras *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataCameras *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_cameras_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Camera *rna_Main_cameras_new(struct BlendDataCameras *_self, const char* name);
void rna_Main_cameras_remove(struct BlendDataCameras *_self, ReportList *reports, struct Camera *camera);
void rna_Main_cameras_tag(struct BlendDataCameras *_self, int value);

void BlendDataCurves_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataCurves *_self;
	const char* name;
	int type;
	struct Curve *curve;
	char *_data, *_retdata;
	
	_self= (struct BlendDataCurves *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	curve= rna_Main_curves_new(_self, name, type);
	*((struct Curve**)_retdata)= curve;
}

void BlendDataCurves_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataCurves *_self;
	struct Curve *curve;
	char *_data;
	
	_self= (struct BlendDataCurves *)_ptr->data;
	_data= (char *)_parms->data;
	curve= *((struct Curve**)_data);
	
	rna_Main_curves_remove(_self, reports, curve);
}

void BlendDataCurves_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataCurves *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataCurves *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_curves_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Curve *rna_Main_curves_new(struct BlendDataCurves *_self, const char* name, int type);
void rna_Main_curves_remove(struct BlendDataCurves *_self, ReportList *reports, struct Curve *curve);
void rna_Main_curves_tag(struct BlendDataCurves *_self, int value);

void BlendDataFonts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataFonts *_self;
	const char* filepath;
	struct VFont *vfont;
	char *_data, *_retdata;
	
	_self= (struct BlendDataFonts *)_ptr->data;
	_data= (char *)_parms->data;
	filepath= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	vfont= rna_Main_fonts_load(_self, reports, filepath);
	*((struct VFont**)_retdata)= vfont;
}

void BlendDataFonts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataFonts *_self;
	struct VFont *vfont;
	char *_data;
	
	_self= (struct BlendDataFonts *)_ptr->data;
	_data= (char *)_parms->data;
	vfont= *((struct VFont**)_data);
	
	rna_Main_fonts_remove(_self, reports, vfont);
}

void BlendDataFonts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataFonts *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataFonts *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_fonts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct VFont *rna_Main_fonts_load(struct BlendDataFonts *_self, ReportList *reports, const char* filepath);
void rna_Main_fonts_remove(struct BlendDataFonts *_self, ReportList *reports, struct VFont *vfont);
void rna_Main_fonts_tag(struct BlendDataFonts *_self, int value);

void BlendDataGreasePencils_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataGreasePencils *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataGreasePencils *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_gpencil_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_gpencil_tag(struct BlendDataGreasePencils *_self, int value);

void BlendDataGroups_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataGroups *_self;
	const char* name;
	struct Group *group;
	char *_data, *_retdata;
	
	_self= (struct BlendDataGroups *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	group= rna_Main_groups_new(_self, name);
	*((struct Group**)_retdata)= group;
}

void BlendDataGroups_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataGroups *_self;
	struct Group *group;
	char *_data;
	
	_self= (struct BlendDataGroups *)_ptr->data;
	_data= (char *)_parms->data;
	group= *((struct Group**)_data);
	
	rna_Main_groups_remove(_self, group);
}

void BlendDataGroups_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataGroups *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataGroups *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_groups_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Group *rna_Main_groups_new(struct BlendDataGroups *_self, const char* name);
void rna_Main_groups_remove(struct BlendDataGroups *_self, struct Group *group);
void rna_Main_groups_tag(struct BlendDataGroups *_self, int value);

void BlendDataImages_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataImages *_self;
	const char* name;
	int width;
	int height;
	int alpha;
	int float_buffer;
	struct Image *image;
	char *_data, *_retdata;
	
	_self= (struct BlendDataImages *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	width= *((int*)_data);
	_data+= 4;
	height= *((int*)_data);
	_data+= 4;
	alpha= *((int*)_data);
	_data+= 4;
	float_buffer= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	image= rna_Main_images_new(_self, name, width, height, alpha, float_buffer);
	*((struct Image**)_retdata)= image;
}

void BlendDataImages_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataImages *_self;
	const char* filepath;
	struct Image *image;
	char *_data, *_retdata;
	
	_self= (struct BlendDataImages *)_ptr->data;
	_data= (char *)_parms->data;
	filepath= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	image= rna_Main_images_load(_self, reports, filepath);
	*((struct Image**)_retdata)= image;
}

void BlendDataImages_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataImages *_self;
	struct Image *image;
	char *_data;
	
	_self= (struct BlendDataImages *)_ptr->data;
	_data= (char *)_parms->data;
	image= *((struct Image**)_data);
	
	rna_Main_images_remove(_self, reports, image);
}

void BlendDataImages_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataImages *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataImages *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_images_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Image *rna_Main_images_new(struct BlendDataImages *_self, const char* name, int width, int height, int alpha, int float_buffer);
struct Image *rna_Main_images_load(struct BlendDataImages *_self, ReportList *reports, const char* filepath);
void rna_Main_images_remove(struct BlendDataImages *_self, ReportList *reports, struct Image *image);
void rna_Main_images_tag(struct BlendDataImages *_self, int value);

void BlendDataLamps_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataLamps *_self;
	const char* name;
	int type;
	struct Lamp *lamp;
	char *_data, *_retdata;
	
	_self= (struct BlendDataLamps *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	lamp= rna_Main_lamps_new(_self, name, type);
	*((struct Lamp**)_retdata)= lamp;
}

void BlendDataLamps_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataLamps *_self;
	struct Lamp *lamp;
	char *_data;
	
	_self= (struct BlendDataLamps *)_ptr->data;
	_data= (char *)_parms->data;
	lamp= *((struct Lamp**)_data);
	
	rna_Main_lamps_remove(_self, reports, lamp);
}

void BlendDataLamps_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataLamps *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataLamps *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_lamps_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Lamp *rna_Main_lamps_new(struct BlendDataLamps *_self, const char* name, int type);
void rna_Main_lamps_remove(struct BlendDataLamps *_self, ReportList *reports, struct Lamp *lamp);
void rna_Main_lamps_tag(struct BlendDataLamps *_self, int value);

void BlendDataLattices_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataLattices *_self;
	const char* name;
	struct Lattice *lattice;
	char *_data, *_retdata;
	
	_self= (struct BlendDataLattices *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	lattice= rna_Main_lattices_new(_self, name);
	*((struct Lattice**)_retdata)= lattice;
}

void BlendDataLattices_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataLattices *_self;
	struct Lattice *lattice;
	char *_data;
	
	_self= (struct BlendDataLattices *)_ptr->data;
	_data= (char *)_parms->data;
	lattice= *((struct Lattice**)_data);
	
	rna_Main_lattices_remove(_self, reports, lattice);
}

void BlendDataLattices_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataLattices *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataLattices *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_lattices_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Lattice *rna_Main_lattices_new(struct BlendDataLattices *_self, const char* name);
void rna_Main_lattices_remove(struct BlendDataLattices *_self, ReportList *reports, struct Lattice *lattice);
void rna_Main_lattices_tag(struct BlendDataLattices *_self, int value);

void BlendDataLibraries_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataLibraries *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataLibraries *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_libraries_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_libraries_tag(struct BlendDataLibraries *_self, int value);

void BlendDataMaterials_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMaterials *_self;
	const char* name;
	struct Material *material;
	char *_data, *_retdata;
	
	_self= (struct BlendDataMaterials *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	material= rna_Main_materials_new(_self, name);
	*((struct Material**)_retdata)= material;
}

void BlendDataMaterials_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMaterials *_self;
	struct Material *material;
	char *_data;
	
	_self= (struct BlendDataMaterials *)_ptr->data;
	_data= (char *)_parms->data;
	material= *((struct Material**)_data);
	
	rna_Main_materials_remove(_self, reports, material);
}

void BlendDataMaterials_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMaterials *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataMaterials *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_materials_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Material *rna_Main_materials_new(struct BlendDataMaterials *_self, const char* name);
void rna_Main_materials_remove(struct BlendDataMaterials *_self, ReportList *reports, struct Material *material);
void rna_Main_materials_tag(struct BlendDataMaterials *_self, int value);

void BlendDataMeshes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMeshes *_self;
	const char* name;
	struct Mesh *mesh;
	char *_data, *_retdata;
	
	_self= (struct BlendDataMeshes *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	mesh= rna_Main_meshes_new(_self, name);
	*((struct Mesh**)_retdata)= mesh;
}

void BlendDataMeshes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMeshes *_self;
	struct Mesh *mesh;
	char *_data;
	
	_self= (struct BlendDataMeshes *)_ptr->data;
	_data= (char *)_parms->data;
	mesh= *((struct Mesh**)_data);
	
	rna_Main_meshes_remove(_self, reports, mesh);
}

void BlendDataMeshes_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMeshes *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataMeshes *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_meshes_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Mesh *rna_Main_meshes_new(struct BlendDataMeshes *_self, const char* name);
void rna_Main_meshes_remove(struct BlendDataMeshes *_self, ReportList *reports, struct Mesh *mesh);
void rna_Main_meshes_tag(struct BlendDataMeshes *_self, int value);

void BlendDataMetaBalls_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMetaBalls *_self;
	const char* name;
	struct MetaBall *metaball;
	char *_data, *_retdata;
	
	_self= (struct BlendDataMetaBalls *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	metaball= rna_Main_metaballs_new(_self, name);
	*((struct MetaBall**)_retdata)= metaball;
}

void BlendDataMetaBalls_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMetaBalls *_self;
	struct MetaBall *metaball;
	char *_data;
	
	_self= (struct BlendDataMetaBalls *)_ptr->data;
	_data= (char *)_parms->data;
	metaball= *((struct MetaBall**)_data);
	
	rna_Main_metaballs_remove(_self, reports, metaball);
}

void BlendDataMetaBalls_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataMetaBalls *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataMetaBalls *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_metaballs_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct MetaBall *rna_Main_metaballs_new(struct BlendDataMetaBalls *_self, const char* name);
void rna_Main_metaballs_remove(struct BlendDataMetaBalls *_self, ReportList *reports, struct MetaBall *metaball);
void rna_Main_metaballs_tag(struct BlendDataMetaBalls *_self, int value);

void BlendDataNodeTrees_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataNodeTrees *_self;
	const char* name;
	int type;
	struct bNodeTree *tree;
	char *_data, *_retdata;
	
	_self= (struct BlendDataNodeTrees *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	tree= rna_Main_nodetree_new(_self, name, type);
	*((struct bNodeTree**)_retdata)= tree;
}

void BlendDataNodeTrees_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataNodeTrees *_self;
	struct bNodeTree *tree;
	char *_data;
	
	_self= (struct BlendDataNodeTrees *)_ptr->data;
	_data= (char *)_parms->data;
	tree= *((struct bNodeTree**)_data);
	
	rna_Main_nodetree_remove(_self, reports, tree);
}

void BlendDataNodeTrees_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataNodeTrees *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataNodeTrees *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_node_groups_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct bNodeTree *rna_Main_nodetree_new(struct BlendDataNodeTrees *_self, const char* name, int type);
void rna_Main_nodetree_remove(struct BlendDataNodeTrees *_self, ReportList *reports, struct bNodeTree *tree);
void rna_Main_node_groups_tag(struct BlendDataNodeTrees *_self, int value);

void BlendDataObjects_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataObjects *_self;
	const char* name;
	struct ID *object_data;
	struct Object *object;
	char *_data, *_retdata;
	
	_self= (struct BlendDataObjects *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	object_data= *((struct ID**)_data);
	_data+= 4;
	_retdata= _data;
	
	object= rna_Main_objects_new(_self, reports, name, object_data);
	*((struct Object**)_retdata)= object;
}

void BlendDataObjects_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataObjects *_self;
	struct Object *object;
	char *_data;
	
	_self= (struct BlendDataObjects *)_ptr->data;
	_data= (char *)_parms->data;
	object= *((struct Object**)_data);
	
	rna_Main_objects_remove(_self, reports, object);
}

void BlendDataObjects_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataObjects *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataObjects *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_objects_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Object *rna_Main_objects_new(struct BlendDataObjects *_self, ReportList *reports, const char* name, struct ID *object_data);
void rna_Main_objects_remove(struct BlendDataObjects *_self, ReportList *reports, struct Object *object);
void rna_Main_objects_tag(struct BlendDataObjects *_self, int value);

void BlendDataParticles_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataParticles *_self;
	const char* name;
	struct ParticleSettings *particle;
	char *_data, *_retdata;
	
	_self= (struct BlendDataParticles *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	particle= rna_Main_particles_new(_self, name);
	*((struct ParticleSettings**)_retdata)= particle;
}

void BlendDataParticles_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataParticles *_self;
	struct ParticleSettings *particle;
	char *_data;
	
	_self= (struct BlendDataParticles *)_ptr->data;
	_data= (char *)_parms->data;
	particle= *((struct ParticleSettings**)_data);
	
	rna_Main_particles_remove(_self, reports, particle);
}

void BlendDataParticles_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataParticles *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataParticles *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_particles_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct ParticleSettings *rna_Main_particles_new(struct BlendDataParticles *_self, const char* name);
void rna_Main_particles_remove(struct BlendDataParticles *_self, ReportList *reports, struct ParticleSettings *particle);
void rna_Main_particles_tag(struct BlendDataParticles *_self, int value);

void BlendDataScenes_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataScenes *_self;
	const char* name;
	struct Scene *scene;
	char *_data, *_retdata;
	
	_self= (struct BlendDataScenes *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	scene= rna_Main_scenes_new(_self, name);
	*((struct Scene**)_retdata)= scene;
}

void BlendDataScenes_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataScenes *_self;
	struct Scene *scene;
	char *_data;
	
	_self= (struct BlendDataScenes *)_ptr->data;
	_data= (char *)_parms->data;
	scene= *((struct Scene**)_data);
	
	rna_Main_scenes_remove(_self, C, reports, scene);
}

/* Repeated prototypes to detect errors */

struct Scene *rna_Main_scenes_new(struct BlendDataScenes *_self, const char* name);
void rna_Main_scenes_remove(struct BlendDataScenes *_self, bContext *C, ReportList *reports, struct Scene *scene);

void BlendDataScreens_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataScreens *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataScreens *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_screens_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_screens_tag(struct BlendDataScreens *_self, int value);

void BlendDataSounds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataSounds *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataSounds *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_sounds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_sounds_tag(struct BlendDataSounds *_self, int value);

void BlendDataTexts_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataTexts *_self;
	const char* name;
	struct Text *text;
	char *_data, *_retdata;
	
	_self= (struct BlendDataTexts *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	text= rna_Main_texts_new(_self, name);
	*((struct Text**)_retdata)= text;
}

void BlendDataTexts_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataTexts *_self;
	struct Text *text;
	char *_data;
	
	_self= (struct BlendDataTexts *)_ptr->data;
	_data= (char *)_parms->data;
	text= *((struct Text**)_data);
	
	rna_Main_texts_remove(_self, text);
}

void BlendDataTexts_load_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataTexts *_self;
	const char* filepath;
	struct Text *text;
	char *_data, *_retdata;
	
	_self= (struct BlendDataTexts *)_ptr->data;
	_data= (char *)_parms->data;
	filepath= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	text= rna_Main_texts_load(_self, reports, filepath);
	*((struct Text**)_retdata)= text;
}

void BlendDataTexts_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataTexts *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataTexts *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_texts_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Text *rna_Main_texts_new(struct BlendDataTexts *_self, const char* name);
void rna_Main_texts_remove(struct BlendDataTexts *_self, struct Text *text);
struct Text *rna_Main_texts_load(struct BlendDataTexts *_self, ReportList *reports, const char* filepath);
void rna_Main_texts_tag(struct BlendDataTexts *_self, int value);

void BlendDataTextures_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataTextures *_self;
	const char* name;
	int type;
	struct Tex *texture;
	char *_data, *_retdata;
	
	_self= (struct BlendDataTextures *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	type= *((int*)_data);
	_data+= 4;
	_retdata= _data;
	
	texture= rna_Main_textures_new(_self, name, type);
	*((struct Tex**)_retdata)= texture;
}

void BlendDataTextures_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataTextures *_self;
	struct Tex *texture;
	char *_data;
	
	_self= (struct BlendDataTextures *)_ptr->data;
	_data= (char *)_parms->data;
	texture= *((struct Tex**)_data);
	
	rna_Main_textures_remove(_self, reports, texture);
}

void BlendDataTextures_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataTextures *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataTextures *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_textures_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct Tex *rna_Main_textures_new(struct BlendDataTextures *_self, const char* name, int type);
void rna_Main_textures_remove(struct BlendDataTextures *_self, ReportList *reports, struct Tex *texture);
void rna_Main_textures_tag(struct BlendDataTextures *_self, int value);

void BlendDataWindowManagers_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataWindowManagers *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataWindowManagers *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_window_managers_tag(_self, value);
}

/* Repeated prototypes to detect errors */

void rna_Main_window_managers_tag(struct BlendDataWindowManagers *_self, int value);

void BlendDataWorlds_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataWorlds *_self;
	const char* name;
	struct World *world;
	char *_data, *_retdata;
	
	_self= (struct BlendDataWorlds *)_ptr->data;
	_data= (char *)_parms->data;
	name= *((const char**)_data);
	_data+= 4;
	_retdata= _data;
	
	world= rna_Main_worlds_new(_self, name);
	*((struct World**)_retdata)= world;
}

void BlendDataWorlds_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataWorlds *_self;
	struct World *world;
	char *_data;
	
	_self= (struct BlendDataWorlds *)_ptr->data;
	_data= (char *)_parms->data;
	world= *((struct World**)_data);
	
	rna_Main_worlds_remove(_self, reports, world);
}

void BlendDataWorlds_tag_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct BlendDataWorlds *_self;
	int value;
	char *_data;
	
	_self= (struct BlendDataWorlds *)_ptr->data;
	_data= (char *)_parms->data;
	value= *((int*)_data);
	
	rna_Main_worlds_tag(_self, value);
}

/* Repeated prototypes to detect errors */

struct World *rna_Main_worlds_new(struct BlendDataWorlds *_self, const char* name);
void rna_Main_worlds_remove(struct BlendDataWorlds *_self, ReportList *reports, struct World *world);
void rna_Main_worlds_tag(struct BlendDataWorlds *_self, int value);

/* Blendfile Data */
PointerPropertyRNA rna_BlendData_rna_type = {
	{(PropertyRNA*)&rna_BlendData_actions, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendData_actions = {
	{(PropertyRNA*)&rna_BlendData_armatures, (PropertyRNA*)&rna_BlendData_rna_type,
	-1, "actions", 0, "Actions",
	"Action datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataActions},
	BlendData_actions_begin, BlendData_actions_next, BlendData_actions_end, BlendData_actions_get, NULL, NULL, NULL, &RNA_Action
};

CollectionPropertyRNA rna_BlendData_armatures = {
	{(PropertyRNA*)&rna_BlendData_brushes, (PropertyRNA*)&rna_BlendData_actions,
	-1, "armatures", 0, "Armatures",
	"Armature datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataArmatures},
	BlendData_armatures_begin, BlendData_armatures_next, BlendData_armatures_end, BlendData_armatures_get, NULL, NULL, NULL, &RNA_Armature
};

CollectionPropertyRNA rna_BlendData_brushes = {
	{(PropertyRNA*)&rna_BlendData_cameras, (PropertyRNA*)&rna_BlendData_armatures,
	-1, "brushes", 0, "Brushes",
	"Brush datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataBrushes},
	BlendData_brushes_begin, BlendData_brushes_next, BlendData_brushes_end, BlendData_brushes_get, NULL, NULL, NULL, &RNA_Brush
};

CollectionPropertyRNA rna_BlendData_cameras = {
	{(PropertyRNA*)&rna_BlendData_curves, (PropertyRNA*)&rna_BlendData_brushes,
	-1, "cameras", 0, "Cameras",
	"Camera datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataCameras},
	BlendData_cameras_begin, BlendData_cameras_next, BlendData_cameras_end, BlendData_cameras_get, NULL, NULL, NULL, &RNA_Camera
};

CollectionPropertyRNA rna_BlendData_curves = {
	{(PropertyRNA*)&rna_BlendData_is_dirty, (PropertyRNA*)&rna_BlendData_cameras,
	-1, "curves", 0, "Curves",
	"Curve datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataCurves},
	BlendData_curves_begin, BlendData_curves_next, BlendData_curves_end, BlendData_curves_get, NULL, NULL, NULL, &RNA_Curve
};

BooleanPropertyRNA rna_BlendData_is_dirty = {
	{(PropertyRNA*)&rna_BlendData_filepath, (PropertyRNA*)&rna_BlendData_curves,
	-1, "is_dirty", 2, "File is Saved",
	"Has the current session been saved to disk as a .blend file",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_is_dirty_get, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_BlendData_filepath = {
	{(PropertyRNA*)&rna_BlendData_grease_pencil, (PropertyRNA*)&rna_BlendData_is_dirty,
	-1, "filepath", 0, "Filename",
	"Path to the .blend file",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_filepath_get, BlendData_filepath_length, NULL, 240, ""
};

CollectionPropertyRNA rna_BlendData_grease_pencil = {
	{(PropertyRNA*)&rna_BlendData_groups, (PropertyRNA*)&rna_BlendData_filepath,
	-1, "grease_pencil", 0, "Grease Pencil",
	"Grease Pencil datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataGreasePencils},
	BlendData_grease_pencil_begin, BlendData_grease_pencil_next, BlendData_grease_pencil_end, BlendData_grease_pencil_get, NULL, NULL, NULL, &RNA_GreasePencil
};

CollectionPropertyRNA rna_BlendData_groups = {
	{(PropertyRNA*)&rna_BlendData_images, (PropertyRNA*)&rna_BlendData_grease_pencil,
	-1, "groups", 0, "Groups",
	"Group datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataGroups},
	BlendData_groups_begin, BlendData_groups_next, BlendData_groups_end, BlendData_groups_get, NULL, NULL, NULL, &RNA_Group
};

CollectionPropertyRNA rna_BlendData_images = {
	{(PropertyRNA*)&rna_BlendData_lamps, (PropertyRNA*)&rna_BlendData_groups,
	-1, "images", 0, "Images",
	"Image datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataImages},
	BlendData_images_begin, BlendData_images_next, BlendData_images_end, BlendData_images_get, NULL, NULL, NULL, &RNA_Image
};

CollectionPropertyRNA rna_BlendData_lamps = {
	{(PropertyRNA*)&rna_BlendData_lattices, (PropertyRNA*)&rna_BlendData_images,
	-1, "lamps", 0, "Lamps",
	"Lamp datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataLamps},
	BlendData_lamps_begin, BlendData_lamps_next, BlendData_lamps_end, BlendData_lamps_get, NULL, NULL, NULL, &RNA_Lamp
};

CollectionPropertyRNA rna_BlendData_lattices = {
	{(PropertyRNA*)&rna_BlendData_libraries, (PropertyRNA*)&rna_BlendData_lamps,
	-1, "lattices", 0, "Lattices",
	"Lattice datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataLattices},
	BlendData_lattices_begin, BlendData_lattices_next, BlendData_lattices_end, BlendData_lattices_get, NULL, NULL, NULL, &RNA_Lattice
};

CollectionPropertyRNA rna_BlendData_libraries = {
	{(PropertyRNA*)&rna_BlendData_materials, (PropertyRNA*)&rna_BlendData_lattices,
	-1, "libraries", 0, "Libraries",
	"Library datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataLibraries},
	BlendData_libraries_begin, BlendData_libraries_next, BlendData_libraries_end, BlendData_libraries_get, NULL, NULL, NULL, &RNA_Library
};

CollectionPropertyRNA rna_BlendData_materials = {
	{(PropertyRNA*)&rna_BlendData_meshes, (PropertyRNA*)&rna_BlendData_libraries,
	-1, "materials", 0, "Materials",
	"Material datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMaterials},
	BlendData_materials_begin, BlendData_materials_next, BlendData_materials_end, BlendData_materials_get, NULL, NULL, NULL, &RNA_Material
};

CollectionPropertyRNA rna_BlendData_meshes = {
	{(PropertyRNA*)&rna_BlendData_metaballs, (PropertyRNA*)&rna_BlendData_materials,
	-1, "meshes", 0, "Meshes",
	"Mesh datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMeshes},
	BlendData_meshes_begin, BlendData_meshes_next, BlendData_meshes_end, BlendData_meshes_get, NULL, NULL, NULL, &RNA_Mesh
};

CollectionPropertyRNA rna_BlendData_metaballs = {
	{(PropertyRNA*)&rna_BlendData_node_groups, (PropertyRNA*)&rna_BlendData_meshes,
	-1, "metaballs", 0, "Metaballs",
	"Metaball datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataMetaBalls},
	BlendData_metaballs_begin, BlendData_metaballs_next, BlendData_metaballs_end, BlendData_metaballs_get, NULL, NULL, NULL, &RNA_MetaBall
};

CollectionPropertyRNA rna_BlendData_node_groups = {
	{(PropertyRNA*)&rna_BlendData_objects, (PropertyRNA*)&rna_BlendData_metaballs,
	-1, "node_groups", 0, "Node Groups",
	"Node group datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataNodeTrees},
	BlendData_node_groups_begin, BlendData_node_groups_next, BlendData_node_groups_end, BlendData_node_groups_get, NULL, NULL, NULL, &RNA_NodeTree
};

CollectionPropertyRNA rna_BlendData_objects = {
	{(PropertyRNA*)&rna_BlendData_particles, (PropertyRNA*)&rna_BlendData_node_groups,
	-1, "objects", 0, "Objects",
	"Object datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataObjects},
	BlendData_objects_begin, BlendData_objects_next, BlendData_objects_end, BlendData_objects_get, NULL, NULL, NULL, &RNA_Object
};

CollectionPropertyRNA rna_BlendData_particles = {
	{(PropertyRNA*)&rna_BlendData_rna_properties, (PropertyRNA*)&rna_BlendData_objects,
	-1, "particles", 0, "Particles",
	"Particle datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataParticles},
	BlendData_particles_begin, BlendData_particles_next, BlendData_particles_end, BlendData_particles_get, NULL, NULL, NULL, &RNA_ParticleSettings
};

CollectionPropertyRNA rna_BlendData_rna_properties = {
	{(PropertyRNA*)&rna_BlendData_scenes, (PropertyRNA*)&rna_BlendData_particles,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_rna_properties_begin, BlendData_rna_properties_next, BlendData_rna_properties_end, BlendData_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

CollectionPropertyRNA rna_BlendData_scenes = {
	{(PropertyRNA*)&rna_BlendData_screens, (PropertyRNA*)&rna_BlendData_rna_properties,
	-1, "scenes", 0, "Scenes",
	"Scene datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataScenes},
	BlendData_scenes_begin, BlendData_scenes_next, BlendData_scenes_end, BlendData_scenes_get, NULL, NULL, NULL, &RNA_Scene
};

CollectionPropertyRNA rna_BlendData_screens = {
	{(PropertyRNA*)&rna_BlendData_scripts, (PropertyRNA*)&rna_BlendData_scenes,
	-1, "screens", 0, "Screens",
	"Screen datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataScreens},
	BlendData_screens_begin, BlendData_screens_next, BlendData_screens_end, BlendData_screens_get, NULL, NULL, NULL, &RNA_Screen
};

CollectionPropertyRNA rna_BlendData_scripts = {
	{(PropertyRNA*)&rna_BlendData_shape_keys, (PropertyRNA*)&rna_BlendData_screens,
	-1, "scripts", 0, "Scripts",
	"Script datablocks (DEPRECATED).",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_scripts_begin, BlendData_scripts_next, BlendData_scripts_end, BlendData_scripts_get, NULL, NULL, NULL, &RNA_ID
};

CollectionPropertyRNA rna_BlendData_shape_keys = {
	{(PropertyRNA*)&rna_BlendData_sounds, (PropertyRNA*)&rna_BlendData_scripts,
	-1, "shape_keys", 0, "Shape Keys",
	"Shape Key datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendData_shape_keys_begin, BlendData_shape_keys_next, BlendData_shape_keys_end, BlendData_shape_keys_get, NULL, NULL, NULL, &RNA_Key
};

CollectionPropertyRNA rna_BlendData_sounds = {
	{(PropertyRNA*)&rna_BlendData_texts, (PropertyRNA*)&rna_BlendData_shape_keys,
	-1, "sounds", 0, "Sounds",
	"Sound datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataSounds},
	BlendData_sounds_begin, BlendData_sounds_next, BlendData_sounds_end, BlendData_sounds_get, NULL, NULL, NULL, &RNA_Sound
};

CollectionPropertyRNA rna_BlendData_texts = {
	{(PropertyRNA*)&rna_BlendData_textures, (PropertyRNA*)&rna_BlendData_sounds,
	-1, "texts", 0, "Texts",
	"Text datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataTexts},
	BlendData_texts_begin, BlendData_texts_next, BlendData_texts_end, BlendData_texts_get, NULL, NULL, NULL, &RNA_Text
};

CollectionPropertyRNA rna_BlendData_textures = {
	{(PropertyRNA*)&rna_BlendData_fonts, (PropertyRNA*)&rna_BlendData_texts,
	-1, "textures", 0, "Textures",
	"Texture datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataTextures},
	BlendData_textures_begin, BlendData_textures_next, BlendData_textures_end, BlendData_textures_get, NULL, NULL, NULL, &RNA_Texture
};

CollectionPropertyRNA rna_BlendData_fonts = {
	{(PropertyRNA*)&rna_BlendData_window_managers, (PropertyRNA*)&rna_BlendData_textures,
	-1, "fonts", 0, "Vector Fonts",
	"Vector font datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataFonts},
	BlendData_fonts_begin, BlendData_fonts_next, BlendData_fonts_end, BlendData_fonts_get, NULL, NULL, NULL, &RNA_VectorFont
};

CollectionPropertyRNA rna_BlendData_window_managers = {
	{(PropertyRNA*)&rna_BlendData_worlds, (PropertyRNA*)&rna_BlendData_fonts,
	-1, "window_managers", 0, "Window Managers",
	"Window manager datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataWindowManagers},
	BlendData_window_managers_begin, BlendData_window_managers_next, BlendData_window_managers_end, BlendData_window_managers_get, NULL, NULL, NULL, &RNA_WindowManager
};

CollectionPropertyRNA rna_BlendData_worlds = {
	{NULL, (PropertyRNA*)&rna_BlendData_window_managers,
	-1, "worlds", 0, "Worlds",
	"World datablocks.",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_BlendDataWorlds},
	BlendData_worlds_begin, BlendData_worlds_next, BlendData_worlds_end, BlendData_worlds_get, NULL, NULL, NULL, &RNA_World
};

StructRNA RNA_BlendData = {
	{(ContainerRNA *)&RNA_BlendDataActions, (ContainerRNA *)&RNA_BezierSplinePoint,
	NULL,
	{(PropertyRNA*)&rna_BlendData_rna_type, (PropertyRNA*)&rna_BlendData_worlds}},
	"BlendData"	, NULL,NULL
, 0, "Blendfile Data", "Main data structure representing a .blend file and all its datablocks",
	15,
	NULL, (PropertyRNA*)&rna_BlendData_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Main Actions */
PointerPropertyRNA rna_BlendDataActions_rna_type = {
	{(PropertyRNA*)&rna_BlendDataActions_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataActions_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataActions_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataActions_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataActions_rna_properties_begin, BlendDataActions_rna_properties_next, BlendDataActions_rna_properties_end, BlendDataActions_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataActions_new_name = {
	{(PropertyRNA*)&rna_BlendDataActions_new_action, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Action"
};

PointerPropertyRNA rna_BlendDataActions_new_action = {
	{NULL, (PropertyRNA*)&rna_BlendDataActions_new_name,
	-1, "action", 8, "",
	"New action datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Action
};

FunctionRNA rna_BlendDataActions_new_func = {
	{(FunctionRNA*)&rna_BlendDataActions_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataActions_new_name, (PropertyRNA*)&rna_BlendDataActions_new_action}},
	"new", 0, "Add a new action to the main database",
	BlendDataActions_new_call,
	(PropertyRNA*)&rna_BlendDataActions_new_action
};

PointerPropertyRNA rna_BlendDataActions_remove_action = {
	{NULL, NULL,
	-1, "action", 262148, "",
	"Action to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Action
};

FunctionRNA rna_BlendDataActions_remove_func = {
	{(FunctionRNA*)&rna_BlendDataActions_tag_func, (FunctionRNA*)&rna_BlendDataActions_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataActions_remove_action, (PropertyRNA*)&rna_BlendDataActions_remove_action}},
	"remove", 4, "Remove a action from the current blendfile.",
	BlendDataActions_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataActions_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataActions_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataActions_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataActions_tag_value, (PropertyRNA*)&rna_BlendDataActions_tag_value}},
	"tag", 0, "tag",
	BlendDataActions_tag_call,
	NULL
};

StructRNA RNA_BlendDataActions = {
	{(ContainerRNA *)&RNA_BlendDataArmatures, (ContainerRNA *)&RNA_BlendData,
	NULL,
	{(PropertyRNA*)&rna_BlendDataActions_rna_type, (PropertyRNA*)&rna_BlendDataActions_rna_properties}},
	"BlendDataActions"	, NULL,NULL
, 0, "Main Actions", "Collection of actions",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataActions_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataActions_new_func, (FunctionRNA*)&rna_BlendDataActions_tag_func}
};

/* Main Armatures */
PointerPropertyRNA rna_BlendDataArmatures_rna_type = {
	{(PropertyRNA*)&rna_BlendDataArmatures_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataArmatures_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataArmatures_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataArmatures_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataArmatures_rna_properties_begin, BlendDataArmatures_rna_properties_next, BlendDataArmatures_rna_properties_end, BlendDataArmatures_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataArmatures_new_name = {
	{(PropertyRNA*)&rna_BlendDataArmatures_new_armature, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Armature"
};

PointerPropertyRNA rna_BlendDataArmatures_new_armature = {
	{NULL, (PropertyRNA*)&rna_BlendDataArmatures_new_name,
	-1, "armature", 8, "",
	"New armature datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Armature
};

FunctionRNA rna_BlendDataArmatures_new_func = {
	{(FunctionRNA*)&rna_BlendDataArmatures_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataArmatures_new_name, (PropertyRNA*)&rna_BlendDataArmatures_new_armature}},
	"new", 0, "Add a new armature to the main database",
	BlendDataArmatures_new_call,
	(PropertyRNA*)&rna_BlendDataArmatures_new_armature
};

PointerPropertyRNA rna_BlendDataArmatures_remove_armature = {
	{NULL, NULL,
	-1, "armature", 262148, "",
	"Armature to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Armature
};

FunctionRNA rna_BlendDataArmatures_remove_func = {
	{(FunctionRNA*)&rna_BlendDataArmatures_tag_func, (FunctionRNA*)&rna_BlendDataArmatures_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataArmatures_remove_armature, (PropertyRNA*)&rna_BlendDataArmatures_remove_armature}},
	"remove", 4, "Remove a armature from the current blendfile.",
	BlendDataArmatures_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataArmatures_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataArmatures_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataArmatures_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataArmatures_tag_value, (PropertyRNA*)&rna_BlendDataArmatures_tag_value}},
	"tag", 0, "tag",
	BlendDataArmatures_tag_call,
	NULL
};

StructRNA RNA_BlendDataArmatures = {
	{(ContainerRNA *)&RNA_BlendDataBrushes, (ContainerRNA *)&RNA_BlendDataActions,
	NULL,
	{(PropertyRNA*)&rna_BlendDataArmatures_rna_type, (PropertyRNA*)&rna_BlendDataArmatures_rna_properties}},
	"BlendDataArmatures"	, NULL,NULL
, 0, "Main Armatures", "Collection of armatures",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataArmatures_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataArmatures_new_func, (FunctionRNA*)&rna_BlendDataArmatures_tag_func}
};

/* Main Brushes */
PointerPropertyRNA rna_BlendDataBrushes_rna_type = {
	{(PropertyRNA*)&rna_BlendDataBrushes_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataBrushes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataBrushes_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataBrushes_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataBrushes_rna_properties_begin, BlendDataBrushes_rna_properties_next, BlendDataBrushes_rna_properties_end, BlendDataBrushes_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataBrushes_new_name = {
	{(PropertyRNA*)&rna_BlendDataBrushes_new_brush, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Brush"
};

PointerPropertyRNA rna_BlendDataBrushes_new_brush = {
	{NULL, (PropertyRNA*)&rna_BlendDataBrushes_new_name,
	-1, "brush", 8, "",
	"New brush datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Brush
};

FunctionRNA rna_BlendDataBrushes_new_func = {
	{(FunctionRNA*)&rna_BlendDataBrushes_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataBrushes_new_name, (PropertyRNA*)&rna_BlendDataBrushes_new_brush}},
	"new", 0, "Add a new brush to the main database",
	BlendDataBrushes_new_call,
	(PropertyRNA*)&rna_BlendDataBrushes_new_brush
};

PointerPropertyRNA rna_BlendDataBrushes_remove_brush = {
	{NULL, NULL,
	-1, "brush", 262148, "",
	"Brush to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Brush
};

FunctionRNA rna_BlendDataBrushes_remove_func = {
	{(FunctionRNA*)&rna_BlendDataBrushes_tag_func, (FunctionRNA*)&rna_BlendDataBrushes_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataBrushes_remove_brush, (PropertyRNA*)&rna_BlendDataBrushes_remove_brush}},
	"remove", 4, "Remove a brush from the current blendfile.",
	BlendDataBrushes_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataBrushes_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataBrushes_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataBrushes_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataBrushes_tag_value, (PropertyRNA*)&rna_BlendDataBrushes_tag_value}},
	"tag", 0, "tag",
	BlendDataBrushes_tag_call,
	NULL
};

StructRNA RNA_BlendDataBrushes = {
	{(ContainerRNA *)&RNA_BlendDataCameras, (ContainerRNA *)&RNA_BlendDataArmatures,
	NULL,
	{(PropertyRNA*)&rna_BlendDataBrushes_rna_type, (PropertyRNA*)&rna_BlendDataBrushes_rna_properties}},
	"BlendDataBrushes"	, NULL,NULL
, 0, "Main Brushes", "Collection of brushes",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataBrushes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataBrushes_new_func, (FunctionRNA*)&rna_BlendDataBrushes_tag_func}
};

/* Main Cameras */
PointerPropertyRNA rna_BlendDataCameras_rna_type = {
	{(PropertyRNA*)&rna_BlendDataCameras_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCameras_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataCameras_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataCameras_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCameras_rna_properties_begin, BlendDataCameras_rna_properties_next, BlendDataCameras_rna_properties_end, BlendDataCameras_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataCameras_new_name = {
	{(PropertyRNA*)&rna_BlendDataCameras_new_camera, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Camera"
};

PointerPropertyRNA rna_BlendDataCameras_new_camera = {
	{NULL, (PropertyRNA*)&rna_BlendDataCameras_new_name,
	-1, "camera", 8, "",
	"New camera datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Camera
};

FunctionRNA rna_BlendDataCameras_new_func = {
	{(FunctionRNA*)&rna_BlendDataCameras_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCameras_new_name, (PropertyRNA*)&rna_BlendDataCameras_new_camera}},
	"new", 0, "Add a new camera to the main database",
	BlendDataCameras_new_call,
	(PropertyRNA*)&rna_BlendDataCameras_new_camera
};

PointerPropertyRNA rna_BlendDataCameras_remove_camera = {
	{NULL, NULL,
	-1, "camera", 262148, "",
	"Camera to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Camera
};

FunctionRNA rna_BlendDataCameras_remove_func = {
	{(FunctionRNA*)&rna_BlendDataCameras_tag_func, (FunctionRNA*)&rna_BlendDataCameras_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCameras_remove_camera, (PropertyRNA*)&rna_BlendDataCameras_remove_camera}},
	"remove", 4, "Remove a camera from the current blendfile.",
	BlendDataCameras_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataCameras_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataCameras_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataCameras_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCameras_tag_value, (PropertyRNA*)&rna_BlendDataCameras_tag_value}},
	"tag", 0, "tag",
	BlendDataCameras_tag_call,
	NULL
};

StructRNA RNA_BlendDataCameras = {
	{(ContainerRNA *)&RNA_BlendDataCurves, (ContainerRNA *)&RNA_BlendDataBrushes,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCameras_rna_type, (PropertyRNA*)&rna_BlendDataCameras_rna_properties}},
	"BlendDataCameras"	, NULL,NULL
, 0, "Main Cameras", "Collection of cameras",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataCameras_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataCameras_new_func, (FunctionRNA*)&rna_BlendDataCameras_tag_func}
};

/* Main Curves */
PointerPropertyRNA rna_BlendDataCurves_rna_type = {
	{(PropertyRNA*)&rna_BlendDataCurves_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCurves_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataCurves_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataCurves_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataCurves_rna_properties_begin, BlendDataCurves_rna_properties_next, BlendDataCurves_rna_properties_end, BlendDataCurves_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataCurves_new_name = {
	{(PropertyRNA*)&rna_BlendDataCurves_new_type, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Curve"
};

static EnumPropertyItem rna_BlendDataCurves_new_type_items[4] = {
	{2, "CURVE", 0, "Curve", ""},
	{3, "SURFACE", 0, "Surface", ""},
	{4, "FONT", 0, "Font", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataCurves_new_type = {
	{(PropertyRNA*)&rna_BlendDataCurves_new_curve, (PropertyRNA*)&rna_BlendDataCurves_new_name,
	-1, "type", 7, "Type",
	"The type of curve to add",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_BlendDataCurves_new_type_items, 3, 2
};

PointerPropertyRNA rna_BlendDataCurves_new_curve = {
	{NULL, (PropertyRNA*)&rna_BlendDataCurves_new_type,
	-1, "curve", 8, "",
	"New curve datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Curve
};

FunctionRNA rna_BlendDataCurves_new_func = {
	{(FunctionRNA*)&rna_BlendDataCurves_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCurves_new_name, (PropertyRNA*)&rna_BlendDataCurves_new_curve}},
	"new", 0, "Add a new curve to the main database",
	BlendDataCurves_new_call,
	(PropertyRNA*)&rna_BlendDataCurves_new_curve
};

PointerPropertyRNA rna_BlendDataCurves_remove_curve = {
	{NULL, NULL,
	-1, "curve", 262148, "",
	"Curve to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Curve
};

FunctionRNA rna_BlendDataCurves_remove_func = {
	{(FunctionRNA*)&rna_BlendDataCurves_tag_func, (FunctionRNA*)&rna_BlendDataCurves_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCurves_remove_curve, (PropertyRNA*)&rna_BlendDataCurves_remove_curve}},
	"remove", 4, "Remove a curve from the current blendfile.",
	BlendDataCurves_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataCurves_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataCurves_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataCurves_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCurves_tag_value, (PropertyRNA*)&rna_BlendDataCurves_tag_value}},
	"tag", 0, "tag",
	BlendDataCurves_tag_call,
	NULL
};

StructRNA RNA_BlendDataCurves = {
	{(ContainerRNA *)&RNA_BlendDataFonts, (ContainerRNA *)&RNA_BlendDataCameras,
	NULL,
	{(PropertyRNA*)&rna_BlendDataCurves_rna_type, (PropertyRNA*)&rna_BlendDataCurves_rna_properties}},
	"BlendDataCurves"	, NULL,NULL
, 0, "Main Curves", "Collection of curves",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataCurves_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataCurves_new_func, (FunctionRNA*)&rna_BlendDataCurves_tag_func}
};

/* Main Fonts */
PointerPropertyRNA rna_BlendDataFonts_rna_type = {
	{(PropertyRNA*)&rna_BlendDataFonts_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataFonts_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataFonts_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataFonts_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataFonts_rna_properties_begin, BlendDataFonts_rna_properties_next, BlendDataFonts_rna_properties_end, BlendDataFonts_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataFonts_load_filepath = {
	{(PropertyRNA*)&rna_BlendDataFonts_load_vfont, NULL,
	-1, "filepath", 5, "",
	"path of the font to load.",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "File Path"
};

PointerPropertyRNA rna_BlendDataFonts_load_vfont = {
	{NULL, (PropertyRNA*)&rna_BlendDataFonts_load_filepath,
	-1, "vfont", 8, "",
	"New font datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VectorFont
};

FunctionRNA rna_BlendDataFonts_load_func = {
	{(FunctionRNA*)&rna_BlendDataFonts_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataFonts_load_filepath, (PropertyRNA*)&rna_BlendDataFonts_load_vfont}},
	"load", 4, "Load a new font into the main database",
	BlendDataFonts_load_call,
	(PropertyRNA*)&rna_BlendDataFonts_load_vfont
};

PointerPropertyRNA rna_BlendDataFonts_remove_vfont = {
	{NULL, NULL,
	-1, "vfont", 262148, "",
	"Font to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_VectorFont
};

FunctionRNA rna_BlendDataFonts_remove_func = {
	{(FunctionRNA*)&rna_BlendDataFonts_tag_func, (FunctionRNA*)&rna_BlendDataFonts_load_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataFonts_remove_vfont, (PropertyRNA*)&rna_BlendDataFonts_remove_vfont}},
	"remove", 4, "Remove a font from the current blendfile.",
	BlendDataFonts_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataFonts_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataFonts_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataFonts_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataFonts_tag_value, (PropertyRNA*)&rna_BlendDataFonts_tag_value}},
	"tag", 0, "tag",
	BlendDataFonts_tag_call,
	NULL
};

StructRNA RNA_BlendDataFonts = {
	{(ContainerRNA *)&RNA_BlendDataGreasePencils, (ContainerRNA *)&RNA_BlendDataCurves,
	NULL,
	{(PropertyRNA*)&rna_BlendDataFonts_rna_type, (PropertyRNA*)&rna_BlendDataFonts_rna_properties}},
	"BlendDataFonts"	, NULL,NULL
, 0, "Main Fonts", "Collection of fonts",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataFonts_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataFonts_load_func, (FunctionRNA*)&rna_BlendDataFonts_tag_func}
};

/* Main Grease Pencils */
PointerPropertyRNA rna_BlendDataGreasePencils_rna_type = {
	{(PropertyRNA*)&rna_BlendDataGreasePencils_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGreasePencils_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataGreasePencils_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataGreasePencils_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGreasePencils_rna_properties_begin, BlendDataGreasePencils_rna_properties_next, BlendDataGreasePencils_rna_properties_end, BlendDataGreasePencils_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_BlendDataGreasePencils_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataGreasePencils_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataGreasePencils_tag_value, (PropertyRNA*)&rna_BlendDataGreasePencils_tag_value}},
	"tag", 0, "tag",
	BlendDataGreasePencils_tag_call,
	NULL
};

StructRNA RNA_BlendDataGreasePencils = {
	{(ContainerRNA *)&RNA_BlendDataGroups, (ContainerRNA *)&RNA_BlendDataFonts,
	NULL,
	{(PropertyRNA*)&rna_BlendDataGreasePencils_rna_type, (PropertyRNA*)&rna_BlendDataGreasePencils_rna_properties}},
	"BlendDataGreasePencils"	, NULL,NULL
, 0, "Main Grease Pencils", "Collection of grease pencils",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataGreasePencils_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataGreasePencils_tag_func, (FunctionRNA*)&rna_BlendDataGreasePencils_tag_func}
};

/* Main Groups */
PointerPropertyRNA rna_BlendDataGroups_rna_type = {
	{(PropertyRNA*)&rna_BlendDataGroups_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGroups_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataGroups_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataGroups_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataGroups_rna_properties_begin, BlendDataGroups_rna_properties_next, BlendDataGroups_rna_properties_end, BlendDataGroups_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataGroups_new_name = {
	{(PropertyRNA*)&rna_BlendDataGroups_new_group, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Group"
};

PointerPropertyRNA rna_BlendDataGroups_new_group = {
	{NULL, (PropertyRNA*)&rna_BlendDataGroups_new_name,
	-1, "group", 8, "",
	"New group datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Group
};

FunctionRNA rna_BlendDataGroups_new_func = {
	{(FunctionRNA*)&rna_BlendDataGroups_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataGroups_new_name, (PropertyRNA*)&rna_BlendDataGroups_new_group}},
	"new", 0, "Add a new group to the main database",
	BlendDataGroups_new_call,
	(PropertyRNA*)&rna_BlendDataGroups_new_group
};

PointerPropertyRNA rna_BlendDataGroups_remove_group = {
	{NULL, NULL,
	-1, "group", 262148, "",
	"Group to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Group
};

FunctionRNA rna_BlendDataGroups_remove_func = {
	{(FunctionRNA*)&rna_BlendDataGroups_tag_func, (FunctionRNA*)&rna_BlendDataGroups_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataGroups_remove_group, (PropertyRNA*)&rna_BlendDataGroups_remove_group}},
	"remove", 0, "Remove a group from the current blendfile.",
	BlendDataGroups_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataGroups_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataGroups_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataGroups_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataGroups_tag_value, (PropertyRNA*)&rna_BlendDataGroups_tag_value}},
	"tag", 0, "tag",
	BlendDataGroups_tag_call,
	NULL
};

StructRNA RNA_BlendDataGroups = {
	{(ContainerRNA *)&RNA_BlendDataImages, (ContainerRNA *)&RNA_BlendDataGreasePencils,
	NULL,
	{(PropertyRNA*)&rna_BlendDataGroups_rna_type, (PropertyRNA*)&rna_BlendDataGroups_rna_properties}},
	"BlendDataGroups"	, NULL,NULL
, 0, "Main Groups", "Collection of groups",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataGroups_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataGroups_new_func, (FunctionRNA*)&rna_BlendDataGroups_tag_func}
};

/* Main Images */
PointerPropertyRNA rna_BlendDataImages_rna_type = {
	{(PropertyRNA*)&rna_BlendDataImages_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataImages_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataImages_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataImages_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataImages_rna_properties_begin, BlendDataImages_rna_properties_next, BlendDataImages_rna_properties_end, BlendDataImages_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataImages_new_name = {
	{(PropertyRNA*)&rna_BlendDataImages_new_width, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Image"
};

IntPropertyRNA rna_BlendDataImages_new_width = {
	{(PropertyRNA*)&rna_BlendDataImages_new_height, (PropertyRNA*)&rna_BlendDataImages_new_name,
	-1, "width", 7, "",
	"Width of the image.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 1, INT_MAX, 1, 1024, NULL
};

IntPropertyRNA rna_BlendDataImages_new_height = {
	{(PropertyRNA*)&rna_BlendDataImages_new_alpha, (PropertyRNA*)&rna_BlendDataImages_new_width,
	-1, "height", 7, "",
	"Height of the image.",
	0,
	PROP_INT, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL,
	0, INT_MAX, 1, INT_MAX, 1, 1024, NULL
};

BooleanPropertyRNA rna_BlendDataImages_new_alpha = {
	{(PropertyRNA*)&rna_BlendDataImages_new_float_buffer, (PropertyRNA*)&rna_BlendDataImages_new_height,
	-1, "alpha", 3, "Alpha",
	"Use alpha channel",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

BooleanPropertyRNA rna_BlendDataImages_new_float_buffer = {
	{(PropertyRNA*)&rna_BlendDataImages_new_image, (PropertyRNA*)&rna_BlendDataImages_new_alpha,
	-1, "float_buffer", 3, "Float Buffer",
	"Create an image with floating point color",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_BlendDataImages_new_image = {
	{NULL, (PropertyRNA*)&rna_BlendDataImages_new_float_buffer,
	-1, "image", 8, "",
	"New image datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

FunctionRNA rna_BlendDataImages_new_func = {
	{(FunctionRNA*)&rna_BlendDataImages_load_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataImages_new_name, (PropertyRNA*)&rna_BlendDataImages_new_image}},
	"new", 0, "Add a new image to the main database",
	BlendDataImages_new_call,
	(PropertyRNA*)&rna_BlendDataImages_new_image
};

StringPropertyRNA rna_BlendDataImages_load_filepath = {
	{(PropertyRNA*)&rna_BlendDataImages_load_image, NULL,
	-1, "filepath", 5, "",
	"path of the file to load.",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "File Path"
};

PointerPropertyRNA rna_BlendDataImages_load_image = {
	{NULL, (PropertyRNA*)&rna_BlendDataImages_load_filepath,
	-1, "image", 8, "",
	"New image datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

FunctionRNA rna_BlendDataImages_load_func = {
	{(FunctionRNA*)&rna_BlendDataImages_remove_func, (FunctionRNA*)&rna_BlendDataImages_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataImages_load_filepath, (PropertyRNA*)&rna_BlendDataImages_load_image}},
	"load", 4, "Load a new image into the main database",
	BlendDataImages_load_call,
	(PropertyRNA*)&rna_BlendDataImages_load_image
};

PointerPropertyRNA rna_BlendDataImages_remove_image = {
	{NULL, NULL,
	-1, "image", 262148, "",
	"Image to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Image
};

FunctionRNA rna_BlendDataImages_remove_func = {
	{(FunctionRNA*)&rna_BlendDataImages_tag_func, (FunctionRNA*)&rna_BlendDataImages_load_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataImages_remove_image, (PropertyRNA*)&rna_BlendDataImages_remove_image}},
	"remove", 4, "Remove an image from the current blendfile.",
	BlendDataImages_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataImages_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataImages_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataImages_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataImages_tag_value, (PropertyRNA*)&rna_BlendDataImages_tag_value}},
	"tag", 0, "tag",
	BlendDataImages_tag_call,
	NULL
};

StructRNA RNA_BlendDataImages = {
	{(ContainerRNA *)&RNA_BlendDataLamps, (ContainerRNA *)&RNA_BlendDataGroups,
	NULL,
	{(PropertyRNA*)&rna_BlendDataImages_rna_type, (PropertyRNA*)&rna_BlendDataImages_rna_properties}},
	"BlendDataImages"	, NULL,NULL
, 0, "Main Images", "Collection of images",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataImages_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataImages_new_func, (FunctionRNA*)&rna_BlendDataImages_tag_func}
};

/* Main Lamps */
PointerPropertyRNA rna_BlendDataLamps_rna_type = {
	{(PropertyRNA*)&rna_BlendDataLamps_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLamps_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataLamps_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataLamps_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLamps_rna_properties_begin, BlendDataLamps_rna_properties_next, BlendDataLamps_rna_properties_end, BlendDataLamps_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataLamps_new_name = {
	{(PropertyRNA*)&rna_BlendDataLamps_new_type, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Lamp"
};

static EnumPropertyItem rna_BlendDataLamps_new_type_items[6] = {
	{0, "POINT", 0, "Point", "Omnidirectional point light source"},
	{1, "SUN", 0, "Sun", "Constant direction parallel ray light source"},
	{2, "SPOT", 0, "Spot", "Directional cone light source"},
	{3, "HEMI", 0, "Hemi", "180 degree constant light source"},
	{4, "AREA", 0, "Area", "Directional area light source"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataLamps_new_type = {
	{(PropertyRNA*)&rna_BlendDataLamps_new_lamp, (PropertyRNA*)&rna_BlendDataLamps_new_name,
	-1, "type", 7, "Type",
	"The type of texture to add",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_BlendDataLamps_new_type_items, 5, 0
};

PointerPropertyRNA rna_BlendDataLamps_new_lamp = {
	{NULL, (PropertyRNA*)&rna_BlendDataLamps_new_type,
	-1, "lamp", 8, "",
	"New lamp datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lamp
};

FunctionRNA rna_BlendDataLamps_new_func = {
	{(FunctionRNA*)&rna_BlendDataLamps_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLamps_new_name, (PropertyRNA*)&rna_BlendDataLamps_new_lamp}},
	"new", 0, "Add a new lamp to the main database",
	BlendDataLamps_new_call,
	(PropertyRNA*)&rna_BlendDataLamps_new_lamp
};

PointerPropertyRNA rna_BlendDataLamps_remove_lamp = {
	{NULL, NULL,
	-1, "lamp", 262148, "",
	"Lamp to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lamp
};

FunctionRNA rna_BlendDataLamps_remove_func = {
	{(FunctionRNA*)&rna_BlendDataLamps_tag_func, (FunctionRNA*)&rna_BlendDataLamps_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLamps_remove_lamp, (PropertyRNA*)&rna_BlendDataLamps_remove_lamp}},
	"remove", 4, "Remove a lamp from the current blendfile.",
	BlendDataLamps_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataLamps_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataLamps_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataLamps_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLamps_tag_value, (PropertyRNA*)&rna_BlendDataLamps_tag_value}},
	"tag", 0, "tag",
	BlendDataLamps_tag_call,
	NULL
};

StructRNA RNA_BlendDataLamps = {
	{(ContainerRNA *)&RNA_BlendDataLattices, (ContainerRNA *)&RNA_BlendDataImages,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLamps_rna_type, (PropertyRNA*)&rna_BlendDataLamps_rna_properties}},
	"BlendDataLamps"	, NULL,NULL
, 0, "Main Lamps", "Collection of lamps",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataLamps_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataLamps_new_func, (FunctionRNA*)&rna_BlendDataLamps_tag_func}
};

/* Main Lattices */
PointerPropertyRNA rna_BlendDataLattices_rna_type = {
	{(PropertyRNA*)&rna_BlendDataLattices_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLattices_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataLattices_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataLattices_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLattices_rna_properties_begin, BlendDataLattices_rna_properties_next, BlendDataLattices_rna_properties_end, BlendDataLattices_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataLattices_new_name = {
	{(PropertyRNA*)&rna_BlendDataLattices_new_lattice, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Lattice"
};

PointerPropertyRNA rna_BlendDataLattices_new_lattice = {
	{NULL, (PropertyRNA*)&rna_BlendDataLattices_new_name,
	-1, "lattice", 8, "",
	"New lattices datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lattice
};

FunctionRNA rna_BlendDataLattices_new_func = {
	{(FunctionRNA*)&rna_BlendDataLattices_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLattices_new_name, (PropertyRNA*)&rna_BlendDataLattices_new_lattice}},
	"new", 0, "Add a new lattice to the main database",
	BlendDataLattices_new_call,
	(PropertyRNA*)&rna_BlendDataLattices_new_lattice
};

PointerPropertyRNA rna_BlendDataLattices_remove_lattice = {
	{NULL, NULL,
	-1, "lattice", 262148, "",
	"Lattice to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Lattice
};

FunctionRNA rna_BlendDataLattices_remove_func = {
	{(FunctionRNA*)&rna_BlendDataLattices_tag_func, (FunctionRNA*)&rna_BlendDataLattices_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLattices_remove_lattice, (PropertyRNA*)&rna_BlendDataLattices_remove_lattice}},
	"remove", 4, "Remove a lattice from the current blendfile.",
	BlendDataLattices_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataLattices_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataLattices_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataLattices_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLattices_tag_value, (PropertyRNA*)&rna_BlendDataLattices_tag_value}},
	"tag", 0, "tag",
	BlendDataLattices_tag_call,
	NULL
};

StructRNA RNA_BlendDataLattices = {
	{(ContainerRNA *)&RNA_BlendDataLibraries, (ContainerRNA *)&RNA_BlendDataLamps,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLattices_rna_type, (PropertyRNA*)&rna_BlendDataLattices_rna_properties}},
	"BlendDataLattices"	, NULL,NULL
, 0, "Main Lattices", "Collection of lattices",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataLattices_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataLattices_new_func, (FunctionRNA*)&rna_BlendDataLattices_tag_func}
};

/* Main Libraries */
PointerPropertyRNA rna_BlendDataLibraries_rna_type = {
	{(PropertyRNA*)&rna_BlendDataLibraries_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLibraries_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataLibraries_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataLibraries_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataLibraries_rna_properties_begin, BlendDataLibraries_rna_properties_next, BlendDataLibraries_rna_properties_end, BlendDataLibraries_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_BlendDataLibraries_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataLibraries_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLibraries_tag_value, (PropertyRNA*)&rna_BlendDataLibraries_tag_value}},
	"tag", 0, "tag",
	BlendDataLibraries_tag_call,
	NULL
};

StructRNA RNA_BlendDataLibraries = {
	{(ContainerRNA *)&RNA_BlendDataMaterials, (ContainerRNA *)&RNA_BlendDataLattices,
	NULL,
	{(PropertyRNA*)&rna_BlendDataLibraries_rna_type, (PropertyRNA*)&rna_BlendDataLibraries_rna_properties}},
	"BlendDataLibraries"	, NULL,NULL
, 0, "Main Libraries", "Collection of libraries",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataLibraries_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataLibraries_tag_func, (FunctionRNA*)&rna_BlendDataLibraries_tag_func}
};

/* Main Material */
PointerPropertyRNA rna_BlendDataMaterials_rna_type = {
	{(PropertyRNA*)&rna_BlendDataMaterials_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMaterials_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataMaterials_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataMaterials_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMaterials_rna_properties_begin, BlendDataMaterials_rna_properties_next, BlendDataMaterials_rna_properties_end, BlendDataMaterials_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataMaterials_new_name = {
	{(PropertyRNA*)&rna_BlendDataMaterials_new_material, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Material"
};

PointerPropertyRNA rna_BlendDataMaterials_new_material = {
	{NULL, (PropertyRNA*)&rna_BlendDataMaterials_new_name,
	-1, "material", 8, "",
	"New material datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_BlendDataMaterials_new_func = {
	{(FunctionRNA*)&rna_BlendDataMaterials_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMaterials_new_name, (PropertyRNA*)&rna_BlendDataMaterials_new_material}},
	"new", 0, "Add a new material to the main database",
	BlendDataMaterials_new_call,
	(PropertyRNA*)&rna_BlendDataMaterials_new_material
};

PointerPropertyRNA rna_BlendDataMaterials_remove_material = {
	{NULL, NULL,
	-1, "material", 262148, "",
	"Material to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Material
};

FunctionRNA rna_BlendDataMaterials_remove_func = {
	{(FunctionRNA*)&rna_BlendDataMaterials_tag_func, (FunctionRNA*)&rna_BlendDataMaterials_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMaterials_remove_material, (PropertyRNA*)&rna_BlendDataMaterials_remove_material}},
	"remove", 4, "Remove a material from the current blendfile.",
	BlendDataMaterials_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataMaterials_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMaterials_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataMaterials_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMaterials_tag_value, (PropertyRNA*)&rna_BlendDataMaterials_tag_value}},
	"tag", 0, "tag",
	BlendDataMaterials_tag_call,
	NULL
};

StructRNA RNA_BlendDataMaterials = {
	{(ContainerRNA *)&RNA_BlendDataMeshes, (ContainerRNA *)&RNA_BlendDataLibraries,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMaterials_rna_type, (PropertyRNA*)&rna_BlendDataMaterials_rna_properties}},
	"BlendDataMaterials"	, NULL,NULL
, 0, "Main Material", "Collection of materials",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataMaterials_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataMaterials_new_func, (FunctionRNA*)&rna_BlendDataMaterials_tag_func}
};

/* Main Meshes */
PointerPropertyRNA rna_BlendDataMeshes_rna_type = {
	{(PropertyRNA*)&rna_BlendDataMeshes_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMeshes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataMeshes_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataMeshes_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMeshes_rna_properties_begin, BlendDataMeshes_rna_properties_next, BlendDataMeshes_rna_properties_end, BlendDataMeshes_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataMeshes_new_name = {
	{(PropertyRNA*)&rna_BlendDataMeshes_new_mesh, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Mesh"
};

PointerPropertyRNA rna_BlendDataMeshes_new_mesh = {
	{NULL, (PropertyRNA*)&rna_BlendDataMeshes_new_name,
	-1, "mesh", 8, "",
	"New mesh datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FunctionRNA rna_BlendDataMeshes_new_func = {
	{(FunctionRNA*)&rna_BlendDataMeshes_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMeshes_new_name, (PropertyRNA*)&rna_BlendDataMeshes_new_mesh}},
	"new", 0, "Add a new mesh to the main database",
	BlendDataMeshes_new_call,
	(PropertyRNA*)&rna_BlendDataMeshes_new_mesh
};

PointerPropertyRNA rna_BlendDataMeshes_remove_mesh = {
	{NULL, NULL,
	-1, "mesh", 262148, "",
	"Mesh to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Mesh
};

FunctionRNA rna_BlendDataMeshes_remove_func = {
	{(FunctionRNA*)&rna_BlendDataMeshes_tag_func, (FunctionRNA*)&rna_BlendDataMeshes_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMeshes_remove_mesh, (PropertyRNA*)&rna_BlendDataMeshes_remove_mesh}},
	"remove", 4, "Remove a mesh from the current blendfile.",
	BlendDataMeshes_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataMeshes_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMeshes_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataMeshes_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMeshes_tag_value, (PropertyRNA*)&rna_BlendDataMeshes_tag_value}},
	"tag", 0, "tag",
	BlendDataMeshes_tag_call,
	NULL
};

StructRNA RNA_BlendDataMeshes = {
	{(ContainerRNA *)&RNA_BlendDataMetaBalls, (ContainerRNA *)&RNA_BlendDataMaterials,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMeshes_rna_type, (PropertyRNA*)&rna_BlendDataMeshes_rna_properties}},
	"BlendDataMeshes"	, NULL,NULL
, 0, "Main Meshes", "Collection of meshes",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataMeshes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataMeshes_new_func, (FunctionRNA*)&rna_BlendDataMeshes_tag_func}
};

/* Main MetaBall */
PointerPropertyRNA rna_BlendDataMetaBalls_rna_type = {
	{(PropertyRNA*)&rna_BlendDataMetaBalls_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMetaBalls_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataMetaBalls_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataMetaBalls_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataMetaBalls_rna_properties_begin, BlendDataMetaBalls_rna_properties_next, BlendDataMetaBalls_rna_properties_end, BlendDataMetaBalls_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataMetaBalls_new_name = {
	{(PropertyRNA*)&rna_BlendDataMetaBalls_new_metaball, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "MetaBall"
};

PointerPropertyRNA rna_BlendDataMetaBalls_new_metaball = {
	{NULL, (PropertyRNA*)&rna_BlendDataMetaBalls_new_name,
	-1, "metaball", 8, "",
	"New metaball datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaBall
};

FunctionRNA rna_BlendDataMetaBalls_new_func = {
	{(FunctionRNA*)&rna_BlendDataMetaBalls_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMetaBalls_new_name, (PropertyRNA*)&rna_BlendDataMetaBalls_new_metaball}},
	"new", 0, "Add a new metaball to the main database",
	BlendDataMetaBalls_new_call,
	(PropertyRNA*)&rna_BlendDataMetaBalls_new_metaball
};

PointerPropertyRNA rna_BlendDataMetaBalls_remove_metaball = {
	{NULL, NULL,
	-1, "metaball", 262148, "",
	"MetaBall to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_MetaBall
};

FunctionRNA rna_BlendDataMetaBalls_remove_func = {
	{(FunctionRNA*)&rna_BlendDataMetaBalls_tag_func, (FunctionRNA*)&rna_BlendDataMetaBalls_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMetaBalls_remove_metaball, (PropertyRNA*)&rna_BlendDataMetaBalls_remove_metaball}},
	"remove", 4, "Remove a metaball from the current blendfile.",
	BlendDataMetaBalls_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataMetaBalls_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataMetaBalls_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataMetaBalls_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMetaBalls_tag_value, (PropertyRNA*)&rna_BlendDataMetaBalls_tag_value}},
	"tag", 0, "tag",
	BlendDataMetaBalls_tag_call,
	NULL
};

StructRNA RNA_BlendDataMetaBalls = {
	{(ContainerRNA *)&RNA_BlendDataNodeTrees, (ContainerRNA *)&RNA_BlendDataMeshes,
	NULL,
	{(PropertyRNA*)&rna_BlendDataMetaBalls_rna_type, (PropertyRNA*)&rna_BlendDataMetaBalls_rna_properties}},
	"BlendDataMetaBalls"	, NULL,NULL
, 0, "Main MetaBall", "Collection of metaballs",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataMetaBalls_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataMetaBalls_new_func, (FunctionRNA*)&rna_BlendDataMetaBalls_tag_func}
};

/* Main Node Trees */
PointerPropertyRNA rna_BlendDataNodeTrees_rna_type = {
	{(PropertyRNA*)&rna_BlendDataNodeTrees_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataNodeTrees_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataNodeTrees_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataNodeTrees_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataNodeTrees_rna_properties_begin, BlendDataNodeTrees_rna_properties_next, BlendDataNodeTrees_rna_properties_end, BlendDataNodeTrees_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataNodeTrees_new_name = {
	{(PropertyRNA*)&rna_BlendDataNodeTrees_new_type, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "NodeGroup"
};

static EnumPropertyItem rna_BlendDataNodeTrees_new_type_items[4] = {
	{0, "SHADER", 0, "Shader", ""},
	{1, "COMPOSITE", 0, "Composite", ""},
	{2, "TEXTURE", 0, "Texture", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataNodeTrees_new_type = {
	{(PropertyRNA*)&rna_BlendDataNodeTrees_new_tree, (PropertyRNA*)&rna_BlendDataNodeTrees_new_name,
	-1, "type", 7, "Type",
	"The type of node_group to add",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_BlendDataNodeTrees_new_type_items, 3, 0
};

PointerPropertyRNA rna_BlendDataNodeTrees_new_tree = {
	{NULL, (PropertyRNA*)&rna_BlendDataNodeTrees_new_type,
	-1, "tree", 8, "",
	"New node tree datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

FunctionRNA rna_BlendDataNodeTrees_new_func = {
	{(FunctionRNA*)&rna_BlendDataNodeTrees_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataNodeTrees_new_name, (PropertyRNA*)&rna_BlendDataNodeTrees_new_tree}},
	"new", 0, "Add a new node tree to the main database",
	BlendDataNodeTrees_new_call,
	(PropertyRNA*)&rna_BlendDataNodeTrees_new_tree
};

PointerPropertyRNA rna_BlendDataNodeTrees_remove_tree = {
	{NULL, NULL,
	-1, "tree", 262148, "",
	"Node tree to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_NodeTree
};

FunctionRNA rna_BlendDataNodeTrees_remove_func = {
	{(FunctionRNA*)&rna_BlendDataNodeTrees_tag_func, (FunctionRNA*)&rna_BlendDataNodeTrees_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataNodeTrees_remove_tree, (PropertyRNA*)&rna_BlendDataNodeTrees_remove_tree}},
	"remove", 4, "Remove a node tree from the current blendfile.",
	BlendDataNodeTrees_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataNodeTrees_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataNodeTrees_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataNodeTrees_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataNodeTrees_tag_value, (PropertyRNA*)&rna_BlendDataNodeTrees_tag_value}},
	"tag", 0, "tag",
	BlendDataNodeTrees_tag_call,
	NULL
};

StructRNA RNA_BlendDataNodeTrees = {
	{(ContainerRNA *)&RNA_BlendDataObjects, (ContainerRNA *)&RNA_BlendDataMetaBalls,
	NULL,
	{(PropertyRNA*)&rna_BlendDataNodeTrees_rna_type, (PropertyRNA*)&rna_BlendDataNodeTrees_rna_properties}},
	"BlendDataNodeTrees"	, NULL,NULL
, 0, "Main Node Trees", "Collection of node trees",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataNodeTrees_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataNodeTrees_new_func, (FunctionRNA*)&rna_BlendDataNodeTrees_tag_func}
};

/* Main Objects */
PointerPropertyRNA rna_BlendDataObjects_rna_type = {
	{(PropertyRNA*)&rna_BlendDataObjects_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataObjects_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataObjects_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataObjects_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataObjects_rna_properties_begin, BlendDataObjects_rna_properties_next, BlendDataObjects_rna_properties_end, BlendDataObjects_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataObjects_new_name = {
	{(PropertyRNA*)&rna_BlendDataObjects_new_object_data, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Object"
};

PointerPropertyRNA rna_BlendDataObjects_new_object_data = {
	{(PropertyRNA*)&rna_BlendDataObjects_new_object, (PropertyRNA*)&rna_BlendDataObjects_new_name,
	-1, "object_data", 4, "",
	"Object data or None for an empty object.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ID
};

PointerPropertyRNA rna_BlendDataObjects_new_object = {
	{NULL, (PropertyRNA*)&rna_BlendDataObjects_new_object_data,
	-1, "object", 8, "",
	"New object datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_BlendDataObjects_new_func = {
	{(FunctionRNA*)&rna_BlendDataObjects_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataObjects_new_name, (PropertyRNA*)&rna_BlendDataObjects_new_object}},
	"new", 4, "Add a new object to the main database",
	BlendDataObjects_new_call,
	(PropertyRNA*)&rna_BlendDataObjects_new_object
};

PointerPropertyRNA rna_BlendDataObjects_remove_object = {
	{NULL, NULL,
	-1, "object", 262148, "",
	"Object to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Object
};

FunctionRNA rna_BlendDataObjects_remove_func = {
	{(FunctionRNA*)&rna_BlendDataObjects_tag_func, (FunctionRNA*)&rna_BlendDataObjects_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataObjects_remove_object, (PropertyRNA*)&rna_BlendDataObjects_remove_object}},
	"remove", 4, "Remove a object from the current blendfile.",
	BlendDataObjects_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataObjects_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataObjects_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataObjects_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataObjects_tag_value, (PropertyRNA*)&rna_BlendDataObjects_tag_value}},
	"tag", 0, "tag",
	BlendDataObjects_tag_call,
	NULL
};

StructRNA RNA_BlendDataObjects = {
	{(ContainerRNA *)&RNA_BlendDataParticles, (ContainerRNA *)&RNA_BlendDataNodeTrees,
	NULL,
	{(PropertyRNA*)&rna_BlendDataObjects_rna_type, (PropertyRNA*)&rna_BlendDataObjects_rna_properties}},
	"BlendDataObjects"	, NULL,NULL
, 0, "Main Objects", "Collection of objects",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataObjects_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataObjects_new_func, (FunctionRNA*)&rna_BlendDataObjects_tag_func}
};

/* Main Particle Settings */
PointerPropertyRNA rna_BlendDataParticles_rna_type = {
	{(PropertyRNA*)&rna_BlendDataParticles_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataParticles_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataParticles_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataParticles_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataParticles_rna_properties_begin, BlendDataParticles_rna_properties_next, BlendDataParticles_rna_properties_end, BlendDataParticles_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataParticles_new_name = {
	{(PropertyRNA*)&rna_BlendDataParticles_new_particle, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "ParticleSettings"
};

PointerPropertyRNA rna_BlendDataParticles_new_particle = {
	{NULL, (PropertyRNA*)&rna_BlendDataParticles_new_name,
	-1, "particle", 8, "",
	"New particle settings datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettings
};

FunctionRNA rna_BlendDataParticles_new_func = {
	{(FunctionRNA*)&rna_BlendDataParticles_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataParticles_new_name, (PropertyRNA*)&rna_BlendDataParticles_new_particle}},
	"new", 0, "Add a new particle settings instance to the main database",
	BlendDataParticles_new_call,
	(PropertyRNA*)&rna_BlendDataParticles_new_particle
};

PointerPropertyRNA rna_BlendDataParticles_remove_particle = {
	{NULL, NULL,
	-1, "particle", 262148, "",
	"Particle Settings to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_ParticleSettings
};

FunctionRNA rna_BlendDataParticles_remove_func = {
	{(FunctionRNA*)&rna_BlendDataParticles_tag_func, (FunctionRNA*)&rna_BlendDataParticles_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataParticles_remove_particle, (PropertyRNA*)&rna_BlendDataParticles_remove_particle}},
	"remove", 4, "Remove a particle settings instance from the current blendfile.",
	BlendDataParticles_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataParticles_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataParticles_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataParticles_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataParticles_tag_value, (PropertyRNA*)&rna_BlendDataParticles_tag_value}},
	"tag", 0, "tag",
	BlendDataParticles_tag_call,
	NULL
};

StructRNA RNA_BlendDataParticles = {
	{(ContainerRNA *)&RNA_BlendDataScenes, (ContainerRNA *)&RNA_BlendDataObjects,
	NULL,
	{(PropertyRNA*)&rna_BlendDataParticles_rna_type, (PropertyRNA*)&rna_BlendDataParticles_rna_properties}},
	"BlendDataParticles"	, NULL,NULL
, 0, "Main Particle Settings", "Collection of particle settings",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataParticles_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataParticles_new_func, (FunctionRNA*)&rna_BlendDataParticles_tag_func}
};

/* Main Scenes */
PointerPropertyRNA rna_BlendDataScenes_rna_type = {
	{(PropertyRNA*)&rna_BlendDataScenes_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScenes_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataScenes_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataScenes_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScenes_rna_properties_begin, BlendDataScenes_rna_properties_next, BlendDataScenes_rna_properties_end, BlendDataScenes_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataScenes_new_name = {
	{(PropertyRNA*)&rna_BlendDataScenes_new_scene, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Scene"
};

PointerPropertyRNA rna_BlendDataScenes_new_scene = {
	{NULL, (PropertyRNA*)&rna_BlendDataScenes_new_name,
	-1, "scene", 8, "",
	"New scene datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_BlendDataScenes_new_func = {
	{(FunctionRNA*)&rna_BlendDataScenes_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataScenes_new_name, (PropertyRNA*)&rna_BlendDataScenes_new_scene}},
	"new", 0, "Add a new scene to the main database",
	BlendDataScenes_new_call,
	(PropertyRNA*)&rna_BlendDataScenes_new_scene
};

PointerPropertyRNA rna_BlendDataScenes_remove_scene = {
	{NULL, NULL,
	-1, "scene", 262148, "",
	"Scene to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Scene
};

FunctionRNA rna_BlendDataScenes_remove_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataScenes_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataScenes_remove_scene, (PropertyRNA*)&rna_BlendDataScenes_remove_scene}},
	"remove", 6, "Remove a scene from the current blendfile.",
	BlendDataScenes_remove_call,
	NULL
};

StructRNA RNA_BlendDataScenes = {
	{(ContainerRNA *)&RNA_BlendDataScreens, (ContainerRNA *)&RNA_BlendDataParticles,
	NULL,
	{(PropertyRNA*)&rna_BlendDataScenes_rna_type, (PropertyRNA*)&rna_BlendDataScenes_rna_properties}},
	"BlendDataScenes"	, NULL,NULL
, 0, "Main Scenes", "Collection of scenes",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataScenes_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataScenes_new_func, (FunctionRNA*)&rna_BlendDataScenes_remove_func}
};

/* Main Screens */
PointerPropertyRNA rna_BlendDataScreens_rna_type = {
	{(PropertyRNA*)&rna_BlendDataScreens_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScreens_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataScreens_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataScreens_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataScreens_rna_properties_begin, BlendDataScreens_rna_properties_next, BlendDataScreens_rna_properties_end, BlendDataScreens_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_BlendDataScreens_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataScreens_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataScreens_tag_value, (PropertyRNA*)&rna_BlendDataScreens_tag_value}},
	"tag", 0, "tag",
	BlendDataScreens_tag_call,
	NULL
};

StructRNA RNA_BlendDataScreens = {
	{(ContainerRNA *)&RNA_BlendDataSounds, (ContainerRNA *)&RNA_BlendDataScenes,
	NULL,
	{(PropertyRNA*)&rna_BlendDataScreens_rna_type, (PropertyRNA*)&rna_BlendDataScreens_rna_properties}},
	"BlendDataScreens"	, NULL,NULL
, 0, "Main Screens", "Collection of screens",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataScreens_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataScreens_tag_func, (FunctionRNA*)&rna_BlendDataScreens_tag_func}
};

/* Main Sounds */
PointerPropertyRNA rna_BlendDataSounds_rna_type = {
	{(PropertyRNA*)&rna_BlendDataSounds_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSounds_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataSounds_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataSounds_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataSounds_rna_properties_begin, BlendDataSounds_rna_properties_next, BlendDataSounds_rna_properties_end, BlendDataSounds_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_BlendDataSounds_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataSounds_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataSounds_tag_value, (PropertyRNA*)&rna_BlendDataSounds_tag_value}},
	"tag", 0, "tag",
	BlendDataSounds_tag_call,
	NULL
};

StructRNA RNA_BlendDataSounds = {
	{(ContainerRNA *)&RNA_BlendDataTexts, (ContainerRNA *)&RNA_BlendDataScreens,
	NULL,
	{(PropertyRNA*)&rna_BlendDataSounds_rna_type, (PropertyRNA*)&rna_BlendDataSounds_rna_properties}},
	"BlendDataSounds"	, NULL,NULL
, 0, "Main Sounds", "Collection of sounds",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataSounds_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataSounds_tag_func, (FunctionRNA*)&rna_BlendDataSounds_tag_func}
};

/* Main Texts */
PointerPropertyRNA rna_BlendDataTexts_rna_type = {
	{(PropertyRNA*)&rna_BlendDataTexts_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTexts_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataTexts_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataTexts_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTexts_rna_properties_begin, BlendDataTexts_rna_properties_next, BlendDataTexts_rna_properties_end, BlendDataTexts_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataTexts_new_name = {
	{(PropertyRNA*)&rna_BlendDataTexts_new_text, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Text"
};

PointerPropertyRNA rna_BlendDataTexts_new_text = {
	{NULL, (PropertyRNA*)&rna_BlendDataTexts_new_name,
	-1, "text", 8, "",
	"New text datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_new_func = {
	{(FunctionRNA*)&rna_BlendDataTexts_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTexts_new_name, (PropertyRNA*)&rna_BlendDataTexts_new_text}},
	"new", 0, "Add a new text to the main database",
	BlendDataTexts_new_call,
	(PropertyRNA*)&rna_BlendDataTexts_new_text
};

PointerPropertyRNA rna_BlendDataTexts_remove_text = {
	{NULL, NULL,
	-1, "text", 262148, "",
	"Text to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_remove_func = {
	{(FunctionRNA*)&rna_BlendDataTexts_load_func, (FunctionRNA*)&rna_BlendDataTexts_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTexts_remove_text, (PropertyRNA*)&rna_BlendDataTexts_remove_text}},
	"remove", 0, "Remove a text from the current blendfile.",
	BlendDataTexts_remove_call,
	NULL
};

StringPropertyRNA rna_BlendDataTexts_load_filepath = {
	{(PropertyRNA*)&rna_BlendDataTexts_load_text, NULL,
	-1, "filepath", 5, "",
	"path for the datablock.",
	0,
	PROP_STRING, PROP_FILEPATH|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 240, "Path"
};

PointerPropertyRNA rna_BlendDataTexts_load_text = {
	{NULL, (PropertyRNA*)&rna_BlendDataTexts_load_filepath,
	-1, "text", 8, "",
	"New text datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Text
};

FunctionRNA rna_BlendDataTexts_load_func = {
	{(FunctionRNA*)&rna_BlendDataTexts_tag_func, (FunctionRNA*)&rna_BlendDataTexts_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTexts_load_filepath, (PropertyRNA*)&rna_BlendDataTexts_load_text}},
	"load", 4, "Add a new text to the main database from a file",
	BlendDataTexts_load_call,
	(PropertyRNA*)&rna_BlendDataTexts_load_text
};

BooleanPropertyRNA rna_BlendDataTexts_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataTexts_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataTexts_load_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTexts_tag_value, (PropertyRNA*)&rna_BlendDataTexts_tag_value}},
	"tag", 0, "tag",
	BlendDataTexts_tag_call,
	NULL
};

StructRNA RNA_BlendDataTexts = {
	{(ContainerRNA *)&RNA_BlendDataTextures, (ContainerRNA *)&RNA_BlendDataSounds,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTexts_rna_type, (PropertyRNA*)&rna_BlendDataTexts_rna_properties}},
	"BlendDataTexts"	, NULL,NULL
, 0, "Main Texts", "Collection of texts",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataTexts_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataTexts_new_func, (FunctionRNA*)&rna_BlendDataTexts_tag_func}
};

/* Main Textures */
PointerPropertyRNA rna_BlendDataTextures_rna_type = {
	{(PropertyRNA*)&rna_BlendDataTextures_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTextures_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataTextures_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataTextures_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataTextures_rna_properties_begin, BlendDataTextures_rna_properties_next, BlendDataTextures_rna_properties_end, BlendDataTextures_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataTextures_new_name = {
	{(PropertyRNA*)&rna_BlendDataTextures_new_type, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "Texture"
};

static EnumPropertyItem rna_BlendDataTextures_new_type_items[16] = {
	{0, "NONE", 0, "None", ""},
	{5, "BLEND", 80, "Blend", ""},
	{1, "CLOUDS", 80, "Clouds", ""},
	{13, "DISTORTED_NOISE", 80, "Distorted Noise", ""},
	{10, "ENVIRONMENT_MAP", 183, "Environment Map", ""},
	{8, "IMAGE", 183, "Image or Movie", ""},
	{4, "MAGIC", 80, "Magic", ""},
	{3, "MARBLE", 80, "Marble", ""},
	{11, "MUSGRAVE", 80, "Musgrave", ""},
	{7, "NOISE", 80, "Noise", ""},
	{14, "POINT_DENSITY", 80, "Point Density", ""},
	{6, "STUCCI", 80, "Stucci", ""},
	{12, "VORONOI", 80, "Voronoi", ""},
	{15, "VOXEL_DATA", 80, "Voxel Data", ""},
	{2, "WOOD", 80, "Wood", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BlendDataTextures_new_type = {
	{(PropertyRNA*)&rna_BlendDataTextures_new_texture, (PropertyRNA*)&rna_BlendDataTextures_new_name,
	-1, "type", 7, "Type",
	"The type of texture to add",
	0,
	PROP_ENUM, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, rna_BlendDataTextures_new_type_items, 15, 0
};

PointerPropertyRNA rna_BlendDataTextures_new_texture = {
	{NULL, (PropertyRNA*)&rna_BlendDataTextures_new_type,
	-1, "texture", 8, "",
	"New texture datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Texture
};

FunctionRNA rna_BlendDataTextures_new_func = {
	{(FunctionRNA*)&rna_BlendDataTextures_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTextures_new_name, (PropertyRNA*)&rna_BlendDataTextures_new_texture}},
	"new", 0, "Add a new texture to the main database",
	BlendDataTextures_new_call,
	(PropertyRNA*)&rna_BlendDataTextures_new_texture
};

PointerPropertyRNA rna_BlendDataTextures_remove_texture = {
	{NULL, NULL,
	-1, "texture", 262148, "",
	"Texture to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Texture
};

FunctionRNA rna_BlendDataTextures_remove_func = {
	{(FunctionRNA*)&rna_BlendDataTextures_tag_func, (FunctionRNA*)&rna_BlendDataTextures_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTextures_remove_texture, (PropertyRNA*)&rna_BlendDataTextures_remove_texture}},
	"remove", 4, "Remove a texture from the current blendfile.",
	BlendDataTextures_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataTextures_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataTextures_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataTextures_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTextures_tag_value, (PropertyRNA*)&rna_BlendDataTextures_tag_value}},
	"tag", 0, "tag",
	BlendDataTextures_tag_call,
	NULL
};

StructRNA RNA_BlendDataTextures = {
	{(ContainerRNA *)&RNA_BlendDataWindowManagers, (ContainerRNA *)&RNA_BlendDataTexts,
	NULL,
	{(PropertyRNA*)&rna_BlendDataTextures_rna_type, (PropertyRNA*)&rna_BlendDataTextures_rna_properties}},
	"BlendDataTextures"	, NULL,NULL
, 0, "Main Textures", "Collection of groups",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataTextures_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataTextures_new_func, (FunctionRNA*)&rna_BlendDataTextures_tag_func}
};

/* Main Window Managers */
PointerPropertyRNA rna_BlendDataWindowManagers_rna_type = {
	{(PropertyRNA*)&rna_BlendDataWindowManagers_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWindowManagers_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataWindowManagers_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataWindowManagers_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWindowManagers_rna_properties_begin, BlendDataWindowManagers_rna_properties_next, BlendDataWindowManagers_rna_properties_end, BlendDataWindowManagers_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

BooleanPropertyRNA rna_BlendDataWindowManagers_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataWindowManagers_tag_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataWindowManagers_tag_value, (PropertyRNA*)&rna_BlendDataWindowManagers_tag_value}},
	"tag", 0, "tag",
	BlendDataWindowManagers_tag_call,
	NULL
};

StructRNA RNA_BlendDataWindowManagers = {
	{(ContainerRNA *)&RNA_BlendDataWorlds, (ContainerRNA *)&RNA_BlendDataTextures,
	NULL,
	{(PropertyRNA*)&rna_BlendDataWindowManagers_rna_type, (PropertyRNA*)&rna_BlendDataWindowManagers_rna_properties}},
	"BlendDataWindowManagers"	, NULL,NULL
, 0, "Main Window Managers", "Collection of window managers",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataWindowManagers_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataWindowManagers_tag_func, (FunctionRNA*)&rna_BlendDataWindowManagers_tag_func}
};

/* Main Worlds */
PointerPropertyRNA rna_BlendDataWorlds_rna_type = {
	{(PropertyRNA*)&rna_BlendDataWorlds_rna_properties, NULL,
	-1, "rna_type", 524288, "RNA",
	"RNA type definition",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWorlds_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

CollectionPropertyRNA rna_BlendDataWorlds_rna_properties = {
	{NULL, (PropertyRNA*)&rna_BlendDataWorlds_rna_type,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0,
	PROP_COLLECTION, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BlendDataWorlds_rna_properties_begin, BlendDataWorlds_rna_properties_next, BlendDataWorlds_rna_properties_end, BlendDataWorlds_rna_properties_get, NULL, NULL, rna_builtin_properties_lookup_string, &RNA_Property
};

StringPropertyRNA rna_BlendDataWorlds_new_name = {
	{(PropertyRNA*)&rna_BlendDataWorlds_new_world, NULL,
	-1, "name", 5, "",
	"New name for the datablock.",
	0,
	PROP_STRING, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, 0, "World"
};

PointerPropertyRNA rna_BlendDataWorlds_new_world = {
	{NULL, (PropertyRNA*)&rna_BlendDataWorlds_new_name,
	-1, "world", 8, "",
	"New world datablock.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_World
};

FunctionRNA rna_BlendDataWorlds_new_func = {
	{(FunctionRNA*)&rna_BlendDataWorlds_remove_func, NULL,
	NULL,
	{(PropertyRNA*)&rna_BlendDataWorlds_new_name, (PropertyRNA*)&rna_BlendDataWorlds_new_world}},
	"new", 0, "Add a new world to the main database",
	BlendDataWorlds_new_call,
	(PropertyRNA*)&rna_BlendDataWorlds_new_world
};

PointerPropertyRNA rna_BlendDataWorlds_remove_world = {
	{NULL, NULL,
	-1, "world", 262148, "",
	"World to remove.",
	0,
	PROP_POINTER, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_World
};

FunctionRNA rna_BlendDataWorlds_remove_func = {
	{(FunctionRNA*)&rna_BlendDataWorlds_tag_func, (FunctionRNA*)&rna_BlendDataWorlds_new_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataWorlds_remove_world, (PropertyRNA*)&rna_BlendDataWorlds_remove_world}},
	"remove", 4, "Remove a world from the current blendfile.",
	BlendDataWorlds_remove_call,
	NULL
};

BooleanPropertyRNA rna_BlendDataWorlds_tag_value = {
	{NULL, NULL,
	-1, "value", 7, "Value",
	"",
	0,
	PROP_BOOLEAN, PROP_NONE|PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_BlendDataWorlds_tag_func = {
	{NULL, (FunctionRNA*)&rna_BlendDataWorlds_remove_func,
	NULL,
	{(PropertyRNA*)&rna_BlendDataWorlds_tag_value, (PropertyRNA*)&rna_BlendDataWorlds_tag_value}},
	"tag", 0, "tag",
	BlendDataWorlds_tag_call,
	NULL
};

StructRNA RNA_BlendDataWorlds = {
	{(ContainerRNA *)&RNA_BlendTexture, (ContainerRNA *)&RNA_BlendDataWindowManagers,
	NULL,
	{(PropertyRNA*)&rna_BlendDataWorlds_rna_type, (PropertyRNA*)&rna_BlendDataWorlds_rna_properties}},
	"BlendDataWorlds"	, NULL,NULL
, 0, "Main Worlds", "Collection of worlds",
	17,
	NULL, (PropertyRNA*)&rna_BlendDataWorlds_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA*)&rna_BlendDataWorlds_new_func, (FunctionRNA*)&rna_BlendDataWorlds_tag_func}
};

