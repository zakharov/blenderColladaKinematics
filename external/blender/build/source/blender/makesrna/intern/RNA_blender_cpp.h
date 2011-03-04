
#ifndef __RNA_BLENDER_CPP_H__
#define __RNA_BLENDER_CPP_H__

/* Automatically generated classes for the Data API.
   Do not edit manually, changes will be overwritten. */

#include "RNA_blender.h"
#include "RNA_types.h"

#include <string>

namespace RNA {

#define BOOLEAN_PROPERTY(sname, identifier) \
	bool sname::identifier(void) { return (bool)sname##_##identifier##_get(&ptr); }

#define BOOLEAN_ARRAY_PROPERTY(sname, size, identifier) \
	Array<int,size> sname::identifier(void) \
		{ Array<int, size> ar; sname##_##identifier##_get(&ptr, ar.data); return ar; }

#define INT_PROPERTY(sname, identifier) \
	int sname::identifier(void) { return sname##_##identifier##_get(&ptr); }

#define INT_ARRAY_PROPERTY(sname, size, identifier) \
	Array<int,size> sname::identifier(void) \
		{ Array<int, size> ar; sname##_##identifier##_get(&ptr, ar.data); return ar; }

#define FLOAT_PROPERTY(sname, identifier) \
	float sname::identifier(void) { return sname##_##identifier##_get(&ptr); }

#define FLOAT_ARRAY_PROPERTY(sname, size, identifier) \
	Array<float,size> sname::identifier(void) \
		{ Array<float, size> ar; sname##_##identifier##_get(&ptr, ar.data); return ar; }

#define ENUM_PROPERTY(type, sname, identifier) \
	sname::type sname::identifier(void) { return (type)sname##_##identifier##_get(&ptr); }

#define STRING_PROPERTY(sname, identifier) \
	std::string sname::identifier(void) { \
		int len= sname##_##identifier##_length(&ptr); \
		std::string str; str.resize(len); \
		sname##_##identifier##_get(&ptr, &str[0]); return str; } \

#define POINTER_PROPERTY(type, sname, identifier) \
	type sname::identifier(void) { return type(sname##_##identifier##_get(&ptr)); }

#define COLLECTION_PROPERTY(type, sname, identifier) \
	typedef CollectionIterator<type, sname##_##identifier##_begin, \
		sname##_##identifier##_next, sname##_##identifier##_end> identifier##_iterator; \
	Collection<sname, type, sname##_##identifier##_begin, \
		sname##_##identifier##_next, sname##_##identifier##_end> identifier;

class Pointer {
public:
	Pointer(const PointerRNA& p) : ptr(p) { }
	operator const PointerRNA&() { return ptr; }
	bool is_a(StructRNA *type) { return RNA_struct_is_a(&ptr, type); }
	operator void*() { return ptr.data; }
	operator bool() { return ptr.data != NULL; }

	PointerRNA ptr;
};


template<typename T, int Tsize>
class Array {
public:
	T data[Tsize];
	operator T*() { return data; }
};

typedef void (*TBeginFunc)(CollectionPropertyIterator *iter, PointerRNA *ptr);
typedef void (*TNextFunc)(CollectionPropertyIterator *iter);
typedef void (*TEndFunc)(CollectionPropertyIterator *iter);

template<typename T, TBeginFunc Tbegin, TNextFunc Tnext, TEndFunc Tend>
class CollectionIterator {
public:
	CollectionIterator() : t(iter.ptr), init(false) { iter.valid= false; }
	~CollectionIterator(void) { if(init) Tend(&iter); };
	const CollectionIterator<T, Tbegin, Tnext, Tend>& operator=(const CollectionIterator<T, Tbegin, Tnext, Tend>& copy)
	{ if(init) Tend(&iter); iter= copy.iter; if(iter.internal) iter.internal= MEM_dupallocN(iter.internal); t= copy.t; init= copy.init; return *this; }

	operator bool(void)
	{ return iter.valid != 0; }
	const CollectionIterator<T, Tbegin, Tnext, Tend>& operator++() { Tnext(&iter); t = T(iter.ptr); return *this; }
	T& operator*(void) { return t; }
	T* operator->(void) { return &t; }
	bool operator==(const CollectionIterator<T, Tbegin, Tnext, Tend>& other) { return iter.valid == other.iter.valid; }
	bool operator!=(const CollectionIterator<T, Tbegin, Tnext, Tend>& other) { return iter.valid != other.iter.valid; }

	void begin(const Pointer& ptr)
	{ if(init) Tend(&iter); Tbegin(&iter, (PointerRNA*)&ptr.ptr); t = T(iter.ptr); init = true; }

private:
	CollectionPropertyIterator iter;
	T t;
	bool init;
};

template<typename Tp, typename T, TBeginFunc Tbegin, TNextFunc Tnext, TEndFunc Tend>
class Collection {
public:
	Collection(const PointerRNA& p) : ptr(p) {}

	CollectionIterator<T, Tbegin, Tnext, Tend> begin()
	{ CollectionIterator<T, Tbegin, Tnext, Tend> iter; iter.begin(ptr); return iter; }
	CollectionIterator<T, Tbegin, Tnext, Tend> end()
	{ return CollectionIterator<T, Tbegin, Tnext, Tend>(); } /* test */ 

private:
	PointerRNA ptr;
};

/**************** Declarations ****************/

class Struct;
class Property;
class BooleanProperty;
class IntProperty;
class FloatProperty;
class StringProperty;
class EnumProperty;
class EnumPropertyItem;
class PointerProperty;
class CollectionProperty;
class Function;
class BlenderRNA;
class UnknownType;
class AnyType;
class ID;
class PropertyGroupItem;
class PropertyGroup;
class IDMaterials;
class Library;
class Texture;
class CloudsTexture;
class WoodTexture;
class MarbleTexture;
class MagicTexture;
class BlendTexture;
class StucciTexture;
class NoiseTexture;
class ImageTexture;
class PluginTexture;
class EnvironmentMapTexture;
class MusgraveTexture;
class VoronoiTexture;
class DistortedNoiseTexture;
class PointDensity;
class PointDensityTexture;
class VoxelData;
class VoxelDataTexture;
class TextureSlot;
class EnvironmentMap;
class TexMapping;
class Action;
class ActionFCurves;
class ActionGroups;
class ActionPoseMarkers;
class ActionGroup;
class DopeSheet;
class AnimData;
class NlaTracks;
class KeyingSet;
class KeyingSetPaths;
class KeyingSetPath;
class KeyingSetInfo;
class AnimViz;
class AnimVizOnionSkinning;
class AnimVizMotionPaths;
class MotionPath;
class MotionPathVert;
class Actuator;
class ActionActuator;
class ObjectActuator;
class FCurveActuator;
class CameraActuator;
class SoundActuator;
class PropertyActuator;
class ConstraintActuator;
class EditObjectActuator;
class SceneActuator;
class RandomActuator;
class MessageActuator;
class GameActuator;
class VisibilityActuator;
class Filter2DActuator;
class ParentActuator;
class ShapeActionActuator;
class StateActuator;
class ArmatureActuator;
class Armature;
class ArmatureBones;
class ArmatureEditBones;
class Bone;
class EditBone;
class BoidRule;
class BoidRuleGoal;
class BoidRuleAvoid;
class BoidRuleAvoidCollision;
class BoidRuleFollowLeader;
class BoidRuleAverageSpeed;
class BoidRuleFight;
class BoidState;
class BoidSettings;
class Brush;
class BrushTextureSlot;
class OperatorStrokeElement;
class Camera;
class ClothSettings;
class ClothCollisionSettings;
class CurveMapPoint;
class CurveMap;
class CurveMapping;
class ColorRampElement;
class ColorRamp;
class ColorRampElements;
class Histogram;
class Scopes;
class Constraint;
class ConstraintTarget;
class ChildOfConstraint;
class PythonConstraint;
class StretchToConstraint;
class FollowPathConstraint;
class LockedTrackConstraint;
class ActionConstraint;
class CopyScaleConstraint;
class MaintainVolumeConstraint;
class CopyLocationConstraint;
class CopyRotationConstraint;
class CopyTransformsConstraint;
class FloorConstraint;
class TrackToConstraint;
class KinematicConstraint;
class RigidBodyJointConstraint;
class ClampToConstraint;
class LimitDistanceConstraint;
class LimitScaleConstraint;
class LimitRotationConstraint;
class LimitLocationConstraint;
class TransformConstraint;
class ShrinkwrapConstraint;
class DampedTrackConstraint;
class SplineIKConstraint;
class PivotConstraint;
class Context;
class Controller;
class ExpressionController;
class PythonController;
class AndController;
class OrController;
class NorController;
class NandController;
class XorController;
class XnorController;
class Curve;
class CurveSplines;
class SurfaceCurve;
class TextCurve;
class TextBox;
class TextCharacterFormat;
class SplinePoint;
class BezierSplinePoint;
class Spline;
class SplinePoints;
class SplineBezierPoints;
class FCurve;
class FCurveKeyframePoints;
class FCurveModifiers;
class Keyframe;
class FCurveSample;
class DriverTarget;
class DriverVariable;
class Driver;
class ChannelDriverVariables;
class FModifier;
class FModifierGenerator;
class FModifierFunctionGenerator;
class FModifierEnvelope;
class FModifierEnvelopeControlPoint;
class FModifierCycles;
class FModifierPython;
class FModifierLimits;
class FModifierNoise;
class FModifierStepped;
class FluidSettings;
class DomainFluidSettings;
class FluidFluidSettings;
class ObstacleFluidSettings;
class InflowFluidSettings;
class OutflowFluidSettings;
class ParticleFluidSettings;
class ControlFluidSettings;
class GreasePencil;
class GPencilLayer;
class GPencilFrame;
class GPencilStroke;
class GPencilStrokePoint;
class Group;
class GroupObjects;
class Image;
class ImageUser;
class Key;
class ShapeKey;
class ShapeKeyPoint;
class ShapeKeyCurvePoint;
class ShapeKeyBezierPoint;
class Lamp;
class LampTextureSlots;
class PointLamp;
class AreaLamp;
class SpotLamp;
class SunLamp;
class LampSkySettings;
class HemiLamp;
class LampTextureSlot;
class Lattice;
class LatticePoint;
class BlendData;
class BlendDataCameras;
class BlendDataScenes;
class BlendDataObjects;
class BlendDataMaterials;
class BlendDataNodeTrees;
class BlendDataMeshes;
class BlendDataLamps;
class BlendDataLibraries;
class BlendDataScreens;
class BlendDataWindowManagers;
class BlendDataImages;
class BlendDataLattices;
class BlendDataCurves;
class BlendDataMetaBalls;
class BlendDataFonts;
class BlendDataTextures;
class BlendDataBrushes;
class BlendDataWorlds;
class BlendDataGroups;
class BlendDataTexts;
class BlendDataSounds;
class BlendDataArmatures;
class BlendDataActions;
class BlendDataParticles;
class BlendDataGreasePencils;
class Material;
class MaterialTextureSlots;
class MaterialRaytraceMirror;
class MaterialRaytraceTransparency;
class MaterialVolume;
class MaterialHalo;
class MaterialSubsurfaceScattering;
class MaterialTextureSlot;
class MaterialStrand;
class MaterialPhysics;
class Mesh;
class MeshVertices;
class MeshEdges;
class MeshFaces;
class UVTextures;
class VertexColors;
class MeshVertex;
class VertexGroupElement;
class MeshEdge;
class MeshFace;
class MeshTextureFaceLayer;
class MeshTextureFace;
class MeshSticky;
class MeshColorLayer;
class MeshColor;
class MeshFloatPropertyLayer;
class MeshFloatProperty;
class MeshIntPropertyLayer;
class MeshIntProperty;
class MeshStringPropertyLayer;
class MeshStringProperty;
class MetaElement;
class MetaBall;
class MetaBallElements;
class Modifier;
class SubsurfModifier;
class LatticeModifier;
class CurveModifier;
class BuildModifier;
class MirrorModifier;
class DecimateModifier;
class WaveModifier;
class ArmatureModifier;
class HookModifier;
class SoftBodyModifier;
class BooleanModifier;
class ArrayModifier;
class EdgeSplitModifier;
class DisplaceModifier;
class UVProjectModifier;
class UVProjector;
class SmoothModifier;
class CastModifier;
class MeshDeformModifier;
class ParticleSystemModifier;
class ParticleInstanceModifier;
class ExplodeModifier;
class ClothModifier;
class CollisionModifier;
class BevelModifier;
class ShrinkwrapModifier;
class FluidSimulationModifier;
class MaskModifier;
class SimpleDeformModifier;
class MultiresModifier;
class SurfaceModifier;
class SmokeModifier;
class SolidifyModifier;
class ScrewModifier;
class NlaTrack;
class NlaStrips;
class NlaStrip;
class NodeTree;
class NodeLinks;
class GroupInputs;
class GroupOutputs;
class NodeSocket;
class ValueNodeSocket;
class VectorNodeSocket;
class RGBANodeSocket;
class Node;
class NodeLink;
class ShaderNode;
class CompositorNode;
class TextureNode;
class CompositorNodeTree;
class CompositorNodes;
class ShaderNodeTree;
class ShaderNodes;
class TextureNodeTree;
class TextureNodes;
class ShaderNodeOutput;
class ShaderNodeMaterial;
class ShaderNodeRGB;
class ShaderNodeValue;
class ShaderNodeMixRGB;
class ShaderNodeValToRGB;
class ShaderNodeRGBToBW;
class ShaderNodeTexture;
class ShaderNodeNormal;
class ShaderNodeGeometry;
class ShaderNodeMapping;
class ShaderNodeVectorCurve;
class ShaderNodeRGBCurve;
class ShaderNodeCameraData;
class ShaderNodeMath;
class ShaderNodeVectorMath;
class ShaderNodeSqueeze;
class ShaderNodeExtendedMaterial;
class ShaderNodeInvert;
class ShaderNodeSeparateRGB;
class ShaderNodeCombineRGB;
class ShaderNodeHueSaturation;
class CompositorNodeViewer;
class CompositorNodeRGB;
class CompositorNodeValue;
class CompositorNodeMixRGB;
class CompositorNodeValToRGB;
class CompositorNodeRGBToBW;
class CompositorNodeNormal;
class CompositorNodeCurveVec;
class CompositorNodeCurveRGB;
class CompositorNodeAlphaOver;
class CompositorNodeBlur;
class CompositorNodeFilter;
class CompositorNodeMapValue;
class CompositorNodeTime;
class CompositorNodeVecBlur;
class CompositorNodeSepRGBA;
class CompositorNodeSepHSVA;
class CompositorNodeSetAlpha;
class CompositorNodeHueSat;
class CompositorNodeImage;
class CompositorNodeRLayers;
class CompositorNodeComposite;
class CompositorNodeOutputFile;
class CompositorNodeTexture;
class CompositorNodeTranslate;
class CompositorNodeZcombine;
class CompositorNodeCombRGBA;
class CompositorNodeDilateErode;
class CompositorNodeRotate;
class CompositorNodeScale;
class CompositorNodeSepYCCA;
class CompositorNodeCombYCCA;
class CompositorNodeSepYUVA;
class CompositorNodeCombYUVA;
class CompositorNodeDiffMatte;
class CompositorNodeColorSpill;
class CompositorNodeChromaMatte;
class CompositorNodeChannelMatte;
class CompositorNodeFlip;
class CompositorNodeSplitViewer;
class CompositorNodeMapUV;
class CompositorNodeIDMask;
class CompositorNodeDefocus;
class CompositorNodeDisplace;
class CompositorNodeCombHSVA;
class CompositorNodeMath;
class CompositorNodeLumaMatte;
class CompositorNodeBrightContrast;
class CompositorNodeGamma;
class CompositorNodeInvert;
class CompositorNodeNormalize;
class CompositorNodeCrop;
class CompositorNodeDBlur;
class CompositorNodeBilateralblur;
class CompositorNodePremulKey;
class CompositorNodeGlare;
class CompositorNodeTonemap;
class CompositorNodeLensdist;
class CompositorNodeLevels;
class CompositorNodeColorMatte;
class CompositorNodeDistanceMatte;
class CompositorNodeColorBalance;
class CompositorNodeHueCorrect;
class TextureNodeOutput;
class TextureNodeChecker;
class TextureNodeTexture;
class TextureNodeBricks;
class TextureNodeMath;
class TextureNodeMixRGB;
class TextureNodeRGBToBW;
class TextureNodeValToRGB;
class TextureNodeImage;
class TextureNodeCurveRGB;
class TextureNodeInvert;
class TextureNodeHueSaturation;
class TextureNodeCurveTime;
class TextureNodeRotate;
class TextureNodeViewer;
class TextureNodeTranslate;
class TextureNodeCoordinates;
class TextureNodeDistance;
class TextureNodeCompose;
class TextureNodeDecompose;
class TextureNodeValToNor;
class TextureNodeScale;
class NodeGroup;
class Object;
class ObjectConstraints;
class ObjectModifiers;
class VertexGroups;
class ParticleSystems;
class GameObjectSettings;
class ObjectBase;
class VertexGroup;
class MaterialSlot;
class DupliObject;
class PointCache;
class PointCaches;
class CollisionSettings;
class EffectorWeights;
class FieldSettings;
class GameSoftBodySettings;
class SoftBodySettings;
class PackedFile;
class ParticleTarget;
class SPHFluidSettings;
class ParticleHairKey;
class ParticleKey;
class ChildParticle;
class Particle;
class ParticleDupliWeight;
class ParticleSystem;
class ParticleSettingsTextureSlot;
class ParticleSettings;
class ParticleSettingsTextureSlots;
class Pose;
class BoneGroups;
class PoseBone;
class PoseBoneConstraints;
class IKParam;
class Itasc;
class BoneGroup;
class GameProperty;
class GameBooleanProperty;
class GameIntProperty;
class GameFloatProperty;
class GameTimerProperty;
class GameStringProperty;
class RenderEngine;
class RenderResult;
class RenderLayer;
class RenderPass;
class Scene;
class SceneBases;
class SceneObjects;
class KeyingSets;
class KeyingSetsAll;
class TimelineMarkers;
class ToolSettings;
class UnitSettings;
class RenderSettings;
class RenderLayers;
class SceneGameData;
class SceneRenderLayer;
class TransformOrientation;
class Screen;
class Area;
class Region;
class Paint;
class Sculpt;
class VertexPaint;
class ImagePaint;
class ParticleEdit;
class ParticleBrush;
class Sensor;
class AlwaysSensor;
class NearSensor;
class MouseSensor;
class TouchSensor;
class KeyboardSensor;
class PropertySensor;
class ArmatureSensor;
class ActuatorSensor;
class DelaySensor;
class CollisionSensor;
class RadarSensor;
class RandomSensor;
class RaySensor;
class MessageSensor;
class JoystickSensor;
class SequenceElement;
class SequenceProxy;
class SequenceColorBalance;
class SequenceCrop;
class SequenceTransform;
class Sequence;
class SequenceEditor;
class ImageSequence;
class MetaSequence;
class SceneSequence;
class MovieSequence;
class SoundSequence;
class EffectSequence;
class MulticamSequence;
class PluginSequence;
class WipeSequence;
class GlowSequence;
class TransformSequence;
class ColorSequence;
class SpeedControlSequence;
class SmokeDomainSettings;
class SmokeFlowSettings;
class SmokeCollSettings;
class Space;
class SpaceImageEditor;
class SpaceUVEditor;
class SpaceSequenceEditor;
class SpaceTextEditor;
class FileSelectParams;
class SpaceFileBrowser;
class SpaceOutliner;
class BackgroundImage;
class SpaceView3D;
class RegionView3D;
class SpaceProperties;
class SpaceDopeSheetEditor;
class SpaceGraphEditor;
class SpaceNLA;
class SpaceTimeline;
class SpaceConsole;
class ConsoleLine;
class SpaceInfo;
class SpaceUserPreferences;
class SpaceNodeEditor;
class SpaceLogicEditor;
class TextLine;
class TextMarker;
class Text;
class TimelineMarker;
class Sound;
class UILayout;
class Panel;
class Header;
class Menu;
class ThemeFontStyle;
class ThemeStyle;
class ThemeWidgetColors;
class ThemeWidgetStateColors;
class ThemeUserInterface;
class ThemeView3D;
class ThemeGraphEditor;
class ThemeFileBrowser;
class ThemeNLAEditor;
class ThemeDopeSheet;
class ThemeImageEditor;
class ThemeSequenceEditor;
class ThemeProperties;
class ThemeTextEditor;
class ThemeTimeline;
class ThemeNodeEditor;
class ThemeOutliner;
class ThemeInfo;
class ThemeUserPreferences;
class ThemeConsole;
class ThemeAudioWindow;
class ThemeLogicEditor;
class ThemeBoneColorSet;
class Theme;
class UserSolidLight;
class UserPreferences;
class Addons;
class UserPreferencesView;
class UserPreferencesEdit;
class UserPreferencesInput;
class UserPreferencesFilePaths;
class UserPreferencesSystem;
class Addon;
class VectorFont;
class Operator;
class OperatorProperties;
class OperatorMousePath;
class OperatorFileListElement;
class Macro;
class OperatorTypeMacro;
class Event;
class Window;
class WindowManager;
class KeyConfigurations;
class KeyConfig;
class KeyMaps;
class KeyMap;
class KeyMapItems;
class KeyMapItem;
class World;
class WorldTextureSlots;
class WorldLighting;
class WorldMistSettings;
class WorldStarsSettings;
class WorldTextureSlot;

/**************** Struct Definition ****************/

class Struct : public Pointer {
public:
	Struct(const PointerRNA& ptr) :
		Pointer(ptr),
		properties(ptr),
		functions(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Human readable name */
	std::string name(void);
	/* Identifier: Unique name used in the code and scripting */
	std::string identifier(void);
	/* Description: Description of the Struct's purpose */
	std::string description(void);
	/* Base: Struct definition this is derived from */
	Struct base(void);
	/* Nested: Struct in which this struct is always nested, and to which it logically belongs */
	Struct nested(void);
	/* Name Property: Property that gives the name of the struct */
	StringProperty name_property(void);
	/* Properties: Properties in the struct */
	COLLECTION_PROPERTY(Property, Struct, properties)
	/* Functions */
	COLLECTION_PROPERTY(Function, Struct, functions)
};

/**************** Property Definition ****************/

class Property : public Pointer {
public:
	Property(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Human readable name */
	std::string name(void);
	/* Identifier: Unique name used in the code and scripting */
	std::string identifier(void);
	/* Description: Description of the property for tooltips */
	std::string description(void);
	/* Type: Data type of the property */
	enum type_enum {
		type_BOOLEAN = 0,
		type_INT = 1,
		type_FLOAT = 2,
		type_STRING = 3,
		type_ENUM = 4,
		type_POINTER = 5,
		type_COLLECTION = 6,
	};
	type_enum type(void);
	/* Subtype: Semantic interpretation of the property */
	enum subtype_enum {
		subtype_NONE = 0,
		subtype_FILE_PATH = 1,
		subtype_DIRECTORY_PATH = 2,
		subtype_UNSIGNED = 13,
		subtype_PERCENTAGE = 14,
		subtype_FACTOR = 15,
		subtype_ANGLE = 327696,
		subtype_TIME = 393233,
		subtype_DISTANCE = 65554,
		subtype_COLOR = 20,
		subtype_TRANSLATION = 65557,
		subtype_DIRECTION = 22,
		subtype_MATRIX = 25,
		subtype_EULER = 327706,
		subtype_QUATERNION = 27,
		subtype_XYZ = 29,
		subtype_COLOR_GAMMA = 30,
		subtype_LAYER = 40,
		subtype_LAYER_MEMBERSHIP = 41,
	};
	subtype_enum subtype(void);
	/* Base: Struct definition used for properties assigned to this item */
	Struct srna(void);
	/* Unit: Type of units for this property */
	enum unit_enum {
		unit_NONE = 0,
		unit_LENGTH = 65536,
		unit_AREA = 131072,
		unit_VOLUME = 196608,
		unit_ROTATION = 327680,
		unit_TIME = 393216,
		unit_VELOCITY = 458752,
		unit_ACCELERATION = 524288,
	};
	unit_enum unit(void);
	/* Read Only: Property is editable through RNA */
	bool is_readonly(void);
	/* Required: False when this property is an optional argument in an RNA function */
	bool is_required(void);
	/* Never None: True when this value can't be set to None */
	bool is_never_none(void);
	/* Hidden: True when the property is hidden */
	bool is_hidden(void);
	/* Return: True when this property is an output value from an RNA function */
	bool is_output(void);
	/* Registered: Property is registered as part of type registration */
	bool is_registered(void);
	/* Registered Optionally: Property is optionally registered as part of type registration */
	bool is_registered_optional(void);
	/* Read Only: Property is editable through RNA */
	bool is_runtime(void);
	/* Enum Flag: True when multiple enums  */
	bool is_enum_flag(void);
};

/**************** Boolean Definition ****************/

class BooleanProperty : public Property {
public:
	BooleanProperty(const PointerRNA& ptr) :
		Property(ptr)
		{}

	/* Default: Default value for this number */
	bool default(void);
	/* Default Array: Default value for this array */
	Array<int, 3> default_array(void);
	/* Array Length: Maximum length of the array, 0 means unlimited */
	int array_length(void);
};

/**************** Int Definition ****************/

class IntProperty : public Property {
public:
	IntProperty(const PointerRNA& ptr) :
		Property(ptr)
		{}

	/* Default: Default value for this number */
	int default(void);
	/* Default Array: Default value for this array */
	Array<int, 3> default_array(void);
	/* Array Length: Maximum length of the array, 0 means unlimited */
	int array_length(void);
	/* Hard Minimum: Minimum value used by buttons */
	int hard_min(void);
	/* Hard Maximum: Maximum value used by buttons */
	int hard_max(void);
	/* Soft Minimum: Minimum value used by buttons */
	int soft_min(void);
	/* Soft Maximum: Maximum value used by buttons */
	int soft_max(void);
	/* Step: Step size used by number buttons, for floats 1/100th of the step size */
	int step(void);
};

/**************** Float Definition ****************/

class FloatProperty : public Property {
public:
	FloatProperty(const PointerRNA& ptr) :
		Property(ptr)
		{}

	/* Default: Default value for this number */
	float default(void);
	/* Default Array: Default value for this array */
	Array<float, 3> default_array(void);
	/* Array Length: Maximum length of the array, 0 means unlimited */
	int array_length(void);
	/* Hard Minimum: Minimum value used by buttons */
	float hard_min(void);
	/* Hard Maximum: Maximum value used by buttons */
	float hard_max(void);
	/* Soft Minimum: Minimum value used by buttons */
	float soft_min(void);
	/* Soft Maximum: Maximum value used by buttons */
	float soft_max(void);
	/* Step: Step size used by number buttons, for floats 1/100th of the step size */
	float step(void);
	/* Precision: Number of digits after the dot used by buttons */
	int precision(void);
};

/**************** String Definition ****************/

class StringProperty : public Property {
public:
	StringProperty(const PointerRNA& ptr) :
		Property(ptr)
		{}

	/* Default: string default value */
	std::string default(void);
	/* Maximum Length: Maximum length of the string, 0 means unlimited */
	int length_max(void);
};

/**************** Enum Definition ****************/

class EnumProperty : public Property {
public:
	EnumProperty(const PointerRNA& ptr) :
		Property(ptr),
		items(ptr)
		{}

	/* Default: Default value for this enum */
	enum default_enum {
		default_DUMMY = 0,
	};
	default_enum default(void);
	/* Default: Default value for this enum */
	enum default_flag_enum {
		default_flag_DUMMY = 0,
	};
	default_flag_enum default_flag(void);
	/* Items: Possible values for the property */
	COLLECTION_PROPERTY(EnumPropertyItem, EnumProperty, items)
};

/**************** Enum Item Definition ****************/

class EnumPropertyItem : public Pointer {
public:
	EnumPropertyItem(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Human readable name */
	std::string name(void);
	/* Description: Description of the item's purpose */
	std::string description(void);
	/* Identifier: Unique name used in the code and scripting */
	std::string identifier(void);
	/* Value: Value of the item */
	int value(void);
};

/**************** Pointer Definition ****************/

class PointerProperty : public Property {
public:
	PointerProperty(const PointerRNA& ptr) :
		Property(ptr)
		{}

	/* Pointer Type: Fixed pointer type, empty if variable type */
	Struct fixed_type(void);
};

/**************** Collection Definition ****************/

class CollectionProperty : public Property {
public:
	CollectionProperty(const PointerRNA& ptr) :
		Property(ptr)
		{}

	/* Pointer Type: Fixed pointer type, empty if variable type */
	Struct fixed_type(void);
};

/**************** Function Definition ****************/

class Function : public Pointer {
public:
	Function(const PointerRNA& ptr) :
		Pointer(ptr),
		parameters(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Identifier: Unique name used in the code and scripting */
	std::string identifier(void);
	/* Description: Description of the Function's purpose */
	std::string description(void);
	/* Parameters: Parameters for the function */
	COLLECTION_PROPERTY(Property, Function, parameters)
	/* Registered: Function is registered as callback as part of type registration */
	bool is_registered(void);
	/* Registered Optionally: Function is optionally registered as callback part of type registration */
	bool is_registered_optional(void);
	/* No Self: Function does not pass its self as an argument (becomes a class method in python) */
	bool use_self(void);
};

/**************** Blender RNA ****************/

class BlenderRNA : public Pointer {
public:
	BlenderRNA(const PointerRNA& ptr) :
		Pointer(ptr),
		structs(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Structs */
	COLLECTION_PROPERTY(Struct, BlenderRNA, structs)
};

/**************** Unknown Type ****************/

class UnknownType : public Pointer {
public:
	UnknownType(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Any Type ****************/

class AnyType : public Pointer {
public:
	AnyType(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** ID ****************/

class ID : public Pointer {
public:
	ID(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Unique datablock ID name */
	std::string name(void);
	/* Users: Number of times this datablock is referenced */
	int users(void);
	/* Fake User: Saves this datablock even if it has no users */
	bool use_fake_user(void);
	/* Tag: Tools can use this to tag data, (initial state is undefined) */
	bool tag(void);
	/* Library: Library file the datablock is linked from */
	Library library(void);
};

/**************** ID Property ****************/

class PropertyGroupItem : public Pointer {
public:
	PropertyGroupItem(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** ID Property Group ****************/

class PropertyGroup : public Pointer {
public:
	PropertyGroup(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** ID Materials ****************/

class IDMaterials : public Pointer {
public:
	IDMaterials(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Library ****************/

class Library : public ID {
public:
	Library(const PointerRNA& ptr) :
		ID(ptr)
		{}

	/* File Path: Path to the library .blend file */
	std::string filepath(void);
	/* Parent */
	Library parent(void);
};

/**************** Texture ****************/

class Texture : public ID {
public:
	Texture(const PointerRNA& ptr) :
		ID(ptr)
		{}

	/* Type */
	enum type_enum {
		type_NONE = 0,
		type_BLEND = 5,
		type_CLOUDS = 1,
		type_DISTORTED_NOISE = 13,
		type_ENVIRONMENT_MAP = 10,
		type_IMAGE = 8,
		type_MAGIC = 4,
		type_MARBLE = 3,
		type_MUSGRAVE = 11,
		type_NOISE = 7,
		type_POINT_DENSITY = 14,
		type_STUCCI = 6,
		type_VORONOI = 12,
		type_VOXEL_DATA = 15,
		type_WOOD = 2,
	};
	type_enum type(void);
	/* Use Color Ramp: Toggle color ramp operations */
	bool use_color_ramp(void);
	/* Color Ramp */
	ColorRamp color_ramp(void);
	/* Brightness */
	float intensity(void);
	/* Contrast */
	float contrast(void);
	/* Saturation */
	float saturation(void);
	/* Factor Red */
	float factor_red(void);
	/* Factor Green */
	float factor_green(void);
	/* Factor Blue */
	float factor_blue(void);
	/* Show Alpha: Show Alpha in Preview Render */
	bool use_preview_alpha(void);
	/* Use Nodes: Make this a node-based texture */
	bool use_nodes(void);
	/* Node Tree: Node tree for node-based textures */
	NodeTree node_tree(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
};

/**************** Clouds Texture ****************/

class CloudsTexture : public Texture {
public:
	CloudsTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Noise Size: Sets scaling for noise input */
	float noise_scale(void);
	/* Noise Depth: Sets the depth of the cloud calculation */
	int noise_depth(void);
	/* Noise Basis: Sets the noise basis used for turbulence */
	enum noise_basis_enum {
		noise_basis_BLENDER_ORIGINAL = 0,
		noise_basis_ORIGINAL_PERLIN = 1,
		noise_basis_IMPROVED_PERLIN = 2,
		noise_basis_VORONOI_F1 = 3,
		noise_basis_VORONOI_F2 = 4,
		noise_basis_VORONOI_F3 = 5,
		noise_basis_VORONOI_F4 = 6,
		noise_basis_VORONOI_F2_F1 = 7,
		noise_basis_VORONOI_CRACKLE = 8,
		noise_basis_CELL_NOISE = 14,
	};
	noise_basis_enum noise_basis(void);
	/* Noise Type */
	enum noise_type_enum {
		noise_type_SOFT_NOISE = 0,
		noise_type_HARD_NOISE = 1,
	};
	noise_type_enum noise_type(void);
	/* Color */
	enum cloud_type_enum {
		cloud_type_GREYSCALE = 0,
		cloud_type_COLOR = 1,
	};
	cloud_type_enum cloud_type(void);
	/* Nabla: Size of derivative offset used for calculating normal */
	float nabla(void);
};

/**************** Wood Texture ****************/

class WoodTexture : public Texture {
public:
	WoodTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Noise Size: Sets scaling for noise input */
	float noise_scale(void);
	/* Turbulence: Sets the turbulence of the bandnoise and ringnoise types */
	float turbulence(void);
	/* Noise Basis: Sets the noise basis used for turbulence */
	enum noise_basis_enum {
		noise_basis_BLENDER_ORIGINAL = 0,
		noise_basis_ORIGINAL_PERLIN = 1,
		noise_basis_IMPROVED_PERLIN = 2,
		noise_basis_VORONOI_F1 = 3,
		noise_basis_VORONOI_F2 = 4,
		noise_basis_VORONOI_F3 = 5,
		noise_basis_VORONOI_F4 = 6,
		noise_basis_VORONOI_F2_F1 = 7,
		noise_basis_VORONOI_CRACKLE = 8,
		noise_basis_CELL_NOISE = 14,
	};
	noise_basis_enum noise_basis(void);
	/* Noise Type */
	enum noise_type_enum {
		noise_type_SOFT_NOISE = 0,
		noise_type_HARD_NOISE = 1,
	};
	noise_type_enum noise_type(void);
	/* Pattern */
	enum wood_type_enum {
		wood_type_BANDS = 0,
		wood_type_RINGS = 1,
		wood_type_BANDNOISE = 2,
		wood_type_RINGNOISE = 3,
	};
	wood_type_enum wood_type(void);
	/* Noise Basis 2 */
	enum noisebasis_2_enum {
		noisebasis_2_SIN = 0,
		noisebasis_2_SAW = 1,
		noisebasis_2_TRI = 2,
	};
	noisebasis_2_enum noisebasis_2(void);
	/* Nabla: Size of derivative offset used for calculating normal */
	float nabla(void);
};

/**************** Marble Texture ****************/

class MarbleTexture : public Texture {
public:
	MarbleTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Noise Size: Sets scaling for noise input */
	float noise_scale(void);
	/* Turbulence: Sets the turbulence of the bandnoise and ringnoise types */
	float turbulence(void);
	/* Noise Depth: Sets the depth of the cloud calculation */
	int noise_depth(void);
	/* Noise Type */
	enum noise_type_enum {
		noise_type_SOFT_NOISE = 0,
		noise_type_HARD_NOISE = 1,
	};
	noise_type_enum noise_type(void);
	/* Pattern */
	enum marble_type_enum {
		marble_type_SOFT = 0,
		marble_type_SHARP = 1,
		marble_type_SHARPER = 2,
	};
	marble_type_enum marble_type(void);
	/* Noise Basis: Sets the noise basis used for turbulence */
	enum noise_basis_enum {
		noise_basis_BLENDER_ORIGINAL = 0,
		noise_basis_ORIGINAL_PERLIN = 1,
		noise_basis_IMPROVED_PERLIN = 2,
		noise_basis_VORONOI_F1 = 3,
		noise_basis_VORONOI_F2 = 4,
		noise_basis_VORONOI_F3 = 5,
		noise_basis_VORONOI_F4 = 6,
		noise_basis_VORONOI_F2_F1 = 7,
		noise_basis_VORONOI_CRACKLE = 8,
		noise_basis_CELL_NOISE = 14,
	};
	noise_basis_enum noise_basis(void);
	/* Noise Basis 2 */
	enum noisebasis_2_enum {
		noisebasis_2_SIN = 0,
		noisebasis_2_SAW = 1,
		noisebasis_2_TRI = 2,
	};
	noisebasis_2_enum noisebasis_2(void);
	/* Nabla: Size of derivative offset used for calculating normal */
	float nabla(void);
};

/**************** Magic Texture ****************/

class MagicTexture : public Texture {
public:
	MagicTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Turbulence: Sets the turbulence of the bandnoise and ringnoise types */
	float turbulence(void);
	/* Noise Depth: Sets the depth of the cloud calculation */
	int noise_depth(void);
};

/**************** Blend Texture ****************/

class BlendTexture : public Texture {
public:
	BlendTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Progression: Sets the style of the color blending */
	enum progression_enum {
		progression_LINEAR = 0,
		progression_QUADRATIC = 1,
		progression_EASING = 2,
		progression_DIAGONAL = 3,
		progression_SPHERICAL = 4,
		progression_QUADRATIC_SPHERE = 5,
		progression_RADIAL = 6,
	};
	progression_enum progression(void);
	/* Flip Axis: Flips the texture's X and Y axis */
	enum use_flip_axis_enum {
		use_flip_axis_HORIZONTAL = 0,
		use_flip_axis_VERTICAL = 2,
	};
	use_flip_axis_enum use_flip_axis(void);
};

/**************** Stucci Texture ****************/

class StucciTexture : public Texture {
public:
	StucciTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Turbulence: Sets the turbulence of the bandnoise and ringnoise types */
	float turbulence(void);
	/* Noise Basis: Sets the noise basis used for turbulence */
	enum noise_basis_enum {
		noise_basis_BLENDER_ORIGINAL = 0,
		noise_basis_ORIGINAL_PERLIN = 1,
		noise_basis_IMPROVED_PERLIN = 2,
		noise_basis_VORONOI_F1 = 3,
		noise_basis_VORONOI_F2 = 4,
		noise_basis_VORONOI_F3 = 5,
		noise_basis_VORONOI_F4 = 6,
		noise_basis_VORONOI_F2_F1 = 7,
		noise_basis_VORONOI_CRACKLE = 8,
		noise_basis_CELL_NOISE = 14,
	};
	noise_basis_enum noise_basis(void);
	/* Noise Size: Sets scaling for noise input */
	float noise_scale(void);
	/* Noise Type */
	enum noise_type_enum {
		noise_type_SOFT_NOISE = 0,
		noise_type_HARD_NOISE = 1,
	};
	noise_type_enum noise_type(void);
	/* Pattern */
	enum stucci_type_enum {
		stucci_type_PLASTIC = 0,
		stucci_type_WALL_IN = 1,
		stucci_type_WALL_OUT = 2,
	};
	stucci_type_enum stucci_type(void);
};

/**************** Noise Texture ****************/

class NoiseTexture : public Texture {
public:
	NoiseTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

};

/**************** Image Texture ****************/

class ImageTexture : public Texture {
public:
	ImageTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Interpolation: Interpolates pixels using Area filter */
	bool use_interpolation(void);
	/* Flip Axis: Flips the texture's X and Y axis */
	bool use_flip_axis(void);
	/* Use Alpha: Uses the alpha channel information in the image */
	bool use_alpha(void);
	/* Calculate Alpha: Calculates an alpha channel based on RGB values in the image */
	bool use_calculate_alpha(void);
	/* Invert Alpha: Inverts all the alpha values in the image */
	bool invert_alpha(void);
	/* MIP Map: Uses auto-generated MIP maps for the image */
	bool use_mipmap(void);
	/* MIP Map Gaussian filter: Uses Gauss filter to sample down MIP maps */
	bool use_mipmap_gauss(void);
	/* Filter: Texture filter to use for sampling image */
	enum filter_type_enum {
		filter_type_BOX = 0,
		filter_type_EWA = 1,
		filter_type_FELINE = 2,
		filter_type_AREA = 3,
	};
	filter_type_enum filter_type(void);
	/* Filter Probes: Maximum number of samples. Higher gives less blur at distant/oblique angles, but is also slower */
	int filter_probes(void);
	/* Filter Eccentricity: Maximum eccentricity. Higher gives less blur at distant/oblique angles, but is also slower */
	int filter_eccentricity(void);
	/* Minimum Filter Size: Use Filter Size as a minimal filter value in pixels */
	bool use_filter_size_min(void);
	/* Filter Size: Multiplies the filter size used by MIP Map and Interpolation */
	float filter_size(void);
	/* Extension: Sets how the image is extrapolated past its original bounds */
	enum extension_enum {
		extension_EXTEND = 1,
		extension_CLIP = 2,
		extension_CLIP_CUBE = 4,
		extension_REPEAT = 3,
		extension_CHECKER = 5,
	};
	extension_enum extension(void);
	/* Repeat X: Sets a repetition multiplier in the X direction */
	int repeat_x(void);
	/* Repeat Y: Sets a repetition multiplier in the Y direction */
	int repeat_y(void);
	/* Mirror X: Mirrors the image repetition on the X direction */
	bool use_mirror_x(void);
	/* Mirror Y: Mirrors the image repetition on the Y direction */
	bool use_mirror_y(void);
	/* Checker Odd: Sets odd checker tiles */
	bool use_checker_odd(void);
	/* Checker Even: Sets even checker tiles */
	bool use_checker_even(void);
	/* Checker Distance: Sets distance between checker tiles */
	float checker_distance(void);
	/* Crop Minimum X: Sets minimum X value to crop the image */
	float crop_min_x(void);
	/* Crop Minimum Y: Sets minimum Y value to crop the image */
	float crop_min_y(void);
	/* Crop Maximum X: Sets maximum X value to crop the image */
	float crop_max_x(void);
	/* Crop Maximum Y: Sets maximum Y value to crop the image */
	float crop_max_y(void);
	/* Image */
	Image image(void);
	/* Image User: Parameters defining which layer, pass and frame of the image is displayed */
	ImageUser image_user(void);
	/* Normal Map: Uses image RGB values for normal mapping */
	bool use_normal_map(void);
};

/**************** Plugin ****************/

class PluginTexture : public Texture {
public:
	PluginTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

};

/**************** Environment Map ****************/

class EnvironmentMapTexture : public Texture {
public:
	EnvironmentMapTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Image: Source image file to read the environment map from */
	Image image(void);
	/* Image User: Parameters defining which layer, pass and frame of the image is displayed */
	ImageUser image_user(void);
	/* MIP Map: Uses auto-generated MIP maps for the image */
	bool use_mipmap(void);
	/* MIP Map Gaussian filter: Uses Gauss filter to sample down MIP maps */
	bool use_mipmap_gauss(void);
	/* Filter: Texture filter to use for sampling image */
	enum filter_type_enum {
		filter_type_BOX = 0,
		filter_type_EWA = 1,
		filter_type_FELINE = 2,
		filter_type_AREA = 3,
	};
	filter_type_enum filter_type(void);
	/* Filter Probes: Maximum number of samples. Higher gives less blur at distant/oblique angles, but is also slower */
	int filter_probes(void);
	/* Filter Eccentricity: Maximum eccentricity. Higher gives less blur at distant/oblique angles, but is also slower */
	int filter_eccentricity(void);
	/* Minimum Filter Size: Use Filter Size as a minimal filter value in pixels */
	bool use_filter_size_min(void);
	/* Filter Size: Multiplies the filter size used by MIP Map and Interpolation */
	float filter_size(void);
	/* Environment Map: Gets the environment map associated with this texture */
	EnvironmentMap environment_map(void);
};

/**************** Musgrave ****************/

class MusgraveTexture : public Texture {
public:
	MusgraveTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Type */
	enum musgrave_type_enum {
		musgrave_type_MULTIFRACTAL = 0,
		musgrave_type_RIDGED_MULTIFRACTAL = 1,
		musgrave_type_HYBRID_MULTIFRACTAL = 2,
		musgrave_type_FBM = 3,
		musgrave_type_HETERO_TERRAIN = 4,
	};
	musgrave_type_enum musgrave_type(void);
	/* Highest Dimension: Highest fractal dimension */
	float dimension_max(void);
	/* Lacunarity: Gap between successive frequencies */
	float lacunarity(void);
	/* Octaves: Number of frequencies used */
	float octaves(void);
	/* Offset: The fractal offset */
	float offset(void);
	/* Gain: The gain multiplier */
	float gain(void);
	/* Noise Intensity */
	float noise_intensity(void);
	/* Noise Size: Sets scaling for noise input */
	float noise_scale(void);
	/* Noise Basis: Sets the noise basis used for turbulence */
	enum noise_basis_enum {
		noise_basis_BLENDER_ORIGINAL = 0,
		noise_basis_ORIGINAL_PERLIN = 1,
		noise_basis_IMPROVED_PERLIN = 2,
		noise_basis_VORONOI_F1 = 3,
		noise_basis_VORONOI_F2 = 4,
		noise_basis_VORONOI_F3 = 5,
		noise_basis_VORONOI_F4 = 6,
		noise_basis_VORONOI_F2_F1 = 7,
		noise_basis_VORONOI_CRACKLE = 8,
		noise_basis_CELL_NOISE = 14,
	};
	noise_basis_enum noise_basis(void);
	/* Nabla: Size of derivative offset used for calculating normal */
	float nabla(void);
};

/**************** Voronoi ****************/

class VoronoiTexture : public Texture {
public:
	VoronoiTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Weight 1: Voronoi feature weight 1 */
	float weight_1(void);
	/* Weight 2: Voronoi feature weight 2 */
	float weight_2(void);
	/* Weight 3: Voronoi feature weight 3 */
	float weight_3(void);
	/* Weight 4: Voronoi feature weight 4 */
	float weight_4(void);
	/* Minkovsky Exponent: Minkovsky exponent */
	float minkovsky_exponent(void);
	/* Distance Metric */
	enum distance_metric_enum {
		distance_metric_DISTANCE = 0,
		distance_metric_DISTANCE_SQUARED = 1,
		distance_metric_MANHATTAN = 2,
		distance_metric_CHEBYCHEV = 3,
		distance_metric_MINKOVSKY_HALF = 4,
		distance_metric_MINKOVSKY_FOUR = 5,
		distance_metric_MINKOVSKY = 6,
	};
	distance_metric_enum distance_metric(void);
	/* Coloring */
	enum color_mode_enum {
		color_mode_INTENSITY = 0,
		color_mode_POSITION = 1,
		color_mode_POSITION_OUTLINE = 2,
		color_mode_POSITION_OUTLINE_INTENSITY = 3,
	};
	color_mode_enum color_mode(void);
	/* Noise Intensity */
	float noise_intensity(void);
	/* Noise Size: Sets scaling for noise input */
	float noise_scale(void);
	/* Nabla: Size of derivative offset used for calculating normal */
	float nabla(void);
};

/**************** Distorted Noise ****************/

class DistortedNoiseTexture : public Texture {
public:
	DistortedNoiseTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Distortion Amount */
	float distortion(void);
	/* Noise Size: Sets scaling for noise input */
	float noise_scale(void);
	/* Noise Basis: Sets the noise basis used for turbulence */
	enum noise_basis_enum {
		noise_basis_BLENDER_ORIGINAL = 0,
		noise_basis_ORIGINAL_PERLIN = 1,
		noise_basis_IMPROVED_PERLIN = 2,
		noise_basis_VORONOI_F1 = 3,
		noise_basis_VORONOI_F2 = 4,
		noise_basis_VORONOI_F3 = 5,
		noise_basis_VORONOI_F4 = 6,
		noise_basis_VORONOI_F2_F1 = 7,
		noise_basis_VORONOI_CRACKLE = 8,
		noise_basis_CELL_NOISE = 14,
	};
	noise_basis_enum noise_basis(void);
	/* Noise Distortion: Sets the noise basis for the distortion */
	enum noise_distortion_enum {
		noise_distortion_BLENDER_ORIGINAL = 0,
		noise_distortion_ORIGINAL_PERLIN = 1,
		noise_distortion_IMPROVED_PERLIN = 2,
		noise_distortion_VORONOI_F1 = 3,
		noise_distortion_VORONOI_F2 = 4,
		noise_distortion_VORONOI_F3 = 5,
		noise_distortion_VORONOI_F4 = 6,
		noise_distortion_VORONOI_F2_F1 = 7,
		noise_distortion_VORONOI_CRACKLE = 8,
		noise_distortion_CELL_NOISE = 14,
	};
	noise_distortion_enum noise_distortion(void);
	/* Nabla: Size of derivative offset used for calculating normal */
	float nabla(void);
};

/**************** PointDensity ****************/

class PointDensity : public Pointer {
public:
	PointDensity(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Point Source: Point data to use as renderable point density */
	enum point_source_enum {
		point_source_PARTICLE_SYSTEM = 0,
		point_source_OBJECT = 1,
	};
	point_source_enum point_source(void);
	/* Object: Object to take point data from */
	Object object(void);
	/* Particle System: Particle System to render as points */
	ParticleSystem particle_system(void);
	/* Particle Cache: Co-ordinate system to cache particles in */
	enum particle_cache_space_enum {
		particle_cache_space_OBJECT_LOCATION = 0,
		particle_cache_space_OBJECT_SPACE = 1,
		particle_cache_space_WORLD_SPACE = 2,
	};
	particle_cache_space_enum particle_cache_space(void);
	/* Vertices Cache: Co-ordinate system to cache vertices in */
	enum vertex_cache_space_enum {
		vertex_cache_space_OBJECT_LOCATION = 0,
		vertex_cache_space_OBJECT_SPACE = 1,
		vertex_cache_space_WORLD_SPACE = 2,
	};
	vertex_cache_space_enum vertex_cache_space(void);
	/* Radius: Radius from the shaded sample to look for points within */
	float radius(void);
	/* Falloff: Method of attenuating density by distance from the point */
	enum falloff_enum {
		falloff_STANDARD = 0,
		falloff_SMOOTH = 1,
		falloff_SOFT = 2,
		falloff_CONSTANT = 3,
		falloff_ROOT = 4,
	};
	falloff_enum falloff(void);
	/* Softness: Softness of the 'soft' falloff option */
	float falloff_soft(void);
	/* Color Source: Data to derive color results from */
	enum color_source_enum {
		color_source_CONSTANT = 0,
		color_source_PARTICLE_AGE = 1,
		color_source_PARTICLE_SPEED = 2,
		color_source_PARTICLE_VELOCITY = 3,
	};
	color_source_enum color_source(void);
	/* Scale: Multiplier to bring particle speed within an acceptable range */
	float speed_scale(void);
	/* Color Ramp */
	ColorRamp color_ramp(void);
	/* Turbulence: Add directed noise to the density at render-time */
	bool use_turbulence(void);
	/* Size: Scale of the added turbulent noise */
	float turbulence_scale(void);
	/* Strength */
	float turbulence_strength(void);
	/* Depth: Level of detail in the added turbulent noise */
	int turbulence_depth(void);
	/* Turbulence Influence: Method for driving added turbulent noise */
	enum turbulence_influence_enum {
		turbulence_influence_STATIC = 0,
		turbulence_influence_PARTICLE_VELOCITY = 1,
		turbulence_influence_PARTICLE_AGE = 2,
		turbulence_influence_GLOBAL_TIME = 3,
	};
	turbulence_influence_enum turbulence_influence(void);
	/* Noise Basis: Noise formula used for turbulence */
	enum noise_basis_enum {
		noise_basis_BLENDER_ORIGINAL = 0,
		noise_basis_ORIGINAL_PERLIN = 1,
		noise_basis_IMPROVED_PERLIN = 2,
		noise_basis_VORONOI_F1 = 3,
		noise_basis_VORONOI_F2 = 4,
		noise_basis_VORONOI_F3 = 5,
		noise_basis_VORONOI_F4 = 6,
		noise_basis_VORONOI_F2_F1 = 7,
		noise_basis_VORONOI_CRACKLE = 8,
		noise_basis_CELL_NOISE = 14,
	};
	noise_basis_enum noise_basis(void);
};

/**************** Point Density ****************/

class PointDensityTexture : public Texture {
public:
	PointDensityTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Point Density: The point density settings associated with this texture */
	PointDensity point_density(void);
};

/**************** VoxelData ****************/

class VoxelData : public Pointer {
public:
	VoxelData(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Interpolation: Method to interpolate/smooth values between voxel cells */
	enum interpolation_enum {
		interpolation_NEREASTNEIGHBOR = 0,
		interpolation_TRILINEAR = 1,
		interpolation_QUADRATIC = 2,
		interpolation_TRICUBIC_CATROM = 3,
		interpolation_TRICUBIC_BSPLINE = 4,
	};
	interpolation_enum interpolation(void);
	/* Source: Simulation value to be used as a texture */
	enum smoke_data_type_enum {
		smoke_data_type_SMOKEDENSITY = 0,
		smoke_data_type_SMOKEHEAT = 1,
		smoke_data_type_SMOKEVEL = 2,
	};
	smoke_data_type_enum smoke_data_type(void);
	/* Extension: Sets how the texture is extrapolated past its original bounds */
	enum extension_enum {
		extension_EXTEND = 1,
		extension_CLIP = 2,
		extension_REPEAT = 3,
	};
	extension_enum extension(void);
	/* Intensity: Multiplier for intensity values */
	float intensity(void);
	/* File Format: Format of the source data set to render	 */
	enum file_format_enum {
		file_format_BLENDER_VOXEL = 0,
		file_format_RAW_8BIT = 1,
		file_format_IMAGE_SEQUENCE = 3,
		file_format_SMOKE = 4,
	};
	file_format_enum file_format(void);
	/* Source Path: The external source data file to use */
	std::string filepath(void);
	/* Resolution: Resolution of the voxel grid */
	Array<int, 3> resolution(void);
	/* Still Frame Only: Always render a still frame from the voxel data sequence */
	bool use_still_frame(void);
	/* Still Frame Number: The frame number to always use */
	int still_frame(void);
	/* Domain Object: Object used as the smoke simulation domain */
	Object domain_object(void);
};

/**************** Voxel Data ****************/

class VoxelDataTexture : public Texture {
public:
	VoxelDataTexture(const PointerRNA& ptr) :
		Texture(ptr)
		{}

	/* Voxel Data: The voxel data associated with this texture */
	VoxelData voxel_data(void);
	/* Image */
	Image image(void);
	/* Image User: Parameters defining which layer, pass and frame of the image is displayed */
	ImageUser image_user(void);
};

/**************** Texture Slot ****************/

class TextureSlot : public Pointer {
public:
	TextureSlot(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Texture: Texture datablock used by this texture slot */
	Texture texture(void);
	/* Name: Texture slot name */
	std::string name(void);
	/* Offset: Fine tunes texture mapping X, Y and Z locations */
	Array<float, 3> offset(void);
	/* Size: Sets scaling for the texture's X, Y and Z sizes */
	Array<float, 3> scale(void);
	/* Color: The default color for textures that don't return RGB or when RGB to intensity is enabled */
	Array<float, 3> color(void);
	/* Blend Type */
	enum blend_type_enum {
		blend_type_MIX = 0,
		blend_type_ADD = 2,
		blend_type_SUBTRACT = 3,
		blend_type_MULTIPLY = 1,
		blend_type_SCREEN = 8,
		blend_type_OVERLAY = 9,
		blend_type_DIFFERENCE = 6,
		blend_type_DIVIDE = 4,
		blend_type_DARKEN = 5,
		blend_type_LIGHTEN = 7,
		blend_type_HUE = 10,
		blend_type_SATURATION = 11,
		blend_type_VALUE = 12,
		blend_type_COLOR = 13,
		blend_type_SOFT_LIGHT = 15,
		blend_type_LINEAR_LIGHT = 16,
	};
	blend_type_enum blend_type(void);
	/* Stencil: Use this texture as a blending value on the next texture */
	bool use_stencil(void);
	/* Negate: Inverts the values of the texture to reverse its effect */
	bool invert(void);
	/* RGB to Intensity: Converts texture RGB values to intensity (gray) values */
	bool use_rgb_to_intensity(void);
	/* Default Value: Value to use for Ref, Spec, Amb, Emit, Alpha, RayMir, TransLu and Hard */
	float default_value(void);
	/* Output Node: Which output node to use, for node-based textures */
	enum output_node_enum {
		output_node_DUMMY = 0,
	};
	output_node_enum output_node(void);
};

/**************** EnvironmentMap ****************/

class EnvironmentMap : public Pointer {
public:
	EnvironmentMap(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Source */
	enum source_enum {
		source_STATIC = 0,
		source_ANIMATED = 1,
		source_IMAGE_FILE = 2,
	};
	source_enum source(void);
	/* Viewpoint Object: Object to use as the environment map's viewpoint location */
	Object viewpoint_object(void);
	/* Mapping */
	enum mapping_enum {
		mapping_CUBE = 0,
		mapping_PLANE = 1,
	};
	mapping_enum mapping(void);
	/* Clip Start: Objects nearer than this are not visible to map */
	float clip_start(void);
	/* Clip End: Objects further than this are not visible to map */
	float clip_end(void);
	/* Zoom */
	float zoom(void);
	/* Ignore Layers: Hide objects on these layers when generating the Environment Map */
	Array<int, 20> layers_ignore(void);
	/* Resolution: Pixel resolution of the rendered environment map */
	int resolution(void);
	/* Depth: Number of times a map will be rendered recursively (mirror effects.) */
	int depth(void);
};

/**************** Texture Mapping ****************/

class TexMapping : public Pointer {
public:
	TexMapping(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location */
	Array<float, 3> location(void);
	/* Rotation */
	Array<float, 3> rotation(void);
	/* Scale */
	Array<float, 3> scale(void);
	/* Minimum: Minimum value for clipping */
	Array<float, 3> min(void);
	/* Maximum: Maximum value for clipping */
	Array<float, 3> max(void);
	/* Has Minimum: Whether to use minimum clipping value */
	bool use_min(void);
	/* Has Maximum: Whether to use maximum clipping value */
	bool use_max(void);
};

/**************** Action ****************/

class Action : public ID {
public:
	Action(const PointerRNA& ptr) :
		ID(ptr),
		fcurves(ptr),
		groups(ptr),
		pose_markers(ptr)
		{}

	/* F-Curves: The individual F-Curves that make up the Action */
	COLLECTION_PROPERTY(FCurve, Action, fcurves)
	/* Groups: Convenient groupings of F-Curves */
	COLLECTION_PROPERTY(ActionGroup, Action, groups)
	/* Pose Markers: Markers specific to this Action, for labeling poses */
	COLLECTION_PROPERTY(TimelineMarker, Action, pose_markers)
	/* Frame Range: The final frame range of all fcurves within this action */
	Array<float, 2> frame_range(void);
};

/**************** Action FCurves ****************/

class ActionFCurves : public Pointer {
public:
	ActionFCurves(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Action Groups ****************/

class ActionGroups : public Pointer {
public:
	ActionGroups(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Action Pose Markers ****************/

class ActionPoseMarkers : public Pointer {
public:
	ActionPoseMarkers(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Pose Marker: Active pose marker for this Action */
	TimelineMarker active(void);
	/* Active Pose Marker Index: Index of active pose marker */
	int active_index(void);
};

/**************** Action Group ****************/

class ActionGroup : public Pointer {
public:
	ActionGroup(const PointerRNA& ptr) :
		Pointer(ptr),
		channels(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Channels: F-Curves in this group */
	COLLECTION_PROPERTY(FCurve, ActionGroup, channels)
	/* Select: Action Group is selected */
	bool select(void);
	/* Lock: Action Group is locked */
	bool lock(void);
	/* Expanded: Action Group is expanded */
	bool show_expanded(void);
	/* Custom Color: Index of custom color set */
	int custom_color(void);
};

/**************** DopeSheet ****************/

class DopeSheet : public Pointer {
public:
	DopeSheet(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Source: ID-Block representing source data, currently ID_SCE (for Dopesheet), and ID_SC (for Grease Pencil) */
	ID source(void);
	/* Only Selected: Only include channels relating to selected objects and data */
	bool show_only_selected(void);
	/* Display Hidden: Include channels from objects/bone that aren't visible */
	bool show_hidden(void);
	/* Only Objects in Group: Only include channels from Objects in the specified Group */
	bool show_only_group_objects(void);
	/* Filtering Group: Group that included Object should be a member of */
	Group filter_group(void);
	/* Include Missing NLA: Include Animation Data blocks with no NLA data. (NLA Editor only) */
	bool show_missing_nla(void);
	/* Display Summary: Display an additional 'summary' line. (DopeSheet Editors only) */
	bool show_summary(void);
	/* Collapse Summary: Collapse summary when shown, so all other channels get hidden. (DopeSheet Editors Only) */
	bool show_expanded_summary(void);
	/* Display Transforms: Include visualization of Object-level Animation data (mostly Transforms) */
	bool show_transforms(void);
	/* Display Shapekeys: Include visualization of ShapeKey related Animation data */
	bool show_shapekeys(void);
	/* Display Meshes: Include visualization of Mesh related Animation data */
	bool show_meshes(void);
	/* Display Lattices: Include visualization of Lattice related Animation data */
	bool show_lattices(void);
	/* Display Camera: Include visualization of Camera related Animation data */
	bool show_cameras(void);
	/* Display Material: Include visualization of Material related Animation data */
	bool show_materials(void);
	/* Display Lamp: Include visualization of Lamp related Animation data */
	bool show_lamps(void);
	/* Display Texture: Include visualization of Texture related Animation data */
	bool show_textures(void);
	/* Display Curve: Include visualization of Curve related Animation data */
	bool show_curves(void);
	/* Display World: Include visualization of World related Animation data */
	bool show_worlds(void);
	/* Display Scene: Include visualization of Scene related Animation data */
	bool show_scenes(void);
	/* Display Particle: Include visualization of Particle related Animation data */
	bool show_particles(void);
	/* Display Metaball: Include visualization of Metaball related Animation data */
	bool show_metaballs(void);
	/* Display Armature: Include visualization of Armature related Animation data */
	bool show_armatures(void);
	/* Display Node: Include visualization of Node related Animation data */
	bool show_nodes(void);
};

/**************** Animation Data ****************/

class AnimData : public Pointer {
public:
	AnimData(const PointerRNA& ptr) :
		Pointer(ptr),
		nla_tracks(ptr),
		drivers(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* NLA Tracks: NLA Tracks (i.e. Animation Layers) */
	COLLECTION_PROPERTY(NlaTrack, AnimData, nla_tracks)
	/* Action: Active Action for this datablock */
	Action action(void);
	/* Action Extrapolation: Action to take for gaps past the Active Action's range (when evaluating with NLA) */
	enum action_extrapolation_enum {
		action_extrapolation_NOTHING = 2,
		action_extrapolation_HOLD = 0,
		action_extrapolation_HOLD_FORWARD = 1,
	};
	action_extrapolation_enum action_extrapolation(void);
	/* Action Blending: Method used for combining Active Action's result with result of NLA stack */
	enum action_blend_type_enum {
		action_blend_type_REPLACE = 0,
		action_blend_type_ADD = 1,
		action_blend_type_SUBTRACT = 2,
		action_blend_type_MULITPLY = 3,
	};
	action_blend_type_enum action_blend_type(void);
	/* Action Influence: Amount the Active Action contributes to the result of the NLA stack */
	float action_influence(void);
	/* Drivers: The Drivers/Expressions for this datablock */
	COLLECTION_PROPERTY(FCurve, AnimData, drivers)
	/* NLA Evaluation Enabled: NLA stack is evaluated when evaluating this block */
	bool use_nla(void);
};

/**************** NLA Tracks ****************/

class NlaTracks : public Pointer {
public:
	NlaTracks(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Constraint: Active Object constraint */
	NlaTrack active(void);
};

/**************** Keying Set ****************/

class KeyingSet : public Pointer {
public:
	KeyingSet(const PointerRNA& ptr) :
		Pointer(ptr),
		paths(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Type Info: Callback function defines for built-in Keying Sets */
	KeyingSetInfo type_info(void);
	/* Paths: Keying Set Paths to define settings that get keyframed together */
	COLLECTION_PROPERTY(KeyingSetPath, KeyingSet, paths)
	/* Absolute: Keying Set defines specific paths/settings to be keyframed (i.e. is not reliant on context info) */
	bool is_path_absolute(void);
	/* Options: Keying set options */
	enum bl_options_enum {
		bl_options_INSERTKEY_NEEDED = 1,
		bl_options_INSERTKEY_VISUAL = 2,
		bl_options_INSERTKEY_XYZ_TO_RGB = 32,
	};
	bl_options_enum bl_options(void);
};

/**************** Keying set paths ****************/

class KeyingSetPaths : public Pointer {
public:
	KeyingSetPaths(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Keying Set: Active Keying Set used to insert/delete keyframes */
	KeyingSetPath active(void);
	/* Active Path Index: Current Keying Set index */
	int active_index(void);
};

/**************** Keying Set Path ****************/

class KeyingSetPath : public Pointer {
public:
	KeyingSetPath(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* ID-Block: ID-Block that keyframes for Keying Set should be added to (for Absolute Keying Sets only) */
	ID id(void);
	/* ID Type: Type of ID-block that can be used */
	enum id_type_enum {
		id_type_ACTION = 17217,
		id_type_ARMATURE = 21057,
		id_type_BRUSH = 21058,
		id_type_CAMERA = 16707,
		id_type_CURVE = 21827,
		id_type_FONT = 18006,
		id_type_GREASEPENCIL = 17479,
		id_type_GROUP = 21063,
		id_type_IMAGE = 19785,
		id_type_KEY = 17739,
		id_type_LAMP = 16716,
		id_type_LIBRARY = 18764,
		id_type_LATTICE = 21580,
		id_type_MATERIAL = 16717,
		id_type_META = 16973,
		id_type_MESH = 17741,
		id_type_NODETREE = 21582,
		id_type_OBJECT = 16975,
		id_type_PARTICLE = 16720,
		id_type_SCENE = 17235,
		id_type_SCREEN = 21075,
		id_type_SOUND = 20307,
		id_type_TEXT = 22612,
		id_type_TEXTURE = 17748,
		id_type_WORLD = 20311,
		id_type_WINDOWMANAGER = 19799,
	};
	id_type_enum id_type(void);
	/* Group Name: Name of Action Group to assign setting(s) for this path to */
	std::string group(void);
	/* Grouping Method: Method used to define which Group-name to use */
	enum group_method_enum {
		group_method_NAMED = 0,
		group_method_NONE = 1,
		group_method_KEYINGSET = 2,
	};
	group_method_enum group_method(void);
	/* Data Path: Path to property setting */
	std::string data_path(void);
	/* RNA Array Index: Index to the specific setting if applicable */
	int array_index(void);
	/* Entire Array: When an 'array/vector' type is chosen (Location, Rotation, Color, etc.), entire array is to be used */
	bool use_entire_array(void);
	/* Options: Keying set options */
	enum bl_options_enum {
		bl_options_INSERTKEY_NEEDED = 1,
		bl_options_INSERTKEY_VISUAL = 2,
		bl_options_INSERTKEY_XYZ_TO_RGB = 32,
	};
	bl_options_enum bl_options(void);
};

/**************** Keying Set Info ****************/

class KeyingSetInfo : public Pointer {
public:
	KeyingSetInfo(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* bl_idname */
	std::string bl_idname(void);
	/* Name */
	std::string bl_label(void);
	/* Options: Keying set options */
	enum bl_options_enum {
		bl_options_INSERTKEY_NEEDED = 1,
		bl_options_INSERTKEY_VISUAL = 2,
		bl_options_INSERTKEY_XYZ_TO_RGB = 32,
	};
	bl_options_enum bl_options(void);
};

/**************** Animation Visualisation ****************/

class AnimViz : public Pointer {
public:
	AnimViz(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Onion Skinning: Onion Skinning (ghosting) settings for visualisation */
	AnimVizOnionSkinning onion_skin_frames(void);
	/* Motion Paths: Motion Path settings for visualisation */
	AnimVizMotionPaths motion_path(void);
};

/**************** Onion Skinning Settings ****************/

class AnimVizOnionSkinning : public Pointer {
public:
	AnimVizOnionSkinning(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Type: Method used for determining what ghosts get drawn */
	enum type_enum {
		type_NONE = 0,
		type_CURRENT_FRAME = 1,
		type_RANGE = 2,
		type_KEYS = 3,
	};
	type_enum type(void);
	/* On Selected Bones Only: For Pose-Mode drawing, only draw ghosts for selected bones */
	bool show_only_selected(void);
	/* Frame Step: Number of frames between ghosts shown (not for 'On Keyframes' Onion-skinning method) */
	int frame_step(void);
	/* Start Frame: Starting frame of range of Ghosts to display (not for 'Around Current Frame' Onion-skinning method) */
	int frame_start(void);
	/* End Frame: End frame of range of Ghosts to display (not for 'Around Current Frame' Onion-skinning method) */
	int frame_end(void);
	/* Before Current: Number of frames to show before the current frame (only for 'Around Current Frame' Onion-skinning method) */
	int frame_before(void);
	/* After Current: Number of frames to show after the current frame (only for 'Around Current Frame' Onion-skinning method) */
	int frame_after(void);
};

/**************** Motion Path Settings ****************/

class AnimVizMotionPaths : public Pointer {
public:
	AnimVizMotionPaths(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Paths Type: Type of range to show for Motion Paths */
	enum type_enum {
		type_CURRENT_FRAME = 1,
		type_RANGE = 0,
	};
	type_enum type(void);
	/* Bake Location: When calculating Bone Paths, use Head or Tips */
	enum bake_location_enum {
		bake_location_HEADS = 2,
		bake_location_TAILS = 0,
	};
	bake_location_enum bake_location(void);
	/* Show Frame Numbers: Show frame numbers on Motion Paths */
	bool show_frame_numbers(void);
	/* Highlight Keyframes: Emphasize position of keyframes on Motion Paths */
	bool show_keyframe_highlight(void);
	/* Show Keyframe Numbers: Show frame numbers of Keyframes on Motion Paths */
	bool show_keyframe_numbers(void);
	/* All Action Keyframes: For bone motion paths, search whole Action for keyframes instead of in group with matching name only (is slower) */
	bool show_keyframe_action_all(void);
	/* Frame Step: Number of frames between paths shown (not for 'On Keyframes' Onion-skinning method) */
	int frame_step(void);
	/* Start Frame: Starting frame of range of paths to display/calculate (not for 'Around Current Frame' Onion-skinning method) */
	int frame_start(void);
	/* End Frame: End frame of range of paths to display/calculate (not for 'Around Current Frame' Onion-skinning method) */
	int frame_end(void);
	/* Before Current: Number of frames to show before the current frame (only for 'Around Current Frame' Onion-skinning method) */
	int frame_before(void);
	/* After Current: Number of frames to show after the current frame (only for 'Around Current Frame' Onion-skinning method) */
	int frame_after(void);
};

/**************** Motion Path ****************/

class MotionPath : public Pointer {
public:
	MotionPath(const PointerRNA& ptr) :
		Pointer(ptr),
		points(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Motion Path Points: Cached positions per frame */
	COLLECTION_PROPERTY(MotionPathVert, MotionPath, points)
	/* Start Frame: Starting frame of the stored range */
	int frame_start(void);
	/* End Frame: End frame of the stored range */
	int frame_end(void);
	/* Length: Number of frames cached */
	int length(void);
	/* Use Bone Heads: For PoseBone paths, use the bone head location when calculating this path */
	bool use_bone_head(void);
	/* Edit Path: Path is being edited */
	bool is_modified(void);
};

/**************** Motion Path Cache Point ****************/

class MotionPathVert : public Pointer {
public:
	MotionPathVert(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Coordinates */
	Array<float, 3> co(void);
	/* Select: Path point is selected for editing */
	bool select(void);
};

/**************** Actuator ****************/

class Actuator : public Pointer {
public:
	Actuator(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_ACTION = 15,
		type_ARMATURE = 23,
		type_CAMERA = 3,
		type_CONSTRAINT = 9,
		type_EDIT_OBJECT = 10,
		type_FCURVE = 1,
		type_FILTER_2D = 19,
		type_GAME = 17,
		type_MESSAGE = 14,
		type_OBJECT = 0,
		type_PARENT = 20,
		type_PROPERTY = 6,
		type_RANDOM = 13,
		type_SCENE = 11,
		type_SHAPE_ACTION = 21,
		type_SOUND = 5,
		type_STATE = 22,
		type_VISIBILITY = 18,
	};
	type_enum type(void);
	/* Pinned: Display when not linked to a visible states controller */
	bool pin(void);
	/* Expanded: Set actuator expanded in the user interface */
	bool show_expanded(void);
};

/**************** Action Actuator ****************/

class ActionActuator : public Actuator {
public:
	ActionActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Action Type: Action playback type */
	enum play_mode_enum {
		play_mode_PLAY = 0,
		play_mode_PINGPONG = 1,
		play_mode_FLIPPER = 2,
		play_mode_LOOPSTOP = 3,
		play_mode_LOOPEND = 4,
		play_mode_PROPERTY = 6,
	};
	play_mode_enum play_mode(void);
	/* Action */
	Action action(void);
	/* Continue: Restore last frame when switching on/off, otherwise play from the start each time */
	bool use_continue_last_frame(void);
	/* Property: Use this property to define the Action position */
	std::string property(void);
	/* Start Frame */
	float frame_start(void);
	/* End Frame */
	float frame_end(void);
	/* Blendin: Number of frames of motion blending */
	int frame_blend_in(void);
	/* Priority: Execution priority - lower numbers will override actions with higher numbers. With 2 or more actions at once, the overriding channels must be lower in the stack */
	int priority(void);
	/* Frame Property: Assign the action's current frame number to this property */
	std::string frame_property(void);
};

/**************** Motion Actuator ****************/

class ObjectActuator : public Actuator {
public:
	ObjectActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Motion Type: Specify the motion system */
	enum mode_enum {
		mode_OBJECT_NORMAL = 0,
		mode_OBJECT_SERVO = 1,
	};
	mode_enum mode(void);
	/* Reference Object: Reference object for velocity calculation, leave empty for world reference */
	Object reference_object(void);
	/* Damping Frames: Number of frames to reach the target velocity */
	int damping(void);
	/* Proportional Coefficient: Typical value is 60x integral coefficient */
	float proportional_coefficient(void);
	/* Integral Coefficient: Low value (0.01) for slow response, high value (0.5) for fast response */
	float integral_coefficient(void);
	/* Derivate Coefficient: Not required, high values can cause instability */
	float derivate_coefficient(void);
	/* Max: Set the upper limit for force */
	float force_max_x(void);
	/* Min: Set the lower limit for force */
	float force_min_x(void);
	/* Max: Set the upper limit for force */
	float force_max_y(void);
	/* Min: Set the lower limit for force */
	float force_min_y(void);
	/* Max: Set the upper limit for force */
	float force_max_z(void);
	/* Min: Set the lower limit for force */
	float force_min_z(void);
	/* Loc: Sets the location */
	Array<float, 3> offset_location(void);
	/* Rot: Sets the rotation */
	Array<float, 3> offset_rotation(void);
	/* Force: Sets the force */
	Array<float, 3> force(void);
	/* Torque: Sets the torque */
	Array<float, 3> torque(void);
	/* Linear Velocity: Sets the linear velocity (in Servo mode it sets the target relative linear velocity, it will be achieved by automatic application of force. Null velocity is a valid target) */
	Array<float, 3> linear_velocity(void);
	/* Angular Velocity: Sets the angular velocity */
	Array<float, 3> angular_velocity(void);
	/* L: Location is defined in local coordinates */
	bool use_local_location(void);
	/* L: Rotation is defined in local coordinates */
	bool use_local_rotation(void);
	/* L: Force is defined in local coordinates */
	bool use_local_force(void);
	/* L: Torque is defined in local coordinates */
	bool use_local_torque(void);
	/* L: Velocity is defined in local coordinates */
	bool use_local_linear_velocity(void);
	/* L: Angular velocity is defined in local coordinates */
	bool use_local_angular_velocity(void);
	/* Add: Toggles between ADD and SET linV */
	bool use_add_linear_velocity(void);
	/* X: Set limit to force along the X axis */
	bool use_servo_limit_x(void);
	/* Y: Set limit to force along the Y axis */
	bool use_servo_limit_y(void);
	/* Z: Set limit to force along the Z axis */
	bool use_servo_limit_z(void);
};

/**************** F-Curve Actuator ****************/

class FCurveActuator : public Actuator {
public:
	FCurveActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* F-Curve Type: Specify the way you want to play the animation */
	enum play_type_enum {
		play_type_PLAY = 0,
		play_type_PINGPONG = 1,
		play_type_FLIPPER = 2,
		play_type_STOP = 3,
		play_type_END = 4,
		play_type_PROP = 6,
	};
	play_type_enum play_type(void);
	/* Start Frame */
	float frame_start(void);
	/* End Frame */
	float frame_end(void);
	/* Property: Use this property to define the F-Curve position */
	std::string property(void);
	/* Frame Property: Assign the action's current frame number to this property */
	std::string frame_property(void);
	/* Add: F-Curve is added to the current loc/rot/scale in global or local coordinate according to Local flag */
	bool use_additive(void);
	/* Force: Apply F-Curve as a global or local force depending on the local option (dynamic objects only) */
	bool use_force(void);
	/* L: Let the F-Curve act in local coordinates, used in Force and Add mode */
	bool use_local(void);
	/* Child: Update F-Curve on all children Objects as well */
	bool apply_to_children(void);
};

/**************** Camera Actuator ****************/

class CameraActuator : public Actuator {
public:
	CameraActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Camera Object: Look at this Object */
	Object object(void);
	/* Height */
	float height(void);
	/* Min */
	float min(void);
	/* Max */
	float max(void);
	/* Axis: Specify the axis the Camera will try to get behind */
	enum axis_enum {
		axis_X = 120,
		axis_Y = 121,
	};
	axis_enum axis(void);
};

/**************** Sound ****************/

class SoundActuator : public Actuator {
public:
	SoundActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* sound */
	Sound sound(void);
	/* Play Mode */
	enum mode_enum {
		mode_PLAYSTOP = 0,
		mode_PLAYEND = 1,
		mode_LOOPSTOP = 2,
		mode_LOOPEND = 3,
		mode_LOOPBIDIRECTIONAL = 4,
		mode_LOOPBIDIRECTIONALSTOP = 5,
	};
	mode_enum mode(void);
	/* Volume: Sets the initial volume of the sound */
	float volume(void);
	/* Pitch: Sets the pitch of the sound */
	float pitch(void);
	/* Minimum Gain: The minimum gain of the sound, no matter how far it is away */
	float gain_3d_min(void);
	/* Maximum Gain: The maximum gain of the sound, no matter how near it is */
	float gain_3d_max(void);
	/* Reference Distance: The distance where the sound has a gain of 1.0 */
	float distance_3d_reference(void);
	/* Maximum Distance: The maximum distance at which you can hear the sound */
	float distance_3d_max(void);
	/* Rolloff: The influence factor on volume depending on distance */
	float rolloff_factor_3d(void);
	/* Cone Outer Gain: The gain outside the outer cone. The gain in the outer cone will be interpolated between this value and the normal gain in the inner cone */
	float cone_outer_gain_3d(void);
	/* Cone Outer Angle: The angle of the outer cone */
	float cone_outer_angle_3d(void);
	/* Cone Inner Angle: The angle of the inner cone */
	float cone_inner_angle_3d(void);
	/* 3D Sound: Enable/Disable 3D Sound */
	bool use_sound_3d(void);
};

/**************** Property Actuator ****************/

class PropertyActuator : public Actuator {
public:
	PropertyActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Mode */
	enum mode_enum {
		mode_ASSIGN = 0,
		mode_ADD = 1,
		mode_COPY = 2,
		mode_TOGGLE = 3,
	};
	mode_enum mode(void);
	/* Property: The name of the property */
	std::string property(void);
	/* Value: The name of the property or the value to use (use "" around strings) */
	std::string value(void);
	/* Object: Copy from this Object */
	Object object(void);
	/* Property Name: Copy this property */
	std::string object_property(void);
};

/**************** Constraint Actuator ****************/

class ConstraintActuator : public Actuator {
public:
	ConstraintActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Constraints Mode: The type of the constraint */
	enum mode_enum {
		mode_LOC = 0,
		mode_DIST = 1,
		mode_ORI = 2,
		mode_FH = 3,
	};
	mode_enum mode(void);
	/* Limit */
	enum limit_enum {
		limit_NONE = 0,
		limit_LOCX = 1,
		limit_LOCY = 2,
		limit_LOCZ = 4,
	};
	limit_enum limit(void);
	/* Direction: Set the direction of the ray */
	enum direction_enum {
		direction_NONE = 0,
		direction_DIRPX = 1,
		direction_DIRPY = 2,
		direction_DIRPZ = 4,
		direction_DIRNX = 8,
		direction_DIRNY = 16,
		direction_DIRNZ = 32,
	};
	direction_enum direction(void);
	/* Direction: Select the axis to be aligned along the reference direction */
	enum direction_axis_enum {
		direction_axis_NONE = 0,
		direction_axis_DIRPX = 1,
		direction_axis_DIRPY = 2,
		direction_axis_DIRPZ = 4,
		direction_axis_DIRNX = 8,
		direction_axis_DIRNY = 16,
		direction_axis_DIRNZ = 32,
	};
	direction_axis_enum direction_axis(void);
	/* Min */
	float limit_min(void);
	/* Max */
	float limit_max(void);
	/* Damping: Damping factor: time constant (in frame) of low pass filter */
	int damping(void);
	/* Range: Set the maximum length of ray */
	float range(void);
	/* Distance: Set the maximum length of ray */
	float distance(void);
	/* Material: Ray detects only Objects with this material */
	std::string material(void);
	/* Property: Ray detect only Objects with this property */
	std::string property(void);
	/* Time: Maximum activation time in frame, 0 for unlimited */
	int time(void);
	/* RotDamp: Use a different damping for orientation */
	int damping_rotation(void);
	/* Direction: Select the axis to be aligned along the reference direction */
	enum direction_axis_pos_enum {
		direction_axis_pos_NONE = 0,
		direction_axis_pos_DIRPX = 1,
		direction_axis_pos_DIRPY = 2,
		direction_axis_pos_DIRPZ = 4,
	};
	direction_axis_pos_enum direction_axis_pos(void);
	/* Reference Direction: Reference Direction */
	Array<float, 3> rotation_max(void);
	/* Min Angle: Minimum angle (in degree) to maintain with target direction. No correction is done if angle with target direction is between min and max */
	float angle_min(void);
	/* Max Angle: Maximum angle (in degree) allowed with target direction. No correction is done if angle with target direction is between min and max */
	float angle_max(void);
	/* Distance: Height of the force field area */
	float fh_height(void);
	/* Force: Spring force within the force field area */
	float fh_force(void);
	/* Damping: Damping factor of the force field spring */
	float fh_damping(void);
	/* Force Distance: Force distance of object to point of impact of ray */
	bool use_force_distance(void);
	/* L: Set ray along object's axis or global axis */
	bool use_local(void);
	/* N: Set object axis along (local axis) or parallel (global axis) to the normal at hit position */
	bool use_normal(void);
	/* PER: Persistent actuator: stays active even if ray does not reach target */
	bool use_persistent(void);
	/* M/P: Detect material instead of property */
	bool use_material_detect(void);
	/* Rot Fh: Keep object axis parallel to normal */
	bool use_fh_paralel_axis(void);
	/* N: Add a horizontal spring force on slopes */
	bool use_fh_normal(void);
};

/**************** Edit Object Actuator ****************/

class EditObjectActuator : public Actuator {
public:
	EditObjectActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Edit Object: The mode of the actuator */
	enum mode_enum {
		mode_ADDOBJECT = 0,
		mode_ENDOBJECT = 1,
		mode_REPLACEMESH = 2,
		mode_TRACKTO = 3,
		mode_DYNAMICS = 4,
	};
	mode_enum mode(void);
	/* Dynamic Operation */
	enum dynamic_operation_enum {
		dynamic_operation_RESTOREDYN = 0,
		dynamic_operation_SUSPENDDYN = 1,
		dynamic_operation_ENABLERIGIDBODY = 2,
		dynamic_operation_DISABLERIGIDBODY = 3,
		dynamic_operation_SETMASS = 4,
	};
	dynamic_operation_enum dynamic_operation(void);
	/* Object: Add this Object and all its children (cant be on an visible layer) */
	Object object(void);
	/* Object: Track to this Object */
	Object track_object(void);
	/* Mesh: Replace the existing, when left blank 'Phys' will remake the existing physics mesh */
	Mesh mesh(void);
	/* Time: Duration the new Object lives or the track takes */
	int time(void);
	/* Mass: The mass of the object */
	float mass(void);
	/* Linear Velocity: Velocity upon creation */
	Array<float, 3> linear_velocity(void);
	/* Angular Velocity: Angular velocity upon creation */
	Array<float, 3> angular_velocity(void);
	/* L: Apply the transformation locally */
	bool use_local_linear_velocity(void);
	/* L: Apply the rotation locally */
	bool use_local_angular_velocity(void);
	/* Gfx: Replace the display mesh */
	bool use_replace_display_mesh(void);
	/* Phys: Replace the physics mesh (triangle bounds only - compound shapes not supported) */
	bool use_replace_physics_mesh(void);
	/* 3D: Enable 3D tracking */
	bool use_3d_tracking(void);
};

/**************** Scene Actuator ****************/

class SceneActuator : public Actuator {
public:
	SceneActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Scene */
	enum mode_enum {
		mode_RESTART = 0,
		mode_SET = 1,
		mode_CAMERA = 2,
		mode_ADDFRONT = 3,
		mode_ADDBACK = 4,
		mode_REMOVE = 5,
		mode_SUSPEND = 6,
		mode_RESUME = 7,
	};
	mode_enum mode(void);
	/* Camera Object: Set this Camera. Leave empty to refer to self object */
	Object camera(void);
	/* Scene: Set the Scene to be added/removed/paused/resumed */
	Scene scene(void);
};

/**************** Random Actuator ****************/

class RandomActuator : public Actuator {
public:
	RandomActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Seed: Initial seed of the random generator. Use Python for more freedom (choose 0 for not random) */
	int seed(void);
	/* Property: Assign the random value to this property */
	std::string property(void);
	/* Distribution: Choose the type of distribution */
	enum distribution_enum {
		distribution_BOOL_CONSTANT = 0,
		distribution_BOOL_UNIFORM = 1,
		distribution_BOOL_BERNOUILLI = 2,
		distribution_INT_CONSTANT = 3,
		distribution_INT_UNIFORM = 4,
		distribution_INT_POISSON = 5,
		distribution_FLOAT_CONSTANT = 6,
		distribution_FLOAT_UNIFORM = 7,
		distribution_FLOAT_NORMAL = 8,
		distribution_FLOAT_NEGATIVE_EXPONENTIAL = 9,
	};
	distribution_enum distribution(void);
	/* Always True: Always false or always true */
	bool use_always_true(void);
	/* Chance: Pick a number between 0 and 1. Success if you stay below this value */
	float chance(void);
	/* Value: Always return this number */
	int int_value(void);
	/* Min: Choose a number from a range. Lower boundary of the range */
	int int_min(void);
	/* Max: Choose a number from a range. Upper boundary of the range */
	int int_max(void);
	/* Mean: Expected mean value of the distribution */
	float int_mean(void);
	/* Value: Always return this number */
	float float_value(void);
	/* Min: Choose a number from a range. Lower boundary of the range */
	float float_min(void);
	/* Max: Choose a number from a range. Upper boundary of the range */
	float float_max(void);
	/* Mean: A normal distribution. Mean of the distribution */
	float float_mean(void);
	/* SD: A normal distribution. Standard deviation of the distribution */
	float standard_derivation(void);
	/* Half-Life Time: Negative exponential dropoff */
	float half_life_time(void);
};

/**************** Message Actuator ****************/

class MessageActuator : public Actuator {
public:
	MessageActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* To: Optional send message to objects with this name only, or empty to broadcast */
	std::string to_property(void);
	/* Subject: Optional message subject. This is what can be filtered on */
	std::string subject(void);
	/* Body: Toggle message type: either Text or a PropertyName */
	enum body_type_enum {
		body_type_TEXT = 0,
		body_type_PROPERTY = 1,
	};
	body_type_enum body_type(void);
	/* Body: Optional message body Text */
	std::string body_message(void);
	/* Prop Name: The message body will be set by the Property Value */
	std::string body_property(void);
};

/**************** Game Actuator ****************/

class GameActuator : public Actuator {
public:
	GameActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Game */
	enum mode_enum {
		mode_START = 0,
		mode_RESTART = 2,
		mode_QUIT = 3,
		mode_SAVECFG = 4,
		mode_LOADCFG = 5,
	};
	mode_enum mode(void);
	/* File: Load this blend file, use the "//" prefix for a path relative to the current blend file */
	std::string filename(void);
};

/**************** Visibility Actuator ****************/

class VisibilityActuator : public Actuator {
public:
	VisibilityActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Visible: Set the objects visible. Initialized from the object render restriction toggle in physics button */
	bool use_visible(void);
	/* Occlusion: Set the object to occlude objects behind it. Initialized from the object type in physics button */
	bool use_occlusion(void);
	/* Children: Set all the children of this object to the same visibility/occlusion recursively */
	bool apply_to_children(void);
};

/**************** Filter 2D Actuator ****************/

class Filter2DActuator : public Actuator {
public:
	Filter2DActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Filter 2D Type */
	enum mode_enum {
		mode_ENABLE = -2,
		mode_DISABLE = -1,
		mode_REMOVE = 0,
		mode_MOTIONBLUR = 1,
		mode_BLUR = 2,
		mode_SHARPEN = 3,
		mode_DILATION = 4,
		mode_EROSION = 5,
		mode_LAPLACIAN = 6,
		mode_SOBEL = 7,
		mode_PREWITT = 8,
		mode_GRAYSCALE = 9,
		mode_SEPIA = 10,
		mode_INVERT = 11,
		mode_CUSTOMFILTER = 12,
	};
	mode_enum mode(void);
	/* Script */
	Text glsl_shader(void);
	/* Pass Number: Set filter order */
	int filter_pass(void);
	/* Value: Set motion blur factor */
	float motion_blur_factor(void);
	/* Enable: Enable/Disable Motion Blur */
	bool use_motion_blur(void);
};

/**************** Parent Actuator ****************/

class ParentActuator : public Actuator {
public:
	ParentActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Scene */
	enum mode_enum {
		mode_SETPARENT = 0,
		mode_REMOVEPARENT = 1,
	};
	mode_enum mode(void);
	/* Parent Object: Set this object as parent */
	Object object(void);
	/* Compound: Add this object shape to the parent shape (only if the parent shape is already compound) */
	bool use_compound(void);
	/* Ghost: Make this object ghost while parented */
	bool use_ghost(void);
};

/**************** Shape Action Actuator ****************/

class ShapeActionActuator : public Actuator {
public:
	ShapeActionActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Action Type: Action playback type */
	enum mode_enum {
		mode_PLAY = 0,
		mode_PINGPONG = 1,
		mode_FLIPPER = 2,
		mode_LOOPSTOP = 3,
		mode_LOOPEND = 4,
		mode_PROPERTY = 6,
	};
	mode_enum mode(void);
	/* Action */
	Action action(void);
	/* Continue: Restore last frame when switching on/off, otherwise play from the start each time */
	bool use_continue_last_frame(void);
	/* Property: Use this property to define the Action position */
	std::string property(void);
	/* Start Frame */
	float frame_start(void);
	/* End Frame */
	float frame_end(void);
	/* Blendin: Number of frames of motion blending */
	int frame_blend_in(void);
	/* Priority: Execution priority - lower numbers will override actions with higher numbers. With 2 or more actions at once, the overriding channels must be lower in the stack */
	int priority(void);
	/* Frame Property: Assign the action's current frame number to this property */
	std::string frame_property(void);
};

/**************** State Actuator ****************/

class StateActuator : public Actuator {
public:
	StateActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Operation: Select the bit operation on object state mask */
	enum operation_enum {
		operation_SET = 0,
		operation_ADD = 1,
		operation_REMOVE = 2,
		operation_CHANGE = 3,
	};
	operation_enum operation(void);
	/* State */
	Array<int, 30> states(void);
};

/**************** Armature Actuator ****************/

class ArmatureActuator : public Actuator {
public:
	ArmatureActuator(const PointerRNA& ptr) :
		Actuator(ptr)
		{}

	/* Constraint Type */
	enum mode_enum {
		mode_RUN = 0,
		mode_ENABLE = 1,
		mode_DISABLE = 2,
		mode_SETTARGET = 3,
		mode_SETWEIGHT = 4,
	};
	mode_enum mode(void);
	/* Bone: Bone on which the constraint is defined */
	std::string bone(void);
	/* Constraint: Name of the constraint you want to control */
	std::string constraint(void);
	/* Target: Set this object as the target of the constraint */
	Object target(void);
	/* Secondary Target: Set this object as the secondary target of the constraint (only IK polar target at the moment) */
	Object secondary_target(void);
	/* Weight: Set weight of this constraint */
	float weight(void);
};

/**************** Armature ****************/

class Armature : public ID {
public:
	Armature(const PointerRNA& ptr) :
		ID(ptr),
		bones(ptr),
		edit_bones(ptr)
		{}

	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Bones */
	COLLECTION_PROPERTY(Bone, Armature, bones)
	/* Edit Bones */
	COLLECTION_PROPERTY(EditBone, Armature, edit_bones)
	/* Pose Position: Show armature in binding pose or final posed state */
	enum pose_position_enum {
		pose_position_POSE = 0,
		pose_position_REST = 1,
	};
	pose_position_enum pose_position(void);
	/* Draw Type */
	enum draw_type_enum {
		draw_type_OCTAHEDRAL = 0,
		draw_type_STICK = 1,
		draw_type_BBONE = 2,
		draw_type_ENVELOPE = 3,
	};
	draw_type_enum draw_type(void);
	/* Ghost Type: Method of Onion-skinning for active Action */
	enum ghost_type_enum {
		ghost_type_CURRENT_FRAME = 0,
		ghost_type_RANGE = 1,
		ghost_type_KEYS = 2,
	};
	ghost_type_enum ghost_type(void);
	/* Visible Layers: Armature layer visibility */
	Array<int, 32> layers(void);
	/* Layer Proxy Protection: Protected layers in Proxy Instances are restored to Proxy settings on file reload and undo */
	Array<int, 32> layers_protected(void);
	/* Draw Axes: Draw bone axes */
	bool show_axes(void);
	/* Draw Names: Draw bone names */
	bool show_names(void);
	/* Delay Deform: Don't deform children when manipulating bones in Pose Mode */
	bool use_deform_delay(void);
	/* X-Axis Mirror: Apply changes to matching bone on opposite side of X-Axis */
	bool use_mirror_x(void);
	/* Auto IK: Add temporaral IK constraints while grabbing bones in Pose Mode */
	bool use_auto_ik(void);
	/* Draw Custom Bone Shapes: Draw bones with their custom shapes */
	bool show_bone_custom_shapes(void);
	/* Draw Bone Group Colors: Draw bone group colors */
	bool show_group_colors(void);
	/* Draw Ghosts on Selected Bones Only */
	bool show_only_ghost_selected(void);
	/* Deform Vertex Groups: Enable Vertex Groups when defining deform */
	bool use_deform_vertex_groups(void);
	/* Deform Envelopes: Enable Bone Envelopes when defining deform */
	bool use_deform_envelopes(void);
	/* Use Dual Quaternion Deformation: Enable deform rotation with Quaternions */
	bool use_deform_preserve_volume(void);
	/* Ghosting Step: Number of frame steps on either side of current frame to show as ghosts (only for 'Around Current Frame' Onion-skinning method) */
	int ghost_step(void);
	/* Ghosting Frame Step: Frame step for Ghosts (not for 'On Keyframes' Onion-skinning method) */
	int ghost_size(void);
	/* Ghosting Start Frame: Starting frame of range of Ghosts to display (not for 'Around Current Frame' Onion-skinning method) */
	int ghost_frame_start(void);
	/* Ghosting End Frame: End frame of range of Ghosts to display (not for 'Around Current Frame' Onion-skinning method) */
	int ghost_frame_end(void);
};

/**************** Armature Bones ****************/

class ArmatureBones : public Pointer {
public:
	ArmatureBones(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Bone: Armatures active bone */
	Bone active(void);
};

/**************** Armature EditBones ****************/

class ArmatureEditBones : public Pointer {
public:
	ArmatureEditBones(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active EditBone: Armatures active edit bone */
	EditBone active(void);
};

/**************** Bone ****************/

class Bone : public Pointer {
public:
	Bone(const PointerRNA& ptr) :
		Pointer(ptr),
		children(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Parent: Parent bone (in same Armature) */
	Bone parent(void);
	/* Children: Bones which are children of this bone */
	COLLECTION_PROPERTY(Bone, Bone, children)
	/* Name */
	std::string name(void);
	/* Layers: Layers bone exists in */
	Array<int, 32> layers(void);
	/* Connected: When bone has a parent, bone's head is struck to the parent's tail */
	bool use_connect(void);
	/* Inherit Rotation: Bone inherits rotation or scale from parent bone */
	bool use_inherit_rotation(void);
	/* Multiply Vertex Group with Envelope: When deforming bone, multiply effects of Vertex Group weights with Envelope influence */
	bool use_envelope_multiply(void);
	/* Deform: Bone does not deform any geometry */
	bool use_deform(void);
	/* Inherit Scale: Bone inherits scaling from parent bone */
	bool use_inherit_scale(void);
	/* Local Location: Bone location is set in local space */
	bool use_local_location(void);
	/* Draw Wire: Bone is always drawn as Wireframe regardless of viewport draw mode. Useful for non-obstructive custom bone shapes */
	bool show_wire(void);
	/* Cyclic Offset: When bone doesn't have a parent, it receives cyclic offset effects */
	bool use_cyclic_offset(void);
	/* Selectable: Bone is able to be selected */
	bool hide_select(void);
	/* Envelope Deform Distance: Bone deformation distance (for Envelope deform only) */
	float envelope_distance(void);
	/* Envelope Deform Weight: Bone deformation weight (for Envelope deform only) */
	float envelope_weight(void);
	/* Envelope Head Radius: Radius of head of bone (for Envelope deform only) */
	float head_radius(void);
	/* Envelope Tail Radius: Radius of tail of bone (for Envelope deform only) */
	float tail_radius(void);
	/* B-Bone Segments: Number of subdivisions of bone (for B-Bones only) */
	int bbone_segments(void);
	/* B-Bone Ease In: Length of first Bezier Handle (for B-Bones only) */
	float bbone_in(void);
	/* B-Bone Ease Out: Length of second Bezier Handle (for B-Bones only) */
	float bbone_out(void);
	/* B-Bone Display X Width: B-Bone X size */
	float bbone_x(void);
	/* B-Bone Display Z Width: B-Bone Z size */
	float bbone_z(void);
	/* Hide: Bone is not visible when it is not in Edit Mode (i.e. in Object or Pose Modes) */
	bool hide(void);
	/* Select */
	bool select(void);
	/* Select Head */
	bool select_head(void);
	/* Select Tail */
	bool select_tail(void);
	/* Bone Matrix: 3x3 bone matrix */
	Array<float, 9> matrix(void);
	/* Bone Armature-Relative Matrix: 4x4 bone matrix relative to armature */
	Array<float, 16> matrix_local(void);
	/* Tail: Location of tail end of the bone */
	Array<float, 3> tail(void);
	/* Armature-Relative Tail: Location of tail end of the bone relative to armature */
	Array<float, 3> tail_local(void);
	/* Head: Location of head end of the bone relative to its parent */
	Array<float, 3> head(void);
	/* Armature-Relative Head: Location of head end of the bone relative to armature */
	Array<float, 3> head_local(void);
};

/**************** Edit Bone ****************/

class EditBone : public Pointer {
public:
	EditBone(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Parent: Parent edit bone (in same Armature) */
	EditBone parent(void);
	/* Roll: Bone rotation around head-tail axis */
	float roll(void);
	/* Head: Location of head end of the bone */
	Array<float, 3> head(void);
	/* Tail: Location of tail end of the bone */
	Array<float, 3> tail(void);
	/* Name */
	std::string name(void);
	/* Layers: Layers bone exists in */
	Array<int, 32> layers(void);
	/* Connected: When bone has a parent, bone's head is struck to the parent's tail */
	bool use_connect(void);
	/* Inherit Rotation: Bone inherits rotation or scale from parent bone */
	bool use_inherit_rotation(void);
	/* Multiply Vertex Group with Envelope: When deforming bone, multiply effects of Vertex Group weights with Envelope influence */
	bool use_envelope_multiply(void);
	/* Deform: Bone does not deform any geometry */
	bool use_deform(void);
	/* Inherit Scale: Bone inherits scaling from parent bone */
	bool use_inherit_scale(void);
	/* Local Location: Bone location is set in local space */
	bool use_local_location(void);
	/* Draw Wire: Bone is always drawn as Wireframe regardless of viewport draw mode. Useful for non-obstructive custom bone shapes */
	bool show_wire(void);
	/* Cyclic Offset: When bone doesn't have a parent, it receives cyclic offset effects */
	bool use_cyclic_offset(void);
	/* Selectable: Bone is able to be selected */
	bool hide_select(void);
	/* Envelope Deform Distance: Bone deformation distance (for Envelope deform only) */
	float envelope_distance(void);
	/* Envelope Deform Weight: Bone deformation weight (for Envelope deform only) */
	float envelope_weight(void);
	/* Envelope Head Radius: Radius of head of bone (for Envelope deform only) */
	float head_radius(void);
	/* Envelope Tail Radius: Radius of tail of bone (for Envelope deform only) */
	float tail_radius(void);
	/* B-Bone Segments: Number of subdivisions of bone (for B-Bones only) */
	int bbone_segments(void);
	/* B-Bone Ease In: Length of first Bezier Handle (for B-Bones only) */
	float bbone_in(void);
	/* B-Bone Ease Out: Length of second Bezier Handle (for B-Bones only) */
	float bbone_out(void);
	/* B-Bone Display X Width: B-Bone X size */
	float bbone_x(void);
	/* B-Bone Display Z Width: B-Bone Z size */
	float bbone_z(void);
	/* Hide: Bone is not visible when in Edit Mode */
	bool hide(void);
	/* Lock: Bone is not able to be transformed when in Edit Mode */
	bool lock(void);
	/* Select */
	bool select(void);
	/* Head Select */
	bool select_head(void);
	/* Tail Select */
	bool select_tail(void);
	/* Editbone Matrix: Read-only matrix calculated from the roll (armature space) */
	Array<float, 16> matrix(void);
};

/**************** Boid Rule ****************/

class BoidRule : public Pointer {
public:
	BoidRule(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Boid rule name */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_GOAL = 1,
		type_AVOID = 2,
		type_AVOID_COLLISION = 3,
		type_SEPARATE = 4,
		type_FLOCK = 5,
		type_FOLLOW_LEADER = 6,
		type_AVERAGE_SPEED = 7,
		type_FIGHT = 8,
	};
	type_enum type(void);
	/* In Air: Use rule when boid is flying */
	bool use_in_air(void);
	/* On Land: Use rule when boid is on land */
	bool use_on_land(void);
};

/**************** Goal ****************/

class BoidRuleGoal : public BoidRule {
public:
	BoidRuleGoal(const PointerRNA& ptr) :
		BoidRule(ptr)
		{}

	/* Object: Goal object */
	Object object(void);
	/* Predict: Predict target movement */
	bool use_predict(void);
};

/**************** Avoid ****************/

class BoidRuleAvoid : public BoidRule {
public:
	BoidRuleAvoid(const PointerRNA& ptr) :
		BoidRule(ptr)
		{}

	/* Object: Object to avoid */
	Object object(void);
	/* Predict: Predict target movement */
	bool use_predict(void);
	/* Fear factor: Avoid object if danger from it is above this threshold */
	float fear_factor(void);
};

/**************** Avoid Collision ****************/

class BoidRuleAvoidCollision : public BoidRule {
public:
	BoidRuleAvoidCollision(const PointerRNA& ptr) :
		BoidRule(ptr)
		{}

	/* Boids: Avoid collision with other boids */
	bool use_avoid(void);
	/* Deflectors: Avoid collision with deflector objects */
	bool use_avoid_collision(void);
	/* Look ahead: Time to look ahead in seconds */
	float look_ahead(void);
};

/**************** Follow Leader ****************/

class BoidRuleFollowLeader : public BoidRule {
public:
	BoidRuleFollowLeader(const PointerRNA& ptr) :
		BoidRule(ptr)
		{}

	/* Object: Follow this object instead of a boid */
	Object object(void);
	/* Distance: Distance behind leader to follow */
	float distance(void);
	/* Queue Size: How many boids in a line */
	int queue_count(void);
	/* Line: Follow leader in a line */
	bool use_line(void);
};

/**************** Average Speed ****************/

class BoidRuleAverageSpeed : public BoidRule {
public:
	BoidRuleAverageSpeed(const PointerRNA& ptr) :
		BoidRule(ptr)
		{}

	/* Wander: How fast velocity's direction is randomized */
	float wander(void);
	/* Level: How much velocity's z-component is kept constant */
	float level(void);
	/* Speed: Percentage of maximum speed */
	float speed(void);
};

/**************** Fight ****************/

class BoidRuleFight : public BoidRule {
public:
	BoidRuleFight(const PointerRNA& ptr) :
		BoidRule(ptr)
		{}

	/* Fight Distance: Attack boids at max this distance */
	float distance(void);
	/* Flee Distance: Flee to this distance */
	float flee_distance(void);
};

/**************** Boid State ****************/

class BoidState : public Pointer {
public:
	BoidState(const PointerRNA& ptr) :
		Pointer(ptr),
		rules(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Boid state name */
	std::string name(void);
	/* Rule Evaluation: How the rules in the list are evaluated */
	enum ruleset_type_enum {
		ruleset_type_FUZZY = 0,
		ruleset_type_RANDOM = 1,
		ruleset_type_AVERAGE = 2,
	};
	ruleset_type_enum ruleset_type(void);
	/* Boid Rules */
	COLLECTION_PROPERTY(BoidRule, BoidState, rules)
	/* Active Boid Rule */
	BoidRule active_boid_rule(void);
	/* Active Boid Rule Index */
	int active_boid_rule_index(void);
	/* Rule Fuzziness */
	float rule_fuzzy(void);
	/* Volume */
	float volume(void);
	/* Falloff */
	float falloff(void);
};

/**************** Boid Settings ****************/

class BoidSettings : public Pointer {
public:
	BoidSettings(const PointerRNA& ptr) :
		Pointer(ptr),
		states(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Landing Smoothness: How smoothly the boids land */
	float land_smooth(void);
	/* Banking: Amount of rotation around velocity vector on turns */
	float bank(void);
	/* Pitch: Amount of rotation around side vector */
	float pitch(void);
	/* Height: Boid height relative to particle size */
	float height(void);
	/* Boid States */
	COLLECTION_PROPERTY(BoidState, BoidSettings, states)
	/* Active Boid Rule */
	BoidRule active_boid_state(void);
	/* Active Boid State Index */
	int active_boid_state_index(void);
	/* Health: Initial boid health when born */
	float health(void);
	/* Strength: Maximum caused damage on attack per second */
	float strength(void);
	/* Aggression: Boid will fight this times stronger enemy */
	float aggression(void);
	/* Accuracy: Accuracy of attack */
	float accuracy(void);
	/* Range: The maximum distance from which a boid can attack */
	float range(void);
	/* Min Air Speed: Minimum speed in air (relative to maximum speed) */
	float air_speed_min(void);
	/* Max Air Speed: Maximum speed in air */
	float air_speed_max(void);
	/* Max Air Acceleration: Maximum acceleration in air (relative to maximum speed) */
	float air_acc_max(void);
	/* Max Air Angular Velocity: Maximum angular velocity in air (relative to 180 degrees) */
	float air_ave_max(void);
	/* Air Personal Space: Radius of boids personal space in air (% of particle size) */
	float air_personal_space(void);
	/* Jump Speed: Maximum speed for jumping */
	float land_jump_speed(void);
	/* Max Land Speed: Maximum speed on land */
	float land_speed_max(void);
	/* Max Land Acceleration: Maximum acceleration on land (relative to maximum speed) */
	float land_acc_max(void);
	/* Max Land Angular Velocity: Maximum angular velocity on land (relative to 180 degrees) */
	float land_ave_max(void);
	/* Land Personal Space: Radius of boids personal space on land (% of particle size) */
	float land_personal_space(void);
	/* Land Stick Force: How strong a force must be to start effecting a boid on land */
	float land_stick_force(void);
	/* Allow Flight: Allow boids to move in air */
	bool use_flight(void);
	/* Allow Land: Allow boids to move on land */
	bool use_land(void);
	/* Allow Climbing: Allow boids to climb goal objects */
	bool use_climb(void);
};

/**************** Brush ****************/

class Brush : public ID {
public:
	Brush(const PointerRNA& ptr) :
		ID(ptr)
		{}

	/* Blending mode: Brush blending mode */
	enum blend_enum {
		blend_MIX = 0,
		blend_ADD = 1,
		blend_SUB = 2,
		blend_MUL = 3,
		blend_LIGHTEN = 4,
		blend_DARKEN = 5,
		blend_ERASE_ALPHA = 6,
		blend_ADD_ALPHA = 7,
	};
	blend_enum blend(void);
	/* Sculpt Tool */
	enum sculpt_tool_enum {
		sculpt_tool_BLOB = 17,
		sculpt_tool_CLAY = 8,
		sculpt_tool_CREASE = 16,
		sculpt_tool_DRAW = 1,
		sculpt_tool_FILL = 9,
		sculpt_tool_FLATTEN = 7,
		sculpt_tool_GRAB = 5,
		sculpt_tool_INFLATE = 4,
		sculpt_tool_LAYER = 6,
		sculpt_tool_NUDGE = 11,
		sculpt_tool_PINCH = 3,
		sculpt_tool_ROTATE = 14,
		sculpt_tool_SCRAPE = 10,
		sculpt_tool_SMOOTH = 2,
		sculpt_tool_SNAKE_HOOK = 13,
		sculpt_tool_THUMB = 12,
	};
	sculpt_tool_enum sculpt_tool(void);
	/* Vertex/Weight Paint Tool */
	enum vertexpaint_tool_enum {
		vertexpaint_tool_MIX = 0,
		vertexpaint_tool_ADD = 1,
		vertexpaint_tool_SUB = 2,
		vertexpaint_tool_MUL = 3,
		vertexpaint_tool_BLUR = 4,
		vertexpaint_tool_LIGHTEN = 5,
		vertexpaint_tool_DARKEN = 6,
	};
	vertexpaint_tool_enum vertexpaint_tool(void);
	/* Image Paint Tool */
	enum imagepaint_tool_enum {
		imagepaint_tool_DRAW = 0,
		imagepaint_tool_SOFTEN = 1,
		imagepaint_tool_SMEAR = 2,
		imagepaint_tool_CLONE = 3,
	};
	imagepaint_tool_enum imagepaint_tool(void);
	/* Direction */
	enum direction_enum {
		direction_ADD = 0,
		direction_SUBTRACT = 512,
	};
	direction_enum direction(void);
	/* Stroke Method */
	enum stroke_method_enum {
		stroke_method_DOTS = 0,
		stroke_method_DRAG_DOT = 8388608,
		stroke_method_SPACE = 1024,
		stroke_method_ANCHORED = 256,
		stroke_method_AIRBRUSH = 1,
	};
	stroke_method_enum stroke_method(void);
	/* Texture Angle Source */
	enum texture_angle_source_random_enum {
		texture_angle_source_random_USER = 0,
		texture_angle_source_random_RAKE = 128,
		texture_angle_source_random_RANDOM = 33554432,
	};
	texture_angle_source_random_enum texture_angle_source_random(void);
	/* Texture Angle Source */
	enum texture_angle_source_no_random_enum {
		texture_angle_source_no_random_USER = 0,
		texture_angle_source_no_random_RAKE = 128,
	};
	texture_angle_source_no_random_enum texture_angle_source_no_random(void);
	/* Sculpt Plane */
	enum sculpt_plane_enum {
		sculpt_plane_AREA = 0,
		sculpt_plane_VIEW = 1,
		sculpt_plane_X = 2,
		sculpt_plane_Y = 3,
		sculpt_plane_Z = 4,
	};
	sculpt_plane_enum sculpt_plane(void);
	/* Size: Radius of the brush in pixels */
	int size(void);
	/* Unprojected Radius: Radius of brush in Blender units */
	float unprojected_radius(void);
	/* Jitter: Jitter the position of the brush while painting */
	float jitter(void);
	/* Spacing: Spacing between brush daubs as a percentage of brush diameter */
	int spacing(void);
	/* Smooth Stroke Radius: Minimum distance from last point before stroke continues */
	int smooth_stroke_radius(void);
	/* Smooth Stroke Factor: Higher values give a smoother stroke */
	float smooth_stroke_factor(void);
	/* Rate: Interval between paints for Airbrush */
	float rate(void);
	/* Color */
	Array<float, 3> color(void);
	/* Strength: How powerful the effect of the brush is when applied */
	float strength(void);
	/* Plane Offset: Adjusts plane on which the brush acts towards or away from the object surface */
	float plane_offset(void);
	/* Plane Trim: If a vertex is further from offset plane than this then it is not affected */
	float plane_trim(void);
	/* Brush Height: Affectable height of brush (layer height for layer tool, i.e.) */
	float height(void);
	/* Texture Sample Bias: Value added to texture samples */
	float texture_sample_bias(void);
	/* Normal Weight: How much grab will pull vertexes out of surface during a grab */
	float normal_weight(void);
	/* Crease Brush Pinch Factor: How much the crease brush pinches */
	float crease_pinch_factor(void);
	/* Autosmooth: Amount of smoothing to automatically apply to each stroke */
	float auto_smooth_factor(void);
	/* Airbrush: Keep applying paint effect while holding mouse (spray) */
	bool use_airbrush(void);
	/* Original Normal: When locked keep using normal of surface where stroke was initiated */
	bool use_original_normal(void);
	/* Wrap: Enable torus wrapping while painting */
	bool use_wrap(void);
	/* Strength Pressure: Enable tablet pressure sensitivity for strength */
	bool use_pressure_strength(void);
	/* Plane Offset Pressure: Enable tablet pressure sensitivity for offset */
	bool use_offset_pressure(void);
	/* Size Pressure: Enable tablet pressure sensitivity for size */
	bool use_pressure_size(void);
	/* Jitter Pressure: Enable tablet pressure sensitivity for jitter */
	bool use_pressure_jitter(void);
	/* Spacing Pressure: Enable tablet pressure sensitivity for spacing */
	bool use_pressure_spacing(void);
	/* Inverse Smooth Pressure: Lighter pressure causes more smoothing to be applied */
	bool use_inverse_smooth_pressure(void);
	/* Rake: Rotate the brush texture to match the stroke direction */
	bool use_rake(void);
	/* Random Rotation: Rotate the brush texture at random */
	bool use_random_rotation(void);
	/* Use Plane Trim: Enable Plane Trim */
	bool use_plane_trim(void);
	/* Use Front-Face: Brush only affects vertexes that face the viewer */
	bool use_frontface(void);
	/* Anchored: Keep the brush anchored to the initial location */
	bool use_anchor(void);
	/* Space: Limit brush application to the distance specified by spacing */
	bool use_space(void);
	/* Smooth Stroke: Brush lags behind mouse and follows a smoother path */
	bool use_smooth_stroke(void);
	/* Persistent: Sculpts on a persistent layer of the mesh */
	bool use_persistent(void);
	/* Accumulate: Accumulate stroke dabs on top of each other */
	bool use_accumulate(void);
	/* Use Automatic Strength Adjustment: Automatically adjusts strength to give consistent results for different spacings */
	bool use_space_atten(void);
	/* Adaptive Spacing: Space daubs according to surface orientation instead of screen space */
	bool use_adaptive_space(void);
	/* Use Blender Units: When locked brush stays same size relative to object; when unlocked brush size is given in pixels */
	bool use_locked_size(void);
	/* Use Texture Overlay: Show texture in viewport */
	bool use_texture_overlay(void);
	/* Edge-to-edge: Drag anchor brush from edge-to-edge */
	bool use_edge_to_edge(void);
	/* Restore Mesh: Allows a single dot to be carefully positioned */
	bool use_restore_mesh(void);
	/* Fixed Texture: Keep texture origin in fixed position */
	bool use_fixed_texture(void);
	/* Alpha: When this is disabled, lock alpha while painting */
	bool use_alpha(void);
	/* Curve: Editable falloff curve */
	CurveMapping curve(void);
	/* Use Sculpt: Use this brush in sculpt mode */
	bool use_paint_sculpt(void);
	/* Use Vertex: Use this brush in vertex paint mode */
	bool use_paint_vertex(void);
	/* Use Weight: Use this brush in weight paint mode */
	bool use_paint_weight(void);
	/* Use Texture: Use this brush in texture paint mode */
	bool use_paint_texture(void);
	/* Texture Slot */
	BrushTextureSlot texture_slot(void);
	/* Texture */
	Texture texture(void);
	/* Texture Overlay Alpha */
	int texture_overlay_alpha(void);
	/* Add Color: Color of cursor when adding */
	Array<float, 3> cursor_color_add(void);
	/* Subract Color: Color of cursor when subtracting */
	Array<float, 3> cursor_color_subtract(void);
	/* Custom Icon: Set the brush icon from an image file */
	bool use_custom_icon(void);
	/* Brush Icon Filepath: File path to brush icon */
	std::string icon_filepath(void);
	/* Clone Image: Image for clone tool */
	Image clone_image(void);
	/* Clone Alpha: Opacity of clone image display */
	float clone_alpha(void);
	/* Clone Offset */
	Array<float, 2> clone_offset(void);
};

/**************** Brush Texture Slot ****************/

class BrushTextureSlot : public TextureSlot {
public:
	BrushTextureSlot(const PointerRNA& ptr) :
		TextureSlot(ptr)
		{}

	/* Angle: Defines brush texture rotation */
	float angle(void);
	/* Mode */
	enum map_mode_enum {
		map_mode_FIXED = 0,
		map_mode_TILED = 1,
		map_mode_3D = 2,
	};
	map_mode_enum map_mode(void);
};

/**************** Operator Stroke Element ****************/

class OperatorStrokeElement : public PropertyGroup {
public:
	OperatorStrokeElement(const PointerRNA& ptr) :
		PropertyGroup(ptr)
		{}

};

/**************** Camera ****************/

class Camera : public ID {
public:
	Camera(const PointerRNA& ptr) :
		ID(ptr)
		{}

	/* Type: Camera types */
	enum type_enum {
		type_PERSP = 0,
		type_ORTHO = 1,
	};
	type_enum type(void);
	/* Passepartout Alpha: Opacity (alpha) of the darkened overlay in Camera view */
	float passepartout_alpha(void);
	/* Clip Start: Camera near clipping distance */
	float clip_start(void);
	/* Clip End: Camera far clipping distance */
	float clip_end(void);
	/* Focal Length: Perspective Camera lens value in millimeters */
	float lens(void);
	/* Angle: Perspective Camera lens field of view in degrees */
	float angle(void);
	/* Orthographic Scale: Orthographic Camera scale (similar to zoom) */
	float ortho_scale(void);
	/* Draw Size: Apparent size of the Camera object in the 3D View */
	float draw_size(void);
	/* Shift X: Perspective Camera horizontal shift */
	float shift_x(void);
	/* Shift Y: Perspective Camera vertical shift */
	float shift_y(void);
	/* DOF Distance: Distance to the focus point for depth of field */
	float dof_distance(void);
	/* Show Limits: Draw the clipping range and focus point on the camera */
	bool show_limits(void);
	/* Show Mist: Draw a line from the Camera to indicate the mist area */
	bool show_mist(void);
	/* Show Passepartout: Show a darkened overlay outside the image area in Camera view */
	bool show_passepartout(void);
	/* Show Title Safe: Show indicators for the title safe zone in Camera view */
	bool show_title_safe(void);
	/* Show Name: Show the active Camera's name in Camera view */
	bool show_name(void);
	/* Lens Unit: Unit to edit lens in for the user interface */
	enum lens_unit_enum {
		lens_unit_MILLIMETERS = 0,
		lens_unit_DEGREES = 32,
	};
	lens_unit_enum lens_unit(void);
	/* Panorama: Render the scene with a cylindrical camera for pseudo-fisheye lens effects */
	bool use_panorama(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* DOF Object: Use this object to define the depth of field focal point */
	Object dof_object(void);
};

/**************** Cloth Settings ****************/

class ClothSettings : public Pointer {
public:
	ClothSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Goal Minimum: Goal minimum, vertex group weights are scaled to match this range */
	float goal_min(void);
	/* Goal Maximum: Goal maximum, vertex group weights are scaled to match this range */
	float goal_max(void);
	/* Goal Default: Default Goal (vertex target position) value, when no Vertex Group used */
	float goal_default(void);
	/* Goal Stiffness: Goal (vertex target position) spring stiffness */
	float goal_spring(void);
	/* Goal Damping: Goal (vertex target position) friction */
	float goal_friction(void);
	/* Internal Friction */
	float internal_friction(void);
	/* Collider Friction */
	float collider_friction(void);
	/* Mass: Mass of cloth material */
	float mass(void);
	/* Mass Vertex Group: Vertex Group for pinning of vertices */
	std::string vertex_group_mass(void);
	/* Gravity: Gravity or external force vector */
	Array<float, 3> gravity(void);
	/* Air Damping: Air has normally some thickness which slows falling things down */
	float air_damping(void);
	/* Pin Cloth: Enable pinning of cloth vertices to other objects/positions */
	bool use_pin_cloth(void);
	/* Pin Stiffness: Pin (vertex target position) spring stiffness */
	float pin_stiffness(void);
	/* Quality: Quality of the simulation in steps per frame. (higher is better quality but slower) */
	int quality(void);
	/* Stiffness Scaling: If enabled, stiffness can be scaled along a weight painted vertex group */
	bool use_stiffness_scale(void);
	/* Spring Damping: Damping of cloth velocity. (higher = more smooth, less jiggling) */
	float spring_damping(void);
	/* Structural Stiffness: Overall stiffness of structure */
	float structural_stiffness(void);
	/* Structural Stiffness Maximum: Maximum structural stiffness value */
	float structural_stiffness_max(void);
	/* Structural Stiffness Vertex Group: Vertex group for fine control over structural stiffness */
	std::string vertex_group_structural_stiffness(void);
	/* Bending Stiffness: Wrinkle coefficient. (higher = less smaller but more big wrinkles) */
	float bending_stiffness(void);
	/* Bending Stiffness Maximum: Maximum bending stiffness value */
	float bending_stiffness_max(void);
	/* Bending Stiffness Vertex Group: Vertex group for fine control over bending stiffness */
	std::string vertex_group_bending(void);
	/* Effector Weights */
	EffectorWeights effector_weights(void);
	/* Pre Roll: Simulation starts on this frame */
	int pre_roll(void);
	/* Rest Shade Key: Shape key to use the rest spring lengths from */
	ShapeKey rest_shape_key(void);
};

/**************** Cloth Collision Settings ****************/

class ClothCollisionSettings : public Pointer {
public:
	ClothCollisionSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Enable Collision: Enable collisions with other objects */
	bool use_collision(void);
	/* Minimum Distance: Minimum distance between collision objects before collision response takes in */
	float distance_min(void);
	/* Friction: Friction force if a collision happened. (higher = less movement) */
	float friction(void);
	/* Collision Quality: How many collision iterations should be done. (higher is better quality but slower) */
	int collision_quality(void);
	/* Enable Self Collision: Enable self collisions */
	bool use_self_collision(void);
	/* Self Minimum Distance: 0.5 means no distance at all, 1.0 is maximum distance */
	float self_distance_min(void);
	/* Self Friction: Friction/damping with self contact */
	float self_friction(void);
	/* Self Collision Quality: How many self collision iterations should be done. (higher is better quality but slower) */
	int self_collision_quality(void);
	/* Collision Group: Limit colliders to this Group */
	Group group(void);
};

/**************** CurveMapPoint ****************/

class CurveMapPoint : public Pointer {
public:
	CurveMapPoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location: X/Y coordinates of the curve point */
	Array<float, 2> location(void);
	/* Handle Type: Curve interpolation at this point: bezier or vector */
	enum handle_type_enum {
		handle_type_AUTO = 0,
		handle_type_VECTOR = 2,
	};
	handle_type_enum handle_type(void);
	/* Select: Selection state of the curve point */
	bool select(void);
};

/**************** CurveMap ****************/

class CurveMap : public Pointer {
public:
	CurveMap(const PointerRNA& ptr) :
		Pointer(ptr),
		points(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Extend: Extrapolate the curve or extend it horizontally */
	enum extend_enum {
		extend_HORIZONTAL = 0,
		extend_EXTRAPOLATED = 1,
	};
	extend_enum extend(void);
	/* Points */
	COLLECTION_PROPERTY(CurveMapPoint, CurveMap, points)
};

/**************** CurveMapping ****************/

class CurveMapping : public Pointer {
public:
	CurveMapping(const PointerRNA& ptr) :
		Pointer(ptr),
		curves(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Clip: Force the curve view to fit a defined boundary */
	bool use_clip(void);
	/* Clip Min X */
	float clip_min_x(void);
	/* Clip Min Y */
	float clip_min_y(void);
	/* Clip Max X */
	float clip_max_x(void);
	/* Clip Max Y */
	float clip_max_y(void);
	/* Curves */
	COLLECTION_PROPERTY(CurveMap, CurveMapping, curves)
	/* Black Level: For RGB curves, the color that black is mapped to */
	Array<float, 3> black_level(void);
	/* White Level: For RGB curves, the color that white is mapped to */
	Array<float, 3> white_level(void);
};

/**************** Color Ramp Element ****************/

class ColorRampElement : public Pointer {
public:
	ColorRampElement(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Color */
	Array<float, 4> color(void);
	/* Position */
	float position(void);
};

/**************** Color Ramp ****************/

class ColorRamp : public Pointer {
public:
	ColorRamp(const PointerRNA& ptr) :
		Pointer(ptr),
		elements(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Elements */
	COLLECTION_PROPERTY(ColorRampElement, ColorRamp, elements)
	/* Interpolation */
	enum interpolation_enum {
		interpolation_EASE = 1,
		interpolation_CARDINAL = 3,
		interpolation_LINEAR = 0,
		interpolation_B_SPLINE = 2,
		interpolation_CONSTANT = 4,
	};
	interpolation_enum interpolation(void);
};

/**************** Color Ramp Elements ****************/

class ColorRampElements : public Pointer {
public:
	ColorRampElements(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Histogram ****************/

class Histogram : public Pointer {
public:
	Histogram(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Mode: Channels to display when drawing the histogram */
	enum mode_enum {
		mode_LUMA = 0,
		mode_RGB = 1,
		mode_R = 2,
		mode_G = 3,
		mode_B = 4,
	};
	mode_enum mode(void);
};

/**************** Scopes ****************/

class Scopes : public Pointer {
public:
	Scopes(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Full Sample: Sample every pixel of the image */
	bool use_full_resolution(void);
	/* Accuracy: Proportion of original image source pixel lines to sample */
	float accuracy(void);
	/* Histogram: Histogram for viewing image statistics */
	Histogram histogram(void);
	/* Waveform Mode */
	enum waveform_mode_enum {
		waveform_mode_LUMA = 0,
		waveform_mode_RGB = 1,
		waveform_mode_YCBCR601 = 2,
		waveform_mode_YCBCR709 = 3,
		waveform_mode_YCBCRJPG = 4,
	};
	waveform_mode_enum waveform_mode(void);
	/* Waveform Opacity: Opacity of the points */
	float waveform_alpha(void);
	/* Vectorscope Opacity: Opacity of the points */
	float vectorscope_alpha(void);
};

/**************** Constraint ****************/

class Constraint : public Pointer {
public:
	Constraint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Constraint name */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_COPY_LOCATION = 9,
		type_COPY_ROTATION = 8,
		type_COPY_SCALE = 10,
		type_COPY_TRANSFORMS = 23,
		type_LIMIT_DISTANCE = 14,
		type_LIMIT_LOCATION = 6,
		type_LIMIT_ROTATION = 5,
		type_LIMIT_SCALE = 7,
		type_MAINTAIN_VOLUME = 24,
		type_TRANSFORM = 19,
		type_CLAMP_TO = 18,
		type_DAMPED_TRACK = 21,
		type_IK = 3,
		type_LOCKED_TRACK = 13,
		type_SPLINE_IK = 22,
		type_STRETCH_TO = 15,
		type_TRACK_TO = 2,
		type_ACTION = 12,
		type_CHILD_OF = 1,
		type_FLOOR = 16,
		type_FOLLOW_PATH = 4,
		type_PIVOT = 25,
		type_RIGID_BODY_JOINT = 17,
		type_SCRIPT = 11,
		type_SHRINKWRAP = 20,
	};
	type_enum type(void);
	/* Owner Space: Space that owner is evaluated in */
	enum owner_space_enum {
		owner_space_WORLD = 0,
		owner_space_POSE = 2,
		owner_space_LOCAL_WITH_PARENT = 3,
		owner_space_LOCAL = 1,
	};
	owner_space_enum owner_space(void);
	/* Target Space: Space that target is evaluated in */
	enum target_space_enum {
		target_space_WORLD = 0,
		target_space_POSE = 2,
		target_space_LOCAL_WITH_PARENT = 3,
		target_space_LOCAL = 1,
	};
	target_space_enum target_space(void);
	/* Disable: Enable/Disable Constraint */
	bool mute(void);
	/* Expanded: Constraint's panel is expanded in UI */
	bool show_expanded(void);
	/* Disabled: Constraint has invalid settings and will not be evaluated */
	bool is_valid(void);
	/* Active: Constraint is the one being edited  */
	bool active(void);
	/* Proxy Local: Constraint was added in this proxy instance (i.e. did not belong to source Armature) */
	bool is_proxy_local(void);
	/* Influence: Amount of influence constraint will have on the final solution */
	float influence(void);
	/* Lin error: Amount of residual error in Blender space unit for constraints that work on position */
	float error_location(void);
	/* Rot error: Amount of residual error in radiant for constraints that work on orientation */
	float error_rotation(void);
};

/**************** Constraint Target ****************/

class ConstraintTarget : public Pointer {
public:
	ConstraintTarget(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
};

/**************** Child Of Constraint ****************/

class ChildOfConstraint : public Constraint {
public:
	ChildOfConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Location X: Use X Location of Parent */
	bool use_location_x(void);
	/* Location Y: Use Y Location of Parent */
	bool use_location_y(void);
	/* Location Z: Use Z Location of Parent */
	bool use_location_z(void);
	/* Rotation X: Use X Rotation of Parent */
	bool use_rotation_x(void);
	/* Rotation Y: Use Y Rotation of Parent */
	bool use_rotation_y(void);
	/* Rotation Z: Use Z Rotation of Parent */
	bool use_rotation_z(void);
	/* Scale X: Use X Scale of Parent */
	bool use_scale_x(void);
	/* Scale Y: Use Y Scale of Parent */
	bool use_scale_y(void);
	/* Scale Z: Use Z Scale of Parent */
	bool use_scale_z(void);
};

/**************** Python Constraint ****************/

class PythonConstraint : public Constraint {
public:
	PythonConstraint(const PointerRNA& ptr) :
		Constraint(ptr),
		targets(ptr)
		{}

	/* Targets: Target Objects */
	COLLECTION_PROPERTY(ConstraintTarget, PythonConstraint, targets)
	/* Number of Targets: Usually only 1-3 are needed */
	int target_count(void);
	/* Script: The text object that contains the Python script */
	Text text(void);
	/* Use Targets: Use the targets indicated in the constraint panel */
	bool use_targets(void);
	/* Script Error: The linked Python script has thrown an error */
	bool has_script_error(void);
};

/**************** Stretch To Constraint ****************/

class StretchToConstraint : public Constraint {
public:
	StretchToConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Head/Tail: Target along length of bone: Head=0, Tail=1 */
	float head_tail(void);
	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Maintain Volume: Maintain the object's volume as it stretches */
	enum volume_enum {
		volume_VOLUME_XZX = 0,
		volume_VOLUME_X = 1,
		volume_VOLUME_Z = 2,
		volume_NO_VOLUME = 3,
	};
	volume_enum volume(void);
	/* Keep Axis: Axis to maintain during stretch */
	enum keep_axis_enum {
		keep_axis_PLANE_X = 0,
		keep_axis_PLANE_Z = 2,
	};
	keep_axis_enum keep_axis(void);
	/* Original Length: Length at rest position */
	float rest_length(void);
	/* Volume Variation: Factor between volume variation and stretching */
	float bulge(void);
};

/**************** Follow Path Constraint ****************/

class FollowPathConstraint : public Constraint {
public:
	FollowPathConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Offset: Offset from the position corresponding to the time frame */
	float offset(void);
	/* Offset Factor: Percentage value defining target position along length of bone */
	float offset_factor(void);
	/* Forward Axis: Axis that points forward along the path */
	enum forward_axis_enum {
		forward_axis_FORWARD_X = 0,
		forward_axis_FORWARD_Y = 1,
		forward_axis_FORWARD_Z = 2,
		forward_axis_TRACK_NEGATIVE_X = 3,
		forward_axis_TRACK_NEGATIVE_Y = 4,
		forward_axis_TRACK_NEGATIVE_Z = 5,
	};
	forward_axis_enum forward_axis(void);
	/* Up Axis: Axis that points upward */
	enum up_axis_enum {
		up_axis_UP_X = 0,
		up_axis_UP_Y = 1,
		up_axis_UP_Z = 2,
	};
	up_axis_enum up_axis(void);
	/* Follow Curve: Object will follow the heading and banking of the curve */
	bool use_curve_follow(void);
	/* Fixed Position: Object will stay locked to a single point somewhere along the length of the curve regardless of time */
	bool use_fixed_location(void);
	/* Curve Radius: Objects scale by the curve radius */
	bool use_curve_radius(void);
};

/**************** Locked Track Constraint ****************/

class LockedTrackConstraint : public Constraint {
public:
	LockedTrackConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Track Axis: Axis that points to the target object */
	enum track_axis_enum {
		track_axis_TRACK_X = 0,
		track_axis_TRACK_Y = 1,
		track_axis_TRACK_Z = 2,
		track_axis_TRACK_NEGATIVE_X = 3,
		track_axis_TRACK_NEGATIVE_Y = 4,
		track_axis_TRACK_NEGATIVE_Z = 5,
	};
	track_axis_enum track_axis(void);
	/* Locked Axis: Axis that points upward */
	enum lock_axis_enum {
		lock_axis_LOCK_X = 0,
		lock_axis_LOCK_Y = 1,
		lock_axis_LOCK_Z = 2,
	};
	lock_axis_enum lock_axis(void);
};

/**************** Action Constraint ****************/

class ActionConstraint : public Constraint {
public:
	ActionConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Transform Channel: Transformation channel from the target that is used to key the Action */
	enum transform_channel_enum {
		transform_channel_LOCATION_X = 20,
		transform_channel_LOCATION_Y = 21,
		transform_channel_LOCATION_Z = 22,
		transform_channel_ROTATION_X = 0,
		transform_channel_ROTATION_Y = 1,
		transform_channel_ROTATION_Z = 2,
		transform_channel_SCALE_X = 10,
		transform_channel_SCALE_Y = 11,
		transform_channel_SCALE_Z = 12,
	};
	transform_channel_enum transform_channel(void);
	/* Action */
	Action action(void);
	/* Start Frame: First frame of the Action to use */
	int frame_start(void);
	/* End Frame: Last frame of the Action to use */
	int frame_end(void);
	/* Maximum: Maximum value for target channel range */
	float max(void);
	/* Minimum: Minimum value for target channel range */
	float min(void);
};

/**************** Copy Scale Constraint ****************/

class CopyScaleConstraint : public Constraint {
public:
	CopyScaleConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Copy X: Copy the target's X scale */
	bool use_x(void);
	/* Copy Y: Copy the target's Y scale */
	bool use_y(void);
	/* Copy Z: Copy the target's Z scale */
	bool use_z(void);
	/* Offset: Add original scale into copied scale */
	bool use_offset(void);
};

/**************** Maintain Volume Constraint ****************/

class MaintainVolumeConstraint : public Constraint {
public:
	MaintainVolumeConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Free Axis: The free scaling axis of the object */
	enum free_axis_enum {
		free_axis_SAMEVOL_X = 0,
		free_axis_SAMEVOL_Y = 1,
		free_axis_SAMEVOL_Z = 2,
	};
	free_axis_enum free_axis(void);
	/* Volume: Volume of the bone at rest */
	float volume(void);
};

/**************** Copy Location Constraint ****************/

class CopyLocationConstraint : public Constraint {
public:
	CopyLocationConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Head/Tail: Target along length of bone: Head=0, Tail=1 */
	float head_tail(void);
	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Copy X: Copy the target's X location */
	bool use_x(void);
	/* Copy Y: Copy the target's Y location */
	bool use_y(void);
	/* Copy Z: Copy the target's Z location */
	bool use_z(void);
	/* Invert X: Invert the X location */
	bool invert_x(void);
	/* Invert Y: Invert the Y location */
	bool invert_y(void);
	/* Invert Z: Invert the Z location */
	bool invert_z(void);
	/* Offset: Add original location into copied location */
	bool use_offset(void);
};

/**************** Copy Rotation Constraint ****************/

class CopyRotationConstraint : public Constraint {
public:
	CopyRotationConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Copy X: Copy the target's X rotation */
	bool use_x(void);
	/* Copy Y: Copy the target's Y rotation */
	bool use_y(void);
	/* Copy Z: Copy the target's Z rotation */
	bool use_z(void);
	/* Invert X: Invert the X rotation */
	bool invert_x(void);
	/* Invert Y: Invert the Y rotation */
	bool invert_y(void);
	/* Invert Z: Invert the Z rotation */
	bool invert_z(void);
	/* Offset: Add original rotation into copied rotation */
	bool use_offset(void);
};

/**************** Copy Transforms Constraint ****************/

class CopyTransformsConstraint : public Constraint {
public:
	CopyTransformsConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Head/Tail: Target along length of bone: Head=0, Tail=1 */
	float head_tail(void);
	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
};

/**************** Floor Constraint ****************/

class FloorConstraint : public Constraint {
public:
	FloorConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Floor Location: Location of target that object will not pass through */
	enum floor_location_enum {
		floor_location_FLOOR_X = 0,
		floor_location_FLOOR_Y = 1,
		floor_location_FLOOR_Z = 2,
		floor_location_FLOOR_NEGATIVE_X = 3,
		floor_location_FLOOR_NEGATIVE_Y = 4,
		floor_location_FLOOR_NEGATIVE_Z = 5,
	};
	floor_location_enum floor_location(void);
	/* Sticky: Immobilize object while constrained */
	bool use_sticky(void);
	/* Use Rotation: Use the target's rotation to determine floor */
	bool use_rotation(void);
	/* Offset: Offset of floor from object origin */
	float offset(void);
};

/**************** Track To Constraint ****************/

class TrackToConstraint : public Constraint {
public:
	TrackToConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Head/Tail: Target along length of bone: Head=0, Tail=1 */
	float head_tail(void);
	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Track Axis: Axis that points to the target object */
	enum track_axis_enum {
		track_axis_TRACK_X = 0,
		track_axis_TRACK_Y = 1,
		track_axis_TRACK_Z = 2,
		track_axis_TRACK_NEGATIVE_X = 3,
		track_axis_TRACK_NEGATIVE_Y = 4,
		track_axis_TRACK_NEGATIVE_Z = 5,
	};
	track_axis_enum track_axis(void);
	/* Up Axis: Axis that points upward */
	enum up_axis_enum {
		up_axis_UP_X = 0,
		up_axis_UP_Y = 1,
		up_axis_UP_Z = 2,
	};
	up_axis_enum up_axis(void);
	/* Target Z: Target's Z axis, not World Z axis, will constraint the Up direction */
	bool use_target_z(void);
};

/**************** Kinematic Constraint ****************/

class KinematicConstraint : public Constraint {
public:
	KinematicConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Iterations: Maximum number of solving iterations */
	int iterations(void);
	/* Pole Target: Object for pole rotation */
	Object pole_target(void);
	/* Pole Sub-Target */
	std::string pole_subtarget(void);
	/* Pole Angle: Pole rotation offset */
	float pole_angle(void);
	/* Weight: For Tree-IK: Weight of position control for this target */
	float weight(void);
	/* Orientation Weight: For Tree-IK: Weight of orientation control for this target */
	float orient_weight(void);
	/* Chain Length: How many bones are included in the IK effect - 0 uses all bones */
	int chain_count(void);
	/* Use Tail: Include bone's tail as last element in chain */
	bool use_tail(void);
	/* Axis Reference: Constraint axis Lock options relative to Bone or Target reference */
	enum reference_axis_enum {
		reference_axis_BONE = 0,
		reference_axis_TARGET = 16384,
	};
	reference_axis_enum reference_axis(void);
	/* Position: Chain follows position of target */
	bool use_location(void);
	/* Lock X Pos: Constraint position along X axis */
	bool lock_location_x(void);
	/* Lock Y Pos: Constraint position along Y axis */
	bool lock_location_y(void);
	/* Lock Z Pos: Constraint position along Z axis */
	bool lock_location_z(void);
	/* Rotation: Chain follows rotation of target */
	bool use_rotation(void);
	/* Lock X Rot: Constraint rotation along X axis */
	bool lock_rotation_x(void);
	/* Lock Y Rot: Constraint rotation along Y axis */
	bool lock_rotation_y(void);
	/* Lock Z Rot: Constraint rotation along Z axis */
	bool lock_rotation_z(void);
	/* Target: Disable for targetless IK */
	bool use_target(void);
	/* Stretch: Enable IK Stretching */
	bool use_stretch(void);
	/* IK Type */
	enum ik_type_enum {
		ik_type_COPY_POSE = 0,
		ik_type_DISTANCE = 1,
	};
	ik_type_enum ik_type(void);
	/* Limit Mode: Distances in relation to sphere of influence to allow */
	enum limit_mode_enum {
		limit_mode_LIMITDIST_INSIDE = 0,
		limit_mode_LIMITDIST_OUTSIDE = 1,
		limit_mode_LIMITDIST_ONSURFACE = 2,
	};
	limit_mode_enum limit_mode(void);
	/* Distance: Radius of limiting sphere */
	float distance(void);
};

/**************** Rigid Body Joint Constraint ****************/

class RigidBodyJointConstraint : public Constraint {
public:
	RigidBodyJointConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Child Object: Child object */
	Object child(void);
	/* Pivot Type */
	enum pivot_type_enum {
		pivot_type_BALL = 1,
		pivot_type_HINGE = 2,
		pivot_type_CONE_TWIST = 4,
		pivot_type_GENERIC_6_DOF = 12,
	};
	pivot_type_enum pivot_type(void);
	/* Pivot X: Offset pivot on X */
	float pivot_x(void);
	/* Pivot Y: Offset pivot on Y */
	float pivot_y(void);
	/* Pivot Z: Offset pivot on Z */
	float pivot_z(void);
	/* Axis X: Rotate pivot on X axis in degrees */
	float axis_x(void);
	/* Axis Y: Rotate pivot on Y axis in degrees */
	float axis_y(void);
	/* Axis Z: Rotate pivot on Z axis in degrees */
	float axis_z(void);
	/* Disable Linked Collision: Disable collision between linked bodies */
	bool use_linked_collision(void);
	/* Draw Pivot: Display the pivot point and rotation in 3D view */
	bool show_pivot(void);
	/* Minimum Limit X */
	float limit_min_x(void);
	/* Minimum Limit Y */
	float limit_min_y(void);
	/* Minimum Limit Z */
	float limit_min_z(void);
	/* Maximum Limit X */
	float limit_max_x(void);
	/* Maximum Limit Y */
	float limit_max_y(void);
	/* Maximum Limit Z */
	float limit_max_z(void);
	/* Minimum Angular Limit X */
	float limit_angle_min_x(void);
	/* Minimum Angular Limit Y */
	float limit_angle_min_y(void);
	/* Minimum Angular Limit Z */
	float limit_angle_min_z(void);
	/* Maximum Angular Limit X */
	float limit_angle_max_x(void);
	/* Maximum Angular Limit Y */
	float limit_angle_max_y(void);
	/* Maximum Angular Limit Z */
	float limit_angle_max_z(void);
	/* Limit X: Use minimum/maximum x limit */
	bool use_limit_x(void);
	/* Limit Y: Use minimum/maximum y limit */
	bool use_limit_y(void);
	/* Limit Z: Use minimum/maximum z limit */
	bool use_limit_z(void);
	/* Angular X Limit: Use minimum/maximum x angular limit */
	bool use_angular_limit_x(void);
	/* Angular Y Limit: Use minimum/maximum y angular limit */
	bool use_angular_limit_y(void);
	/* Angular Z Limit: Use minimum/maximum z angular limit */
	bool use_angular_limit_z(void);
};

/**************** Clamp To Constraint ****************/

class ClampToConstraint : public Constraint {
public:
	ClampToConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Main Axis: Main axis of movement */
	enum main_axis_enum {
		main_axis_CLAMPTO_AUTO = 0,
		main_axis_CLAMPTO_X = 1,
		main_axis_CLAMPTO_Y = 2,
		main_axis_CLAMPTO_Z = 3,
	};
	main_axis_enum main_axis(void);
	/* Cyclic: Treat curve as cyclic curve (no clamping to curve bounding box */
	bool use_cyclic(void);
};

/**************** Limit Distance Constraint ****************/

class LimitDistanceConstraint : public Constraint {
public:
	LimitDistanceConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Distance: Radius of limiting sphere */
	float distance(void);
	/* Limit Mode: Distances in relation to sphere of influence to allow */
	enum limit_mode_enum {
		limit_mode_LIMITDIST_INSIDE = 0,
		limit_mode_LIMITDIST_OUTSIDE = 1,
		limit_mode_LIMITDIST_ONSURFACE = 2,
	};
	limit_mode_enum limit_mode(void);
};

/**************** Limit Size Constraint ****************/

class LimitScaleConstraint : public Constraint {
public:
	LimitScaleConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Minimum X: Use the minimum X value */
	bool use_min_x(void);
	/* Minimum Y: Use the minimum Y value */
	bool use_min_y(void);
	/* Minimum Z: Use the minimum Z value */
	bool use_min_z(void);
	/* Maximum X: Use the maximum X value */
	bool use_max_x(void);
	/* Maximum Y: Use the maximum Y value */
	bool use_max_y(void);
	/* Maximum Z: Use the maximum Z value */
	bool use_max_z(void);
	/* Minimum X: Lowest X value to allow */
	float min_x(void);
	/* Minimum Y: Lowest Y value to allow */
	float min_y(void);
	/* Minimum Z: Lowest Z value to allow */
	float min_z(void);
	/* Maximum X: Highest X value to allow */
	float max_x(void);
	/* Maximum Y: Highest Y value to allow */
	float max_y(void);
	/* Maximum Z: Highest Z value to allow */
	float max_z(void);
	/* For Transform: Transforms are affected by this constraint as well */
	bool use_transform_limit(void);
};

/**************** Limit Rotation Constraint ****************/

class LimitRotationConstraint : public Constraint {
public:
	LimitRotationConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Limit X: Use the minimum X value */
	bool use_limit_x(void);
	/* Limit Y: Use the minimum Y value */
	bool use_limit_y(void);
	/* Limit Z: Use the minimum Z value */
	bool use_limit_z(void);
	/* Minimum X: Lowest X value to allow */
	float min_x(void);
	/* Minimum Y: Lowest Y value to allow */
	float min_y(void);
	/* Minimum Z: Lowest Z value to allow */
	float min_z(void);
	/* Maximum X: Highest X value to allow */
	float max_x(void);
	/* Maximum Y: Highest Y value to allow */
	float max_y(void);
	/* Maximum Z: Highest Z value to allow */
	float max_z(void);
	/* For Transform: Transforms are affected by this constraint as well */
	bool use_transform_limit(void);
};

/**************** Limit Location Constraint ****************/

class LimitLocationConstraint : public Constraint {
public:
	LimitLocationConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Minimum X: Use the minimum X value */
	bool use_min_x(void);
	/* Minimum Y: Use the minimum Y value */
	bool use_min_y(void);
	/* Minimum Z: Use the minimum Z value */
	bool use_min_z(void);
	/* Maximum X: Use the maximum X value */
	bool use_max_x(void);
	/* Maximum Y: Use the maximum Y value */
	bool use_max_y(void);
	/* Maximum Z: Use the maximum Z value */
	bool use_max_z(void);
	/* Minimum X: Lowest X value to allow */
	float min_x(void);
	/* Minimum Y: Lowest Y value to allow */
	float min_y(void);
	/* Minimum Z: Lowest Z value to allow */
	float min_z(void);
	/* Maximum X: Highest X value to allow */
	float max_x(void);
	/* Maximum Y: Highest Y value to allow */
	float max_y(void);
	/* Maximum Z: Highest Z value to allow */
	float max_z(void);
	/* For Transform: Transforms are affected by this constraint as well */
	bool use_transform_limit(void);
};

/**************** Transformation Constraint ****************/

class TransformConstraint : public Constraint {
public:
	TransformConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Map From: The transformation type to use from the target */
	enum map_from_enum {
		map_from_LOCATION = 0,
		map_from_ROTATION = 1,
		map_from_SCALE = 2,
	};
	map_from_enum map_from(void);
	/* Map To: The transformation type to affect of the constrained object */
	enum map_to_enum {
		map_to_LOCATION = 0,
		map_to_ROTATION = 1,
		map_to_SCALE = 2,
	};
	map_to_enum map_to(void);
	/* Map To X From: The source axis constrained object's X axis uses */
	enum map_to_x_from_enum {
		map_to_x_from_X = 0,
		map_to_x_from_Y = 1,
		map_to_x_from_Z = 2,
	};
	map_to_x_from_enum map_to_x_from(void);
	/* Map To Y From: The source axis constrained object's Y axis uses */
	enum map_to_y_from_enum {
		map_to_y_from_X = 0,
		map_to_y_from_Y = 1,
		map_to_y_from_Z = 2,
	};
	map_to_y_from_enum map_to_y_from(void);
	/* Map To Z From: The source axis constrained object's Z axis uses */
	enum map_to_z_from_enum {
		map_to_z_from_X = 0,
		map_to_z_from_Y = 1,
		map_to_z_from_Z = 2,
	};
	map_to_z_from_enum map_to_z_from(void);
	/* Extrapolate Motion: Extrapolate ranges */
	bool use_motion_extrapolate(void);
	/* From Minimum X: Bottom range of X axis source motion */
	float from_min_x(void);
	/* From Minimum Y: Bottom range of Y axis source motion */
	float from_min_y(void);
	/* From Minimum Z: Bottom range of Z axis source motion */
	float from_min_z(void);
	/* From Maximum X: Top range of X axis source motion */
	float from_max_x(void);
	/* From Maximum Y: Top range of Y axis source motion */
	float from_max_y(void);
	/* From Maximum Z: Top range of Z axis source motion */
	float from_max_z(void);
	/* To Minimum X: Bottom range of X axis destination motion */
	float to_min_x(void);
	/* To Minimum Y: Bottom range of Y axis destination motion */
	float to_min_y(void);
	/* To Minimum Z: Bottom range of Z axis destination motion */
	float to_min_z(void);
	/* To Maximum X: Top range of X axis destination motion */
	float to_max_x(void);
	/* To Maximum Y: Top range of Y axis destination motion */
	float to_max_y(void);
	/* To Maximum Z: Top range of Z axis destination motion */
	float to_max_z(void);
};

/**************** Shrinkwrap Constraint ****************/

class ShrinkwrapConstraint : public Constraint {
public:
	ShrinkwrapConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Shrinkwrap Type: Selects type of shrinkwrap algorithm for target position */
	enum shrinkwrap_type_enum {
		shrinkwrap_type_NEAREST_SURFACE = 0,
		shrinkwrap_type_PROJECT = 1,
		shrinkwrap_type_NEAREST_VERTEX = 2,
	};
	shrinkwrap_type_enum shrinkwrap_type(void);
	/* Distance: Distance to Target */
	float distance(void);
	/* Axis X: Projection over X Axis */
	bool use_x(void);
	/* Axis Y: Projection over Y Axis */
	bool use_y(void);
	/* Axis Z: Projection over Z Axis */
	bool use_z(void);
};

/**************** Damped Track Constraint ****************/

class DampedTrackConstraint : public Constraint {
public:
	DampedTrackConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Target Object */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Track Axis: Axis that points to the target object */
	enum track_axis_enum {
		track_axis_TRACK_X = 0,
		track_axis_TRACK_Y = 1,
		track_axis_TRACK_Z = 2,
		track_axis_TRACK_NEGATIVE_X = 3,
		track_axis_TRACK_NEGATIVE_Y = 4,
		track_axis_TRACK_NEGATIVE_Z = 5,
	};
	track_axis_enum track_axis(void);
};

/**************** Spline IK Constraint ****************/

class SplineIKConstraint : public Constraint {
public:
	SplineIKConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Target: Curve that controls this relationship */
	Object target(void);
	/* Chain Length: How many bones are included in the chain */
	int chain_count(void);
	/* Joint Bindings: (EXPERIENCED USERS ONLY) The relative positions of the joints along the chain as percentages */
	Array<float, 32> joint_bindings(void);
	/* Chain Offset: Offset the entire chain relative to the root joint */
	bool use_chain_offset(void);
	/* Even Divisions: Ignore the relative lengths of the bones when fitting to the curve */
	bool use_even_divisions(void);
	/* Y Stretch: Stretch the Y axis of the bones to fit the curve */
	bool use_y_stretch(void);
	/* Use Curve Radius: Average radius of the endpoints is used to tweak the X and Z Scaling of the bones, on top of XZ Scale mode */
	bool use_curve_radius(void);
	/* XZ Scale Mode: Method used for determining the scaling of the X and Z axes of the bones */
	enum xz_scale_mode_enum {
		xz_scale_mode_NONE = 0,
		xz_scale_mode_BONE_ORIGINAL = 1,
		xz_scale_mode_VOLUME_PRESERVE = 2,
	};
	xz_scale_mode_enum xz_scale_mode(void);
};

/**************** Pivot Constraint ****************/

class PivotConstraint : public Constraint {
public:
	PivotConstraint(const PointerRNA& ptr) :
		Constraint(ptr)
		{}

	/* Head/Tail: Target along length of bone: Head=0, Tail=1 */
	float head_tail(void);
	/* Target: Target Object, defining the position of the pivot when defined */
	Object target(void);
	/* Sub-Target */
	std::string subtarget(void);
	/* Use Relative Offset: Offset will be an absolute point in space instead of relative to the target */
	bool use_relative_location(void);
	/* Offset: Offset of pivot from target (when set), or from owner's location (when Fixed Position is off), or the absolute pivot point */
	Array<float, 3> offset(void);
	/* Enabled Rotation Range: Rotation range on which pivoting should occur */
	enum rotation_range_enum {
		rotation_range_ALWAYS_ACTIVE = -1,
		rotation_range_NX = 0,
		rotation_range_NY = 1,
		rotation_range_NZ = 2,
		rotation_range_X = 3,
		rotation_range_Y = 4,
		rotation_range_Z = 5,
	};
	rotation_range_enum rotation_range(void);
};

/**************** Context ****************/

class Context : public Pointer {
public:
	Context(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* window_manager */
	WindowManager window_manager(void);
	/* window */
	Window window(void);
	/* screen */
	Screen screen(void);
	/* area */
	Area area(void);
	/* space_data */
	Space space_data(void);
	/* region */
	Region region(void);
	/* region_data */
	RegionView3D region_data(void);
	/* blend_data */
	BlendData blend_data(void);
	/* scene */
	Scene scene(void);
	/* tool_settings */
	ToolSettings tool_settings(void);
	/* user_preferences */
	UserPreferences user_preferences(void);
	/* mode */
	enum mode_enum {
		mode_EDIT_MESH = 0,
		mode_EDIT_CURVE = 1,
		mode_EDIT_SURFACE = 2,
		mode_EDIT_TEXT = 3,
		mode_EDIT_ARMATURE = 4,
		mode_EDIT_METABALL = 5,
		mode_EDIT_LATTICE = 6,
		mode_POSE = 7,
		mode_SCULPT = 8,
		mode_PAINT_WEIGHT = 9,
		mode_PAINT_VERTEX = 10,
		mode_PAINT_TEXTURE = 11,
		mode_PARTICLE = 12,
		mode_OBJECT = 13,
	};
	mode_enum mode(void);
};

/**************** Controller ****************/

class Controller : public Pointer {
public:
	Controller(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_LOGIC_AND = 0,
		type_LOGIC_OR = 1,
		type_LOGIC_NAND = 4,
		type_LOGIC_NOR = 5,
		type_LOGIC_XOR = 6,
		type_LOGIC_XNOR = 7,
		type_EXPRESSION = 2,
		type_PYTHON = 3,
	};
	type_enum type(void);
	/* Expanded: Set controller expanded in the user interface */
	bool show_expanded(void);
	/* Priority: Mark controller for execution before all non-marked controllers (good for startup scripts) */
	bool use_priority(void);
	/* : Set Controller state index (1 to 30) */
	int states(void);
};

/**************** Expression Controller ****************/

class ExpressionController : public Controller {
public:
	ExpressionController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

	/* Expression */
	std::string expression(void);
};

/**************** Python Controller ****************/

class PythonController : public Controller {
public:
	PythonController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

	/* Execution Method: Python script type (textblock or module - faster) */
	enum mode_enum {
		mode_SCRIPT = 0,
		mode_MODULE = 1,
	};
	mode_enum mode(void);
	/* Text: Text datablock with the python script */
	Text text(void);
	/* Module: Module name and function to run e.g. "someModule.main". Internal texts and external python files can be used */
	std::string module(void);
	/* D: Continuously reload the module from disk for editing external modules without restarting */
	bool use_debug(void);
};

/**************** And Controller ****************/

class AndController : public Controller {
public:
	AndController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

};

/**************** Or Controller ****************/

class OrController : public Controller {
public:
	OrController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

};

/**************** Nor Controller ****************/

class NorController : public Controller {
public:
	NorController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

};

/**************** Nand Controller ****************/

class NandController : public Controller {
public:
	NandController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

};

/**************** Xor Controller ****************/

class XorController : public Controller {
public:
	XorController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

};

/**************** Xnor Controller ****************/

class XnorController : public Controller {
public:
	XnorController(const PointerRNA& ptr) :
		Controller(ptr)
		{}

};

/**************** Curve ****************/

class Curve : public ID {
public:
	Curve(const PointerRNA& ptr) :
		ID(ptr),
		splines(ptr),
		materials(ptr)
		{}

	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Shape Keys */
	Key shape_keys(void);
	/* Splines: Collection of splines in this curve data object */
	COLLECTION_PROPERTY(Spline, Curve, splines)
	/* Draw Handles: Display bezier handles in editmode */
	bool show_handles(void);
	/* Draw Normals: Display 3D curve normals in editmode */
	bool show_normal_face(void);
	/* Path Length: The number of frames that are needed to traverse the path, defining the maximum value for the 'Evaluation Time' setting */
	int path_duration(void);
	/* Path: Enable the curve to become a translation path */
	bool use_path(void);
	/* Follow: Make curve path children to rotate along the path */
	bool use_path_follow(void);
	/* Stretch: Option for curve-deform: makes deformed child to stretch along entire path */
	bool use_stretch(void);
	/* Bounds Clamp: Use the mesh bounds to clamp the deformation */
	bool use_deform_bounds(void);
	/* Offset Path Distance: Children will use TimeOffs value as path distance offset */
	bool use_time_offset(void);
	/* Radius: Option for paths: apply the curve radius with path following it and deforming */
	bool use_radius(void);
	/* Bevel Resolution: Bevel resolution when depth is non-zero and no specific bevel object has been defined */
	int bevel_resolution(void);
	/* Offset: Offset the curve to adjust the width of a text */
	float offset(void);
	/* Extrude: Amount of curve extrusion when not using a bevel object */
	float extrude(void);
	/* Bevel Depth: Bevel depth when not using a bevel object */
	float bevel_depth(void);
	/* Resolution U: Surface resolution in U direction */
	int resolution_u(void);
	/* Resolution V: Surface resolution in V direction */
	int resolution_v(void);
	/* Render Resolution U: Surface resolution in U direction used while rendering. Zero skips this property */
	int render_resolution_u(void);
	/* Render Resolution V: Surface resolution in V direction used while rendering. Zero skips this property */
	int render_resolution_v(void);
	/* Evaluation Time: Parametric position along the length of the curve that Objects 'following' it should be at. Position is evaluated by dividing by the 'Path Length' value */
	float eval_time(void);
	/* Bevel Object: Curve object name that defines the bevel shape */
	Object bevel_object(void);
	/* Taper Object: Curve object name that defines the taper (width) */
	Object taper_object(void);
	/* Dimensions: Select 2D or 3D curve type */
	enum dimensions_enum {
		dimensions_2D = 0,
		dimensions_3D = 1,
	};
	dimensions_enum dimensions(void);
	/* Front: Draw filled front for extruded/beveled curves */
	bool use_fill_front(void);
	/* Back: Draw filled back for extruded/beveled curves */
	bool use_fill_back(void);
	/* Twist Method: The type of tilt calculation for 3D Curves */
	enum twist_mode_enum {
		twist_mode_Z_UP = 0,
		twist_mode_MINIMUM = 3,
		twist_mode_TANGENT = 4,
	};
	twist_mode_enum twist_mode(void);
	/* Twist Smooth: Smoothing iteration for tangents */
	float twist_smooth(void);
	/* Fill deformed: Fill curve after applying shape keys and all modifiers */
	bool use_fill_deform(void);
	/* Auto Texture Space: Adjusts active object's texture space automatically when transforming object */
	bool use_auto_texspace(void);
	/* Texture Space Location: Texture space location */
	Array<float, 3> texspace_location(void);
	/* Texture Space Size: Texture space size */
	Array<float, 3> texspace_size(void);
	/* Use UV for mapping: Uses the UV values as Generated textured coordinates */
	bool use_uv_as_generated(void);
	/* Materials */
	COLLECTION_PROPERTY(Material, Curve, materials)
};

/**************** Curve Splines ****************/

class CurveSplines : public Pointer {
public:
	CurveSplines(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Spline: Active curve spline */
	Object active(void);
};

/**************** Surface Curve ****************/

class SurfaceCurve : public Curve {
public:
	SurfaceCurve(const PointerRNA& ptr) :
		Curve(ptr)
		{}

	/* Use UV for Mapping: Uses the UV values as Generated textured coordinates */
	bool use_uv_as_generated(void);
};

/**************** Text Curve ****************/

class TextCurve : public Curve {
public:
	TextCurve(const PointerRNA& ptr) :
		Curve(ptr),
		text_boxes(ptr),
		body_format(ptr)
		{}

	/* Text Align: Text align from the object center */
	enum align_enum {
		align_LEFT = 0,
		align_CENTER = 1,
		align_RIGHT = 2,
		align_JUSTIFY = 3,
		align_FLUSH = 4,
	};
	align_enum align(void);
	/* Font size */
	float size(void);
	/* Small Caps: Scale of small capitals */
	float small_caps_scale(void);
	/* Distance between lines of text */
	float space_line(void);
	/* Spacing between words */
	float space_word(void);
	/* Global spacing between characters */
	float space_character(void);
	/* Shear: Italic angle of the characters */
	float shear(void);
	/* X Offset: Horizontal offset from the object origin */
	float offset_x(void);
	/* Y Offset: Vertical offset from the object origin */
	float offset_y(void);
	/* Underline Position: Vertical position of underline */
	float underline_position(void);
	/* Underline Thickness */
	float underline_height(void);
	/* Textboxes */
	COLLECTION_PROPERTY(TextBox, TextCurve, text_boxes)
	/* The active text box */
	int active_textbox(void);
	/* Object Font: Use Blender Objects as font characters. Give font objects a common name followed by the character it represents, eg. familya, familyb etc, and turn on Verts Duplication */
	std::string family(void);
	/* Body Text: contents of this text object */
	std::string body(void);
	/* Character Info: Stores the style of each character */
	COLLECTION_PROPERTY(TextCharacterFormat, TextCurve, body_format)
	/* Text on Curve: Curve deforming text object */
	Object follow_curve(void);
	/* Font */
	VectorFont font(void);
	/* Font */
	VectorFont font_bold(void);
	/* Font */
	VectorFont font_italic(void);
	/* Font */
	VectorFont font_bold_italic(void);
	/* Edit Format: Editing settings character formatting */
	TextCharacterFormat edit_format(void);
	/* Fast: Don't fill polygons while editing */
	bool use_fast_edit(void);
	/* Use UV for Mapping: Uses the UV values as Generated textured coordinates */
	bool use_uv_as_generated(void);
};

/**************** Text Box ****************/

class TextBox : public Pointer {
public:
	TextBox(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Textbox X Offset */
	float x(void);
	/* Textbox Y Offset */
	float y(void);
	/* Textbox Width */
	float width(void);
	/* Textbox Height */
	float height(void);
};

/**************** Text Character Format ****************/

class TextCharacterFormat : public Pointer {
public:
	TextCharacterFormat(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Bold */
	bool use_bold(void);
	/* Italic */
	bool use_italic(void);
	/* Underline */
	bool use_underline(void);
	/* Small Caps */
	bool use_small_caps(void);
};

/**************** SplinePoint ****************/

class SplinePoint : public Pointer {
public:
	SplinePoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Select: Selection status */
	bool select(void);
	/* Hide: Visibility status */
	bool hide(void);
	/* Point: Point coordinates */
	Array<float, 4> co(void);
	/* Weight: Nurbs weight */
	float weight(void);
	/* Tilt: Tilt in 3D View */
	float tilt(void);
	/* Weight: Softbody goal weight */
	float weight_softbody(void);
	/* Bevel Radius: Radius for bevelling */
	float radius(void);
};

/**************** Bezier Curve Point ****************/

class BezierSplinePoint : public Pointer {
public:
	BezierSplinePoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Handle 1 selected: Handle 1 selection status */
	bool select_left_handle(void);
	/* Handle 2 selected: Handle 2 selection status */
	bool select_right_handle(void);
	/* Control Point selected: Control point selection status */
	bool select_control_point(void);
	/* Hide: Visibility status */
	bool hide(void);
	/* Handle 1 Type: Handle types */
	enum handle_left_type_enum {
		handle_left_type_FREE = 0,
		handle_left_type_AUTO = 1,
		handle_left_type_VECTOR = 2,
		handle_left_type_ALIGNED = 3,
	};
	handle_left_type_enum handle_left_type(void);
	/* Handle 2 Type: Handle types */
	enum handle_right_type_enum {
		handle_right_type_FREE = 0,
		handle_right_type_AUTO = 1,
		handle_right_type_VECTOR = 2,
		handle_right_type_ALIGNED = 3,
	};
	handle_right_type_enum handle_right_type(void);
	/* Handle 1: Coordinates of the first handle */
	Array<float, 3> handle_left(void);
	/* Control Point: Coordinates of the control point */
	Array<float, 3> co(void);
	/* Handle 2: Coordinates of the second handle */
	Array<float, 3> handle_right(void);
	/* Tilt: Tilt in 3D View */
	float tilt(void);
	/* Weight: Softbody goal weight */
	float weight(void);
	/* Bevel Radius: Radius for bevelling */
	float radius(void);
};

/**************** Spline ****************/

class Spline : public Pointer {
public:
	Spline(const PointerRNA& ptr) :
		Pointer(ptr),
		points(ptr),
		bezier_points(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Points: Collection of points that make up this poly or nurbs spline */
	COLLECTION_PROPERTY(SplinePoint, Spline, points)
	/* Bezier Points: Collection of points for bezier curves only */
	COLLECTION_PROPERTY(BezierSplinePoint, Spline, bezier_points)
	/* Tilt Interpolation: The type of tilt interpolation for 3D, Bezier curves */
	enum tilt_interpolation_enum {
		tilt_interpolation_LINEAR = 0,
		tilt_interpolation_CARDINAL = 1,
		tilt_interpolation_BSPLINE = 2,
		tilt_interpolation_EASE = 3,
	};
	tilt_interpolation_enum tilt_interpolation(void);
	/* Radius Interpolation: The type of radius interpolation for Bezier curves */
	enum radius_interpolation_enum {
		radius_interpolation_LINEAR = 0,
		radius_interpolation_CARDINAL = 1,
		radius_interpolation_BSPLINE = 2,
		radius_interpolation_EASE = 3,
	};
	radius_interpolation_enum radius_interpolation(void);
	/* Type: The interpolation type for this curve element */
	enum type_enum {
		type_POLY = 0,
		type_BEZIER = 1,
		type_BSPLINE = 2,
		type_CARDINAL = 3,
		type_NURBS = 4,
	};
	type_enum type(void);
	/* Points U: Total number points for the curve or surface in the U direction */
	int point_count_u(void);
	/* Points V: Total number points for the surface on the V direction */
	int point_count_v(void);
	/* Order U: Nurbs order in the U direction (For splines and surfaces), Higher values let points influence a greater area */
	int order_u(void);
	/* Order V: Nurbs order in the V direction (For surfaces only), Higher values let points influence a greater area */
	int order_v(void);
	/* Resolution U: Curve or Surface subdivisions per segment */
	int resolution_u(void);
	/* Resolution V: Surface subdivisions per segment */
	int resolution_v(void);
	/* Cyclic U: Make this curve or surface a closed loop in the U direction */
	bool use_cyclic_u(void);
	/* Cyclic V: Make this surface a closed loop in the V direction */
	bool use_cyclic_v(void);
	/* Endpoint U: Make this nurbs curve or surface meet the endpoints in the U direction (Cyclic U must be disabled) */
	bool use_endpoint_u(void);
	/* Endpoint V: Make this nurbs surface meet the endpoints in the V direction (Cyclic V must be disabled) */
	bool use_endpoint_v(void);
	/* Bezier U: Make this nurbs curve or surface act like a bezier spline in the U direction (Order U must be 3 or 4, Cyclic U must be disabled) */
	bool use_bezier_u(void);
	/* Bezier V: Make this nurbs surface act like a bezier spline in the V direction (Order V must be 3 or 4, Cyclic V must be disabled) */
	bool use_bezier_v(void);
	/* Smooth: Smooth the normals of the surface or beveled curve */
	bool use_smooth(void);
	/* Hide: Hide this curve in editmode */
	bool hide(void);
	/* Material Index */
	int material_index(void);
	/* Character Index: Location of this character in the text data (only for text curves) */
	int character_index(void);
};

/**************** Spline Points ****************/

class SplinePoints : public Pointer {
public:
	SplinePoints(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Spline Bezier Points ****************/

class SplineBezierPoints : public Pointer {
public:
	SplineBezierPoints(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** F-Curve ****************/

class FCurve : public Pointer {
public:
	FCurve(const PointerRNA& ptr) :
		Pointer(ptr),
		sampled_points(ptr),
		keyframe_points(ptr),
		modifiers(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Extrapolation */
	enum extrapolation_enum {
		extrapolation_CONSTANT = 0,
		extrapolation_LINEAR = 1,
	};
	extrapolation_enum extrapolation(void);
	/* Driver: Channel Driver (only set for Driver F-Curves) */
	Driver driver(void);
	/* Group: Action Group that this F-Curve belongs to */
	ActionGroup group(void);
	/* Data Path: RNA Path to property affected by F-Curve */
	std::string data_path(void);
	/* RNA Array Index: Index to the specific property affected by F-Curve if applicable */
	int array_index(void);
	/* Color Mode: Method used to determine color of F-Curve in Graph Editor */
	enum color_mode_enum {
		color_mode_AUTO_RAINBOW = 0,
		color_mode_AUTO_RGB = 1,
		color_mode_CUSTOM = 2,
	};
	color_mode_enum color_mode(void);
	/* Color: Color of the F-Curve in the Graph Editor */
	Array<float, 3> color(void);
	/* Select: F-Curve is selected for editing */
	bool select(void);
	/* Lock: F-Curve's settings cannot be edited */
	bool lock(void);
	/* Muted: F-Curve is not evaluated */
	bool mute(void);
	/* Auto Clamped Handles: All auto-handles for F-Curve are clamped */
	bool use_auto_handle_clamp(void);
	/* Hide: F-Curve and its keyframes are hidden in the Graph Editor graphs */
	bool hide(void);
	/* Valid: False when F-Curve could not be evaluated in past, so should be skipped when evaluating */
	bool is_valid(void);
	/* Sampled Points: Sampled animation data */
	COLLECTION_PROPERTY(FCurveSample, FCurve, sampled_points)
	/* Keyframes: User-editable keyframes */
	COLLECTION_PROPERTY(Keyframe, FCurve, keyframe_points)
	/* Modifiers: Modifiers affecting the shape of the F-Curve */
	COLLECTION_PROPERTY(FModifier, FCurve, modifiers)
};

/**************** Keyframe Points ****************/

class FCurveKeyframePoints : public Pointer {
public:
	FCurveKeyframePoints(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** F-Curve Modifiers ****************/

class FCurveModifiers : public Pointer {
public:
	FCurveModifiers(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active F-Curve Modifier: Active F-Curve Modifier */
	FModifier active(void);
};

/**************** Keyframe ****************/

class Keyframe : public Pointer {
public:
	Keyframe(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Handle 1 selected: Handle 1 selection status */
	bool select_left_handle(void);
	/* Handle 2 selected: Handle 2 selection status */
	bool select_right_handle(void);
	/* Select: Control point selection status */
	bool select_control_point(void);
	/* Handle 1 Type: Handle types */
	enum handle_left_type_enum {
		handle_left_type_FREE = 0,
		handle_left_type_AUTO = 1,
		handle_left_type_VECTOR = 2,
		handle_left_type_ALIGNED = 3,
	};
	handle_left_type_enum handle_left_type(void);
	/* Handle 2 Type: Handle types */
	enum handle_right_type_enum {
		handle_right_type_FREE = 0,
		handle_right_type_AUTO = 1,
		handle_right_type_VECTOR = 2,
		handle_right_type_ALIGNED = 3,
	};
	handle_right_type_enum handle_right_type(void);
	/* Interpolation: Interpolation method to use for segment of the curve from this Keyframe until the next Keyframe */
	enum interpolation_enum {
		interpolation_CONSTANT = 0,
		interpolation_LINEAR = 1,
		interpolation_BEZIER = 2,
	};
	interpolation_enum interpolation(void);
	/* Type: The type of keyframe */
	enum type_enum {
		type_KEYFRAME = 0,
		type_BREAKDOWN = 2,
		type_EXTREME = 1,
		type_JITTER = 3,
	};
	type_enum type(void);
	/* Handle 1: Coordinates of the first handle */
	Array<float, 2> handle_left(void);
	/* Control Point: Coordinates of the control point */
	Array<float, 2> co(void);
	/* Handle 2: Coordinates of the second handle */
	Array<float, 2> handle_right(void);
};

/**************** F-Curve Sample ****************/

class FCurveSample : public Pointer {
public:
	FCurveSample(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Select: Selection status */
	bool select(void);
	/* Point: Point coordinates */
	Array<float, 2> co(void);
};

/**************** Driver Target ****************/

class DriverTarget : public Pointer {
public:
	DriverTarget(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* ID: ID-block that the specific property used can be found from (id_type property must be set first) */
	ID id(void);
	/* ID Type: Type of ID-block that can be used */
	enum id_type_enum {
		id_type_ACTION = 17217,
		id_type_ARMATURE = 21057,
		id_type_BRUSH = 21058,
		id_type_CAMERA = 16707,
		id_type_CURVE = 21827,
		id_type_FONT = 18006,
		id_type_GREASEPENCIL = 17479,
		id_type_GROUP = 21063,
		id_type_IMAGE = 19785,
		id_type_KEY = 17739,
		id_type_LAMP = 16716,
		id_type_LIBRARY = 18764,
		id_type_LATTICE = 21580,
		id_type_MATERIAL = 16717,
		id_type_META = 16973,
		id_type_MESH = 17741,
		id_type_NODETREE = 21582,
		id_type_OBJECT = 16975,
		id_type_PARTICLE = 16720,
		id_type_SCENE = 17235,
		id_type_SCREEN = 21075,
		id_type_SOUND = 20307,
		id_type_TEXT = 22612,
		id_type_TEXTURE = 17748,
		id_type_WORLD = 20311,
		id_type_WINDOWMANAGER = 19799,
	};
	id_type_enum id_type(void);
	/* Data Path: RNA Path (from ID-block) to property used */
	std::string data_path(void);
	/* Bone Name: Name of PoseBone to use as target */
	std::string bone_target(void);
	/* Type: Driver variable type */
	enum transform_type_enum {
		transform_type_LOC_X = 0,
		transform_type_LOC_Y = 1,
		transform_type_LOC_Z = 2,
		transform_type_ROT_X = 3,
		transform_type_ROT_Y = 4,
		transform_type_ROT_Z = 5,
		transform_type_SCALE_X = 6,
		transform_type_SCALE_Y = 7,
		transform_type_SCALE_Z = 8,
	};
	transform_type_enum transform_type(void);
	/* Local Space: Use transforms in Local Space (as opposed to the worldspace default) */
	bool use_local_space_transform(void);
};

/**************** Driver Variable ****************/

class DriverVariable : public Pointer {
public:
	DriverVariable(const PointerRNA& ptr) :
		Pointer(ptr),
		targets(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Name to use in scripted expressions/functions. (No spaces or dots are allowed. Also, must not start with a symbol or digit) */
	std::string name(void);
	/* Type: Driver variable type */
	enum type_enum {
		type_SINGLE_PROP = 0,
		type_TRANSFORMS = 3,
		type_ROTATION_DIFF = 1,
		type_LOC_DIFF = 2,
	};
	type_enum type(void);
	/* Targets: Sources of input data for evaluating this variable */
	COLLECTION_PROPERTY(DriverTarget, DriverVariable, targets)
};

/**************** Driver ****************/

class Driver : public Pointer {
public:
	Driver(const PointerRNA& ptr) :
		Pointer(ptr),
		variables(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Type: Driver type */
	enum type_enum {
		type_AVERAGE = 0,
		type_SUM = 2,
		type_SCRIPTED = 1,
		type_MIN = 3,
		type_MAX = 4,
	};
	type_enum type(void);
	/* Expression: Expression to use for Scripted Expression */
	std::string expression(void);
	/* Variables: Properties acting as inputs for this driver */
	COLLECTION_PROPERTY(DriverVariable, Driver, variables)
	/* Show Debug Info: Show intermediate values for the driver calculations to allow debugging of drivers */
	bool show_debug_info(void);
	/* Invalid: Driver could not be evaluated in past, so should be skipped */
	bool is_valid(void);
};

/**************** ChannelDriver Variables ****************/

class ChannelDriverVariables : public Pointer {
public:
	ChannelDriverVariables(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** F-Modifier ****************/

class FModifier : public Pointer {
public:
	FModifier(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Type: F-Curve Modifier Type */
	enum type_enum {
		type_NULL = 0,
		type_GENERATOR = 1,
		type_FNGENERATOR = 2,
		type_ENVELOPE = 3,
		type_CYCLES = 4,
		type_NOISE = 5,
		type_FILTER = 6,
		type_LIMITS = 8,
		type_STEPPED = 9,
	};
	type_enum type(void);
	/* Expanded: F-Curve Modifier's panel is expanded in UI */
	bool show_expanded(void);
	/* Muted: F-Curve Modifier will not be evaluated */
	bool mute(void);
	/* Disabled: F-Curve Modifier has invalid settings and will not be evaluated */
	bool is_valid(void);
	/* Active: F-Curve Modifier is the one being edited  */
	bool active(void);
};

/**************** Generator F-Curve Modifier ****************/

class FModifierGenerator : public FModifier {
public:
	FModifierGenerator(const PointerRNA& ptr) :
		FModifier(ptr)
		{}

	/* Additive: Values generated by this modifier are applied on top of the existing values instead of overwriting them */
	bool use_additive(void);
	/* Mode: Type of generator to use */
	enum mode_enum {
		mode_POLYNOMIAL = 0,
		mode_POLYNOMIAL_FACTORISED = 1,
	};
	mode_enum mode(void);
	/* Polynomial Order: The highest power of 'x' for this polynomial. (number of coefficients - 1) */
	int poly_order(void);
	/* Coefficients: Coefficients for 'x' (starting from lowest power of x^0) */
	Array<float, 32> coefficients(void);
};

/**************** Built-In Function F-Modifier ****************/

class FModifierFunctionGenerator : public FModifier {
public:
	FModifierFunctionGenerator(const PointerRNA& ptr) :
		FModifier(ptr)
		{}

	/* Amplitude: Scale factor determining the maximum/minimum values */
	float amplitude(void);
	/* Phase Multiplier: Scale factor determining the 'speed' of the function */
	float phase_multiplier(void);
	/* Phase Offset: Constant factor to offset time by for function */
	float phase_offset(void);
	/* Value Offset: Constant factor to offset values by */
	float value_offset(void);
	/* Additive: Values generated by this modifier are applied on top of the existing values instead of overwriting them */
	bool use_additive(void);
	/* Type: Type of built-in function to use */
	enum function_type_enum {
		function_type_SIN = 0,
		function_type_COS = 1,
		function_type_TAN = 2,
		function_type_SQRT = 3,
		function_type_LN = 4,
		function_type_SINC = 5,
	};
	function_type_enum function_type(void);
};

/**************** Envelope F-Modifier ****************/

class FModifierEnvelope : public FModifier {
public:
	FModifierEnvelope(const PointerRNA& ptr) :
		FModifier(ptr),
		control_points(ptr)
		{}

	/* Control Points: Control points defining the shape of the envelope */
	COLLECTION_PROPERTY(FModifierEnvelopeControlPoint, FModifierEnvelope, control_points)
	/* Reference Value: Value that envelope's influence is centered around / based on */
	float reference_value(void);
	/* Default Minimum: Lower distance from Reference Value for 1:1 default influence */
	float default_min(void);
	/* Default Maximum: Upper distance from Reference Value for 1:1 default influence */
	float default_max(void);
};

/**************** Envelope Control Point ****************/

class FModifierEnvelopeControlPoint : public Pointer {
public:
	FModifierEnvelopeControlPoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Minimum Value: Lower bound of envelope at this control-point */
	float min(void);
	/* Maximum Value: Upper bound of envelope at this control-point */
	float max(void);
	/* Frame: Frame this control-point occurs on */
	float frame(void);
};

/**************** Cycles F-Modifier ****************/

class FModifierCycles : public FModifier {
public:
	FModifierCycles(const PointerRNA& ptr) :
		FModifier(ptr)
		{}

	/* Before Mode: Cycling mode to use before first keyframe */
	enum mode_before_enum {
		mode_before_NONE = 0,
		mode_before_REPEAT = 1,
		mode_before_REPEAT_OFFSET = 2,
		mode_before_MIRROR = 3,
	};
	mode_before_enum mode_before(void);
	/* Before Cycles: Maximum number of cycles to allow before first keyframe. (0 = infinite) */
	int cycles_before(void);
	/* After Mode: Cycling mode to use after last keyframe */
	enum mode_after_enum {
		mode_after_NONE = 0,
		mode_after_REPEAT = 1,
		mode_after_REPEAT_OFFSET = 2,
		mode_after_MIRROR = 3,
	};
	mode_after_enum mode_after(void);
	/* After Cycles: Maximum number of cycles to allow after last keyframe. (0 = infinite) */
	int cycles_after(void);
};

/**************** Python F-Modifier ****************/

class FModifierPython : public FModifier {
public:
	FModifierPython(const PointerRNA& ptr) :
		FModifier(ptr)
		{}

};

/**************** Limits F-Modifier ****************/

class FModifierLimits : public FModifier {
public:
	FModifierLimits(const PointerRNA& ptr) :
		FModifier(ptr)
		{}

	/* Minimum X: Use the minimum X value */
	bool use_min_x(void);
	/* Minimum Y: Use the minimum Y value */
	bool use_min_y(void);
	/* Maximum X: Use the maximum X value */
	bool use_max_x(void);
	/* Maximum Y: Use the maximum Y value */
	bool use_max_y(void);
	/* Minimum X: Lowest X value to allow */
	float min_x(void);
	/* Minimum Y: Lowest Y value to allow */
	float min_y(void);
	/* Maximum X: Highest X value to allow */
	float max_x(void);
	/* Maximum Y: Highest Y value to allow */
	float max_y(void);
};

/**************** Noise F-Modifier ****************/

class FModifierNoise : public FModifier {
public:
	FModifierNoise(const PointerRNA& ptr) :
		FModifier(ptr)
		{}

	/* Blend Type: Method of modifying the existing F-Curve */
	enum blend_type_enum {
		blend_type_REPLACE = 0,
		blend_type_ADD = 1,
		blend_type_SUBTRACT = 2,
		blend_type_MULTIPLY = 3,
	};
	blend_type_enum blend_type(void);
	/* Scale: Scaling (in time) of the noise */
	float scale(void);
	/* Strength: Amplitude of the noise - the amount that it modifies the underlying curve */
	float strength(void);
	/* Phase: A random seed for the noise effect */
	float phase(void);
	/* Depth: Amount of fine level detail present in the noise */
	int depth(void);
};

/**************** Stepped Interpolation F-Modifier ****************/

class FModifierStepped : public FModifier {
public:
	FModifierStepped(const PointerRNA& ptr) :
		FModifier(ptr)
		{}

	/* Step Size: Number of frames to hold each value */
	float frame_step(void);
	/* Offset: Reference number of frames before frames get held. Use to get hold for '1-3' vs '5-7' holding patterns */
	float frame_offset(void);
	/* Use Start Frame: Restrict modifier to only act after its 'start' frame */
	bool use_frame_start(void);
	/* Use End Frame: Restrict modifier to only act before its 'end' frame */
	bool use_frame_end(void);
	/* Start Frame: Frame that modifier's influence starts (if applicable) */
	float frame_start(void);
	/* End Frame: Frame that modifier's influence ends (if applicable) */
	float frame_end(void);
};

/**************** Fluid Simulation Settings ****************/

class FluidSettings : public Pointer {
public:
	FluidSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Type: Type of participation in the fluid simulation */
	enum type_enum {
		type_NONE = 1,
		type_DOMAIN = 2,
		type_FLUID = 4,
		type_OBSTACLE = 8,
		type_INFLOW = 16,
		type_OUTFLOW = 32,
		type_PARTICLE = 64,
		type_CONTROL = 128,
	};
	type_enum type(void);
};

/**************** Domain Fluid Simulation Settings ****************/

class DomainFluidSettings : public FluidSettings {
public:
	DomainFluidSettings(const PointerRNA& ptr) :
		FluidSettings(ptr)
		{}

	/* Resolution: Domain resolution in X,Y and Z direction */
	int resolution(void);
	/* Preview Resolution: Preview resolution in X,Y and Z direction */
	int preview_resolution(void);
	/* Viewport Display Mode: How to display the mesh in the viewport */
	enum viewport_display_mode_enum {
		viewport_display_mode_GEOMETRY = 1,
		viewport_display_mode_PREVIEW = 2,
		viewport_display_mode_FINAL = 3,
	};
	viewport_display_mode_enum viewport_display_mode(void);
	/* Render Display Mode: How to display the mesh for rendering */
	enum render_display_mode_enum {
		render_display_mode_GEOMETRY = 1,
		render_display_mode_PREVIEW = 2,
		render_display_mode_FINAL = 3,
	};
	render_display_mode_enum render_display_mode(void);
	/* Reverse Frames: Reverse fluid frames */
	bool use_reverse_frames(void);
	/* Path: Directory (and/or filename prefix) to store baked fluid simulation files in */
	std::string filepath(void);
	/* Memory Estimate: Estimated amount of memory needed for baking the domain */
	std::string memory_estimate(void);
	/* Gravity: Gravity in X, Y and Z direction */
	Array<float, 3> gravity(void);
	/* Override Time: Use a custom start and end time (in seconds) instead of the scene's timeline */
	bool use_time_override(void);
	/* Start Time: Simulation time of the first blender frame (in seconds) */
	float start_time(void);
	/* End Time: Simulation time of the last blender frame (in seconds) */
	float end_time(void);
	/* Real World Size: Size of the simulation domain in metres */
	float simulation_scale(void);
	/* Viscosity Preset: Set viscosity of the fluid to a preset value, or use manual input */
	enum viscosity_preset_enum {
		viscosity_preset_MANUAL = 1,
		viscosity_preset_WATER = 2,
		viscosity_preset_OIL = 3,
		viscosity_preset_HONEY = 4,
	};
	viscosity_preset_enum viscosity_preset(void);
	/* Viscosity Base: Viscosity setting: value that is multiplied by 10 to the power of (exponent*-1) */
	float viscosity_base(void);
	/* Viscosity Exponent: Negative exponent for the viscosity value (to simplify entering small values e.g. 5*10^-6.) */
	int viscosity_exponent(void);
	/* Grid Levels: Number of coarsened grids to use (-1 for automatic) */
	int grid_levels(void);
	/* Compressibility: Allowed compressibility due to gravitational force for standing fluid. (directly affects simulation step size) */
	float compressibility(void);
	/* Slip Type */
	enum slip_type_enum {
		slip_type_NOSLIP = 512,
		slip_type_PARTIALSLIP = 1024,
		slip_type_FREESLIP = 2048,
	};
	slip_type_enum slip_type(void);
	/* Partial Slip Amount: Amount of mixing between no- and free-slip, 0 is no slip and 1 is free slip */
	float partial_slip_factor(void);
	/* Surface Smoothing: Amount of surface smoothing. A value of 0 is off, 1 is normal smoothing and more than 1 is extra smoothing */
	float surface_smooth(void);
	/* Surface Subdivisions: Number of isosurface subdivisions. This is necessary for the inclusion of particles into the surface generation. Warning - can lead to longer computation times! */
	int surface_subdivisions(void);
	/* Generate Speed Vectors: Generate speed vectors for vector blur */
	bool use_speed_vectors(void);
	/* Tracer Particles: Number of tracer particles to generate */
	int tracer_particles(void);
	/* Generate Particles: Amount of particles to generate (0=off, 1=normal, >1=more) */
	float generate_particles(void);
};

/**************** Fluid Fluid Simulation Settings ****************/

class FluidFluidSettings : public FluidSettings {
public:
	FluidFluidSettings(const PointerRNA& ptr) :
		FluidSettings(ptr)
		{}

	/* Enabled: Object contributes to the fluid simulation */
	bool use(void);
	/* Volume Initialization: Volume initialization type */
	enum volume_initialization_enum {
		volume_initialization_VOLUME = 1,
		volume_initialization_SHELL = 2,
		volume_initialization_BOTH = 3,
	};
	volume_initialization_enum volume_initialization(void);
	/* Export Animated Mesh: Export this mesh as an animated one. Slower, only use if really necessary (e.g. armatures or parented objects), animated pos/rot/scale IPOs do not require it */
	bool use_animated_mesh(void);
	/* Initial Velocity: Initial velocity of fluid */
	Array<float, 3> initial_velocity(void);
};

/**************** Obstacle Fluid Simulation Settings ****************/

class ObstacleFluidSettings : public FluidSettings {
public:
	ObstacleFluidSettings(const PointerRNA& ptr) :
		FluidSettings(ptr)
		{}

	/* Enabled: Object contributes to the fluid simulation */
	bool use(void);
	/* Volume Initialization: Volume initialization type */
	enum volume_initialization_enum {
		volume_initialization_VOLUME = 1,
		volume_initialization_SHELL = 2,
		volume_initialization_BOTH = 3,
	};
	volume_initialization_enum volume_initialization(void);
	/* Export Animated Mesh: Export this mesh as an animated one. Slower, only use if really necessary (e.g. armatures or parented objects), animated pos/rot/scale IPOs do not require it */
	bool use_animated_mesh(void);
	/* Slip Type */
	enum slip_type_enum {
		slip_type_NOSLIP = 512,
		slip_type_PARTIALSLIP = 1024,
		slip_type_FREESLIP = 2048,
	};
	slip_type_enum slip_type(void);
	/* Partial Slip Amount: Amount of mixing between no- and free-slip, 0 is no slip and 1 is free slip */
	float partial_slip_factor(void);
	/* Impact Factor: This is an unphysical value for moving objects - it controls the impact an obstacle has on the fluid, =0 behaves a bit like outflow (deleting fluid), =1 is default, while >1 results in high forces. Can be used to tweak total mass */
	float impact_factor(void);
};

/**************** Inflow Fluid Simulation Settings ****************/

class InflowFluidSettings : public FluidSettings {
public:
	InflowFluidSettings(const PointerRNA& ptr) :
		FluidSettings(ptr)
		{}

	/* Enabled: Object contributes to the fluid simulation */
	bool use(void);
	/* Volume Initialization: Volume initialization type */
	enum volume_initialization_enum {
		volume_initialization_VOLUME = 1,
		volume_initialization_SHELL = 2,
		volume_initialization_BOTH = 3,
	};
	volume_initialization_enum volume_initialization(void);
	/* Export Animated Mesh: Export this mesh as an animated one. Slower, only use if really necessary (e.g. armatures or parented objects), animated pos/rot/scale IPOs do not require it */
	bool use_animated_mesh(void);
	/* Inflow Velocity: Initial velocity of fluid */
	Array<float, 3> inflow_velocity(void);
	/* Local Coordinates: Use local coordinates for inflow. (e.g. for rotating objects) */
	bool use_local_coords(void);
};

/**************** Outflow Fluid Simulation Settings ****************/

class OutflowFluidSettings : public FluidSettings {
public:
	OutflowFluidSettings(const PointerRNA& ptr) :
		FluidSettings(ptr)
		{}

	/* Enabled: Object contributes to the fluid simulation */
	bool use(void);
	/* Volume Initialization: Volume initialization type */
	enum volume_initialization_enum {
		volume_initialization_VOLUME = 1,
		volume_initialization_SHELL = 2,
		volume_initialization_BOTH = 3,
	};
	volume_initialization_enum volume_initialization(void);
	/* Export Animated Mesh: Export this mesh as an animated one. Slower, only use if really necessary (e.g. armatures or parented objects), animated pos/rot/scale IPOs do not require it */
	bool use_animated_mesh(void);
};

/**************** Particle Fluid Simulation Settings ****************/

class ParticleFluidSettings : public FluidSettings {
public:
	ParticleFluidSettings(const PointerRNA& ptr) :
		FluidSettings(ptr)
		{}

	/* Drops: Show drop particles */
	bool use_drops(void);
	/* Floats: Show floating foam particles */
	bool use_floats(void);
	/* Tracer: Show tracer particles */
	bool show_tracer(void);
	/* Particle Influence: Amount of particle size scaling: 0=off (all same size), 1=full (range 0.2-2.0), >1=stronger */
	float particle_influence(void);
	/* Alpha Influence: Amount of particle alpha change, inverse of size influence: 0=off (all same alpha), 1=full. (large particles get lower alphas, smaller ones higher values) */
	float alpha_influence(void);
	/* Path: Directory (and/or filename prefix) to store and load particles from */
	std::string filepath(void);
};

/**************** Control Fluid Simulation Settings ****************/

class ControlFluidSettings : public FluidSettings {
public:
	ControlFluidSettings(const PointerRNA& ptr) :
		FluidSettings(ptr)
		{}

	/* Enabled: Object contributes to the fluid simulation */
	bool use(void);
	/* Start Time: Specifies time when the control particles are activated */
	float start_time(void);
	/* End Time: Specifies time when the control particles are deactivated */
	float end_time(void);
	/* Attraction Strength: Force strength for directional attraction towards the control object */
	float attraction_strength(void);
	/* Attraction Radius: Specifies the force field radius around the control object */
	float attraction_radius(void);
	/* Velocity Strength: Force strength of how much of the control object's velocity is influencing the fluid velocity */
	float velocity_strength(void);
	/* Velocity Radius: Specifies the force field radius around the control object */
	float velocity_radius(void);
	/* Quality: Specifies the quality which is used for object sampling. (higher = better but slower) */
	float quality(void);
	/* Reverse Frames: Reverse control object movement */
	bool use_reverse_frames(void);
};

/**************** Grease Pencil ****************/

class GreasePencil : public ID {
public:
	GreasePencil(const PointerRNA& ptr) :
		ID(ptr),
		layers(ptr)
		{}

	/* Layers */
	COLLECTION_PROPERTY(GPencilLayer, GreasePencil, layers)
	/* Draw Mode */
	enum draw_mode_enum {
		draw_mode_CURSOR = 16,
		draw_mode_VIEW = 0,
		draw_mode_SURFACE = 48,
		draw_mode_STROKE = 80,
	};
	draw_mode_enum draw_mode(void);
	/* Only Endpoints: Only use the first and last parts of the stroke for snapping */
	bool use_stroke_endpoints(void);
};

/**************** Grease Pencil Layer ****************/

class GPencilLayer : public Pointer {
public:
	GPencilLayer(const PointerRNA& ptr) :
		Pointer(ptr),
		frames(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Info: Layer name */
	std::string info(void);
	/* Frames: Sketches for this layer on different frames */
	COLLECTION_PROPERTY(GPencilFrame, GPencilLayer, frames)
	/* Active Frame: Frame currently being displayed for this layer */
	GPencilFrame active_frame(void);
	/* Color: Color for all strokes in this layer */
	Array<float, 3> color(void);
	/* Opacity: Layer Opacity */
	float alpha(void);
	/* Thickness: Thickness of strokes (in pixels) */
	int line_width(void);
	/* Use Onion Skinning: Ghost frames on either side of frame */
	bool use_onion_skinning(void);
	/* Max Ghost Range: Maximum number of frames on either side of the active frame to show (0 = show the 'first' available sketch on either side) */
	int ghost_range_max(void);
	/* Hide: Set layer Visibility */
	bool hide(void);
	/* Locked: Protect layer from further editing and/or frame changes */
	bool lock(void);
	/* Frame Locked: Lock current frame displayed by layer */
	bool lock_frame(void);
	/* Active: Set active layer for editing */
	bool active(void);
	/* Select: Layer is selected for editing in the DopeSheet */
	bool select(void);
	/* Show Points: Draw the points which make up the strokes (for debugging purposes) */
	bool show_points(void);
};

/**************** Grease Pencil Frame ****************/

class GPencilFrame : public Pointer {
public:
	GPencilFrame(const PointerRNA& ptr) :
		Pointer(ptr),
		strokes(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Strokes: Freehand curves defining the sketch on this frame */
	COLLECTION_PROPERTY(GPencilStroke, GPencilFrame, strokes)
	/* Frame Number: The frame on which this sketch appears */
	int frame_number(void);
	/* Paint Lock: Frame is being edited (painted on) */
	bool is_edited(void);
	/* Select: Frame is selected for editing in the DopeSheet */
	bool select(void);
};

/**************** Grease Pencil Stroke ****************/

class GPencilStroke : public Pointer {
public:
	GPencilStroke(const PointerRNA& ptr) :
		Pointer(ptr),
		points(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Stroke Points: Stroke data points */
	COLLECTION_PROPERTY(GPencilStrokePoint, GPencilStroke, points)
};

/**************** Grease Pencil Stroke Point ****************/

class GPencilStrokePoint : public Pointer {
public:
	GPencilStrokePoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Coordinates */
	Array<float, 3> co(void);
	/* Pressure: Pressure of tablet at point when drawing it */
	float pressure(void);
};

/**************** Group ****************/

class Group : public ID {
public:
	Group(const PointerRNA& ptr) :
		ID(ptr),
		objects(ptr)
		{}

	/* Dupli Offset: Offset from the origin to use when instancing as DupliGroup */
	Array<float, 3> dupli_offset(void);
	/* Dupli Layers: Layers visible when this groups is instanced as a dupli */
	Array<int, 20> layers(void);
	/* Objects: A collection of this groups objects */
	COLLECTION_PROPERTY(Object, Group, objects)
};

/**************** Group Objects ****************/

class GroupObjects : public Pointer {
public:
	GroupObjects(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Image ****************/

class Image : public ID {
public:
	Image(const PointerRNA& ptr) :
		ID(ptr)
		{}

	/* File Name: Image/Movie file name */
	std::string filepath(void);
	/* File Name: Image/Movie file name (without data refreshing) */
	std::string filepath_raw(void);
	/* File Format: Format used for re-saving this file */
	enum file_format_enum {
		file_format_BMP = 20,
		file_format_IRIS = 1,
		file_format_PNG = 17,
		file_format_JPEG = 4,
		file_format_JPEG2000 = 30,
		file_format_TARGA = 0,
		file_format_TARGA_RAW = 14,
		file_format_CINEON = 26,
		file_format_DPX = 27,
		file_format_HDR = 21,
		file_format_AVI_JPEG = 16,
		file_format_AVI_RAW = 15,
		file_format_FRAMESERVER = 25,
	};
	file_format_enum file_format(void);
	/* Source: Where the image comes from */
	enum source_enum {
		source_FILE = 1,
		source_SEQUENCE = 2,
		source_MOVIE = 3,
		source_GENERATED = 4,
		source_VIEWER = 5,
	};
	source_enum source(void);
	/* Type: How to generate the image */
	enum type_enum {
		type_IMAGE = 0,
		type_MULTILAYER = 1,
		type_UV_TEST = 2,
		type_RENDER_RESULT = 4,
		type_COMPOSITING = 5,
	};
	type_enum type(void);
	/* Packed File */
	PackedFile packed_file(void);
	/* Field Order: Order of video fields. Select which lines are displayed first */
	enum field_order_enum {
		field_order_EVEN = 0,
		field_order_ODD = 2,
	};
	field_order_enum field_order(void);
	/* Fields: Use fields of the image */
	bool use_fields(void);
	/* Premultiply: Convert RGB from key alpha to premultiplied alpha */
	bool use_premultiply(void);
	/* Dirty: Image has changed and is not saved */
	bool is_dirty(void);
	/* Generated Type: Generated image type */
	enum generated_type_enum {
		generated_type_BLANK = 0,
		generated_type_UV_GRID = 1,
		generated_type_COLOR_GRID = 2,
	};
	generated_type_enum generated_type(void);
	/* Generated Width: Generated image width */
	int generated_width(void);
	/* Generated Height: Generated image height */
	int generated_height(void);
	/* Mapping: Mapping type to use for this image in the game engine */
	enum mapping_enum {
		mapping_UV = 0,
		mapping_REFLECTION = 16,
	};
	mapping_enum mapping(void);
	/* Display Aspect: Display Aspect for this image, does not affect rendering */
	Array<float, 2> display_aspect(void);
	/* Animated: Use as animated texture in the game engine */
	bool use_animation(void);
	/* Animation Start: Start frame of an animated texture */
	int frame_start(void);
	/* Animation End: End frame of an animated texture */
	int frame_end(void);
	/* Animation Speed: Speed of the animation in frames per second */
	int fps(void);
	/* Tiles: Use of tilemode for faces (default shift-LMB to pick the tile for selected faces) */
	bool use_tiles(void);
	/* Tiles X: Degree of repetition in the X direction */
	int tiles_x(void);
	/* Tiles Y: Degree of repetition in the Y direction */
	int tiles_y(void);
	/* Clamp X: Disable texture repeating horizontally */
	bool use_clamp_x(void);
	/* Clamp Y: Disable texture repeating vertically */
	bool use_clamp_y(void);
	/* Bindcode: OpenGL bindcode */
	int bindcode(void);
	/* Has data: True if this image has data */
	bool has_data(void);
	/* Depth: Image bit depth */
	int depth(void);
	/* Size: Width and height in pixels, zero when image data cant be loaded */
	Array<int, 2> size(void);
};

/**************** Image User ****************/

class ImageUser : public Pointer {
public:
	ImageUser(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Auto Refresh: Always refresh image on frame changes */
	bool use_auto_refresh(void);
	/* Cyclic: Cycle the images in the movie */
	bool use_cyclic(void);
	/* Frames: Sets the number of images of a movie to use */
	int frame_duration(void);
	/* Offset: Offsets the number of the frame to use in the animation */
	int frame_offset(void);
	/* Start Frame: Sets the global starting frame of the movie/sequence, assuming first picture has a #1 */
	int frame_start(void);
	/* Fields per Frame: The number of fields per rendered frame (2 fields is 1 image) */
	int fields_per_frame(void);
	/* Layer: Layer in multilayer image */
	int multilayer_layer(void);
	/* Pass: Pass in multilayer image */
	int multilayer_pass(void);
};

/**************** Key ****************/

class Key : public ID {
public:
	Key(const PointerRNA& ptr) :
		ID(ptr),
		keys(ptr)
		{}

	/* Reference Key */
	ShapeKey reference_key(void);
	/* Keys: Shape keys */
	COLLECTION_PROPERTY(ShapeKey, Key, keys)
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* User: Datablock using these shape keys */
	ID user(void);
	/* Relative: Makes shape keys relative */
	bool use_relative(void);
	/* Slurph: Creates a delay in amount of frames in applying keypositions, first vertex goes first */
	int slurph(void);
};

/**************** Shape Key ****************/

class ShapeKey : public Pointer {
public:
	ShapeKey(const PointerRNA& ptr) :
		Pointer(ptr),
		data(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Frame: Frame for absolute keys */
	float frame(void);
	/* Value: Value of shape key at the current frame */
	float value(void);
	/* Interpolation: Interpolation type */
	enum interpolation_enum {
		interpolation_KEY_LINEAR = 0,
		interpolation_KEY_CARDINAL = 1,
		interpolation_KEY_BSPLINE = 2,
	};
	interpolation_enum interpolation(void);
	/* Vertex Group: Vertex weight group, to blend with basis shape */
	std::string vertex_group(void);
	/* Relative Key: Shape used as a relative key */
	ShapeKey relative_key(void);
	/* Mute: Mute this shape key */
	bool mute(void);
	/* Slider Min: Minimum for slider */
	float slider_min(void);
	/* Slider Max: Maximum for slider */
	float slider_max(void);
	/* Data */
	COLLECTION_PROPERTY(UnknownType, ShapeKey, data)
};

/**************** Shape Key Point ****************/

class ShapeKeyPoint : public Pointer {
public:
	ShapeKeyPoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location */
	Array<float, 3> co(void);
};

/**************** Shape Key Curve Point ****************/

class ShapeKeyCurvePoint : public Pointer {
public:
	ShapeKeyCurvePoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location */
	Array<float, 3> co(void);
	/* Tilt */
	float tilt(void);
};

/**************** Shape Key Bezier Point ****************/

class ShapeKeyBezierPoint : public Pointer {
public:
	ShapeKeyBezierPoint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location */
	Array<float, 3> co(void);
	/* Handle 1 Location */
	Array<float, 3> handle_left(void);
	/* Handle 2 Location */
	Array<float, 3> handle_right(void);
};

/**************** Lamp ****************/

class Lamp : public ID {
public:
	Lamp(const PointerRNA& ptr) :
		ID(ptr),
		texture_slots(ptr)
		{}

	/* Type: Type of Lamp */
	enum type_enum {
		type_POINT = 0,
		type_SUN = 1,
		type_SPOT = 2,
		type_HEMI = 3,
		type_AREA = 4,
	};
	type_enum type(void);
	/* Distance: Falloff distance - the light is at half the original intensity at this point */
	float distance(void);
	/* Energy: Amount of light that the lamp emits */
	float energy(void);
	/* Color: Light color */
	Array<float, 3> color(void);
	/* Layer: Illuminates objects only on the same layer the lamp is on */
	bool use_own_layer(void);
	/* Negative: Lamp casts negative light */
	bool use_negative(void);
	/* Specular: Lamp creates specular highlights */
	bool use_specular(void);
	/* Diffuse: Lamp does diffuse shading */
	bool use_diffuse(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Textures: Texture slots defining the mapping and influence of textures */
	COLLECTION_PROPERTY(LampTextureSlot, Lamp, texture_slots)
	/* Active Texture: Active texture slot being displayed */
	Texture active_texture(void);
	/* Active Texture Index: Index of active texture slot */
	int active_texture_index(void);
};

/**************** Texture Slots ****************/

class LampTextureSlots : public Pointer {
public:
	LampTextureSlots(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Point Lamp ****************/

class PointLamp : public Lamp {
public:
	PointLamp(const PointerRNA& ptr) :
		Lamp(ptr)
		{}

	/* Falloff Type: Intensity Decay with distance */
	enum falloff_type_enum {
		falloff_type_CONSTANT = 0,
		falloff_type_INVERSE_LINEAR = 1,
		falloff_type_INVERSE_SQUARE = 2,
		falloff_type_CUSTOM_CURVE = 3,
		falloff_type_LINEAR_QUADRATIC_WEIGHTED = 4,
	};
	falloff_type_enum falloff_type(void);
	/* Falloff Curve: Custom Lamp Falloff Curve */
	CurveMapping falloff_curve(void);
	/* Sphere: Sets light intensity to zero beyond lamp distance */
	bool use_sphere(void);
	/* Linear Attenuation: Linear distance attenuation */
	float linear_attenuation(void);
	/* Quadratic Attenuation: Quadratic distance attenuation */
	float quadratic_attenuation(void);
	/* Shadow Method: Method to compute lamp shadow with */
	enum shadow_method_enum {
		shadow_method_NOSHADOW = 0,
		shadow_method_RAY_SHADOW = 8192,
	};
	shadow_method_enum shadow_method(void);
	/* Shadow Color: Color of shadows cast by the lamp */
	Array<float, 3> shadow_color(void);
	/* Only Shadow: Causes light to cast shadows only without illuminating objects */
	bool use_only_shadow(void);
	/* Shadow Ray Sampling Method: Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower */
	enum shadow_ray_sample_method_enum {
		shadow_ray_sample_method_ADAPTIVE_QMC = 1,
		shadow_ray_sample_method_CONSTANT_QMC = 2,
	};
	shadow_ray_sample_method_enum shadow_ray_sample_method(void);
	/* Shadow Ray Samples X: Amount of samples taken extra (samples x samples) */
	int shadow_ray_samples(void);
	/* Shadow Adaptive Threshold: Threshold for Adaptive Sampling (Raytraced shadows) */
	float shadow_adaptive_threshold(void);
	/* Shadow Soft Size: Light size for ray shadow sampling (Raytraced shadows) */
	float shadow_soft_size(void);
	/* Shadow Layer: Causes only objects on the same layer to cast shadows */
	bool use_shadow_layer(void);
};

/**************** Area Lamp ****************/

class AreaLamp : public Lamp {
public:
	AreaLamp(const PointerRNA& ptr) :
		Lamp(ptr)
		{}

	/* Shadow Method: Method to compute lamp shadow with */
	enum shadow_method_enum {
		shadow_method_NOSHADOW = 0,
		shadow_method_RAY_SHADOW = 8192,
	};
	shadow_method_enum shadow_method(void);
	/* Shadow Color: Color of shadows cast by the lamp */
	Array<float, 3> shadow_color(void);
	/* Only Shadow: Causes light to cast shadows only without illuminating objects */
	bool use_only_shadow(void);
	/* Shadow Ray Sampling Method: Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower */
	enum shadow_ray_sample_method_enum {
		shadow_ray_sample_method_ADAPTIVE_QMC = 1,
		shadow_ray_sample_method_CONSTANT_QMC = 2,
		shadow_ray_sample_method_CONSTANT_JITTERED = 0,
	};
	shadow_ray_sample_method_enum shadow_ray_sample_method(void);
	/* Shadow Ray Samples: Amount of samples taken extra (samples x samples) */
	int shadow_ray_samples_x(void);
	/* Shadow Ray Samples Y: Amount of samples taken extra (samples x samples) */
	int shadow_ray_samples_y(void);
	/* Shadow Adaptive Threshold: Threshold for Adaptive Sampling (Raytraced shadows) */
	float shadow_adaptive_threshold(void);
	/* Shadow Soft Size: Light size for ray shadow sampling (Raytraced shadows) */
	float shadow_soft_size(void);
	/* Shadow Layer: Causes only objects on the same layer to cast shadows */
	bool use_shadow_layer(void);
	/* Umbra: Emphasize parts that are fully shadowed (Constant Jittered sampling) */
	bool use_umbra(void);
	/* Dither: Use 2x2 dithering for sampling  (Constant Jittered sampling) */
	bool use_dither(void);
	/* Jitter: Use noise for sampling  (Constant Jittered sampling) */
	bool use_jitter(void);
	/* Shape: Shape of the area lamp */
	enum shape_enum {
		shape_SQUARE = 0,
		shape_RECTANGLE = 1,
	};
	shape_enum shape(void);
	/* Size: Size of the area of the area Lamp, X direction size for Rectangle shapes */
	float size(void);
	/* Size Y: Size of the area of the area Lamp in the Y direction for Rectangle shapes */
	float size_y(void);
	/* Gamma: Light gamma correction value */
	float gamma(void);
};

/**************** Spot Lamp ****************/

class SpotLamp : public Lamp {
public:
	SpotLamp(const PointerRNA& ptr) :
		Lamp(ptr)
		{}

	/* Falloff Type: Intensity Decay with distance */
	enum falloff_type_enum {
		falloff_type_CONSTANT = 0,
		falloff_type_INVERSE_LINEAR = 1,
		falloff_type_INVERSE_SQUARE = 2,
		falloff_type_CUSTOM_CURVE = 3,
		falloff_type_LINEAR_QUADRATIC_WEIGHTED = 4,
	};
	falloff_type_enum falloff_type(void);
	/* Falloff Curve: Custom Lamp Falloff Curve */
	CurveMapping falloff_curve(void);
	/* Sphere: Sets light intensity to zero beyond lamp distance */
	bool use_sphere(void);
	/* Linear Attenuation: Linear distance attenuation */
	float linear_attenuation(void);
	/* Quadratic Attenuation: Quadratic distance attenuation */
	float quadratic_attenuation(void);
	/* Shadow Method: Method to compute lamp shadow with */
	enum shadow_method_enum {
		shadow_method_NOSHADOW = 0,
		shadow_method_BUFFER_SHADOW = 1,
		shadow_method_RAY_SHADOW = 8192,
	};
	shadow_method_enum shadow_method(void);
	/* Shadow Color: Color of shadows cast by the lamp */
	Array<float, 3> shadow_color(void);
	/* Only Shadow: Causes light to cast shadows only without illuminating objects */
	bool use_only_shadow(void);
	/* Shadow Ray Sampling Method: Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower */
	enum shadow_ray_sample_method_enum {
		shadow_ray_sample_method_ADAPTIVE_QMC = 1,
		shadow_ray_sample_method_CONSTANT_QMC = 2,
	};
	shadow_ray_sample_method_enum shadow_ray_sample_method(void);
	/* Shadow Ray Samples X: Amount of samples taken extra (samples x samples) */
	int shadow_ray_samples(void);
	/* Shadow Adaptive Threshold: Threshold for Adaptive Sampling (Raytraced shadows) */
	float shadow_adaptive_threshold(void);
	/* Shadow Soft Size: Light size for ray shadow sampling (Raytraced shadows) */
	float shadow_soft_size(void);
	/* Shadow Layer: Causes only objects on the same layer to cast shadows */
	bool use_shadow_layer(void);
	/* Square: Casts a square spot light shape */
	bool use_square(void);
	/* Halo: Renders spotlight with a volumetric halo (Buffer Shadows) */
	bool use_halo(void);
	/* Halo Intensity: Brightness of the spotlight's halo cone  (Buffer Shadows) */
	float halo_intensity(void);
	/* Halo Step: Volumetric halo sampling frequency */
	int halo_step(void);
	/* Shadow Buffer Size: Resolution of the shadow buffer, higher values give crisper shadows but use more memory */
	int shadow_buffer_size(void);
	/* Shadow Filter Type: Type of shadow filter (Buffer Shadows) */
	enum shadow_filter_type_enum {
		shadow_filter_type_BOX = 0,
		shadow_filter_type_TENT = 1,
		shadow_filter_type_GAUSS = 2,
	};
	shadow_filter_type_enum shadow_filter_type(void);
	/* Shadow Sample Buffers: Number of shadow buffers to render for better AA, this increases memory usage */
	enum shadow_sample_buffers_enum {
		shadow_sample_buffers_BUFFERS_1 = 1,
		shadow_sample_buffers_BUFFERS_4 = 4,
		shadow_sample_buffers_BUFFERS_9 = 9,
	};
	shadow_sample_buffers_enum shadow_sample_buffers(void);
	/* Spot Blend: The softness of the spotlight edge */
	float spot_blend(void);
	/* Spot Size: Angle of the spotlight beam in degrees */
	float spot_size(void);
	/* Show Cone: Draw transparent cone in 3D view to visualize which objects are contained in it */
	bool show_cone(void);
	/* Shadow Buffer Clip Start: Shadow map clip start: objects closer will not generate shadows */
	float shadow_buffer_clip_start(void);
	/* Shadow Buffer Clip End: Shadow map clip end beyond which objects will not generate shadows */
	float shadow_buffer_clip_end(void);
	/* Shadow Buffer Bias: Shadow buffer sampling bias */
	float shadow_buffer_bias(void);
	/* Shadow Buffer Soft: Size of shadow buffer sampling area */
	float shadow_buffer_soft(void);
	/* Samples: Number of shadow buffer samples */
	int shadow_buffer_samples(void);
	/* Shadow Buffer Type: Type of shadow buffer */
	enum shadow_buffer_type_enum {
		shadow_buffer_type_REGULAR = 0,
		shadow_buffer_type_HALFWAY = 2,
		shadow_buffer_type_IRREGULAR = 1,
		shadow_buffer_type_DEEP = 3,
	};
	shadow_buffer_type_enum shadow_buffer_type(void);
	/* Autoclip Start: Automatic calculation of clipping-start, based on visible vertices */
	bool use_auto_clip_start(void);
	/* Autoclip End: Automatic calculation of clipping-end, based on visible vertices */
	bool use_auto_clip_end(void);
	/* Compress: Deep shadow map compression threshold */
	float compression_threshold(void);
};

/**************** Sun Lamp ****************/

class SunLamp : public Lamp {
public:
	SunLamp(const PointerRNA& ptr) :
		Lamp(ptr)
		{}

	/* Shadow Method: Method to compute lamp shadow with */
	enum shadow_method_enum {
		shadow_method_NOSHADOW = 0,
		shadow_method_RAY_SHADOW = 8192,
	};
	shadow_method_enum shadow_method(void);
	/* Shadow Color: Color of shadows cast by the lamp */
	Array<float, 3> shadow_color(void);
	/* Only Shadow: Causes light to cast shadows only without illuminating objects */
	bool use_only_shadow(void);
	/* Shadow Ray Sampling Method: Method for generating shadow samples: Adaptive QMC is fastest, Constant QMC is less noisy but slower */
	enum shadow_ray_sample_method_enum {
		shadow_ray_sample_method_ADAPTIVE_QMC = 1,
		shadow_ray_sample_method_CONSTANT_QMC = 2,
	};
	shadow_ray_sample_method_enum shadow_ray_sample_method(void);
	/* Shadow Ray Samples X: Amount of samples taken extra (samples x samples) */
	int shadow_ray_samples(void);
	/* Shadow Adaptive Threshold: Threshold for Adaptive Sampling (Raytraced shadows) */
	float shadow_adaptive_threshold(void);
	/* Shadow Soft Size: Light size for ray shadow sampling (Raytraced shadows) */
	float shadow_soft_size(void);
	/* Shadow Layer: Causes only objects on the same layer to cast shadows */
	bool use_shadow_layer(void);
	/* Sky Settings: Sky related settings for sun lamps */
	LampSkySettings sky(void);
};

/**************** Lamp Sky Settings ****************/

class LampSkySettings : public Pointer {
public:
	LampSkySettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Sky Color Space: Color space to use for internal XYZ->RGB color conversion */
	enum sky_color_space_enum {
		sky_color_space_SMPTE = 0,
		sky_color_space_REC709 = 1,
		sky_color_space_CIE = 2,
	};
	sky_color_space_enum sky_color_space(void);
	/* Sky Blend Mode: Blend mode for combining sun sky with world sky */
	enum sky_blend_type_enum {
		sky_blend_type_MIX = 0,
		sky_blend_type_ADD = 1,
		sky_blend_type_MULTIPLY = 2,
		sky_blend_type_SUBTRACT = 3,
		sky_blend_type_SCREEN = 4,
		sky_blend_type_DIVIDE = 5,
		sky_blend_type_DIFFERENCE = 6,
		sky_blend_type_DARKEN = 7,
		sky_blend_type_LIGHTEN = 8,
		sky_blend_type_OVERLAY = 9,
		sky_blend_type_DODGE = 10,
		sky_blend_type_BURN = 11,
		sky_blend_type_HUE = 12,
		sky_blend_type_SATURATION = 13,
		sky_blend_type_VALUE = 14,
		sky_blend_type_COLOR = 15,
	};
	sky_blend_type_enum sky_blend_type(void);
	/* Horizon Brightness: Horizon brightness */
	float horizon_brightness(void);
	/* Horizon Spread: Horizon Spread */
	float spread(void);
	/* Sun Brightness: Sun brightness */
	float sun_brightness(void);
	/* Sun Size: Sun size */
	float sun_size(void);
	/* Backscattered Light: Backscattered light */
	float backscattered_light(void);
	/* Sun Intensity: Sun intensity */
	float sun_intensity(void);
	/* Atmosphere Turbidity: Sky turbidity */
	float atmosphere_turbidity(void);
	/* Atmosphere Inscatter: Scatter contribution factor */
	float atmosphere_inscattering(void);
	/* Atmosphere Extinction: Extinction scattering contribution factor */
	float atmosphere_extinction(void);
	/* Atmosphere Distance Factor: Multiplier to convert blender units to physical distance */
	float atmosphere_distance_factor(void);
	/* Sky Blend: Blend factor with sky */
	float sky_blend(void);
	/* Sky Exposure: Strength of sky shading exponential exposure correction */
	float sky_exposure(void);
	/* Sky: Apply sun effect on sky */
	bool use_sky(void);
	/* Atmosphere: Apply sun effect on atmosphere */
	bool use_atmosphere(void);
};

/**************** Hemi Lamp ****************/

class HemiLamp : public Lamp {
public:
	HemiLamp(const PointerRNA& ptr) :
		Lamp(ptr)
		{}

};

/**************** Lamp Texture Slot ****************/

class LampTextureSlot : public TextureSlot {
public:
	LampTextureSlot(const PointerRNA& ptr) :
		TextureSlot(ptr)
		{}

	/* Texture Coordinates */
	enum texture_coords_enum {
		texture_coords_GLOBAL = 8,
		texture_coords_VIEW = 128,
		texture_coords_OBJECT = 32,
	};
	texture_coords_enum texture_coords(void);
	/* Object: Object to use for mapping with Object texture coordinates */
	Object object(void);
	/* Color: Lets the texture affect the basic color of the lamp */
	bool use_map_color(void);
	/* Shadow: Lets the texture affect the shadow color of the lamp */
	bool use_map_shadow(void);
	/* Color Factor: Amount texture affects color values */
	float color_factor(void);
	/* Shadow Factor: Amount texture affects shadow */
	float shadow_factor(void);
};

/**************** Lattice ****************/

class Lattice : public ID {
public:
	Lattice(const PointerRNA& ptr) :
		ID(ptr),
		points(ptr)
		{}

	/* U: Points in U direction (can't be changed when there are shape keys) */
	int points_u(void);
	/* V: Points in V direction (can't be changed when there are shape keys) */
	int points_v(void);
	/* W: Points in W direction (can't be changed when there are shape keys) */
	int points_w(void);
	/* Interpolation Type U */
	enum interpolation_type_u_enum {
		interpolation_type_u_KEY_LINEAR = 0,
		interpolation_type_u_KEY_CARDINAL = 1,
		interpolation_type_u_KEY_BSPLINE = 2,
	};
	interpolation_type_u_enum interpolation_type_u(void);
	/* Interpolation Type V */
	enum interpolation_type_v_enum {
		interpolation_type_v_KEY_LINEAR = 0,
		interpolation_type_v_KEY_CARDINAL = 1,
		interpolation_type_v_KEY_BSPLINE = 2,
	};
	interpolation_type_v_enum interpolation_type_v(void);
	/* Interpolation Type W */
	enum interpolation_type_w_enum {
		interpolation_type_w_KEY_LINEAR = 0,
		interpolation_type_w_KEY_CARDINAL = 1,
		interpolation_type_w_KEY_BSPLINE = 2,
	};
	interpolation_type_w_enum interpolation_type_w(void);
	/* Outside: Only draw, and take into account, the outer vertices */
	bool use_outside(void);
	/* Vertex Group: Vertex group to apply the influence of the lattice */
	std::string vertex_group(void);
	/* Shape Keys */
	Key shape_keys(void);
	/* Points: Points of the lattice */
	COLLECTION_PROPERTY(LatticePoint, Lattice, points)
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
};

/**************** LatticePoint ****************/

class LatticePoint : public Pointer {
public:
	LatticePoint(const PointerRNA& ptr) :
		Pointer(ptr),
		groups(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location */
	Array<float, 3> co(void);
	/* Deformed Location */
	Array<float, 3> co_deform(void);
	/* Groups: Weights for the vertex groups this point is member of */
	COLLECTION_PROPERTY(VertexGroupElement, LatticePoint, groups)
};

/**************** Blendfile Data ****************/

class BlendData : public Pointer {
public:
	BlendData(const PointerRNA& ptr) :
		Pointer(ptr),
		cameras(ptr),
		scenes(ptr),
		objects(ptr),
		materials(ptr),
		node_groups(ptr),
		meshes(ptr),
		lamps(ptr),
		libraries(ptr),
		screens(ptr),
		window_managers(ptr),
		images(ptr),
		lattices(ptr),
		curves(ptr),
		metaballs(ptr),
		fonts(ptr),
		textures(ptr),
		brushes(ptr),
		worlds(ptr),
		groups(ptr),
		shape_keys(ptr),
		scripts(ptr),
		texts(ptr),
		sounds(ptr),
		armatures(ptr),
		actions(ptr),
		particles(ptr),
		grease_pencil(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Filename: Path to the .blend file */
	std::string filepath(void);
	/* File is Saved: Has the current session been saved to disk as a .blend file */
	bool is_dirty(void);
	/* Cameras: Camera datablocks. */
	COLLECTION_PROPERTY(Camera, BlendData, cameras)
	/* Scenes: Scene datablocks. */
	COLLECTION_PROPERTY(Scene, BlendData, scenes)
	/* Objects: Object datablocks. */
	COLLECTION_PROPERTY(Object, BlendData, objects)
	/* Materials: Material datablocks. */
	COLLECTION_PROPERTY(Material, BlendData, materials)
	/* Node Groups: Node group datablocks. */
	COLLECTION_PROPERTY(NodeTree, BlendData, node_groups)
	/* Meshes: Mesh datablocks. */
	COLLECTION_PROPERTY(Mesh, BlendData, meshes)
	/* Lamps: Lamp datablocks. */
	COLLECTION_PROPERTY(Lamp, BlendData, lamps)
	/* Libraries: Library datablocks. */
	COLLECTION_PROPERTY(Library, BlendData, libraries)
	/* Screens: Screen datablocks. */
	COLLECTION_PROPERTY(Screen, BlendData, screens)
	/* Window Managers: Window manager datablocks. */
	COLLECTION_PROPERTY(WindowManager, BlendData, window_managers)
	/* Images: Image datablocks. */
	COLLECTION_PROPERTY(Image, BlendData, images)
	/* Lattices: Lattice datablocks. */
	COLLECTION_PROPERTY(Lattice, BlendData, lattices)
	/* Curves: Curve datablocks. */
	COLLECTION_PROPERTY(Curve, BlendData, curves)
	/* Metaballs: Metaball datablocks. */
	COLLECTION_PROPERTY(MetaBall, BlendData, metaballs)
	/* Vector Fonts: Vector font datablocks. */
	COLLECTION_PROPERTY(VectorFont, BlendData, fonts)
	/* Textures: Texture datablocks. */
	COLLECTION_PROPERTY(Texture, BlendData, textures)
	/* Brushes: Brush datablocks. */
	COLLECTION_PROPERTY(Brush, BlendData, brushes)
	/* Worlds: World datablocks. */
	COLLECTION_PROPERTY(World, BlendData, worlds)
	/* Groups: Group datablocks. */
	COLLECTION_PROPERTY(Group, BlendData, groups)
	/* Shape Keys: Shape Key datablocks. */
	COLLECTION_PROPERTY(Key, BlendData, shape_keys)
	/* Scripts: Script datablocks (DEPRECATED). */
	COLLECTION_PROPERTY(ID, BlendData, scripts)
	/* Texts: Text datablocks. */
	COLLECTION_PROPERTY(Text, BlendData, texts)
	/* Sounds: Sound datablocks. */
	COLLECTION_PROPERTY(Sound, BlendData, sounds)
	/* Armatures: Armature datablocks. */
	COLLECTION_PROPERTY(Armature, BlendData, armatures)
	/* Actions: Action datablocks. */
	COLLECTION_PROPERTY(Action, BlendData, actions)
	/* Particles: Particle datablocks. */
	COLLECTION_PROPERTY(ParticleSettings, BlendData, particles)
	/* Grease Pencil: Grease Pencil datablocks. */
	COLLECTION_PROPERTY(GreasePencil, BlendData, grease_pencil)
};

/**************** Main Cameras ****************/

class BlendDataCameras : public Pointer {
public:
	BlendDataCameras(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Scenes ****************/

class BlendDataScenes : public Pointer {
public:
	BlendDataScenes(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Objects ****************/

class BlendDataObjects : public Pointer {
public:
	BlendDataObjects(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Material ****************/

class BlendDataMaterials : public Pointer {
public:
	BlendDataMaterials(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Node Trees ****************/

class BlendDataNodeTrees : public Pointer {
public:
	BlendDataNodeTrees(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Meshes ****************/

class BlendDataMeshes : public Pointer {
public:
	BlendDataMeshes(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Lamps ****************/

class BlendDataLamps : public Pointer {
public:
	BlendDataLamps(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Libraries ****************/

class BlendDataLibraries : public Pointer {
public:
	BlendDataLibraries(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Screens ****************/

class BlendDataScreens : public Pointer {
public:
	BlendDataScreens(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Window Managers ****************/

class BlendDataWindowManagers : public Pointer {
public:
	BlendDataWindowManagers(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Images ****************/

class BlendDataImages : public Pointer {
public:
	BlendDataImages(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Lattices ****************/

class BlendDataLattices : public Pointer {
public:
	BlendDataLattices(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Curves ****************/

class BlendDataCurves : public Pointer {
public:
	BlendDataCurves(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main MetaBall ****************/

class BlendDataMetaBalls : public Pointer {
public:
	BlendDataMetaBalls(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Fonts ****************/

class BlendDataFonts : public Pointer {
public:
	BlendDataFonts(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Textures ****************/

class BlendDataTextures : public Pointer {
public:
	BlendDataTextures(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Brushes ****************/

class BlendDataBrushes : public Pointer {
public:
	BlendDataBrushes(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Worlds ****************/

class BlendDataWorlds : public Pointer {
public:
	BlendDataWorlds(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Groups ****************/

class BlendDataGroups : public Pointer {
public:
	BlendDataGroups(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Texts ****************/

class BlendDataTexts : public Pointer {
public:
	BlendDataTexts(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Sounds ****************/

class BlendDataSounds : public Pointer {
public:
	BlendDataSounds(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Armatures ****************/

class BlendDataArmatures : public Pointer {
public:
	BlendDataArmatures(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Actions ****************/

class BlendDataActions : public Pointer {
public:
	BlendDataActions(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Particle Settings ****************/

class BlendDataParticles : public Pointer {
public:
	BlendDataParticles(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Main Grease Pencils ****************/

class BlendDataGreasePencils : public Pointer {
public:
	BlendDataGreasePencils(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Material ****************/

class Material : public ID {
public:
	Material(const PointerRNA& ptr) :
		ID(ptr),
		texture_slots(ptr)
		{}

	/* Type: Material type defining how the object is rendered */
	enum type_enum {
		type_SURFACE = 0,
		type_WIRE = 3,
		type_VOLUME = 2,
		type_HALO = 1,
	};
	type_enum type(void);
	/* Transparency: Render material as transparent */
	bool use_transparency(void);
	/* Transparency Method: Method to use for rendering transparency */
	enum transparency_method_enum {
		transparency_method_Z_TRANSPARENCY = 64,
		transparency_method_RAYTRACE = 131072,
	};
	transparency_method_enum transparency_method(void);
	/* Preview render type: Type of preview render */
	enum preview_render_type_enum {
		preview_render_type_FLAT = 0,
		preview_render_type_SPHERE = 1,
		preview_render_type_CUBE = 2,
		preview_render_type_MONKEY = 3,
		preview_render_type_HAIR = 10,
		preview_render_type_SPHERE_A = 4,
	};
	preview_render_type_enum preview_render_type(void);
	/* Ambient: Amount of global ambient color the material receives */
	float ambient(void);
	/* Emit: Amount of light to emit */
	float emit(void);
	/* Translucency: Amount of diffuse shading on the back side */
	float translucency(void);
	/* Cubic Interpolation: Use cubic interpolation for diffuse values, for smoother transitions */
	bool use_cubic(void);
	/* Object Color: Modulate the result with a per-object color */
	bool use_object_color(void);
	/* Shadow Ray Bias: Shadow raytracing bias to prevent terminator problems on shadow boundary */
	float shadow_ray_bias(void);
	/* Shadow Buffer Bias: Factor to multiply shadow buffer bias with (0 is ignore.) */
	float shadow_buffer_bias(void);
	/* Shadow Casting Alpha: Shadow casting alpha, in use for Irregular and Deep shadow buffer */
	float shadow_cast_alpha(void);
	/* Light Group: Limit lighting to lamps in this Group */
	Group light_group(void);
	/* Light Group Exclusive: Material uses the light group exclusively - these lamps are excluded from other scene lighting */
	bool use_light_group_exclusive(void);
	/* Traceable: Include this material and geometry that uses it in ray tracing calculations */
	bool use_raytrace(void);
	/* Shadows: Allows this material to receive shadows */
	bool use_shadows(void);
	/* Shadeless: Makes this material insensitive to light or shadow */
	bool use_shadeless(void);
	/* Vertex Color Light: Add vertex colors as additional lighting */
	bool use_vertex_color_light(void);
	/* Vertex Color Paint: Replaces object base color with vertex colors (multiplies with 'texture face' face assigned textures) */
	bool use_vertex_color_paint(void);
	/* Invert Z Depth: Renders material's faces with an inverted Z buffer (scanline only) */
	bool invert_z(void);
	/* Z Offset: Gives faces an artificial offset in the Z buffer for Z transparency */
	float offset_z(void);
	/* Sky: Renders this material with zero alpha, with sky background in place (scanline only) */
	bool use_sky(void);
	/* Only Shadow: Renders shadows as the material's alpha value, making materials transparent except for shadowed areas */
	bool use_only_shadow(void);
	/* Face Textures: Replaces the object's base color with color from face assigned image textures */
	bool use_face_texture(void);
	/* Face Textures Alpha: Replaces the object's base alpha value with alpha from face assigned image textures */
	bool use_face_texture_alpha(void);
	/* Cast Shadows Only: Makes objects with this material appear invisible, only casting shadows (not rendered) */
	bool use_cast_shadows_only(void);
	/* Use Mist: Use mist with this material (in world settings) */
	bool use_mist(void);
	/* Receive Transparent Shadows: Allow this object to receive transparent shadows casted through other objects */
	bool use_transparent_shadows(void);
	/* Ray Shadow Bias: Prevents raytraced shadow errors on surfaces with smooth shaded normals (terminator problem) */
	bool use_ray_shadow_bias(void);
	/* Full Oversampling: Force this material to render full shading/textures for all anti-aliasing samples */
	bool use_full_oversampling(void);
	/* Cast Buffer Shadows: Allow this material to cast shadows from shadow buffer lamps */
	bool use_cast_buffer_shadows(void);
	/* Cast Approximate: Allow this material to cast shadows when using approximate ambient occlusion. */
	bool use_cast_approximate(void);
	/* Tangent Shading: Use the material's tangent vector instead of the normal for shading - for anisotropic shading effects */
	bool use_tangent_shading(void);
	/* Raytrace Mirror: Raytraced reflection settings for the material */
	MaterialRaytraceMirror raytrace_mirror(void);
	/* Raytrace Transparency: Raytraced transparency settings for the material */
	MaterialRaytraceTransparency raytrace_transparency(void);
	/* Volume: Volume settings for the material */
	MaterialVolume volume(void);
	/* Halo: Halo settings for the material */
	MaterialHalo halo(void);
	/* Subsurface Scattering: Subsurface scattering settings for the material */
	MaterialSubsurfaceScattering subsurface_scattering(void);
	/* Strand: Strand settings for the material */
	MaterialStrand strand(void);
	/* Physics: Game physics settings */
	MaterialPhysics physics(void);
	/* Node Tree: Node tree for node based materials */
	NodeTree node_tree(void);
	/* Use Nodes: Use shader nodes to render the material */
	bool use_nodes(void);
	/* Material: Active node material */
	Material active_node_material(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Textures: Texture slots defining the mapping and influence of textures */
	COLLECTION_PROPERTY(MaterialTextureSlot, Material, texture_slots)
	/* Active Texture: Active texture slot being displayed */
	Texture active_texture(void);
	/* Active Texture Index: Index of active texture slot */
	int active_texture_index(void);
	/* Use Textures: Enable/Disable each texture */
	Array<int, 18> use_textures(void);
	/* Diffuse Color */
	Array<float, 3> diffuse_color(void);
	/* Specular Color: Specular color of the material */
	Array<float, 3> specular_color(void);
	/* Mirror Color: Mirror color of the material */
	Array<float, 3> mirror_color(void);
	/* Alpha: Alpha transparency of the material */
	float alpha(void);
	/* Specular Alpha: Alpha transparency for specular areas */
	float specular_alpha(void);
	/* Use Diffuse Ramp: Toggle diffuse ramp operations */
	bool use_diffuse_ramp(void);
	/* Diffuse Ramp: Color ramp used to affect diffuse shading */
	ColorRamp diffuse_ramp(void);
	/* Use Specular Ramp: Toggle specular ramp operations */
	bool use_specular_ramp(void);
	/* Specular Ramp: Color ramp used to affect specular shading */
	ColorRamp specular_ramp(void);
	/* Diffuse Ramp Blend */
	enum diffuse_ramp_blend_enum {
		diffuse_ramp_blend_MIX = 0,
		diffuse_ramp_blend_ADD = 1,
		diffuse_ramp_blend_MULTIPLY = 2,
		diffuse_ramp_blend_SUBTRACT = 3,
		diffuse_ramp_blend_SCREEN = 4,
		diffuse_ramp_blend_DIVIDE = 5,
		diffuse_ramp_blend_DIFFERENCE = 6,
		diffuse_ramp_blend_DARKEN = 7,
		diffuse_ramp_blend_LIGHTEN = 8,
		diffuse_ramp_blend_OVERLAY = 9,
		diffuse_ramp_blend_DODGE = 10,
		diffuse_ramp_blend_BURN = 11,
		diffuse_ramp_blend_HUE = 12,
		diffuse_ramp_blend_SATURATION = 13,
		diffuse_ramp_blend_VALUE = 14,
		diffuse_ramp_blend_COLOR = 15,
		diffuse_ramp_blend_SOFT_LIGHT = 16,
		diffuse_ramp_blend_LINEAR_LIGHT = 17,
	};
	diffuse_ramp_blend_enum diffuse_ramp_blend(void);
	/* Diffuse Ramp Blend */
	enum specular_ramp_blend_enum {
		specular_ramp_blend_MIX = 0,
		specular_ramp_blend_ADD = 1,
		specular_ramp_blend_MULTIPLY = 2,
		specular_ramp_blend_SUBTRACT = 3,
		specular_ramp_blend_SCREEN = 4,
		specular_ramp_blend_DIVIDE = 5,
		specular_ramp_blend_DIFFERENCE = 6,
		specular_ramp_blend_DARKEN = 7,
		specular_ramp_blend_LIGHTEN = 8,
		specular_ramp_blend_OVERLAY = 9,
		specular_ramp_blend_DODGE = 10,
		specular_ramp_blend_BURN = 11,
		specular_ramp_blend_HUE = 12,
		specular_ramp_blend_SATURATION = 13,
		specular_ramp_blend_VALUE = 14,
		specular_ramp_blend_COLOR = 15,
		specular_ramp_blend_SOFT_LIGHT = 16,
		specular_ramp_blend_LINEAR_LIGHT = 17,
	};
	specular_ramp_blend_enum specular_ramp_blend(void);
	/* Diffuse Ramp Input */
	enum diffuse_ramp_input_enum {
		diffuse_ramp_input_SHADER = 0,
		diffuse_ramp_input_ENERGY = 1,
		diffuse_ramp_input_NORMAL = 2,
		diffuse_ramp_input_RESULT = 3,
	};
	diffuse_ramp_input_enum diffuse_ramp_input(void);
	/* Specular Ramp Input */
	enum specular_ramp_input_enum {
		specular_ramp_input_SHADER = 0,
		specular_ramp_input_ENERGY = 1,
		specular_ramp_input_NORMAL = 2,
		specular_ramp_input_RESULT = 3,
	};
	specular_ramp_input_enum specular_ramp_input(void);
	/* Diffuse Ramp Factor: Blending factor (also uses alpha in Colorband) */
	float diffuse_ramp_factor(void);
	/* Specular Ramp Factor: Blending factor (also uses alpha in Colorband) */
	float specular_ramp_factor(void);
	/* Diffuse Shader Model */
	enum diffuse_shader_enum {
		diffuse_shader_LAMBERT = 0,
		diffuse_shader_OREN_NAYAR = 1,
		diffuse_shader_TOON = 2,
		diffuse_shader_MINNAERT = 3,
		diffuse_shader_FRESNEL = 4,
	};
	diffuse_shader_enum diffuse_shader(void);
	/* Diffuse Intensity: Amount of diffuse reflection */
	float diffuse_intensity(void);
	/* Roughness: Oren-Nayar Roughness */
	float roughness(void);
	/* Diffuse Toon Size: Size of diffuse toon area */
	float diffuse_toon_size(void);
	/* Diffuse Toon Smooth: Smoothness of diffuse toon area */
	float diffuse_toon_smooth(void);
	/* Diffuse Fresnel: Power of Fresnel */
	float diffuse_fresnel(void);
	/* Diffuse Fresnel Factor: Blending factor of Fresnel */
	float diffuse_fresnel_factor(void);
	/* Darkness: Minnaert darkness */
	float darkness(void);
	/* Specular Shader Model */
	enum specular_shader_enum {
		specular_shader_COOKTORR = 0,
		specular_shader_PHONG = 1,
		specular_shader_BLINN = 2,
		specular_shader_TOON = 3,
		specular_shader_WARDISO = 4,
	};
	specular_shader_enum specular_shader(void);
	/* Specular Intensity */
	float specular_intensity(void);
	/* Specular Hardness */
	int specular_hardness(void);
	/* Specular IOR */
	float specular_ior(void);
	/* Specular Toon Size: Size of specular toon area */
	float specular_toon_size(void);
	/* Specular Toon Smooth: Smoothness of specular toon area */
	float specular_toon_smooth(void);
	/* Specular Slope: The standard deviation of surface slope */
	float specular_slope(void);
};

/**************** Texture Slots ****************/

class MaterialTextureSlots : public Pointer {
public:
	MaterialTextureSlots(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Material Raytrace Mirror ****************/

class MaterialRaytraceMirror : public Pointer {
public:
	MaterialRaytraceMirror(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Enabled: Enable raytraced reflections */
	bool use(void);
	/* Reflectivity: Sets the amount mirror reflection for raytrace */
	float reflect_factor(void);
	/* Fresnel: Power of Fresnel for mirror reflection */
	float fresnel(void);
	/* Fresnel Factor: Blending factor for Fresnel */
	float fresnel_factor(void);
	/* Gloss Amount: The shininess of the reflection. Values < 1.0 give diffuse, blurry reflections */
	float gloss_factor(void);
	/* Gloss Anisotropy: The shape of the reflection, from 0.0 (circular) to 1.0 (fully stretched along the tangent */
	float gloss_anisotropic(void);
	/* Gloss Samples: Number of cone samples averaged for blurry reflections */
	int gloss_samples(void);
	/* Gloss Threshold: Threshold for adaptive sampling. If a sample contributes less than this amount (as a percentage), sampling is stopped */
	float gloss_threshold(void);
	/* Depth: Maximum allowed number of light inter-reflections */
	int depth(void);
	/* Maximum Distance: Maximum distance of reflected rays. Reflections further than this range fade to sky color or material color */
	float distance(void);
	/* Fade-out Color: The color that rays with no intersection within the Max Distance take. Material color can be best for indoor scenes, sky color for outdoor */
	enum fade_to_enum {
		fade_to_FADE_TO_SKY = 0,
		fade_to_FADE_TO_MATERIAL = 1,
	};
	fade_to_enum fade_to(void);
};

/**************** Material Raytrace Transparency ****************/

class MaterialRaytraceTransparency : public Pointer {
public:
	MaterialRaytraceTransparency(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* IOR: Sets angular index of refraction for raytraced refraction */
	float ior(void);
	/* Fresnel: Power of Fresnel for transparency (Ray or ZTransp) */
	float fresnel(void);
	/* Fresnel Factor: Blending factor for Fresnel */
	float fresnel_factor(void);
	/* Gloss Amount: The clarity of the refraction. Values < 1.0 give diffuse, blurry refractions */
	float gloss_factor(void);
	/* Gloss Samples: Number of cone samples averaged for blurry refractions */
	int gloss_samples(void);
	/* Gloss Threshold: Threshold for adaptive sampling. If a sample contributes less than this amount (as a percentage), sampling is stopped */
	float gloss_threshold(void);
	/* Depth: Maximum allowed number of light inter-refractions */
	int depth(void);
	/* Filter: Amount to blend in the material's diffuse color in raytraced transparency (simulating absorption) */
	float filter(void);
	/* Limit: Maximum depth for light to travel through the transparent material before becoming fully filtered (0.0 is disabled) */
	float depth_max(void);
	/* Falloff: Falloff power for transmissivity filter effect (1.0 is linear) */
	float falloff(void);
};

/**************** Material Volume ****************/

class MaterialVolume : public Pointer {
public:
	MaterialVolume(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Step Calculation: Method of calculating the steps through the volume */
	enum step_method_enum {
		step_method_RANDOMIZED = 0,
		step_method_CONSTANT = 1,
	};
	step_method_enum step_method(void);
	/* Step Size: Distance between subsequent volume depth samples */
	float step_size(void);
	/* Lighting Mode: Method of shading, attenuating, and scattering light through the volume */
	enum light_method_enum {
		light_method_SHADELESS = 0,
		light_method_SHADOWED = 2,
		light_method_SHADED = 1,
		light_method_MULTIPLE_SCATTERING = 3,
		light_method_SHADED_PLUS_MULTIPLE_SCATTERING = 4,
	};
	light_method_enum light_method(void);
	/* External Shadows: Receive shadows from sources outside the volume (temporary) */
	bool use_external_shadows(void);
	/* Light Cache: Pre-calculate the shading information into a voxel grid, speeds up shading at slightly less accuracy */
	bool use_light_cache(void);
	/* Resolution: Resolution of the voxel grid, low resolutions are faster, high resolutions use more memory */
	int cache_resolution(void);
	/* Diffusion: Diffusion factor, the strength of the blurring effect */
	float ms_diffusion(void);
	/* Spread: Proportional distance over which the light is diffused */
	float ms_spread(void);
	/* Intensity: Multiplier for multiple scattered light energy */
	float ms_intensity(void);
	/* Depth Cutoff: Stop ray marching early if transmission drops below this luminance - higher values give speedups in dense volumes at the expense of accuracy */
	float depth_threshold(void);
	/* Density: The base density of the volume */
	float density(void);
	/* Density Scale: Multiplier for the material's density */
	float density_scale(void);
	/* Scattering: Amount of light that gets scattered out by the volume - the more out-scattering, the shallower the light will penetrate  */
	float scattering(void);
	/* Transmission Color: Result color of the volume, after other light has been scattered/absorbed */
	Array<float, 3> transmission_color(void);
	/* Reflection Color: Color of light scattered out of the volume (does not affect transmission) */
	Array<float, 3> reflection_color(void);
	/* Reflection: Multiplier to make out-scattered light brighter or darker (non-physically correct) */
	float reflection(void);
	/* Emission Color */
	Array<float, 3> emission_color(void);
	/* Emission: Amount of light that gets emitted by the volume */
	float emission(void);
	/* Asymmetry: Back scattering (-1.0) to Forward scattering (1.0) and the range in between */
	float asymmetry(void);
};

/**************** Material Halo ****************/

class MaterialHalo : public Pointer {
public:
	MaterialHalo(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Size: Sets the dimension of the halo */
	float size(void);
	/* Hardness: Sets the hardness of the halo */
	int hardness(void);
	/* Add: Sets the strength of the add effect */
	float add(void);
	/* Rings: Sets the number of rings rendered over the halo */
	int ring_count(void);
	/* Line Number: Sets the number of star shaped lines rendered over the halo */
	int line_count(void);
	/* Star Tips: Sets the number of points on the star shaped halo */
	int star_tip_count(void);
	/* Seed: Randomizes ring dimension and line location */
	int seed(void);
	/* Flare: Renders halo as a lensflare */
	bool use_flare_mode(void);
	/* Flare Size: Sets the factor by which the flare is larger than the halo */
	float flare_size(void);
	/* Flare Subsize: Sets the dimension of the subflares, dots and circles */
	float flare_subflare_size(void);
	/* Flare Boost: Gives the flare extra strength */
	float flare_boost(void);
	/* Flare Seed: Specifies an offset in the flare seed table */
	int flare_seed(void);
	/* Flares Sub: Sets the number of subflares */
	int flare_subflare_count(void);
	/* Rings: Renders rings over halo */
	bool use_ring(void);
	/* Lines: Renders star shaped lines over halo */
	bool use_lines(void);
	/* Star: Renders halo as a star */
	bool use_star(void);
	/* Texture: Gives halo a texture */
	bool use_texture(void);
	/* Vertex Normal: Uses the vertex normal to specify the dimension of the halo */
	bool use_vertex_normal(void);
	/* Extreme Alpha: Uses extreme alpha */
	bool use_extreme_alpha(void);
	/* Shaded: Lets halo receive light and shadows from external objects */
	bool use_shaded(void);
	/* Soft: Softens the edges of halos at intersections with other geometry */
	bool use_soft(void);
};

/**************** Material Subsurface Scattering ****************/

class MaterialSubsurfaceScattering : public Pointer {
public:
	MaterialSubsurfaceScattering(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Radius: Mean red/green/blue scattering path length */
	Array<float, 3> radius(void);
	/* Color: Scattering color */
	Array<float, 3> color(void);
	/* Error Tolerance: Error tolerance (low values are slower and higher quality) */
	float error_threshold(void);
	/* Scale: Object scale factor */
	float scale(void);
	/* IOR: Index of refraction (higher values are denser) */
	float ior(void);
	/* Color Factor: Blend factor for SSS colors */
	float color_factor(void);
	/* Texture Factor: Texture scatting blend factor */
	float texture_factor(void);
	/* Front: Front scattering weight */
	float front(void);
	/* Back: Back scattering weight */
	float back(void);
	/* Enabled: Enable diffuse subsurface scatting effects in a material */
	bool use(void);
};

/**************** Material Texture Slot ****************/

class MaterialTextureSlot : public TextureSlot {
public:
	MaterialTextureSlot(const PointerRNA& ptr) :
		TextureSlot(ptr)
		{}

	/* Texture Coordinates */
	enum texture_coords_enum {
		texture_coords_GLOBAL = 8,
		texture_coords_OBJECT = 32,
		texture_coords_UV = 16,
		texture_coords_ORCO = 1,
		texture_coords_STRAND = 8192,
		texture_coords_STICKY = 256,
		texture_coords_WINDOW = 1024,
		texture_coords_NORMAL = 4,
		texture_coords_REFLECTION = 2,
		texture_coords_STRESS = 16384,
		texture_coords_TANGENT = 4096,
	};
	texture_coords_enum texture_coords(void);
	/* Object: Object to use for mapping with Object texture coordinates */
	Object object(void);
	/* UV Layer: UV layer to use for mapping with UV texture coordinates */
	std::string uv_layer(void);
	/* From Dupli: Dupli's instanced from verts, faces or particles, inherit texture coordinate from their parent */
	bool use_from_dupli(void);
	/* From Original: Dupli's derive their object coordinates from the original objects transformation */
	bool use_from_original(void);
	/* Diffuse Color: Causes the texture to affect basic color of the material */
	bool use_map_color_diffuse(void);
	/* Normal: Causes the texture to affect the rendered normal */
	bool use_map_normal(void);
	/* Specular Color: Causes the texture to affect the specularity color */
	bool use_map_color_spec(void);
	/* Mirror: Causes the texture to affect the mirror color */
	bool use_map_mirror(void);
	/* Diffuse: Causes the texture to affect the value of the materials diffuse reflectivity */
	bool use_map_diffuse(void);
	/* Specular: Causes the texture to affect the value of specular reflectivity */
	bool use_map_specular(void);
	/* Ambient: Causes the texture to affect the value of ambient */
	bool use_map_ambient(void);
	/* Hardness: Causes the texture to affect the hardness value */
	bool use_map_hardness(void);
	/* Ray-Mirror: Causes the texture to affect the ray-mirror value */
	bool use_map_raymir(void);
	/* Alpha: Causes the texture to affect the alpha value */
	bool use_map_alpha(void);
	/* Emit: Causes the texture to affect the emit value */
	bool use_map_emit(void);
	/* Translucency: Causes the texture to affect the translucency value */
	bool use_map_translucency(void);
	/* Displacement: Let the texture displace the surface */
	bool use_map_displacement(void);
	/* Warp: Let the texture warp texture coordinates of next channels */
	bool use_map_warp(void);
	/* X Mapping */
	enum mapping_x_enum {
		mapping_x_NONE = 0,
		mapping_x_X = 1,
		mapping_x_Y = 2,
		mapping_x_Z = 3,
	};
	mapping_x_enum mapping_x(void);
	/* Y Mapping */
	enum mapping_y_enum {
		mapping_y_NONE = 0,
		mapping_y_X = 1,
		mapping_y_Y = 2,
		mapping_y_Z = 3,
	};
	mapping_y_enum mapping_y(void);
	/* Z Mapping */
	enum mapping_z_enum {
		mapping_z_NONE = 0,
		mapping_z_X = 1,
		mapping_z_Y = 2,
		mapping_z_Z = 3,
	};
	mapping_z_enum mapping_z(void);
	/* Mapping */
	enum mapping_enum {
		mapping_FLAT = 0,
		mapping_CUBE = 1,
		mapping_TUBE = 2,
		mapping_SPHERE = 3,
	};
	mapping_enum mapping(void);
	/* Normal Map Space: Sets space of normal map image */
	enum normal_map_space_enum {
		normal_map_space_CAMERA = 0,
		normal_map_space_WORLD = 1,
		normal_map_space_OBJECT = 2,
		normal_map_space_TANGENT = 3,
	};
	normal_map_space_enum normal_map_space(void);
	/* Normal Factor: Amount texture affects normal values */
	float normal_factor(void);
	/* Displacement Factor: Amount texture displaces the surface */
	float displacement_factor(void);
	/* Warp Factor: Amount texture affects texture coordinates of next channels */
	float warp_factor(void);
	/* Specular Color Factor: Amount texture affects specular color */
	float specular_color_factor(void);
	/* Diffuse Color Factor: Amount texture affects diffuse color */
	float diffuse_color_factor(void);
	/* Mirror Factor: Amount texture affects mirror color */
	float mirror_factor(void);
	/* Alpha Factor: Amount texture affects alpha */
	float alpha_factor(void);
	/* Diffuse Factor: Amount texture affects diffuse reflectivity */
	float diffuse_factor(void);
	/* Specular Factor: Amount texture affects specular reflectivity */
	float specular_factor(void);
	/* Emit Factor: Amount texture affects emission */
	float emit_factor(void);
	/* Hardness Factor: Amount texture affects hardness */
	float hardness_factor(void);
	/* Ray Mirror Factor: Amount texture affects ray mirror */
	float raymir_factor(void);
	/* Translucency Factor: Amount texture affects translucency */
	float translucency_factor(void);
	/* Ambient Factor: Amount texture affects ambient */
	float ambient_factor(void);
	/* Emission Color: Causes the texture to affect the color of emission */
	bool use_map_color_emission(void);
	/* Reflection Color: Causes the texture to affect the color of scattered light */
	bool use_map_color_reflection(void);
	/* Transmission Color: Causes the texture to affect the result color after other light has been scattered/absorbed */
	bool use_map_color_transmission(void);
	/* Density: Causes the texture to affect the volume's density */
	bool use_map_density(void);
	/* Emission: Causes the texture to affect the volume's emission */
	bool use_map_emission(void);
	/* Scattering: Causes the texture to affect the volume's scattering */
	bool use_map_scatter(void);
	/* Reflection: Causes the texture to affect the reflected light's brightness */
	bool use_map_reflect(void);
	/* Emission Color Factor: Amount texture affects emission color */
	float emission_color_factor(void);
	/* Reflection Color Factor: Amount texture affects color of out-scattered light */
	float reflection_color_factor(void);
	/* Transmission Color Factor: Amount texture affects result color after light has been scattered/absorbed */
	float transmission_color_factor(void);
	/* Density Factor: Amount texture affects density */
	float density_factor(void);
	/* Emission Factor: Amount texture affects emission */
	float emission_factor(void);
	/* Scattering Factor: Amount texture affects scattering */
	float scattering_factor(void);
	/* Reflection Factor: Amount texture affects brightness of out-scattered light */
	float reflection_factor(void);
	/* Enabled: Enable this material texture slot */
	bool use(void);
	/* Bump Method: Method to use for bump mapping */
	enum bump_method_enum {
		bump_method_BUMP_ORIGINAL = 0,
		bump_method_BUMP_COMPATIBLE = 128,
		bump_method_BUMP_DEFAULT = 256,
		bump_method_BUMP_BEST_QUALITY = 512,
	};
	bump_method_enum bump_method(void);
	/* Bump Space: Space to apply bump mapping in */
	enum bump_objectspace_enum {
		bump_objectspace_BUMP_VIEWSPACE = 0,
		bump_objectspace_BUMP_OBJECTSPACE = 1024,
		bump_objectspace_BUMP_TEXTURESPACE = 2048,
	};
	bump_objectspace_enum bump_objectspace(void);
};

/**************** Material Strand ****************/

class MaterialStrand : public Pointer {
public:
	MaterialStrand(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Tangent Shading: Uses direction of strands as normal for tangent-shading */
	bool use_tangent_shading(void);
	/* Surface Diffuse: Make diffuse shading more similar to shading the surface */
	bool use_surface_diffuse(void);
	/* Blend Distance: Worldspace distance over which to blend in the surface normal */
	float blend_distance(void);
	/* Blender Units: Use Blender units for widths instead of pixels */
	bool use_blender_units(void);
	/* Root Size: Start size of strands in pixels or Blender units */
	float root_size(void);
	/* Tip Size: End size of strands in pixels or Blender units */
	float tip_size(void);
	/* Minimum Size: Minimum size of strands in pixels */
	float size_min(void);
	/* Shape: Positive values make strands rounder, negative makes strands spiky */
	float shape(void);
	/* Width Fade: Transparency along the width of the strand */
	float width_fade(void);
	/* UV Layer: Name of UV layer to override */
	std::string uv_layer(void);
};

/**************** Material Physics ****************/

class MaterialPhysics : public Pointer {
public:
	MaterialPhysics(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Friction: Coulomb friction coefficient, when inside the physics distance area */
	float friction(void);
	/* Elasticity: Elasticity of collisions */
	float elasticity(void);
	/* Align to Normal: Align dynamic game objects along the surface normal, when inside the physics distance area */
	bool use_fh_normal(void);
	/* Force: Upward spring force, when inside the physics distance area */
	float fh_force(void);
	/* Distance: Distance of the physics area */
	float fh_distance(void);
	/* Damping: Damping of the spring force, when inside the physics distance area */
	float fh_damping(void);
};

/**************** Mesh ****************/

class Mesh : public ID {
public:
	Mesh(const PointerRNA& ptr) :
		ID(ptr),
		vertices(ptr),
		edges(ptr),
		faces(ptr),
		sticky(ptr),
		uv_textures(ptr),
		vertex_colors(ptr),
		layers_float(ptr),
		layers_int(ptr),
		layers_string(ptr),
		materials(ptr)
		{}

	/* Vertices: Vertices of the mesh */
	COLLECTION_PROPERTY(MeshVertex, Mesh, vertices)
	/* Edges: Edges of the mesh */
	COLLECTION_PROPERTY(MeshEdge, Mesh, edges)
	/* Faces: Faces of the mesh */
	COLLECTION_PROPERTY(MeshFace, Mesh, faces)
	/* Sticky: Sticky texture coordinates */
	COLLECTION_PROPERTY(MeshSticky, Mesh, sticky)
	/* Texture Mesh: Use another mesh for texture indices (vertex indices must be aligned) */
	Mesh texture_mesh(void);
	/* UV Textures */
	COLLECTION_PROPERTY(MeshTextureFaceLayer, Mesh, uv_textures)
	/* Clone UV Texture: UV texture to be used as cloning source */
	MeshTextureFaceLayer uv_texture_clone(void);
	/* Clone UV Texture Index: Clone UV texture index */
	int uv_texture_clone_index(void);
	/* Mask UV Texture: UV texture to mask the painted area */
	MeshTextureFaceLayer uv_texture_stencil(void);
	/* Mask UV Texture Index: Mask UV texture index */
	int uv_texture_stencil_index(void);
	/* Vertex Colors */
	COLLECTION_PROPERTY(MeshColorLayer, Mesh, vertex_colors)
	/* Float Property Layers */
	COLLECTION_PROPERTY(MeshFloatPropertyLayer, Mesh, layers_float)
	/* Int Property Layers */
	COLLECTION_PROPERTY(MeshIntPropertyLayer, Mesh, layers_int)
	/* String Property Layers */
	COLLECTION_PROPERTY(MeshStringPropertyLayer, Mesh, layers_string)
	/* Auto Smooth: Treats all set-smoothed faces with angles less than the specified angle as 'smooth' during render */
	bool use_auto_smooth(void);
	/* Auto Smooth Angle: Defines maximum angle between face normals that 'Auto Smooth' will operate on */
	int auto_smooth_angle(void);
	/* Double Sided: Render/display the mesh with double or single sided lighting */
	bool show_double_sided(void);
	/* Texture Space Mesh: Derive texture coordinates from another mesh */
	Mesh texco_mesh(void);
	/* Shape Keys */
	Key shape_keys(void);
	/* Auto Texture Space: Adjusts active object's texture space automatically when transforming object */
	bool use_auto_texspace(void);
	/* Texture Space Location: Texture space location */
	Array<float, 3> texspace_location(void);
	/* Texture Space Size: Texture space size */
	Array<float, 3> texspace_size(void);
	/* Materials */
	COLLECTION_PROPERTY(Material, Mesh, materials)
	/* Draw Edges: Displays selected edges using highlights in the 3D view and UV editor */
	bool show_edges(void);
	/* All Edges: Displays all edges for wireframe in all view modes in the 3D view */
	bool show_all_edges(void);
	/* Draw Faces: Displays all faces as shades in the 3D view and UV editor */
	bool show_faces(void);
	/* Draw Normals: Displays face normals as lines */
	bool show_normal_face(void);
	/* Draw Vertex Normals: Displays vertex normals as lines */
	bool show_normal_vertex(void);
	/* Draw Creases: Displays creases created for subsurf weighting */
	bool show_edge_crease(void);
	/* Draw Bevel Weights: Displays weights created for the Bevel modifier */
	bool show_edge_bevel_weight(void);
	/* Draw Seams: Displays UV unwrapping seams */
	bool show_edge_seams(void);
	/* Draw Sharp: Displays sharp edges, used with the EdgeSplit modifier */
	bool show_edge_sharp(void);
	/* Edge Length: Displays selected edge lengths, Using global values when set in the transform panel */
	bool show_extra_edge_length(void);
	/* Faces Angles: Displays the angles in the selected edges in degrees, Using global values when set in the transform panel */
	bool show_extra_face_angle(void);
	/* Face Area: Displays the area of selected faces, Using global values when set in the transform panel */
	bool show_extra_face_area(void);
	/* X Mirror: X Axis mirror editing */
	bool use_mirror_x(void);
	/* Topology Mirror: Use topology based mirroring */
	bool use_mirror_topology(void);
	/* Paint Mask: Face selection masking for painting */
	bool use_paint_mask(void);
	/* Selected Vert Total: Selected vertex count in editmode */
	int total_vert_sel(void);
	/* Selected Edge Total: Selected edge count in editmode */
	int total_edge_sel(void);
	/* Selected Face Total: Selected face count in editmode */
	int total_face_sel(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
};

/**************** Mesh Vertices ****************/

class MeshVertices : public Pointer {
public:
	MeshVertices(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Mesh Edges ****************/

class MeshEdges : public Pointer {
public:
	MeshEdges(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Mesh Faces ****************/

class MeshFaces : public Pointer {
public:
	MeshFaces(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Face: The active face for this mesh */
	int active(void);
	/* Active Texture Face: Active Texture Face */
	MeshTextureFace active_tface(void);
};

/**************** UV Textures ****************/

class UVTextures : public Pointer {
public:
	UVTextures(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active UV Texture: Active UV texture */
	MeshTextureFaceLayer active(void);
	/* Active UV Texture Index: Active UV texture index */
	int active_index(void);
};

/**************** Vertex Colors ****************/

class VertexColors : public Pointer {
public:
	VertexColors(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Vertex Color Layer: Active vertex color layer */
	MeshColorLayer active(void);
	/* Active Vertex Color Index: Active vertex color index */
	int active_index(void);
};

/**************** Mesh Vertex ****************/

class MeshVertex : public Pointer {
public:
	MeshVertex(const PointerRNA& ptr) :
		Pointer(ptr),
		groups(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location */
	Array<float, 3> co(void);
	/* Normal: Vertex Normal */
	Array<float, 3> normal(void);
	/* Select */
	bool select(void);
	/* Hide */
	bool hide(void);
	/* Bevel Weight: Weight used by the Bevel modifier 'Only Vertices' option */
	float bevel_weight(void);
	/* Groups: Weights for the vertex groups this vertex is member of */
	COLLECTION_PROPERTY(VertexGroupElement, MeshVertex, groups)
	/* Index: Index number of the vertex */
	int index(void);
};

/**************** Vertex Group Element ****************/

class VertexGroupElement : public Pointer {
public:
	VertexGroupElement(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Group Index */
	int group(void);
	/* Weight: Vertex Weight */
	float weight(void);
};

/**************** Mesh Edge ****************/

class MeshEdge : public Pointer {
public:
	MeshEdge(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Vertices: Vertex indices */
	Array<int, 2> vertices(void);
	/* Crease: Weight used by the Subsurf modifier for creasing */
	float crease(void);
	/* Bevel Weight: Weight used by the Bevel modifier */
	float bevel_weight(void);
	/* Select */
	bool select(void);
	/* Hide */
	bool hide(void);
	/* Seam: Seam edge for UV unwrapping */
	bool use_seam(void);
	/* Sharp: Sharp edge for the EdgeSplit modifier */
	bool use_edge_sharp(void);
	/* Loose: Loose edge */
	bool is_loose(void);
	/* Fgon: Fgon edge */
	bool is_fgon(void);
	/* Index: Index number of the vertex */
	int index(void);
};

/**************** Mesh Face ****************/

class MeshFace : public Pointer {
public:
	MeshFace(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Vertices: Vertex indices */
	Array<int, 4> vertices(void);
	/* Vertices: Fixed size vertex indices array */
	Array<int, 4> vertices_raw(void);
	/* Material Index */
	int material_index(void);
	/* Select */
	bool select(void);
	/* Hide */
	bool hide(void);
	/* Smooth */
	bool use_smooth(void);
	/* face normal: local space unit length normal vector for this face */
	Array<float, 3> normal(void);
	/* face area: read only area of the face */
	float area(void);
	/* Index: Index number of the vertex */
	int index(void);
};

/**************** Mesh Texture Face Layer ****************/

class MeshTextureFaceLayer : public Pointer {
public:
	MeshTextureFaceLayer(const PointerRNA& ptr) :
		Pointer(ptr),
		data(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Active: Sets the layer as active for display and editing */
	bool active(void);
	/* Active Render: Sets the layer as active for rendering */
	bool active_render(void);
	/* Active Clone: Sets the layer as active for cloning */
	bool active_clone(void);
	/* Data */
	COLLECTION_PROPERTY(MeshTextureFace, MeshTextureFaceLayer, data)
};

/**************** Mesh Texture Face ****************/

class MeshTextureFace : public Pointer {
public:
	MeshTextureFace(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Image */
	Image image(void);
	/* Tex: Render face with texture */
	bool use_image(void);
	/* Light: Use light for face */
	bool use_light(void);
	/* Invisible: Make face invisible */
	bool hide(void);
	/* Collision: Use face for collision and ray-sensor detection */
	bool use_collision(void);
	/* Shared: Blend vertex colors across face when vertices are shared */
	bool use_blend_shared(void);
	/* Two-side: Render face two-sided */
	bool use_twoside(void);
	/* Object Color: Use ObColor instead of vertex colors */
	bool use_object_color(void);
	/* Halo: Screen aligned billboard */
	bool use_halo(void);
	/* Billboard: Billboard with Z-axis constraint */
	bool use_billboard(void);
	/* Shadow: Face is used for shadow */
	bool use_shadow_cast(void);
	/* Text: Enable bitmap text on face */
	bool use_bitmap_text(void);
	/* Alpha Sort: Enable sorting of faces for correct alpha drawing (slow, use Clip Alpha instead when possible) */
	bool use_alpha_sort(void);
	/* Transparency: Transparency blending mode */
	enum blend_type_enum {
		blend_type_OPAQUE = 0,
		blend_type_ADD = 1,
		blend_type_ALPHA = 2,
		blend_type_CLIPALPHA = 4,
	};
	blend_type_enum blend_type(void);
	/* UV Selected */
	Array<int, 4> select_uv(void);
	/* UV Pinned */
	Array<int, 4> pin_uv(void);
	/* UV 1 */
	Array<float, 2> uv1(void);
	/* UV 2 */
	Array<float, 2> uv2(void);
	/* UV 3 */
	Array<float, 2> uv3(void);
	/* UV 4 */
	Array<float, 2> uv4(void);
	/* UV */
	Array<float, 8> uv(void);
	/* UV: Fixed size UV coordinates array */
	Array<float, 8> uv_raw(void);
};

/**************** Mesh Vertex Sticky Texture Coordinate ****************/

class MeshSticky : public Pointer {
public:
	MeshSticky(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location: Sticky texture coordinate location */
	Array<float, 2> co(void);
};

/**************** Mesh Vertex Color Layer ****************/

class MeshColorLayer : public Pointer {
public:
	MeshColorLayer(const PointerRNA& ptr) :
		Pointer(ptr),
		data(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Active: Sets the layer as active for display and editing */
	bool active(void);
	/* Active Render: Sets the layer as active for rendering */
	bool active_render(void);
	/* Data */
	COLLECTION_PROPERTY(MeshColor, MeshColorLayer, data)
};

/**************** Mesh Vertex Color ****************/

class MeshColor : public Pointer {
public:
	MeshColor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Color 1 */
	Array<float, 3> color1(void);
	/* Color 2 */
	Array<float, 3> color2(void);
	/* Color 3 */
	Array<float, 3> color3(void);
	/* Color 4 */
	Array<float, 3> color4(void);
};

/**************** Mesh Float Property Layer ****************/

class MeshFloatPropertyLayer : public Pointer {
public:
	MeshFloatPropertyLayer(const PointerRNA& ptr) :
		Pointer(ptr),
		data(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Data */
	COLLECTION_PROPERTY(MeshFloatProperty, MeshFloatPropertyLayer, data)
};

/**************** Mesh Float Property ****************/

class MeshFloatProperty : public Pointer {
public:
	MeshFloatProperty(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Value */
	float value(void);
};

/**************** Mesh Int Property Layer ****************/

class MeshIntPropertyLayer : public Pointer {
public:
	MeshIntPropertyLayer(const PointerRNA& ptr) :
		Pointer(ptr),
		data(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Data */
	COLLECTION_PROPERTY(MeshIntProperty, MeshIntPropertyLayer, data)
};

/**************** Mesh Int Property ****************/

class MeshIntProperty : public Pointer {
public:
	MeshIntProperty(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Value */
	int value(void);
};

/**************** Mesh String Property Layer ****************/

class MeshStringPropertyLayer : public Pointer {
public:
	MeshStringPropertyLayer(const PointerRNA& ptr) :
		Pointer(ptr),
		data(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Data */
	COLLECTION_PROPERTY(MeshStringProperty, MeshStringPropertyLayer, data)
};

/**************** Mesh String Property ****************/

class MeshStringProperty : public Pointer {
public:
	MeshStringProperty(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Value */
	std::string value(void);
};

/**************** Meta Element ****************/

class MetaElement : public Pointer {
public:
	MetaElement(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Type: Metaball types */
	enum type_enum {
		type_BALL = 0,
		type_CAPSULE = 4,
		type_PLANE = 5,
		type_ELLIPSOID = 6,
		type_CUBE = 7,
	};
	type_enum type(void);
	/* Location */
	Array<float, 3> co(void);
	/* Rotation: Normalized quaternion rotation */
	Array<float, 4> rotation(void);
	/* Radius */
	float radius(void);
	/* Size X: Size of element, use of components depends on element type */
	float size_x(void);
	/* Size Y: Size of element, use of components depends on element type */
	float size_y(void);
	/* Size Z: Size of element, use of components depends on element type */
	float size_z(void);
	/* Stiffness: Stiffness defines how much of the element to fill */
	float stiffness(void);
	/* Negative: Set metaball as negative one */
	bool use_negative(void);
	/* Hide: Hide element */
	bool hide(void);
};

/**************** MetaBall ****************/

class MetaBall : public ID {
public:
	MetaBall(const PointerRNA& ptr) :
		ID(ptr),
		elements(ptr),
		materials(ptr)
		{}

	/* Elements: Meta elements */
	COLLECTION_PROPERTY(MetaElement, MetaBall, elements)
	/* Update: Metaball edit update behavior */
	enum update_method_enum {
		update_method_UPDATE_ALWAYS = 0,
		update_method_HALFRES = 1,
		update_method_FAST = 2,
		update_method_NEVER = 3,
	};
	update_method_enum update_method(void);
	/* Wire Size: Polygonization resolution in the 3D viewport */
	float resolution(void);
	/* Render Size: Polygonization resolution in rendering */
	float render_resolution(void);
	/* Threshold: Influence of meta elements */
	float threshold(void);
	/* Auto Texture Space: Adjusts active object's texture space automatically when transforming object */
	bool use_auto_texspace(void);
	/* Texture Space Location: Texture space location */
	Array<float, 3> texspace_location(void);
	/* Texture Space Size: Texture space size */
	Array<float, 3> texspace_size(void);
	/* Materials */
	COLLECTION_PROPERTY(Material, MetaBall, materials)
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
};

/**************** Meta Elements ****************/

class MetaBallElements : public Pointer {
public:
	MetaBallElements(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Element: Last selected element */
	MetaElement active(void);
};

/**************** Modifier ****************/

class Modifier : public Pointer {
public:
	Modifier(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Modifier name */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_ARRAY = 12,
		type_BEVEL = 24,
		type_BOOLEAN = 11,
		type_BUILD = 4,
		type_DECIMATE = 6,
		type_EDGE_SPLIT = 13,
		type_MASK = 27,
		type_MIRROR = 5,
		type_MULTIRES = 29,
		type_SCREW = 34,
		type_SOLIDIFY = 33,
		type_SUBSURF = 1,
		type_UV_PROJECT = 15,
		type_ARMATURE = 8,
		type_CAST = 17,
		type_CURVE = 3,
		type_DISPLACE = 14,
		type_HOOK = 9,
		type_LATTICE = 2,
		type_MESH_DEFORM = 18,
		type_SHRINKWRAP = 25,
		type_SIMPLE_DEFORM = 28,
		type_SMOOTH = 16,
		type_WAVE = 7,
		type_CLOTH = 22,
		type_COLLISION = 23,
		type_EXPLODE = 21,
		type_FLUID_SIMULATION = 26,
		type_PARTICLE_INSTANCE = 20,
		type_PARTICLE_SYSTEM = 19,
		type_SMOKE = 31,
		type_SOFT_BODY = 10,
		type_SURFACE = 30,
	};
	type_enum type(void);
	/* Realtime: Realtime display of a modifier */
	bool show_viewport(void);
	/* Render: Use modifier during rendering */
	bool show_render(void);
	/* Editmode: Use modifier while in the edit mode */
	bool show_in_editmode(void);
	/* On Cage: Enable direct editing of modifier control cage */
	bool show_on_cage(void);
	/* Expanded: Set modifier expanded in the user interface */
	bool show_expanded(void);
	/* Apply on spline: Apply this and all preceding deformation modifiers on splines' points rather than on filled curve/surface */
	bool use_apply_on_spline(void);
};

/**************** Subsurf Modifier ****************/

class SubsurfModifier : public Modifier {
public:
	SubsurfModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Subdivision Type: Selects type of subdivision algorithm */
	enum subdivision_type_enum {
		subdivision_type_CATMULL_CLARK = 0,
		subdivision_type_SIMPLE = 1,
	};
	subdivision_type_enum subdivision_type(void);
	/* Levels: Number of subdivisions to perform */
	int levels(void);
	/* Render Levels: Number of subdivisions to perform when rendering */
	int render_levels(void);
	/* Optimal Display: Skip drawing/rendering of interior subdivided edges */
	bool show_only_control_edges(void);
	/* Subdivide UVs: Use subsurf to subdivide UVs */
	bool use_subsurf_uv(void);
};

/**************** Lattice Modifier ****************/

class LatticeModifier : public Modifier {
public:
	LatticeModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Object: Lattice object to deform with */
	Object object(void);
	/* Vertex Group: Name of Vertex Group which determines influence of modifier per point */
	std::string vertex_group(void);
};

/**************** Curve Modifier ****************/

class CurveModifier : public Modifier {
public:
	CurveModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Object: Curve object to deform with */
	Object object(void);
	/* Vertex Group: Name of Vertex Group which determines influence of modifier per point */
	std::string vertex_group(void);
	/* Deform Axis: The axis that the curve deforms along */
	enum deform_axis_enum {
		deform_axis_POS_X = 1,
		deform_axis_POS_Y = 2,
		deform_axis_POS_Z = 3,
		deform_axis_NEG_X = 4,
		deform_axis_NEG_Y = 5,
		deform_axis_NEG_Z = 6,
	};
	deform_axis_enum deform_axis(void);
};

/**************** Build Modifier ****************/

class BuildModifier : public Modifier {
public:
	BuildModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Start: Specify the start frame of the effect */
	float frame_start(void);
	/* Length: Specify the total time the build effect requires */
	float frame_duration(void);
	/* Randomize: Randomize the faces or edges during build */
	bool use_random_order(void);
	/* Seed: Specify the seed for random if used */
	int seed(void);
};

/**************** Mirror Modifier ****************/

class MirrorModifier : public Modifier {
public:
	MirrorModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* X: Enable X axis mirror */
	bool use_x(void);
	/* Y: Enable Y axis mirror */
	bool use_y(void);
	/* Z: Enable Z axis mirror */
	bool use_z(void);
	/* Clip: Prevents vertices from going through the mirror during transform */
	bool use_clip(void);
	/* Mirror Vertex Groups: Mirror vertex groups (e.g. .R->.L) */
	bool use_mirror_vertex_groups(void);
	/* Merge Verticies: Merge vertices within the merge threshold */
	bool use_mirror_merge(void);
	/* Mirror U: Mirror the U texture coordinate around the 0.5 point */
	bool use_mirror_u(void);
	/* Mirror V: Mirror the V texture coordinate around the 0.5 point */
	bool use_mirror_v(void);
	/* Merge Limit: Distance from axis within which mirrored vertices are merged */
	float merge_threshold(void);
	/* Mirror Object: Object to use as mirror */
	Object mirror_object(void);
};

/**************** Decimate Modifier ****************/

class DecimateModifier : public Modifier {
public:
	DecimateModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Ratio: Defines the ratio of triangles to reduce to */
	float ratio(void);
	/* Face Count: The current number of faces in the decimated mesh */
	int face_count(void);
};

/**************** Wave Modifier ****************/

class WaveModifier : public Modifier {
public:
	WaveModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* X: X axis motion */
	bool use_x(void);
	/* Y: Y axis motion */
	bool use_y(void);
	/* Cyclic: Cyclic wave effect */
	bool use_cyclic(void);
	/* Normals: Displace along normals */
	bool use_normal(void);
	/* X Normal: Enable displacement along the X normal */
	bool use_normal_x(void);
	/* Y Normal: Enable displacement along the Y normal */
	bool use_normal_y(void);
	/* Z Normal: Enable displacement along the Z normal */
	bool use_normal_z(void);
	/* Time Offset: Either the starting frame (for positive speed) or ending frame (for negative speed.) */
	float time_offset(void);
	/* Lifetime */
	float lifetime(void);
	/* Damping Time */
	float damping_time(void);
	/* Falloff Radius */
	float falloff_radius(void);
	/* Start Position X */
	float start_position_x(void);
	/* Start Position Y */
	float start_position_y(void);
	/* Start Position Object */
	Object start_position_object(void);
	/* Vertex Group: Vertex group name for modulating the wave */
	std::string vertex_group(void);
	/* Texture: Texture for modulating the wave */
	Texture texture(void);
	/* Texture Coordinates: Texture coordinates used for modulating input */
	enum texture_coords_enum {
		texture_coords_LOCAL = 0,
		texture_coords_GLOBAL = 1,
		texture_coords_OBJECT = 2,
		texture_coords_MAP_UV = 3,
	};
	texture_coords_enum texture_coords(void);
	/* UV Layer: UV layer name */
	std::string uv_layer(void);
	/* Texture Coordinates Object */
	Object texture_coords_object(void);
	/* Speed */
	float speed(void);
	/* Height */
	float height(void);
	/* Width */
	float width(void);
	/* Narrowness */
	float narrowness(void);
};

/**************** Armature Modifier ****************/

class ArmatureModifier : public Modifier {
public:
	ArmatureModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Object: Armature object to deform with */
	Object object(void);
	/* Use Bone Envelopes */
	bool use_bone_envelopes(void);
	/* Use Vertex Groups */
	bool use_vertex_groups(void);
	/* Preserve Volume: Deform rotation interpolation with quaternions */
	bool use_deform_preserve_volume(void);
	/* Multi Modifier: Use same input as previous modifier, and mix results using overall vgroup */
	bool use_multi_modifier(void);
	/* Vertex Group: Name of Vertex Group which determines influence of modifier per point */
	std::string vertex_group(void);
	/* Invert: Invert vertex group influence */
	bool invert_vertex_group(void);
};

/**************** Hook Modifier ****************/

class HookModifier : public Modifier {
public:
	HookModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Falloff: If not zero, the distance from the hook where influence ends */
	float falloff(void);
	/* Force: Relative force of the hook */
	float force(void);
	/* Object: Parent Object for hook, also recalculates and clears offset */
	Object object(void);
	/* Sub-Target: Name of Parent Bone for hook (if applicable), also recalculates and clears offset */
	std::string subtarget(void);
	/* Vertex Group: Name of Vertex Group which determines influence of modifier per point */
	std::string vertex_group(void);
};

/**************** Soft Body Modifier ****************/

class SoftBodyModifier : public Modifier {
public:
	SoftBodyModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Soft Body Settings */
	SoftBodySettings settings(void);
	/* Soft Body Point Cache */
	PointCache point_cache(void);
};

/**************** Boolean Modifier ****************/

class BooleanModifier : public Modifier {
public:
	BooleanModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Object: Mesh object to use for Boolean operation */
	Object object(void);
	/* Operation */
	enum operation_enum {
		operation_INTERSECT = 0,
		operation_UNION = 1,
		operation_DIFFERENCE = 2,
	};
	operation_enum operation(void);
};

/**************** Array Modifier ****************/

class ArrayModifier : public Modifier {
public:
	ArrayModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Fit Type: Array length calculation method */
	enum fit_type_enum {
		fit_type_FIXED_COUNT = 0,
		fit_type_FIT_LENGTH = 1,
		fit_type_FIT_CURVE = 2,
	};
	fit_type_enum fit_type(void);
	/* Count: Number of duplicates to make */
	int count(void);
	/* Length: Length to fit array within */
	float fit_length(void);
	/* Curve: Curve object to fit array length to */
	Object curve(void);
	/* Constant Offset: Add a constant offset */
	bool use_constant_offset(void);
	/* Constant Offset Displacement */
	Array<float, 3> constant_offset_displace(void);
	/* Relative Offset: Add an offset relative to the object's bounding box */
	bool use_relative_offset(void);
	/* Relative Offset Displacement */
	Array<float, 3> relative_offset_displace(void);
	/* Merge Vertices: Merge vertices in adjacent duplicates */
	bool use_merge_vertices(void);
	/* Merge Vertices: Merge vertices in first and last duplicates */
	bool use_merge_vertices_cap(void);
	/* Merge Distance: Limit below which to merge vertices */
	float merge_threshold(void);
	/* Object Offset: Add another object's transformation to the total offset */
	bool use_object_offset(void);
	/* Object Offset */
	Object offset_object(void);
	/* Start Cap: Mesh object to use as a start cap */
	Object start_cap(void);
	/* End Cap: Mesh object to use as an end cap */
	Object end_cap(void);
};

/**************** EdgeSplit Modifier ****************/

class EdgeSplitModifier : public Modifier {
public:
	EdgeSplitModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Split Angle: Angle above which to split edges */
	float split_angle(void);
	/* Use Edge Angle: Split edges with high angle between faces */
	bool use_edge_angle(void);
	/* Use Sharp Edges: Split edges that are marked as sharp */
	bool use_edge_sharp(void);
};

/**************** Displace Modifier ****************/

class DisplaceModifier : public Modifier {
public:
	DisplaceModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Vertex Group: Name of Vertex Group which determines influence of modifier per point */
	std::string vertex_group(void);
	/* Texture */
	Texture texture(void);
	/* Midlevel: Material value that gives no displacement */
	float mid_level(void);
	/* Strength */
	float strength(void);
	/* Direction */
	enum direction_enum {
		direction_X = 0,
		direction_Y = 1,
		direction_Z = 2,
		direction_NORMAL = 3,
		direction_RGB_TO_XYZ = 4,
	};
	direction_enum direction(void);
	/* Texture Coordinates */
	enum texture_coords_enum {
		texture_coords_LOCAL = 0,
		texture_coords_GLOBAL = 1,
		texture_coords_OBJECT = 2,
		texture_coords_UV = 3,
	};
	texture_coords_enum texture_coords(void);
	/* UV Layer: UV layer name */
	std::string uv_layer(void);
	/* Texture Coordinate Object */
	Object texture_coordinate_object(void);
};

/**************** UV Project Modifier ****************/

class UVProjectModifier : public Modifier {
public:
	UVProjectModifier(const PointerRNA& ptr) :
		Modifier(ptr),
		projectors(ptr)
		{}

	/* UV Layer: UV layer name */
	std::string uv_layer(void);
	/* Number of Projectors: Number of projectors to use */
	int projector_count(void);
	/* Projectors */
	COLLECTION_PROPERTY(UVProjector, UVProjectModifier, projectors)
	/* Image */
	Image image(void);
	/* Horizontal Aspect Ratio */
	float aspect_x(void);
	/* Vertical Aspect Ratio */
	float aspect_y(void);
	/* Horizontal Scale */
	float scale_x(void);
	/* Vertical Scale */
	float scale_y(void);
	/* Override Image: Override faces' current images with the given image */
	bool use_image_override(void);
};

/**************** UVProjector ****************/

class UVProjector : public Pointer {
public:
	UVProjector(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Object: Object to use as projector transform */
	Object object(void);
};

/**************** Smooth Modifier ****************/

class SmoothModifier : public Modifier {
public:
	SmoothModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* X */
	bool use_x(void);
	/* Y */
	bool use_y(void);
	/* Z */
	bool use_z(void);
	/* Factor */
	float factor(void);
	/* Repeat */
	int iterations(void);
	/* Vertex Group: Name of Vertex Group which determines influence of modifier per point */
	std::string vertex_group(void);
};

/**************** Cast Modifier ****************/

class CastModifier : public Modifier {
public:
	CastModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Cast Type */
	enum cast_type_enum {
		cast_type_SPHERE = 0,
		cast_type_CYLINDER = 1,
		cast_type_CUBOID = 2,
	};
	cast_type_enum cast_type(void);
	/* Object: Control object: if available, its location determines the center of the effect */
	Object object(void);
	/* X */
	bool use_x(void);
	/* Y */
	bool use_y(void);
	/* Z */
	bool use_z(void);
	/* From Radius: Use radius as size of projection shape (0 = auto) */
	bool use_radius_as_size(void);
	/* Use transform: Use object transform to control projection shape */
	bool use_transform(void);
	/* Factor */
	float factor(void);
	/* Radius: Only deform vertices within this distance from the center of the effect (leave as 0 for infinite.) */
	float radius(void);
	/* Size: Size of projection shape (leave as 0 for auto.) */
	float size(void);
	/* Vertex Group: Vertex group name */
	std::string vertex_group(void);
};

/**************** MeshDeform Modifier ****************/

class MeshDeformModifier : public Modifier {
public:
	MeshDeformModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Object: Mesh object to deform with */
	Object object(void);
	/* Bound: Whether geometry has been bound to control cage */
	bool is_bound(void);
	/* Invert: Invert vertex group influence */
	bool invert_vertex_group(void);
	/* Vertex Group: Vertex group name */
	std::string vertex_group(void);
	/* Precision: The grid size for binding */
	int precision(void);
	/* Dynamic: Recompute binding dynamically on top of other deformers (slower and more memory consuming.) */
	bool use_dynamic_bind(void);
};

/**************** ParticleSystem Modifier ****************/

class ParticleSystemModifier : public Modifier {
public:
	ParticleSystemModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Particle System: Particle System that this modifier controls */
	ParticleSystem particle_system(void);
};

/**************** ParticleInstance Modifier ****************/

class ParticleInstanceModifier : public Modifier {
public:
	ParticleInstanceModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Object: Object that has the particle system */
	Object object(void);
	/* Particle System Number */
	int particle_system_index(void);
	/* Axis: Pole axis for rotation */
	enum axis_enum {
		axis_X = 0,
		axis_Y = 1,
		axis_Z = 2,
	};
	axis_enum axis(void);
	/* Normal: Create instances from normal particles */
	bool use_normal(void);
	/* Children: Create instances from child particles */
	bool use_children(void);
	/* Path: Create instances along particle paths */
	bool use_path(void);
	/* Unborn: Show instances when particles are unborn */
	bool show_unborn(void);
	/* Alive: Show instances when particles are alive */
	bool show_alive(void);
	/* Dead: Show instances when particles are dead */
	bool show_dead(void);
	/* Keep Shape: Don't stretch the object */
	bool use_preserve_shape(void);
	/* Size: Use particle size to scale the instances */
	bool use_size(void);
	/* Position: Position along path */
	float position(void);
	/* Random Position: Randomize position along path */
	float random_position(void);
};

/**************** Explode Modifier ****************/

class ExplodeModifier : public Modifier {
public:
	ExplodeModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Vertex Group */
	std::string vertex_group(void);
	/* Protect: Clean vertex group edges */
	float protect(void);
	/* Cut Edges: Cut face edges for nicer shrapnel */
	bool use_edge_cut(void);
	/* Unborn: Show mesh when particles are unborn */
	bool show_unborn(void);
	/* Alive: Show mesh when particles are alive */
	bool show_alive(void);
	/* Dead: Show mesh when particles are dead */
	bool show_dead(void);
	/* Size: Use particle size for the shrapnel */
	bool use_size(void);
	/* Particle UV: UV Layer to change with particle age */
	std::string particle_uv(void);
};

/**************** Cloth Modifier ****************/

class ClothModifier : public Modifier {
public:
	ClothModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Cloth Settings */
	ClothSettings settings(void);
	/* Cloth Collision Settings */
	ClothCollisionSettings collision_settings(void);
	/* Point Cache */
	PointCache point_cache(void);
};

/**************** Collision Modifier ****************/

class CollisionModifier : public Modifier {
public:
	CollisionModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Settings */
	CollisionSettings settings(void);
};

/**************** Bevel Modifier ****************/

class BevelModifier : public Modifier {
public:
	BevelModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Width: Bevel value/amount */
	float width(void);
	/* Only Vertices: Bevel verts/corners, not edges */
	bool use_only_vertices(void);
	/* Limit Method */
	enum limit_method_enum {
		limit_method_NONE = 0,
		limit_method_ANGLE = 8,
		limit_method_WEIGHT = 16,
	};
	limit_method_enum limit_method(void);
	/* Edge Weight Method: What edge weight to use for weighting a vertex */
	enum edge_weight_method_enum {
		edge_weight_method_AVERAGE = 0,
		edge_weight_method_SHARPEST = 128,
		edge_weight_method_LARGEST = 256,
	};
	edge_weight_method_enum edge_weight_method(void);
	/* Angle: Angle above which to bevel edges */
	float angle_limit(void);
};

/**************** Shrinkwrap Modifier ****************/

class ShrinkwrapModifier : public Modifier {
public:
	ShrinkwrapModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Mode */
	enum wrap_method_enum {
		wrap_method_NEAREST_SURFACEPOINT = 0,
		wrap_method_PROJECT = 1,
		wrap_method_NEAREST_VERTEX = 2,
	};
	wrap_method_enum wrap_method(void);
	/* Face Cull: Stop vertices from projecting to a the face on the target when facing towards/away */
	enum cull_face_enum {
		cull_face_OFF = 0,
		cull_face_FRONT = 8,
		cull_face_BACK = 16,
	};
	cull_face_enum cull_face(void);
	/* Target: Mesh target to shrink to */
	Object target(void);
	/* Auxiliary Target: Additional mesh target to shrink to */
	Object auxiliary_target(void);
	/* Vertex Group: Vertex group name */
	std::string vertex_group(void);
	/* Offset: Distance to keep from the target */
	float offset(void);
	/* X */
	bool use_project_x(void);
	/* Y */
	bool use_project_y(void);
	/* Z */
	bool use_project_z(void);
	/* Subsurf Levels: Number of subdivisions that must be performed before extracting vertices' positions and normals */
	int subsurf_levels(void);
	/* Negative: Allow vertices to move in the negative direction of axis */
	bool use_negative_direction(void);
	/* Positive: Allow vertices to move in the positive direction of axis */
	bool use_positive_direction(void);
	/* Keep Above Surface */
	bool use_keep_above_surface(void);
};

/**************** Fluid Simulation Modifier ****************/

class FluidSimulationModifier : public Modifier {
public:
	FluidSimulationModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Settings: Settings for how this object is used in the fluid simulation */
	FluidSettings settings(void);
};

/**************** Mask Modifier ****************/

class MaskModifier : public Modifier {
public:
	MaskModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Mode */
	enum mode_enum {
		mode_VERTEX_GROUP = 0,
		mode_ARMATURE = 1,
	};
	mode_enum mode(void);
	/* Armature: Armature to use as source of bones to mask */
	Object armature(void);
	/* Vertex Group: Vertex group name */
	std::string vertex_group(void);
	/* Invert: Use vertices that are not part of region defined */
	bool invert_vertex_group(void);
};

/**************** SimpleDeform Modifier ****************/

class SimpleDeformModifier : public Modifier {
public:
	SimpleDeformModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Mode */
	enum deform_method_enum {
		deform_method_TWIST = 1,
		deform_method_BEND = 2,
		deform_method_TAPER = 3,
		deform_method_STRETCH = 4,
	};
	deform_method_enum deform_method(void);
	/* Vertex Group: Vertex group name */
	std::string vertex_group(void);
	/* Origin: Origin of modifier space coordinates */
	Object origin(void);
	/* Relative: Sets the origin of deform space to be relative to the object */
	bool use_relative(void);
	/* Factor */
	float factor(void);
	/* Limits: Lower/Upper limits for deform */
	Array<float, 2> limits(void);
	/* Lock X Axis */
	bool lock_x(void);
	/* Lock Y Axis */
	bool lock_y(void);
};

/**************** Multires Modifier ****************/

class MultiresModifier : public Modifier {
public:
	MultiresModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Subdivision Type: Selects type of subdivision algorithm */
	enum subdivision_type_enum {
		subdivision_type_CATMULL_CLARK = 0,
		subdivision_type_SIMPLE = 1,
	};
	subdivision_type_enum subdivision_type(void);
	/* Levels: Number of subdivisions to use in the viewport */
	int levels(void);
	/* Sculpt Levels: Number of subdivisions to use in sculpt mode */
	int sculpt_levels(void);
	/* Render Levels */
	int render_levels(void);
	/* Total Levels: Number of subdivisions for which displacements are stored */
	int total_levels(void);
	/* External: Store multires displacements outside the .blend file, to save memory */
	bool is_external(void);
	/* File Path: Path to external displacements file */
	std::string filepath(void);
	/* Optimal Display: Skip drawing/rendering of interior subdivided edges */
	bool show_only_control_edges(void);
};

/**************** Surface Modifier ****************/

class SurfaceModifier : public Modifier {
public:
	SurfaceModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

};

/**************** Smoke Modifier ****************/

class SmokeModifier : public Modifier {
public:
	SmokeModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Domain Settings */
	SmokeDomainSettings domain_settings(void);
	/* Flow Settings */
	SmokeFlowSettings flow_settings(void);
	/* Collision Settings */
	SmokeCollSettings coll_settings(void);
	/* Type */
	enum smoke_type_enum {
		smoke_type_NONE = 0,
		smoke_type_DOMAIN = 1,
		smoke_type_FLOW = 2,
		smoke_type_COLLISION = 4,
	};
	smoke_type_enum smoke_type(void);
};

/**************** Solidify Modifier ****************/

class SolidifyModifier : public Modifier {
public:
	SolidifyModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Thickness: Thickness of the shell */
	float thickness(void);
	/* Offset: Offset the thickness from the center */
	float offset(void);
	/* Inner Crease: Assign a crease to inner edges */
	float edge_crease_inner(void);
	/* Outer Crease: Assign a crease to outer edges */
	float edge_crease_outer(void);
	/* Rim Crease: Assign a crease to the edges making up the rim */
	float edge_crease_rim(void);
	/* Material Offset: Offset material index of generated faces */
	int material_offset(void);
	/* Rim Material Offset: Offset material index of generated rim faces */
	int material_offset_rim(void);
	/* Vertex Group: Vertex group name */
	std::string vertex_group(void);
	/* Fill Rim: Create edge loops between the inner and outer surfaces on face edges (slow, disable when not needed) */
	bool use_rim(void);
	/* Even Thickness: Maintain thickness by adjusting for sharp corners (slow, disable when not needed) */
	bool use_even_offset(void);
	/* High Quality Normals: Calculate normals which result in more even thickness (slow, disable when not needed) */
	bool use_quality_normals(void);
	/* Vertex Group Invert: Invert the vertex group influence */
	bool invert_vertex_group(void);
};

/**************** Screw Modifier ****************/

class ScrewModifier : public Modifier {
public:
	ScrewModifier(const PointerRNA& ptr) :
		Modifier(ptr)
		{}

	/* Object: Object to define the screw axis */
	Object object(void);
	/* Steps: Number of steps in the revolution */
	int steps(void);
	/* Render Steps: Number of steps in the revolution */
	int render_steps(void);
	/* Iterations: Number of times to apply the screw operation */
	int iterations(void);
	/* Axis: Screw axis */
	enum axis_enum {
		axis_X = 0,
		axis_Y = 1,
		axis_Z = 2,
	};
	axis_enum axis(void);
	/* Angle: Angle of revolution */
	float angle(void);
	/* Screw: Offset the revolution along its axis */
	float screw_offset(void);
	/* Flip: Flip normals of lathed faces */
	bool use_normal_flip(void);
	/* Calc Order: Calculate the order of edges (needed for meshes, but not curves) */
	bool use_normal_calculate(void);
	/* Object Screw: Use the distance between the objects to make a screw */
	bool use_object_screw_offset(void);
};

/**************** NLA Track ****************/

class NlaTrack : public Pointer {
public:
	NlaTrack(const PointerRNA& ptr) :
		Pointer(ptr),
		strips(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* NLA Strips: NLA Strips on this NLA-track */
	COLLECTION_PROPERTY(NlaStrip, NlaTrack, strips)
	/* Name */
	std::string name(void);
	/* Active: NLA Track is active */
	bool active(void);
	/* Solo: NLA Track is evaluated itself (i.e. active Action and all other NLA Tracks in the same AnimData block are disabled) */
	bool is_solo(void);
	/* Select: NLA Track is selected */
	bool select(void);
	/* Muted: NLA Track is not evaluated */
	bool mute(void);
	/* Locked: NLA Track is locked */
	bool lock(void);
};

/**************** Nla Strips ****************/

class NlaStrips : public Pointer {
public:
	NlaStrips(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** NLA Strip ****************/

class NlaStrip : public Pointer {
public:
	NlaStrip(const PointerRNA& ptr) :
		Pointer(ptr),
		fcurves(ptr),
		modifiers(ptr),
		strips(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Type: Type of NLA Strip */
	enum type_enum {
		type_CLIP = 0,
		type_TRANSITION = 1,
		type_META = 2,
	};
	type_enum type(void);
	/* Extrapolation: Action to take for gaps past the strip extents */
	enum extrapolation_enum {
		extrapolation_NOTHING = 2,
		extrapolation_HOLD = 0,
		extrapolation_HOLD_FORWARD = 1,
	};
	extrapolation_enum extrapolation(void);
	/* Blending: Method used for combining strip's result with accumulated result */
	enum blend_type_enum {
		blend_type_REPLACE = 0,
		blend_type_ADD = 1,
		blend_type_SUBTRACT = 2,
		blend_type_MULITPLY = 3,
	};
	blend_type_enum blend_type(void);
	/* Start Frame */
	float frame_start(void);
	/* End Frame */
	float frame_end(void);
	/* Blend In: Number of frames at start of strip to fade in influence */
	float blend_in(void);
	/* Blend Out */
	float blend_out(void);
	/* Auto Blend In/Out: Number of frames for Blending In/Out is automatically determined from overlapping strips */
	bool use_auto_blend(void);
	/* Action: Action referenced by this strip */
	Action action(void);
	/* Action Start Frame */
	float action_frame_start(void);
	/* Action End Frame */
	float action_frame_end(void);
	/* Repeat: Number of times to repeat the action range */
	float repeat(void);
	/* Scale: Scaling factor for action */
	float scale(void);
	/* F-Curves: F-Curves for controlling the strip's influence and timing */
	COLLECTION_PROPERTY(FCurve, NlaStrip, fcurves)
	/* Modifiers: Modifiers affecting all the F-Curves in the referenced Action */
	COLLECTION_PROPERTY(FModifier, NlaStrip, modifiers)
	/* NLA Strips: NLA Strips that this strip acts as a container for (if it is of type Meta) */
	COLLECTION_PROPERTY(NlaStrip, NlaStrip, strips)
	/* Influence: Amount the strip contributes to the current result */
	float influence(void);
	/* Strip Time: Frame of referenced Action to evaluate */
	float strip_time(void);
	/* Animated Influence: Influence setting is controlled by an F-Curve rather than automatically determined */
	bool use_animated_influence(void);
	/* Animated Strip Time: Strip time is controlled by an F-Curve rather than automatically determined */
	bool use_animated_time(void);
	/* Cyclic Strip Time: Cycle the animated time within the action start & end */
	bool use_animated_time_cyclic(void);
	/* Active: NLA Strip is active */
	bool active(void);
	/* Select: NLA Strip is selected */
	bool select(void);
	/* Muted: NLA Strip is not evaluated */
	bool mute(void);
	/* Reversed: NLA Strip is played back in reverse order (only when timing is automatically determined) */
	bool use_reverse(void);
};

/**************** Node Tree ****************/

class NodeTree : public ID {
public:
	NodeTree(const PointerRNA& ptr) :
		ID(ptr),
		links(ptr),
		inputs(ptr),
		outputs(ptr)
		{}

	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Links */
	COLLECTION_PROPERTY(NodeLink, NodeTree, links)
	/* Grease Pencil Data: Grease Pencil datablock */
	GreasePencil grease_pencil(void);
	/* Type: Node Tree type */
	enum type_enum {
		type_SHADER = 0,
		type_COMPOSITE = 1,
		type_TEXTURE = 2,
	};
	type_enum type(void);
	/* Inputs */
	COLLECTION_PROPERTY(NodeSocket, NodeTree, inputs)
	/* Outputs */
	COLLECTION_PROPERTY(NodeSocket, NodeTree, outputs)
};

/**************** Node Links ****************/

class NodeLinks : public Pointer {
public:
	NodeLinks(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Group Sockets ****************/

class GroupInputs : public Pointer {
public:
	GroupInputs(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Group Sockets ****************/

class GroupOutputs : public Pointer {
public:
	GroupOutputs(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Node Socket ****************/

class NodeSocket : public Pointer {
public:
	NodeSocket(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Socket name */
	std::string name(void);
	/* Type: Node Socket type */
	enum type_enum {
		type_VALUE = 0,
		type_VECTOR = 1,
		type_RGBA = 2,
	};
	type_enum type(void);
};

/**************** Value Node Socket ****************/

class ValueNodeSocket : public NodeSocket {
public:
	ValueNodeSocket(const PointerRNA& ptr) :
		NodeSocket(ptr)
		{}

	/* Default Value: Default value of the socket when no link is attached */
	Array<float, 1> default_value(void);
};

/**************** Vector Node Socket ****************/

class VectorNodeSocket : public NodeSocket {
public:
	VectorNodeSocket(const PointerRNA& ptr) :
		NodeSocket(ptr)
		{}

	/* Default Value: Default value of the socket when no link is attached */
	Array<float, 3> default_value(void);
};

/**************** RGBA Node Socket ****************/

class RGBANodeSocket : public NodeSocket {
public:
	RGBANodeSocket(const PointerRNA& ptr) :
		NodeSocket(ptr)
		{}

	/* Default Value: Default value of the socket when no link is attached */
	Array<float, 4> default_value(void);
};

/**************** Node ****************/

class Node : public Pointer {
public:
	Node(const PointerRNA& ptr) :
		Pointer(ptr),
		inputs(ptr),
		outputs(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location */
	Array<float, 2> location(void);
	/* Name: Node name */
	std::string name(void);
	/* Inputs */
	COLLECTION_PROPERTY(NodeSocket, Node, inputs)
	/* Outputs */
	COLLECTION_PROPERTY(NodeSocket, Node, outputs)
};

/**************** NodeLink ****************/

class NodeLink : public Pointer {
public:
	NodeLink(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* From node */
	Node from_node(void);
	/* To node */
	Node to_node(void);
	/* From socket */
	NodeSocket from_socket(void);
	/* To socket */
	NodeSocket to_socket(void);
};

/**************** Shader Node ****************/

class ShaderNode : public Node {
public:
	ShaderNode(const PointerRNA& ptr) :
		Node(ptr)
		{}

	/* Type */
	enum type_enum {
		type_OUTPUT = 1,
		type_MATERIAL = 100,
		type_RGB = 101,
		type_VALUE = 102,
		type_MIX_RGB = 103,
		type_VALTORGB = 104,
		type_RGBTOBW = 105,
		type_TEXTURE = 106,
		type_NORMAL = 107,
		type_GEOMETRY = 108,
		type_MAPPING = 109,
		type_CURVE_VEC = 110,
		type_CURVE_RGB = 111,
		type_CAMERA = 114,
		type_MATH = 115,
		type_VECT_MATH = 116,
		type_SQUEEZE = 117,
		type_MATERIAL_EXT = 118,
		type_INVERT = 119,
		type_SEPRGB = 120,
		type_COMBRGB = 121,
		type_HUE_SAT = 122,
		type_SCRIPT = 123,
		type_GROUP = 2,
	};
	type_enum type(void);
};

/**************** Compositor Node ****************/

class CompositorNode : public Node {
public:
	CompositorNode(const PointerRNA& ptr) :
		Node(ptr)
		{}

	/* Type */
	enum type_enum {
		type_VIEWER = 201,
		type_RGB = 202,
		type_VALUE = 203,
		type_MIX_RGB = 204,
		type_VALTORGB = 205,
		type_RGBTOBW = 206,
		type_NORMAL = 207,
		type_CURVE_VEC = 208,
		type_CURVE_RGB = 209,
		type_ALPHAOVER = 210,
		type_BLUR = 211,
		type_FILTER = 212,
		type_MAP_VALUE = 213,
		type_TIME = 214,
		type_VECBLUR = 215,
		type_SEPRGBA = 216,
		type_SEPHSVA = 217,
		type_SETALPHA = 218,
		type_HUE_SAT = 219,
		type_IMAGE = 220,
		type_R_LAYERS = 221,
		type_COMPOSITE = 222,
		type_OUTPUT_FILE = 223,
		type_TEXTURE = 224,
		type_TRANSLATE = 225,
		type_ZCOMBINE = 226,
		type_COMBRGBA = 227,
		type_DILATEERODE = 228,
		type_ROTATE = 229,
		type_SCALE = 230,
		type_SEPYCCA = 231,
		type_COMBYCCA = 232,
		type_SEPYUVA = 233,
		type_COMBYUVA = 234,
		type_DIFF_MATTE = 235,
		type_COLOR_SPILL = 236,
		type_CHROMA_MATTE = 237,
		type_CHANNEL_MATTE = 238,
		type_FLIP = 239,
		type_SPLITVIEWER = 240,
		type_MAP_UV = 242,
		type_ID_MASK = 243,
		type_DEFOCUS = 244,
		type_DISPLACE = 245,
		type_COMBHSVA = 246,
		type_MATH = 247,
		type_LUMA_MATTE = 248,
		type_BRIGHTCONTRAST = 249,
		type_GAMMA = 250,
		type_INVERT = 251,
		type_NORMALIZE = 252,
		type_CROP = 253,
		type_DBLUR = 254,
		type_BILATERALBLUR = 255,
		type_PREMULKEY = 256,
		type_DISTANCE_MATTE = 257,
		type_LEVELS = 258,
		type_COLOR_MATTE = 259,
		type_COLORBALANCE = 260,
		type_HUECORRECT = 261,
		type_GLARE = 301,
		type_TONEMAP = 302,
		type_LENSDIST = 303,
		type_SCRIPT = 123,
		type_GROUP = 2,
	};
	type_enum type(void);
};

/**************** Texture Node ****************/

class TextureNode : public Node {
public:
	TextureNode(const PointerRNA& ptr) :
		Node(ptr)
		{}

	/* Type */
	enum type_enum {
		type_OUTPUT = 401,
		type_CHECKER = 402,
		type_TEXTURE = 403,
		type_BRICKS = 404,
		type_MATH = 405,
		type_MIX_RGB = 406,
		type_RGBTOBW = 407,
		type_VALTORGB = 408,
		type_IMAGE = 409,
		type_CURVE_RGB = 410,
		type_INVERT = 411,
		type_HUE_SAT = 412,
		type_CURVE_TIME = 413,
		type_ROTATE = 414,
		type_VIEWER = 415,
		type_TRANSLATE = 416,
		type_COORD = 417,
		type_DISTANCE = 418,
		type_COMPOSE = 419,
		type_DECOMPOSE = 420,
		type_VALTONOR = 421,
		type_SCALE = 422,
		type_SCRIPT = 123,
		type_GROUP = 2,
	};
	type_enum type(void);
};

/**************** Compositor Node Tree ****************/

class CompositorNodeTree : public NodeTree {
public:
	CompositorNodeTree(const PointerRNA& ptr) :
		NodeTree(ptr),
		nodes(ptr)
		{}

	/* Nodes */
	COLLECTION_PROPERTY(Node, CompositorNodeTree, nodes)
};

/**************** Compositor Nodes ****************/

class CompositorNodes : public Pointer {
public:
	CompositorNodes(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Shader Node Tree ****************/

class ShaderNodeTree : public NodeTree {
public:
	ShaderNodeTree(const PointerRNA& ptr) :
		NodeTree(ptr),
		nodes(ptr)
		{}

	/* Nodes */
	COLLECTION_PROPERTY(Node, ShaderNodeTree, nodes)
};

/**************** Shader Nodes ****************/

class ShaderNodes : public Pointer {
public:
	ShaderNodes(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Texture Node Tree ****************/

class TextureNodeTree : public NodeTree {
public:
	TextureNodeTree(const PointerRNA& ptr) :
		NodeTree(ptr),
		nodes(ptr)
		{}

	/* Nodes */
	COLLECTION_PROPERTY(Node, TextureNodeTree, nodes)
};

/**************** Texture Nodes ****************/

class TextureNodes : public Pointer {
public:
	TextureNodes(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Output ****************/

class ShaderNodeOutput : public ShaderNode {
public:
	ShaderNodeOutput(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Material ****************/

class ShaderNodeMaterial : public ShaderNode {
public:
	ShaderNodeMaterial(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Material */
	Material material(void);
	/* Diffuse: Material Node outputs Diffuse */
	bool use_diffuse(void);
	/* Specular: Material Node outputs Specular */
	bool use_specular(void);
	/* Invert Normal: Material Node uses inverted normal */
	bool invert_normal(void);
};

/**************** RGB ****************/

class ShaderNodeRGB : public ShaderNode {
public:
	ShaderNodeRGB(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Value ****************/

class ShaderNodeValue : public ShaderNode {
public:
	ShaderNodeValue(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** MixRGB ****************/

class ShaderNodeMixRGB : public ShaderNode {
public:
	ShaderNodeMixRGB(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Blend Type */
	enum blend_type_enum {
		blend_type_MIX = 0,
		blend_type_ADD = 1,
		blend_type_SUBTRACT = 3,
		blend_type_MULTIPLY = 2,
		blend_type_SCREEN = 4,
		blend_type_OVERLAY = 9,
		blend_type_DIVIDE = 5,
		blend_type_DIFFERENCE = 6,
		blend_type_DARKEN = 7,
		blend_type_LIGHTEN = 8,
		blend_type_DODGE = 10,
		blend_type_BURN = 11,
		blend_type_COLOR = 15,
		blend_type_VALUE = 14,
		blend_type_SATURATION = 13,
		blend_type_HUE = 12,
		blend_type_SOFT_LIGHT = 16,
		blend_type_LINEAR_LIGHT = 17,
	};
	blend_type_enum blend_type(void);
	/* Alpha: Include alpha of second input in this operation */
	bool use_alpha(void);
};

/**************** Value to RGB ****************/

class ShaderNodeValToRGB : public ShaderNode {
public:
	ShaderNodeValToRGB(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Color Ramp */
	ColorRamp color_ramp(void);
};

/**************** RGB to BW ****************/

class ShaderNodeRGBToBW : public ShaderNode {
public:
	ShaderNodeRGBToBW(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Texture ****************/

class ShaderNodeTexture : public ShaderNode {
public:
	ShaderNodeTexture(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Texture */
	Texture texture(void);
	/* Node Output: For node-based textures, which output node to use */
	int node_output(void);
};

/**************** Normal ****************/

class ShaderNodeNormal : public ShaderNode {
public:
	ShaderNodeNormal(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Geometry ****************/

class ShaderNodeGeometry : public ShaderNode {
public:
	ShaderNodeGeometry(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* UV Layer */
	std::string uv_layer(void);
	/* Vertex Color Layer */
	std::string color_layer(void);
};

/**************** Mapping ****************/

class ShaderNodeMapping : public ShaderNode {
public:
	ShaderNodeMapping(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Location: Location offset for the input coordinate */
	Array<float, 3> location(void);
	/* Rotation: Rotation offset for the input coordinate */
	Array<float, 3> rotation(void);
	/* Scale: Scale adjustment for the input coordinate */
	Array<float, 3> scale(void);
	/* Clamp Minimum: Clamp the output coordinate to a minimum value */
	bool use_min(void);
	/* Minimum: Minimum value to clamp coordinate to */
	Array<float, 3> min(void);
	/* Clamp Maximum: Clamp the output coordinate to a maximum value */
	bool use_max(void);
	/* Maximum: Maximum value to clamp coordinate to */
	Array<float, 3> max(void);
};

/**************** Vector Curve ****************/

class ShaderNodeVectorCurve : public ShaderNode {
public:
	ShaderNodeVectorCurve(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Mapping */
	CurveMapping mapping(void);
};

/**************** RGB Curve ****************/

class ShaderNodeRGBCurve : public ShaderNode {
public:
	ShaderNodeRGBCurve(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Mapping */
	CurveMapping mapping(void);
};

/**************** Camera Data ****************/

class ShaderNodeCameraData : public ShaderNode {
public:
	ShaderNodeCameraData(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Math ****************/

class ShaderNodeMath : public ShaderNode {
public:
	ShaderNodeMath(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Operation */
	enum operation_enum {
		operation_ADD = 0,
		operation_SUBTRACT = 1,
		operation_MULTIPLY = 2,
		operation_DIVIDE = 3,
		operation_SINE = 4,
		operation_COSINE = 5,
		operation_TANGENT = 6,
		operation_ARCSINE = 7,
		operation_ARCCOSINE = 8,
		operation_ARCTANGENT = 9,
		operation_POWER = 10,
		operation_LOGARITHM = 11,
		operation_MINIMUM = 12,
		operation_MAXIMUM = 13,
		operation_ROUND = 14,
		operation_LESS_THAN = 15,
		operation_GREATER_THAN = 16,
	};
	operation_enum operation(void);
};

/**************** Vector Math ****************/

class ShaderNodeVectorMath : public ShaderNode {
public:
	ShaderNodeVectorMath(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Operation */
	enum operation_enum {
		operation_ADD = 0,
		operation_SUBTRACT = 1,
		operation_AVERAGE = 2,
		operation_DOT_PRODUCT = 3,
		operation_CROSS_PRODUCT = 4,
		operation_NORMALIZE = 5,
	};
	operation_enum operation(void);
};

/**************** Squeeze ****************/

class ShaderNodeSqueeze : public ShaderNode {
public:
	ShaderNodeSqueeze(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Extended Material ****************/

class ShaderNodeExtendedMaterial : public ShaderNode {
public:
	ShaderNodeExtendedMaterial(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

	/* Material */
	Material material(void);
	/* Diffuse: Material Node outputs Diffuse */
	bool use_diffuse(void);
	/* Specular: Material Node outputs Specular */
	bool use_specular(void);
	/* Invert Normal: Material Node uses inverted normal */
	bool invert_normal(void);
};

/**************** Invert ****************/

class ShaderNodeInvert : public ShaderNode {
public:
	ShaderNodeInvert(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Separate RGB ****************/

class ShaderNodeSeparateRGB : public ShaderNode {
public:
	ShaderNodeSeparateRGB(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Combine RGB ****************/

class ShaderNodeCombineRGB : public ShaderNode {
public:
	ShaderNodeCombineRGB(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Hue/Saturation ****************/

class ShaderNodeHueSaturation : public ShaderNode {
public:
	ShaderNodeHueSaturation(const PointerRNA& ptr) :
		ShaderNode(ptr)
		{}

};

/**************** Viewer ****************/

class CompositorNodeViewer : public CompositorNode {
public:
	CompositorNodeViewer(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** RGB ****************/

class CompositorNodeRGB : public CompositorNode {
public:
	CompositorNodeRGB(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Value ****************/

class CompositorNodeValue : public CompositorNode {
public:
	CompositorNodeValue(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Mix RGB ****************/

class CompositorNodeMixRGB : public CompositorNode {
public:
	CompositorNodeMixRGB(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Blend Type */
	enum blend_type_enum {
		blend_type_MIX = 0,
		blend_type_ADD = 1,
		blend_type_SUBTRACT = 3,
		blend_type_MULTIPLY = 2,
		blend_type_SCREEN = 4,
		blend_type_OVERLAY = 9,
		blend_type_DIVIDE = 5,
		blend_type_DIFFERENCE = 6,
		blend_type_DARKEN = 7,
		blend_type_LIGHTEN = 8,
		blend_type_DODGE = 10,
		blend_type_BURN = 11,
		blend_type_COLOR = 15,
		blend_type_VALUE = 14,
		blend_type_SATURATION = 13,
		blend_type_HUE = 12,
		blend_type_SOFT_LIGHT = 16,
		blend_type_LINEAR_LIGHT = 17,
	};
	blend_type_enum blend_type(void);
	/* Alpha: Include alpha of second input in this operation */
	bool use_alpha(void);
};

/**************** Val to RGB ****************/

class CompositorNodeValToRGB : public CompositorNode {
public:
	CompositorNodeValToRGB(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Color Ramp */
	ColorRamp color_ramp(void);
};

/**************** RGB to BW ****************/

class CompositorNodeRGBToBW : public CompositorNode {
public:
	CompositorNodeRGBToBW(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Normal ****************/

class CompositorNodeNormal : public CompositorNode {
public:
	CompositorNodeNormal(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Vector Curve ****************/

class CompositorNodeCurveVec : public CompositorNode {
public:
	CompositorNodeCurveVec(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Mapping */
	CurveMapping mapping(void);
};

/**************** RGB Curve ****************/

class CompositorNodeCurveRGB : public CompositorNode {
public:
	CompositorNodeCurveRGB(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Mapping */
	CurveMapping mapping(void);
};

/**************** Alpha Over ****************/

class CompositorNodeAlphaOver : public CompositorNode {
public:
	CompositorNodeAlphaOver(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Convert Premul */
	bool use_premultiply(void);
	/* Premul: Mix Factor */
	float premul(void);
};

/**************** Blur ****************/

class CompositorNodeBlur : public CompositorNode {
public:
	CompositorNodeBlur(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Size X */
	int size_x(void);
	/* Size Y */
	int size_y(void);
	/* Relative: Use relative (percent) values to define blur radius */
	bool use_relative(void);
	/* Aspect Correction: Type of aspect correction to use */
	enum aspect_correction_enum {
		aspect_correction_NONE = 0,
		aspect_correction_Y = 1,
		aspect_correction_X = 2,
	};
	aspect_correction_enum aspect_correction(void);
	/* Factor */
	float factor(void);
	/* Relative Size X */
	float factor_x(void);
	/* Relative Size Y */
	float factor_y(void);
	/* Filter Type */
	enum filter_type_enum {
		filter_type_FLAT = 0,
		filter_type_TENT = 1,
		filter_type_QUAD = 2,
		filter_type_CUBIC = 3,
		filter_type_GAUSS = 5,
		filter_type_FAST_GAUSS = 7,
		filter_type_CATROM = 4,
		filter_type_MITCH = 6,
	};
	filter_type_enum filter_type(void);
	/* Bokeh: Uses circular filter (slower) */
	bool use_bokeh(void);
	/* Gamma: Applies filter on gamma corrected values */
	bool use_gamma_correction(void);
};

/**************** Filter ****************/

class CompositorNodeFilter : public CompositorNode {
public:
	CompositorNodeFilter(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Filter Type */
	enum filter_type_enum {
		filter_type_SOFTEN = 0,
		filter_type_SHARPEN = 1,
		filter_type_LAPLACE = 2,
		filter_type_SOBEL = 3,
		filter_type_PREWITT = 4,
		filter_type_KIRSCH = 5,
		filter_type_SHADOW = 6,
	};
	filter_type_enum filter_type(void);
};

/**************** Map Value ****************/

class CompositorNodeMapValue : public CompositorNode {
public:
	CompositorNodeMapValue(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Offset */
	Array<float, 1> offset(void);
	/* Size */
	Array<float, 1> size(void);
	/* Use Minimum */
	bool use_min(void);
	/* Use Maximum */
	bool use_max(void);
	/* Minimum */
	Array<float, 1> min(void);
	/* Maximum */
	Array<float, 1> max(void);
};

/**************** Time ****************/

class CompositorNodeTime : public CompositorNode {
public:
	CompositorNodeTime(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Curve */
	CurveMapping curve(void);
	/* Start Frame */
	int frame_start(void);
	/* End Frame */
	int frame_end(void);
};

/**************** Vector Blur ****************/

class CompositorNodeVecBlur : public CompositorNode {
public:
	CompositorNodeVecBlur(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Samples */
	int samples(void);
	/* Min Speed: Minimum speed for a pixel to be blurred; used to separate background from foreground */
	int speed_min(void);
	/* Max Speed: Maximum speed, or zero for none */
	int speed_max(void);
	/* Blur Factor: Scaling factor for motion vectors; actually 'shutter speed' in frames */
	float factor(void);
	/* Curved: Interpolate between frames in a bezier curve, rather than linearly */
	bool use_curved(void);
};

/**************** Separate RGBA ****************/

class CompositorNodeSepRGBA : public CompositorNode {
public:
	CompositorNodeSepRGBA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Separate HSVA ****************/

class CompositorNodeSepHSVA : public CompositorNode {
public:
	CompositorNodeSepHSVA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Set Alpha ****************/

class CompositorNodeSetAlpha : public CompositorNode {
public:
	CompositorNodeSetAlpha(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Hue/Saturation ****************/

class CompositorNodeHueSat : public CompositorNode {
public:
	CompositorNodeHueSat(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Hue */
	float color_hue(void);
	/* Saturation */
	float color_saturation(void);
	/* Value */
	float color_value(void);
};

/**************** Image ****************/

class CompositorNodeImage : public CompositorNode {
public:
	CompositorNodeImage(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Image */
	Image image(void);
	/* Frames: Number of images used in animation */
	int frame_duration(void);
	/* Start Frame */
	int frame_start(void);
	/* Offset: Offsets the number of the frame to use in the animation */
	int frame_offset(void);
	/* Cyclic */
	bool use_cyclic(void);
	/* Auto-Refresh */
	bool use_auto_refresh(void);
	/* Layer */
	enum layer_enum {
		layer_PLACEHOLDER = 0,
	};
	layer_enum layer(void);
};

/**************** Render Layers ****************/

class CompositorNodeRLayers : public CompositorNode {
public:
	CompositorNodeRLayers(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Scene */
	Scene scene(void);
	/* Layer */
	enum layer_enum {
		layer_PLACEHOLDER = 0,
	};
	layer_enum layer(void);
};

/**************** Composite ****************/

class CompositorNodeComposite : public CompositorNode {
public:
	CompositorNodeComposite(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Output File ****************/

class CompositorNodeOutputFile : public CompositorNode {
public:
	CompositorNodeOutputFile(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* File Path: Output path for the image, same functionality as render output. */
	std::string filepath(void);
	/* Image Type */
	enum image_type_enum {
		image_type_TARGA = 0,
		image_type_RAW_TARGA = 14,
		image_type_PNG = 17,
		image_type_BMP = 20,
		image_type_JPEG = 4,
		image_type_IRIS = 1,
		image_type_RADIANCE_HDR = 21,
		image_type_CINEON = 26,
		image_type_DPX = 27,
		image_type_OPENEXR = 23,
	};
	image_type_enum image_type(void);
	/* Half */
	bool use_exr_half(void);
	/* Codec */
	enum exr_codec_enum {
		exr_codec_NONE = 0,
		exr_codec_PXR24 = 1,
		exr_codec_ZIP = 2,
		exr_codec_PIZ = 3,
		exr_codec_RLE = 4,
	};
	exr_codec_enum exr_codec(void);
	/* Quality */
	int quality(void);
	/* Start Frame */
	int frame_start(void);
	/* End Frame */
	int frame_end(void);
};

/**************** Texture ****************/

class CompositorNodeTexture : public CompositorNode {
public:
	CompositorNodeTexture(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Texture */
	Texture texture(void);
	/* Node Output: For node-based textures, which output node to use */
	int node_output(void);
};

/**************** Translate ****************/

class CompositorNodeTranslate : public CompositorNode {
public:
	CompositorNodeTranslate(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Z Combine ****************/

class CompositorNodeZcombine : public CompositorNode {
public:
	CompositorNodeZcombine(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Use Alpha: Takes Alpha channel into account when doing the Z operation */
	bool use_alpha(void);
};

/**************** Combine RGBA ****************/

class CompositorNodeCombRGBA : public CompositorNode {
public:
	CompositorNodeCombRGBA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Dilate/Erode ****************/

class CompositorNodeDilateErode : public CompositorNode {
public:
	CompositorNodeDilateErode(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Distance: Distance to grow/shrink (number of iterations) */
	int distance(void);
};

/**************** Rotate ****************/

class CompositorNodeRotate : public CompositorNode {
public:
	CompositorNodeRotate(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Filter: Method to use to filter rotation */
	enum filter_type_enum {
		filter_type_NEAREST = 0,
		filter_type_BILINEAR = 1,
		filter_type_BICUBIC = 2,
	};
	filter_type_enum filter_type(void);
};

/**************** Scale ****************/

class CompositorNodeScale : public CompositorNode {
public:
	CompositorNodeScale(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Space: Coordinate space to scale relative to */
	enum space_enum {
		space_RELATIVE = 0,
		space_ABSOLUTE = 1,
		space_SCENE_SIZE = 2,
		space_RENDER_SIZE = 3,
	};
	space_enum space(void);
};

/**************** Separate YCCA ****************/

class CompositorNodeSepYCCA : public CompositorNode {
public:
	CompositorNodeSepYCCA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Mode */
	enum mode_enum {
		mode_ITUBT601 = 0,
		mode_ITUBT709 = 1,
		mode_JFIF = 2,
	};
	mode_enum mode(void);
};

/**************** Combine YCCA ****************/

class CompositorNodeCombYCCA : public CompositorNode {
public:
	CompositorNodeCombYCCA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Mode */
	enum mode_enum {
		mode_ITUBT601 = 0,
		mode_ITUBT709 = 1,
		mode_JFIF = 2,
	};
	mode_enum mode(void);
};

/**************** Separate YUVA ****************/

class CompositorNodeSepYUVA : public CompositorNode {
public:
	CompositorNodeSepYUVA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Combine YUVA ****************/

class CompositorNodeCombYUVA : public CompositorNode {
public:
	CompositorNodeCombYUVA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Difference Key ****************/

class CompositorNodeDiffMatte : public CompositorNode {
public:
	CompositorNodeDiffMatte(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Tolerance: Color distances below this threshold are keyed */
	float tolerance(void);
	/* Falloff: Color distances below this additional threshold are partially keyed */
	float falloff(void);
};

/**************** Color Spill ****************/

class CompositorNodeColorSpill : public CompositorNode {
public:
	CompositorNodeColorSpill(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Channel */
	enum channel_enum {
		channel_R = 1,
		channel_G = 2,
		channel_B = 3,
	};
	channel_enum channel(void);
	/* Algorithm */
	enum limit_method_enum {
		limit_method_SIMPLE = 0,
		limit_method_AVERAGE = 1,
	};
	limit_method_enum limit_method(void);
	/* Limit Channel */
	enum limit_channel_enum {
		limit_channel_R = 1,
		limit_channel_G = 2,
		limit_channel_B = 3,
	};
	limit_channel_enum limit_channel(void);
	/* Ratio: Scale limit by value */
	float ratio(void);
	/* Unspill: Compensate all channels (diffenrently) by hand */
	bool use_unspill(void);
	/* R: Red spillmap scale */
	float unspill_red(void);
	/* G: Green spillmap scale */
	float unspill_green(void);
	/* B: Blue spillmap scale */
	float unspill_blue(void);
};

/**************** Chroma Key ****************/

class CompositorNodeChromaMatte : public CompositorNode {
public:
	CompositorNodeChromaMatte(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Acceptance: Tolerance for a color to be considered a keying color */
	float tolerance(void);
	/* Cutoff: Tolerance below which colors will be considered as exact matches */
	float threshold(void);
	/* Lift: Alpha lift */
	float lift(void);
	/* Gain: Alpha gain */
	float gain(void);
	/* Shadow Adjust: Adjusts the brightness of any shadows captured */
	float shadow_adjust(void);
};

/**************** Channel Key ****************/

class CompositorNodeChannelMatte : public CompositorNode {
public:
	CompositorNodeChannelMatte(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Color Space */
	enum color_space_enum {
		color_space_RGB = 1,
		color_space_HSV = 2,
		color_space_YUV = 3,
		color_space_YCC = 4,
	};
	color_space_enum color_space(void);
	/* Channel: Channel used to determine matte */
	enum matte_channel_enum {
		matte_channel_R = 1,
		matte_channel_G = 2,
		matte_channel_B = 3,
	};
	matte_channel_enum matte_channel(void);
	/* Algorithm: Algorithm to use to limit channel */
	enum limit_method_enum {
		limit_method_SINGLE = 0,
		limit_method_MAX = 1,
	};
	limit_method_enum limit_method(void);
	/* Limit Channel: Limit by this channels value */
	enum limit_channel_enum {
		limit_channel_R = 1,
		limit_channel_G = 2,
		limit_channel_B = 3,
	};
	limit_channel_enum limit_channel(void);
	/* High: Values higher than this setting are 100% opaque */
	float limit_max(void);
	/* Low: Values lower than this setting are 100% keyed */
	float limit_min(void);
};

/**************** Flip ****************/

class CompositorNodeFlip : public CompositorNode {
public:
	CompositorNodeFlip(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Axis */
	enum axis_enum {
		axis_X = 0,
		axis_Y = 1,
		axis_XY = 2,
	};
	axis_enum axis(void);
};

/**************** Split Viewer ****************/

class CompositorNodeSplitViewer : public CompositorNode {
public:
	CompositorNodeSplitViewer(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Axis */
	enum axis_enum {
		axis_X = 0,
		axis_Y = 1,
	};
	axis_enum axis(void);
	/* Factor */
	int factor(void);
};

/**************** Map UV ****************/

class CompositorNodeMapUV : public CompositorNode {
public:
	CompositorNodeMapUV(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Alpha */
	int alpha(void);
};

/**************** ID Mask ****************/

class CompositorNodeIDMask : public CompositorNode {
public:
	CompositorNodeIDMask(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Index: Pass index number to convert to alpha */
	int index(void);
};

/**************** Defocus ****************/

class CompositorNodeDefocus : public CompositorNode {
public:
	CompositorNodeDefocus(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Bokeh Type */
	enum bokeh_enum {
		bokeh_OCTAGON = 8,
		bokeh_HEPTAGON = 7,
		bokeh_HEXAGON = 6,
		bokeh_PENTAGON = 5,
		bokeh_SQUARE = 4,
		bokeh_TRIANGLE = 3,
		bokeh_CIRCLE = 0,
	};
	bokeh_enum bokeh(void);
	/* Angle: Bokeh shape rotation offset in degrees */
	int angle(void);
	/* Gamma Correction: Enable gamma correction before and after main process */
	bool use_gamma_correction(void);
	/* fStop: Amount of focal blur, 128=infinity=perfect focus, half the value doubles the blur radius */
	float f_stop(void);
	/* Max Blur: blur limit, maximum CoC radius, 0=no limit */
	float blur_max(void);
	/* Threshold: CoC radius threshold, prevents background bleed on in-focus midground, 0=off */
	float threshold(void);
	/* Preview: Enable sampling mode, useful for preview when using low samplecounts */
	bool use_preview(void);
	/* Samples: Number of samples (16=grainy, higher=less noise) */
	int samples(void);
	/* Use Z-Buffer: Disable when using an image as input instead of actual zbuffer (auto enabled if node not image based, eg. time node) */
	bool use_zbuffer(void);
	/* Z-Scale: Scales the Z input when not using a zbuffer, controls maximum blur designated by the color white or input value 1 */
	float z_scale(void);
};

/**************** Displace ****************/

class CompositorNodeDisplace : public CompositorNode {
public:
	CompositorNodeDisplace(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Combine HSVA ****************/

class CompositorNodeCombHSVA : public CompositorNode {
public:
	CompositorNodeCombHSVA(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Math ****************/

class CompositorNodeMath : public CompositorNode {
public:
	CompositorNodeMath(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Operation */
	enum operation_enum {
		operation_ADD = 0,
		operation_SUBTRACT = 1,
		operation_MULTIPLY = 2,
		operation_DIVIDE = 3,
		operation_SINE = 4,
		operation_COSINE = 5,
		operation_TANGENT = 6,
		operation_ARCSINE = 7,
		operation_ARCCOSINE = 8,
		operation_ARCTANGENT = 9,
		operation_POWER = 10,
		operation_LOGARITHM = 11,
		operation_MINIMUM = 12,
		operation_MAXIMUM = 13,
		operation_ROUND = 14,
		operation_LESS_THAN = 15,
		operation_GREATER_THAN = 16,
	};
	operation_enum operation(void);
};

/**************** Luma Matte ****************/

class CompositorNodeLumaMatte : public CompositorNode {
public:
	CompositorNodeLumaMatte(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* High: Values higher than this setting are 100% opaque */
	float limit_max(void);
	/* Low: Values lower than this setting are 100% keyed */
	float limit_min(void);
};

/**************** Bright Contrast ****************/

class CompositorNodeBrightContrast : public CompositorNode {
public:
	CompositorNodeBrightContrast(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Gamma ****************/

class CompositorNodeGamma : public CompositorNode {
public:
	CompositorNodeGamma(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Invert ****************/

class CompositorNodeInvert : public CompositorNode {
public:
	CompositorNodeInvert(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* RGB */
	bool invert_rgb(void);
	/* Alpha */
	bool invert_alpha(void);
};

/**************** Normalize ****************/

class CompositorNodeNormalize : public CompositorNode {
public:
	CompositorNodeNormalize(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

};

/**************** Crop ****************/

class CompositorNodeCrop : public CompositorNode {
public:
	CompositorNodeCrop(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Crop Image Size: Whether to crop the size of the input image */
	bool use_crop_size(void);
	/* Relative: Use relative values to crop image */
	bool relative(void);
	/* X1 */
	int min_x(void);
	/* X2 */
	int max_x(void);
	/* Y1 */
	int min_y(void);
	/* Y2 */
	int max_y(void);
	/* X1 */
	float rel_min_x(void);
	/* X2 */
	float rel_max_x(void);
	/* Y1 */
	float rel_min_y(void);
	/* Y2 */
	float rel_max_y(void);
};

/**************** DBlur ****************/

class CompositorNodeDBlur : public CompositorNode {
public:
	CompositorNodeDBlur(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Iterations */
	int iterations(void);
	/* Wrap */
	bool use_wrap(void);
	/* Center X */
	float center_x(void);
	/* Center Y */
	float center_y(void);
	/* Distance */
	float distance(void);
	/* Angle */
	float angle(void);
	/* Spin */
	float spin(void);
	/* Zoom */
	float zoom(void);
};

/**************** Bilateral Blur ****************/

class CompositorNodeBilateralblur : public CompositorNode {
public:
	CompositorNodeBilateralblur(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Iterations */
	int iterations(void);
	/* Color Sigma */
	float sigma_color(void);
	/* Space Sigma */
	float sigma_space(void);
};

/**************** Premul Key ****************/

class CompositorNodePremulKey : public CompositorNode {
public:
	CompositorNodePremulKey(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Mapping: Conversion between premultiplied alpha and key alpha */
	enum mapping_enum {
		mapping_KEY_TO_PREMUL = 0,
		mapping_PREMUL_TO_KEY = 1,
	};
	mapping_enum mapping(void);
};

/**************** Glare ****************/

class CompositorNodeGlare : public CompositorNode {
public:
	CompositorNodeGlare(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Glare Type */
	enum glare_type_enum {
		glare_type_GHOSTS = 3,
		glare_type_STREAKS = 2,
		glare_type_FOG_GLOW = 1,
		glare_type_SIMPLE_STAR = 0,
	};
	glare_type_enum glare_type(void);
	/* Quality: If not set to high quality, the effect will be applied to a low-res copy of the source image */
	enum quality_enum {
		quality_HIGH = 0,
		quality_MEDIUM = 1,
		quality_LOW = 2,
	};
	quality_enum quality(void);
	/* Iterations */
	int iterations(void);
	/* Color Modulation: Amount of Color Modulation, modulates colors of streaks and ghosts for a spectral dispersion effect */
	float color_modulation(void);
	/* Mix: -1 is original image only, 0 is exact 50/50 mix, 1 is processed image only */
	float mix(void);
	/* Threshold: The glare filter will only be applied to pixels brighter than this value */
	float threshold(void);
	/* Streaks: Total number of streaks */
	int streaks(void);
	/* Angle Offset: Streak angle offset in degrees */
	int angle_offset(void);
	/* Fade: Streak fade-out factor */
	float fade(void);
	/* Rotate 45: Simple star filter: add 45 degree rotation offset */
	bool use_rotate_45(void);
	/* Size: Glow/glare size (not actual size; relative to initial size of bright area of pixels) */
	int size(void);
};

/**************** Tonemap ****************/

class CompositorNodeTonemap : public CompositorNode {
public:
	CompositorNodeTonemap(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Tonemap Type */
	enum tonemap_type_enum {
		tonemap_type_RD_PHOTORECEPTOR = 1,
		tonemap_type_RH_SIMPLE = 0,
	};
	tonemap_type_enum tonemap_type(void);
	/* Key: The value the average luminance is mapped to */
	float key(void);
	/* Offset: Normally always 1, but can be used as an extra control to alter the brightness curve */
	float offset(void);
	/* Gamma: If not used, set to 1 */
	float gamma(void);
	/* Intensity: If less than zero, darkens image; otherwise, makes it brighter */
	float intensity(void);
	/* Contrast: Set to 0 to use estimate from input image */
	float contrast(void);
	/* Adaptation: If 0, global; if 1, based on pixel intensity */
	float adaptation(void);
	/* Color Correction: If 0, same for all channels; if 1, each independent */
	float correction(void);
};

/**************** Lensdist ****************/

class CompositorNodeLensdist : public CompositorNode {
public:
	CompositorNodeLensdist(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Projector: Enable/disable projector mode. Effect is applied in horizontal direction only */
	bool use_projector(void);
	/* Jitter: Enable/disable jittering; faster, but also noisier */
	bool use_jitter(void);
	/* Fit: For positive distortion factor only: scale image such that black areas are not visible */
	bool use_fit(void);
};

/**************** Levels ****************/

class CompositorNodeLevels : public CompositorNode {
public:
	CompositorNodeLevels(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Channel */
	enum channel_enum {
		channel_COMBINED_RGB = 1,
		channel_RED = 2,
		channel_GREEN = 3,
		channel_BLUE = 4,
		channel_LUMINANCE = 5,
	};
	channel_enum channel(void);
};

/**************** Color Matte ****************/

class CompositorNodeColorMatte : public CompositorNode {
public:
	CompositorNodeColorMatte(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* H: Hue tolerance for colors to be considered a keying color */
	float color_hue(void);
	/* S: Saturation Tolerance for the color */
	float color_saturation(void);
	/* V: Value Tolerance for the color */
	float color_value(void);
};

/**************** Distance Matte ****************/

class CompositorNodeDistanceMatte : public CompositorNode {
public:
	CompositorNodeDistanceMatte(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Tolerance: Color distances below this threshold are keyed */
	float tolerance(void);
	/* Falloff: Color distances below this additional threshold are partially keyed */
	float falloff(void);
};

/**************** Color Balance ****************/

class CompositorNodeColorBalance : public CompositorNode {
public:
	CompositorNodeColorBalance(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Correction Formula */
	enum correction_method_enum {
		correction_method_LIFT_GAMMA_GAIN = 0,
		correction_method_OFFSET_POWER_SLOPE = 1,
	};
	correction_method_enum correction_method(void);
	/* Lift: Correction for Shadows */
	Array<float, 3> lift(void);
	/* Gamma: Correction for Midtones */
	Array<float, 3> gamma(void);
	/* Gain: Correction for Highlights */
	Array<float, 3> gain(void);
	/* Offset: Correction for Shadows */
	Array<float, 3> offset(void);
	/* Power: Correction for Midtones */
	Array<float, 3> power(void);
	/* Slope: Correction for Highlights */
	Array<float, 3> slope(void);
};

/**************** Hue Correct ****************/

class CompositorNodeHueCorrect : public CompositorNode {
public:
	CompositorNodeHueCorrect(const PointerRNA& ptr) :
		CompositorNode(ptr)
		{}

	/* Mapping */
	CurveMapping mapping(void);
};

/**************** Output ****************/

class TextureNodeOutput : public TextureNode {
public:
	TextureNodeOutput(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Output Name */
	std::string filepath(void);
};

/**************** Checker ****************/

class TextureNodeChecker : public TextureNode {
public:
	TextureNodeChecker(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Texture ****************/

class TextureNodeTexture : public TextureNode {
public:
	TextureNodeTexture(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Texture */
	Texture texture(void);
	/* Node Output: For node-based textures, which output node to use */
	int node_output(void);
};

/**************** Bricks ****************/

class TextureNodeBricks : public TextureNode {
public:
	TextureNodeBricks(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Offset Amount */
	float offset(void);
	/* Offset Frequency: Offset every N rows */
	int offset_frequency(void);
	/* Squash Amount */
	float squash(void);
	/* Squash Frequency: Squash every N rows */
	int squash_frequency(void);
};

/**************** Math ****************/

class TextureNodeMath : public TextureNode {
public:
	TextureNodeMath(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Operation */
	enum operation_enum {
		operation_ADD = 0,
		operation_SUBTRACT = 1,
		operation_MULTIPLY = 2,
		operation_DIVIDE = 3,
		operation_SINE = 4,
		operation_COSINE = 5,
		operation_TANGENT = 6,
		operation_ARCSINE = 7,
		operation_ARCCOSINE = 8,
		operation_ARCTANGENT = 9,
		operation_POWER = 10,
		operation_LOGARITHM = 11,
		operation_MINIMUM = 12,
		operation_MAXIMUM = 13,
		operation_ROUND = 14,
		operation_LESS_THAN = 15,
		operation_GREATER_THAN = 16,
	};
	operation_enum operation(void);
};

/**************** Mix RGB ****************/

class TextureNodeMixRGB : public TextureNode {
public:
	TextureNodeMixRGB(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Blend Type */
	enum blend_type_enum {
		blend_type_MIX = 0,
		blend_type_ADD = 1,
		blend_type_SUBTRACT = 3,
		blend_type_MULTIPLY = 2,
		blend_type_SCREEN = 4,
		blend_type_OVERLAY = 9,
		blend_type_DIVIDE = 5,
		blend_type_DIFFERENCE = 6,
		blend_type_DARKEN = 7,
		blend_type_LIGHTEN = 8,
		blend_type_DODGE = 10,
		blend_type_BURN = 11,
		blend_type_COLOR = 15,
		blend_type_VALUE = 14,
		blend_type_SATURATION = 13,
		blend_type_HUE = 12,
		blend_type_SOFT_LIGHT = 16,
		blend_type_LINEAR_LIGHT = 17,
	};
	blend_type_enum blend_type(void);
	/* Alpha: Include alpha of second input in this operation */
	bool use_alpha(void);
};

/**************** RGB To BW ****************/

class TextureNodeRGBToBW : public TextureNode {
public:
	TextureNodeRGBToBW(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Val To RGB ****************/

class TextureNodeValToRGB : public TextureNode {
public:
	TextureNodeValToRGB(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Color Ramp */
	ColorRamp color_ramp(void);
};

/**************** Image ****************/

class TextureNodeImage : public TextureNode {
public:
	TextureNodeImage(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Image */
	Image image(void);
};

/**************** RGB Curve ****************/

class TextureNodeCurveRGB : public TextureNode {
public:
	TextureNodeCurveRGB(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Mapping */
	CurveMapping mapping(void);
};

/**************** Invert ****************/

class TextureNodeInvert : public TextureNode {
public:
	TextureNodeInvert(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Hue/Saturation ****************/

class TextureNodeHueSaturation : public TextureNode {
public:
	TextureNodeHueSaturation(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Curve Time ****************/

class TextureNodeCurveTime : public TextureNode {
public:
	TextureNodeCurveTime(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

	/* Curve */
	CurveMapping curve(void);
	/* Start Frame */
	int frame_start(void);
	/* End Frame */
	int frame_end(void);
};

/**************** Rotate ****************/

class TextureNodeRotate : public TextureNode {
public:
	TextureNodeRotate(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Viewer ****************/

class TextureNodeViewer : public TextureNode {
public:
	TextureNodeViewer(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Translate ****************/

class TextureNodeTranslate : public TextureNode {
public:
	TextureNodeTranslate(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Coordinates ****************/

class TextureNodeCoordinates : public TextureNode {
public:
	TextureNodeCoordinates(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Distance ****************/

class TextureNodeDistance : public TextureNode {
public:
	TextureNodeDistance(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Compose ****************/

class TextureNodeCompose : public TextureNode {
public:
	TextureNodeCompose(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Decompose ****************/

class TextureNodeDecompose : public TextureNode {
public:
	TextureNodeDecompose(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Val to Nor ****************/

class TextureNodeValToNor : public TextureNode {
public:
	TextureNodeValToNor(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Scale ****************/

class TextureNodeScale : public TextureNode {
public:
	TextureNodeScale(const PointerRNA& ptr) :
		TextureNode(ptr)
		{}

};

/**************** Group ****************/

class NodeGroup : public Node {
public:
	NodeGroup(const PointerRNA& ptr) :
		Node(ptr)
		{}

	/* Node Tree */
	NodeTree node_tree(void);
};

/**************** Object ****************/

class Object : public ID {
public:
	Object(const PointerRNA& ptr) :
		ID(ptr),
		material_slots(ptr),
		constraints(ptr),
		modifiers(ptr),
		vertex_groups(ptr),
		particle_systems(ptr),
		dupli_list(ptr)
		{}

	/* Data: Object data */
	ID data(void);
	/* Type: Type of Object */
	enum type_enum {
		type_MESH = 1,
		type_CURVE = 2,
		type_SURFACE = 3,
		type_META = 5,
		type_FONT = 4,
		type_ARMATURE = 25,
		type_LATTICE = 22,
		type_EMPTY = 0,
		type_CAMERA = 11,
		type_LAMP = 10,
	};
	type_enum type(void);
	/* Mode: Object interaction mode */
	enum mode_enum {
		mode_OBJECT = 0,
		mode_EDIT = 1,
		mode_SCULPT = 2,
		mode_VERTEX_PAINT = 4,
		mode_WEIGHT_PAINT = 8,
		mode_TEXTURE_PAINT = 16,
		mode_PARTICLE_EDIT = 32,
		mode_POSE = 64,
	};
	mode_enum mode(void);
	/* Layers: Layers the object is on */
	Array<int, 20> layers(void);
	/* Select: Object selection state */
	bool select(void);
	/* Bound Box: Objects bound box in object-space coordinates, all values are -1.0 when not available. */
	Array<float, 24> bound_box(void);
	/* Parent: Parent Object */
	Object parent(void);
	/* Parent Type: Type of parent relation */
	enum parent_type_enum {
		parent_type_OBJECT = 0,
		parent_type_CURVE = 1,
		parent_type_KEY = 2,
		parent_type_ARMATURE = 4,
		parent_type_LATTICE = 4,
		parent_type_VERTEX = 5,
		parent_type_VERTEX_3 = 6,
		parent_type_BONE = 7,
	};
	parent_type_enum parent_type(void);
	/* Parent Vertices: Indices of vertices in cases of a vertex parenting relation */
	Array<int, 3> parent_vertices(void);
	/* Parent Bone: Name of parent bone in case of a bone parenting relation */
	std::string parent_bone(void);
	/* Track Axis: Axis that points in 'forward' direction */
	enum track_axis_enum {
		track_axis_POS_X = 0,
		track_axis_POS_Y = 1,
		track_axis_POS_Z = 2,
		track_axis_NEG_X = 3,
		track_axis_NEG_Y = 4,
		track_axis_NEG_Z = 5,
	};
	track_axis_enum track_axis(void);
	/* Up Axis: Axis that points in the upward direction */
	enum up_axis_enum {
		up_axis_X = 0,
		up_axis_Y = 1,
		up_axis_Z = 2,
	};
	up_axis_enum up_axis(void);
	/* Proxy: Library object this proxy object controls */
	Object proxy(void);
	/* Proxy Group: Library group duplicator object this proxy object controls */
	Object proxy_group(void);
	/* Material Slots: Material slots in the object */
	COLLECTION_PROPERTY(MaterialSlot, Object, material_slots)
	/* Active Material: Active material being displayed */
	Material active_material(void);
	/* Active Material Index: Index of active material slot */
	int active_material_index(void);
	/* Location: Location of the object */
	Array<float, 3> location(void);
	/* Quaternion Rotation: Rotation in Quaternions */
	Array<float, 4> rotation_quaternion(void);
	/* Axis-Angle Rotation: Angle of Rotation for Axis-Angle rotation representation */
	Array<float, 4> rotation_axis_angle(void);
	/* Euler Rotation: Rotation in Eulers */
	Array<float, 3> rotation_euler(void);
	/* Rotation Mode */
	enum rotation_mode_enum {
		rotation_mode_QUATERNION = 0,
		rotation_mode_XYZ = 1,
		rotation_mode_XZY = 2,
		rotation_mode_YXZ = 3,
		rotation_mode_YZX = 4,
		rotation_mode_ZXY = 5,
		rotation_mode_ZYX = 6,
		rotation_mode_AXIS_ANGLE = -1,
	};
	rotation_mode_enum rotation_mode(void);
	/* Scale: Scaling of the object */
	Array<float, 3> scale(void);
	/* Dimensions: Absolute bounding box dimensions of the object */
	Array<float, 3> dimensions(void);
	/* Delta Location: Extra translation added to the location of the object */
	Array<float, 3> delta_location(void);
	/* Delta Rotation (Euler): Extra rotation added to the rotation of the object (when using Euler rotations) */
	Array<float, 3> delta_rotation_euler(void);
	/* Delta Rotation (Quaternion): Extra rotation added to the rotation of the object (when using Quaternion rotations) */
	Array<float, 4> delta_rotation_quaternion(void);
	/* Delta Scale: Extra scaling added to the scale of the object */
	Array<float, 3> delta_scale(void);
	/* Lock Location: Lock editing of location in the interface */
	Array<int, 3> lock_location(void);
	/* Lock Rotation: Lock editing of rotation in the interface */
	Array<int, 3> lock_rotation(void);
	/* Lock Rotation (4D Angle): Lock editing of 'angle' component of four-component rotations in the interface */
	bool lock_rotation_w(void);
	/* Lock Rotations (4D): Lock editing of four component rotations by components (instead of as Eulers) */
	bool lock_rotations_4d(void);
	/* Lock Scale: Lock editing of scale in the interface */
	Array<int, 3> lock_scale(void);
	/* Matrix World: Worldspace transformation matrix */
	Array<float, 16> matrix_world(void);
	/* Local Matrix: Parent relative transformation matrix */
	Array<float, 16> matrix_local(void);
	/* Input Matrix: Matrix access to location, rotation and scale (including deltas), before constraints and parenting are applied. */
	Array<float, 16> matrix_basis(void);
	/* Constraints: Constraints affecting the transformation of the object */
	COLLECTION_PROPERTY(Constraint, Object, constraints)
	/* Modifiers: Modifiers affecting the geometric data of the object */
	COLLECTION_PROPERTY(Modifier, Object, modifiers)
	/* Game Settings: Game engine related settings for the object */
	GameObjectSettings game(void);
	/* Vertex Groups: Vertex groups of the object */
	COLLECTION_PROPERTY(VertexGroup, Object, vertex_groups)
	/* Empty Display Type: Viewport display style for empties */
	enum empty_draw_type_enum {
		empty_draw_type_PLAIN_AXES = 2,
		empty_draw_type_ARROWS = 1,
		empty_draw_type_SINGLE_ARROW = 4,
		empty_draw_type_CIRCLE = 3,
		empty_draw_type_CUBE = 5,
		empty_draw_type_SPHERE = 6,
		empty_draw_type_CONE = 7,
	};
	empty_draw_type_enum empty_draw_type(void);
	/* Empty Display Size: Size of display for empties in the viewport */
	float empty_draw_size(void);
	/* Pass Index: Index # for the IndexOB render pass */
	int pass_index(void);
	/* Color: Object color and alpha, used when faces have the ObColor mode enabled */
	Array<float, 4> color(void);
	/* Field Settings: Settings for using the objects as a field in physics simulation */
	FieldSettings field(void);
	/* Collision Settings: Settings for using the objects as a collider in physics simulation */
	CollisionSettings collision(void);
	/* Soft Body Settings: Settings for soft body simulation */
	SoftBodySettings soft_body(void);
	/* Particle Systems: Particle systems emitted from the object */
	COLLECTION_PROPERTY(ParticleSystem, Object, particle_systems)
	/* Restrict View: Restrict visibility in the viewport */
	bool hide(void);
	/* Restrict Select: Restrict selection in the viewport */
	bool hide_select(void);
	/* Restrict Render: Restrict renderability */
	bool hide_render(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Animation Visualisation: Animation data for this datablock */
	AnimViz animation_visualisation(void);
	/* Motion Path: Motion Path for this element */
	MotionPath motion_path(void);
	/* Slow Parent: Create a delay in the parent relationship */
	bool use_slow_parent(void);
	/* Dupli Type: If not None, object duplication method to use */
	enum dupli_type_enum {
		dupli_type_NONE = 0,
		dupli_type_FRAMES = 8,
		dupli_type_VERTS = 16,
		dupli_type_FACES = 512,
		dupli_type_GROUP = 256,
	};
	dupli_type_enum dupli_type(void);
	/* Dupli Frames Speed: Set dupliframes to use the frame */
	bool use_dupli_frames_speed(void);
	/* Dupli Verts Rotation: Rotate dupli according to vertex normal */
	bool use_dupli_vertices_rotation(void);
	/* Dupli Faces Inherit Scale: Scale dupli based on face size */
	bool use_dupli_faces_scale(void);
	/* Dupli Faces Scale: Scale the DupliFace objects */
	float dupli_faces_scale(void);
	/* Dupli Group: Instance an existing group */
	Group dupli_group(void);
	/* Dupli Frames Start: Start frame for DupliFrames */
	int dupli_frames_start(void);
	/* Dupli Frames End: End frame for DupliFrames */
	int dupli_frames_end(void);
	/* Dupli Frames On: Number of frames to use between DupOff frames */
	int dupli_frames_on(void);
	/* Dupli Frames Off: Recurring frames to exclude from the Dupliframes */
	int dupli_frames_off(void);
	/* Dupli list: Object duplis */
	COLLECTION_PROPERTY(DupliObject, Object, dupli_list)
	/* is_duplicator */
	bool is_duplicator(void);
	/* Time Offset: Animation offset in frames for F-Curve and dupligroup instances */
	float time_offset(void);
	/* Time Offset Edit: Use time offset when inserting keys and display time offset for F-Curve and action views */
	bool use_time_offset_edit(void);
	/* Time Offset Parent: Apply the time offset to this objects parent relationship */
	bool use_time_offset_parent(void);
	/* Time Offset Particle: Let the time offset work on the particle effect */
	bool use_time_offset_particle(void);
	/* Time Offset Add Parent: Add the parents time offset value */
	bool use_time_offset_add_parent(void);
	/* Maximum Draw Type: Maximum draw type to display object with in viewport */
	enum draw_type_enum {
		draw_type_BOUNDS = 1,
		draw_type_WIRE = 2,
		draw_type_SOLID = 3,
		draw_type_TEXTURED = 5,
	};
	draw_type_enum draw_type(void);
	/* Draw Bounds: Displays the object's bounds */
	bool show_bounds(void);
	/* Draw Bounds Type: Object boundary display type */
	enum draw_bounds_type_enum {
		draw_bounds_type_BOX = 0,
		draw_bounds_type_SPHERE = 1,
		draw_bounds_type_CYLINDER = 2,
		draw_bounds_type_CONE = 3,
		draw_bounds_type_POLYHEDRON = 4,
		draw_bounds_type_CAPSULE = 7,
	};
	draw_bounds_type_enum draw_bounds_type(void);
	/* Draw Name: Displays the object's name */
	bool show_name(void);
	/* Draw Axis: Displays the object's origin and axis */
	bool show_axis(void);
	/* Draw Texture Space: Displays the object's texture space */
	bool show_texture_space(void);
	/* Draw Wire: Adds the object's wireframe over solid drawing */
	bool show_wire(void);
	/* Draw Transparent: Displays material transparency in the object */
	bool show_transparent(void);
	/* X-Ray: Makes the object draw in front of others */
	bool show_x_ray(void);
	/* Grease Pencil Data: Grease Pencil datablock */
	GreasePencil grease_pencil(void);
	/* Pose Library: Action used as a pose library for armatures */
	Action pose_library(void);
	/* Pose: Current pose for armatures */
	Pose pose(void);
	/* Shape Key Lock: Always show the current Shape for this Object */
	bool show_only_shape_key(void);
	/* Shape Key Edit Mode: Apply shape keys in edit mode (for Meshes only) */
	bool use_shape_key_edit_mode(void);
	/* Active Shape Key: Current shape key */
	ShapeKey active_shape_key(void);
	/* Active Shape Key Index: Current shape key index */
	int active_shape_key_index(void);
};

/**************** Object Constraints ****************/

class ObjectConstraints : public Pointer {
public:
	ObjectConstraints(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Constraint: Active Object constraint */
	Constraint active(void);
};

/**************** Object Modifiers ****************/

class ObjectModifiers : public Pointer {
public:
	ObjectModifiers(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Vertex Groups ****************/

class VertexGroups : public Pointer {
public:
	VertexGroups(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Vertex Group: Vertex groups of the object */
	VertexGroup active(void);
	/* Active Vertex Group Index: Active index in vertex group array */
	int active_index(void);
};

/**************** Particle Systems ****************/

class ParticleSystems : public Pointer {
public:
	ParticleSystems(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Particle System: Active particle system being displayed */
	ParticleSystem active(void);
	/* Active Particle System Index: Index of active particle system slot */
	int active_index(void);
};

/**************** Game Object Settings ****************/

class GameObjectSettings : public Pointer {
public:
	GameObjectSettings(const PointerRNA& ptr) :
		Pointer(ptr),
		sensors(ptr),
		controllers(ptr),
		actuators(ptr),
		properties(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Sensors: Game engine sensor to detect events */
	COLLECTION_PROPERTY(Sensor, GameObjectSettings, sensors)
	/* Controllers: Game engine controllers to process events, connecting sensor to actuators */
	COLLECTION_PROPERTY(Controller, GameObjectSettings, controllers)
	/* Actuators: Game engine actuators to act on events */
	COLLECTION_PROPERTY(Actuator, GameObjectSettings, actuators)
	/* Properties: Game engine properties */
	COLLECTION_PROPERTY(GameProperty, GameObjectSettings, properties)
	/* Show Sensors: Shows sensors for this object in the user interface */
	bool show_sensors(void);
	/* Show Controllers: Shows controllers for this object in the user interface */
	bool show_controllers(void);
	/* Show Actuators: Shows actuators for this object in the user interface */
	bool show_actuators(void);
	/* Physics Type: Selects the type of physical representation */
	enum physics_type_enum {
		physics_type_NO_COLLISION = 0,
		physics_type_STATIC = 1,
		physics_type_DYNAMIC = 2,
		physics_type_RIGID_BODY = 3,
		physics_type_SOFT_BODY = 4,
		physics_type_OCCLUDE = 5,
		physics_type_SENSOR = 6,
	};
	physics_type_enum physics_type(void);
	/* Actor: Object is detected by the Near and Radar sensor */
	bool use_actor(void);
	/* Ghost: Object does not restitute collisions, like a ghost */
	bool use_ghost(void);
	/* Mass: Mass of the object */
	float mass(void);
	/* Radius: Radius of bounding sphere and material physics */
	float radius(void);
	/* No Sleeping: Disable auto (de)activation in physics simulation */
	bool use_sleep(void);
	/* Damping: General movement damping */
	float damping(void);
	/* Rotation Damping: General rotation damping */
	float rotation_damping(void);
	/* Velocity Min: Clamp velocity to this minimum speed (except when totally still) */
	float velocity_min(void);
	/* Velocity Max: Clamp velocity to this maximum speed */
	float velocity_max(void);
	/* Lock X Axis: Disable simulation of linear motion along the X axis */
	bool lock_location_x(void);
	/* Lock Y Axis: Disable simulation of linear motion along the Y axis */
	bool lock_location_y(void);
	/* Lock Z Axis: Disable simulation of linear motion along the Z axis */
	bool lock_location_z(void);
	/* Lock X Rotation Axis: Disable simulation of angular  motion along the X axis */
	bool lock_rotation_x(void);
	/* Lock Y Rotation Axis: Disable simulation of angular  motion along the Y axis */
	bool lock_rotation_y(void);
	/* Lock Z Rotation Axis: Disable simulation of angular  motion along the Z axis */
	bool lock_rotation_z(void);
	/* Lock Z Rotation Axis: Disable simulation of angular  motion along the Z axis */
	bool use_activity_culling(void);
	/* Use Material Force Field: React to force field physics settings in materials */
	bool use_material_physics_fh(void);
	/* Rotate From Normal: Use face normal to rotate object, so that it points away from the surface */
	bool use_rotate_from_normal(void);
	/* Form Factor: Form factor scales the inertia tensor */
	float form_factor(void);
	/* Anisotropic Friction: Enable anisotropic friction */
	bool use_anisotropic_friction(void);
	/* Friction Coefficients: Relative friction coefficient in the in the X, Y and Z directions, when anisotropic friction is enabled */
	Array<float, 3> friction_coefficients(void);
	/* Use Collision Bounds: Specify a collision bounds type other than the default */
	bool use_collision_bounds(void);
	/* Collision Bounds: Selects the collision type */
	enum collision_bounds_type_enum {
		collision_bounds_type_BOX = 0,
		collision_bounds_type_SPHERE = 1,
		collision_bounds_type_CYLINDER = 2,
		collision_bounds_type_CONE = 3,
		collision_bounds_type_CONVEX_HULL = 5,
		collision_bounds_type_TRIANGLE_MESH = 4,
		collision_bounds_type_CAPSULE = 7,
	};
	collision_bounds_type_enum collision_bounds_type(void);
	/* Collision Compound: Add children to form a compound collision object */
	bool use_collision_compound(void);
	/* Collision Margin: Extra margin around object for collision detection, small amount required for stability */
	float collision_margin(void);
	/* Soft Body Settings: Settings for Bullet soft body simulation */
	GameSoftBodySettings soft_body(void);
	/* State: State determining which controllers are displayed */
	Array<int, 30> states_visible(void);
	/* Used State: States which are being used by controllers */
	Array<int, 30> used_states(void);
	/* Initial State: Initial state when the game starts */
	Array<int, 30> states_initial(void);
	/* Debug State: Print state debug info in the game engine */
	bool show_debug_state(void);
	/* All: Set all state bits */
	bool use_all_states(void);
	/* States: Show state panel */
	bool show_state_panel(void);
};

/**************** Object Base ****************/

class ObjectBase : public Pointer {
public:
	ObjectBase(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Object: Object this base links to */
	Object object(void);
	/* Layers: Layers the object base is on */
	Array<int, 20> layers(void);
	/* Select: Object base selection state */
	bool select(void);
};

/**************** Vertex Group ****************/

class VertexGroup : public Pointer {
public:
	VertexGroup(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Vertex group name */
	std::string name(void);
	/* Index: Index number of the vertex group */
	int index(void);
};

/**************** Material Slot ****************/

class MaterialSlot : public Pointer {
public:
	MaterialSlot(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Material: Material datablock used by this material slot */
	Material material(void);
	/* Link: Link material to object or the object's data */
	enum link_enum {
		link_OBJECT = 1,
		link_DATA = 0,
	};
	link_enum link(void);
	/* Name: Material slot name */
	std::string name(void);
};

/**************** Object Duplicate ****************/

class DupliObject : public Pointer {
public:
	DupliObject(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Object: Object being duplicated */
	Object object(void);
	/* Object Matrix: The original matrix of this object before it was duplicated */
	Array<float, 16> matrix_original(void);
	/* Object Duplicate Matrix: Object duplicate transformation matrix */
	Array<float, 16> matrix(void);
};

/**************** Point Cache ****************/

class PointCache : public Pointer {
public:
	PointCache(const PointerRNA& ptr) :
		Pointer(ptr),
		point_caches(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Start: Frame on which the simulation starts */
	int frame_start(void);
	/* End: Frame on which the simulation stops */
	int frame_end(void);
	/* Cache Step: Number of frames between cached frames */
	int frame_step(void);
	/* Cache Index: Index number of cache files */
	int index(void);
	/* Cache Compression: Compression method to be used */
	enum compression_enum {
		compression_NO = 0,
		compression_LIGHT = 1,
		compression_HEAVY = 2,
	};
	compression_enum compression(void);
	/* is_baked */
	bool is_baked(void);
	/* is_baking */
	bool is_baking(void);
	/* Disk Cache: Save cache files to disk (.blend file must be saved first) */
	bool use_disk_cache(void);
	/* Cache is outdated */
	bool is_outdated(void);
	/* frames_skipped */
	bool frames_skipped(void);
	/* Name: Cache name */
	std::string name(void);
	/* File Path: Cache file path */
	std::string filepath(void);
	/* Quick Cache: Update simulation with cache steps */
	bool use_quick_cache(void);
	/* Cache Info: Info on current cache status */
	std::string info(void);
	/* External: Read cache from an external location */
	bool use_external(void);
	/* Library Path: Use this files path when library linked into another file. */
	bool use_library_path(void);
	/* Point Cache List: Point cache list */
	COLLECTION_PROPERTY(PointCache, PointCache, point_caches)
};

/**************** Point Caches ****************/

class PointCaches : public Pointer {
public:
	PointCaches(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Point Cache Index */
	int active_index(void);
};

/**************** Collision Settings ****************/

class CollisionSettings : public Pointer {
public:
	CollisionSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Enabled: Enable this objects as a collider for physics systems */
	bool use(void);
	/* Damping Factor: Amount of damping during particle collision */
	float damping_factor(void);
	/* Random Damping: Random variation of damping */
	float damping_random(void);
	/* Friction Factor: Amount of friction during particle collision */
	float friction_factor(void);
	/* Random Friction: Random variation of friction */
	float friction_random(void);
	/* Permeability: Chance that the particle will pass through the mesh */
	float permeability(void);
	/* Kill Particles: Kill collided particles */
	bool use_particle_kill(void);
	/* Stickness: Amount of stickness to surface collision */
	float stickness(void);
	/* Inner Thickness: Inner face thickness */
	float thickness_inner(void);
	/* Outer Thickness: Outer face thickness */
	float thickness_outer(void);
	/* Damping: Amount of damping during collision */
	float damping(void);
	/* Absorption: How much of effector force gets lost during collision with this object (in percent) */
	float absorption(void);
};

/**************** Effector Weights ****************/

class EffectorWeights : public Pointer {
public:
	EffectorWeights(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Use For Growing Hair: Use force fields when growing hair */
	bool apply_to_hair_growing(void);
	/* Effector Group: Limit effectors to this Group */
	Group group(void);
	/* Gravity: Global gravity weight */
	float gravity(void);
	/* All: All effector's weight */
	float all(void);
	/* Force: Force effector weight */
	float force(void);
	/* Vortex: Vortex effector weight */
	float vortex(void);
	/* Magnetic: Magnetic effector weight */
	float magnetic(void);
	/* Wind: Wind effector weight */
	float wind(void);
	/* Curve Guide: Curve guide effector weight */
	float curve_guide(void);
	/* Texture: Texture effector weight */
	float texture(void);
	/* Harmonic: Harmonic effector weight */
	float harmonic(void);
	/* Charge: Charge effector weight */
	float charge(void);
	/* Lennard-Jones: Lennard-Jones effector weight */
	float lennardjones(void);
	/* Boid: Boid effector weight */
	float boid(void);
	/* Turbulence: Turbulence effector weight */
	float turbulence(void);
	/* Drag: Drag effector weight */
	float drag(void);
};

/**************** Field Settings ****************/

class FieldSettings : public Pointer {
public:
	FieldSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Type: Type of field */
	enum type_enum {
		type_NONE = 0,
		type_FORCE = 1,
		type_WIND = 4,
		type_VORTEX = 2,
		type_MAGNET = 3,
		type_HARMONIC = 7,
		type_CHARGE = 8,
		type_LENNARDJ = 9,
		type_TEXTURE = 6,
		type_GUIDE = 5,
		type_BOID = 10,
		type_TURBULENCE = 11,
		type_DRAG = 12,
	};
	type_enum type(void);
	/* Shape: Which direction is used to calculate the effector force */
	enum shape_enum {
		shape_POINT = 0,
		shape_PLANE = 1,
		shape_SURFACE = 2,
		shape_POINTS = 3,
	};
	shape_enum shape(void);
	/* Fall-Off: Fall-off shape */
	enum falloff_type_enum {
		falloff_type_SPHERE = 0,
		falloff_type_TUBE = 1,
		falloff_type_CONE = 2,
	};
	falloff_type_enum falloff_type(void);
	/* Texture Mode: How the texture effect is calculated (RGB & Curl need a RGB texture else Gradient will be used instead) */
	enum texture_mode_enum {
		texture_mode_RGB = 0,
		texture_mode_GRADIENT = 1,
		texture_mode_CURL = 2,
	};
	texture_mode_enum texture_mode(void);
	/* Z Direction: Effect in full or only positive/negative Z direction */
	enum z_direction_enum {
		z_direction_BOTH = 0,
		z_direction_POSITIVE = 1,
		z_direction_NEGATIVE = 2,
	};
	z_direction_enum z_direction(void);
	/* Strength: Strength of force field */
	float strength(void);
	/* Linear Drag: Drag component proportional to velocity */
	float linear_drag(void);
	/* Harmonic Damping: Damping of the harmonic force */
	float harmonic_damping(void);
	/* Quadratic Drag: Drag component proportional to the square of velocity */
	float quadratic_drag(void);
	/* Flow: Convert effector force into air flow velocity */
	float flow(void);
	/* Inflow: Inwards component of the vortex force */
	float inflow(void);
	/* Size: Size of the turbulence */
	float size(void);
	/* Rest Length: Rest length of the harmonic force */
	float rest_length(void);
	/* Falloff Power: Falloff power (real gravitational falloff = 2) */
	float falloff_power(void);
	/* Minimum Distance: Minimum distance for the field's fall-off */
	float distance_min(void);
	/* Maximum Distance: Maximum distance for the field to work */
	float distance_max(void);
	/* Minimum Radial Distance: Minimum radial distance for the field's fall-off */
	float radial_min(void);
	/* Maximum Radial Distance: Maximum radial distance for the field to work */
	float radial_max(void);
	/* Radial Falloff Power: Radial falloff power (real gravitational falloff = 2) */
	float radial_falloff(void);
	/* Nabla: Defines size of derivative offset used for calculating gradient and curl */
	float texture_nabla(void);
	/* Noise: Amount of noise for the force strength */
	float noise(void);
	/* Seed: Seed of the noise */
	int seed(void);
	/* Use Min: Use a minimum distance for the field's fall-off */
	bool use_min_distance(void);
	/* Use Max: Use a maximum distance for the field to work */
	bool use_max_distance(void);
	/* Use Min: Use a minimum radial distance for the field's fall-off */
	bool use_radial_min(void);
	/* Use Max: Use a maximum radial distance for the field to work */
	bool use_radial_max(void);
	/* Use Coordinates: Use object/global coordinates for texture */
	bool use_object_coords(void);
	/* Use Global Coordinates: Use effector/global coordinates for turbulence */
	bool use_global_coords(void);
	/* 2D: Apply force only in 2d */
	bool use_2d_force(void);
	/* Root Texture Coordinates: Texture coordinates from root particle locations */
	bool use_root_coords(void);
	/* Location: Effect particles' location */
	bool apply_to_location(void);
	/* Rotation: Effect particles' dynamic rotation */
	bool apply_to_rotation(void);
	/* Absorption: Force gets absorbed by collision objects */
	bool use_absorption(void);
	/* Multiple Springs: Every point is effected by multiple springs */
	bool use_multiple_springs(void);
	/* Texture: Texture to use as force */
	Texture texture(void);
	/* Minimum Distance: The distance from which particles are affected fully */
	float guide_minimum(void);
	/* Free: Guide-free time from particle life's end */
	float guide_free(void);
	/* Additive: Based on distance/falloff it adds a portion of the entire path */
	bool use_guide_path_add(void);
	/* Weights: Use curve weights to influence the particle influence along the curve */
	bool use_guide_path_weight(void);
	/* Amount: Amount of clumping */
	float guide_clump_amount(void);
	/* Shape: Shape of clumping */
	float guide_clump_shape(void);
	/* Kink: Type of periodic offset on the curve */
	enum guide_kink_type_enum {
		guide_kink_type_NONE = 0,
		guide_kink_type_CURL = 1,
		guide_kink_type_RADIAL = 2,
		guide_kink_type_WAVE = 3,
		guide_kink_type_BRAID = 4,
		guide_kink_type_ROTATION = 5,
		guide_kink_type_ROLL = 6,
	};
	guide_kink_type_enum guide_kink_type(void);
	/* Axis: Which axis to use for offset */
	enum guide_kink_axis_enum {
		guide_kink_axis_X = 0,
		guide_kink_axis_Y = 1,
		guide_kink_axis_Z = 2,
	};
	guide_kink_axis_enum guide_kink_axis(void);
	/* Frequency: The frequency of the offset (1/total length) */
	float guide_kink_frequency(void);
	/* Shape: Adjust the offset to the beginning/end */
	float guide_kink_shape(void);
	/* Amplitude: The amplitude of the offset */
	float guide_kink_amplitude(void);
};

/**************** Game Soft Body Settings ****************/

class GameSoftBodySettings : public Pointer {
public:
	GameSoftBodySettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Linear Stiffness: Linear stiffness of the soft body links */
	float linear_stiffness(void);
	/* Friction: Dynamic Friction */
	float dynamic_friction(void);
	/* Threshold: Shape matching threshold */
	float shape_threshold(void);
	/* Margin: Collision margin for soft body. Small value makes the algorithm unstable */
	float collision_margin(void);
	/* Welding: Welding threshold: distance between nearby vertices to be considered equal => set to 0.0 to disable welding test and speed up scene loading (ok if the mesh has no duplicates) */
	float weld_threshold(void);
	/* Position Iterations: Position solver iterations */
	int location_iterations(void);
	/* Cluster Iterations: Specify the number of cluster iterations */
	int cluster_iterations(void);
	/* Shape Match: Enable soft body shape matching goal */
	bool use_shape_match(void);
	/* Bending Const: Enable bending constraints */
	bool use_bending_constraints(void);
	/* Rigid to Soft Body: Enable cluster collision between soft and rigid body */
	bool use_cluster_rigid_to_softbody(void);
	/* Soft to Soft Body: Enable cluster collision between soft and soft body */
	bool use_cluster_soft_to_softbody(void);
};

/**************** Soft Body Settings ****************/

class SoftBodySettings : public Pointer {
public:
	SoftBodySettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Friction: General media friction for point movements */
	float friction(void);
	/* Mass: General Mass value */
	float mass(void);
	/* Mass Vertex Group: Control point mass values */
	std::string vertex_group_mass(void);
	/* Gravitation: Apply gravitation to point movement */
	float gravity(void);
	/* Speed: Tweak timing for physics to control frequency and speed */
	float speed(void);
	/* Goal Vertex Group: Control point weight values */
	std::string vertex_group_goal(void);
	/* Goal Minimum: Goal minimum, vertex weights are scaled to match this range */
	float goal_min(void);
	/* Goal Maximum: Goal maximum, vertex weights are scaled to match this range */
	float goal_max(void);
	/* Goal Default: Default Goal (vertex target position) value, when no Vertex Group used */
	float goal_default(void);
	/* Goal Stiffness: Goal (vertex target position) spring stiffness */
	float goal_spring(void);
	/* Goal Damping: Goal (vertex target position) friction */
	float goal_friction(void);
	/* Pull: Edge spring stiffness when longer than rest length */
	float pull(void);
	/* Push: Edge spring stiffness when shorter than rest length */
	float push(void);
	/* Damp: Edge spring friction */
	float damping(void);
	/* SL: Alter spring length to shrink/blow up (unit %) 0 to disable */
	int spring_length(void);
	/* Aero: Make edges 'sail' */
	int aero(void);
	/* Plastic: Permanent deform */
	int plastic(void);
	/* Bending: Bending Stiffness */
	float bend(void);
	/* Shear: Shear Stiffness */
	float shear(void);
	/* Spring Vertex Group: Control point spring strength values */
	std::string vertex_group_spring(void);
	/* Collision Type: Choose Collision Type */
	enum collision_type_enum {
		collision_type_MANUAL = 0,
		collision_type_AVERAGE = 1,
		collision_type_MINIMAL = 2,
		collision_type_MAXIMAL = 3,
		collision_type_MINMAX = 4,
	};
	collision_type_enum collision_type(void);
	/* Ball Size: Absolute ball size or factor if not manual adjusted */
	float ball_size(void);
	/* Ball Size: Ball inflating pressure */
	float ball_stiff(void);
	/* Ball Size: Blending to inelastic collision */
	float ball_damp(void);
	/* Error Limit: The Runge-Kutta ODE solver error limit, low value gives more precision, high values speed */
	float error_threshold(void);
	/* Min Step: Minimal # solver steps/frame */
	int step_min(void);
	/* Max Step: Maximal # solver steps/frame */
	int step_max(void);
	/* Choke: 'Viscosity' inside collision target */
	int choke(void);
	/* Fuzzy: Fuzziness while on collision, high values make collsion handling faster but less stable */
	int fuzzy(void);
	/* V: Use velocities for automagic step sizes */
	bool use_auto_step(void);
	/* Print Performance to Console: Turn on SB diagnose console prints */
	bool use_diagnose(void);
	/* Estimate matrix: estimate matrix .. split to COM , ROT ,SCALE  */
	bool use_estimate_matrix(void);
	/* Center of mass: Location of Center of mass */
	Array<float, 3> location_mass_center(void);
	/* Rot Matrix: Estimated rotation matrix */
	Array<float, 9> rotation_estimate(void);
	/* Scale Matrix: Estimated scale matrix */
	Array<float, 9> scale_estimate(void);
	/* Use Goal: Define forces for vertices to stick to animated position */
	bool use_goal(void);
	/* Use Edges: Use Edges as springs */
	bool use_edges(void);
	/* Stiff Quads: Adds diagonal springs on 4-gons */
	bool use_stiff_quads(void);
	/* Edge Collision: Edges collide too */
	bool use_edge_collision(void);
	/* Face Collision: Faces collide too, can be very slow */
	bool use_face_collision(void);
	/* Aerodynamics Type: Method of calculating aerodynamic interaction */
	enum aerodynamics_type_enum {
		aerodynamics_type_SIMPLE = 0,
		aerodynamics_type_LIFT_FORCE = 1,
	};
	aerodynamics_type_enum aerodynamics_type(void);
	/* Self Collision: Enable naive vertex ball self collision */
	bool use_self_collision(void);
	/* Effector Weights */
	EffectorWeights effector_weights(void);
};

/**************** Packed File ****************/

class PackedFile : public Pointer {
public:
	PackedFile(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Size: Size of packed file in bytes */
	int size(void);
};

/**************** Particle Target ****************/

class ParticleTarget : public Pointer {
public:
	ParticleTarget(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Particle target name */
	std::string name(void);
	/* Target Object: The object that has the target particle system (empty if same object) */
	Object object(void);
	/* Target Particle System: The index of particle system on the target object */
	int system(void);
	/* Time */
	float time(void);
	/* Duration */
	float duration(void);
	/* Valid: Keyed particles target is valid */
	bool is_valid(void);
	/* Mode */
	enum alliance_enum {
		alliance_FRIEND = 1,
		alliance_NEUTRAL = 0,
		alliance_ENEMY = 2,
	};
	alliance_enum alliance(void);
};

/**************** SPH Fluid Settings ****************/

class SPHFluidSettings : public Pointer {
public:
	SPHFluidSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Spring Force: Spring force */
	float spring_force(void);
	/* Interaction Radius: Fluid interaction radius */
	float fluid_radius(void);
	/* Rest Length: Spring rest length (factor of interaction radius) */
	float rest_length(void);
	/* Viscoelastic Springs: Use viscoelastic springs instead of Hooke's springs */
	bool use_viscoelastic_springs(void);
	/* Initial Rest Length: Use the initial length as spring rest length instead of interaction radius/2 */
	bool use_initial_rest_length(void);
	/* Plasticity: How much the spring rest length can change after the elastic limit is crossed */
	float plasticity(void);
	/* Elastic Limit: How much the spring has to be stretched/compressed in order to change it's rest length */
	float yield_ratio(void);
	/* Viscosity: Linear viscosity */
	float linear_viscosity(void);
	/* Square viscosity: Square viscosity */
	float square_viscosity(void);
	/* Density Force: How strongly the fluid tends to rest density */
	float density_force(void);
	/* Repulsion: How strongly the fluid tries to keep from clustering */
	float repulsion_force(void);
	/* Rest Density: Rest density of the fluid */
	float rest_density(void);
	/* Buoyancy: Artificial buoyancy force in negative gravity direction based on pressure differences inside the fluid */
	float buoyancy(void);
};

/**************** Particle Hair Key ****************/

class ParticleHairKey : public Pointer {
public:
	ParticleHairKey(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Time: Relative time of key over hair length */
	float time(void);
	/* Weight: Weight for cloth simulation */
	float weight(void);
	/* Location (Object Space): Location of the hair key in object space */
	Array<float, 3> co(void);
	/* Location: Location of the hair key in its internal coordinate system, relative to the emitting face */
	Array<float, 3> co_hair_space(void);
};

/**************** Particle Key ****************/

class ParticleKey : public Pointer {
public:
	ParticleKey(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Location: Key location */
	Array<float, 3> location(void);
	/* Velocity: Key velocity */
	Array<float, 3> velocity(void);
	/* Rotation: Key rotation quaterion */
	Array<float, 4> rotation(void);
	/* Angular Velocity: Key angular velocity */
	Array<float, 3> angular_velocity(void);
	/* Time: Time of key over the simulation */
	float time(void);
};

/**************** Child Particle ****************/

class ChildParticle : public Pointer {
public:
	ChildParticle(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Particle ****************/

class Particle : public Pointer {
public:
	Particle(const PointerRNA& ptr) :
		Pointer(ptr),
		hair(ptr),
		keys(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Particle Location */
	Array<float, 3> location(void);
	/* Particle Velocity */
	Array<float, 3> velocity(void);
	/* Angular Velocity */
	Array<float, 3> angular_velocity(void);
	/* Rotation */
	Array<float, 4> rotation(void);
	/* Previous Particle Location */
	Array<float, 3> prev_location(void);
	/* Previous Particle Velocity */
	Array<float, 3> prev_velocity(void);
	/* Previous Angular Velocity */
	Array<float, 3> prev_angular_velocity(void);
	/* Previous Rotation */
	Array<float, 4> prev_rotation(void);
	/* Hair */
	COLLECTION_PROPERTY(ParticleHairKey, Particle, hair)
	/* Keyed States */
	COLLECTION_PROPERTY(ParticleKey, Particle, keys)
	/* Birth Time */
	float birth_time(void);
	/* Lifetime */
	float lifetime(void);
	/* Die Time */
	float die_time(void);
	/* Size */
	float size(void);
	/* Exists */
	bool is_exist(void);
	/* Visible */
	bool is_visible(void);
	/* Alive State */
	enum alive_state_enum {
		alive_state_DEAD = 1,
		alive_state_UNBORN = 2,
		alive_state_ALIVE = 3,
		alive_state_DYING = 4,
	};
	alive_state_enum alive_state(void);
};

/**************** Particle Dupliobject Weight ****************/

class ParticleDupliWeight : public Pointer {
public:
	ParticleDupliWeight(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Particle dupliobject name */
	std::string name(void);
	/* Count: The number of times this object is repeated with respect to other objects */
	int count(void);
};

/**************** Particle System ****************/

class ParticleSystem : public Pointer {
public:
	ParticleSystem(const PointerRNA& ptr) :
		Pointer(ptr),
		particles(ptr),
		child_particles(ptr),
		targets(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Particle system name */
	std::string name(void);
	/* Settings: Particle system settings */
	ParticleSettings settings(void);
	/* Particles: Particles generated by the particle system */
	COLLECTION_PROPERTY(Particle, ParticleSystem, particles)
	/* Child Particles: Child particles generated by the particle system */
	COLLECTION_PROPERTY(ChildParticle, ParticleSystem, child_particles)
	/* Seed: Offset in the random number table, to get a different randomized result */
	int seed(void);
	/* Child Seed: Offset in the random number table for child particles, to get a different randomized result */
	int child_seed(void);
	/* Global Hair: Hair keys are in global coordinate space */
	bool is_global_hair(void);
	/* Hair Dynamics: Enable hair dynamics using cloth simulation */
	bool use_hair_dynamics(void);
	/* Cloth: Cloth dynamics for hair */
	ClothModifier cloth(void);
	/* Reactor Target Object: For reactor systems, the object that has the target particle system (empty if same object) */
	Object reactor_target_object(void);
	/* Reactor Target Particle System: For reactor systems, index of particle system on the target object */
	int reactor_target_particle_system(void);
	/* Keyed timing: Use key times */
	bool use_keyed_timing(void);
	/* Targets: Target particle systems */
	COLLECTION_PROPERTY(ParticleTarget, ParticleSystem, targets)
	/* Active Particle Target */
	ParticleTarget active_particle_target(void);
	/* Active Particle Target Index */
	int active_particle_target_index(void);
	/* Billboard Normal UV: UV Layer to control billboard normals */
	std::string billboard_normal_uv(void);
	/* Billboard Time Index UV: UV Layer to control billboard time index (X-Y) */
	std::string billboard_time_index_uv(void);
	/* Billboard Split UV: UV Layer to control billboard splitting */
	std::string billboard_split_uv(void);
	/* Vertex Group Density: Vertex group to control density */
	std::string vertex_group_density(void);
	/* Vertex Group Density Negate: Negate the effect of the density vertex group */
	bool invert_vertex_group_density(void);
	/* Vertex Group Velocity: Vertex group to control velocity */
	std::string vertex_group_velocity(void);
	/* Vertex Group Velocity Negate: Negate the effect of the velocity vertex group */
	bool invert_vertex_group_velocity(void);
	/* Vertex Group Length: Vertex group to control length */
	std::string vertex_group_length(void);
	/* Vertex Group Length Negate: Negate the effect of the length vertex group */
	bool invert_vertex_group_length(void);
	/* Vertex Group Clump: Vertex group to control clump */
	std::string vertex_group_clump(void);
	/* Vertex Group Clump Negate: Negate the effect of the clump vertex group */
	bool invert_vertex_group_clump(void);
	/* Vertex Group Kink: Vertex group to control kink */
	std::string vertex_group_kink(void);
	/* Vertex Group Kink Negate: Negate the effect of the kink vertex group */
	bool invert_vertex_group_kink(void);
	/* Vertex Group Roughness 1: Vertex group to control roughness 1 */
	std::string vertex_group_roughness_1(void);
	/* Vertex Group Roughness 1 Negate: Negate the effect of the roughness 1 vertex group */
	bool invert_vertex_group_roughness_1(void);
	/* Vertex Group Roughness 2: Vertex group to control roughness 2 */
	std::string vertex_group_roughness_2(void);
	/* Vertex Group Roughness 2 Negate: Negate the effect of the roughness 2 vertex group */
	bool invert_vertex_group_roughness_2(void);
	/* Vertex Group Roughness End: Vertex group to control roughness end */
	std::string vertex_group_roughness_end(void);
	/* Vertex Group Roughness End Negate: Negate the effect of the roughness end vertex group */
	bool invert_vertex_group_roughness_end(void);
	/* Vertex Group Size: Vertex group to control size */
	std::string vertex_group_size(void);
	/* Vertex Group Size Negate: Negate the effect of the size vertex group */
	bool invert_vertex_group_size(void);
	/* Vertex Group Tangent: Vertex group to control tangent */
	std::string vertex_group_tangent(void);
	/* Vertex Group Tangent Negate: Negate the effect of the tangent vertex group */
	bool invert_vertex_group_tangent(void);
	/* Vertex Group Rotation: Vertex group to control rotation */
	std::string vertex_group_rotation(void);
	/* Vertex Group Rotation Negate: Negate the effect of the rotation vertex group */
	bool invert_vertex_group_rotation(void);
	/* Vertex Group Field: Vertex group to control field */
	std::string vertex_group_field(void);
	/* Vertex Group Field Negate: Negate the effect of the field vertex group */
	bool invert_vertex_group_field(void);
	/* Point Cache */
	PointCache point_cache(void);
	/* Multiple Caches: Particle system has multiple point caches */
	bool has_multiple_caches(void);
	/* Parent: Use this object's coordinate system instead of global coordinate system */
	Object parent(void);
	/* Editable: Particle system can be edited in particle mode */
	bool is_editable(void);
	/* Edited: Particle system has been edited in particle mode */
	bool is_edited(void);
};

/**************** Particle Settings Texture Slot ****************/

class ParticleSettingsTextureSlot : public TextureSlot {
public:
	ParticleSettingsTextureSlot(const PointerRNA& ptr) :
		TextureSlot(ptr)
		{}

	/* Texture Coordinates: Texture coordinates used to map the texture onto the background */
	enum texture_coords_enum {
		texture_coords_GLOBAL = 8,
		texture_coords_OBJECT = 32,
		texture_coords_UV = 16,
		texture_coords_ORCO = 1,
		texture_coords_STRAND = 8192,
	};
	texture_coords_enum texture_coords(void);
	/* Object: Object to use for mapping with Object texture coordinates */
	Object object(void);
	/* UV Layer: UV layer to use for mapping with UV texture coordinates */
	std::string uv_layer(void);
	/* X Mapping */
	enum mapping_x_enum {
		mapping_x_NONE = 0,
		mapping_x_X = 1,
		mapping_x_Y = 2,
		mapping_x_Z = 3,
	};
	mapping_x_enum mapping_x(void);
	/* Y Mapping */
	enum mapping_y_enum {
		mapping_y_NONE = 0,
		mapping_y_X = 1,
		mapping_y_Y = 2,
		mapping_y_Z = 3,
	};
	mapping_y_enum mapping_y(void);
	/* Z Mapping */
	enum mapping_z_enum {
		mapping_z_NONE = 0,
		mapping_z_X = 1,
		mapping_z_Y = 2,
		mapping_z_Z = 3,
	};
	mapping_z_enum mapping_z(void);
	/* Mapping */
	enum mapping_enum {
		mapping_FLAT = 0,
		mapping_CUBE = 1,
		mapping_TUBE = 2,
		mapping_SPHERE = 3,
	};
	mapping_enum mapping(void);
	/* Emission Time: Affect the emission time of the particles */
	bool use_map_time(void);
	/* Life Time: Affect the life time of the particles */
	bool use_map_life(void);
	/* Density: Affect the density of the particles */
	bool use_map_density(void);
	/* Size: Affect the particle size */
	bool use_map_size(void);
	/* Initial Velocity: Affect the particle initial velocity */
	bool use_map_velocity(void);
	/* Force Field: Affect the particle force fields */
	bool use_map_field(void);
	/* Gravity: Affect the particle gravity */
	bool use_map_gravity(void);
	/* Damp: Affect the particle velocity damping */
	bool use_map_damp(void);
	/* Clump: Affect the child clumping */
	bool use_map_clump(void);
	/* Kink: Affect the child kink */
	bool use_map_kink(void);
	/* Rough: Affect the child rough */
	bool use_map_rough(void);
	/* Length: Affect the child hair length */
	bool use_map_length(void);
	/* Emission Time Factor: Amount texture affects particle emission time */
	float time_factor(void);
	/* Life Time Factor: Amount texture affects particle life time */
	float life_factor(void);
	/* Density Factor: Amount texture affects particle density */
	float density_factor(void);
	/* Size Factor: Amount texture affects physical particle size */
	float size_factor(void);
	/* Velocity Factor: Amount texture affects particle initial velocity */
	float velocity_factor(void);
	/* Field Factor: Amount texture affects particle force fields */
	float field_factor(void);
	/* Gravity Factor: Amount texture affects particle gravity */
	float gravity_factor(void);
	/* Damp Factor: Amount texture affects particle damping */
	float damp_factor(void);
	/* Length Factor: Amount texture affects child hair length */
	float length_factor(void);
	/* Clump Factor: Amount texture affects child clump */
	float clump_factor(void);
	/* Kink Factor: Amount texture affects child kink */
	float kink_factor(void);
	/* Rough Factor: Amount texture affects child roughness */
	float rough_factor(void);
};

/**************** Particle Settings ****************/

class ParticleSettings : public ID {
public:
	ParticleSettings(const PointerRNA& ptr) :
		ID(ptr),
		texture_slots(ptr),
		dupli_weights(ptr)
		{}

	/* Textures: Texture slots defining the mapping and influence of textures */
	COLLECTION_PROPERTY(ParticleSettingsTextureSlot, ParticleSettings, texture_slots)
	/* Active Texture: Active texture slot being displayed */
	Texture active_texture(void);
	/* Active Texture Index: Index of active texture slot */
	int active_texture_index(void);
	/* Fluid: Particles were created by a fluid simulation */
	bool is_fluid(void);
	/* Start/End: Give birth to unreacted particles eventually */
	bool use_react_start_end(void);
	/* Multi React: React multiple times */
	bool use_react_multiple(void);
	/* Regrow: Regrow hair for each frame */
	bool regrow_hair(void);
	/* Unborn: Show particles before they are emitted */
	bool show_unborn(void);
	/* Died: Show particles after they have died */
	bool use_dead(void);
	/* Random: Emit in random order of elements */
	bool use_emit_random(void);
	/* Even Distribution: Use even distribution from faces based on face areas or edge lengths */
	bool use_even_distribution(void);
	/* Die on hit: Particles die when they collide with a deflector object */
	bool use_die_on_collision(void);
	/* Size Deflect: Use particle's size in deflection */
	bool use_size_deflect(void);
	/* Dynamic: Sets rotation to dynamic/constant */
	bool use_dynamic_rotation(void);
	/* Mass from Size: Multiply mass by particle size */
	bool use_multiply_size_mass(void);
	/* Advanced: Use full physics calculations for growing hair */
	bool use_advanced_hair(void);
	/* Boids 2D: Constrain boids to a surface */
	bool lock_boids_to_surface(void);
	/* B-Spline: Interpolate hair using B-Splines */
	bool use_hair_bspline(void);
	/* Invert Grid: Invert what is considered object and what is not */
	bool invert_grid(void);
	/* Hexagonal Grid: Create the grid in a hexagonal pattern */
	bool hexagonal_grid(void);
	/* Effect Children: Apply effectors to children */
	bool apply_effector_to_children(void);
	/* Long Hair: Calculate children that suit long hair well */
	bool create_long_hair_children(void);
	/* apply_guide_to_children */
	bool apply_guide_to_children(void);
	/* Self Effect: Particle effectors effect themselves */
	bool use_self_effect(void);
	/* Type */
	enum type_enum {
		type_EMITTER = 0,
		type_HAIR = 2,
	};
	type_enum type(void);
	/* Emit From: Where to emit particles from */
	enum emit_from_enum {
		emit_from_VERT = 0,
		emit_from_FACE = 1,
		emit_from_VOLUME = 2,
		emit_from_PARTICLE = 3,
	};
	emit_from_enum emit_from(void);
	/* Distribution: How to distribute particles on selected element */
	enum distribution_enum {
		distribution_JIT = 0,
		distribution_RAND = 1,
		distribution_GRID = 2,
	};
	distribution_enum distribution(void);
	/* Physics Type: Particle physics type */
	enum physics_type_enum {
		physics_type_NO = 0,
		physics_type_NEWTON = 1,
		physics_type_KEYED = 2,
		physics_type_BOIDS = 3,
		physics_type_FLUID = 4,
	};
	physics_type_enum physics_type(void);
	/* Rotation: Particles initial rotation */
	enum rotation_mode_enum {
		rotation_mode_NONE = 0,
		rotation_mode_NOR = 1,
		rotation_mode_VEL = 2,
		rotation_mode_GLOB_X = 3,
		rotation_mode_GLOB_Y = 4,
		rotation_mode_GLOB_Z = 5,
		rotation_mode_OB_X = 6,
		rotation_mode_OB_Y = 7,
		rotation_mode_OB_Z = 8,
	};
	rotation_mode_enum rotation_mode(void);
	/* Angular Velocity Mode: Particle angular velocity mode */
	enum angular_velocity_mode_enum {
		angular_velocity_mode_NONE = 0,
		angular_velocity_mode_SPIN = 1,
		angular_velocity_mode_RAND = 2,
	};
	angular_velocity_mode_enum angular_velocity_mode(void);
	/* React On: The event of target particles to react on */
	enum react_event_enum {
		react_event_DEATH = 0,
		react_event_COLLIDE = 1,
		react_event_NEAR = 2,
	};
	react_event_enum react_event(void);
	/* Velocity: Show particle velocity */
	bool show_velocity(void);
	/* Size: Show particle size */
	bool show_size(void);
	/* Emitter: Render emitter Object also */
	bool use_render_emitter(void);
	/* Health: Draw boid health */
	bool show_health(void);
	/* Absolute Path Time: Path timing is in absolute frames */
	bool use_absolute_path_time(void);
	/* Lock Billboard: Lock the billboards align axis */
	bool lock_billboard(void);
	/* Parents: Render parent particles */
	bool use_parent_particles(void);
	/* Number: Show particle number */
	bool show_number(void);
	/* Pick Random: Pick objects from group randomly */
	bool use_group_pick_random(void);
	/* Use Count: Use object multiple times in the same group */
	bool use_group_count(void);
	/* Use Global: Use object's global coordinates for duplication */
	bool use_global_dupli(void);
	/* Adaptive render: Draw steps of the particle path */
	bool use_render_adaptive(void);
	/* Speed: Multiply line length by particle speed */
	bool use_velocity_length(void);
	/* Material Color: Draw particles using material's diffuse color */
	bool show_material_color(void);
	/* Whole Group: Use whole group at once */
	bool use_whole_group(void);
	/* Strand render: Use the strand primitive for rendering */
	bool use_strand_primitive(void);
	/* Particle Drawing: How particles are drawn in viewport */
	enum draw_method_enum {
		draw_method_NONE = 0,
		draw_method_RENDER = 10,
		draw_method_DOT = 1,
		draw_method_CIRC = 2,
		draw_method_CROSS = 3,
		draw_method_AXIS = 4,
	};
	draw_method_enum draw_method(void);
	/* Particle Rendering: How particles are rendered */
	enum render_type_enum {
		render_type_NONE = 0,
		render_type_HALO = 1,
		render_type_LINE = 5,
		render_type_PATH = 6,
		render_type_OBJECT = 7,
		render_type_GROUP = 8,
		render_type_BILLBOARD = 9,
	};
	render_type_enum render_type(void);
	/* Draw Size: Size of particles on viewport in pixels (0=default) */
	int draw_size(void);
	/* Children From: Create child particles */
	enum child_type_enum {
		child_type_NONE = 0,
		child_type_SIMPLE = 1,
		child_type_INTERPOLATED = 2,
	};
	child_type_enum child_type(void);
	/* Steps: How many steps paths are drawn with (power of 2) */
	int draw_step(void);
	/* Render: How many steps paths are rendered with (power of 2) */
	int render_step(void);
	/* Segments: Number of hair segments */
	int hair_step(void);
	/* Keys Step */
	int keys_step(void);
	/* Degrees: How many degrees path has to curve to make another render segment */
	int adaptive_angle(void);
	/* Pixel: How many pixels path has to cover to make another render segment */
	int adaptive_pixel(void);
	/* Display: Percentage of particles to display in 3D view */
	int draw_percentage(void);
	/* Material: Specify material used for the particles */
	int material(void);
	/* Integration: Select physics integrator type */
	enum integrator_enum {
		integrator_EULER = 0,
		integrator_VERLET = 3,
		integrator_MIDPOINT = 1,
		integrator_RK4 = 2,
	};
	integrator_enum integrator(void);
	/* Kink: Type of periodic offset on the path */
	enum kink_enum {
		kink_NO = 0,
		kink_CURL = 1,
		kink_RADIAL = 2,
		kink_WAVE = 3,
		kink_BRAID = 4,
	};
	kink_enum kink(void);
	/* Axis: Which axis to use for offset */
	enum kink_axis_enum {
		kink_axis_X = 0,
		kink_axis_Y = 1,
		kink_axis_Z = 2,
	};
	kink_axis_enum kink_axis(void);
	/* Align to: In respect to what the billboards are aligned */
	enum billboard_align_enum {
		billboard_align_X = 0,
		billboard_align_Y = 1,
		billboard_align_Z = 2,
		billboard_align_VIEW = 3,
		billboard_align_VEL = 4,
	};
	billboard_align_enum billboard_align(void);
	/* UV Split: Amount of rows/columns to split UV coordinates for billboards */
	int billboard_uv_split(void);
	/* Animate: How to animate billboard textures */
	enum billboard_animation_enum {
		billboard_animation_NONE = 0,
		billboard_animation_AGE = 1,
		billboard_animation_FRAME = 3,
		billboard_animation_ANGLE = 2,
	};
	billboard_animation_enum billboard_animation(void);
	/* Offset: How to offset billboard textures */
	enum billboard_offset_split_enum {
		billboard_offset_split_NONE = 0,
		billboard_offset_split_LINEAR = 1,
		billboard_offset_split_RANDOM = 2,
	};
	billboard_offset_split_enum billboard_offset_split(void);
	/* Tilt: Tilt of the billboards */
	float billboard_tilt(void);
	/* Random Tilt: Random tilt of the billboards */
	float billboard_tilt_random(void);
	/* Billboard Offset */
	Array<float, 2> billboard_offset(void);
	/* Child Simplification: Remove child strands as the object becomes smaller on the screen */
	bool use_simplify(void);
	/* Viewport */
	bool use_simplify_viewport(void);
	/* Reference Size: Reference size in pixels, after which simplification begins */
	int simplify_refsize(void);
	/* Rate: Speed of simplification */
	float simplify_rate(void);
	/* Transition: Transition period for fading out strands */
	float simplify_transition(void);
	/* Rate: Speed of Simplification */
	float simplify_viewport(void);
	/* Start: Frame # to start emitting particles */
	float frame_start(void);
	/* End: Frame # to stop emitting particles */
	float frame_end(void);
	/* Lifetime: Specify the life span of the particles */
	float lifetime(void);
	/* Random: Give the particle life a random variation */
	float lifetime_random(void);
	/* Tweak: A multiplier for physics timestep (1.0 means one frame = 1/25 seconds) */
	float time_tweak(void);
	/* Subframes: Subframes to simulate for improved stability and finer granularity simulations */
	int subframes(void);
	/* Amount: Amount of jitter applied to the sampling */
	float jitter_factor(void);
	/* Stiffness: Hair stiffness for effectors */
	float effect_hair(void);
	/* Amount: Total number of particles */
	int count(void);
	/* P/F: Emission locations / face (0 = automatic) */
	int userjit(void);
	/* Resolution: The resolution of the particle grid */
	int grid_resolution(void);
	/* Grid Randomness: Add random offset to the grid locations */
	float grid_random(void);
	/* Effector Amount: How many particles are effectors (0 is all particles) */
	int effector_amount(void);
	/* Normal: Let the surface normal give the particle a starting speed */
	float normal_factor(void);
	/* Object: Let the object give the particle a starting speed */
	float object_factor(void);
	/* Random: Give the starting speed a random variation */
	float factor_random(void);
	/* Particle: Let the target particle give the particle a starting speed */
	float particle_factor(void);
	/* Tangent: Let the surface tangent give the particle a starting speed */
	float tangent_factor(void);
	/* Rot: Rotate the surface tangent */
	float tangent_phase(void);
	/* Reactor: Let the vector away from the target particles location give the particle a starting speed */
	float reactor_factor(void);
	/* Object Aligned: Let the emitter object orientation give the particle a starting speed */
	Array<float, 3> object_align_factor(void);
	/* Angular Velocity: Angular velocity amount */
	float angular_velocity_factor(void);
	/* Phase: Initial rotation phase */
	float phase_factor(void);
	/* Random Rotation: Randomize rotation */
	float rotation_factor_random(void);
	/* Random Phase: Randomize rotation phase */
	float phase_factor_random(void);
	/* Hair Length: Length of the hair */
	float hair_length(void);
	/* Mass: Specify the mass of the particles */
	float mass(void);
	/* Size: The size of the particles */
	float particle_size(void);
	/* Random Size: Give the particle size a random variation */
	float size_random(void);
	/* Drag: Specify the amount of air-drag */
	float drag_factor(void);
	/* Brownian: Specify the amount of Brownian motion */
	float brownian_factor(void);
	/* Damp: Specify the amount of damping */
	float damping(void);
	/* Random Length: Give path length a random variation */
	float length_random(void);
	/* Children Per Parent: Amount of children/parent */
	int child_nbr(void);
	/* Rendered Children: Amount of children/parent for rendering */
	int rendered_child_count(void);
	/* Virtual Parents: Relative amount of virtual parents */
	float virtual_parents(void);
	/* Child Size: A multiplier for the child particle size */
	float child_size(void);
	/* Random Child Size: Random variation to the size of the child particles */
	float child_size_random(void);
	/* Child Radius: Radius of children around parent */
	float child_radius(void);
	/* Child Roundness: Roundness of children around parent */
	float child_roundness(void);
	/* Clump: Amount of clumping */
	float clump_factor(void);
	/* Shape: Shape of clumping */
	float clump_shape(void);
	/* Amplitude: The amplitude of the offset */
	float kink_amplitude(void);
	/* Amplitude Clump: How much clump effects kink amplitude */
	float kink_amplitude_clump(void);
	/* Frequency: The frequency of the offset (1/total length) */
	float kink_frequency(void);
	/* Shape: Adjust the offset to the beginning/end */
	float kink_shape(void);
	/* Flatness: How flat the hairs are */
	float kink_flat(void);
	/* Rough1: Amount of location dependent rough */
	float roughness_1(void);
	/* Size1: Size of location dependent rough */
	float roughness_1_size(void);
	/* Rough2: Amount of random rough */
	float roughness_2(void);
	/* Size2: Size of random rough */
	float roughness_2_size(void);
	/* Threshold: Amount of particles left untouched by random rough */
	float roughness_2_threshold(void);
	/* Rough Endpoint: Amount of end point rough */
	float roughness_endpoint(void);
	/* Shape: Shape of end point rough */
	float roughness_end_shape(void);
	/* Length: Length of child paths */
	float child_length(void);
	/* Threshold: Amount of particles left untouched by child path length */
	float child_length_threshold(void);
	/* Parting Factor: Create parting in the children based on parent strands */
	float child_parting_factor(void);
	/* Parting Minimum: Minimum root to tip angle (tip distance/root distance for long hair) */
	float child_parting_min(void);
	/* Parting Maximum: Maximum root to tip angle (tip distance/root distance for long hair) */
	float child_parting_max(void);
	/* Threshold: Threshold of branching */
	float branch_threshold(void);
	/* Back: Length of the line's tail */
	float line_length_tail(void);
	/* Head: Length of the line's head */
	float line_length_head(void);
	/* Path Start: Starting time of drawn path */
	float path_start(void);
	/* Path End: End time of drawn path */
	float path_end(void);
	/* Trail Count: Number of trail particles */
	int trail_count(void);
	/* Loop count: Number of times the keys are looped */
	int keyed_loops(void);
	/* Dupli Group: Show Objects in this Group in place of particles */
	Group dupli_group(void);
	/* Dupli Group Weights: Weights for all of the objects in the dupli group */
	COLLECTION_PROPERTY(ParticleDupliWeight, ParticleSettings, dupli_weights)
	/* Active Dupli Object */
	ParticleDupliWeight active_dupliweight(void);
	/* Active Dupli Object Index */
	int active_dupliweight_index(void);
	/* Dupli Object: Show this Object in place of particles */
	Object dupli_object(void);
	/* Billboard Object: Billboards face this object (default is active camera) */
	Object billboard_object(void);
	/* Boid Settings */
	BoidSettings boids(void);
	/* SPH Fluid Settings */
	SPHFluidSettings fluid(void);
	/* Effector Weights */
	EffectorWeights effector_weights(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Force Field 1 */
	FieldSettings force_field_1(void);
	/* Force Field 2 */
	FieldSettings force_field_2(void);
};

/**************** Texture Slots ****************/

class ParticleSettingsTextureSlots : public Pointer {
public:
	ParticleSettingsTextureSlots(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Pose ****************/

class Pose : public Pointer {
public:
	Pose(const PointerRNA& ptr) :
		Pointer(ptr),
		bones(ptr),
		bone_groups(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Pose Bones: Individual pose bones for the armature */
	COLLECTION_PROPERTY(PoseBone, Pose, bones)
	/* Bone Groups: Groups of the bones */
	COLLECTION_PROPERTY(BoneGroup, Pose, bone_groups)
	/* IK Solver: Selection of IK solver for IK chain, current choice is 0 for Legacy, 1 for iTaSC */
	enum ik_solver_enum {
		ik_solver_LEGACY = 0,
		ik_solver_ITASC = 1,
	};
	ik_solver_enum ik_solver(void);
	/* IK Param: Parameters for IK solver */
	IKParam ik_param(void);
	/* Animation Visualisation: Animation data for this datablock */
	AnimViz animation_visualisation(void);
};

/**************** Bone Groups ****************/

class BoneGroups : public Pointer {
public:
	BoneGroups(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Bone Group: Active bone group for this pose */
	BoneGroup active(void);
	/* Active Bone Group Index: Active index in bone groups array */
	int active_index(void);
};

/**************** Pose Bone ****************/

class PoseBone : public Pointer {
public:
	PoseBone(const PointerRNA& ptr) :
		Pointer(ptr),
		constraints(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Constraints: Constraints that act on this PoseChannel */
	COLLECTION_PROPERTY(Constraint, PoseBone, constraints)
	/* Name */
	std::string name(void);
	/* Motion Path: Motion Path for this element */
	MotionPath motion_path(void);
	/* Bone: Bone associated with this PoseBone */
	Bone bone(void);
	/* Parent: Parent of this pose bone */
	PoseBone parent(void);
	/* Child: Child of this pose bone */
	PoseBone child(void);
	/* Location */
	Array<float, 3> location(void);
	/* Scale */
	Array<float, 3> scale(void);
	/* Quaternion Rotation: Rotation in Quaternions */
	Array<float, 4> rotation_quaternion(void);
	/* Axis-Angle Rotation: Angle of Rotation for Axis-Angle rotation representation */
	Array<float, 4> rotation_axis_angle(void);
	/* Euler Rotation: Rotation in Eulers */
	Array<float, 3> rotation_euler(void);
	/* Rotation Mode */
	enum rotation_mode_enum {
		rotation_mode_QUATERNION = 0,
		rotation_mode_XYZ = 1,
		rotation_mode_XZY = 2,
		rotation_mode_YXZ = 3,
		rotation_mode_YZX = 4,
		rotation_mode_ZXY = 5,
		rotation_mode_ZYX = 6,
		rotation_mode_AXIS_ANGLE = -1,
	};
	rotation_mode_enum rotation_mode(void);
	/* Channel Matrix: 4x4 matrix, before constraints */
	Array<float, 16> matrix_channel(void);
	/* Basis Matrix: Provides an alternative access to loc/scale/rotation relative to the parent and own rest bone. */
	Array<float, 16> matrix_basis(void);
	/* Pose Matrix: Final 4x4 matrix for this channel */
	Array<float, 16> matrix(void);
	/* Pose Head Position: Location of head of the channel's bone */
	Array<float, 3> head(void);
	/* Pose Tail Position: Location of tail of the channel's bone */
	Array<float, 3> tail(void);
	/* Has IK: Is part of an IK chain */
	bool is_in_ik_chain(void);
	/* IK X Lock: Disallow movement around the X axis */
	bool lock_ik_x(void);
	/* IK Y Lock: Disallow movement around the Y axis */
	bool lock_ik_y(void);
	/* IK Z Lock: Disallow movement around the Z axis */
	bool lock_ik_z(void);
	/* IK X Limit: Limit movement around the X axis */
	bool use_ik_limit_x(void);
	/* IK Y Limit: Limit movement around the Y axis */
	bool use_ik_limit_y(void);
	/* IK Z Limit: Limit movement around the Z axis */
	bool use_ik_limit_z(void);
	/* IK rot control: Apply channel rotation as IK constraint */
	bool use_ik_rotation_control(void);
	/* IK rot control: Apply channel size as IK constraint if stretching is enabled */
	bool use_ik_linear_control(void);
	/* IK X Minimum: Minimum angles for IK Limit */
	float ik_min_x(void);
	/* IK X Maximum: Maximum angles for IK Limit */
	float ik_max_x(void);
	/* IK Y Minimum: Minimum angles for IK Limit */
	float ik_min_y(void);
	/* IK Y Maximum: Maximum angles for IK Limit */
	float ik_max_y(void);
	/* IK Z Minimum: Minimum angles for IK Limit */
	float ik_min_z(void);
	/* IK Z Maximum: Maximum angles for IK Limit */
	float ik_max_z(void);
	/* IK X Stiffness: IK stiffness around the X axis */
	float ik_stiffness_x(void);
	/* IK Y Stiffness: IK stiffness around the Y axis */
	float ik_stiffness_y(void);
	/* IK Z Stiffness: IK stiffness around the Z axis */
	float ik_stiffness_z(void);
	/* IK Stretch: Allow scaling of the bone for IK */
	float ik_stretch(void);
	/* IK Rot Weight: Weight of rotation constraint for IK */
	float ik_rotation_weight(void);
	/* IK Lin Weight: Weight of scale constraint for IK */
	float ik_linear_weight(void);
	/* Custom Object: Object that defines custom draw type for this bone */
	Object custom_shape(void);
	/* Custom Shape Transform: Bone that defines the display transform of this custom shape */
	PoseBone custom_shape_transform(void);
	/* Bone Group Index: Bone Group this pose channel belongs to (0=no group) */
	int bone_group_index(void);
	/* Bone Group: Bone Group this pose channel belongs to */
	BoneGroup bone_group(void);
	/* Lock Location: Lock editing of location in the interface */
	Array<int, 3> lock_location(void);
	/* Lock Rotation: Lock editing of rotation in the interface */
	Array<int, 3> lock_rotation(void);
	/* Lock Rotation (4D Angle): Lock editing of 'angle' component of four-component rotations in the interface */
	bool lock_rotation_w(void);
	/* Lock Rotations (4D): Lock editing of four component rotations by components (instead of as Eulers) */
	bool lock_rotations_4d(void);
	/* Lock Scale: Lock editing of scale in the interface */
	Array<int, 3> lock_scale(void);
};

/**************** PoseBone Constraints ****************/

class PoseBoneConstraints : public Pointer {
public:
	PoseBoneConstraints(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Constraint: Active PoseChannel constraint */
	Constraint active(void);
};

/**************** IKParam ****************/

class IKParam : public Pointer {
public:
	IKParam(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* IK Solver: IK solver for which these parameters are defined, 0 for Legacy, 1 for iTaSC */
	enum ik_solver_enum {
		ik_solver_LEGACY = 0,
		ik_solver_ITASC = 1,
	};
	ik_solver_enum ik_solver(void);
};

/**************** bItasc ****************/

class Itasc : public IKParam {
public:
	Itasc(const PointerRNA& ptr) :
		IKParam(ptr)
		{}

	/* Precision: Precision of convergence in case of reiteration */
	float precision(void);
	/* Iterations: Maximum number of iterations for convergence in case of reiteration */
	int iterations(void);
	/* Num steps: Divides the frame interval into this many steps */
	int step_count(void);
	/* Mode */
	enum mode_enum {
		mode_ANIMATION = 0,
		mode_SIMULATION = 8,
	};
	mode_enum mode(void);
	/* Reiteration: Defines if the solver is allowed to reiterate (converges until precision is met) on none, first or all frames */
	enum reiteration_method_enum {
		reiteration_method_NEVER = 0,
		reiteration_method_INITIAL = 2,
		reiteration_method_ALWAYS = 6,
	};
	reiteration_method_enum reiteration_method(void);
	/* Auto step: Automatically determine the optimal number of steps for best performance/accuracy trade off */
	bool use_auto_step(void);
	/* Min step: Lower bound for timestep in second in case of automatic substeps */
	float step_min(void);
	/* Max step: Higher bound for timestep in second in case of automatic substeps */
	float step_max(void);
	/* Feedback: Feedback coefficient for error correction. Average response time=1/feedback. Default=20 */
	float feedback(void);
	/* Max Velocity: Maximum joint velocity in rad/s. Default=50 */
	float velocity_max(void);
	/* Solver: Solving method selection: Automatic damping or manual damping */
	enum solver_enum {
		solver_SDLS = 0,
		solver_DLS = 1,
	};
	solver_enum solver(void);
	/* Damp: Maximum damping coefficient when singular value is nearly 0. Higher values=more stability, less reactivity. Default=0.5 */
	float damping_max(void);
	/* Epsilon: Singular value under which damping is progressively applied. Higher values=more stability, less reactivity. Default=0.1 */
	float damping_epsilon(void);
};

/**************** Bone Group ****************/

class BoneGroup : public Pointer {
public:
	BoneGroup(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Color Set: Custom color set to use */
	enum color_set_enum {
		color_set_DEFAULT = 0,
		color_set_THEME01 = 1,
		color_set_THEME02 = 2,
		color_set_THEME03 = 3,
		color_set_THEME04 = 4,
		color_set_THEME05 = 5,
		color_set_THEME06 = 6,
		color_set_THEME07 = 7,
		color_set_THEME08 = 8,
		color_set_THEME09 = 9,
		color_set_THEME10 = 10,
		color_set_THEME11 = 11,
		color_set_THEME12 = 12,
		color_set_THEME13 = 13,
		color_set_THEME14 = 14,
		color_set_THEME15 = 15,
		color_set_THEME16 = 16,
		color_set_THEME17 = 17,
		color_set_THEME18 = 18,
		color_set_THEME19 = 19,
		color_set_THEME20 = 20,
		color_set_CUSTOM = -1,
	};
	color_set_enum color_set(void);
	/* Colors: Copy of the colors associated with the group's color set */
	ThemeBoneColorSet colors(void);
};

/**************** Game Property ****************/

class GameProperty : public Pointer {
public:
	GameProperty(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Available as GameObject attributes in the game engine's python API */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_BOOL = 0,
		type_INT = 1,
		type_FLOAT = 2,
		type_STRING = 3,
		type_TIMER = 5,
	};
	type_enum type(void);
	/* Debug: Print debug information for this property */
	bool show_debug(void);
};

/**************** Game Boolean Property ****************/

class GameBooleanProperty : public GameProperty {
public:
	GameBooleanProperty(const PointerRNA& ptr) :
		GameProperty(ptr)
		{}

	/* Value: Property value */
	bool value(void);
};

/**************** Game Integer Property ****************/

class GameIntProperty : public GameProperty {
public:
	GameIntProperty(const PointerRNA& ptr) :
		GameProperty(ptr)
		{}

	/* Value: Property value */
	int value(void);
};

/**************** Game Float Property ****************/

class GameFloatProperty : public GameProperty {
public:
	GameFloatProperty(const PointerRNA& ptr) :
		GameProperty(ptr)
		{}

	/* Value: Property value */
	float value(void);
};

/**************** Game Timer Property ****************/

class GameTimerProperty : public GameProperty {
public:
	GameTimerProperty(const PointerRNA& ptr) :
		GameProperty(ptr)
		{}

	/* Value: Property value */
	float value(void);
};

/**************** Game String Property ****************/

class GameStringProperty : public GameProperty {
public:
	GameStringProperty(const PointerRNA& ptr) :
		GameProperty(ptr)
		{}

	/* Value: Property value */
	std::string value(void);
};

/**************** Render Engine ****************/

class RenderEngine : public Pointer {
public:
	RenderEngine(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* bl_idname */
	std::string bl_idname(void);
	/* bl_label */
	std::string bl_label(void);
	/* bl_use_preview */
	bool bl_use_preview(void);
	/* bl_use_postprocess */
	bool bl_use_postprocess(void);
};

/**************** Render Result ****************/

class RenderResult : public Pointer {
public:
	RenderResult(const PointerRNA& ptr) :
		Pointer(ptr),
		layers(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* resolution_x */
	int resolution_x(void);
	/* resolution_y */
	int resolution_y(void);
	/* layers */
	COLLECTION_PROPERTY(RenderLayer, RenderResult, layers)
};

/**************** Render Layer ****************/

class RenderLayer : public Pointer {
public:
	RenderLayer(const PointerRNA& ptr) :
		Pointer(ptr),
		passes(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Render layer name */
	std::string name(void);
	/* Material Override: Material to override all other materials in this render layer */
	Material material_override(void);
	/* Light Override: Group to override all other lights in this render layer */
	Group light_override(void);
	/* Visible Layers: Scene layers included in this render layer */
	Array<int, 20> layers(void);
	/* Zmask Layers: Zmask scene layers */
	Array<int, 20> layers_zmask(void);
	/* Enabled: Disable or enable the render layer */
	bool use(void);
	/* Zmask: Only render what's in front of the solid z values */
	bool use_zmask(void);
	/* Zmask Negate: For Zmask, only render what is behind solid z values instead of in front */
	bool invert_zmask(void);
	/* All Z: Fill in Z values for solid faces in invisible layers, for masking */
	bool use_all_z(void);
	/* Solid: Render Solid faces in this Layer */
	bool use_solid(void);
	/* Halo: Render Halos in this Layer (on top of Solid) */
	bool use_halo(void);
	/* ZTransp: Render Z-Transparent faces in this Layer (On top of Solid and Halos) */
	bool use_ztransp(void);
	/* Sky: Render Sky in this Layer */
	bool use_sky(void);
	/* Edge: Render Edge-enhance in this Layer (only works for Solid faces) */
	bool use_edge_enhance(void);
	/* Strand: Render Strands in this Layer */
	bool use_strand(void);
	/* Combined: Deliver full combined RGBA buffer */
	bool use_pass_combined(void);
	/* Z: Deliver Z values pass */
	bool use_pass_z(void);
	/* Vector: Deliver speed vector pass */
	bool use_pass_vector(void);
	/* Normal: Deliver normal pass */
	bool use_pass_normal(void);
	/* UV: Deliver texture UV pass */
	bool use_pass_uv(void);
	/* Mist: Deliver mist factor pass (0.0-1.0) */
	bool use_pass_mist(void);
	/* Object Index: Deliver object index pass */
	bool use_pass_object_index(void);
	/* Color: Deliver shade-less color pass */
	bool use_pass_color(void);
	/* Diffuse: Deliver diffuse pass */
	bool use_pass_diffuse(void);
	/* Specular: Deliver specular pass */
	bool use_pass_specular(void);
	/* Shadow: Deliver shadow pass */
	bool use_pass_shadow(void);
	/* AO: Deliver AO pass */
	bool use_pass_ambient_occlusion(void);
	/* Reflection: Deliver raytraced reflection pass */
	bool use_pass_reflection(void);
	/* Refraction: Deliver raytraced refraction pass */
	bool use_pass_refraction(void);
	/* Emit: Deliver emission pass */
	bool use_pass_emit(void);
	/* Environment: Deliver environment lighting pass */
	bool use_pass_environment(void);
	/* Indirect: Deliver indirect lighting pass */
	bool use_pass_indirect(void);
	/* Specular Exclude: Exclude specular pass from combined */
	bool exclude_specular(void);
	/* Shadow Exclude: Exclude shadow pass from combined */
	bool exclude_shadow(void);
	/* AO Exclude: Exclude AO pass from combined */
	bool exclude_ambient_occlusion(void);
	/* Reflection Exclude: Exclude raytraced reflection pass from combined */
	bool exclude_reflection(void);
	/* Refraction Exclude: Exclude raytraced refraction pass from combined */
	bool exclude_refraction(void);
	/* Emit Exclude: Exclude emission pass from combined */
	bool exclude_emit(void);
	/* Environment Exclude: Exclude environment pass from combined */
	bool exclude_environment(void);
	/* Indirect Exclude: Exclude indirect pass from combined */
	bool exclude_indirect(void);
	/* passes */
	COLLECTION_PROPERTY(RenderPass, RenderLayer, passes)
	/* rect */
	Array<float, 0> rect(void);
};

/**************** Render Pass ****************/

class RenderPass : public Pointer {
public:
	RenderPass(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* name */
	std::string name(void);
	/* channel_id */
	std::string channel_id(void);
	/* channels */
	int channels(void);
	/* type */
	enum type_enum {
		type_COMBINED = 1,
		type_Z = 2,
		type_COLOR = 4,
		type_DIFFUSE = 8,
		type_SPECULAR = 16,
		type_SHADOW = 32,
		type_AO = 64,
		type_REFLECTION = 128,
		type_NORMAL = 256,
		type_VECTOR = 512,
		type_REFRACTION = 1024,
		type_OBJECT_INDEX = 2048,
		type_UV = 4096,
		type_MIST = 16384,
		type_EMIT = 65536,
		type_ENVIRONMENT = 131072,
	};
	type_enum type(void);
	/* rect */
	Array<float, 0> rect(void);
};

/**************** Scene ****************/

class Scene : public ID {
public:
	Scene(const PointerRNA& ptr) :
		ID(ptr),
		object_bases(ptr),
		objects(ptr),
		keying_sets(ptr),
		keying_sets_all(ptr),
		timeline_markers(ptr),
		orientations(ptr)
		{}

	/* Camera: Active camera used for rendering the scene */
	Object camera(void);
	/* Background Scene: Background set scene */
	Scene background_set(void);
	/* World: World used for rendering the scene */
	World world(void);
	/* Cursor Location: 3D cursor location */
	Array<float, 3> cursor_location(void);
	/* Bases */
	COLLECTION_PROPERTY(ObjectBase, Scene, object_bases)
	/* Objects */
	COLLECTION_PROPERTY(Object, Scene, objects)
	/* Layers: Layers visible when rendering the scene */
	Array<int, 20> layers(void);
	/* Current Frame */
	int frame_current(void);
	/* Start Frame: First frame of the playback/rendering range */
	int frame_start(void);
	/* End Frame: Final frame of the playback/rendering range */
	int frame_end(void);
	/* Frame Step: Number of frames to skip forward while rendering/playing back each frame */
	int frame_step(void);
	/* Use Preview Range: Use an alternative start/end frame for UI playback, rather than the scene start/end frame */
	bool use_preview_range(void);
	/* Preview Range Start Frame: Alternative start frame for UI playback */
	int frame_preview_start(void);
	/* Preview Range End Frame: Alternative end frame for UI playback */
	int frame_preview_end(void);
	/* Stamp Note: User define note for the render stamping */
	std::string use_stamp_note(void);
	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* NLA TweakMode: Indicates whether there is any action referenced by NLA being edited. Strictly read-only */
	bool is_nla_tweakmode(void);
	/* Frame Dropping: Play back dropping frames if frame display is too slow */
	bool use_frame_drop(void);
	/* Sync Mode: How to sync playback */
	enum sync_mode_enum {
		sync_mode_NONE = 0,
		sync_mode_FRAME_DROP = 8,
		sync_mode_AUDIO_SYNC = 2,
	};
	sync_mode_enum sync_mode(void);
	/* Node Tree: Compositing node tree */
	NodeTree node_tree(void);
	/* Use Nodes: Enable the compositing node tree */
	bool use_nodes(void);
	/* Sequence Editor */
	SequenceEditor sequence_editor(void);
	/* Absolute Keying Sets: Absolute Keying Sets for this Scene */
	COLLECTION_PROPERTY(KeyingSet, Scene, keying_sets)
	/* All Keying Sets: All Keying Sets available for use (Builtins and Absolute Keying Sets for this Scene) */
	COLLECTION_PROPERTY(KeyingSet, Scene, keying_sets_all)
	/* Tool Settings */
	ToolSettings tool_settings(void);
	/* Unit Settings: Unit editing settings */
	UnitSettings unit_settings(void);
	/* Gravity: Constant acceleration in a given direction */
	Array<float, 3> gravity(void);
	/* Global Gravity: Use global gravity for all dynamics */
	bool use_gravity(void);
	/* Render Data */
	RenderSettings render(void);
	/* Timeline Markers: Markers used in all timelines for the current scene */
	COLLECTION_PROPERTY(TimelineMarker, Scene, timeline_markers)
	/* Audio Muted: Play back of audio from Sequence Editor will be muted */
	bool use_audio(void);
	/* Audio Sync: Play back and sync with audio clock, dropping frames if frame display is too slow */
	bool use_audio_sync(void);
	/* Audio Scrubbing: Play audio from Sequence Editor while scrubbing */
	bool use_audio_scrub(void);
	/* Speed of Sound: Speed of sound for Doppler effect calculation */
	float audio_doppler_speed(void);
	/* Doppler Factor: Pitch factor for Doppler effect calculation */
	float audio_doppler_factor(void);
	/* Distance Model: Distance model for distance attenuation calculation */
	enum audio_distance_model_enum {
		audio_distance_model_NONE = 0,
		audio_distance_model_INVERSE = 1,
		audio_distance_model_INVERSE_CLAMPED = 2,
		audio_distance_model_LINEAR = 3,
		audio_distance_model_LINEAR_CLAMPED = 4,
		audio_distance_model_EXPONENT = 5,
		audio_distance_model_EXPONENT_CLAMPED = 6,
	};
	audio_distance_model_enum audio_distance_model(void);
	/* Game Data */
	SceneGameData game_settings(void);
	/* Grease Pencil Data: Grease Pencil datablock */
	GreasePencil grease_pencil(void);
	/* Transform Orientations */
	COLLECTION_PROPERTY(TransformOrientation, Scene, orientations)
};

/**************** Scene Bases ****************/

class SceneBases : public Pointer {
public:
	SceneBases(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Base: Active object base in the scene */
	ObjectBase active(void);
};

/**************** Scene Objects ****************/

class SceneObjects : public Pointer {
public:
	SceneObjects(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Object: Active object for this scene */
	Object active(void);
};

/**************** Keying Sets ****************/

class KeyingSets : public Pointer {
public:
	KeyingSets(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Keying Set: Active Keying Set used to insert/delete keyframes */
	KeyingSet active(void);
	/* Active Keying Set Index: Current Keying Set index (negative for 'builtin' and positive for 'absolute') */
	int active_index(void);
};

/**************** Keying Sets All ****************/

class KeyingSetsAll : public Pointer {
public:
	KeyingSetsAll(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Keying Set: Active Keying Set used to insert/delete keyframes */
	KeyingSet active(void);
	/* Active Keying Set Index: Current Keying Set index (negative for 'builtin' and positive for 'absolute') */
	int active_index(void);
};

/**************** Timeline Markers ****************/

class TimelineMarkers : public Pointer {
public:
	TimelineMarkers(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Tool Settings ****************/

class ToolSettings : public Pointer {
public:
	ToolSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Sculpt */
	Sculpt sculpt(void);
	/* WPaint Auto-Normalize: Ensure all bone-deforming vertex groups add up to 1.0 while weight painting */
	bool use_auto_normalize(void);
	/* Vertex Paint */
	VertexPaint vertex_paint(void);
	/* Weight Paint */
	VertexPaint weight_paint(void);
	/* Image Paint */
	ImagePaint image_paint(void);
	/* Particle Edit */
	ParticleEdit particle_edit(void);
	/* Proportional Editing: Proportional editing mode */
	enum proportional_edit_enum {
		proportional_edit_DISABLED = 0,
		proportional_edit_ENABLED = 1,
		proportional_edit_CONNECTED = 2,
	};
	proportional_edit_enum proportional_edit(void);
	/* Proportional Editing Objects: Proportional editing object mode */
	bool use_proportional_edit_objects(void);
	/* Proportional Editing Falloff: Falloff type for proportional editing mode */
	enum proportional_edit_falloff_enum {
		proportional_edit_falloff_SMOOTH = 0,
		proportional_edit_falloff_SPHERE = 1,
		proportional_edit_falloff_ROOT = 2,
		proportional_edit_falloff_SHARP = 3,
		proportional_edit_falloff_LINEAR = 4,
		proportional_edit_falloff_CONSTANT = 5,
		proportional_edit_falloff_RANDOM = 6,
	};
	proportional_edit_falloff_enum proportional_edit_falloff(void);
	/* Proportional Size: Display size for proportional editing circle */
	float proportional_size(void);
	/* Normal Size: Display size for normals in the 3D view */
	float normal_size(void);
	/* AutoMerge Editing: Automatically merge vertices moved to the same location */
	bool use_mesh_automerge(void);
	/* Snap: Snap during transform */
	bool use_snap(void);
	/* Snap Align Rotation: Align rotation with the snapping target */
	bool use_snap_align_rotation(void);
	/* Snap Element: Type of element to snap to */
	enum snap_element_enum {
		snap_element_INCREMENT = 0,
		snap_element_VERTEX = 1,
		snap_element_EDGE = 2,
		snap_element_FACE = 3,
		snap_element_VOLUME = 4,
	};
	snap_element_enum snap_element(void);
	/* Snap Target: Which part to snap onto the target */
	enum snap_target_enum {
		snap_target_CLOSEST = 0,
		snap_target_CENTER = 1,
		snap_target_MEDIAN = 2,
		snap_target_ACTIVE = 3,
	};
	snap_target_enum snap_target(void);
	/* Snap Peel Object: Consider objects as whole when finding volume center */
	bool use_snap_peel_object(void);
	/* Project Individual Elements: Project individual elements on the surface of other objects */
	bool use_snap_project(void);
	/* Use Sketching Sessions: Allow drawing multiple strokes at a time with Grease Pencil */
	bool use_grease_pencil_sessions(void);
	/* Auto Keying: Automatic keyframe insertion for Objects and Bones */
	bool use_keyframe_insert_auto(void);
	/* Auto-Keying Mode: Mode of automatic keyframe insertion for Objects and Bones */
	enum auto_keying_mode_enum {
		auto_keying_mode_ADD_REPLACE_KEYS = 3,
		auto_keying_mode_REPLACE_KEYS = 5,
	};
	auto_keying_mode_enum auto_keying_mode(void);
	/* Layered: Add a new NLA Track + Strip for every loop/pass made over the animation to allow non-destructive tweaking */
	bool use_record_with_nla(void);
	/* Auto Keyframe Insert Keying Set: Automatic keyframe insertion using active Keying Set only */
	bool use_keyframe_insert_keyingset(void);
	/* UV Selection Mode: UV selection and display mode */
	enum uv_select_mode_enum {
		uv_select_mode_VERTEX = 1,
		uv_select_mode_EDGE = 2,
		uv_select_mode_FACE = 4,
		uv_select_mode_ISLAND = 8,
	};
	uv_select_mode_enum uv_select_mode(void);
	/* UV Sync Selection: Keep UV and edit mode mesh selection in sync */
	bool use_uv_select_sync(void);
	/* UV Local View: Draw only faces with the currently displayed image assigned */
	bool show_uv_local_view(void);
	/* Mesh Selection Mode: Which mesh elements selection works on */
	Array<int, 3> mesh_select_mode(void);
	/* Vertex Group Weight: Weight to assign in vertex groups */
	float vertex_group_weight(void);
	/* Edge Tag Mode: The edge flag to tag when selecting the shortest path */
	enum edge_path_mode_enum {
		edge_path_mode_SELECT = 0,
		edge_path_mode_SEAM = 1,
		edge_path_mode_SHARP = 2,
		edge_path_mode_CREASE = 3,
		edge_path_mode_BEVEL = 4,
	};
	edge_path_mode_enum edge_path_mode(void);
	/* Use Bone Sketching: DOC BROKEN */
	bool use_bone_sketching(void);
	/* Quick Sketching: DOC BROKEN */
	bool use_etch_quick(void);
	/* Overdraw Sketching: DOC BROKEN */
	bool use_etch_overdraw(void);
	/* Autoname: DOC BROKEN */
	bool use_etch_autoname(void);
	/* Number: DOC BROKEN */
	std::string etch_number(void);
	/* Side: DOC BROKEN */
	std::string etch_side(void);
	/* Template: Template armature that will be retargeted to the stroke */
	Object etch_template(void);
	/* Subdivisions: Number of bones in the subdivided stroke */
	int etch_subdivision_number(void);
	/* Limit: Number of bones in the subdivided stroke */
	float etch_adaptive_limit(void);
	/* Length: Number of bones in the subdivided stroke */
	float etch_length_limit(void);
	/* Retarget roll mode: Method used to adjust the roll of bones when retargeting */
	enum etch_roll_mode_enum {
		etch_roll_mode_NONE = 0,
		etch_roll_mode_VIEW = 1,
		etch_roll_mode_JOINT = 2,
	};
	etch_roll_mode_enum etch_roll_mode(void);
	/* Stroke conversion method: Method used to convert stroke to bones */
	enum etch_convert_mode_enum {
		etch_convert_mode_FIXED = 0,
		etch_convert_mode_LENGTH = 1,
		etch_convert_mode_ADAPTIVE = 2,
		etch_convert_mode_RETARGET = 3,
	};
	etch_convert_mode_enum etch_convert_mode(void);
	/* Sculpt/Paint Use Unified Radius: Instead of per brush radius, the radius is shared across brushes */
	bool sculpt_paint_use_unified_size(void);
	/* Sculpt/Paint Use Unified Strength: Instead of per brush strength, the strength is shared across brushes */
	bool sculpt_paint_use_unified_strength(void);
};

/**************** Unit Settings ****************/

class UnitSettings : public Pointer {
public:
	UnitSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Unit System: The unit system to use for button display */
	enum system_enum {
		system_NONE = 0,
		system_METRIC = 1,
		system_IMPERIAL = 2,
	};
	system_enum system(void);
	/* Rotation Units: Unit to use for displaying/editing rotation values */
	enum system_rotation_enum {
		system_rotation_DEGREES = 0,
		system_rotation_RADIANS = 2,
	};
	system_rotation_enum system_rotation(void);
	/* Unit Scale: Scale to use when converting between blender units and dimensions */
	float scale_length(void);
	/* Separate Units: Display units in pairs */
	bool use_separate(void);
};

/**************** Render Data ****************/

class RenderSettings : public Pointer {
public:
	RenderSettings(const PointerRNA& ptr) :
		Pointer(ptr),
		layers(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Color Mode: Choose BW for saving greyscale images, RGB for saving red, green and blue channels, AND RGBA for saving red, green, blue + alpha channels */
	enum color_mode_enum {
		color_mode_BW = 8,
		color_mode_RGB = 24,
		color_mode_RGBA = 32,
	};
	color_mode_enum color_mode(void);
	/* Resolution X: Number of horizontal pixels in the rendered image */
	int resolution_x(void);
	/* Resolution Y: Number of vertical pixels in the rendered image */
	int resolution_y(void);
	/* Resolution %: Percentage scale for render resolution */
	int resolution_percentage(void);
	/* Parts X: Number of horizontal tiles to use while rendering */
	int parts_x(void);
	/* Parts Y: Number of vertical tiles to use while rendering */
	int parts_y(void);
	/* Pixel Aspect X: Horizontal aspect ratio - for anamorphic or non-square pixel output */
	float pixel_aspect_x(void);
	/* Pixel Aspect Y: Vertical aspect ratio - for anamorphic or non-square pixel output */
	float pixel_aspect_y(void);
	/* Quality: Quality of JPEG images, AVI Jpeg and SGI movies, Compression for PNG's */
	int file_quality(void);
	/* 16 Bit: Save TIFF with 16 bits per channel */
	bool use_tiff_16bit(void);
	/* Log: Convert to logarithmic color space */
	bool use_cineon_log(void);
	/* B: Log conversion reference blackpoint */
	int cineon_black(void);
	/* W: Log conversion reference whitepoint */
	int cineon_white(void);
	/* G: Log conversion gamma */
	float cineon_gamma(void);
	/* Preset: Use a DCI Standard preset for saving jpeg2000 */
	enum jpeg2k_preset_enum {
		jpeg2k_preset_NO_PRESET = 0,
		jpeg2k_preset_CINE_24FPS = 1,
		jpeg2k_preset_CINE_48FPS = 2,
		jpeg2k_preset_CINE_24FPS_4K = 3,
		jpeg2k_preset_CINE_SCOPE_48FPS = 4,
		jpeg2k_preset_CINE_SCOPE_48FPS = 5,
		jpeg2k_preset_CINE_FLAT_24FPS = 6,
		jpeg2k_preset_CINE_FLAT_48FPS = 7,
	};
	jpeg2k_preset_enum jpeg2k_preset(void);
	/* Depth: Bit depth per channel */
	enum jpeg2k_depth_enum {
		jpeg2k_depth_8 = 8,
		jpeg2k_depth_12 = 12,
		jpeg2k_depth_16 = 16,
	};
	jpeg2k_depth_enum jpeg2k_depth(void);
	/* YCC: Save luminance-chrominance-chrominance channels instead of RGB colors */
	bool jpeg2k_ycc(void);
	/* FPS: Framerate, expressed in frames per second */
	int fps(void);
	/* FPS Base: Framerate base */
	float fps_base(void);
	/* Frame Map Old: Specify old mapping value in frames */
	int frame_map_old(void);
	/* Frame Map New: Specify how many frames the Map Old will last */
	int frame_map_new(void);
	/* Dither Intensity: Amount of dithering noise added to the rendered image to break up banding */
	float dither_intensity(void);
	/* Pixel Filter: Reconstruction filter used for combining anti-aliasing samples */
	enum pixel_filter_type_enum {
		pixel_filter_type_BOX = 0,
		pixel_filter_type_TENT = 1,
		pixel_filter_type_QUADRATIC = 2,
		pixel_filter_type_CUBIC = 3,
		pixel_filter_type_CATMULLROM = 4,
		pixel_filter_type_GAUSSIAN = 5,
		pixel_filter_type_MITCHELL = 6,
	};
	pixel_filter_type_enum pixel_filter_type(void);
	/* Filter Size: Pixel width over which the reconstruction filter combines samples */
	float filter_size(void);
	/* Alpha Mode: Representation of alpha information in the RGBA pixels */
	enum alpha_mode_enum {
		alpha_mode_SKY = 0,
		alpha_mode_PREMUL = 1,
		alpha_mode_STRAIGHT = 2,
	};
	alpha_mode_enum alpha_mode(void);
	/* Octree Resolution: Resolution of raytrace accelerator. Use higher resolutions for larger scenes */
	enum octree_resolution_enum {
		octree_resolution_64 = 64,
		octree_resolution_128 = 128,
		octree_resolution_256 = 256,
		octree_resolution_512 = 512,
	};
	octree_resolution_enum octree_resolution(void);
	/* Raytrace Acceleration Structure: Type of raytrace accelerator structure */
	enum raytrace_method_enum {
		raytrace_method_AUTO = 0,
		raytrace_method_OCTREE = 1,
		raytrace_method_BLIBVH = 2,
		raytrace_method_VBVH = 3,
		raytrace_method_SIMD_SVBVH = 4,
		raytrace_method_SIMD_QBVH = 5,
	};
	raytrace_method_enum raytrace_method(void);
	/* Use Instances: Instance support leads to effective memory reduction when using duplicates */
	bool use_instances(void);
	/* Use Local Coords: Vertex coordinates are stored localy on each primitive. Increases memory usage, but may have impact on speed */
	bool use_local_coords(void);
	/* Anti-Aliasing: Render and combine multiple samples per pixel to prevent jagged edges */
	bool use_antialiasing(void);
	/* Anti-Aliasing Samples: Amount of anti-aliasing samples per pixel */
	enum antialiasing_samples_enum {
		antialiasing_samples_5 = 5,
		antialiasing_samples_8 = 8,
		antialiasing_samples_11 = 11,
		antialiasing_samples_16 = 16,
	};
	antialiasing_samples_enum antialiasing_samples(void);
	/* Fields: Render image to two fields per frame, for interlaced TV output */
	bool use_fields(void);
	/* Field Order: Order of video fields. Select which lines get rendered first, to create smooth motion for TV output */
	enum field_order_enum {
		field_order_EVEN_FIRST = 0,
		field_order_ODD_FIRST = 8192,
	};
	field_order_enum field_order(void);
	/* Fields Still: Disable the time difference between fields */
	bool use_fields_still(void);
	/* Shadows: Calculate shadows while rendering */
	bool use_shadows(void);
	/* Environment Maps: Calculate environment maps while rendering */
	bool use_envmaps(void);
	/* Radiosity: Calculate radiosity in a pre-process before rendering */
	bool use_radiosity(void);
	/* Subsurface Scattering: Calculate sub-surface scattering in materials rendering */
	bool use_sss(void);
	/* Raytracing: Pre-calculate the raytrace accelerator and render raytracing effects */
	bool use_raytrace(void);
	/* Textures: Use textures to affect material properties */
	bool use_textures(void);
	/* Edge: Create a toon outline around the edges of geometry */
	bool use_edge_enhance(void);
	/* Edge Threshold: Threshold for drawing outlines on geometry edges */
	int edge_threshold(void);
	/* Edge Color */
	Array<float, 3> edge_color(void);
	/* Threads: Number of CPU threads to use simultaneously while rendering (for multi-core/CPU systems) */
	int threads(void);
	/* Threads Mode: Determine the amount of render threads used */
	enum threads_mode_enum {
		threads_mode_AUTO = 0,
		threads_mode_FIXED = 524288,
	};
	threads_mode_enum threads_mode(void);
	/* Motion Blur: Use multi-sampled 3D scene motion blur */
	bool use_motion_blur(void);
	/* Motion Samples: Number of scene samples to take with motion blur */
	int motion_blur_samples(void);
	/* Shutter: Time taken in frames between shutter open and close */
	float motion_blur_shutter(void);
	/* Border: Render a user-defined border region, within the frame size. Note, this disables save_buffers and full_sample */
	bool use_border(void);
	/* Border Minimum X: Sets minimum X value to for the render border */
	float border_min_x(void);
	/* Border Minimum Y: Sets minimum Y value for the render border */
	float border_min_y(void);
	/* Border Maximum X: Sets maximum X value for the render border */
	float border_max_x(void);
	/* Border Maximum Y: Sets maximum Y value for the render border */
	float border_max_y(void);
	/* Crop to Border: Crop the rendered frame to the defined border size */
	bool use_crop_to_border(void);
	/* Placeholders: Create empty placeholder files while rendering frames (similar to Unix 'touch') */
	bool use_placeholder(void);
	/* Overwrite: Overwrite existing files while rendering */
	bool use_overwrite(void);
	/* Compositing: Process the render result through the compositing pipeline, if compositing nodes are enabled */
	bool use_compositing(void);
	/* Sequencer: Process the render (and composited) result through the video sequence editor pipeline, if sequencer strips exist */
	bool use_sequencer(void);
	/* Color Management: Use linear workflow - gamma corrected imaging pipeline */
	bool use_color_management(void);
	/* File Extensions: Add the file format extensions to the rendered file name (eg: filename + .jpg) */
	bool use_file_extension(void);
	/* File Format: File format to save the rendered images as */
	enum file_format_enum {
		file_format_BMP = 20,
		file_format_IRIS = 1,
		file_format_PNG = 17,
		file_format_JPEG = 4,
		file_format_JPEG2000 = 30,
		file_format_TARGA = 0,
		file_format_TARGA_RAW = 14,
		file_format_CINEON = 26,
		file_format_DPX = 27,
		file_format_HDR = 21,
		file_format_AVI_JPEG = 16,
		file_format_AVI_RAW = 15,
		file_format_FRAMESERVER = 25,
	};
	file_format_enum file_format(void);
	/* Extension: The file extension used for saving renders */
	std::string file_extension(void);
	/* Movie Format: When true the format is a movie */
	bool is_movie_format(void);
	/* Free Image Textures: Free all image texture from memory after render, to save memory before compositing */
	bool use_free_image_textures(void);
	/* Free Unused Nodes: Free Nodes that are not used while compositing, to save memory */
	bool use_free_unused_nodes(void);
	/* Save Buffers: Save tiles for all RenderLayers and SceneNodes to files in the temp directory (saves memory, required for Full Sample) */
	bool use_save_buffers(void);
	/* Full Sample: Save for every anti-aliasing sample the entire RenderLayer results. This solves anti-aliasing issues with compositing */
	bool use_full_sample(void);
	/* Display: Select where rendered images will be displayed */
	enum display_mode_enum {
		display_mode_SCREEN = 0,
		display_mode_AREA = 1,
		display_mode_WINDOW = 2,
		display_mode_NONE = 3,
	};
	display_mode_enum display_mode(void);
	/* Output Path: Directory/name to save animations, # characters defines the position and length of frame numbers */
	std::string filepath(void);
	/* Bake Mode: Choose shading information to bake into the image */
	enum bake_type_enum {
		bake_type_FULL = 1,
		bake_type_AO = 2,
		bake_type_SHADOW = 6,
		bake_type_NORMALS = 3,
		bake_type_TEXTURE = 4,
		bake_type_DISPLACEMENT = 5,
	};
	bake_type_enum bake_type(void);
	/* Normal Space: Choose normal space for baking */
	enum bake_normal_space_enum {
		bake_normal_space_CAMERA = 0,
		bake_normal_space_WORLD = 1,
		bake_normal_space_OBJECT = 2,
		bake_normal_space_TANGENT = 3,
	};
	bake_normal_space_enum bake_normal_space(void);
	/* Quad Split: Choose the method used to split a quad into 2 triangles for baking */
	enum bake_quad_split_enum {
		bake_quad_split_AUTO = 0,
		bake_quad_split_FIXED = 1,
		bake_quad_split_FIXED_ALT = 2,
	};
	bake_quad_split_enum bake_quad_split(void);
	/* Anti-Aliasing Level */
	enum bake_aa_mode_enum {
		bake_aa_mode_5 = 5,
		bake_aa_mode_8 = 8,
		bake_aa_mode_11 = 11,
		bake_aa_mode_16 = 16,
	};
	bake_aa_mode_enum bake_aa_mode(void);
	/* Selected to Active: Bake shading on the surface of selected objects to the active object */
	bool use_bake_selected_to_active(void);
	/* Normalized: With displacement normalize to the distance, with ambient occlusion normalize without using material settings */
	bool use_bake_normalize(void);
	/* Clear: Clear Images before baking */
	bool use_bake_clear(void);
	/* Anti-Aliasing: Enables Anti-aliasing */
	bool use_bake_antialiasing(void);
	/* Margin: Amount of pixels to extend the baked result with, as post process filter */
	int bake_margin(void);
	/* Distance: Maximum distance from active object to other object (in blender units */
	float bake_distance(void);
	/* Bias: Bias towards faces further away from the object (in blender units) */
	float bake_bias(void);
	/* Stamp Time: Include the render frame as HH:MM:SS.FF in image metadata */
	bool use_stamp_time(void);
	/* Stamp Date: Include the current date in image metadata */
	bool use_stamp_date(void);
	/* Stamp Frame: Include the frame number in image metadata */
	bool use_stamp_frame(void);
	/* Stamp Camera: Include the name of the active camera in image metadata */
	bool use_stamp_camera(void);
	/* Stamp Lens: Include the name of the active cameras lens in image metadata */
	bool use_stamp_lens(void);
	/* Stamp Scene: Include the name of the active scene in image metadata */
	bool use_stamp_scene(void);
	/* Stamp Note: Include a custom note in image metadata */
	bool use_stamp_note(void);
	/* Stamp Marker: Include the name of the last marker in image metadata */
	bool use_stamp_marker(void);
	/* Stamp Filename: Include the filename of the .blend file in image metadata */
	bool use_stamp_filename(void);
	/* Stamp Sequence Strip: Include the name of the foreground sequence strip in image metadata */
	bool use_stamp_sequencer_strip(void);
	/* Stamp Render Time: Include the render time in the stamp image */
	bool use_stamp_render_time(void);
	/* Stamp Note Text: Custom text to appear in the stamp note */
	std::string stamp_note_text(void);
	/* Render Stamp: Render the stamp info text in the rendered image */
	bool use_stamp(void);
	/* Font Size: Size of the font used when rendering stamp text */
	int stamp_font_size(void);
	/* Stamp Text Color: Color to use for stamp text */
	Array<float, 4> stamp_foreground(void);
	/* Stamp Background: Color to use behind stamp text */
	Array<float, 4> stamp_background(void);
	/* Sequencer OpenGL */
	bool use_sequencer_gl_preview(void);
	/* Sequencer OpenGL */
	bool use_sequencer_gl_render(void);
	/* Sequencer Preview Shading: Method to draw in the sequencer view */
	enum sequencer_gl_preview_enum {
		sequencer_gl_preview_BOUNDBOX = 1,
		sequencer_gl_preview_WIREFRAME = 2,
		sequencer_gl_preview_SOLID = 3,
		sequencer_gl_preview_TEXTURED = 5,
	};
	sequencer_gl_preview_enum sequencer_gl_preview(void);
	/* Sequencer Preview Shading: Method to draw in the sequencer view */
	enum sequencer_gl_render_enum {
		sequencer_gl_render_BOUNDBOX = 1,
		sequencer_gl_render_WIREFRAME = 2,
		sequencer_gl_render_SOLID = 3,
		sequencer_gl_render_TEXTURED = 5,
	};
	sequencer_gl_render_enum sequencer_gl_render(void);
	/* Render Layers */
	COLLECTION_PROPERTY(SceneRenderLayer, RenderSettings, layers)
	/* Single Layer: Only render the active layer */
	bool use_single_layer(void);
	/* Engine: Engine to use for rendering */
	enum engine_enum {
		engine_BLENDER_RENDER = 0,
	};
	engine_enum engine(void);
	/* Multiple Engines: More than one rendering engine is available */
	bool has_multiple_engines(void);
	/* Use Game Engine: Current rendering engine is a game engine */
	bool use_game_engine(void);
	/* Use Simplify: Enable simplification of scene for quicker preview renders */
	bool use_simplify(void);
	/* Simplify Subdivision: Global maximum subdivision level */
	int simplify_subdivision(void);
	/* Simplify Child Particles: Global child particles percentage */
	float simplify_child_particles(void);
	/* Simplify Shadow Samples: Global maximum shadow samples */
	int simplify_shadow_samples(void);
	/* Simplify AO and SSS: Global approximate AA and SSS quality factor */
	float simplify_ao_sss(void);
	/* Skip Quad to Triangles: Disables non-planer quads being triangulated */
	bool use_simplify_triangulate(void);
};

/**************** Render Layers ****************/

class RenderLayers : public Pointer {
public:
	RenderLayers(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Layer Index: Active index in render layer array */
	int active_index(void);
	/* Active Render Layer: Active Render Layer */
	SceneRenderLayer active(void);
};

/**************** Game Data ****************/

class SceneGameData : public Pointer {
public:
	SceneGameData(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Resolution X: Number of horizontal pixels in the screen */
	int resolution_x(void);
	/* Resolution Y: Number of vertical pixels in the screen */
	int resolution_y(void);
	/* Bits: Displays bit depth of full screen display */
	int depth(void);
	/* Freq: Displays clock frequency of fullscreen display */
	int frequency(void);
	/* Fullscreen: Starts player in a new fullscreen display */
	bool show_fullscreen(void);
	/* Framing Types: Select the type of Framing you want */
	enum frame_type_enum {
		frame_type_LETTERBOX = 0,
		frame_type_EXTEND = 1,
		frame_type_SCALE = 2,
	};
	frame_type_enum frame_type(void);
	/* Framing Color: Set color of the bars */
	Array<float, 3> frame_color(void);
	/* Stereo Options */
	enum stereo_enum {
		stereo_NONE = 1,
		stereo_STEREO = 2,
		stereo_DOME = 3,
	};
	stereo_enum stereo(void);
	/* Stereo Mode: Stereographic techniques */
	enum stereo_mode_enum {
		stereo_mode_QUADBUFFERED = 2,
		stereo_mode_ABOVEBELOW = 3,
		stereo_mode_INTERLACED = 4,
		stereo_mode_ANAGLYPH = 5,
		stereo_mode_SIDEBYSIDE = 6,
		stereo_mode_VINTERLACE = 7,
	};
	stereo_mode_enum stereo_mode(void);
	/* Eye Separation: Set the distance between the eyes - the camera focal length/30 should be fine */
	float stereo_eye_separation(void);
	/* Dome Mode: Dome physical configurations */
	enum dome_mode_enum {
		dome_mode_FISHEYE = 1,
		dome_mode_TRUNCATED_FRONT = 2,
		dome_mode_TRUNCATED_REAR = 3,
		dome_mode_ENVMAP = 4,
		dome_mode_PANORAM_SPH = 5,
	};
	dome_mode_enum dome_mode(void);
	/* Tessellation: Tessellation level - check the generated mesh in wireframe mode */
	int dome_tesselation(void);
	/* Buffer Resolution: Buffer Resolution - decrease it to increase speed */
	float dome_buffer_resolution(void);
	/* Angle: Field of View of the Dome - it only works in mode Fisheye and Truncated */
	int dome_angle(void);
	/* Tilt: Camera rotation in horizontal axis */
	int dome_tilt(void);
	/* Warp Data: Custom Warp Mesh data file */
	Text dome_text(void);
	/* Physics Engine: Physics engine used for physics simulation in the game engine */
	enum physics_engine_enum {
		physics_engine_NONE = 0,
		physics_engine_BULLET = 5,
	};
	physics_engine_enum physics_engine(void);
	/* Physics Gravity: Gravitational constant used for physics simulation in the game engine */
	float physics_gravity(void);
	/* Occlusion Resolution: The size of the occlusion buffer in pixel, use higher value for better precision (slower) */
	int occlusion_culling_resolution(void);
	/* Frames Per Second: The nominal number of game frames per second. Physics fixed timestep = 1/fps, independently of actual frame rate */
	int fps(void);
	/* Max Logic Steps: Sets the maximum number of logic frame per game frame if graphics slows down the game, higher value allows better synchronization with physics */
	int logic_step_max(void);
	/* Max Physics Steps: Sets the maximum number of physics step per game frame if graphics slows down the game, higher value allows physics to keep up with realtime */
	int physics_step_max(void);
	/* Physics Sub Steps: Sets the number of simulation substep per physic timestep, higher value give better physics precision */
	int physics_step_sub(void);
	/* DBVT culling: Use optimized Bullet DBVT tree for view frustum and occlusion culling */
	bool use_occlusion_culling(void);
	/* Activity Culling: Activity culling is enabled */
	bool use_activity_culling(void);
	/* box radius: Radius of the activity bubble, in Manhattan length. Objects outside the box are activity-culled */
	float activity_culling_box_radius(void);
	/* Show Debug Properties: Show properties marked for debugging while the game runs */
	bool show_debug_properties(void);
	/* Show Framerate and Profile: Show framerate and profiling information while the game runs */
	bool show_framerate_profile(void);
	/* Show Physics Visualization: Show a visualization of physics bounds and interactions */
	bool show_physics_visualization(void);
	/* Show Mouse: Start player with a visible mouse cursor */
	bool show_mouse(void);
	/* Use Frame Rate: Respect the frame rate rather than rendering as many frames as possible */
	bool use_frame_rate(void);
	/* Display Lists: Use display lists to speed up rendering by keeping geometry on the GPU */
	bool use_display_lists(void);
	/* Deprecation Warnings: Print warnings when using deprecated features in the python API */
	bool use_deprecation_warnings(void);
	/* Record Animation: Record animation to fcurves */
	bool use_animation_record(void);
	/* Auto Start: Automatically start game at load time */
	bool use_auto_start(void);
	/* Material Mode: Material mode to use for rendering */
	enum material_mode_enum {
		material_mode_TEXTURE_FACE = 0,
		material_mode_MULTITEXTURE = 1,
		material_mode_GLSL = 2,
	};
	material_mode_enum material_mode(void);
	/* GLSL Lights: Use lights for GLSL rendering */
	bool use_glsl_lights(void);
	/* GLSL Shaders: Use shaders for GLSL rendering */
	bool use_glsl_shaders(void);
	/* GLSL Shadows: Use shadows for GLSL rendering */
	bool use_glsl_shadows(void);
	/* GLSL Ramps: Use ramps for GLSL rendering */
	bool use_glsl_ramps(void);
	/* GLSL Nodes: Use nodes for GLSL rendering */
	bool use_glsl_nodes(void);
	/* GLSL Extra Textures: Use extra textures like normal or specular maps for GLSL rendering */
	bool use_glsl_extra_textures(void);
};

/**************** Scene Render Layer ****************/

class SceneRenderLayer : public Pointer {
public:
	SceneRenderLayer(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Render layer name */
	std::string name(void);
	/* Material Override: Material to override all other materials in this render layer */
	Material material_override(void);
	/* Light Override: Group to override all other lights in this render layer */
	Group light_override(void);
	/* Visible Layers: Scene layers included in this render layer */
	Array<int, 20> layers(void);
	/* Zmask Layers: Zmask scene layers */
	Array<int, 20> layers_zmask(void);
	/* Enabled: Disable or enable the render layer */
	bool use(void);
	/* Zmask: Only render what's in front of the solid z values */
	bool use_zmask(void);
	/* Zmask Negate: For Zmask, only render what is behind solid z values instead of in front */
	bool invert_zmask(void);
	/* All Z: Fill in Z values for solid faces in invisible layers, for masking */
	bool use_all_z(void);
	/* Solid: Render Solid faces in this Layer */
	bool use_solid(void);
	/* Halo: Render Halos in this Layer (on top of Solid) */
	bool use_halo(void);
	/* ZTransp: Render Z-Transparent faces in this Layer (On top of Solid and Halos) */
	bool use_ztransp(void);
	/* Sky: Render Sky in this Layer */
	bool use_sky(void);
	/* Edge: Render Edge-enhance in this Layer (only works for Solid faces) */
	bool use_edge_enhance(void);
	/* Strand: Render Strands in this Layer */
	bool use_strand(void);
	/* Combined: Deliver full combined RGBA buffer */
	bool use_pass_combined(void);
	/* Z: Deliver Z values pass */
	bool use_pass_z(void);
	/* Vector: Deliver speed vector pass */
	bool use_pass_vector(void);
	/* Normal: Deliver normal pass */
	bool use_pass_normal(void);
	/* UV: Deliver texture UV pass */
	bool use_pass_uv(void);
	/* Mist: Deliver mist factor pass (0.0-1.0) */
	bool use_pass_mist(void);
	/* Object Index: Deliver object index pass */
	bool use_pass_object_index(void);
	/* Color: Deliver shade-less color pass */
	bool use_pass_color(void);
	/* Diffuse: Deliver diffuse pass */
	bool use_pass_diffuse(void);
	/* Specular: Deliver specular pass */
	bool use_pass_specular(void);
	/* Shadow: Deliver shadow pass */
	bool use_pass_shadow(void);
	/* AO: Deliver AO pass */
	bool use_pass_ambient_occlusion(void);
	/* Reflection: Deliver raytraced reflection pass */
	bool use_pass_reflection(void);
	/* Refraction: Deliver raytraced refraction pass */
	bool use_pass_refraction(void);
	/* Emit: Deliver emission pass */
	bool use_pass_emit(void);
	/* Environment: Deliver environment lighting pass */
	bool use_pass_environment(void);
	/* Indirect: Deliver indirect lighting pass */
	bool use_pass_indirect(void);
	/* Specular Exclude: Exclude specular pass from combined */
	bool exclude_specular(void);
	/* Shadow Exclude: Exclude shadow pass from combined */
	bool exclude_shadow(void);
	/* AO Exclude: Exclude AO pass from combined */
	bool exclude_ambient_occlusion(void);
	/* Reflection Exclude: Exclude raytraced reflection pass from combined */
	bool exclude_reflection(void);
	/* Refraction Exclude: Exclude raytraced refraction pass from combined */
	bool exclude_refraction(void);
	/* Emit Exclude: Exclude emission pass from combined */
	bool exclude_emit(void);
	/* Environment Exclude: Exclude environment pass from combined */
	bool exclude_environment(void);
	/* Indirect Exclude: Exclude indirect pass from combined */
	bool exclude_indirect(void);
};

/**************** TransformOrientation ****************/

class TransformOrientation : public Pointer {
public:
	TransformOrientation(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* matrix */
	Array<float, 9> matrix(void);
	/* name */
	std::string name(void);
};

/**************** Screen ****************/

class Screen : public ID {
public:
	Screen(const PointerRNA& ptr) :
		ID(ptr),
		areas(ptr)
		{}

	/* Scene: Active scene to be edited in the screen */
	Scene scene(void);
	/* Areas: Areas the screen is subdivided into */
	COLLECTION_PROPERTY(Area, Screen, areas)
	/* Animation Playing: Animation playback is active */
	bool is_animation_playing(void);
	/* Fullscreen: An area is maximised, filling this screen */
	bool show_fullscreen(void);
	/* Top-Left 3D Editor */
	bool use_play_top_left_3d_editor(void);
	/* All 3D View Editors */
	bool use_play_3d_editors(void);
	/* Animation Editors */
	bool use_play_animation_editors(void);
	/* Property Editors */
	bool use_play_properties_editors(void);
	/* Image Editors */
	bool use_play_image_editors(void);
	/* Sequencer Editors */
	bool use_play_sequence_editors(void);
	/* Node Editors */
	bool use_play_node_editors(void);
};

/**************** Area ****************/

class Area : public Pointer {
public:
	Area(const PointerRNA& ptr) :
		Pointer(ptr),
		spaces(ptr),
		regions(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Spaces: Spaces contained in this area, the first being the active space. NOTE: Useful for example to restore a previously used 3d view space in a certain area to get the old view orientation. */
	COLLECTION_PROPERTY(Space, Area, spaces)
	/* Active Space: Space currently being displayed in this area */
	Space active_space(void);
	/* Regions: Regions this area is subdivided in */
	COLLECTION_PROPERTY(Region, Area, regions)
	/* Show Menus: Show menus in the header */
	bool show_menus(void);
	/* Type: Space type */
	enum type_enum {
		type_EMPTY = 0,
		type_VIEW_3D = 1,
		type_GRAPH_EDITOR = 2,
		type_OUTLINER = 3,
		type_PROPERTIES = 4,
		type_FILE_BROWSER = 5,
		type_IMAGE_EDITOR = 6,
		type_INFO = 7,
		type_SEQUENCE_EDITOR = 8,
		type_TEXT_EDITOR = 9,
		type_AUDIO_WINDOW = 11,
		type_DOPESHEET_EDITOR = 12,
		type_NLA_EDITOR = 13,
		type_SCRIPTS_WINDOW = 14,
		type_TIMELINE = 15,
		type_NODE_EDITOR = 16,
		type_LOGIC_EDITOR = 17,
		type_CONSOLE = 18,
		type_USER_PREFERENCES = 19,
	};
	type_enum type(void);
};

/**************** Region ****************/

class Region : public Pointer {
public:
	Region(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Region ID: Unique ID for this region */
	int id(void);
	/* Region Type: Type of this region */
	enum type_enum {
		type_WINDOW = 0,
		type_HEADER = 1,
		type_CHANNELS = 2,
		type_TEMPORARY = 3,
		type_UI = 4,
		type_TOOLS = 5,
		type_TOOL_PROPS = 6,
		type_PREVIEW = 7,
	};
	type_enum type(void);
	/* Width: Region width */
	int width(void);
	/* Height: Region height */
	int height(void);
};

/**************** Paint ****************/

class Paint : public Pointer {
public:
	Paint(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Brush: Active Brush */
	Brush brush(void);
	/* Show Brush */
	bool show_brush(void);
	/* Show Brush On Surface */
	bool show_brush_on_surface(void);
	/* Fast Navigate: For multires, show low resolution while navigating the view */
	bool show_low_resolution(void);
};

/**************** Sculpt ****************/

class Sculpt : public Paint {
public:
	Sculpt(const PointerRNA& ptr) :
		Paint(ptr)
		{}

	/* Radial Symmetry Count X Axis: Number of times to copy strokes across the surface */
	Array<int, 3> radial_symmetry(void);
	/* Symmetry X: Mirror brush across the X axis */
	bool use_symmetry_x(void);
	/* Symmetry Y: Mirror brush across the Y axis */
	bool use_symmetry_y(void);
	/* Symmetry Z: Mirror brush across the Z axis */
	bool use_symmetry_z(void);
	/* Lock X: Disallow changes to the X axis of vertices */
	bool lock_x(void);
	/* Lock Y: Disallow changes to the Y axis of vertices */
	bool lock_y(void);
	/* Lock Z: Disallow changes to the Z axis of vertices */
	bool lock_z(void);
	/* Symmetry Feathering: Reduce the strength of the brush where it overlaps symmetrical daubs */
	bool use_symmetry_feather(void);
	/* Use OpenMP: Take advantage of multiple CPU cores to improve sculpting performance */
	bool use_threaded(void);
};

/**************** Vertex Paint ****************/

class VertexPaint : public Paint {
public:
	VertexPaint(const PointerRNA& ptr) :
		Paint(ptr)
		{}

	/* All Faces: Paint on all faces inside brush */
	bool use_all_faces(void);
	/* Normals: Applies the vertex normal before painting */
	bool use_normal(void);
	/* Spray: Keep applying paint effect while holding mouse */
	bool use_spray(void);
};

/**************** Image Paint ****************/

class ImagePaint : public Paint {
public:
	ImagePaint(const PointerRNA& ptr) :
		Paint(ptr)
		{}

	/* Project Paint: Use projection painting for improved consistency in the brush strokes */
	bool use_projection(void);
	/* Occlude: Only paint onto the faces directly under the brush (slower) */
	bool use_occlude(void);
	/* Cull: Ignore faces pointing away from the view (faster) */
	bool use_backface_culling(void);
	/* Normal: Paint most on faces pointing towards the view */
	bool use_normal_falloff(void);
	/* Stencil Layer: Set the mask layer from the UV layer buttons */
	bool use_stencil_layer(void);
	/* Invert: Invert the stencil layer */
	bool invert_stencil(void);
	/* Clone Layer: Use another UV layer as clone source, otherwise use 3D the cursor as the source */
	bool use_clone_layer(void);
	/* Bleed: Extend paint beyond the faces UVs to reduce seams (in pixels, slower) */
	int seam_bleed(void);
	/* Angle: Paint most on faces pointing towards the view according to this angle */
	int normal_angle(void);
	/* screen_grab_size: Size to capture the image for re-projecting */
	Array<int, 2> screen_grab_size(void);
};

/**************** Particle Edit ****************/

class ParticleEdit : public Pointer {
public:
	ParticleEdit(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Tool */
	enum tool_enum {
		tool_NONE = -1,
		tool_COMB = 0,
		tool_SMOOTH = 5,
		tool_ADD = 4,
		tool_LENGTH = 2,
		tool_PUFF = 3,
		tool_CUT = 1,
		tool_WEIGHT = 6,
	};
	tool_enum tool(void);
	/* Selection Mode: Particle select and display mode */
	enum select_mode_enum {
		select_mode_PATH = 1,
		select_mode_POINT = 2,
		select_mode_TIP = 4,
	};
	select_mode_enum select_mode(void);
	/* Keep Lengths: Keep path lengths constant */
	bool use_preserve_length(void);
	/* Keep Root: Keep root keys unmodified */
	bool use_preserve_root(void);
	/* Deflect Emitter: Keep paths from intersecting the emitter */
	bool use_emitter_deflect(void);
	/* Emitter Distance: Distance to keep particles away from the emitter */
	float emitter_distance(void);
	/* Fade Time: Fade paths and keys further away from current frame */
	bool use_fade_time(void);
	/* Auto Velocity: Calculate point velocities automatically */
	bool use_auto_velocity(void);
	/* Draw Particles: Draw actual particles */
	bool show_particles(void);
	/* Interpolate: Interpolate new particles from the existing ones */
	bool use_default_interpolate(void);
	/* Keys: How many keys to make new particles with */
	int default_key_count(void);
	/* Brush */
	ParticleBrush brush(void);
	/* Steps: How many steps to draw the path with */
	int draw_step(void);
	/* Frames: How many frames to fade */
	int fade_frames(void);
	/* Type */
	enum type_enum {
		type_PARTICLES = 0,
		type_SOFT_BODY = 1,
		type_CLOTH = 2,
	};
	type_enum type(void);
	/* Editable: A valid edit mode exists */
	bool is_editable(void);
	/* Hair: Editing hair */
	bool is_hair(void);
	/* Object: The edited object */
	Object object(void);
};

/**************** Particle Brush ****************/

class ParticleBrush : public Pointer {
public:
	ParticleBrush(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Size: Brush size */
	int size(void);
	/* Strength: Brush strength */
	float strength(void);
	/* Count: Particle count */
	int count(void);
	/* Steps: Brush steps */
	int steps(void);
	/* Puff Mode */
	enum puff_mode_enum {
		puff_mode_ADD = 0,
		puff_mode_SUB = 1,
	};
	puff_mode_enum puff_mode(void);
	/* Puff Volume: Apply puff to unselected end-points, (helps maintain hair volume when puffing root) */
	bool use_puff_volume(void);
	/* Length Mode */
	enum length_mode_enum {
		length_mode_GROW = 0,
		length_mode_SHRINK = 1,
	};
	length_mode_enum length_mode(void);
	/* Curve */
	CurveMapping curve(void);
};

/**************** Sensor ****************/

class Sensor : public Pointer {
public:
	Sensor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Sensor name */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_ACTUATOR = 12,
		type_ALWAYS = 0,
		type_ARMATURE = 14,
		type_COLLISION = 6,
		type_DELAY = 13,
		type_JOYSTICK = 11,
		type_KEYBOARD = 3,
		type_MESSAGE = 10,
		type_MOUSE = 5,
		type_NEAR = 2,
		type_PROPERTY = 4,
		type_RADAR = 7,
		type_RANDOM = 8,
		type_RAY = 9,
		type_TOUCH = 1,
	};
	type_enum type(void);
	/* Pinned: Display when not linked to a visible states controller */
	bool pin(void);
	/* Expanded: Set sensor expanded in the user interface */
	bool show_expanded(void);
	/* Invert Output: Invert the level(output) of this sensor */
	bool invert(void);
	/* Level: Level detector, trigger controllers of new states(only applicable upon logic state transition) */
	bool use_level(void);
	/* Pulse True Level: Activate TRUE level triggering (pulse mode) */
	bool use_pulse_true_level(void);
	/* Pulse False Level: Activate FALSE level triggering (pulse mode) */
	bool use_pulse_false_level(void);
	/* Frequency: Delay between repeated pulses(in logic tics, 0=no delay) */
	int frequency(void);
	/* Tap: Trigger controllers only for an instant, even while the sensor remains true */
	bool use_tap(void);
};

/**************** Always Sensor ****************/

class AlwaysSensor : public Sensor {
public:
	AlwaysSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

};

/**************** Near Sensor ****************/

class NearSensor : public Sensor {
public:
	NearSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Property: Only look for objects with this property (blank = all objects) */
	std::string property(void);
	/* Distance: Trigger distance */
	float distance(void);
	/* Reset Distance: The distance where the sensor forgets the actor */
	float reset_distance(void);
};

/**************** Mouse Sensor ****************/

class MouseSensor : public Sensor {
public:
	MouseSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Mouse Event: Specify the type of event this mouse sensor should trigger on */
	enum mouse_event_enum {
		mouse_event_LEFTCLICK = 1,
		mouse_event_MIDDLECLICK = 2,
		mouse_event_RIGHTCLICK = 4,
		mouse_event_WHEELUP = 5,
		mouse_event_WHEELDOWN = 6,
		mouse_event_MOVEMENT = 8,
		mouse_event_MOUSEOVER = 16,
		mouse_event_MOUSEOVERANY = 32,
	};
	mouse_event_enum mouse_event(void);
};

/**************** Touch Sensor ****************/

class TouchSensor : public Sensor {
public:
	TouchSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Material: Only look for objects with this material (blank = all objects) */
	Material material(void);
};

/**************** Keyboard Sensor ****************/

class KeyboardSensor : public Sensor {
public:
	KeyboardSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Key */
	enum key_enum {
		key_NONE = 0,
		key_LEFTMOUSE = 1,
		key_MIDDLEMOUSE = 2,
		key_RIGHTMOUSE = 3,
		key_BUTTON4MOUSE = 7,
		key_BUTTON5MOUSE = 8,
		key_ACTIONMOUSE = 5,
		key_SELECTMOUSE = 6,
		key_MOUSEMOVE = 4,
		key_INBETWEEN_MOUSEMOVE = 17,
		key_TRACKPADPAN = 14,
		key_TRACKPADZOOM = 15,
		key_MOUSEROTATE = 16,
		key_WHEELUPMOUSE = 10,
		key_WHEELDOWNMOUSE = 11,
		key_WHEELINMOUSE = 12,
		key_WHEELOUTMOUSE = 13,
		key_EVT_TWEAK_L = 20482,
		key_EVT_TWEAK_M = 20483,
		key_EVT_TWEAK_R = 20484,
		key_EVT_TWEAK_A = 20485,
		key_EVT_TWEAK_S = 20486,
		key_A = 97,
		key_B = 98,
		key_C = 99,
		key_D = 100,
		key_E = 101,
		key_F = 102,
		key_G = 103,
		key_H = 104,
		key_I = 105,
		key_J = 106,
		key_K = 107,
		key_L = 108,
		key_M = 109,
		key_N = 110,
		key_O = 111,
		key_P = 112,
		key_Q = 113,
		key_R = 114,
		key_S = 115,
		key_T = 116,
		key_U = 117,
		key_V = 118,
		key_W = 119,
		key_X = 120,
		key_Y = 121,
		key_Z = 122,
		key_ZERO = 48,
		key_ONE = 49,
		key_TWO = 50,
		key_THREE = 51,
		key_FOUR = 52,
		key_FIVE = 53,
		key_SIX = 54,
		key_SEVEN = 55,
		key_EIGHT = 56,
		key_NINE = 57,
		key_LEFT_CTRL = 212,
		key_LEFT_ALT = 213,
		key_LEFT_SHIFT = 217,
		key_RIGHT_ALT = 214,
		key_RIGHT_CTRL = 215,
		key_RIGHT_SHIFT = 216,
		key_OSKEY = 172,
		key_GRLESS = 173,
		key_ESC = 218,
		key_TAB = 219,
		key_RET = 220,
		key_SPACE = 221,
		key_LINE_FEED = 222,
		key_BACK_SPACE = 223,
		key_DEL = 224,
		key_SEMI_COLON = 225,
		key_PERIOD = 226,
		key_COMMA = 227,
		key_QUOTE = 228,
		key_ACCENT_GRAVE = 229,
		key_MINUS = 230,
		key_SLASH = 232,
		key_BACK_SLASH = 233,
		key_EQUAL = 234,
		key_LEFT_BRACKET = 235,
		key_RIGHT_BRACKET = 236,
		key_LEFT_ARROW = 137,
		key_DOWN_ARROW = 138,
		key_RIGHT_ARROW = 139,
		key_UP_ARROW = 140,
		key_NUMPAD_2 = 152,
		key_NUMPAD_4 = 154,
		key_NUMPAD_6 = 156,
		key_NUMPAD_8 = 158,
		key_NUMPAD_1 = 151,
		key_NUMPAD_3 = 153,
		key_NUMPAD_5 = 155,
		key_NUMPAD_7 = 157,
		key_NUMPAD_9 = 159,
		key_NUMPAD_PERIOD = 199,
		key_NUMPAD_SLASH = 161,
		key_NUMPAD_ASTERIX = 160,
		key_NUMPAD_0 = 150,
		key_NUMPAD_MINUS = 162,
		key_NUMPAD_ENTER = 163,
		key_NUMPAD_PLUS = 164,
		key_F1 = 300,
		key_F2 = 301,
		key_F3 = 302,
		key_F4 = 303,
		key_F5 = 304,
		key_F6 = 305,
		key_F7 = 306,
		key_F8 = 307,
		key_F9 = 308,
		key_F10 = 309,
		key_F11 = 310,
		key_F12 = 311,
		key_F13 = 312,
		key_F14 = 313,
		key_F15 = 314,
		key_F16 = 315,
		key_F17 = 316,
		key_F18 = 317,
		key_F19 = 318,
		key_PAUSE = 165,
		key_INSERT = 166,
		key_HOME = 167,
		key_PAGE_UP = 168,
		key_PAGE_DOWN = 169,
		key_END = 170,
		key_MEDIA_PLAY = 174,
		key_MEDIA_STOP = 175,
		key_MEDIA_FIRST = 176,
		key_MEDIA_LAST = 177,
		key_WINDOW_DEACTIVATE = 260,
		key_TIMER = 272,
		key_TIMER0 = 273,
		key_TIMER1 = 274,
		key_TIMER2 = 275,
	};
	key_enum key(void);
	/* Modifier Key: Modifier key code */
	enum modifier_key_1_enum {
		modifier_key_1_NONE = 0,
		modifier_key_1_LEFTMOUSE = 1,
		modifier_key_1_MIDDLEMOUSE = 2,
		modifier_key_1_RIGHTMOUSE = 3,
		modifier_key_1_BUTTON4MOUSE = 7,
		modifier_key_1_BUTTON5MOUSE = 8,
		modifier_key_1_ACTIONMOUSE = 5,
		modifier_key_1_SELECTMOUSE = 6,
		modifier_key_1_MOUSEMOVE = 4,
		modifier_key_1_INBETWEEN_MOUSEMOVE = 17,
		modifier_key_1_TRACKPADPAN = 14,
		modifier_key_1_TRACKPADZOOM = 15,
		modifier_key_1_MOUSEROTATE = 16,
		modifier_key_1_WHEELUPMOUSE = 10,
		modifier_key_1_WHEELDOWNMOUSE = 11,
		modifier_key_1_WHEELINMOUSE = 12,
		modifier_key_1_WHEELOUTMOUSE = 13,
		modifier_key_1_EVT_TWEAK_L = 20482,
		modifier_key_1_EVT_TWEAK_M = 20483,
		modifier_key_1_EVT_TWEAK_R = 20484,
		modifier_key_1_EVT_TWEAK_A = 20485,
		modifier_key_1_EVT_TWEAK_S = 20486,
		modifier_key_1_A = 97,
		modifier_key_1_B = 98,
		modifier_key_1_C = 99,
		modifier_key_1_D = 100,
		modifier_key_1_E = 101,
		modifier_key_1_F = 102,
		modifier_key_1_G = 103,
		modifier_key_1_H = 104,
		modifier_key_1_I = 105,
		modifier_key_1_J = 106,
		modifier_key_1_K = 107,
		modifier_key_1_L = 108,
		modifier_key_1_M = 109,
		modifier_key_1_N = 110,
		modifier_key_1_O = 111,
		modifier_key_1_P = 112,
		modifier_key_1_Q = 113,
		modifier_key_1_R = 114,
		modifier_key_1_S = 115,
		modifier_key_1_T = 116,
		modifier_key_1_U = 117,
		modifier_key_1_V = 118,
		modifier_key_1_W = 119,
		modifier_key_1_X = 120,
		modifier_key_1_Y = 121,
		modifier_key_1_Z = 122,
		modifier_key_1_ZERO = 48,
		modifier_key_1_ONE = 49,
		modifier_key_1_TWO = 50,
		modifier_key_1_THREE = 51,
		modifier_key_1_FOUR = 52,
		modifier_key_1_FIVE = 53,
		modifier_key_1_SIX = 54,
		modifier_key_1_SEVEN = 55,
		modifier_key_1_EIGHT = 56,
		modifier_key_1_NINE = 57,
		modifier_key_1_LEFT_CTRL = 212,
		modifier_key_1_LEFT_ALT = 213,
		modifier_key_1_LEFT_SHIFT = 217,
		modifier_key_1_RIGHT_ALT = 214,
		modifier_key_1_RIGHT_CTRL = 215,
		modifier_key_1_RIGHT_SHIFT = 216,
		modifier_key_1_OSKEY = 172,
		modifier_key_1_GRLESS = 173,
		modifier_key_1_ESC = 218,
		modifier_key_1_TAB = 219,
		modifier_key_1_RET = 220,
		modifier_key_1_SPACE = 221,
		modifier_key_1_LINE_FEED = 222,
		modifier_key_1_BACK_SPACE = 223,
		modifier_key_1_DEL = 224,
		modifier_key_1_SEMI_COLON = 225,
		modifier_key_1_PERIOD = 226,
		modifier_key_1_COMMA = 227,
		modifier_key_1_QUOTE = 228,
		modifier_key_1_ACCENT_GRAVE = 229,
		modifier_key_1_MINUS = 230,
		modifier_key_1_SLASH = 232,
		modifier_key_1_BACK_SLASH = 233,
		modifier_key_1_EQUAL = 234,
		modifier_key_1_LEFT_BRACKET = 235,
		modifier_key_1_RIGHT_BRACKET = 236,
		modifier_key_1_LEFT_ARROW = 137,
		modifier_key_1_DOWN_ARROW = 138,
		modifier_key_1_RIGHT_ARROW = 139,
		modifier_key_1_UP_ARROW = 140,
		modifier_key_1_NUMPAD_2 = 152,
		modifier_key_1_NUMPAD_4 = 154,
		modifier_key_1_NUMPAD_6 = 156,
		modifier_key_1_NUMPAD_8 = 158,
		modifier_key_1_NUMPAD_1 = 151,
		modifier_key_1_NUMPAD_3 = 153,
		modifier_key_1_NUMPAD_5 = 155,
		modifier_key_1_NUMPAD_7 = 157,
		modifier_key_1_NUMPAD_9 = 159,
		modifier_key_1_NUMPAD_PERIOD = 199,
		modifier_key_1_NUMPAD_SLASH = 161,
		modifier_key_1_NUMPAD_ASTERIX = 160,
		modifier_key_1_NUMPAD_0 = 150,
		modifier_key_1_NUMPAD_MINUS = 162,
		modifier_key_1_NUMPAD_ENTER = 163,
		modifier_key_1_NUMPAD_PLUS = 164,
		modifier_key_1_F1 = 300,
		modifier_key_1_F2 = 301,
		modifier_key_1_F3 = 302,
		modifier_key_1_F4 = 303,
		modifier_key_1_F5 = 304,
		modifier_key_1_F6 = 305,
		modifier_key_1_F7 = 306,
		modifier_key_1_F8 = 307,
		modifier_key_1_F9 = 308,
		modifier_key_1_F10 = 309,
		modifier_key_1_F11 = 310,
		modifier_key_1_F12 = 311,
		modifier_key_1_F13 = 312,
		modifier_key_1_F14 = 313,
		modifier_key_1_F15 = 314,
		modifier_key_1_F16 = 315,
		modifier_key_1_F17 = 316,
		modifier_key_1_F18 = 317,
		modifier_key_1_F19 = 318,
		modifier_key_1_PAUSE = 165,
		modifier_key_1_INSERT = 166,
		modifier_key_1_HOME = 167,
		modifier_key_1_PAGE_UP = 168,
		modifier_key_1_PAGE_DOWN = 169,
		modifier_key_1_END = 170,
		modifier_key_1_MEDIA_PLAY = 174,
		modifier_key_1_MEDIA_STOP = 175,
		modifier_key_1_MEDIA_FIRST = 176,
		modifier_key_1_MEDIA_LAST = 177,
		modifier_key_1_WINDOW_DEACTIVATE = 260,
		modifier_key_1_TIMER = 272,
		modifier_key_1_TIMER0 = 273,
		modifier_key_1_TIMER1 = 274,
		modifier_key_1_TIMER2 = 275,
	};
	modifier_key_1_enum modifier_key_1(void);
	/* Second Modifier Key: Modifier key code */
	enum modifier_key_2_enum {
		modifier_key_2_NONE = 0,
		modifier_key_2_LEFTMOUSE = 1,
		modifier_key_2_MIDDLEMOUSE = 2,
		modifier_key_2_RIGHTMOUSE = 3,
		modifier_key_2_BUTTON4MOUSE = 7,
		modifier_key_2_BUTTON5MOUSE = 8,
		modifier_key_2_ACTIONMOUSE = 5,
		modifier_key_2_SELECTMOUSE = 6,
		modifier_key_2_MOUSEMOVE = 4,
		modifier_key_2_INBETWEEN_MOUSEMOVE = 17,
		modifier_key_2_TRACKPADPAN = 14,
		modifier_key_2_TRACKPADZOOM = 15,
		modifier_key_2_MOUSEROTATE = 16,
		modifier_key_2_WHEELUPMOUSE = 10,
		modifier_key_2_WHEELDOWNMOUSE = 11,
		modifier_key_2_WHEELINMOUSE = 12,
		modifier_key_2_WHEELOUTMOUSE = 13,
		modifier_key_2_EVT_TWEAK_L = 20482,
		modifier_key_2_EVT_TWEAK_M = 20483,
		modifier_key_2_EVT_TWEAK_R = 20484,
		modifier_key_2_EVT_TWEAK_A = 20485,
		modifier_key_2_EVT_TWEAK_S = 20486,
		modifier_key_2_A = 97,
		modifier_key_2_B = 98,
		modifier_key_2_C = 99,
		modifier_key_2_D = 100,
		modifier_key_2_E = 101,
		modifier_key_2_F = 102,
		modifier_key_2_G = 103,
		modifier_key_2_H = 104,
		modifier_key_2_I = 105,
		modifier_key_2_J = 106,
		modifier_key_2_K = 107,
		modifier_key_2_L = 108,
		modifier_key_2_M = 109,
		modifier_key_2_N = 110,
		modifier_key_2_O = 111,
		modifier_key_2_P = 112,
		modifier_key_2_Q = 113,
		modifier_key_2_R = 114,
		modifier_key_2_S = 115,
		modifier_key_2_T = 116,
		modifier_key_2_U = 117,
		modifier_key_2_V = 118,
		modifier_key_2_W = 119,
		modifier_key_2_X = 120,
		modifier_key_2_Y = 121,
		modifier_key_2_Z = 122,
		modifier_key_2_ZERO = 48,
		modifier_key_2_ONE = 49,
		modifier_key_2_TWO = 50,
		modifier_key_2_THREE = 51,
		modifier_key_2_FOUR = 52,
		modifier_key_2_FIVE = 53,
		modifier_key_2_SIX = 54,
		modifier_key_2_SEVEN = 55,
		modifier_key_2_EIGHT = 56,
		modifier_key_2_NINE = 57,
		modifier_key_2_LEFT_CTRL = 212,
		modifier_key_2_LEFT_ALT = 213,
		modifier_key_2_LEFT_SHIFT = 217,
		modifier_key_2_RIGHT_ALT = 214,
		modifier_key_2_RIGHT_CTRL = 215,
		modifier_key_2_RIGHT_SHIFT = 216,
		modifier_key_2_OSKEY = 172,
		modifier_key_2_GRLESS = 173,
		modifier_key_2_ESC = 218,
		modifier_key_2_TAB = 219,
		modifier_key_2_RET = 220,
		modifier_key_2_SPACE = 221,
		modifier_key_2_LINE_FEED = 222,
		modifier_key_2_BACK_SPACE = 223,
		modifier_key_2_DEL = 224,
		modifier_key_2_SEMI_COLON = 225,
		modifier_key_2_PERIOD = 226,
		modifier_key_2_COMMA = 227,
		modifier_key_2_QUOTE = 228,
		modifier_key_2_ACCENT_GRAVE = 229,
		modifier_key_2_MINUS = 230,
		modifier_key_2_SLASH = 232,
		modifier_key_2_BACK_SLASH = 233,
		modifier_key_2_EQUAL = 234,
		modifier_key_2_LEFT_BRACKET = 235,
		modifier_key_2_RIGHT_BRACKET = 236,
		modifier_key_2_LEFT_ARROW = 137,
		modifier_key_2_DOWN_ARROW = 138,
		modifier_key_2_RIGHT_ARROW = 139,
		modifier_key_2_UP_ARROW = 140,
		modifier_key_2_NUMPAD_2 = 152,
		modifier_key_2_NUMPAD_4 = 154,
		modifier_key_2_NUMPAD_6 = 156,
		modifier_key_2_NUMPAD_8 = 158,
		modifier_key_2_NUMPAD_1 = 151,
		modifier_key_2_NUMPAD_3 = 153,
		modifier_key_2_NUMPAD_5 = 155,
		modifier_key_2_NUMPAD_7 = 157,
		modifier_key_2_NUMPAD_9 = 159,
		modifier_key_2_NUMPAD_PERIOD = 199,
		modifier_key_2_NUMPAD_SLASH = 161,
		modifier_key_2_NUMPAD_ASTERIX = 160,
		modifier_key_2_NUMPAD_0 = 150,
		modifier_key_2_NUMPAD_MINUS = 162,
		modifier_key_2_NUMPAD_ENTER = 163,
		modifier_key_2_NUMPAD_PLUS = 164,
		modifier_key_2_F1 = 300,
		modifier_key_2_F2 = 301,
		modifier_key_2_F3 = 302,
		modifier_key_2_F4 = 303,
		modifier_key_2_F5 = 304,
		modifier_key_2_F6 = 305,
		modifier_key_2_F7 = 306,
		modifier_key_2_F8 = 307,
		modifier_key_2_F9 = 308,
		modifier_key_2_F10 = 309,
		modifier_key_2_F11 = 310,
		modifier_key_2_F12 = 311,
		modifier_key_2_F13 = 312,
		modifier_key_2_F14 = 313,
		modifier_key_2_F15 = 314,
		modifier_key_2_F16 = 315,
		modifier_key_2_F17 = 316,
		modifier_key_2_F18 = 317,
		modifier_key_2_F19 = 318,
		modifier_key_2_PAUSE = 165,
		modifier_key_2_INSERT = 166,
		modifier_key_2_HOME = 167,
		modifier_key_2_PAGE_UP = 168,
		modifier_key_2_PAGE_DOWN = 169,
		modifier_key_2_END = 170,
		modifier_key_2_MEDIA_PLAY = 174,
		modifier_key_2_MEDIA_STOP = 175,
		modifier_key_2_MEDIA_FIRST = 176,
		modifier_key_2_MEDIA_LAST = 177,
		modifier_key_2_WINDOW_DEACTIVATE = 260,
		modifier_key_2_TIMER = 272,
		modifier_key_2_TIMER0 = 273,
		modifier_key_2_TIMER1 = 274,
		modifier_key_2_TIMER2 = 275,
	};
	modifier_key_2_enum modifier_key_2(void);
	/* Target: Property that receive the keystrokes in case a string is logged */
	std::string target(void);
	/* Log Toggle: Property that indicates whether to log keystrokes as a string */
	std::string log(void);
	/* All Keys: Trigger this sensor on any keystroke */
	bool use_all_keys(void);
};

/**************** Property Sensor ****************/

class PropertySensor : public Sensor {
public:
	PropertySensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Evaluation Type: Type of property evaluation */
	enum evaluation_type_enum {
		evaluation_type_PROPEQUAL = 0,
		evaluation_type_PROPNEQUAL = 1,
		evaluation_type_PROPINTERVAL = 2,
		evaluation_type_PROPCHANGED = 3,
	};
	evaluation_type_enum evaluation_type(void);
	/* Property */
	std::string property(void);
	/* Value: Check for this value in types in Equal or Not Equal types */
	std::string value(void);
	/* Minimum Value: Specify minimum value in Interval type */
	std::string value_min(void);
	/* Maximum Value: Specify maximum value in Interval type */
	std::string value_max(void);
};

/**************** Armature Sensor ****************/

class ArmatureSensor : public Sensor {
public:
	ArmatureSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Test: Type of value and test */
	enum test_type_enum {
		test_type_STATECHG = 0,
		test_type_LINERRORBELOW = 1,
		test_type_LINERRORABOVE = 2,
		test_type_ROTERRORBELOW = 3,
		test_type_ROTERRORABOVE = 4,
	};
	test_type_enum test_type(void);
	/* Bone Name: Identify the bone to check value from */
	std::string bone(void);
	/* Constraint Name: Identify the bone constraint to check value from */
	std::string constraint(void);
	/* Compare Value: Specify value to be used in comparison */
	float value(void);
};

/**************** Actuator Sensor ****************/

class ActuatorSensor : public Sensor {
public:
	ActuatorSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Actuator: Actuator name, actuator active state modifications will be detected */
	std::string actuator(void);
};

/**************** Delay Sensor ****************/

class DelaySensor : public Sensor {
public:
	DelaySensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Delay: Delay in number of logic tics before the positive trigger (default 60 per second) */
	int delay(void);
	/* Duration: If >0, delay in number of logic tics before the negative trigger following the positive trigger */
	int duration(void);
	/* Repeat: Toggle repeat option. If selected, the sensor restarts after Delay+Dur logic tics */
	bool use_repeat(void);
};

/**************** Collision Sensor ****************/

class CollisionSensor : public Sensor {
public:
	CollisionSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Pulse: Changes to the set of colliding objects generates pulse */
	bool use_pulse(void);
	/* M/P: Toggle collision on material or property */
	bool use_material(void);
	/* Property: Only look for Objects with this property (blank = all objects) */
	std::string property(void);
	/* Material: Only look for Objects with this material (blank = all objects) */
	std::string material(void);
};

/**************** Radar Sensor ****************/

class RadarSensor : public Sensor {
public:
	RadarSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Property: Only look for Objects with this property (blank = all objects) */
	std::string property(void);
	/* Axis: Specify along which axis the radar cone is cast */
	enum axis_enum {
		axis_XAXIS = 0,
		axis_YAXIS = 1,
		axis_ZAXIS = 2,
		axis_NEGXAXIS = 3,
		axis_NEGYAXIS = 4,
		axis_NEGZAXIS = 5,
	};
	axis_enum axis(void);
	/* Angle: Opening angle of the radar cone (in degrees) */
	float angle(void);
	/* Distance: Depth of the radar cone */
	float distance(void);
};

/**************** Random Sensor ****************/

class RandomSensor : public Sensor {
public:
	RandomSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Seed: Initial seed of the generator. (Choose 0 for not random) */
	int seed(void);
};

/**************** Ray Sensor ****************/

class RaySensor : public Sensor {
public:
	RaySensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Ray Type: Toggle collision on material or property */
	enum ray_type_enum {
		ray_type_PROPERTY = 0,
		ray_type_MATERIAL = 1,
	};
	ray_type_enum ray_type(void);
	/* Property: Only look for Objects with this property (blank = all objects) */
	std::string property(void);
	/* Material: Only look for Objects with this material (blank = all objects) */
	std::string material(void);
	/* X-Ray Mode: Toggle X-Ray option (see through objects that don't have the property) */
	bool use_x_ray(void);
	/* Range: Sense objects no farther than this distance */
	float range(void);
	/* Axis: Specify along which axis the ray is cast */
	enum axis_enum {
		axis_XAXIS = 1,
		axis_YAXIS = 0,
		axis_ZAXIS = 2,
		axis_NEGXAXIS = 3,
		axis_NEGYAXIS = 4,
		axis_NEGZAXIS = 5,
	};
	axis_enum axis(void);
};

/**************** Message Sensor ****************/

class MessageSensor : public Sensor {
public:
	MessageSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Subject: Optional subject filter: only accept messages with this subject, or empty for all */
	std::string subject(void);
};

/**************** Joystick Sensor ****************/

class JoystickSensor : public Sensor {
public:
	JoystickSensor(const PointerRNA& ptr) :
		Sensor(ptr)
		{}

	/* Index: Specify which joystick to use */
	int joystick_index(void);
	/* Event Type: The type of event this joystick sensor is triggered on */
	enum event_type_enum {
		event_type_BUTTON = 0,
		event_type_AXIS = 1,
		event_type_HAT = 2,
		event_type_AXIS_SINGLE = 3,
	};
	event_type_enum event_type(void);
	/* All Events: Triggered by all events on this joysticks current type (axis/button/hat) */
	bool use_all_events(void);
	/* Button Number: Specify which button to use */
	int button_number(void);
	/* Axis Number: Specify which axis pair to use, 1 is usually the main direction input */
	int axis_number(void);
	/* Axis Threshold: Specify the precision of the axis */
	int axis_threshold(void);
	/* Axis Direction: The direction of the axis */
	enum axis_direction_enum {
		axis_direction_RIGHTAXIS = 0,
		axis_direction_UPAXIS = 1,
		axis_direction_LEFTAXIS = 2,
		axis_direction_DOWNAXIS = 3,
	};
	axis_direction_enum axis_direction(void);
	/* Axis Number: Specify a single axis (verticle/horizontal/other) to detect */
	int single_axis_number(void);
	/* Hat Number: Specify which hat to use */
	int hat_number(void);
	/* Hat Direction: Specify hat direction */
	enum hat_direction_enum {
		hat_direction_UP = 1,
		hat_direction_DOWN = 4,
		hat_direction_LEFT = 8,
		hat_direction_RIGHT = 2,
		hat_direction_UPRIGHT = 3,
		hat_direction_DOWNLEFT = 12,
		hat_direction_UPLEFT = 9,
		hat_direction_DOWNRIGHT = 6,
	};
	hat_direction_enum hat_direction(void);
};

/**************** Sequence Element ****************/

class SequenceElement : public Pointer {
public:
	SequenceElement(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Filename */
	std::string filename(void);
	/* Orig Width: Original image width */
	int orig_width(void);
	/* Orig Height: Original image height */
	int orig_height(void);
};

/**************** Sequence Proxy ****************/

class SequenceProxy : public Pointer {
public:
	SequenceProxy(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Directory: Location to store the proxy files */
	std::string directory(void);
	/* Path: Location of custom proxy file */
	std::string filepath(void);
};

/**************** Sequence Color Balance ****************/

class SequenceColorBalance : public Pointer {
public:
	SequenceColorBalance(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Lift: Color balance lift (shadows) */
	Array<float, 3> lift(void);
	/* Gamma: Color balance gamma (midtones) */
	Array<float, 3> gamma(void);
	/* Gain: Color balance gain (highlights) */
	Array<float, 3> gain(void);
	/* Inverse Gain */
	bool invert_gain(void);
	/* Inverse Gamma */
	bool invert_gamma(void);
	/* Inverse Lift */
	bool invert_lift(void);
};

/**************** Sequence Crop ****************/

class SequenceCrop : public Pointer {
public:
	SequenceCrop(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Top */
	int max_y(void);
	/* Bottom */
	int min_y(void);
	/* Left */
	int min_x(void);
	/* Right */
	int max_x(void);
};

/**************** Sequence Transform ****************/

class SequenceTransform : public Pointer {
public:
	SequenceTransform(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Offset X */
	int offset_x(void);
	/* Offset Y */
	int offset_y(void);
};

/**************** Sequence ****************/

class Sequence : public Pointer {
public:
	Sequence(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Type */
	enum type_enum {
		type_IMAGE = 0,
		type_META = 1,
		type_SCENE = 2,
		type_MOVIE = 3,
		type_SOUND = 4,
		type_CROSS = 8,
		type_ADD = 9,
		type_SUBTRACT = 10,
		type_ALPHA_OVER = 11,
		type_ALPHA_UNDER = 12,
		type_GAMMA_CROSS = 13,
		type_MULTIPLY = 14,
		type_OVER_DROP = 15,
		type_PLUGIN = 24,
		type_WIPE = 25,
		type_GLOW = 26,
		type_TRANSFORM = 27,
		type_COLOR = 28,
		type_SPEED = 29,
		type_MULTICAM = 30,
	};
	type_enum type(void);
	/* Select */
	bool select(void);
	/* Left Handle Selected */
	bool select_left_handle(void);
	/* Right Handle Selected */
	bool select_right_handle(void);
	/* Mute */
	bool mute(void);
	/* Lock: Lock strip so that it can't be transformed */
	bool lock(void);
	/* Length: The length of the contents of this strip before the handles are applied */
	int frame_final_duration(void);
	/* Length: The length of the contents of this strip before the handles are applied */
	int frame_duration(void);
	/* Start Frame */
	int frame_start(void);
	/* Start Frame: Start frame displayed in the sequence editor after offsets are applied, setting this is equivalent to moving the handle, not the actual start frame */
	int frame_final_start(void);
	/* End Frame: End frame displayed in the sequence editor after offsets are applied */
	int frame_final_end(void);
	/* Start Offset */
	int frame_offset_start(void);
	/* End Offset */
	int frame_offset_end(void);
	/* Start Still */
	int frame_still_start(void);
	/* End Still */
	int frame_still_end(void);
	/* Channel: Y position of the sequence strip */
	int channel(void);
	/* Blend Mode */
	enum blend_type_enum {
		blend_type_REPLACE = 0,
		blend_type_CROSS = 8,
		blend_type_ADD = 9,
		blend_type_SUBTRACT = 10,
		blend_type_ALPHA_OVER = 11,
		blend_type_ALPHA_UNDER = 12,
		blend_type_GAMMA_CROSS = 13,
		blend_type_MULTIPLY = 14,
		blend_type_OVER_DROP = 15,
	};
	blend_type_enum blend_type(void);
	/* Blend Opacity */
	float blend_alpha(void);
	/* Effect fader position */
	float effect_fader(void);
	/* Use Default Fade: Fade effect using the built-in default (usually make transition as long as effect strip) */
	bool use_default_fade(void);
	/* Speed factor: Multiply the current speed of the sequence with this number or remap current frame to this frame */
	float speed_factor(void);
	/* input_count */
	int input_count(void);
	/* Input 1: First input for the effect strip */
	Sequence input_1(void);
	/* Input 2: Second input for the effect strip */
	Sequence input_2(void);
	/* Input 3: Third input for the effect strip */
	Sequence input_3(void);
};

/**************** Sequence Editor ****************/

class SequenceEditor : public Pointer {
public:
	SequenceEditor(const PointerRNA& ptr) :
		Pointer(ptr),
		sequences(ptr),
		sequences_all(ptr),
		meta_stack(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Sequences */
	COLLECTION_PROPERTY(Sequence, SequenceEditor, sequences)
	/* Sequences */
	COLLECTION_PROPERTY(Sequence, SequenceEditor, sequences_all)
	/* Meta Stack: Meta strip stack, last is currently edited meta strip */
	COLLECTION_PROPERTY(Sequence, SequenceEditor, meta_stack)
	/* active_strip */
	Sequence active_strip(void);
	/* Draw Axes: Partial overlay ontop of the sequencer */
	bool show_overlay(void);
	/* Overlay Lock */
	bool overlay_lock(void);
	/* Active Strip: Sequencers active strip */
	int overlay_frame(void);
};

/**************** Image Sequence ****************/

class ImageSequence : public Sequence {
public:
	ImageSequence(const PointerRNA& ptr) :
		Sequence(ptr),
		elements(ptr)
		{}

	/* Directory */
	std::string directory(void);
	/* Elements */
	COLLECTION_PROPERTY(SequenceElement, ImageSequence, elements)
	/* De-Interlace: For video movies to remove fields */
	bool use_deinterlace(void);
	/* Premultiply: Convert RGB from key alpha to premultiplied alpha */
	bool use_premultiply(void);
	/* Flip X: Flip on the X axis */
	bool use_flip_x(void);
	/* Flip Y: Flip on the Y axis */
	bool use_flip_y(void);
	/* Convert Float: Convert input to float data */
	bool use_float(void);
	/* Flip Time: Reverse frame order */
	bool use_reverse_frames(void);
	/* Multiply Colors */
	float color_multiply(void);
	/* Saturation */
	float color_saturation(void);
	/* Strobe: Only display every nth frame */
	float strobe(void);
	/* Use Color Balance: (3-Way color correction) on input */
	bool use_color_balance(void);
	/* Color Balance */
	SequenceColorBalance color_balance(void);
	/* Use Translation: Translate image before processing */
	bool use_translation(void);
	/* Transform */
	SequenceTransform transform(void);
	/* Use Crop: Crop image before processing */
	bool use_crop(void);
	/* Crop */
	SequenceCrop crop(void);
	/* Use Proxy: Use a preview proxy for this strip */
	bool use_proxy(void);
	/* Proxy */
	SequenceProxy proxy(void);
	/* Proxy Custom Directory: Use a custom directory to store data */
	bool use_proxy_custom_directory(void);
	/* Proxy Custom File: Use a custom file to read proxy data from */
	bool use_proxy_custom_file(void);
	/* Animation Start Offset: Animation start offset (trim start) */
	int animation_offset_start(void);
	/* Animation End Offset: Animation end offset (trim end) */
	int animation_offset_end(void);
};

/**************** Meta Sequence ****************/

class MetaSequence : public Sequence {
public:
	MetaSequence(const PointerRNA& ptr) :
		Sequence(ptr),
		sequences(ptr)
		{}

	/* Sequences */
	COLLECTION_PROPERTY(Sequence, MetaSequence, sequences)
	/* De-Interlace: For video movies to remove fields */
	bool use_deinterlace(void);
	/* Premultiply: Convert RGB from key alpha to premultiplied alpha */
	bool use_premultiply(void);
	/* Flip X: Flip on the X axis */
	bool use_flip_x(void);
	/* Flip Y: Flip on the Y axis */
	bool use_flip_y(void);
	/* Convert Float: Convert input to float data */
	bool use_float(void);
	/* Flip Time: Reverse frame order */
	bool use_reverse_frames(void);
	/* Multiply Colors */
	float color_multiply(void);
	/* Saturation */
	float color_saturation(void);
	/* Strobe: Only display every nth frame */
	float strobe(void);
	/* Use Color Balance: (3-Way color correction) on input */
	bool use_color_balance(void);
	/* Color Balance */
	SequenceColorBalance color_balance(void);
	/* Use Translation: Translate image before processing */
	bool use_translation(void);
	/* Transform */
	SequenceTransform transform(void);
	/* Use Crop: Crop image before processing */
	bool use_crop(void);
	/* Crop */
	SequenceCrop crop(void);
	/* Use Proxy: Use a preview proxy for this strip */
	bool use_proxy(void);
	/* Proxy */
	SequenceProxy proxy(void);
	/* Proxy Custom Directory: Use a custom directory to store data */
	bool use_proxy_custom_directory(void);
	/* Proxy Custom File: Use a custom file to read proxy data from */
	bool use_proxy_custom_file(void);
	/* Animation Start Offset: Animation start offset (trim start) */
	int animation_offset_start(void);
	/* Animation End Offset: Animation end offset (trim end) */
	int animation_offset_end(void);
};

/**************** Scene Sequence ****************/

class SceneSequence : public Sequence {
public:
	SceneSequence(const PointerRNA& ptr) :
		Sequence(ptr)
		{}

	/* Scene: Scene that this sequence uses */
	Scene scene(void);
	/* Camera Override: Override the scenes active camera */
	Object scene_camera(void);
	/* De-Interlace: For video movies to remove fields */
	bool use_deinterlace(void);
	/* Premultiply: Convert RGB from key alpha to premultiplied alpha */
	bool use_premultiply(void);
	/* Flip X: Flip on the X axis */
	bool use_flip_x(void);
	/* Flip Y: Flip on the Y axis */
	bool use_flip_y(void);
	/* Convert Float: Convert input to float data */
	bool use_float(void);
	/* Flip Time: Reverse frame order */
	bool use_reverse_frames(void);
	/* Multiply Colors */
	float color_multiply(void);
	/* Saturation */
	float color_saturation(void);
	/* Strobe: Only display every nth frame */
	float strobe(void);
	/* Use Color Balance: (3-Way color correction) on input */
	bool use_color_balance(void);
	/* Color Balance */
	SequenceColorBalance color_balance(void);
	/* Use Translation: Translate image before processing */
	bool use_translation(void);
	/* Transform */
	SequenceTransform transform(void);
	/* Use Crop: Crop image before processing */
	bool use_crop(void);
	/* Crop */
	SequenceCrop crop(void);
	/* Use Proxy: Use a preview proxy for this strip */
	bool use_proxy(void);
	/* Proxy */
	SequenceProxy proxy(void);
	/* Proxy Custom Directory: Use a custom directory to store data */
	bool use_proxy_custom_directory(void);
	/* Proxy Custom File: Use a custom file to read proxy data from */
	bool use_proxy_custom_file(void);
	/* Animation Start Offset: Animation start offset (trim start) */
	int animation_offset_start(void);
	/* Animation End Offset: Animation end offset (trim end) */
	int animation_offset_end(void);
};

/**************** Movie Sequence ****************/

class MovieSequence : public Sequence {
public:
	MovieSequence(const PointerRNA& ptr) :
		Sequence(ptr),
		elements(ptr)
		{}

	/* MPEG Preseek: For MPEG movies, preseek this many frames */
	int mpeg_preseek(void);
	/* Elements */
	COLLECTION_PROPERTY(SequenceElement, MovieSequence, elements)
	/* File */
	std::string filepath(void);
	/* De-Interlace: For video movies to remove fields */
	bool use_deinterlace(void);
	/* Premultiply: Convert RGB from key alpha to premultiplied alpha */
	bool use_premultiply(void);
	/* Flip X: Flip on the X axis */
	bool use_flip_x(void);
	/* Flip Y: Flip on the Y axis */
	bool use_flip_y(void);
	/* Convert Float: Convert input to float data */
	bool use_float(void);
	/* Flip Time: Reverse frame order */
	bool use_reverse_frames(void);
	/* Multiply Colors */
	float color_multiply(void);
	/* Saturation */
	float color_saturation(void);
	/* Strobe: Only display every nth frame */
	float strobe(void);
	/* Use Color Balance: (3-Way color correction) on input */
	bool use_color_balance(void);
	/* Color Balance */
	SequenceColorBalance color_balance(void);
	/* Use Translation: Translate image before processing */
	bool use_translation(void);
	/* Transform */
	SequenceTransform transform(void);
	/* Use Crop: Crop image before processing */
	bool use_crop(void);
	/* Crop */
	SequenceCrop crop(void);
	/* Use Proxy: Use a preview proxy for this strip */
	bool use_proxy(void);
	/* Proxy */
	SequenceProxy proxy(void);
	/* Proxy Custom Directory: Use a custom directory to store data */
	bool use_proxy_custom_directory(void);
	/* Proxy Custom File: Use a custom file to read proxy data from */
	bool use_proxy_custom_file(void);
	/* Animation Start Offset: Animation start offset (trim start) */
	int animation_offset_start(void);
	/* Animation End Offset: Animation end offset (trim end) */
	int animation_offset_end(void);
};

/**************** Sound Sequence ****************/

class SoundSequence : public Sequence {
public:
	SoundSequence(const PointerRNA& ptr) :
		Sequence(ptr)
		{}

	/* Sound: Sound datablock used by this sequence */
	Sound sound(void);
	/* Volume: Playback volume of the sound */
	float volume(void);
	/* Attenuation/dB: Attenuation in decibel */
	float attenuation(void);
	/* File */
	std::string filepath(void);
	/* Animation Start Offset: Animation start offset (trim start) */
	int animation_offset_start(void);
	/* Animation End Offset: Animation end offset (trim end) */
	int animation_offset_end(void);
};

/**************** Effect Sequence ****************/

class EffectSequence : public Sequence {
public:
	EffectSequence(const PointerRNA& ptr) :
		Sequence(ptr)
		{}

	/* De-Interlace: For video movies to remove fields */
	bool use_deinterlace(void);
	/* Premultiply: Convert RGB from key alpha to premultiplied alpha */
	bool use_premultiply(void);
	/* Flip X: Flip on the X axis */
	bool use_flip_x(void);
	/* Flip Y: Flip on the Y axis */
	bool use_flip_y(void);
	/* Convert Float: Convert input to float data */
	bool use_float(void);
	/* Flip Time: Reverse frame order */
	bool use_reverse_frames(void);
	/* Multiply Colors */
	float color_multiply(void);
	/* Saturation */
	float color_saturation(void);
	/* Strobe: Only display every nth frame */
	float strobe(void);
	/* Use Color Balance: (3-Way color correction) on input */
	bool use_color_balance(void);
	/* Color Balance */
	SequenceColorBalance color_balance(void);
	/* Use Translation: Translate image before processing */
	bool use_translation(void);
	/* Transform */
	SequenceTransform transform(void);
	/* Use Crop: Crop image before processing */
	bool use_crop(void);
	/* Crop */
	SequenceCrop crop(void);
	/* Use Proxy: Use a preview proxy for this strip */
	bool use_proxy(void);
	/* Proxy */
	SequenceProxy proxy(void);
	/* Proxy Custom Directory: Use a custom directory to store data */
	bool use_proxy_custom_directory(void);
	/* Proxy Custom File: Use a custom file to read proxy data from */
	bool use_proxy_custom_file(void);
};

/**************** Multicam Select Sequence ****************/

class MulticamSequence : public Sequence {
public:
	MulticamSequence(const PointerRNA& ptr) :
		Sequence(ptr)
		{}

	/* Multicam Source Channel */
	int multicam_source(void);
	/* De-Interlace: For video movies to remove fields */
	bool use_deinterlace(void);
	/* Premultiply: Convert RGB from key alpha to premultiplied alpha */
	bool use_premultiply(void);
	/* Flip X: Flip on the X axis */
	bool use_flip_x(void);
	/* Flip Y: Flip on the Y axis */
	bool use_flip_y(void);
	/* Convert Float: Convert input to float data */
	bool use_float(void);
	/* Flip Time: Reverse frame order */
	bool use_reverse_frames(void);
	/* Multiply Colors */
	float color_multiply(void);
	/* Saturation */
	float color_saturation(void);
	/* Strobe: Only display every nth frame */
	float strobe(void);
	/* Use Color Balance: (3-Way color correction) on input */
	bool use_color_balance(void);
	/* Color Balance */
	SequenceColorBalance color_balance(void);
	/* Use Translation: Translate image before processing */
	bool use_translation(void);
	/* Transform */
	SequenceTransform transform(void);
	/* Use Crop: Crop image before processing */
	bool use_crop(void);
	/* Crop */
	SequenceCrop crop(void);
	/* Use Proxy: Use a preview proxy for this strip */
	bool use_proxy(void);
	/* Proxy */
	SequenceProxy proxy(void);
	/* Proxy Custom Directory: Use a custom directory to store data */
	bool use_proxy_custom_directory(void);
	/* Proxy Custom File: Use a custom file to read proxy data from */
	bool use_proxy_custom_file(void);
	/* Animation Start Offset: Animation start offset (trim start) */
	int animation_offset_start(void);
	/* Animation End Offset: Animation end offset (trim end) */
	int animation_offset_end(void);
};

/**************** Plugin Sequence ****************/

class PluginSequence : public EffectSequence {
public:
	PluginSequence(const PointerRNA& ptr) :
		EffectSequence(ptr)
		{}

	/* Filename */
	std::string filename(void);
};

/**************** Wipe Sequence ****************/

class WipeSequence : public EffectSequence {
public:
	WipeSequence(const PointerRNA& ptr) :
		EffectSequence(ptr)
		{}

	/* Blur Width: Width of the blur edge, in percentage relative to the image size */
	float blur_width(void);
	/* Angle: Edge angle */
	float angle(void);
	/* Direction: Wipe direction */
	enum direction_enum {
		direction_OUT = 0,
		direction_IN = 1,
	};
	direction_enum direction(void);
	/* Transition Type */
	enum transition_type_enum {
		transition_type_SINGLE = 0,
		transition_type_DOUBLE = 1,
		transition_type_IRIS = 4,
		transition_type_CLOCK = 5,
	};
	transition_type_enum transition_type(void);
};

/**************** Glow Sequence ****************/

class GlowSequence : public EffectSequence {
public:
	GlowSequence(const PointerRNA& ptr) :
		EffectSequence(ptr)
		{}

	/* Threshold: Minimum intensity to trigger a glow */
	float threshold(void);
	/* Clamp: rightness limit of intensity */
	float clamp(void);
	/* Boost Factor: Brightness multiplier */
	float boost_factor(void);
	/* Blur Distance: Radius of glow effect */
	float blur_radius(void);
	/* Quality: Accuracy of the blur effect */
	int quality(void);
	/* Only Boost: Show the glow buffer only */
	bool use_only_boost(void);
};

/**************** Transform Sequence ****************/

class TransformSequence : public EffectSequence {
public:
	TransformSequence(const PointerRNA& ptr) :
		EffectSequence(ptr)
		{}

	/* Scale X */
	float scale_start_x(void);
	/* Scale Y */
	float scale_start_y(void);
	/* Uniform Scale: Scale uniformly, preserving aspect ratio */
	bool use_uniform_scale(void);
	/* Translate X */
	float translate_start_x(void);
	/* Translate Y */
	float translate_start_y(void);
	/* Rotation */
	float rotation_start(void);
	/* Translation Unit */
	enum translation_unit_enum {
		translation_unit_PIXELS = 0,
		translation_unit_PERCENT = 1,
	};
	translation_unit_enum translation_unit(void);
	/* Interpolation */
	enum interpolation_enum {
		interpolation_NONE = 0,
		interpolation_BILINEAR = 1,
		interpolation_BICUBIC = 2,
	};
	interpolation_enum interpolation(void);
};

/**************** Color Sequence ****************/

class ColorSequence : public EffectSequence {
public:
	ColorSequence(const PointerRNA& ptr) :
		EffectSequence(ptr)
		{}

	/* Color */
	Array<float, 3> color(void);
};

/**************** SpeedControl Sequence ****************/

class SpeedControlSequence : public EffectSequence {
public:
	SpeedControlSequence(const PointerRNA& ptr) :
		EffectSequence(ptr)
		{}

	/* Multiply Speed: Multiply the resulting speed after the speed factor */
	float multiply_speed(void);
	/* Use as speed: Interpret the value as speed instead of a frame number */
	bool use_as_speed(void);
	/* Frame Blending: Blend two frames into the target for a smoother result */
	bool use_frame_blend(void);
	/* Scale to length: Scale values from 0.0 to 1.0 to target sequence length */
	bool scale_to_length(void);
};

/**************** Domain Settings ****************/

class SmokeDomainSettings : public Pointer {
public:
	SmokeDomainSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Max Res: Maximal resolution used in the fluid domain */
	int resolution_max(void);
	/* Amplification: Enhance the resolution of smoke by this factor using noise */
	int amplify(void);
	/* High res: Enable high resolution (using amplification) */
	bool use_high_resolution(void);
	/* Show High Resolution: Show high resolution (using amplification) */
	bool show_high_resolution(void);
	/* Noise Method: Noise method which is used for creating the high resolution */
	enum noise_type_enum {
		noise_type_NOISEWAVE = 1,
	};
	noise_type_enum noise_type(void);
	/* Density: How much density effects smoke motion, higher value results in faster rising smoke */
	float alpha(void);
	/* Heat: How much heat effects smoke motion, higher value results in faster rising smoke */
	float beta(void);
	/* Collision Group: Limit collisions to this group */
	Group collision_group(void);
	/* Fluid Group: Limit fluid objects to this group */
	Group fluid_group(void);
	/* Effector Group: Limit effectors to this group */
	Group effector_group(void);
	/* Strength: Strength of wavelet noise */
	float strength(void);
	/* Dissolve Speed: Dissolve Speed */
	int dissolve_speed(void);
	/* Dissolve Smoke: Enable smoke to disappear over time */
	bool use_dissolve_smoke(void);
	/* Logarithmic dissolve: Using 1/x  */
	bool use_dissolve_smoke_log(void);
	/* Point Cache */
	PointCache point_cache(void);
	/* Cache Compression: Compression method to be used */
	enum point_cache_compress_type_enum {
		point_cache_compress_type_CACHELIGHT = 0,
		point_cache_compress_type_CACHEHEAVY = 1,
	};
	point_cache_compress_type_enum point_cache_compress_type(void);
	/* Border Collisions: Selects which domain border will be treated as collision object. */
	enum collision_extents_enum {
		collision_extents_BORDEROPEN = 0,
		collision_extents_BORDERVERTICAL = 1,
		collision_extents_BORDERCLOSED = 2,
	};
	collision_extents_enum collision_extents(void);
	/* Effector Weights */
	EffectorWeights effector_weights(void);
	/* Smooth Emitter: Smoothens emitted smoke to avoid blockiness. */
	bool smooth_emitter(void);
	/* Time Scale: Adjust simulation speed. */
	float time_scale(void);
	/* Vorticity: Amount of turbulence/rotation in fluid. */
	float vorticity(void);
};

/**************** Flow Settings ****************/

class SmokeFlowSettings : public Pointer {
public:
	SmokeFlowSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Density */
	float density(void);
	/* Temp. Diff.: Temperature difference to ambient temperature */
	float temperature(void);
	/* Particle Systems: Particle systems emitted from the object */
	ParticleSystem particle_system(void);
	/* Outflow: Deletes smoke from simulation */
	bool use_outflow(void);
	/* Absolute Density: Only allows given density value in emitter area. */
	bool use_absolute(void);
	/* Initial Velocity: Smoke inherits it's velocity from the emitter particle */
	bool initial_velocity(void);
	/* Multiplier: Multiplier to adjust velocity passed to smoke */
	float velocity_factor(void);
};

/**************** Collision Settings ****************/

class SmokeCollSettings : public Pointer {
public:
	SmokeCollSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Space ****************/

class Space : public Pointer {
public:
	Space(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Type: Space data type */
	enum type_enum {
		type_EMPTY = 0,
		type_VIEW_3D = 1,
		type_GRAPH_EDITOR = 2,
		type_OUTLINER = 3,
		type_PROPERTIES = 4,
		type_FILE_BROWSER = 5,
		type_IMAGE_EDITOR = 6,
		type_INFO = 7,
		type_SEQUENCE_EDITOR = 8,
		type_TEXT_EDITOR = 9,
		type_AUDIO_WINDOW = 11,
		type_DOPESHEET_EDITOR = 12,
		type_NLA_EDITOR = 13,
		type_SCRIPTS_WINDOW = 14,
		type_TIMELINE = 15,
		type_NODE_EDITOR = 16,
		type_LOGIC_EDITOR = 17,
		type_CONSOLE = 18,
		type_USER_PREFERENCES = 19,
	};
	type_enum type(void);
};

/**************** Space Image Editor ****************/

class SpaceImageEditor : public Space {
public:
	SpaceImageEditor(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Image: Image displayed and edited in this space */
	Image image(void);
	/* Image User: Parameters defining which layer, pass and frame of the image is displayed */
	ImageUser image_user(void);
	/* Curves: Color curve mapping to use for displaying the image */
	CurveMapping curves(void);
	/* Scopes: Scopes to visualize image statistics. */
	Scopes scopes(void);
	/* Image Pin: Display current image regardless of object selection */
	bool use_image_pin(void);
	/* Line sample: Sampled colors along line */
	Histogram sample_histogram(void);
	/* Draw Repeated: Draw the image repeated outside of the main view */
	bool show_repeat(void);
	/* Draw Channels: Channels of the image to draw */
	enum draw_channels_enum {
		draw_channels_COLOR = 0,
		draw_channels_COLOR_ALPHA = 4096,
		draw_channels_ALPHA = 8192,
		draw_channels_Z_BUFFER = 16384,
	};
	draw_channels_enum draw_channels(void);
	/* UV Editor: UV editor settings */
	SpaceUVEditor uv_editor(void);
	/* Image Painting: Enable image painting mode */
	bool use_image_paint(void);
	/* Grease Pencil: Grease pencil data for this space */
	GreasePencil grease_pencil(void);
	/* Use Grease Pencil: Display and edit the grease pencil freehand annotations overlay */
	bool use_grease_pencil(void);
	/* Update Automatically: Update other affected window spaces automatically to reflect changes during interactive operations such as transform */
	bool use_realtime_update(void);
	/* Show Render: Show render related properties */
	bool show_render(void);
	/* Show Paint: Show paint related properties */
	bool show_paint(void);
	/* Show UV Editor: Show UV editing related properties */
	bool show_uvedit(void);
};

/**************** Space UV Editor ****************/

class SpaceUVEditor : public Pointer {
public:
	SpaceUVEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Sticky Selection Mode: Automatically select also UVs sharing the same vertex as the ones being selected */
	enum sticky_select_mode_enum {
		sticky_select_mode_DISABLED = 1,
		sticky_select_mode_SHARED_LOCATION = 0,
		sticky_select_mode_SHARED_VERTEX = 2,
	};
	sticky_select_mode_enum sticky_select_mode(void);
	/* Edge Draw Type: Draw type for drawing UV edges */
	enum edge_draw_type_enum {
		edge_draw_type_OUTLINE = 0,
		edge_draw_type_DASH = 1,
		edge_draw_type_BLACK = 2,
		edge_draw_type_WHITE = 3,
	};
	edge_draw_type_enum edge_draw_type(void);
	/* Draw Smooth Edges: Draw UV edges anti-aliased */
	bool show_smooth_edges(void);
	/* Draw Stretch: Draw faces colored according to the difference in shape between UVs and their 3D coordinates (blue for low distortion, red for high distortion) */
	bool show_stretch(void);
	/* Draw Stretch Type: Type of stretch to draw */
	enum draw_stretch_type_enum {
		draw_stretch_type_ANGLE = 0,
		draw_stretch_type_AREA = 1,
	};
	draw_stretch_type_enum draw_stretch_type(void);
	/* Draw Modified Edges: Draw edges after modifiers are applied */
	bool show_modified_edges(void);
	/* Draw Other Objects: Draw other selected objects that share the same image */
	bool show_other_objects(void);
	/* Normalized Coordinates: Display UV coordinates from 0.0 to 1.0 rather than in pixels */
	bool show_normalized_coords(void);
	/* 2D Cursor Location: 2D cursor location for this view */
	Array<float, 2> cursor_location(void);
	/* Snap to Pixels: Snap UVs to pixel locations while editing */
	bool use_snap_to_pixels(void);
	/* Constrain to Image Bounds: Constraint to stay within the image bounds while editing */
	bool lock_bounds(void);
	/* Live Unwrap: Continuously unwrap the selected UV island while transforming pinned vertices */
	bool use_live_unwrap(void);
	/* Pivot: Rotation/Scaling Pivot */
	enum pivot_point_enum {
		pivot_point_CENTER = 0,
		pivot_point_MEDIAN = 3,
		pivot_point_CURSOR = 1,
	};
	pivot_point_enum pivot_point(void);
};

/**************** Space Sequence Editor ****************/

class SpaceSequenceEditor : public Space {
public:
	SpaceSequenceEditor(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* View Type: The type of the Sequencer view (sequencer, preview or both) */
	enum view_type_enum {
		view_type_SEQUENCER = 1,
		view_type_PREVIEW = 2,
		view_type_SEQUENCER_PREVIEW = 3,
	};
	view_type_enum view_type(void);
	/* Display Mode: The view mode to use for displaying sequencer output */
	enum display_mode_enum {
		display_mode_IMAGE = 1,
		display_mode_WAVEFORM = 2,
		display_mode_VECTOR_SCOPE = 3,
		display_mode_HISTOGRAM = 4,
	};
	display_mode_enum display_mode(void);
	/* Show Frame Number Indicator: Show frame number beside the current frame indicator line */
	bool show_frame_indicator(void);
	/* Draw Frames: Draw frames rather than seconds */
	bool show_frames(void);
	/* Transform Markers: Transform markers as well as strips */
	bool use_marker_sync(void);
	/* Separate Colors: Separate color channels in preview */
	bool show_separate_color(void);
	/* Safe Margin: Draw title safe margins in preview */
	bool show_safe_margin(void);
	/* Use Grease Pencil: Display and edit the grease pencil freehand annotations overlay */
	bool use_grease_pencil(void);
	/* Grease Pencil: Grease pencil data for this space */
	UnknownType grease_pencil(void);
	/* Display Channel: The channel number shown in the image preview. 0 is the result of all strips combined */
	int display_channel(void);
	/* Show Overexposed: Show overexposed areas with zebra stripes */
	int draw_overexposed(void);
	/* Proxy render size: Draw preview using full resolution or different proxy resolutions */
	enum proxy_render_size_enum {
		proxy_render_size_NONE = -1,
		proxy_render_size_SCENE = 0,
		proxy_render_size_PROXY_25 = 25,
		proxy_render_size_PROXY_50 = 50,
		proxy_render_size_PROXY_75 = 75,
		proxy_render_size_FULL = 100,
	};
	proxy_render_size_enum proxy_render_size(void);
	/* X Offset: Offsets image horizontally from the view center */
	float offset_x(void);
	/* Y Offset: Offsets image horizontally from the view center */
	float offset_y(void);
	/* Zoom: Display zoom level */
	float zoom(void);
};

/**************** Space Text Editor ****************/

class SpaceTextEditor : public Space {
public:
	SpaceTextEditor(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Text: Text displayed and edited in this space */
	Text text(void);
	/* Word Wrap: Wrap words if there is not enough horizontal space */
	bool show_word_wrap(void);
	/* Line Numbers: Show line numbers next to the text */
	bool show_line_numbers(void);
	/* Syntax Highlight: Syntax highlight for scripting */
	bool show_syntax_highlight(void);
	/* Highlight Line: Highlight the current line */
	bool show_line_highlight(void);
	/* Tab Width: Number of spaces to display tabs with */
	int tab_width(void);
	/* Font Size: Font size to use for displaying the text */
	int font_size(void);
	/* Show Margin: Show right margin */
	bool show_margin(void);
	/* Margin Column: Column number to show right margin at */
	int margin_column(void);
	/* Overwrite: Overwrite characters when typing rather than inserting them */
	bool use_overwrite(void);
	/* Live Edit: Run python while editing */
	bool use_live_edit(void);
	/* Find All: Search in all text datablocks, instead of only the active one */
	bool use_find_all(void);
	/* Find Wrap: Search again from the start of the file when reaching the end */
	bool use_find_wrap(void);
	/* Find Text: Text to search for with the find tool */
	std::string find_text(void);
	/* Replace Text: Text to replace selected text with using the replace tool */
	std::string replace_text(void);
};

/**************** File Select Parameters ****************/

class FileSelectParams : public Pointer {
public:
	FileSelectParams(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Title: Title for the file browser */
	std::string title(void);
	/* Directory: Directory displayed in the file browser */
	std::string directory(void);
	/* File Name: Active file in the file browser */
	std::string filename(void);
	/* Display Mode: Display mode for the file list */
	enum display_type_enum {
		display_type_FILE_SHORTDISPLAY = 1,
		display_type_FILE_LONGDISPLAY = 2,
		display_type_FILE_IMGDISPLAY = 3,
	};
	display_type_enum display_type(void);
	/* Filter Files: Enable filtering of files */
	bool use_filter(void);
	/* Show Hidden: Show hidden dot files */
	bool show_hidden(void);
	/* Sort */
	enum sort_method_enum {
		sort_method_FILE_SORT_ALPHA = 1,
		sort_method_FILE_SORT_EXTENSION = 2,
		sort_method_FILE_SORT_TIME = 3,
		sort_method_FILE_SORT_SIZE = 4,
	};
	sort_method_enum sort_method(void);
	/* Filter Images: Show image files */
	bool use_filter_image(void);
	/* Filter Blender: Show .blend files */
	bool use_filter_blender(void);
	/* Filter Movies: Show movie files */
	bool use_filter_movie(void);
	/* Filter Script: Show script files */
	bool use_filter_script(void);
	/* Filter Fonts: Show font files */
	bool use_filter_font(void);
	/* Filter Sound: Show sound files */
	bool use_filter_sound(void);
	/* Filter Text: Show text files */
	bool use_filter_text(void);
	/* Filter Folder: Show folders */
	bool use_filter_folder(void);
	/* Extension Filter */
	std::string filter_glob(void);
};

/**************** Space File Browser ****************/

class SpaceFileBrowser : public Space {
public:
	SpaceFileBrowser(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Filebrowser Parameter: Parameters and Settings for the Filebrowser */
	FileSelectParams params(void);
	/* Operator */
	Operator operator(void);
};

/**************** Space Outliner ****************/

class SpaceOutliner : public Space {
public:
	SpaceOutliner(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Display Mode: Type of information to display */
	enum display_mode_enum {
		display_mode_ALL_SCENES = 0,
		display_mode_CURRENT_SCENE = 1,
		display_mode_VISIBLE_LAYERS = 2,
		display_mode_SELECTED = 3,
		display_mode_ACTIVE = 4,
		display_mode_SAME_TYPES = 5,
		display_mode_GROUPS = 6,
		display_mode_LIBRARIES = 7,
		display_mode_SEQUENCE = 10,
		display_mode_DATABLOCKS = 11,
		display_mode_USER_PREFERENCES = 12,
		display_mode_KEYMAPS = 13,
	};
	display_mode_enum display_mode(void);
	/* Display Filter: Live search filtering string */
	std::string filter_text(void);
	/* Case Sensitive Matches Only: Only use case sensitive matches of search string */
	bool use_filter_case_sensitive(void);
	/* Complete Matches Only: Only use complete matches of search string */
	bool use_filter_complete(void);
	/* Show Restriction Columns: Show column */
	bool show_restrict_columns(void);
};

/**************** Background Image ****************/

class BackgroundImage : public Pointer {
public:
	BackgroundImage(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Image: Image displayed and edited in this space */
	Image image(void);
	/* Image User: Parameters defining which layer, pass and frame of the image is displayed */
	ImageUser image_user(void);
	/* X Offset: Offsets image horizontally from the world origin */
	float offset_x(void);
	/* Y Offset: Offsets image vertically from the world origin */
	float offset_y(void);
	/* Size: Scaling factor for the background image */
	float size(void);
	/* Opacity: Image opacity to blend the image against the background color */
	float opacity(void);
	/* Image Axis: The axis to display the image on */
	enum view_axis_enum {
		view_axis_LEFT = 8,
		view_axis_RIGHT = 16,
		view_axis_BACK = 4,
		view_axis_FRONT = 2,
		view_axis_BOTTOM = 64,
		view_axis_TOP = 32,
		view_axis_ALL = 0,
		view_axis_CAMERA = 256,
	};
	view_axis_enum view_axis(void);
	/* Show Expanded: Show the expanded in the user interface */
	bool show_expanded(void);
};

/**************** 3D View Space ****************/

class SpaceView3D : public Space {
public:
	SpaceView3D(const PointerRNA& ptr) :
		Space(ptr),
		background_images(ptr)
		{}

	/* Camera: Active camera used in this view (when unlocked from the scene's active camera) */
	Object camera(void);
	/* Lock to Object: 3D View center is locked to this object's position */
	Object lock_object(void);
	/* Lock to Bone: 3D View center is locked to this bone's position */
	std::string lock_bone(void);
	/* Lock to Cursor: 3D View center is locked to the cursor's position */
	bool lock_cursor(void);
	/* Viewport Shading: Method to display/shade objects in the 3D View */
	enum viewport_shade_enum {
		viewport_shade_BOUNDBOX = 1,
		viewport_shade_WIREFRAME = 2,
		viewport_shade_SOLID = 3,
		viewport_shade_TEXTURED = 5,
	};
	viewport_shade_enum viewport_shade(void);
	/* Local View: Display an isolated sub-set of objects, apart from the scene visibility */
	SpaceView3D local_view(void);
	/* 3D Cursor Location: 3D cursor location for this view (dependent on local view setting) */
	Array<float, 3> cursor_location(void);
	/* Lens: Lens angle (mm) in perspective view */
	float lens(void);
	/* Clip Start: 3D View near clipping distance */
	float clip_start(void);
	/* Clip End: 3D View far clipping distance */
	float clip_end(void);
	/* Grid Scale: The distance between 3D View grid lines */
	float grid_scale(void);
	/* Grid Lines: The number of grid lines to display in perspective view */
	int grid_lines(void);
	/* Grid Subdivisions: The number of subdivisions between grid lines */
	int grid_subdivisions(void);
	/* Display Grid Floor: Show the ground plane grid in perspective view */
	bool show_floor(void);
	/* Display X Axis: Show the X axis line in perspective view */
	bool show_axis_x(void);
	/* Display Y Axis: Show the Y axis line in perspective view */
	bool show_axis_y(void);
	/* Display Z Axis: Show the Z axis line in perspective view */
	bool show_axis_z(void);
	/* Outline Selected: Show an outline highlight around selected objects in non-wireframe views */
	bool show_outline_selected(void);
	/* All Object Origins: Show the object origin center dot for all (selected and unselected) objects */
	bool show_all_objects_origin(void);
	/* Relationship Lines: Show dashed lines indicating parent or constraint relationships */
	bool show_relationship_lines(void);
	/* Textured Solid: Display face-assigned textures in solid view */
	bool show_textured_solid(void);
	/* Only Render: Display only objects which will be rendered */
	bool show_only_render(void);
	/* Occlude Geometry: Limit selection to visible (clipped with depth buffer) */
	bool use_occlude_geometry(void);
	/* Background Images: List of background images */
	COLLECTION_PROPERTY(BackgroundImage, SpaceView3D, background_images)
	/* Display Background Images: Display reference images behind objects in the 3D View */
	bool show_background_images(void);
	/* Pivot Point: Pivot center for rotation/scaling */
	enum pivot_point_enum {
		pivot_point_BOUNDING_BOX_CENTER = 0,
		pivot_point_CURSOR = 1,
		pivot_point_INDIVIDUAL_ORIGINS = 2,
		pivot_point_MEDIAN_POINT = 3,
		pivot_point_ACTIVE_ELEMENT = 4,
	};
	pivot_point_enum pivot_point(void);
	/* Align: Manipulate object centers only */
	bool use_pivot_point_align(void);
	/* Manipulator: Use a 3D manipulator widget for controlling transforms */
	bool show_manipulator(void);
	/* Manipulator Translate: Use the manipulator for movement transformations */
	bool use_manipulator_translate(void);
	/* Manipulator Rotate: Use the manipulator for rotation transformations */
	bool use_manipulator_rotate(void);
	/* Manipulator Scale: Use the manipulator for scale transformations */
	bool use_manipulator_scale(void);
	/* Transform Orientation: Transformation orientation */
	enum transform_orientation_enum {
		transform_orientation_GLOBAL = 0,
		transform_orientation_LOCAL = 1,
		transform_orientation_GIMBAL = 4,
		transform_orientation_NORMAL = 2,
		transform_orientation_VIEW = 3,
		transform_orientation_CUSTOM = 5,
	};
	transform_orientation_enum transform_orientation(void);
	/* Current Transform Orientation: Current Transformation orientation */
	TransformOrientation current_orientation(void);
	/* Lock Camera and Layers: Use the scene's active camera and layers in this view, rather than local layers */
	bool lock_camera_and_layers(void);
	/* Visible Layers: Layers visible in this 3D View */
	Array<int, 20> layers(void);
	/* Used Layers: Layers that contain something */
	Array<int, 20> layers_used(void);
	/* 3D Region: 3D region in this space, in case of quad view the camera region */
	RegionView3D region_3d(void);
	/* Quad View Region: 3D region that defines the quad view settings */
	RegionView3D region_quadview(void);
};

/**************** 3D View Region ****************/

class RegionView3D : public Pointer {
public:
	RegionView3D(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Lock: Lock view rotation in side views */
	bool lock_rotation(void);
	/* Box: Sync view position between side views */
	bool show_sync_view(void);
	/* Clip: Clip objects based on what's visible in other side views */
	bool use_box_clip(void);
	/* Perspective Matrix: Current perspective matrix of the 3D region */
	Array<float, 16> perspective_matrix(void);
	/* View Matrix: Current view matrix of the 3D region */
	Array<float, 16> view_matrix(void);
	/* Perspective: View Perspective */
	enum view_perspective_enum {
		view_perspective_PERSP = 1,
		view_perspective_ORTHO = 0,
		view_perspective_CAMERA = 2,
	};
	view_perspective_enum view_perspective(void);
	/* View Location: View pivot location */
	Array<float, 3> view_location(void);
	/* View Rotation: Rotation in quaternions (keep normalized) */
	Array<float, 4> view_rotation(void);
	/* Distance: Distance to the view location */
	float view_distance(void);
};

/**************** Properties Space ****************/

class SpaceProperties : public Space {
public:
	SpaceProperties(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Context: Type of active data to display and edit */
	enum context_enum {
		context_SCENE = 1,
		context_RENDER = 0,
		context_WORLD = 2,
		context_OBJECT = 3,
		context_CONSTRAINT = 12,
		context_MODIFIER = 10,
		context_DATA = 4,
		context_BONE = 9,
		context_BONE_CONSTRAINT = 13,
		context_MATERIAL = 5,
		context_TEXTURE = 6,
		context_PARTICLE = 7,
		context_PHYSICS = 8,
	};
	context_enum context(void);
	/* Align: Arrangement of the panels */
	enum align_enum {
		align_HORIZONTAL = 1,
		align_VERTICAL = 2,
	};
	align_enum align(void);
	/* Texture Context: Type of texture data to display and edit */
	enum texture_context_enum {
		texture_context_MATERIAL = 0,
	};
	texture_context_enum texture_context(void);
	/* pin_id */
	ID pin_id(void);
	/* Pin ID: Use the pinned context */
	bool use_pin_id(void);
};

/**************** Space DopeSheet Editor ****************/

class SpaceDopeSheetEditor : public Space {
public:
	SpaceDopeSheetEditor(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Action: Action displayed and edited in this space */
	Action action(void);
	/* Mode: Editing context being displayed */
	enum mode_enum {
		mode_DOPESHEET = 3,
		mode_ACTION = 0,
		mode_SHAPEKEY = 1,
		mode_GPENCIL = 2,
	};
	mode_enum mode(void);
	/* Show Seconds: Show timing in seconds not frames */
	bool show_seconds(void);
	/* Show Frame Number Indicator: Show frame number beside the current frame indicator line */
	bool show_frame_indicator(void);
	/* Show Sliders: Show sliders beside F-Curve channels */
	bool show_sliders(void);
	/* Show Pose Markers: Show markers belonging to the active action instead of Scene markers (Action and Shape Key Editors only) */
	bool show_pose_markers(void);
	/* AutoMerge Keyframes: Automatically merge nearby keyframes */
	bool use_auto_merge_keyframes(void);
	/* Realtime Updates: When transforming keyframes, changes to the animation data are flushed to other views */
	bool use_realtime_update(void);
	/* Sync Markers: Sync Markers with keyframe edits */
	bool use_marker_sync(void);
	/* DopeSheet: Settings for filtering animation data */
	DopeSheet dopesheet(void);
	/* Auto Snap: Automatic time snapping settings for transformations */
	enum auto_snap_enum {
		auto_snap_NONE = 0,
		auto_snap_STEP = 1,
		auto_snap_FRAME = 2,
		auto_snap_MARKER = 3,
	};
	auto_snap_enum auto_snap(void);
};

/**************** Space Graph Editor ****************/

class SpaceGraphEditor : public Space {
public:
	SpaceGraphEditor(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Mode: Editing context being displayed */
	enum mode_enum {
		mode_FCURVES = 0,
		mode_DRIVERS = 1,
	};
	mode_enum mode(void);
	/* Show Seconds: Show timing in seconds not frames */
	bool show_seconds(void);
	/* Show Frame Number Indicator: Show frame number beside the current frame indicator line */
	bool show_frame_indicator(void);
	/* Show Sliders: Show sliders beside F-Curve channels */
	bool show_sliders(void);
	/* Show Handles: Show handles of Bezier control points */
	bool show_handles(void);
	/* Only Selected Curve Keyframes: Only keyframes of selected F-Curves are visible and editable */
	bool use_only_selected_curves_handles(void);
	/* Only Selected Keyframes Handles: Only show and edit handles of selected keyframes */
	bool use_only_selected_keyframe_handles(void);
	/* Use Fancy Drawing: Draw F-Curves using Anti-Aliasing and other fancy effects. Disable for better performance */
	bool use_fancy_drawing(void);
	/* AutoMerge Keyframes: Automatically merge nearby keyframes */
	bool use_auto_merge_keyframes(void);
	/* Realtime Updates: When transforming keyframes, changes to the animation data are flushed to other views */
	bool use_realtime_update(void);
	/* Show Cursor: Show 2D cursor */
	bool show_cursor(void);
	/* Cursor Y-Value: Graph Editor 2D-Value cursor - Y-Value component */
	float cursor_position_y(void);
	/* Pivot Point: Pivot center for rotation/scaling */
	enum pivot_point_enum {
		pivot_point_BOUNDING_BOX_CENTER = 0,
		pivot_point_CURSOR = 1,
		pivot_point_INDIVIDUAL_ORIGINS = 2,
	};
	pivot_point_enum pivot_point(void);
	/* DopeSheet: Settings for filtering animation data */
	DopeSheet dopesheet(void);
	/* Auto Snap: Automatic time snapping settings for transformations */
	enum auto_snap_enum {
		auto_snap_NONE = 0,
		auto_snap_STEP = 1,
		auto_snap_FRAME = 2,
		auto_snap_MARKER = 3,
	};
	auto_snap_enum auto_snap(void);
	/* Has Ghost Curves: Graph Editor instance has some ghost curves stored */
	bool has_ghost_curves(void);
};

/**************** Space Nla Editor ****************/

class SpaceNLA : public Space {
public:
	SpaceNLA(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Show Seconds: Show timing in seconds not frames */
	bool show_seconds(void);
	/* Show Frame Number Indicator: Show frame number beside the current frame indicator line */
	bool show_frame_indicator(void);
	/* Show Control Curves: Show influence curves on strips */
	bool show_strip_curves(void);
	/* Realtime Updates: When transforming strips, changes to the animation data are flushed to other views */
	bool use_realtime_update(void);
	/* DopeSheet: Settings for filtering animation data */
	DopeSheet dopesheet(void);
	/* Auto Snap: Automatic time snapping settings for transformations */
	enum auto_snap_enum {
		auto_snap_NONE = 0,
		auto_snap_STEP = 1,
		auto_snap_FRAME = 2,
		auto_snap_MARKER = 3,
	};
	auto_snap_enum auto_snap(void);
};

/**************** Space Timeline Editor ****************/

class SpaceTimeline : public Space {
public:
	SpaceTimeline(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Only Selected channels: Show keyframes for active Object and/or its selected channels only */
	bool show_only_selected(void);
	/* Show Frame Number Indicator: Show frame number beside the current frame indicator line */
	bool show_frame_indicator(void);
	/* Show Cache: Show the status of cached frames in the timeline */
	bool show_cache(void);
	/* Softbody: Show the active object's softbody point cache */
	bool cache_softbody(void);
	/* Particles: Show the active object's particle point cache */
	bool cache_particles(void);
	/* Cloth: Show the active object's cloth point cache */
	bool cache_cloth(void);
	/* Smoke: Show the active object's smoke cache */
	bool cache_smoke(void);
};

/**************** Space Console ****************/

class SpaceConsole : public Space {
public:
	SpaceConsole(const PointerRNA& ptr) :
		Space(ptr),
		history(ptr),
		scrollback(ptr)
		{}

	/* Font Size: Font size to use for displaying the text */
	int font_size(void);
	/* select_start */
	int select_start(void);
	/* select_end */
	int select_end(void);
	/* Prompt: Command line prompt */
	std::string prompt(void);
	/* Language: Command line prompt language */
	std::string language(void);
	/* History: Command history */
	COLLECTION_PROPERTY(ConsoleLine, SpaceConsole, history)
	/* Output: Command output */
	COLLECTION_PROPERTY(ConsoleLine, SpaceConsole, scrollback)
};

/**************** Console Input ****************/

class ConsoleLine : public Pointer {
public:
	ConsoleLine(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Line: Text in the line */
	std::string body(void);
	/* current_character */
	int current_character(void);
};

/**************** Space Info ****************/

class SpaceInfo : public Space {
public:
	SpaceInfo(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Show Debug: Display debug reporting info */
	bool show_report_debug(void);
	/* Show Info: Display general information */
	bool show_report_info(void);
	/* Show Operator: Display the operator log */
	bool show_report_operator(void);
	/* Show Warn: Display warnings */
	bool show_report_warning(void);
	/* Show Error: Display error text */
	bool show_report_error(void);
};

/**************** Space User Preferences ****************/

class SpaceUserPreferences : public Space {
public:
	SpaceUserPreferences(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Filter: Search term for filtering in the UI */
	std::string filter_text(void);
};

/**************** Space Node Editor ****************/

class SpaceNodeEditor : public Space {
public:
	SpaceNodeEditor(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Tree Type: Node tree type to display and edit */
	enum tree_type_enum {
		tree_type_MATERIAL = 0,
		tree_type_TEXTURE = 2,
		tree_type_COMPOSITING = 1,
	};
	tree_type_enum tree_type(void);
	/* Texture Type: Type of data to take texture from */
	enum texture_type_enum {
		texture_type_OBJECT = 0,
		texture_type_WORLD = 1,
		texture_type_BRUSH = 2,
	};
	texture_type_enum texture_type(void);
	/* ID: Datablock whose nodes are being edited */
	ID id(void);
	/* ID From: Datablock from which the edited datablock is linked */
	ID id_from(void);
	/* Node Tree: Node tree being displayed and edited */
	NodeTree node_tree(void);
	/* Backdrop: Use active Viewer Node output as backdrop for compositing nodes */
	bool show_backdrop(void);
	/* Auto Render: Re-render and composite changed layer on 3D edits */
	bool use_auto_render(void);
	/* Backdrop Zoom: Backdrop zoom factor */
	float backdrop_zoom(void);
	/* Backdrop X: Backdrop X offset */
	float backdrop_x(void);
	/* Backdrop Y: Backdrop Y offset */
	float backdrop_y(void);
	/* Draw Channels: Channels of the image to draw */
	enum backdrop_channels_enum {
		backdrop_channels_COLOR = 0,
		backdrop_channels_COLOR_ALPHA = 8,
		backdrop_channels_ALPHA = 16,
	};
	backdrop_channels_enum backdrop_channels(void);
};

/**************** Space Logic Editor ****************/

class SpaceLogicEditor : public Space {
public:
	SpaceLogicEditor(const PointerRNA& ptr) :
		Space(ptr)
		{}

	/* Show Selected Object: Show sensors of all selected objects */
	bool show_sensors_selected_objects(void);
	/* Show Active Object: Show sensors of active object */
	bool show_sensors_active_object(void);
	/* Show Linked to Controller: Show linked objects to the controller */
	bool show_sensors_linked_controller(void);
	/* Show Active States: Show only sensors connected to active states */
	bool show_sensors_active_states(void);
	/* Show Selected Object: Show controllers of all selected objects */
	bool show_controllers_selected_objects(void);
	/* Show Active Object: Show controllers of active object */
	bool show_controllers_active_object(void);
	/* Show Linked to Controller: Show linked objects to sensor/actuator */
	bool show_controllers_linked_controller(void);
	/* Show Selected Object: Show actuators of all selected objects */
	bool show_actuators_selected_objects(void);
	/* Show Active Object: Show actuators of active object */
	bool show_actuators_active_object(void);
	/* Show Linked to Actuator: Show linked objects to the actuator */
	bool show_actuators_linked_controller(void);
	/* Show Active States: Show only actuators connected to active states */
	bool show_actuators_active_states(void);
};

/**************** Text Line ****************/

class TextLine : public Pointer {
public:
	TextLine(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Line: Text in the line */
	std::string body(void);
};

/**************** Text Marker ****************/

class TextMarker : public Pointer {
public:
	TextMarker(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Line: Line in which the marker is located */
	int line(void);
	/* Start: Start position of the marker in the line */
	int character_index_start(void);
	/* End: Start position of the marker in the line */
	int character_index_end(void);
	/* Group */
	int group(void);
	/* Temporary: Marker is temporary */
	bool is_temporary(void);
	/* Edit All: Edit all markers of the same group as one */
	bool use_edit_all(void);
	/* Color: Color to display the marker with */
	Array<float, 4> color(void);
};

/**************** Text ****************/

class Text : public ID {
public:
	Text(const PointerRNA& ptr) :
		ID(ptr),
		lines(ptr),
		markers(ptr)
		{}

	/* File Path: Filename of the text file */
	std::string filepath(void);
	/* Dirty: Text file has been edited since last save */
	bool is_dirty(void);
	/* Modified: Text file on disk is different than the one in memory */
	bool is_modified(void);
	/* Memory: Text file is in memory, without a corresponding file on disk */
	bool is_in_memory(void);
	/* Register: Register this text as a module on loading, Text name must end with ".py" */
	bool use_module(void);
	/* Tabs as Spaces: Automatically converts all new tabs into spaces */
	bool use_tabs_as_spaces(void);
	/* Lines: Lines of text */
	COLLECTION_PROPERTY(TextLine, Text, lines)
	/* Current Line: Current line, and start line of selection if one exists */
	TextLine current_line(void);
	/* Current Character: Index of current character in current line, and also start index of character in selection if one exists */
	int current_character(void);
	/* Selection End Line: End line of selection */
	TextLine select_end_line(void);
	/* Selection End Character: Index of character after end of selection in the selection end line */
	int select_end_character(void);
	/* Markers: Text markers highlighting part of the text */
	COLLECTION_PROPERTY(TextMarker, Text, markers)
};

/**************** Marker ****************/

class TimelineMarker : public Pointer {
public:
	TimelineMarker(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Frame: The frame on which the timeline marker appears */
	int frame(void);
	/* Select: Marker selection state */
	bool select(void);
	/* Camera: Camera this timeline sets to active */
	Object camera(void);
};

/**************** Sound ****************/

class Sound : public ID {
public:
	Sound(const PointerRNA& ptr) :
		ID(ptr)
		{}

	/* File Path: Sound sample file used by this Sound datablock */
	std::string filepath(void);
	/* Packed File */
	PackedFile packed_file(void);
	/* Caching: The sound file is decoded and loaded into RAM */
	bool use_memory_cache(void);
};

/**************** UI Layout ****************/

class UILayout : public Pointer {
public:
	UILayout(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* active */
	bool active(void);
	/* operator_context */
	enum operator_context_enum {
		operator_context_INVOKE_DEFAULT = 0,
		operator_context_INVOKE_REGION_WIN = 1,
		operator_context_INVOKE_REGION_CHANNELS = 2,
		operator_context_INVOKE_REGION_PREVIEW = 3,
		operator_context_INVOKE_AREA = 4,
		operator_context_INVOKE_SCREEN = 5,
		operator_context_EXEC_DEFAULT = 6,
		operator_context_EXEC_REGION_WIN = 7,
		operator_context_EXEC_REGION_CHANNELS = 8,
		operator_context_EXEC_REGION_PREVIEW = 9,
		operator_context_EXEC_AREA = 10,
		operator_context_EXEC_SCREEN = 11,
	};
	operator_context_enum operator_context(void);
	/* Enabled: When false, this (sub)layout is greyed out. */
	bool enabled(void);
	/* alert */
	bool alert(void);
	/* alignment */
	enum alignment_enum {
		alignment_EXPAND = 0,
		alignment_LEFT = 1,
		alignment_CENTER = 2,
		alignment_RIGHT = 3,
	};
	alignment_enum alignment(void);
	/* Scale X: Scale factor along the X for items in this (sub)layout. */
	float scale_x(void);
	/* Scale Y: Scale factor along the Y for items in this (sub)layout. */
	float scale_y(void);
};

/**************** Panel ****************/

class Panel : public Pointer {
public:
	Panel(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Layout: Defines the structure of the panel in the UI. */
	UILayout layout(void);
	/* Text: XXX todo */
	std::string text(void);
	/* ID Name: If this is set, the panel gets a custom ID, otherwise it takes the name of the class used to define the panel. For example, if the class name is "OBJECT_PT_hello", and bl_idname is not set by the script, then bl_idname = "OBJECT_PT_hello" */
	std::string bl_idname(void);
	/* Label: The panel label, shows up in the panel header at the right of the triangle used to collapse the panel. */
	std::string bl_label(void);
	/* Space type: The space where the panel is going to be used in. */
	enum bl_space_type_enum {
		bl_space_type_EMPTY = 0,
		bl_space_type_VIEW_3D = 1,
		bl_space_type_GRAPH_EDITOR = 2,
		bl_space_type_OUTLINER = 3,
		bl_space_type_PROPERTIES = 4,
		bl_space_type_FILE_BROWSER = 5,
		bl_space_type_IMAGE_EDITOR = 6,
		bl_space_type_INFO = 7,
		bl_space_type_SEQUENCE_EDITOR = 8,
		bl_space_type_TEXT_EDITOR = 9,
		bl_space_type_AUDIO_WINDOW = 11,
		bl_space_type_DOPESHEET_EDITOR = 12,
		bl_space_type_NLA_EDITOR = 13,
		bl_space_type_SCRIPTS_WINDOW = 14,
		bl_space_type_TIMELINE = 15,
		bl_space_type_NODE_EDITOR = 16,
		bl_space_type_LOGIC_EDITOR = 17,
		bl_space_type_CONSOLE = 18,
		bl_space_type_USER_PREFERENCES = 19,
	};
	bl_space_type_enum bl_space_type(void);
	/* Region Type: The region where the panel is going to be used in. */
	enum bl_region_type_enum {
		bl_region_type_WINDOW = 0,
		bl_region_type_HEADER = 1,
		bl_region_type_CHANNELS = 2,
		bl_region_type_TEMPORARY = 3,
		bl_region_type_UI = 4,
		bl_region_type_TOOLS = 5,
		bl_region_type_TOOL_PROPS = 6,
		bl_region_type_PREVIEW = 7,
	};
	bl_region_type_enum bl_region_type(void);
	/* Context: The context in which the panel belongs to. (TODO: explain the possible combinations bl_context/bl_region_type/bl_space_type) */
	std::string bl_context(void);
	/* Options: Options for this panel type */
	enum bl_options_enum {
		bl_options_DEFAULT_CLOSED = 1,
		bl_options_HIDE_HEADER = 2,
	};
	bl_options_enum bl_options(void);
};

/**************** Header ****************/

class Header : public Pointer {
public:
	Header(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Layout: Defines the structure of the header in the UI. */
	UILayout layout(void);
	/* ID Name: If this is set, the header gets a custom ID, otherwise it takes the name of the class used to define the panel. For example, if the class name is "OBJECT_HT_hello", and bl_idname is not set by the script, then bl_idname = "OBJECT_HT_hello" */
	std::string bl_idname(void);
	/* Space type: The space where the header is going to be used in. */
	enum bl_space_type_enum {
		bl_space_type_EMPTY = 0,
		bl_space_type_VIEW_3D = 1,
		bl_space_type_GRAPH_EDITOR = 2,
		bl_space_type_OUTLINER = 3,
		bl_space_type_PROPERTIES = 4,
		bl_space_type_FILE_BROWSER = 5,
		bl_space_type_IMAGE_EDITOR = 6,
		bl_space_type_INFO = 7,
		bl_space_type_SEQUENCE_EDITOR = 8,
		bl_space_type_TEXT_EDITOR = 9,
		bl_space_type_AUDIO_WINDOW = 11,
		bl_space_type_DOPESHEET_EDITOR = 12,
		bl_space_type_NLA_EDITOR = 13,
		bl_space_type_SCRIPTS_WINDOW = 14,
		bl_space_type_TIMELINE = 15,
		bl_space_type_NODE_EDITOR = 16,
		bl_space_type_LOGIC_EDITOR = 17,
		bl_space_type_CONSOLE = 18,
		bl_space_type_USER_PREFERENCES = 19,
	};
	bl_space_type_enum bl_space_type(void);
};

/**************** Menu ****************/

class Menu : public Pointer {
public:
	Menu(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Layout: Defines the structure of the menu in the UI. */
	UILayout layout(void);
	/* ID Name: If this is set, the menu gets a custom ID, otherwise it takes the name of the class used to define the panel. For example, if the class name is "OBJECT_MT_hello", and bl_idname is not set by the script, then bl_idname = "OBJECT_MT_hello" */
	std::string bl_idname(void);
	/* Label: The menu label */
	std::string bl_label(void);
};

/**************** Font Style ****************/

class ThemeFontStyle : public Pointer {
public:
	ThemeFontStyle(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Points */
	int points(void);
	/* Kerning Style: Which style to use for font kerning */
	enum font_kerning_style_enum {
		font_kerning_style_UNFITTED = 0,
		font_kerning_style_DEFAULT = 1,
	};
	font_kerning_style_enum font_kerning_style(void);
	/* Shadow Size: Shadow size in pixels (0, 3 and 5 supported) */
	int shadow(void);
	/* Shadow X Offset: Shadow offset in pixels */
	int shadow_offset_x(void);
	/* Shadow Y Offset: Shadow offset in pixels */
	int shadow_offset_y(void);
	/* Shadow Alpha */
	float shadowalpha(void);
	/* Shadow Brightness: Shadow color in grey value */
	float shadowcolor(void);
};

/**************** Style ****************/

class ThemeStyle : public Pointer {
public:
	ThemeStyle(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Panel Zoom: Default zoom level for panel areas */
	float panelzoom(void);
	/* Panel Font */
	ThemeFontStyle panel_title(void);
	/* Group Label Font */
	ThemeFontStyle group_label(void);
	/* Widget Label Font */
	ThemeFontStyle widget_label(void);
	/* Widget Font */
	ThemeFontStyle widget(void);
};

/**************** Theme Widget Color Set ****************/

class ThemeWidgetColors : public Pointer {
public:
	ThemeWidgetColors(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Outline */
	Array<float, 3> outline(void);
	/* Inner */
	Array<float, 4> inner(void);
	/* Inner Selected */
	Array<float, 4> inner_sel(void);
	/* Item */
	Array<float, 4> item(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Selected */
	Array<float, 3> text_sel(void);
	/* Shaded */
	bool show_shaded(void);
	/* Shade Top */
	int shadetop(void);
	/* Shade Down */
	int shadedown(void);
};

/**************** Theme Widget State Color ****************/

class ThemeWidgetStateColors : public Pointer {
public:
	ThemeWidgetStateColors(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Animated */
	Array<float, 3> inner_anim(void);
	/* Animated Selected */
	Array<float, 3> inner_anim_sel(void);
	/* Keyframe */
	Array<float, 3> inner_key(void);
	/* Keyframe Selected */
	Array<float, 3> inner_key_sel(void);
	/* Driven */
	Array<float, 3> inner_driven(void);
	/* Driven Selected */
	Array<float, 3> inner_driven_sel(void);
	/* Blend */
	float blend(void);
};

/**************** Theme User Interface ****************/

class ThemeUserInterface : public Pointer {
public:
	ThemeUserInterface(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Regular Widget Colors */
	ThemeWidgetColors wcol_regular(void);
	/* Tool Widget Colors */
	ThemeWidgetColors wcol_tool(void);
	/* Radio Widget Colors */
	ThemeWidgetColors wcol_radio(void);
	/* Text Widget Colors */
	ThemeWidgetColors wcol_text(void);
	/* Option Widget Colors */
	ThemeWidgetColors wcol_option(void);
	/* Toggle Widget Colors */
	ThemeWidgetColors wcol_toggle(void);
	/* Number Widget Colors */
	ThemeWidgetColors wcol_num(void);
	/* Slider Widget Colors */
	ThemeWidgetColors wcol_numslider(void);
	/* Box Backdrop Colors */
	ThemeWidgetColors wcol_box(void);
	/* Menu Widget Colors */
	ThemeWidgetColors wcol_menu(void);
	/* Pulldown Widget Colors */
	ThemeWidgetColors wcol_pulldown(void);
	/* Menu Backdrop Colors */
	ThemeWidgetColors wcol_menu_back(void);
	/* Menu Item Colors */
	ThemeWidgetColors wcol_menu_item(void);
	/* Scroll Widget Colors */
	ThemeWidgetColors wcol_scroll(void);
	/* Progress Bar Widget Colors */
	ThemeWidgetColors wcol_progress(void);
	/* List Item Colors */
	ThemeWidgetColors wcol_list_item(void);
	/* State Colors */
	ThemeWidgetStateColors wcol_state(void);
	/* Icon File */
	std::string icon_file(void);
};

/**************** Theme 3D View ****************/

class ThemeView3D : public Pointer {
public:
	ThemeView3D(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Grid */
	Array<float, 3> grid(void);
	/* Panel */
	Array<float, 4> panel(void);
	/* Wire */
	Array<float, 3> wire(void);
	/* Lamp */
	Array<float, 4> lamp(void);
	/* Object Selected */
	Array<float, 3> object_selected(void);
	/* Active Object */
	Array<float, 3> object_active(void);
	/* Object Grouped */
	Array<float, 3> object_grouped(void);
	/* Object Grouped Active */
	Array<float, 3> object_grouped_active(void);
	/* Transform */
	Array<float, 3> transform(void);
	/* Vertex */
	Array<float, 3> vertex(void);
	/* Vertex Select */
	Array<float, 3> vertex_select(void);
	/* Vertex Size */
	int vertex_size(void);
	/* Edge Select */
	Array<float, 3> edge_select(void);
	/* Edge Seam */
	Array<float, 3> edge_seam(void);
	/* Edge Sharp */
	Array<float, 3> edge_sharp(void);
	/* Edge Crease */
	Array<float, 3> edge_crease(void);
	/* Edge UV Face Select */
	Array<float, 3> edge_facesel(void);
	/* Face */
	Array<float, 4> face(void);
	/* Face Selected */
	Array<float, 4> face_select(void);
	/* Face Dot Selected */
	Array<float, 3> face_dot(void);
	/* Face Dot Size */
	int facedot_size(void);
	/* Nurb U-lines */
	Array<float, 3> nurb_uline(void);
	/* Nurb V-lines */
	Array<float, 3> nurb_vline(void);
	/* Nurb active U-lines */
	Array<float, 3> nurb_sel_uline(void);
	/* Nurb active V-lines */
	Array<float, 3> nurb_sel_vline(void);
	/* Active spline */
	Array<float, 3> act_spline(void);
	/* Free handle color */
	Array<float, 3> handle_free(void);
	/* Auto handle color */
	Array<float, 3> handle_auto(void);
	/* Vector handle color */
	Array<float, 3> handle_vect(void);
	/* Align handle color */
	Array<float, 3> handle_align(void);
	/* Free handle selected color */
	Array<float, 3> handle_sel_free(void);
	/* Auto handle selected color */
	Array<float, 3> handle_sel_auto(void);
	/* Vector handle selected color */
	Array<float, 3> handle_sel_vect(void);
	/* Align handle selected color */
	Array<float, 3> handle_sel_align(void);
	/* Last selected point */
	Array<float, 3> lastsel_point(void);
	/* Edge Length Text */
	Array<float, 3> extra_edge_len(void);
	/* Face Angle Text */
	Array<float, 3> extra_face_angle(void);
	/* Face Area Text */
	Array<float, 3> extra_face_area(void);
	/* Active Vert/Edge/Face */
	Array<float, 4> editmesh_active(void);
	/* Face Normal */
	Array<float, 3> normal(void);
	/* Vertex Normal */
	Array<float, 3> vertex_normal(void);
	/* Bone Solid */
	Array<float, 3> bone_solid(void);
	/* Bone Pose */
	Array<float, 3> bone_pose(void);
	/* Current Frame */
	Array<float, 3> frame_current(void);
};

/**************** Theme Graph Editor ****************/

class ThemeGraphEditor : public Pointer {
public:
	ThemeGraphEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Source List */
	Array<float, 3> list(void);
	/* Source List Title */
	Array<float, 3> list_title(void);
	/* Source List Text */
	Array<float, 3> list_text(void);
	/* Source List Text Highlight */
	Array<float, 3> list_text_hi(void);
	/* Grid */
	Array<float, 3> grid(void);
	/* Panel */
	Array<float, 3> panel(void);
	/* Window Sliders */
	Array<float, 3> window_sliders(void);
	/* Channels Region */
	Array<float, 3> channels_region(void);
	/* Vertex */
	Array<float, 3> vertex(void);
	/* Vertex Select */
	Array<float, 3> vertex_select(void);
	/* Vertex Size */
	int vertex_size(void);
	/* Free handle color */
	Array<float, 3> handle_free(void);
	/* Auto handle color */
	Array<float, 3> handle_auto(void);
	/* Vector handle color */
	Array<float, 3> handle_vect(void);
	/* Align handle color */
	Array<float, 3> handle_align(void);
	/* Free handle selected color */
	Array<float, 3> handle_sel_free(void);
	/* Auto handle selected color */
	Array<float, 3> handle_sel_auto(void);
	/* Vector handle selected color */
	Array<float, 3> handle_sel_vect(void);
	/* Align handle selected color */
	Array<float, 3> handle_sel_align(void);
	/* Last selected point */
	Array<float, 3> lastsel_point(void);
	/* Current Frame */
	Array<float, 3> frame_current(void);
	/* Handle Vertex */
	Array<float, 3> handle_vertex(void);
	/* Handle Vertex Select */
	Array<float, 3> handle_vertex_select(void);
	/* Handle Vertex Size */
	int handle_vertex_size(void);
	/* Channel Group */
	Array<float, 3> channel_group(void);
	/* Active Channel Group */
	Array<float, 3> active_channels_group(void);
	/* DopeSheet Channel */
	Array<float, 3> dopesheet_channel(void);
	/* DopeSheet Sub-Channel */
	Array<float, 3> dopesheet_subchannel(void);
};

/**************** Theme File Browser ****************/

class ThemeFileBrowser : public Pointer {
public:
	ThemeFileBrowser(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Source List */
	Array<float, 3> list(void);
	/* Source List Title */
	Array<float, 3> list_title(void);
	/* Source List Text */
	Array<float, 3> list_text(void);
	/* Source List Text Highlight */
	Array<float, 3> list_text_hi(void);
	/* Selected File */
	Array<float, 3> selected_file(void);
	/* Tiles */
	Array<float, 3> tiles(void);
	/* Scrollbar */
	Array<float, 3> scrollbar(void);
	/* Scroll Handle */
	Array<float, 3> scroll_handle(void);
	/* Active File */
	Array<float, 3> active_file(void);
	/* Active File Text */
	Array<float, 3> active_file_text(void);
};

/**************** Theme NLA Editor ****************/

class ThemeNLAEditor : public Pointer {
public:
	ThemeNLAEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Source List */
	Array<float, 3> list(void);
	/* Source List Title */
	Array<float, 3> list_title(void);
	/* Source List Text */
	Array<float, 3> list_text(void);
	/* Source List Text Highlight */
	Array<float, 3> list_text_hi(void);
	/* Grid */
	Array<float, 3> grid(void);
	/* View Sliders */
	Array<float, 3> view_sliders(void);
	/* Bars */
	Array<float, 3> bars(void);
	/* Bars Selected */
	Array<float, 3> bars_selected(void);
	/* Strips */
	Array<float, 3> strips(void);
	/* Strips Selected */
	Array<float, 3> strips_selected(void);
	/* Current Frame */
	Array<float, 3> frame_current(void);
};

/**************** Theme DopeSheet ****************/

class ThemeDopeSheet : public Pointer {
public:
	ThemeDopeSheet(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Source List */
	Array<float, 3> list(void);
	/* Source List Title */
	Array<float, 3> list_title(void);
	/* Source List Text */
	Array<float, 3> list_text(void);
	/* Source List Text Highlight */
	Array<float, 3> list_text_hi(void);
	/* Grid */
	Array<float, 3> grid(void);
	/* Value Sliders */
	Array<float, 3> value_sliders(void);
	/* View Sliders */
	Array<float, 3> view_sliders(void);
	/* Channels */
	Array<float, 3> channels(void);
	/* Channels Selected */
	Array<float, 3> channels_selected(void);
	/* Channel Group */
	Array<float, 3> channel_group(void);
	/* Active Channel Group */
	Array<float, 3> active_channels_group(void);
	/* Long Key */
	Array<float, 3> long_key(void);
	/* Long Key Selected */
	Array<float, 3> long_key_selected(void);
	/* Current Frame */
	Array<float, 3> frame_current(void);
	/* DopeSheet Channel */
	Array<float, 3> dopesheet_channel(void);
	/* DopeSheet Sub-Channel */
	Array<float, 3> dopesheet_subchannel(void);
};

/**************** Theme Image Editor ****************/

class ThemeImageEditor : public Pointer {
public:
	ThemeImageEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Vertex */
	Array<float, 3> vertex(void);
	/* Vertex Select */
	Array<float, 3> vertex_select(void);
	/* Vertex Size */
	int vertex_size(void);
	/* Face */
	Array<float, 4> face(void);
	/* Face Selected */
	Array<float, 4> face_select(void);
	/* Face Dot Selected */
	Array<float, 3> face_dot(void);
	/* Face Dot Size */
	int facedot_size(void);
	/* Active Vert/Edge/Face */
	Array<float, 4> editmesh_active(void);
	/* Scope region background color */
	Array<float, 4> scope_back(void);
};

/**************** Theme Sequence Editor ****************/

class ThemeSequenceEditor : public Pointer {
public:
	ThemeSequenceEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Grid */
	Array<float, 3> grid(void);
	/* Window Sliders */
	Array<float, 3> window_sliders(void);
	/* Movie Strip */
	Array<float, 3> movie_strip(void);
	/* Image Strip */
	Array<float, 3> image_strip(void);
	/* Scene Strip */
	Array<float, 3> scene_strip(void);
	/* Audio Strip */
	Array<float, 3> audio_strip(void);
	/* Effect Strip */
	Array<float, 3> effect_strip(void);
	/* Plugin Strip */
	Array<float, 3> plugin_strip(void);
	/* Transition Strip */
	Array<float, 3> transition_strip(void);
	/* Meta Strip */
	Array<float, 3> meta_strip(void);
	/* Current Frame */
	Array<float, 3> frame_current(void);
	/* Keyframe */
	Array<float, 3> keyframe(void);
	/* Draw Action */
	Array<float, 3> draw_action(void);
};

/**************** Theme Properties ****************/

class ThemeProperties : public Pointer {
public:
	ThemeProperties(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Panel */
	Array<float, 3> panel(void);
};

/**************** Theme Text Editor ****************/

class ThemeTextEditor : public Pointer {
public:
	ThemeTextEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Line Numbers Background */
	Array<float, 3> line_numbers_background(void);
	/* Scroll Bar */
	Array<float, 3> scroll_bar(void);
	/* Selected Text */
	Array<float, 3> selected_text(void);
	/* Cursor */
	Array<float, 3> cursor(void);
	/* Syntax Built-in */
	Array<float, 3> syntax_builtin(void);
	/* Syntax Special */
	Array<float, 3> syntax_special(void);
	/* Syntax Comment */
	Array<float, 3> syntax_comment(void);
	/* Syntax String */
	Array<float, 3> syntax_string(void);
	/* Syntax Numbers */
	Array<float, 3> syntax_numbers(void);
};

/**************** Theme Timeline ****************/

class ThemeTimeline : public Pointer {
public:
	ThemeTimeline(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Grid */
	Array<float, 3> grid(void);
	/* Current Frame */
	Array<float, 3> frame_current(void);
};

/**************** Theme Node Editor ****************/

class ThemeNodeEditor : public Pointer {
public:
	ThemeNodeEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Source List */
	Array<float, 3> list(void);
	/* Source List Title */
	Array<float, 3> list_title(void);
	/* Source List Text */
	Array<float, 3> list_text(void);
	/* Source List Text Highlight */
	Array<float, 3> list_text_hi(void);
	/* Wires */
	Array<float, 3> wire(void);
	/* Wire Select */
	Array<float, 3> wire_select(void);
	/* Selected Text */
	Array<float, 3> selected_text(void);
	/* Node Backdrop */
	Array<float, 4> node_backdrop(void);
	/* In/Out Node */
	Array<float, 3> in_out_node(void);
	/* Converter Node */
	Array<float, 3> converter_node(void);
	/* Operator Node */
	Array<float, 3> operator_node(void);
	/* Group Node */
	Array<float, 3> group_node(void);
};

/**************** Theme Outliner ****************/

class ThemeOutliner : public Pointer {
public:
	ThemeOutliner(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
};

/**************** Theme Info ****************/

class ThemeInfo : public Pointer {
public:
	ThemeInfo(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
};

/**************** Theme User Preferences ****************/

class ThemeUserPreferences : public Pointer {
public:
	ThemeUserPreferences(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
};

/**************** Theme Console ****************/

class ThemeConsole : public Pointer {
public:
	ThemeConsole(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Line Output */
	Array<float, 3> line_output(void);
	/* Line Input */
	Array<float, 3> line_input(void);
	/* Line Info */
	Array<float, 3> line_info(void);
	/* Line Error */
	Array<float, 3> line_error(void);
	/* Cursor */
	Array<float, 3> cursor(void);
};

/**************** Theme Audio Window ****************/

class ThemeAudioWindow : public Pointer {
public:
	ThemeAudioWindow(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Grid */
	Array<float, 3> grid(void);
	/* Window Sliders */
	Array<float, 3> window_sliders(void);
	/* Current Frame */
	Array<float, 3> frame_current(void);
};

/**************** Theme Logic Editor ****************/

class ThemeLogicEditor : public Pointer {
public:
	ThemeLogicEditor(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Window Background */
	Array<float, 3> back(void);
	/* Title */
	Array<float, 3> title(void);
	/* Text */
	Array<float, 3> text(void);
	/* Text Highlight */
	Array<float, 3> text_hi(void);
	/* Header */
	Array<float, 3> header(void);
	/* Header Text */
	Array<float, 3> header_text(void);
	/* Header Text Highlight */
	Array<float, 3> header_text_hi(void);
	/* Region Background */
	Array<float, 3> button(void);
	/* Region Text Titles */
	Array<float, 3> button_title(void);
	/* Region Text */
	Array<float, 3> button_text(void);
	/* Region Text Highlight */
	Array<float, 3> button_text_hi(void);
	/* Panel */
	Array<float, 3> panel(void);
};

/**************** Theme Bone Color Set ****************/

class ThemeBoneColorSet : public Pointer {
public:
	ThemeBoneColorSet(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Normal: Color used for the surface of bones */
	Array<float, 3> normal(void);
	/* Select: Color used for selected bones */
	Array<float, 3> select(void);
	/* Active: Color used for active bones */
	Array<float, 3> active(void);
	/* Colored Constraints: Allow the use of colors indicating constraints/keyed status */
	bool show_colored_constraints(void);
};

/**************** Theme ****************/

class Theme : public Pointer {
public:
	Theme(const PointerRNA& ptr) :
		Pointer(ptr),
		bone_color_sets(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Name of the theme */
	std::string name(void);
	/* Active Theme Area */
	enum theme_area_enum {
		theme_area_USER_INTERFACE = 0,
		theme_area_COLOR_SETS = 18,
		theme_area_VIEW_3D = 1,
		theme_area_TIMELINE = 2,
		theme_area_GRAPH_EDITOR = 3,
		theme_area_DOPESHEET_EDITOR = 4,
		theme_area_NLA_EDITOR = 5,
		theme_area_IMAGE_EDITOR = 6,
		theme_area_SEQUENCE_EDITOR = 7,
		theme_area_TEXT_EDITOR = 8,
		theme_area_NODE_EDITOR = 9,
		theme_area_LOGIC_EDITOR = 10,
		theme_area_PROPERTIES = 11,
		theme_area_OUTLINER = 12,
		theme_area_USER_PREFERENCES = 14,
		theme_area_INFO = 15,
		theme_area_FILE_BROWSER = 16,
		theme_area_CONSOLE = 17,
	};
	theme_area_enum theme_area(void);
	/* User Interface */
	ThemeUserInterface user_interface(void);
	/* 3D View */
	ThemeView3D view_3d(void);
	/* Graph Editor */
	ThemeGraphEditor graph_editor(void);
	/* File Browser */
	ThemeFileBrowser file_browser(void);
	/* NLA Editor */
	ThemeNLAEditor nla_editor(void);
	/* DopeSheet */
	ThemeDopeSheet dopesheet_editor(void);
	/* Image Editor */
	ThemeImageEditor image_editor(void);
	/* Sequence Editor */
	ThemeSequenceEditor sequence_editor(void);
	/* Properties */
	ThemeProperties properties(void);
	/* Text Editor */
	ThemeTextEditor text_editor(void);
	/* Timeline */
	ThemeTimeline timeline(void);
	/* Node Editor */
	ThemeNodeEditor node_editor(void);
	/* Logic Editor */
	ThemeLogicEditor logic_editor(void);
	/* Outliner */
	ThemeOutliner outliner(void);
	/* Info */
	ThemeInfo info(void);
	/* User Preferences */
	ThemeUserPreferences user_preferences(void);
	/* Console */
	ThemeConsole console(void);
	/* Bone Color Sets */
	COLLECTION_PROPERTY(ThemeBoneColorSet, Theme, bone_color_sets)
};

/**************** Solid Light ****************/

class UserSolidLight : public Pointer {
public:
	UserSolidLight(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Enabled: Enable this OpenGL light in solid draw mode */
	bool use(void);
	/* Direction: The direction that the OpenGL light is shining */
	Array<float, 3> direction(void);
	/* Diffuse Color: The diffuse color of the OpenGL light */
	Array<float, 3> diffuse_color(void);
	/* Specular Color: The color of the lights specular highlight */
	Array<float, 3> specular_color(void);
};

/**************** User Preferences ****************/

class UserPreferences : public Pointer {
public:
	UserPreferences(const PointerRNA& ptr) :
		Pointer(ptr),
		themes(ptr),
		ui_styles(ptr),
		addons(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active Section: Active section of the user preferences shown in the user interface */
	enum active_section_enum {
		active_section_INTERFACE = 0,
		active_section_EDITING = 1,
		active_section_INPUT = 5,
		active_section_ADDONS = 6,
		active_section_THEMES = 4,
		active_section_FILES = 2,
		active_section_SYSTEM = 3,
	};
	active_section_enum active_section(void);
	/* Themes */
	COLLECTION_PROPERTY(Theme, UserPreferences, themes)
	/* Styles */
	COLLECTION_PROPERTY(ThemeStyle, UserPreferences, ui_styles)
	/* Addon */
	COLLECTION_PROPERTY(Addon, UserPreferences, addons)
	/* View & Controls: Preferences related to viewing data */
	UserPreferencesView view(void);
	/* Edit Methods: Settings for interacting with Blender data */
	UserPreferencesEdit edit(void);
	/* Inputs: Settings for input devices */
	UserPreferencesInput inputs(void);
	/* File Paths: Default paths for external files */
	UserPreferencesFilePaths filepaths(void);
	/* System & OpenGL: Graphics driver and operating system settings */
	UserPreferencesSystem system(void);
};

/**************** User Add-Ons ****************/

class Addons : public Pointer {
public:
	Addons(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** View & Controls ****************/

class UserPreferencesView : public Pointer {
public:
	UserPreferencesView(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Tooltips: Display tooltips */
	bool show_tooltips(void);
	/* Show Python Tooltips: Show Python references in tooltips */
	bool show_tooltips_python(void);
	/* Display Object Info: Display objects name and frame number in 3D view */
	bool show_object_info(void);
	/* Global Scene: Forces the current Scene to be displayed in all Screens */
	bool use_global_scene(void);
	/* Large Cursors: Use large mouse cursors when available */
	bool show_large_cursors(void);
	/* Show View Name: Show the name of the view's direction in each 3D View */
	bool show_view_name(void);
	/* Show Splash: Display splash screen on startup */
	bool show_splash(void);
	/* Show Playback FPS: Show the frames per second screen refresh rate, while animation is played back */
	bool show_playback_fps(void);
	/* Open On Mouse Over: Open menu buttons and pulldowns automatically when the mouse is hovering */
	bool use_mouse_over_open(void);
	/* Top Level Menu Open Delay: Time delay in 1/10 seconds before automatically opening top level menus */
	int open_toplevel_delay(void);
	/* Sub Level Menu Open Delay: Time delay in 1/10 seconds before automatically opening sub level menus */
	int open_sublevel_delay(void);
	/* Hold LMB Open Toolbox Delay: Time in 1/10 seconds to hold the Left Mouse Button before opening the toolbox */
	int open_left_mouse_delay(void);
	/* Hold RMB Open Toolbox Delay: Time in 1/10 seconds to hold the Right Mouse Button before opening the toolbox */
	int open_right_mouse_delay(void);
	/* Toolbox Column Layout: Use a column layout for toolbox */
	bool show_column_layout(void);
	/* Contents Follow Opening Direction: Otherwise menus, etc will always be top to bottom, left to right, no matter opening direction */
	bool use_directional_menus(void);
	/* Global Pivot: Lock the same rotation/scaling pivot in all 3D Views */
	bool use_global_pivot(void);
	/* Auto Depth: Use the depth under the mouse to improve view pan/rotate/zoom functionality */
	bool use_mouse_auto_depth(void);
	/* Zoom To Mouse Position: Zoom in towards the mouse pointer's position in the 3D view, rather than the 2D window center */
	bool use_zoom_to_mouse(void);
	/* Auto Perspective: Automatically switch between orthographic and perspective when changing from top/front/side views */
	bool use_auto_perspective(void);
	/* Rotate Around Selection: Use selection as the pivot point */
	bool use_rotate_around_active(void);
	/* Show Mini Axis: Show a small rotating 3D axis in the bottom left corner of the 3D View */
	bool show_mini_axis(void);
	/* Mini Axis Size: The axis icon's size */
	int mini_axis_size(void);
	/* Mini Axis Brightness: The brightness of the icon */
	int mini_axis_brightness(void);
	/* Smooth View: The time to animate the view in milliseconds, zero to disable */
	int smooth_view(void);
	/* Rotation Angle: The rotation step for numerical pad keys (2 4 6 8) */
	int rotation_angle(void);
	/* Manipulator: Use 3D transform manipulator */
	bool show_manipulator(void);
	/* Manipulator Size: Diameter of widget, in 10 pixel units */
	int manipulator_size(void);
	/* Manipulator Handle Size: Size of widget handles as percentage of widget radius */
	int manipulator_handle_size(void);
	/* Manipulator Hotspot: Hotspot in pixels for clicking widget handles */
	int manipulator_hotspot(void);
	/* Object Origin Size: Diameter in Pixels for Object/Lamp origin display */
	int object_origin_size(void);
	/* 2D View Minimum Grid Spacing: Minimum number of pixels between each gridline in 2D Viewports */
	int view2d_grid_spacing_min(void);
	/* TimeCode Style: Format of Time Codes displayed when not displaying timing in terms of frames */
	enum timecode_style_enum {
		timecode_style_MINIMAL = 0,
		timecode_style_SMPTE = 2,
		timecode_style_SMPTE_COMPACT = 1,
		timecode_style_MILLISECONDS = 3,
		timecode_style_SECONDS_ONLY = 4,
	};
	timecode_style_enum timecode_style(void);
};

/**************** Edit Methods ****************/

class UserPreferencesEdit : public Pointer {
public:
	UserPreferencesEdit(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Material Link To: Toggle whether the material is linked to object data or the object block */
	enum material_link_enum {
		material_link_OBDATA = 0,
		material_link_OBJECT = 256,
	};
	material_link_enum material_link(void);
	/* Align Object To: When adding objects from a 3D View menu, either align them to that view's direction or the world coordinates */
	enum object_align_enum {
		object_align_WORLD = 0,
		object_align_VIEW = 524288,
	};
	object_align_enum object_align(void);
	/* Enter Edit Mode: Enter Edit Mode automatically after adding a new object */
	bool use_enter_edit_mode(void);
	/* Release confirms: Moving things with a mouse drag confirms when releasing the button */
	bool use_drag_immediately(void);
	/* Undo Steps: Number of undo steps available (smaller values conserve memory) */
	int undo_steps(void);
	/* Undo Memory Size: Maximum memory usage in megabytes (0 means unlimited) */
	int undo_memory_limit(void);
	/* Global Undo: Global undo works by keeping a full copy of the file itself in memory, so takes extra memory */
	bool use_global_undo(void);
	/* Auto Keying Enable: Automatic keyframe insertion for Objects and Bones */
	bool use_auto_keying(void);
	/* Auto Keying Mode: Mode of automatic keyframe insertion for Objects and Bones */
	enum auto_keying_mode_enum {
		auto_keying_mode_ADD_REPLACE_KEYS = 3,
		auto_keying_mode_REPLACE_KEYS = 5,
	};
	auto_keying_mode_enum auto_keying_mode(void);
	/* Auto Keyframe Insert Available: Automatic keyframe insertion in available curves */
	bool use_keyframe_insert_available(void);
	/* Keyframe Insert Needed: Keyframe insertion only when keyframe needed */
	bool use_keyframe_insert_needed(void);
	/* Visual Keying: Use Visual keying automatically for constrained objects */
	bool use_visual_keying(void);
	/* New F-Curve Colors - XYZ to RGB: Color for newly added transformation F-Curves (Location, Rotation, Scale) and also Color is based on the transform axis */
	bool use_insertkey_xyz_to_rgb(void);
	/* New Interpolation Type */
	enum keyframe_new_interpolation_type_enum {
		keyframe_new_interpolation_type_CONSTANT = 0,
		keyframe_new_interpolation_type_LINEAR = 1,
		keyframe_new_interpolation_type_BEZIER = 2,
	};
	keyframe_new_interpolation_type_enum keyframe_new_interpolation_type(void);
	/* New Handles Type */
	enum keyframe_new_handle_type_enum {
		keyframe_new_handle_type_FREE = 0,
		keyframe_new_handle_type_AUTO = 1,
		keyframe_new_handle_type_VECTOR = 2,
		keyframe_new_handle_type_ALIGNED = 3,
	};
	keyframe_new_handle_type_enum keyframe_new_handle_type(void);
	/* Allow Negative Frames: Current frame number can be manually set to a negative value */
	bool use_negative_frames(void);
	/* Grease Pencil Manhattan Distance: Pixels moved by mouse per axis when drawing stroke */
	int grease_pencil_manhattan_distance(void);
	/* Grease Pencil Euclidean Distance: Distance moved by mouse when drawing stroke (in pixels) to include */
	int grease_pencil_euclidean_distance(void);
	/* Grease Pencil Smooth Stroke: Smooth the final stroke */
	bool use_grease_pencil_smooth_stroke(void);
	/* Grease Pencil Simplify Stroke: Simplify the final stroke */
	bool use_grease_pencil_simplify_stroke(void);
	/* Grease Pencil Eraser Radius: Radius of eraser 'brush' */
	int grease_pencil_eraser_radius(void);
	/* Sculpt/Paint Overlay Color: Color of texture overlay */
	Array<float, 3> sculpt_paint_overlay_color(void);
	/* Duplicate Mesh: Causes mesh data to be duplicated with the object */
	bool use_duplicate_mesh(void);
	/* Duplicate Surface: Causes surface data to be duplicated with the object */
	bool use_duplicate_surface(void);
	/* Duplicate Curve: Causes curve data to be duplicated with the object */
	bool use_duplicate_curve(void);
	/* Duplicate Text: Causes text data to be duplicated with the object */
	bool use_duplicate_text(void);
	/* Duplicate Metaball: Causes metaball data to be duplicated with the object */
	bool use_duplicate_metaball(void);
	/* Duplicate Armature: Causes armature data to be duplicated with the object */
	bool use_duplicate_armature(void);
	/* Duplicate Lamp: Causes lamp data to be duplicated with the object */
	bool use_duplicate_lamp(void);
	/* Duplicate Material: Causes material data to be duplicated with the object */
	bool use_duplicate_material(void);
	/* Duplicate Texture: Causes texture data to be duplicated with the object */
	bool use_duplicate_texture(void);
	/* Duplicate F-Curve: Causes F-curve data to be duplicated with the object */
	bool use_duplicate_fcurve(void);
	/* Duplicate Action: Causes actions to be duplicated with the object */
	bool use_duplicate_action(void);
	/* Duplicate Particle: Causes particle systems to be duplicated with the object */
	bool use_duplicate_particle(void);
};

/**************** Input ****************/

class UserPreferencesInput : public Pointer {
public:
	UserPreferencesInput(const PointerRNA& ptr) :
		Pointer(ptr),
		edited_keymaps(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Select Mouse: The mouse button used for selection */
	enum select_mouse_enum {
		select_mouse_LEFT = 16384,
		select_mouse_RIGHT = 0,
	};
	select_mouse_enum select_mouse(void);
	/* Zoom Style: Which style to use for viewport scaling */
	enum view_zoom_method_enum {
		view_zoom_method_CONTINUE = 0,
		view_zoom_method_DOLLY = 2,
		view_zoom_method_SCALE = 1,
	};
	view_zoom_method_enum view_zoom_method(void);
	/* Zoom Axis: Axis of mouse movement to zoom in or out on */
	enum view_zoom_axis_enum {
		view_zoom_axis_VERTICAL = 0,
		view_zoom_axis_HORIZONTAL = 67108864,
	};
	view_zoom_axis_enum view_zoom_axis(void);
	/* Invert Zoom Direction: Invert the axis of mouse movement for zooming */
	bool invert_mouse_wheel_zoom(void);
	/* View Rotation: Rotation style in the viewport */
	enum view_rotate_method_enum {
		view_rotate_method_TURNTABLE = 0,
		view_rotate_method_TRACKBALL = 32,
	};
	view_rotate_method_enum view_rotate_method(void);
	/* Continuous Grab: Allow moving the mouse outside the view on some manipulations (transform, ui control drag) */
	bool use_mouse_continuous(void);
	/* Drag Threshold: Amount of pixels you have to drag before dragging UI items happens */
	int drag_threshold(void);
	/* NDof Pan Speed: The overall panning speed of an NDOF device, as percent of standard */
	int ndof_pan_speed(void);
	/* NDof Rotation Speed: The overall rotation speed of an NDOF device, as percent of standard */
	int ndof_rotate_speed(void);
	/* Double Click Timeout: The time (in ms) for a double click */
	int mouse_double_click_time(void);
	/* Emulate 3 Button Mouse: Emulates Middle Mouse with Alt+LeftMouse (doesn't work with Left Mouse Select option) */
	bool use_mouse_emulate_3_button(void);
	/* Emulate Numpad: Causes the 1 to 0 keys to act as the numpad (useful for laptops) */
	bool use_emulate_numpad(void);
	/* Middle Mouse Paste: In text window, paste with middle mouse button instead of panning */
	bool use_mouse_mmb_paste(void);
	/* Wheel Invert Zoom: Swap the Mouse Wheel zoom direction */
	bool invert_zoom_wheel(void);
	/* Wheel Scroll Lines: The number of lines scrolled at a time with the mouse wheel */
	int wheel_scroll_lines(void);
	/* Edited Keymaps */
	COLLECTION_PROPERTY(KeyMap, UserPreferencesInput, edited_keymaps)
	/* Key Config: The name of the active key configuration */
	std::string active_keyconfig(void);
};

/**************** File Paths ****************/

class UserPreferencesFilePaths : public Pointer {
public:
	UserPreferencesFilePaths(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Hide Dot Files/Datablocks: Hide files/datablocks that start with a dot(.*) */
	bool show_hidden_files_datablocks(void);
	/* Filter File Extensions: Display only files with extensions in the image select window */
	bool use_filter_files(void);
	/* Hide Recent Locations: Hide recent locations in the file selector */
	bool hide_recent_locations(void);
	/* Show Thumbnails: Open in thumbnail view for images and movies */
	bool show_thumbnails(void);
	/* Relative Paths: Default relative path option for the file selector */
	bool use_relative_paths(void);
	/* Compress File: Enable file compression when saving .blend files */
	bool use_file_compression(void);
	/* Load UI: Load user interface setup when loading .blend files */
	bool use_load_ui(void);
	/* Fonts Directory: The default directory to search for loading fonts */
	std::string font_directory(void);
	/* Textures Directory: The default directory to search for textures */
	std::string texture_directory(void);
	/* Texture Plugin Directory: The default directory to search for texture plugins */
	std::string texture_plugin_directory(void);
	/* Sequence Plugin Directory: The default directory to search for sequence plugins */
	std::string sequence_plugin_directory(void);
	/* Render Output Directory: The default directory for rendering output, for new scenes */
	std::string render_output_directory(void);
	/* Python Scripts Directory: The default directory to search for Python scripts (resets python module search path: sys.path) */
	std::string script_directory(void);
	/* Sounds Directory: The default directory to search for sounds */
	std::string sound_directory(void);
	/* Temporary Directory: The directory for storing temporary save files */
	std::string temporary_directory(void);
	/* Image Editor: Path to an image editor */
	std::string image_editor(void);
	/* Animation Player: Path to a custom animation/frame sequence player */
	std::string animation_player(void);
	/* Animation Player Preset: Preset configs for external animation players */
	enum animation_player_preset_enum {
		animation_player_preset_BLENDER24 = 1,
		animation_player_preset_DJV = 2,
		animation_player_preset_FRAMECYCLER = 3,
		animation_player_preset_RV = 4,
		animation_player_preset_MPLAYER = 5,
		animation_player_preset_CUSTOM = 50,
	};
	animation_player_preset_enum animation_player_preset(void);
	/* Save Versions: The number of old versions to maintain in the current directory, when manually saving */
	int save_version(void);
	/* Auto Save Temporary Files: Automatic saving of temporary files in temp directory, uses process ID */
	bool use_auto_save_temporary_files(void);
	/* Auto Save Time: The time (in minutes) to wait between automatic temporary saves */
	int auto_save_time(void);
	/* Recent Files: Maximum number of recently opened files to remember */
	int recent_files(void);
	/* Save Preview Images: Enables automatic saving of preview images in the .blend file */
	bool use_save_preview_images(void);
};

/**************** System & OpenGL ****************/

class UserPreferencesSystem : public Pointer {
public:
	UserPreferencesSystem(const PointerRNA& ptr) :
		Pointer(ptr),
		solid_lights(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* International Fonts: Use international fonts */
	bool use_international_fonts(void);
	/* DPI: Font size and resolution for display */
	int dpi(void);
	/* Scrollback: Maximum number of lines to store for the console buffer */
	int scrollback(void);
	/* Author: Name that will be used in exported files when format supports such feature */
	std::string author(void);
	/* Language: Language use for translation */
	enum language_enum {
		language_ENGLISH = 0,
		language_JAPANESE = 1,
		language_DUTCH = 2,
		language_ITALIAN = 3,
		language_GERMAN = 4,
		language_FINNISH = 5,
		language_SWEDISH = 6,
		language_FRENCH = 7,
		language_SPANISH = 8,
		language_CATALAN = 9,
		language_CZECH = 10,
		language_BRAZILIAN_PORTUGUESE = 11,
		language_SIMPLIFIED_CHINESE = 12,
		language_RUSSIAN = 13,
		language_CROATIAN = 14,
		language_SERBIAN = 15,
		language_UKRAINIAN = 16,
		language_POLISH = 17,
		language_ROMANIAN = 18,
		language_ARABIC = 19,
		language_BULGARIAN = 20,
		language_GREEK = 21,
		language_KOREAN = 22,
	};
	language_enum language(void);
	/* Translate Tooltips: Translate Tooltips */
	bool use_translate_tooltips(void);
	/* Translate Buttons: Translate button labels */
	bool use_translate_buttons(void);
	/* Translate Toolbox: Translate toolbox menu */
	bool use_translate_toolbox(void);
	/* Textured Fonts: Use textures for drawing international fonts */
	bool use_textured_fonts(void);
	/* Solid Lights: Lights user to display objects in solid draw mode */
	COLLECTION_PROPERTY(UserSolidLight, UserPreferencesSystem, solid_lights)
	/* Use Weight Color Range: Enable color range used for weight visualization in weight painting mode */
	bool use_weight_color_range(void);
	/* Weight Color Range: Color range used for weight visualization in weight painting mode */
	ColorRamp weight_color_range(void);
	/* Color Picker Type: Different styles of displaying the color picker widget */
	enum color_picker_type_enum {
		color_picker_type_CIRCLE = 0,
		color_picker_type_SQUARE_SV = 1,
		color_picker_type_SQUARE_HS = 2,
		color_picker_type_SQUARE_HV = 3,
	};
	color_picker_type_enum color_picker_type(void);
	/* Enable All Codecs: Enables automatic saving of preview images in the .blend file (Windows only) */
	bool use_preview_images(void);
	/* Auto Run Python Scripts: Allow any .blend file to run scripts automatically (unsafe with blend files from an untrusted source) */
	bool use_scripts_auto_execute(void);
	/* Tabs as Spaces: Automatically converts all new tabs into spaces for new and loaded text files */
	bool use_tabs_as_spaces(void);
	/* Prefetch Frames: Number of frames to render ahead during playback */
	int prefetch_frames(void);
	/* Memory Cache Limit: Memory cache limit in sequencer (megabytes) */
	int memory_cache_limit(void);
	/* Frame Server Port: Frameserver Port for Frameserver Rendering */
	int frame_server_port(void);
	/* Clip Alpha: Clip alpha below this threshold in the 3D textured view */
	float gl_clip_alpha(void);
	/* Mipmaps: Scale textures for the 3D View (looks nicer but uses more memory and slows image reloading) */
	bool use_mipmaps(void);
	/* VBOs: Use Vertex Buffer Objects (or Vertex Arrays, if unsupported) for viewport rendering */
	bool use_vertex_buffer_objects(void);
	/* Anti-aliasing: Use anti-aliasing for the 3D view (may impact redraw performance) */
	bool use_antialiasing(void);
	/* GL Texture Limit: Limit the texture size to save graphics memory */
	enum gl_texture_limit_enum {
		gl_texture_limit_CLAMP_OFF = 0,
		gl_texture_limit_CLAMP_8192 = 8192,
		gl_texture_limit_CLAMP_4096 = 4096,
		gl_texture_limit_CLAMP_2048 = 2048,
		gl_texture_limit_CLAMP_1024 = 1024,
		gl_texture_limit_CLAMP_512 = 512,
		gl_texture_limit_CLAMP_256 = 256,
		gl_texture_limit_CLAMP_128 = 128,
	};
	gl_texture_limit_enum gl_texture_limit(void);
	/* Texture Time Out: Time since last access of a GL texture in seconds after which it is freed. (Set to 0 to keep textures allocated.) */
	int texture_time_out(void);
	/* Texture Collection Rate: Number of seconds between each run of the GL texture garbage collector */
	int texture_collection_rate(void);
	/* Window Draw Method: Drawing method used by the window manager */
	enum window_draw_method_enum {
		window_draw_method_AUTOMATIC = 3,
		window_draw_method_TRIPLE_BUFFER = 0,
		window_draw_method_OVERLAP = 1,
		window_draw_method_OVERLAP_FLIP = 4,
		window_draw_method_FULL = 2,
	};
	window_draw_method_enum window_draw_method(void);
	/* Audio Mixing Buffer: Sets the number of samples used by the audio mixing buffer */
	enum audio_mixing_buffer_enum {
		audio_mixing_buffer_SAMPLES_256 = 256,
		audio_mixing_buffer_SAMPLES_512 = 512,
		audio_mixing_buffer_SAMPLES_1024 = 1024,
		audio_mixing_buffer_SAMPLES_2048 = 2048,
		audio_mixing_buffer_SAMPLES_4096 = 4096,
		audio_mixing_buffer_SAMPLES_8192 = 8192,
		audio_mixing_buffer_SAMPLES_16384 = 16384,
		audio_mixing_buffer_SAMPLES_32768 = 32768,
	};
	audio_mixing_buffer_enum audio_mixing_buffer(void);
	/* Audio Device: Sets the audio output device */
	enum audio_device_enum {
		audio_device_NONE = 0,
	};
	audio_device_enum audio_device(void);
	/* Audio Sample Rate: Sets the audio sample rate */
	enum audio_sample_rate_enum {
		audio_sample_rate_RATE_44100 = 44100,
		audio_sample_rate_RATE_48000 = 48000,
		audio_sample_rate_RATE_96000 = 96000,
		audio_sample_rate_RATE_192000 = 192000,
	};
	audio_sample_rate_enum audio_sample_rate(void);
	/* Audio Sample Format: Sets the audio sample format */
	enum audio_sample_format_enum {
		audio_sample_format_U8 = 1,
		audio_sample_format_S16 = 18,
		audio_sample_format_S24 = 19,
		audio_sample_format_S32 = 20,
		audio_sample_format_FLOAT = 36,
		audio_sample_format_DOUBLE = 40,
	};
	audio_sample_format_enum audio_sample_format(void);
	/* Audio Channels: Sets the audio channel count */
	enum audio_channels_enum {
		audio_channels_MONO = 1,
		audio_channels_STEREO = 2,
		audio_channels_SURROUND4 = 4,
		audio_channels_SURROUND51 = 6,
		audio_channels_SURROUND71 = 8,
	};
	audio_channels_enum audio_channels(void);
	/* FPS: Frame rate for the screencast to be played back */
	int screencast_fps(void);
	/* Wait Timer (ms): Time in milliseconds between each frame recorded for screencast */
	int screencast_wait_time(void);
	/* Text Anti-aliasing: Draw user interface text anti-aliased */
	bool use_text_antialiasing(void);
};

/**************** Addon ****************/

class Addon : public Pointer {
public:
	Addon(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Module: Module name */
	std::string module(void);
};

/**************** Vector Font ****************/

class VectorFont : public ID {
public:
	VectorFont(const PointerRNA& ptr) :
		ID(ptr)
		{}

	/* File Path */
	std::string filepath(void);
	/* Packed File */
	PackedFile packed_file(void);
};

/**************** Operator ****************/

class Operator : public Pointer {
public:
	Operator(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Properties */
	OperatorProperties properties(void);
	/* Has Reports: Operator has a set of reports (warnings and errors) from last execution */
	bool has_reports(void);
	/* layout */
	UILayout layout(void);
	/* bl_idname */
	std::string bl_idname(void);
	/* bl_label */
	std::string bl_label(void);
	/* bl_description */
	std::string bl_description(void);
	/* Options: Options for this operator type */
	enum bl_options_enum {
		bl_options_REGISTER = 1,
		bl_options_UNDO = 2,
		bl_options_BLOCKING = 4,
		bl_options_MACRO = 8,
		bl_options_GRAB_POINTER = 16,
		bl_options_PRESET = 32,
	};
	bl_options_enum bl_options(void);
};

/**************** Operator Properties ****************/

class OperatorProperties : public Pointer {
public:
	OperatorProperties(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Operator Mouse Path ****************/

class OperatorMousePath : public PropertyGroup {
public:
	OperatorMousePath(const PointerRNA& ptr) :
		PropertyGroup(ptr)
		{}

};

/**************** Operator File List Element ****************/

class OperatorFileListElement : public PropertyGroup {
public:
	OperatorFileListElement(const PointerRNA& ptr) :
		PropertyGroup(ptr)
		{}

};

/**************** Macro Operator ****************/

class Macro : public Pointer {
public:
	Macro(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name */
	std::string name(void);
	/* Properties */
	OperatorProperties properties(void);
	/* bl_idname */
	std::string bl_idname(void);
	/* bl_label */
	std::string bl_label(void);
	/* bl_description */
	std::string bl_description(void);
	/* Options: Options for this operator type */
	enum bl_options_enum {
		bl_options_REGISTER = 1,
		bl_options_UNDO = 2,
		bl_options_BLOCKING = 4,
		bl_options_MACRO = 8,
		bl_options_GRAB_POINTER = 16,
		bl_options_PRESET = 32,
	};
	bl_options_enum bl_options(void);
};

/**************** OperatorTypeMacro ****************/

class OperatorTypeMacro : public Pointer {
public:
	OperatorTypeMacro(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Properties */
	OperatorProperties properties(void);
};

/**************** Event ****************/

class Event : public Pointer {
public:
	Event(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* ASCII: Single ASCII character for this event */
	std::string ascii(void);
	/* Value: The type of event, only applies to some */
	enum value_enum {
		value_ANY = -1,
		value_NOTHING = 0,
		value_PRESS = 1,
		value_RELEASE = 2,
		value_CLICK = 3,
		value_DOUBLE_CLICK = 4,
	};
	value_enum value(void);
	/* Type */
	enum type_enum {
		type_NONE = 0,
		type_LEFTMOUSE = 1,
		type_MIDDLEMOUSE = 2,
		type_RIGHTMOUSE = 3,
		type_BUTTON4MOUSE = 7,
		type_BUTTON5MOUSE = 8,
		type_ACTIONMOUSE = 5,
		type_SELECTMOUSE = 6,
		type_MOUSEMOVE = 4,
		type_INBETWEEN_MOUSEMOVE = 17,
		type_TRACKPADPAN = 14,
		type_TRACKPADZOOM = 15,
		type_MOUSEROTATE = 16,
		type_WHEELUPMOUSE = 10,
		type_WHEELDOWNMOUSE = 11,
		type_WHEELINMOUSE = 12,
		type_WHEELOUTMOUSE = 13,
		type_EVT_TWEAK_L = 20482,
		type_EVT_TWEAK_M = 20483,
		type_EVT_TWEAK_R = 20484,
		type_EVT_TWEAK_A = 20485,
		type_EVT_TWEAK_S = 20486,
		type_A = 97,
		type_B = 98,
		type_C = 99,
		type_D = 100,
		type_E = 101,
		type_F = 102,
		type_G = 103,
		type_H = 104,
		type_I = 105,
		type_J = 106,
		type_K = 107,
		type_L = 108,
		type_M = 109,
		type_N = 110,
		type_O = 111,
		type_P = 112,
		type_Q = 113,
		type_R = 114,
		type_S = 115,
		type_T = 116,
		type_U = 117,
		type_V = 118,
		type_W = 119,
		type_X = 120,
		type_Y = 121,
		type_Z = 122,
		type_ZERO = 48,
		type_ONE = 49,
		type_TWO = 50,
		type_THREE = 51,
		type_FOUR = 52,
		type_FIVE = 53,
		type_SIX = 54,
		type_SEVEN = 55,
		type_EIGHT = 56,
		type_NINE = 57,
		type_LEFT_CTRL = 212,
		type_LEFT_ALT = 213,
		type_LEFT_SHIFT = 217,
		type_RIGHT_ALT = 214,
		type_RIGHT_CTRL = 215,
		type_RIGHT_SHIFT = 216,
		type_OSKEY = 172,
		type_GRLESS = 173,
		type_ESC = 218,
		type_TAB = 219,
		type_RET = 220,
		type_SPACE = 221,
		type_LINE_FEED = 222,
		type_BACK_SPACE = 223,
		type_DEL = 224,
		type_SEMI_COLON = 225,
		type_PERIOD = 226,
		type_COMMA = 227,
		type_QUOTE = 228,
		type_ACCENT_GRAVE = 229,
		type_MINUS = 230,
		type_SLASH = 232,
		type_BACK_SLASH = 233,
		type_EQUAL = 234,
		type_LEFT_BRACKET = 235,
		type_RIGHT_BRACKET = 236,
		type_LEFT_ARROW = 137,
		type_DOWN_ARROW = 138,
		type_RIGHT_ARROW = 139,
		type_UP_ARROW = 140,
		type_NUMPAD_2 = 152,
		type_NUMPAD_4 = 154,
		type_NUMPAD_6 = 156,
		type_NUMPAD_8 = 158,
		type_NUMPAD_1 = 151,
		type_NUMPAD_3 = 153,
		type_NUMPAD_5 = 155,
		type_NUMPAD_7 = 157,
		type_NUMPAD_9 = 159,
		type_NUMPAD_PERIOD = 199,
		type_NUMPAD_SLASH = 161,
		type_NUMPAD_ASTERIX = 160,
		type_NUMPAD_0 = 150,
		type_NUMPAD_MINUS = 162,
		type_NUMPAD_ENTER = 163,
		type_NUMPAD_PLUS = 164,
		type_F1 = 300,
		type_F2 = 301,
		type_F3 = 302,
		type_F4 = 303,
		type_F5 = 304,
		type_F6 = 305,
		type_F7 = 306,
		type_F8 = 307,
		type_F9 = 308,
		type_F10 = 309,
		type_F11 = 310,
		type_F12 = 311,
		type_F13 = 312,
		type_F14 = 313,
		type_F15 = 314,
		type_F16 = 315,
		type_F17 = 316,
		type_F18 = 317,
		type_F19 = 318,
		type_PAUSE = 165,
		type_INSERT = 166,
		type_HOME = 167,
		type_PAGE_UP = 168,
		type_PAGE_DOWN = 169,
		type_END = 170,
		type_MEDIA_PLAY = 174,
		type_MEDIA_STOP = 175,
		type_MEDIA_FIRST = 176,
		type_MEDIA_LAST = 177,
		type_WINDOW_DEACTIVATE = 260,
		type_TIMER = 272,
		type_TIMER0 = 273,
		type_TIMER1 = 274,
		type_TIMER2 = 275,
	};
	type_enum type(void);
	/* Mouse X Position: The window relative vertical location of the mouse */
	int mouse_x(void);
	/* Mouse Y Position: The window relative horizontal location of the mouse */
	int mouse_y(void);
	/* Mouse X Position: The region relative vertical location of the mouse */
	int mouse_region_x(void);
	/* Mouse Y Position: The region relative horizontal location of the mouse */
	int mouse_region_y(void);
	/* Mouse Previous X Position: The window relative vertical location of the mouse */
	int mouse_prev_x(void);
	/* Mouse Previous Y Position: The window relative horizontal location of the mouse */
	int mouse_prev_y(void);
	/* Shift: True when the Shift key is held */
	bool shift(void);
	/* Ctrl: True when the Ctrl key is held */
	bool ctrl(void);
	/* Alt: True when the Alt/Option key is held */
	bool alt(void);
	/* OS Key: True when the Cmd key is held */
	bool oskey(void);
};

/**************** Window ****************/

class Window : public Pointer {
public:
	Window(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Screen: Active screen showing in the window */
	Screen screen(void);
};

/**************** Window Manager ****************/

class WindowManager : public ID {
public:
	WindowManager(const PointerRNA& ptr) :
		ID(ptr),
		operators(ptr),
		windows(ptr),
		keyconfigs(ptr)
		{}

	/* Operators: Operator registry */
	COLLECTION_PROPERTY(Operator, WindowManager, operators)
	/* Windows: Open windows */
	COLLECTION_PROPERTY(Window, WindowManager, windows)
	/* Key Configurations: Registered key configurations */
	COLLECTION_PROPERTY(KeyConfig, WindowManager, keyconfigs)
	/* Text Clipboard */
	std::string clipboard(void);
};

/**************** KeyConfigs ****************/

class KeyConfigurations : public Pointer {
public:
	KeyConfigurations(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Active KeyConfig: Active wm KeyConfig */
	KeyConfig active(void);
	/* Default Key Configuration */
	KeyConfig default(void);
};

/**************** Key Configuration ****************/

class KeyConfig : public Pointer {
public:
	KeyConfig(const PointerRNA& ptr) :
		Pointer(ptr),
		keymaps(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Name of the key configuration */
	std::string name(void);
	/* Key Maps: Key maps configured as part of this configuration */
	COLLECTION_PROPERTY(KeyMap, KeyConfig, keymaps)
	/* User Defined: Indicates that a keyconfig was defined by the user */
	bool is_user_defined(void);
};

/**************** Key Maps ****************/

class KeyMaps : public Pointer {
public:
	KeyMaps(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Key Map ****************/

class KeyMap : public Pointer {
public:
	KeyMap(const PointerRNA& ptr) :
		Pointer(ptr),
		items(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Name: Name of the key map */
	std::string name(void);
	/* Space Type: Optional space type keymap is associated with */
	enum space_type_enum {
		space_type_EMPTY = 0,
		space_type_VIEW_3D = 1,
		space_type_GRAPH_EDITOR = 2,
		space_type_OUTLINER = 3,
		space_type_PROPERTIES = 4,
		space_type_FILE_BROWSER = 5,
		space_type_IMAGE_EDITOR = 6,
		space_type_INFO = 7,
		space_type_SEQUENCE_EDITOR = 8,
		space_type_TEXT_EDITOR = 9,
		space_type_AUDIO_WINDOW = 11,
		space_type_DOPESHEET_EDITOR = 12,
		space_type_NLA_EDITOR = 13,
		space_type_SCRIPTS_WINDOW = 14,
		space_type_TIMELINE = 15,
		space_type_NODE_EDITOR = 16,
		space_type_LOGIC_EDITOR = 17,
		space_type_CONSOLE = 18,
		space_type_USER_PREFERENCES = 19,
	};
	space_type_enum space_type(void);
	/* Region Type: Optional region type keymap is associated with */
	enum region_type_enum {
		region_type_WINDOW = 0,
		region_type_HEADER = 1,
		region_type_CHANNELS = 2,
		region_type_TEMPORARY = 3,
		region_type_UI = 4,
		region_type_TOOLS = 5,
		region_type_TOOL_PROPS = 6,
		region_type_PREVIEW = 7,
	};
	region_type_enum region_type(void);
	/* Items: Items in the keymap, linking an operator to an input event */
	COLLECTION_PROPERTY(KeyMapItem, KeyMap, items)
	/* User Defined: Keymap is defined by the user */
	bool is_user_defined(void);
	/* Modal Keymap: Indicates that a keymap is used for translate modal events for an operator */
	bool is_modal(void);
	/* Items Expanded: Expanded in the user interface */
	bool show_expanded_items(void);
	/* Children Expanded: Children expanded in the user interface */
	bool show_expanded_children(void);
};

/**************** KeyMap Items ****************/

class KeyMapItems : public Pointer {
public:
	KeyMapItems(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Key Map Item ****************/

class KeyMapItem : public Pointer {
public:
	KeyMapItem(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Identifier: Identifier of operator to call on input event */
	std::string idname(void);
	/* Name: Name of operator to call on input event */
	std::string name(void);
	/* Properties: Properties to set when the operator is called */
	OperatorProperties properties(void);
	/* Map Type: Type of event mapping */
	enum map_type_enum {
		map_type_KEYBOARD = 0,
		map_type_TWEAK = 2,
		map_type_MOUSE = 1,
		map_type_TEXTINPUT = 3,
		map_type_TIMER = 4,
	};
	map_type_enum map_type(void);
	/* Type: Type of event */
	enum type_enum {
		type_NONE = 0,
		type_LEFTMOUSE = 1,
		type_MIDDLEMOUSE = 2,
		type_RIGHTMOUSE = 3,
		type_BUTTON4MOUSE = 7,
		type_BUTTON5MOUSE = 8,
		type_ACTIONMOUSE = 5,
		type_SELECTMOUSE = 6,
		type_MOUSEMOVE = 4,
		type_INBETWEEN_MOUSEMOVE = 17,
		type_TRACKPADPAN = 14,
		type_TRACKPADZOOM = 15,
		type_MOUSEROTATE = 16,
		type_WHEELUPMOUSE = 10,
		type_WHEELDOWNMOUSE = 11,
		type_WHEELINMOUSE = 12,
		type_WHEELOUTMOUSE = 13,
		type_EVT_TWEAK_L = 20482,
		type_EVT_TWEAK_M = 20483,
		type_EVT_TWEAK_R = 20484,
		type_EVT_TWEAK_A = 20485,
		type_EVT_TWEAK_S = 20486,
		type_A = 97,
		type_B = 98,
		type_C = 99,
		type_D = 100,
		type_E = 101,
		type_F = 102,
		type_G = 103,
		type_H = 104,
		type_I = 105,
		type_J = 106,
		type_K = 107,
		type_L = 108,
		type_M = 109,
		type_N = 110,
		type_O = 111,
		type_P = 112,
		type_Q = 113,
		type_R = 114,
		type_S = 115,
		type_T = 116,
		type_U = 117,
		type_V = 118,
		type_W = 119,
		type_X = 120,
		type_Y = 121,
		type_Z = 122,
		type_ZERO = 48,
		type_ONE = 49,
		type_TWO = 50,
		type_THREE = 51,
		type_FOUR = 52,
		type_FIVE = 53,
		type_SIX = 54,
		type_SEVEN = 55,
		type_EIGHT = 56,
		type_NINE = 57,
		type_LEFT_CTRL = 212,
		type_LEFT_ALT = 213,
		type_LEFT_SHIFT = 217,
		type_RIGHT_ALT = 214,
		type_RIGHT_CTRL = 215,
		type_RIGHT_SHIFT = 216,
		type_OSKEY = 172,
		type_GRLESS = 173,
		type_ESC = 218,
		type_TAB = 219,
		type_RET = 220,
		type_SPACE = 221,
		type_LINE_FEED = 222,
		type_BACK_SPACE = 223,
		type_DEL = 224,
		type_SEMI_COLON = 225,
		type_PERIOD = 226,
		type_COMMA = 227,
		type_QUOTE = 228,
		type_ACCENT_GRAVE = 229,
		type_MINUS = 230,
		type_SLASH = 232,
		type_BACK_SLASH = 233,
		type_EQUAL = 234,
		type_LEFT_BRACKET = 235,
		type_RIGHT_BRACKET = 236,
		type_LEFT_ARROW = 137,
		type_DOWN_ARROW = 138,
		type_RIGHT_ARROW = 139,
		type_UP_ARROW = 140,
		type_NUMPAD_2 = 152,
		type_NUMPAD_4 = 154,
		type_NUMPAD_6 = 156,
		type_NUMPAD_8 = 158,
		type_NUMPAD_1 = 151,
		type_NUMPAD_3 = 153,
		type_NUMPAD_5 = 155,
		type_NUMPAD_7 = 157,
		type_NUMPAD_9 = 159,
		type_NUMPAD_PERIOD = 199,
		type_NUMPAD_SLASH = 161,
		type_NUMPAD_ASTERIX = 160,
		type_NUMPAD_0 = 150,
		type_NUMPAD_MINUS = 162,
		type_NUMPAD_ENTER = 163,
		type_NUMPAD_PLUS = 164,
		type_F1 = 300,
		type_F2 = 301,
		type_F3 = 302,
		type_F4 = 303,
		type_F5 = 304,
		type_F6 = 305,
		type_F7 = 306,
		type_F8 = 307,
		type_F9 = 308,
		type_F10 = 309,
		type_F11 = 310,
		type_F12 = 311,
		type_F13 = 312,
		type_F14 = 313,
		type_F15 = 314,
		type_F16 = 315,
		type_F17 = 316,
		type_F18 = 317,
		type_F19 = 318,
		type_PAUSE = 165,
		type_INSERT = 166,
		type_HOME = 167,
		type_PAGE_UP = 168,
		type_PAGE_DOWN = 169,
		type_END = 170,
		type_MEDIA_PLAY = 174,
		type_MEDIA_STOP = 175,
		type_MEDIA_FIRST = 176,
		type_MEDIA_LAST = 177,
		type_WINDOW_DEACTIVATE = 260,
		type_TIMER = 272,
		type_TIMER0 = 273,
		type_TIMER1 = 274,
		type_TIMER2 = 275,
	};
	type_enum type(void);
	/* Value */
	enum value_enum {
		value_ANY = -1,
		value_NOTHING = 0,
		value_PRESS = 1,
		value_RELEASE = 2,
		value_CLICK = 3,
		value_DOUBLE_CLICK = 4,
	};
	value_enum value(void);
	/* id: ID of the item */
	int id(void);
	/* Any: Any modifier keys pressed */
	bool any(void);
	/* Shift: Shift key pressed */
	bool shift(void);
	/* Ctrl: Control key pressed */
	bool ctrl(void);
	/* Alt: Alt key pressed */
	bool alt(void);
	/* OS Key: Operating system key pressed */
	bool oskey(void);
	/* Key Modifier: Regular key pressed as a modifier */
	enum key_modifier_enum {
		key_modifier_NONE = 0,
		key_modifier_LEFTMOUSE = 1,
		key_modifier_MIDDLEMOUSE = 2,
		key_modifier_RIGHTMOUSE = 3,
		key_modifier_BUTTON4MOUSE = 7,
		key_modifier_BUTTON5MOUSE = 8,
		key_modifier_ACTIONMOUSE = 5,
		key_modifier_SELECTMOUSE = 6,
		key_modifier_MOUSEMOVE = 4,
		key_modifier_INBETWEEN_MOUSEMOVE = 17,
		key_modifier_TRACKPADPAN = 14,
		key_modifier_TRACKPADZOOM = 15,
		key_modifier_MOUSEROTATE = 16,
		key_modifier_WHEELUPMOUSE = 10,
		key_modifier_WHEELDOWNMOUSE = 11,
		key_modifier_WHEELINMOUSE = 12,
		key_modifier_WHEELOUTMOUSE = 13,
		key_modifier_EVT_TWEAK_L = 20482,
		key_modifier_EVT_TWEAK_M = 20483,
		key_modifier_EVT_TWEAK_R = 20484,
		key_modifier_EVT_TWEAK_A = 20485,
		key_modifier_EVT_TWEAK_S = 20486,
		key_modifier_A = 97,
		key_modifier_B = 98,
		key_modifier_C = 99,
		key_modifier_D = 100,
		key_modifier_E = 101,
		key_modifier_F = 102,
		key_modifier_G = 103,
		key_modifier_H = 104,
		key_modifier_I = 105,
		key_modifier_J = 106,
		key_modifier_K = 107,
		key_modifier_L = 108,
		key_modifier_M = 109,
		key_modifier_N = 110,
		key_modifier_O = 111,
		key_modifier_P = 112,
		key_modifier_Q = 113,
		key_modifier_R = 114,
		key_modifier_S = 115,
		key_modifier_T = 116,
		key_modifier_U = 117,
		key_modifier_V = 118,
		key_modifier_W = 119,
		key_modifier_X = 120,
		key_modifier_Y = 121,
		key_modifier_Z = 122,
		key_modifier_ZERO = 48,
		key_modifier_ONE = 49,
		key_modifier_TWO = 50,
		key_modifier_THREE = 51,
		key_modifier_FOUR = 52,
		key_modifier_FIVE = 53,
		key_modifier_SIX = 54,
		key_modifier_SEVEN = 55,
		key_modifier_EIGHT = 56,
		key_modifier_NINE = 57,
		key_modifier_LEFT_CTRL = 212,
		key_modifier_LEFT_ALT = 213,
		key_modifier_LEFT_SHIFT = 217,
		key_modifier_RIGHT_ALT = 214,
		key_modifier_RIGHT_CTRL = 215,
		key_modifier_RIGHT_SHIFT = 216,
		key_modifier_OSKEY = 172,
		key_modifier_GRLESS = 173,
		key_modifier_ESC = 218,
		key_modifier_TAB = 219,
		key_modifier_RET = 220,
		key_modifier_SPACE = 221,
		key_modifier_LINE_FEED = 222,
		key_modifier_BACK_SPACE = 223,
		key_modifier_DEL = 224,
		key_modifier_SEMI_COLON = 225,
		key_modifier_PERIOD = 226,
		key_modifier_COMMA = 227,
		key_modifier_QUOTE = 228,
		key_modifier_ACCENT_GRAVE = 229,
		key_modifier_MINUS = 230,
		key_modifier_SLASH = 232,
		key_modifier_BACK_SLASH = 233,
		key_modifier_EQUAL = 234,
		key_modifier_LEFT_BRACKET = 235,
		key_modifier_RIGHT_BRACKET = 236,
		key_modifier_LEFT_ARROW = 137,
		key_modifier_DOWN_ARROW = 138,
		key_modifier_RIGHT_ARROW = 139,
		key_modifier_UP_ARROW = 140,
		key_modifier_NUMPAD_2 = 152,
		key_modifier_NUMPAD_4 = 154,
		key_modifier_NUMPAD_6 = 156,
		key_modifier_NUMPAD_8 = 158,
		key_modifier_NUMPAD_1 = 151,
		key_modifier_NUMPAD_3 = 153,
		key_modifier_NUMPAD_5 = 155,
		key_modifier_NUMPAD_7 = 157,
		key_modifier_NUMPAD_9 = 159,
		key_modifier_NUMPAD_PERIOD = 199,
		key_modifier_NUMPAD_SLASH = 161,
		key_modifier_NUMPAD_ASTERIX = 160,
		key_modifier_NUMPAD_0 = 150,
		key_modifier_NUMPAD_MINUS = 162,
		key_modifier_NUMPAD_ENTER = 163,
		key_modifier_NUMPAD_PLUS = 164,
		key_modifier_F1 = 300,
		key_modifier_F2 = 301,
		key_modifier_F3 = 302,
		key_modifier_F4 = 303,
		key_modifier_F5 = 304,
		key_modifier_F6 = 305,
		key_modifier_F7 = 306,
		key_modifier_F8 = 307,
		key_modifier_F9 = 308,
		key_modifier_F10 = 309,
		key_modifier_F11 = 310,
		key_modifier_F12 = 311,
		key_modifier_F13 = 312,
		key_modifier_F14 = 313,
		key_modifier_F15 = 314,
		key_modifier_F16 = 315,
		key_modifier_F17 = 316,
		key_modifier_F18 = 317,
		key_modifier_F19 = 318,
		key_modifier_PAUSE = 165,
		key_modifier_INSERT = 166,
		key_modifier_HOME = 167,
		key_modifier_PAGE_UP = 168,
		key_modifier_PAGE_DOWN = 169,
		key_modifier_END = 170,
		key_modifier_MEDIA_PLAY = 174,
		key_modifier_MEDIA_STOP = 175,
		key_modifier_MEDIA_FIRST = 176,
		key_modifier_MEDIA_LAST = 177,
		key_modifier_WINDOW_DEACTIVATE = 260,
		key_modifier_TIMER = 272,
		key_modifier_TIMER0 = 273,
		key_modifier_TIMER1 = 274,
		key_modifier_TIMER2 = 275,
	};
	key_modifier_enum key_modifier(void);
	/* Expanded: Show key map event and property details in the user interface */
	bool show_expanded(void);
	/* Property Value: The value this event translates to in a modal keymap */
	enum propvalue_enum {
		propvalue_NONE = 0,
	};
	propvalue_enum propvalue(void);
	/* Active: Activate or deactivate item */
	bool active(void);
	/* User Defined: Is this keymap item user defined (doesn't just override a builtin item) */
	bool is_user_defined(void);
};

/**************** World ****************/

class World : public ID {
public:
	World(const PointerRNA& ptr) :
		ID(ptr),
		texture_slots(ptr)
		{}

	/* Animation Data: Animation data for this datablock */
	AnimData animation_data(void);
	/* Textures: Texture slots defining the mapping and influence of textures */
	COLLECTION_PROPERTY(WorldTextureSlot, World, texture_slots)
	/* Active Texture: Active texture slot being displayed */
	Texture active_texture(void);
	/* Active Texture Index: Index of active texture slot */
	int active_texture_index(void);
	/* Horizon Color: Color at the horizon */
	Array<float, 3> horizon_color(void);
	/* Zenith Color: Color at the zenith */
	Array<float, 3> zenith_color(void);
	/* Ambient Color */
	Array<float, 3> ambient_color(void);
	/* Exposure: Amount of exponential color correction for light */
	float exposure(void);
	/* Range: The color range that will be mapped to 0-1 */
	float color_range(void);
	/* Blend Sky: Render background with natural progression from horizon to zenith */
	bool use_sky_blend(void);
	/* Paper Sky: Flatten blend or texture coordinates */
	bool use_sky_paper(void);
	/* Real Sky: Render background with a real horizon, relative to the camera angle */
	bool use_sky_real(void);
	/* Lighting: World lighting settings */
	WorldLighting light_settings(void);
	/* Mist: World mist settings */
	WorldMistSettings mist_settings(void);
	/* Stars: World stars settings */
	WorldStarsSettings star_settings(void);
};

/**************** Texture Slots ****************/

class WorldTextureSlots : public Pointer {
public:
	WorldTextureSlots(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
};

/**************** Lighting ****************/

class WorldLighting : public Pointer {
public:
	WorldLighting(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Use Ambient Occlusion: Use Ambient Occlusion to add shadowing based on distance between objects */
	bool use_ambient_occlusion(void);
	/* Factor: Factor for ambient occlusion blending */
	float ao_factor(void);
	/* Blend Mode: Defines how AO mixes with material shading */
	enum ao_blend_type_enum {
		ao_blend_type_MULTIPLY = 3,
		ao_blend_type_ADD = 0,
	};
	ao_blend_type_enum ao_blend_type(void);
	/* Use Environment Lighting: Add light coming from the environment */
	bool use_environment_light(void);
	/* Environment Color: Defines the strength of environment light */
	float environment_energy(void);
	/* Environment Color: Defines where the color of the environment light comes from */
	enum environment_color_enum {
		environment_color_PLAIN = 0,
		environment_color_SKY_COLOR = 1,
		environment_color_SKY_TEXTURE = 2,
	};
	environment_color_enum environment_color(void);
	/* Use Indirect Lighting: Add indirect light bouncing of surrounding objects */
	bool use_indirect_light(void);
	/* Indirect Factor: Factor for how much surrounding objects contribute to light */
	float indirect_factor(void);
	/* Bounces: Number of indirect diffuse light bounces to use for approximate ambient occlusion */
	int indirect_bounces(void);
	/* Gather Method */
	enum gather_method_enum {
		gather_method_RAYTRACE = 0,
		gather_method_APPROXIMATE = 1,
	};
	gather_method_enum gather_method(void);
	/* Passes: Number of preprocessing passes to reduce overocclusion (for approximate ambient occlusion) */
	int passes(void);
	/* Distance: Length of rays, defines how far away other faces give occlusion effect */
	float distance(void);
	/* Strength: Distance attenuation factor, the higher, the less influence farther away objects have influence */
	float falloff_strength(void);
	/* Bias: Bias (in radians) to prevent smoothed faces from showing banding (for Raytrace Constant Jittered) */
	float bias(void);
	/* Threshold: Samples below this threshold will be considered fully shadowed/unshadowed and skipped (for Raytrace Adaptive QMC) */
	float threshold(void);
	/* Adapt To Speed: Use the speed vector pass to reduce AO samples in fast moving pixels. Higher values result in more aggressive sample reduction. Requires Vec pass enabled (for Raytrace Adaptive QMC) */
	float adapt_to_speed(void);
	/* Error Tolerance: Low values are slower and higher quality (for Approximate) */
	float error_threshold(void);
	/* Correction: Ad-hoc correction for over-occlusion due to the approximation (for Approximate) */
	float correction(void);
	/* Falloff */
	bool use_falloff(void);
	/* Pixel Cache: Cache AO results in pixels and interpolate over neighbouring pixels for speedup (for Approximate) */
	bool use_cache(void);
	/* Samples: Amount of ray samples. Higher values give smoother results and longer rendering times */
	int samples(void);
	/* Sample Method: Method for generating shadow samples (for Raytrace) */
	enum sample_method_enum {
		sample_method_CONSTANT_JITTERED = 0,
		sample_method_ADAPTIVE_QMC = 1,
		sample_method_CONSTANT_QMC = 2,
	};
	sample_method_enum sample_method(void);
};

/**************** World Mist ****************/

class WorldMistSettings : public Pointer {
public:
	WorldMistSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Use Mist: Occlude objects with the environment color as they are further away */
	bool use_mist(void);
	/* Intensity: Intensity of the mist effect */
	float intensity(void);
	/* Start: Starting distance of the mist, measured from the camera */
	float start(void);
	/* Depth: The distance over which the mist effect fades in */
	float depth(void);
	/* Height: Control how much mist density decreases with height */
	float height(void);
	/* Falloff: Type of transition used to fade mist */
	enum falloff_enum {
		falloff_QUADRATIC = 0,
		falloff_LINEAR = 1,
		falloff_INVERSE_QUADRATIC = 2,
	};
	falloff_enum falloff(void);
};

/**************** World Stars ****************/

class WorldStarsSettings : public Pointer {
public:
	WorldStarsSettings(const PointerRNA& ptr) :
		Pointer(ptr)
		{}

	/* RNA: RNA type definition */
	Struct rna_type(void);
	/* Use Stars: Enable starfield generation */
	bool use_stars(void);
	/* Size: Average screen dimension of stars */
	float size(void);
	/* Minimum Distance: Minimum distance to the camera for stars */
	float distance_min(void);
	/* Average Separation: Average distance between any two stars */
	float average_separation(void);
	/* Color Randomization: Randomize star colors */
	float color_random(void);
};

/**************** World Texture Slot ****************/

class WorldTextureSlot : public TextureSlot {
public:
	WorldTextureSlot(const PointerRNA& ptr) :
		TextureSlot(ptr)
		{}

	/* Blend: Affect the color progression of the background */
	bool use_map_blend(void);
	/* Horizon: Affect the color of the horizon */
	bool use_map_horizon(void);
	/* Zenith Up: Affect the color of the zenith above */
	bool use_map_zenith_up(void);
	/* Zenith Down: Affect the color of the zenith below */
	bool use_map_zenith_down(void);
	/* Texture Coordinates: Texture coordinates used to map the texture onto the background */
	enum texture_coords_enum {
		texture_coords_VIEW = 128,
		texture_coords_GLOBAL = 8,
		texture_coords_ANGMAP = 64,
		texture_coords_SPHERE = 256,
		texture_coords_TUBE = 1024,
		texture_coords_OBJECT = 32,
	};
	texture_coords_enum texture_coords(void);
	/* Object: Object to use for mapping with Object texture coordinates */
	Object object(void);
	/* Blend Factor: Amount texture affects color progression of the background */
	float blend_factor(void);
	/* Horizon Factor: Amount texture affects color of the horizon */
	float horizon_factor(void);
	/* Zenith Up Factor: Amount texture affects color of the zenith above */
	float zenith_up_factor(void);
	/* Zenith Down Factor: Amount texture affects color of the zenith below */
	float zenith_down_factor(void);
};

/**************** Implementation ****************/
	POINTER_PROPERTY(Struct, Struct, rna_type)
	STRING_PROPERTY(Struct, name)
	STRING_PROPERTY(Struct, identifier)
	STRING_PROPERTY(Struct, description)
	POINTER_PROPERTY(Struct, Struct, base)
	POINTER_PROPERTY(Struct, Struct, nested)
	POINTER_PROPERTY(StringProperty, Struct, name_property)



	POINTER_PROPERTY(Struct, Property, rna_type)
	STRING_PROPERTY(Property, name)
	STRING_PROPERTY(Property, identifier)
	STRING_PROPERTY(Property, description)
	ENUM_PROPERTY(type_enum, Property, type)
	ENUM_PROPERTY(subtype_enum, Property, subtype)
	POINTER_PROPERTY(Struct, Property, srna)
	ENUM_PROPERTY(unit_enum, Property, unit)
	BOOLEAN_PROPERTY(Property, is_readonly)
	BOOLEAN_PROPERTY(Property, is_required)
	BOOLEAN_PROPERTY(Property, is_never_none)
	BOOLEAN_PROPERTY(Property, is_hidden)
	BOOLEAN_PROPERTY(Property, is_output)
	BOOLEAN_PROPERTY(Property, is_registered)
	BOOLEAN_PROPERTY(Property, is_registered_optional)
	BOOLEAN_PROPERTY(Property, is_runtime)
	BOOLEAN_PROPERTY(Property, is_enum_flag)

	BOOLEAN_PROPERTY(BooleanProperty, default)
	BOOLEAN_ARRAY_PROPERTY(BooleanProperty, 3, default_array)
	INT_PROPERTY(BooleanProperty, array_length)

	INT_PROPERTY(IntProperty, default)
	INT_ARRAY_PROPERTY(IntProperty, 3, default_array)
	INT_PROPERTY(IntProperty, array_length)
	INT_PROPERTY(IntProperty, hard_min)
	INT_PROPERTY(IntProperty, hard_max)
	INT_PROPERTY(IntProperty, soft_min)
	INT_PROPERTY(IntProperty, soft_max)
	INT_PROPERTY(IntProperty, step)

	FLOAT_PROPERTY(FloatProperty, default)
	FLOAT_ARRAY_PROPERTY(FloatProperty, 3, default_array)
	INT_PROPERTY(FloatProperty, array_length)
	FLOAT_PROPERTY(FloatProperty, hard_min)
	FLOAT_PROPERTY(FloatProperty, hard_max)
	FLOAT_PROPERTY(FloatProperty, soft_min)
	FLOAT_PROPERTY(FloatProperty, soft_max)
	FLOAT_PROPERTY(FloatProperty, step)
	INT_PROPERTY(FloatProperty, precision)

	STRING_PROPERTY(StringProperty, default)
	INT_PROPERTY(StringProperty, length_max)

	ENUM_PROPERTY(default_enum, EnumProperty, default)
	ENUM_PROPERTY(default_flag_enum, EnumProperty, default_flag)


	POINTER_PROPERTY(Struct, EnumPropertyItem, rna_type)
	STRING_PROPERTY(EnumPropertyItem, name)
	STRING_PROPERTY(EnumPropertyItem, description)
	STRING_PROPERTY(EnumPropertyItem, identifier)
	INT_PROPERTY(EnumPropertyItem, value)

	POINTER_PROPERTY(Struct, PointerProperty, fixed_type)

	POINTER_PROPERTY(Struct, CollectionProperty, fixed_type)

	POINTER_PROPERTY(Struct, Function, rna_type)
	STRING_PROPERTY(Function, identifier)
	STRING_PROPERTY(Function, description)

	BOOLEAN_PROPERTY(Function, is_registered)
	BOOLEAN_PROPERTY(Function, is_registered_optional)
	BOOLEAN_PROPERTY(Function, use_self)

	POINTER_PROPERTY(Struct, BlenderRNA, rna_type)


	POINTER_PROPERTY(Struct, UnknownType, rna_type)

	POINTER_PROPERTY(Struct, AnyType, rna_type)

	POINTER_PROPERTY(Struct, ID, rna_type)
	STRING_PROPERTY(ID, name)
	INT_PROPERTY(ID, users)
	BOOLEAN_PROPERTY(ID, use_fake_user)
	BOOLEAN_PROPERTY(ID, tag)
	POINTER_PROPERTY(Library, ID, library)

	POINTER_PROPERTY(Struct, PropertyGroupItem, rna_type)

	POINTER_PROPERTY(Struct, PropertyGroup, rna_type)

	POINTER_PROPERTY(Struct, IDMaterials, rna_type)

	STRING_PROPERTY(Library, filepath)
	POINTER_PROPERTY(Library, Library, parent)

	ENUM_PROPERTY(type_enum, Texture, type)
	BOOLEAN_PROPERTY(Texture, use_color_ramp)
	POINTER_PROPERTY(ColorRamp, Texture, color_ramp)
	FLOAT_PROPERTY(Texture, intensity)
	FLOAT_PROPERTY(Texture, contrast)
	FLOAT_PROPERTY(Texture, saturation)
	FLOAT_PROPERTY(Texture, factor_red)
	FLOAT_PROPERTY(Texture, factor_green)
	FLOAT_PROPERTY(Texture, factor_blue)
	BOOLEAN_PROPERTY(Texture, use_preview_alpha)
	BOOLEAN_PROPERTY(Texture, use_nodes)
	POINTER_PROPERTY(NodeTree, Texture, node_tree)
	POINTER_PROPERTY(AnimData, Texture, animation_data)

	FLOAT_PROPERTY(CloudsTexture, noise_scale)
	INT_PROPERTY(CloudsTexture, noise_depth)
	ENUM_PROPERTY(noise_basis_enum, CloudsTexture, noise_basis)
	ENUM_PROPERTY(noise_type_enum, CloudsTexture, noise_type)
	ENUM_PROPERTY(cloud_type_enum, CloudsTexture, cloud_type)
	FLOAT_PROPERTY(CloudsTexture, nabla)

	FLOAT_PROPERTY(WoodTexture, noise_scale)
	FLOAT_PROPERTY(WoodTexture, turbulence)
	ENUM_PROPERTY(noise_basis_enum, WoodTexture, noise_basis)
	ENUM_PROPERTY(noise_type_enum, WoodTexture, noise_type)
	ENUM_PROPERTY(wood_type_enum, WoodTexture, wood_type)
	ENUM_PROPERTY(noisebasis_2_enum, WoodTexture, noisebasis_2)
	FLOAT_PROPERTY(WoodTexture, nabla)

	FLOAT_PROPERTY(MarbleTexture, noise_scale)
	FLOAT_PROPERTY(MarbleTexture, turbulence)
	INT_PROPERTY(MarbleTexture, noise_depth)
	ENUM_PROPERTY(noise_type_enum, MarbleTexture, noise_type)
	ENUM_PROPERTY(marble_type_enum, MarbleTexture, marble_type)
	ENUM_PROPERTY(noise_basis_enum, MarbleTexture, noise_basis)
	ENUM_PROPERTY(noisebasis_2_enum, MarbleTexture, noisebasis_2)
	FLOAT_PROPERTY(MarbleTexture, nabla)

	FLOAT_PROPERTY(MagicTexture, turbulence)
	INT_PROPERTY(MagicTexture, noise_depth)

	ENUM_PROPERTY(progression_enum, BlendTexture, progression)
	ENUM_PROPERTY(use_flip_axis_enum, BlendTexture, use_flip_axis)

	FLOAT_PROPERTY(StucciTexture, turbulence)
	ENUM_PROPERTY(noise_basis_enum, StucciTexture, noise_basis)
	FLOAT_PROPERTY(StucciTexture, noise_scale)
	ENUM_PROPERTY(noise_type_enum, StucciTexture, noise_type)
	ENUM_PROPERTY(stucci_type_enum, StucciTexture, stucci_type)


	BOOLEAN_PROPERTY(ImageTexture, use_interpolation)
	BOOLEAN_PROPERTY(ImageTexture, use_flip_axis)
	BOOLEAN_PROPERTY(ImageTexture, use_alpha)
	BOOLEAN_PROPERTY(ImageTexture, use_calculate_alpha)
	BOOLEAN_PROPERTY(ImageTexture, invert_alpha)
	BOOLEAN_PROPERTY(ImageTexture, use_mipmap)
	BOOLEAN_PROPERTY(ImageTexture, use_mipmap_gauss)
	ENUM_PROPERTY(filter_type_enum, ImageTexture, filter_type)
	INT_PROPERTY(ImageTexture, filter_probes)
	INT_PROPERTY(ImageTexture, filter_eccentricity)
	BOOLEAN_PROPERTY(ImageTexture, use_filter_size_min)
	FLOAT_PROPERTY(ImageTexture, filter_size)
	ENUM_PROPERTY(extension_enum, ImageTexture, extension)
	INT_PROPERTY(ImageTexture, repeat_x)
	INT_PROPERTY(ImageTexture, repeat_y)
	BOOLEAN_PROPERTY(ImageTexture, use_mirror_x)
	BOOLEAN_PROPERTY(ImageTexture, use_mirror_y)
	BOOLEAN_PROPERTY(ImageTexture, use_checker_odd)
	BOOLEAN_PROPERTY(ImageTexture, use_checker_even)
	FLOAT_PROPERTY(ImageTexture, checker_distance)
	FLOAT_PROPERTY(ImageTexture, crop_min_x)
	FLOAT_PROPERTY(ImageTexture, crop_min_y)
	FLOAT_PROPERTY(ImageTexture, crop_max_x)
	FLOAT_PROPERTY(ImageTexture, crop_max_y)
	POINTER_PROPERTY(Image, ImageTexture, image)
	POINTER_PROPERTY(ImageUser, ImageTexture, image_user)
	BOOLEAN_PROPERTY(ImageTexture, use_normal_map)


	POINTER_PROPERTY(Image, EnvironmentMapTexture, image)
	POINTER_PROPERTY(ImageUser, EnvironmentMapTexture, image_user)
	BOOLEAN_PROPERTY(EnvironmentMapTexture, use_mipmap)
	BOOLEAN_PROPERTY(EnvironmentMapTexture, use_mipmap_gauss)
	ENUM_PROPERTY(filter_type_enum, EnvironmentMapTexture, filter_type)
	INT_PROPERTY(EnvironmentMapTexture, filter_probes)
	INT_PROPERTY(EnvironmentMapTexture, filter_eccentricity)
	BOOLEAN_PROPERTY(EnvironmentMapTexture, use_filter_size_min)
	FLOAT_PROPERTY(EnvironmentMapTexture, filter_size)
	POINTER_PROPERTY(EnvironmentMap, EnvironmentMapTexture, environment_map)

	ENUM_PROPERTY(musgrave_type_enum, MusgraveTexture, musgrave_type)
	FLOAT_PROPERTY(MusgraveTexture, dimension_max)
	FLOAT_PROPERTY(MusgraveTexture, lacunarity)
	FLOAT_PROPERTY(MusgraveTexture, octaves)
	FLOAT_PROPERTY(MusgraveTexture, offset)
	FLOAT_PROPERTY(MusgraveTexture, gain)
	FLOAT_PROPERTY(MusgraveTexture, noise_intensity)
	FLOAT_PROPERTY(MusgraveTexture, noise_scale)
	ENUM_PROPERTY(noise_basis_enum, MusgraveTexture, noise_basis)
	FLOAT_PROPERTY(MusgraveTexture, nabla)

	FLOAT_PROPERTY(VoronoiTexture, weight_1)
	FLOAT_PROPERTY(VoronoiTexture, weight_2)
	FLOAT_PROPERTY(VoronoiTexture, weight_3)
	FLOAT_PROPERTY(VoronoiTexture, weight_4)
	FLOAT_PROPERTY(VoronoiTexture, minkovsky_exponent)
	ENUM_PROPERTY(distance_metric_enum, VoronoiTexture, distance_metric)
	ENUM_PROPERTY(color_mode_enum, VoronoiTexture, color_mode)
	FLOAT_PROPERTY(VoronoiTexture, noise_intensity)
	FLOAT_PROPERTY(VoronoiTexture, noise_scale)
	FLOAT_PROPERTY(VoronoiTexture, nabla)

	FLOAT_PROPERTY(DistortedNoiseTexture, distortion)
	FLOAT_PROPERTY(DistortedNoiseTexture, noise_scale)
	ENUM_PROPERTY(noise_basis_enum, DistortedNoiseTexture, noise_basis)
	ENUM_PROPERTY(noise_distortion_enum, DistortedNoiseTexture, noise_distortion)
	FLOAT_PROPERTY(DistortedNoiseTexture, nabla)

	POINTER_PROPERTY(Struct, PointDensity, rna_type)
	ENUM_PROPERTY(point_source_enum, PointDensity, point_source)
	POINTER_PROPERTY(Object, PointDensity, object)
	POINTER_PROPERTY(ParticleSystem, PointDensity, particle_system)
	ENUM_PROPERTY(particle_cache_space_enum, PointDensity, particle_cache_space)
	ENUM_PROPERTY(vertex_cache_space_enum, PointDensity, vertex_cache_space)
	FLOAT_PROPERTY(PointDensity, radius)
	ENUM_PROPERTY(falloff_enum, PointDensity, falloff)
	FLOAT_PROPERTY(PointDensity, falloff_soft)
	ENUM_PROPERTY(color_source_enum, PointDensity, color_source)
	FLOAT_PROPERTY(PointDensity, speed_scale)
	POINTER_PROPERTY(ColorRamp, PointDensity, color_ramp)
	BOOLEAN_PROPERTY(PointDensity, use_turbulence)
	FLOAT_PROPERTY(PointDensity, turbulence_scale)
	FLOAT_PROPERTY(PointDensity, turbulence_strength)
	INT_PROPERTY(PointDensity, turbulence_depth)
	ENUM_PROPERTY(turbulence_influence_enum, PointDensity, turbulence_influence)
	ENUM_PROPERTY(noise_basis_enum, PointDensity, noise_basis)

	POINTER_PROPERTY(PointDensity, PointDensityTexture, point_density)

	POINTER_PROPERTY(Struct, VoxelData, rna_type)
	ENUM_PROPERTY(interpolation_enum, VoxelData, interpolation)
	ENUM_PROPERTY(smoke_data_type_enum, VoxelData, smoke_data_type)
	ENUM_PROPERTY(extension_enum, VoxelData, extension)
	FLOAT_PROPERTY(VoxelData, intensity)
	ENUM_PROPERTY(file_format_enum, VoxelData, file_format)
	STRING_PROPERTY(VoxelData, filepath)
	INT_ARRAY_PROPERTY(VoxelData, 3, resolution)
	BOOLEAN_PROPERTY(VoxelData, use_still_frame)
	INT_PROPERTY(VoxelData, still_frame)
	POINTER_PROPERTY(Object, VoxelData, domain_object)

	POINTER_PROPERTY(VoxelData, VoxelDataTexture, voxel_data)
	POINTER_PROPERTY(Image, VoxelDataTexture, image)
	POINTER_PROPERTY(ImageUser, VoxelDataTexture, image_user)

	POINTER_PROPERTY(Struct, TextureSlot, rna_type)
	POINTER_PROPERTY(Texture, TextureSlot, texture)
	STRING_PROPERTY(TextureSlot, name)
	FLOAT_ARRAY_PROPERTY(TextureSlot, 3, offset)
	FLOAT_ARRAY_PROPERTY(TextureSlot, 3, scale)
	FLOAT_ARRAY_PROPERTY(TextureSlot, 3, color)
	ENUM_PROPERTY(blend_type_enum, TextureSlot, blend_type)
	BOOLEAN_PROPERTY(TextureSlot, use_stencil)
	BOOLEAN_PROPERTY(TextureSlot, invert)
	BOOLEAN_PROPERTY(TextureSlot, use_rgb_to_intensity)
	FLOAT_PROPERTY(TextureSlot, default_value)
	ENUM_PROPERTY(output_node_enum, TextureSlot, output_node)

	POINTER_PROPERTY(Struct, EnvironmentMap, rna_type)
	ENUM_PROPERTY(source_enum, EnvironmentMap, source)
	POINTER_PROPERTY(Object, EnvironmentMap, viewpoint_object)
	ENUM_PROPERTY(mapping_enum, EnvironmentMap, mapping)
	FLOAT_PROPERTY(EnvironmentMap, clip_start)
	FLOAT_PROPERTY(EnvironmentMap, clip_end)
	FLOAT_PROPERTY(EnvironmentMap, zoom)
	BOOLEAN_ARRAY_PROPERTY(EnvironmentMap, 20, layers_ignore)
	INT_PROPERTY(EnvironmentMap, resolution)
	INT_PROPERTY(EnvironmentMap, depth)

	POINTER_PROPERTY(Struct, TexMapping, rna_type)
	FLOAT_ARRAY_PROPERTY(TexMapping, 3, location)
	FLOAT_ARRAY_PROPERTY(TexMapping, 3, rotation)
	FLOAT_ARRAY_PROPERTY(TexMapping, 3, scale)
	FLOAT_ARRAY_PROPERTY(TexMapping, 3, min)
	FLOAT_ARRAY_PROPERTY(TexMapping, 3, max)
	BOOLEAN_PROPERTY(TexMapping, use_min)
	BOOLEAN_PROPERTY(TexMapping, use_max)




	FLOAT_ARRAY_PROPERTY(Action, 2, frame_range)

	POINTER_PROPERTY(Struct, ActionFCurves, rna_type)

	POINTER_PROPERTY(Struct, ActionGroups, rna_type)

	POINTER_PROPERTY(Struct, ActionPoseMarkers, rna_type)
	POINTER_PROPERTY(TimelineMarker, ActionPoseMarkers, active)
	INT_PROPERTY(ActionPoseMarkers, active_index)

	POINTER_PROPERTY(Struct, ActionGroup, rna_type)
	STRING_PROPERTY(ActionGroup, name)

	BOOLEAN_PROPERTY(ActionGroup, select)
	BOOLEAN_PROPERTY(ActionGroup, lock)
	BOOLEAN_PROPERTY(ActionGroup, show_expanded)
	INT_PROPERTY(ActionGroup, custom_color)

	POINTER_PROPERTY(Struct, DopeSheet, rna_type)
	POINTER_PROPERTY(ID, DopeSheet, source)
	BOOLEAN_PROPERTY(DopeSheet, show_only_selected)
	BOOLEAN_PROPERTY(DopeSheet, show_hidden)
	BOOLEAN_PROPERTY(DopeSheet, show_only_group_objects)
	POINTER_PROPERTY(Group, DopeSheet, filter_group)
	BOOLEAN_PROPERTY(DopeSheet, show_missing_nla)
	BOOLEAN_PROPERTY(DopeSheet, show_summary)
	BOOLEAN_PROPERTY(DopeSheet, show_expanded_summary)
	BOOLEAN_PROPERTY(DopeSheet, show_transforms)
	BOOLEAN_PROPERTY(DopeSheet, show_shapekeys)
	BOOLEAN_PROPERTY(DopeSheet, show_meshes)
	BOOLEAN_PROPERTY(DopeSheet, show_lattices)
	BOOLEAN_PROPERTY(DopeSheet, show_cameras)
	BOOLEAN_PROPERTY(DopeSheet, show_materials)
	BOOLEAN_PROPERTY(DopeSheet, show_lamps)
	BOOLEAN_PROPERTY(DopeSheet, show_textures)
	BOOLEAN_PROPERTY(DopeSheet, show_curves)
	BOOLEAN_PROPERTY(DopeSheet, show_worlds)
	BOOLEAN_PROPERTY(DopeSheet, show_scenes)
	BOOLEAN_PROPERTY(DopeSheet, show_particles)
	BOOLEAN_PROPERTY(DopeSheet, show_metaballs)
	BOOLEAN_PROPERTY(DopeSheet, show_armatures)
	BOOLEAN_PROPERTY(DopeSheet, show_nodes)

	POINTER_PROPERTY(Struct, AnimData, rna_type)

	POINTER_PROPERTY(Action, AnimData, action)
	ENUM_PROPERTY(action_extrapolation_enum, AnimData, action_extrapolation)
	ENUM_PROPERTY(action_blend_type_enum, AnimData, action_blend_type)
	FLOAT_PROPERTY(AnimData, action_influence)

	BOOLEAN_PROPERTY(AnimData, use_nla)

	POINTER_PROPERTY(Struct, NlaTracks, rna_type)
	POINTER_PROPERTY(NlaTrack, NlaTracks, active)

	POINTER_PROPERTY(Struct, KeyingSet, rna_type)
	STRING_PROPERTY(KeyingSet, name)
	POINTER_PROPERTY(KeyingSetInfo, KeyingSet, type_info)

	BOOLEAN_PROPERTY(KeyingSet, is_path_absolute)
	ENUM_PROPERTY(bl_options_enum, KeyingSet, bl_options)

	POINTER_PROPERTY(Struct, KeyingSetPaths, rna_type)
	POINTER_PROPERTY(KeyingSetPath, KeyingSetPaths, active)
	INT_PROPERTY(KeyingSetPaths, active_index)

	POINTER_PROPERTY(Struct, KeyingSetPath, rna_type)
	POINTER_PROPERTY(ID, KeyingSetPath, id)
	ENUM_PROPERTY(id_type_enum, KeyingSetPath, id_type)
	STRING_PROPERTY(KeyingSetPath, group)
	ENUM_PROPERTY(group_method_enum, KeyingSetPath, group_method)
	STRING_PROPERTY(KeyingSetPath, data_path)
	INT_PROPERTY(KeyingSetPath, array_index)
	BOOLEAN_PROPERTY(KeyingSetPath, use_entire_array)
	ENUM_PROPERTY(bl_options_enum, KeyingSetPath, bl_options)

	POINTER_PROPERTY(Struct, KeyingSetInfo, rna_type)
	STRING_PROPERTY(KeyingSetInfo, bl_idname)
	STRING_PROPERTY(KeyingSetInfo, bl_label)
	ENUM_PROPERTY(bl_options_enum, KeyingSetInfo, bl_options)

	POINTER_PROPERTY(Struct, AnimViz, rna_type)
	POINTER_PROPERTY(AnimVizOnionSkinning, AnimViz, onion_skin_frames)
	POINTER_PROPERTY(AnimVizMotionPaths, AnimViz, motion_path)

	POINTER_PROPERTY(Struct, AnimVizOnionSkinning, rna_type)
	ENUM_PROPERTY(type_enum, AnimVizOnionSkinning, type)
	BOOLEAN_PROPERTY(AnimVizOnionSkinning, show_only_selected)
	INT_PROPERTY(AnimVizOnionSkinning, frame_step)
	INT_PROPERTY(AnimVizOnionSkinning, frame_start)
	INT_PROPERTY(AnimVizOnionSkinning, frame_end)
	INT_PROPERTY(AnimVizOnionSkinning, frame_before)
	INT_PROPERTY(AnimVizOnionSkinning, frame_after)

	POINTER_PROPERTY(Struct, AnimVizMotionPaths, rna_type)
	ENUM_PROPERTY(type_enum, AnimVizMotionPaths, type)
	ENUM_PROPERTY(bake_location_enum, AnimVizMotionPaths, bake_location)
	BOOLEAN_PROPERTY(AnimVizMotionPaths, show_frame_numbers)
	BOOLEAN_PROPERTY(AnimVizMotionPaths, show_keyframe_highlight)
	BOOLEAN_PROPERTY(AnimVizMotionPaths, show_keyframe_numbers)
	BOOLEAN_PROPERTY(AnimVizMotionPaths, show_keyframe_action_all)
	INT_PROPERTY(AnimVizMotionPaths, frame_step)
	INT_PROPERTY(AnimVizMotionPaths, frame_start)
	INT_PROPERTY(AnimVizMotionPaths, frame_end)
	INT_PROPERTY(AnimVizMotionPaths, frame_before)
	INT_PROPERTY(AnimVizMotionPaths, frame_after)

	POINTER_PROPERTY(Struct, MotionPath, rna_type)

	INT_PROPERTY(MotionPath, frame_start)
	INT_PROPERTY(MotionPath, frame_end)
	INT_PROPERTY(MotionPath, length)
	BOOLEAN_PROPERTY(MotionPath, use_bone_head)
	BOOLEAN_PROPERTY(MotionPath, is_modified)

	POINTER_PROPERTY(Struct, MotionPathVert, rna_type)
	FLOAT_ARRAY_PROPERTY(MotionPathVert, 3, co)
	BOOLEAN_PROPERTY(MotionPathVert, select)

	POINTER_PROPERTY(Struct, Actuator, rna_type)
	STRING_PROPERTY(Actuator, name)
	ENUM_PROPERTY(type_enum, Actuator, type)
	BOOLEAN_PROPERTY(Actuator, pin)
	BOOLEAN_PROPERTY(Actuator, show_expanded)

	ENUM_PROPERTY(play_mode_enum, ActionActuator, play_mode)
	POINTER_PROPERTY(Action, ActionActuator, action)
	BOOLEAN_PROPERTY(ActionActuator, use_continue_last_frame)
	STRING_PROPERTY(ActionActuator, property)
	FLOAT_PROPERTY(ActionActuator, frame_start)
	FLOAT_PROPERTY(ActionActuator, frame_end)
	INT_PROPERTY(ActionActuator, frame_blend_in)
	INT_PROPERTY(ActionActuator, priority)
	STRING_PROPERTY(ActionActuator, frame_property)

	ENUM_PROPERTY(mode_enum, ObjectActuator, mode)
	POINTER_PROPERTY(Object, ObjectActuator, reference_object)
	INT_PROPERTY(ObjectActuator, damping)
	FLOAT_PROPERTY(ObjectActuator, proportional_coefficient)
	FLOAT_PROPERTY(ObjectActuator, integral_coefficient)
	FLOAT_PROPERTY(ObjectActuator, derivate_coefficient)
	FLOAT_PROPERTY(ObjectActuator, force_max_x)
	FLOAT_PROPERTY(ObjectActuator, force_min_x)
	FLOAT_PROPERTY(ObjectActuator, force_max_y)
	FLOAT_PROPERTY(ObjectActuator, force_min_y)
	FLOAT_PROPERTY(ObjectActuator, force_max_z)
	FLOAT_PROPERTY(ObjectActuator, force_min_z)
	FLOAT_ARRAY_PROPERTY(ObjectActuator, 3, offset_location)
	FLOAT_ARRAY_PROPERTY(ObjectActuator, 3, offset_rotation)
	FLOAT_ARRAY_PROPERTY(ObjectActuator, 3, force)
	FLOAT_ARRAY_PROPERTY(ObjectActuator, 3, torque)
	FLOAT_ARRAY_PROPERTY(ObjectActuator, 3, linear_velocity)
	FLOAT_ARRAY_PROPERTY(ObjectActuator, 3, angular_velocity)
	BOOLEAN_PROPERTY(ObjectActuator, use_local_location)
	BOOLEAN_PROPERTY(ObjectActuator, use_local_rotation)
	BOOLEAN_PROPERTY(ObjectActuator, use_local_force)
	BOOLEAN_PROPERTY(ObjectActuator, use_local_torque)
	BOOLEAN_PROPERTY(ObjectActuator, use_local_linear_velocity)
	BOOLEAN_PROPERTY(ObjectActuator, use_local_angular_velocity)
	BOOLEAN_PROPERTY(ObjectActuator, use_add_linear_velocity)
	BOOLEAN_PROPERTY(ObjectActuator, use_servo_limit_x)
	BOOLEAN_PROPERTY(ObjectActuator, use_servo_limit_y)
	BOOLEAN_PROPERTY(ObjectActuator, use_servo_limit_z)

	ENUM_PROPERTY(play_type_enum, FCurveActuator, play_type)
	FLOAT_PROPERTY(FCurveActuator, frame_start)
	FLOAT_PROPERTY(FCurveActuator, frame_end)
	STRING_PROPERTY(FCurveActuator, property)
	STRING_PROPERTY(FCurveActuator, frame_property)
	BOOLEAN_PROPERTY(FCurveActuator, use_additive)
	BOOLEAN_PROPERTY(FCurveActuator, use_force)
	BOOLEAN_PROPERTY(FCurveActuator, use_local)
	BOOLEAN_PROPERTY(FCurveActuator, apply_to_children)

	POINTER_PROPERTY(Object, CameraActuator, object)
	FLOAT_PROPERTY(CameraActuator, height)
	FLOAT_PROPERTY(CameraActuator, min)
	FLOAT_PROPERTY(CameraActuator, max)
	ENUM_PROPERTY(axis_enum, CameraActuator, axis)

	POINTER_PROPERTY(Sound, SoundActuator, sound)
	ENUM_PROPERTY(mode_enum, SoundActuator, mode)
	FLOAT_PROPERTY(SoundActuator, volume)
	FLOAT_PROPERTY(SoundActuator, pitch)
	FLOAT_PROPERTY(SoundActuator, gain_3d_min)
	FLOAT_PROPERTY(SoundActuator, gain_3d_max)
	FLOAT_PROPERTY(SoundActuator, distance_3d_reference)
	FLOAT_PROPERTY(SoundActuator, distance_3d_max)
	FLOAT_PROPERTY(SoundActuator, rolloff_factor_3d)
	FLOAT_PROPERTY(SoundActuator, cone_outer_gain_3d)
	FLOAT_PROPERTY(SoundActuator, cone_outer_angle_3d)
	FLOAT_PROPERTY(SoundActuator, cone_inner_angle_3d)
	BOOLEAN_PROPERTY(SoundActuator, use_sound_3d)

	ENUM_PROPERTY(mode_enum, PropertyActuator, mode)
	STRING_PROPERTY(PropertyActuator, property)
	STRING_PROPERTY(PropertyActuator, value)
	POINTER_PROPERTY(Object, PropertyActuator, object)
	STRING_PROPERTY(PropertyActuator, object_property)

	ENUM_PROPERTY(mode_enum, ConstraintActuator, mode)
	ENUM_PROPERTY(limit_enum, ConstraintActuator, limit)
	ENUM_PROPERTY(direction_enum, ConstraintActuator, direction)
	ENUM_PROPERTY(direction_axis_enum, ConstraintActuator, direction_axis)
	FLOAT_PROPERTY(ConstraintActuator, limit_min)
	FLOAT_PROPERTY(ConstraintActuator, limit_max)
	INT_PROPERTY(ConstraintActuator, damping)
	FLOAT_PROPERTY(ConstraintActuator, range)
	FLOAT_PROPERTY(ConstraintActuator, distance)
	STRING_PROPERTY(ConstraintActuator, material)
	STRING_PROPERTY(ConstraintActuator, property)
	INT_PROPERTY(ConstraintActuator, time)
	INT_PROPERTY(ConstraintActuator, damping_rotation)
	ENUM_PROPERTY(direction_axis_pos_enum, ConstraintActuator, direction_axis_pos)
	FLOAT_ARRAY_PROPERTY(ConstraintActuator, 3, rotation_max)
	FLOAT_PROPERTY(ConstraintActuator, angle_min)
	FLOAT_PROPERTY(ConstraintActuator, angle_max)
	FLOAT_PROPERTY(ConstraintActuator, fh_height)
	FLOAT_PROPERTY(ConstraintActuator, fh_force)
	FLOAT_PROPERTY(ConstraintActuator, fh_damping)
	BOOLEAN_PROPERTY(ConstraintActuator, use_force_distance)
	BOOLEAN_PROPERTY(ConstraintActuator, use_local)
	BOOLEAN_PROPERTY(ConstraintActuator, use_normal)
	BOOLEAN_PROPERTY(ConstraintActuator, use_persistent)
	BOOLEAN_PROPERTY(ConstraintActuator, use_material_detect)
	BOOLEAN_PROPERTY(ConstraintActuator, use_fh_paralel_axis)
	BOOLEAN_PROPERTY(ConstraintActuator, use_fh_normal)

	ENUM_PROPERTY(mode_enum, EditObjectActuator, mode)
	ENUM_PROPERTY(dynamic_operation_enum, EditObjectActuator, dynamic_operation)
	POINTER_PROPERTY(Object, EditObjectActuator, object)
	POINTER_PROPERTY(Object, EditObjectActuator, track_object)
	POINTER_PROPERTY(Mesh, EditObjectActuator, mesh)
	INT_PROPERTY(EditObjectActuator, time)
	FLOAT_PROPERTY(EditObjectActuator, mass)
	FLOAT_ARRAY_PROPERTY(EditObjectActuator, 3, linear_velocity)
	FLOAT_ARRAY_PROPERTY(EditObjectActuator, 3, angular_velocity)
	BOOLEAN_PROPERTY(EditObjectActuator, use_local_linear_velocity)
	BOOLEAN_PROPERTY(EditObjectActuator, use_local_angular_velocity)
	BOOLEAN_PROPERTY(EditObjectActuator, use_replace_display_mesh)
	BOOLEAN_PROPERTY(EditObjectActuator, use_replace_physics_mesh)
	BOOLEAN_PROPERTY(EditObjectActuator, use_3d_tracking)

	ENUM_PROPERTY(mode_enum, SceneActuator, mode)
	POINTER_PROPERTY(Object, SceneActuator, camera)
	POINTER_PROPERTY(Scene, SceneActuator, scene)

	INT_PROPERTY(RandomActuator, seed)
	STRING_PROPERTY(RandomActuator, property)
	ENUM_PROPERTY(distribution_enum, RandomActuator, distribution)
	BOOLEAN_PROPERTY(RandomActuator, use_always_true)
	FLOAT_PROPERTY(RandomActuator, chance)
	INT_PROPERTY(RandomActuator, int_value)
	INT_PROPERTY(RandomActuator, int_min)
	INT_PROPERTY(RandomActuator, int_max)
	FLOAT_PROPERTY(RandomActuator, int_mean)
	FLOAT_PROPERTY(RandomActuator, float_value)
	FLOAT_PROPERTY(RandomActuator, float_min)
	FLOAT_PROPERTY(RandomActuator, float_max)
	FLOAT_PROPERTY(RandomActuator, float_mean)
	FLOAT_PROPERTY(RandomActuator, standard_derivation)
	FLOAT_PROPERTY(RandomActuator, half_life_time)

	STRING_PROPERTY(MessageActuator, to_property)
	STRING_PROPERTY(MessageActuator, subject)
	ENUM_PROPERTY(body_type_enum, MessageActuator, body_type)
	STRING_PROPERTY(MessageActuator, body_message)
	STRING_PROPERTY(MessageActuator, body_property)

	ENUM_PROPERTY(mode_enum, GameActuator, mode)
	STRING_PROPERTY(GameActuator, filename)

	BOOLEAN_PROPERTY(VisibilityActuator, use_visible)
	BOOLEAN_PROPERTY(VisibilityActuator, use_occlusion)
	BOOLEAN_PROPERTY(VisibilityActuator, apply_to_children)

	ENUM_PROPERTY(mode_enum, Filter2DActuator, mode)
	POINTER_PROPERTY(Text, Filter2DActuator, glsl_shader)
	INT_PROPERTY(Filter2DActuator, filter_pass)
	FLOAT_PROPERTY(Filter2DActuator, motion_blur_factor)
	BOOLEAN_PROPERTY(Filter2DActuator, use_motion_blur)

	ENUM_PROPERTY(mode_enum, ParentActuator, mode)
	POINTER_PROPERTY(Object, ParentActuator, object)
	BOOLEAN_PROPERTY(ParentActuator, use_compound)
	BOOLEAN_PROPERTY(ParentActuator, use_ghost)

	ENUM_PROPERTY(mode_enum, ShapeActionActuator, mode)
	POINTER_PROPERTY(Action, ShapeActionActuator, action)
	BOOLEAN_PROPERTY(ShapeActionActuator, use_continue_last_frame)
	STRING_PROPERTY(ShapeActionActuator, property)
	FLOAT_PROPERTY(ShapeActionActuator, frame_start)
	FLOAT_PROPERTY(ShapeActionActuator, frame_end)
	INT_PROPERTY(ShapeActionActuator, frame_blend_in)
	INT_PROPERTY(ShapeActionActuator, priority)
	STRING_PROPERTY(ShapeActionActuator, frame_property)

	ENUM_PROPERTY(operation_enum, StateActuator, operation)
	BOOLEAN_ARRAY_PROPERTY(StateActuator, 30, states)

	ENUM_PROPERTY(mode_enum, ArmatureActuator, mode)
	STRING_PROPERTY(ArmatureActuator, bone)
	STRING_PROPERTY(ArmatureActuator, constraint)
	POINTER_PROPERTY(Object, ArmatureActuator, target)
	POINTER_PROPERTY(Object, ArmatureActuator, secondary_target)
	FLOAT_PROPERTY(ArmatureActuator, weight)

	POINTER_PROPERTY(AnimData, Armature, animation_data)


	ENUM_PROPERTY(pose_position_enum, Armature, pose_position)
	ENUM_PROPERTY(draw_type_enum, Armature, draw_type)
	ENUM_PROPERTY(ghost_type_enum, Armature, ghost_type)
	BOOLEAN_ARRAY_PROPERTY(Armature, 32, layers)
	BOOLEAN_ARRAY_PROPERTY(Armature, 32, layers_protected)
	BOOLEAN_PROPERTY(Armature, show_axes)
	BOOLEAN_PROPERTY(Armature, show_names)
	BOOLEAN_PROPERTY(Armature, use_deform_delay)
	BOOLEAN_PROPERTY(Armature, use_mirror_x)
	BOOLEAN_PROPERTY(Armature, use_auto_ik)
	BOOLEAN_PROPERTY(Armature, show_bone_custom_shapes)
	BOOLEAN_PROPERTY(Armature, show_group_colors)
	BOOLEAN_PROPERTY(Armature, show_only_ghost_selected)
	BOOLEAN_PROPERTY(Armature, use_deform_vertex_groups)
	BOOLEAN_PROPERTY(Armature, use_deform_envelopes)
	BOOLEAN_PROPERTY(Armature, use_deform_preserve_volume)
	INT_PROPERTY(Armature, ghost_step)
	INT_PROPERTY(Armature, ghost_size)
	INT_PROPERTY(Armature, ghost_frame_start)
	INT_PROPERTY(Armature, ghost_frame_end)

	POINTER_PROPERTY(Struct, ArmatureBones, rna_type)
	POINTER_PROPERTY(Bone, ArmatureBones, active)

	POINTER_PROPERTY(Struct, ArmatureEditBones, rna_type)
	POINTER_PROPERTY(EditBone, ArmatureEditBones, active)

	POINTER_PROPERTY(Struct, Bone, rna_type)
	POINTER_PROPERTY(Bone, Bone, parent)

	STRING_PROPERTY(Bone, name)
	BOOLEAN_ARRAY_PROPERTY(Bone, 32, layers)
	BOOLEAN_PROPERTY(Bone, use_connect)
	BOOLEAN_PROPERTY(Bone, use_inherit_rotation)
	BOOLEAN_PROPERTY(Bone, use_envelope_multiply)
	BOOLEAN_PROPERTY(Bone, use_deform)
	BOOLEAN_PROPERTY(Bone, use_inherit_scale)
	BOOLEAN_PROPERTY(Bone, use_local_location)
	BOOLEAN_PROPERTY(Bone, show_wire)
	BOOLEAN_PROPERTY(Bone, use_cyclic_offset)
	BOOLEAN_PROPERTY(Bone, hide_select)
	FLOAT_PROPERTY(Bone, envelope_distance)
	FLOAT_PROPERTY(Bone, envelope_weight)
	FLOAT_PROPERTY(Bone, head_radius)
	FLOAT_PROPERTY(Bone, tail_radius)
	INT_PROPERTY(Bone, bbone_segments)
	FLOAT_PROPERTY(Bone, bbone_in)
	FLOAT_PROPERTY(Bone, bbone_out)
	FLOAT_PROPERTY(Bone, bbone_x)
	FLOAT_PROPERTY(Bone, bbone_z)
	BOOLEAN_PROPERTY(Bone, hide)
	BOOLEAN_PROPERTY(Bone, select)
	BOOLEAN_PROPERTY(Bone, select_head)
	BOOLEAN_PROPERTY(Bone, select_tail)
	FLOAT_ARRAY_PROPERTY(Bone, 9, matrix)
	FLOAT_ARRAY_PROPERTY(Bone, 16, matrix_local)
	FLOAT_ARRAY_PROPERTY(Bone, 3, tail)
	FLOAT_ARRAY_PROPERTY(Bone, 3, tail_local)
	FLOAT_ARRAY_PROPERTY(Bone, 3, head)
	FLOAT_ARRAY_PROPERTY(Bone, 3, head_local)

	POINTER_PROPERTY(Struct, EditBone, rna_type)
	POINTER_PROPERTY(EditBone, EditBone, parent)
	FLOAT_PROPERTY(EditBone, roll)
	FLOAT_ARRAY_PROPERTY(EditBone, 3, head)
	FLOAT_ARRAY_PROPERTY(EditBone, 3, tail)
	STRING_PROPERTY(EditBone, name)
	BOOLEAN_ARRAY_PROPERTY(EditBone, 32, layers)
	BOOLEAN_PROPERTY(EditBone, use_connect)
	BOOLEAN_PROPERTY(EditBone, use_inherit_rotation)
	BOOLEAN_PROPERTY(EditBone, use_envelope_multiply)
	BOOLEAN_PROPERTY(EditBone, use_deform)
	BOOLEAN_PROPERTY(EditBone, use_inherit_scale)
	BOOLEAN_PROPERTY(EditBone, use_local_location)
	BOOLEAN_PROPERTY(EditBone, show_wire)
	BOOLEAN_PROPERTY(EditBone, use_cyclic_offset)
	BOOLEAN_PROPERTY(EditBone, hide_select)
	FLOAT_PROPERTY(EditBone, envelope_distance)
	FLOAT_PROPERTY(EditBone, envelope_weight)
	FLOAT_PROPERTY(EditBone, head_radius)
	FLOAT_PROPERTY(EditBone, tail_radius)
	INT_PROPERTY(EditBone, bbone_segments)
	FLOAT_PROPERTY(EditBone, bbone_in)
	FLOAT_PROPERTY(EditBone, bbone_out)
	FLOAT_PROPERTY(EditBone, bbone_x)
	FLOAT_PROPERTY(EditBone, bbone_z)
	BOOLEAN_PROPERTY(EditBone, hide)
	BOOLEAN_PROPERTY(EditBone, lock)
	BOOLEAN_PROPERTY(EditBone, select)
	BOOLEAN_PROPERTY(EditBone, select_head)
	BOOLEAN_PROPERTY(EditBone, select_tail)
	FLOAT_ARRAY_PROPERTY(EditBone, 16, matrix)

	POINTER_PROPERTY(Struct, BoidRule, rna_type)
	STRING_PROPERTY(BoidRule, name)
	ENUM_PROPERTY(type_enum, BoidRule, type)
	BOOLEAN_PROPERTY(BoidRule, use_in_air)
	BOOLEAN_PROPERTY(BoidRule, use_on_land)

	POINTER_PROPERTY(Object, BoidRuleGoal, object)
	BOOLEAN_PROPERTY(BoidRuleGoal, use_predict)

	POINTER_PROPERTY(Object, BoidRuleAvoid, object)
	BOOLEAN_PROPERTY(BoidRuleAvoid, use_predict)
	FLOAT_PROPERTY(BoidRuleAvoid, fear_factor)

	BOOLEAN_PROPERTY(BoidRuleAvoidCollision, use_avoid)
	BOOLEAN_PROPERTY(BoidRuleAvoidCollision, use_avoid_collision)
	FLOAT_PROPERTY(BoidRuleAvoidCollision, look_ahead)

	POINTER_PROPERTY(Object, BoidRuleFollowLeader, object)
	FLOAT_PROPERTY(BoidRuleFollowLeader, distance)
	INT_PROPERTY(BoidRuleFollowLeader, queue_count)
	BOOLEAN_PROPERTY(BoidRuleFollowLeader, use_line)

	FLOAT_PROPERTY(BoidRuleAverageSpeed, wander)
	FLOAT_PROPERTY(BoidRuleAverageSpeed, level)
	FLOAT_PROPERTY(BoidRuleAverageSpeed, speed)

	FLOAT_PROPERTY(BoidRuleFight, distance)
	FLOAT_PROPERTY(BoidRuleFight, flee_distance)

	POINTER_PROPERTY(Struct, BoidState, rna_type)
	STRING_PROPERTY(BoidState, name)
	ENUM_PROPERTY(ruleset_type_enum, BoidState, ruleset_type)

	POINTER_PROPERTY(BoidRule, BoidState, active_boid_rule)
	INT_PROPERTY(BoidState, active_boid_rule_index)
	FLOAT_PROPERTY(BoidState, rule_fuzzy)
	FLOAT_PROPERTY(BoidState, volume)
	FLOAT_PROPERTY(BoidState, falloff)

	POINTER_PROPERTY(Struct, BoidSettings, rna_type)
	FLOAT_PROPERTY(BoidSettings, land_smooth)
	FLOAT_PROPERTY(BoidSettings, bank)
	FLOAT_PROPERTY(BoidSettings, pitch)
	FLOAT_PROPERTY(BoidSettings, height)

	POINTER_PROPERTY(BoidRule, BoidSettings, active_boid_state)
	INT_PROPERTY(BoidSettings, active_boid_state_index)
	FLOAT_PROPERTY(BoidSettings, health)
	FLOAT_PROPERTY(BoidSettings, strength)
	FLOAT_PROPERTY(BoidSettings, aggression)
	FLOAT_PROPERTY(BoidSettings, accuracy)
	FLOAT_PROPERTY(BoidSettings, range)
	FLOAT_PROPERTY(BoidSettings, air_speed_min)
	FLOAT_PROPERTY(BoidSettings, air_speed_max)
	FLOAT_PROPERTY(BoidSettings, air_acc_max)
	FLOAT_PROPERTY(BoidSettings, air_ave_max)
	FLOAT_PROPERTY(BoidSettings, air_personal_space)
	FLOAT_PROPERTY(BoidSettings, land_jump_speed)
	FLOAT_PROPERTY(BoidSettings, land_speed_max)
	FLOAT_PROPERTY(BoidSettings, land_acc_max)
	FLOAT_PROPERTY(BoidSettings, land_ave_max)
	FLOAT_PROPERTY(BoidSettings, land_personal_space)
	FLOAT_PROPERTY(BoidSettings, land_stick_force)
	BOOLEAN_PROPERTY(BoidSettings, use_flight)
	BOOLEAN_PROPERTY(BoidSettings, use_land)
	BOOLEAN_PROPERTY(BoidSettings, use_climb)

	ENUM_PROPERTY(blend_enum, Brush, blend)
	ENUM_PROPERTY(sculpt_tool_enum, Brush, sculpt_tool)
	ENUM_PROPERTY(vertexpaint_tool_enum, Brush, vertexpaint_tool)
	ENUM_PROPERTY(imagepaint_tool_enum, Brush, imagepaint_tool)
	ENUM_PROPERTY(direction_enum, Brush, direction)
	ENUM_PROPERTY(stroke_method_enum, Brush, stroke_method)
	ENUM_PROPERTY(texture_angle_source_random_enum, Brush, texture_angle_source_random)
	ENUM_PROPERTY(texture_angle_source_no_random_enum, Brush, texture_angle_source_no_random)
	ENUM_PROPERTY(sculpt_plane_enum, Brush, sculpt_plane)
	INT_PROPERTY(Brush, size)
	FLOAT_PROPERTY(Brush, unprojected_radius)
	FLOAT_PROPERTY(Brush, jitter)
	INT_PROPERTY(Brush, spacing)
	INT_PROPERTY(Brush, smooth_stroke_radius)
	FLOAT_PROPERTY(Brush, smooth_stroke_factor)
	FLOAT_PROPERTY(Brush, rate)
	FLOAT_ARRAY_PROPERTY(Brush, 3, color)
	FLOAT_PROPERTY(Brush, strength)
	FLOAT_PROPERTY(Brush, plane_offset)
	FLOAT_PROPERTY(Brush, plane_trim)
	FLOAT_PROPERTY(Brush, height)
	FLOAT_PROPERTY(Brush, texture_sample_bias)
	FLOAT_PROPERTY(Brush, normal_weight)
	FLOAT_PROPERTY(Brush, crease_pinch_factor)
	FLOAT_PROPERTY(Brush, auto_smooth_factor)
	BOOLEAN_PROPERTY(Brush, use_airbrush)
	BOOLEAN_PROPERTY(Brush, use_original_normal)
	BOOLEAN_PROPERTY(Brush, use_wrap)
	BOOLEAN_PROPERTY(Brush, use_pressure_strength)
	BOOLEAN_PROPERTY(Brush, use_offset_pressure)
	BOOLEAN_PROPERTY(Brush, use_pressure_size)
	BOOLEAN_PROPERTY(Brush, use_pressure_jitter)
	BOOLEAN_PROPERTY(Brush, use_pressure_spacing)
	BOOLEAN_PROPERTY(Brush, use_inverse_smooth_pressure)
	BOOLEAN_PROPERTY(Brush, use_rake)
	BOOLEAN_PROPERTY(Brush, use_random_rotation)
	BOOLEAN_PROPERTY(Brush, use_plane_trim)
	BOOLEAN_PROPERTY(Brush, use_frontface)
	BOOLEAN_PROPERTY(Brush, use_anchor)
	BOOLEAN_PROPERTY(Brush, use_space)
	BOOLEAN_PROPERTY(Brush, use_smooth_stroke)
	BOOLEAN_PROPERTY(Brush, use_persistent)
	BOOLEAN_PROPERTY(Brush, use_accumulate)
	BOOLEAN_PROPERTY(Brush, use_space_atten)
	BOOLEAN_PROPERTY(Brush, use_adaptive_space)
	BOOLEAN_PROPERTY(Brush, use_locked_size)
	BOOLEAN_PROPERTY(Brush, use_texture_overlay)
	BOOLEAN_PROPERTY(Brush, use_edge_to_edge)
	BOOLEAN_PROPERTY(Brush, use_restore_mesh)
	BOOLEAN_PROPERTY(Brush, use_fixed_texture)
	BOOLEAN_PROPERTY(Brush, use_alpha)
	POINTER_PROPERTY(CurveMapping, Brush, curve)
	BOOLEAN_PROPERTY(Brush, use_paint_sculpt)
	BOOLEAN_PROPERTY(Brush, use_paint_vertex)
	BOOLEAN_PROPERTY(Brush, use_paint_weight)
	BOOLEAN_PROPERTY(Brush, use_paint_texture)
	POINTER_PROPERTY(BrushTextureSlot, Brush, texture_slot)
	POINTER_PROPERTY(Texture, Brush, texture)
	INT_PROPERTY(Brush, texture_overlay_alpha)
	FLOAT_ARRAY_PROPERTY(Brush, 3, cursor_color_add)
	FLOAT_ARRAY_PROPERTY(Brush, 3, cursor_color_subtract)
	BOOLEAN_PROPERTY(Brush, use_custom_icon)
	STRING_PROPERTY(Brush, icon_filepath)
	POINTER_PROPERTY(Image, Brush, clone_image)
	FLOAT_PROPERTY(Brush, clone_alpha)
	FLOAT_ARRAY_PROPERTY(Brush, 2, clone_offset)

	FLOAT_PROPERTY(BrushTextureSlot, angle)
	ENUM_PROPERTY(map_mode_enum, BrushTextureSlot, map_mode)


	ENUM_PROPERTY(type_enum, Camera, type)
	FLOAT_PROPERTY(Camera, passepartout_alpha)
	FLOAT_PROPERTY(Camera, clip_start)
	FLOAT_PROPERTY(Camera, clip_end)
	FLOAT_PROPERTY(Camera, lens)
	FLOAT_PROPERTY(Camera, angle)
	FLOAT_PROPERTY(Camera, ortho_scale)
	FLOAT_PROPERTY(Camera, draw_size)
	FLOAT_PROPERTY(Camera, shift_x)
	FLOAT_PROPERTY(Camera, shift_y)
	FLOAT_PROPERTY(Camera, dof_distance)
	BOOLEAN_PROPERTY(Camera, show_limits)
	BOOLEAN_PROPERTY(Camera, show_mist)
	BOOLEAN_PROPERTY(Camera, show_passepartout)
	BOOLEAN_PROPERTY(Camera, show_title_safe)
	BOOLEAN_PROPERTY(Camera, show_name)
	ENUM_PROPERTY(lens_unit_enum, Camera, lens_unit)
	BOOLEAN_PROPERTY(Camera, use_panorama)
	POINTER_PROPERTY(AnimData, Camera, animation_data)
	POINTER_PROPERTY(Object, Camera, dof_object)

	POINTER_PROPERTY(Struct, ClothSettings, rna_type)
	FLOAT_PROPERTY(ClothSettings, goal_min)
	FLOAT_PROPERTY(ClothSettings, goal_max)
	FLOAT_PROPERTY(ClothSettings, goal_default)
	FLOAT_PROPERTY(ClothSettings, goal_spring)
	FLOAT_PROPERTY(ClothSettings, goal_friction)
	FLOAT_PROPERTY(ClothSettings, internal_friction)
	FLOAT_PROPERTY(ClothSettings, collider_friction)
	FLOAT_PROPERTY(ClothSettings, mass)
	STRING_PROPERTY(ClothSettings, vertex_group_mass)
	FLOAT_ARRAY_PROPERTY(ClothSettings, 3, gravity)
	FLOAT_PROPERTY(ClothSettings, air_damping)
	BOOLEAN_PROPERTY(ClothSettings, use_pin_cloth)
	FLOAT_PROPERTY(ClothSettings, pin_stiffness)
	INT_PROPERTY(ClothSettings, quality)
	BOOLEAN_PROPERTY(ClothSettings, use_stiffness_scale)
	FLOAT_PROPERTY(ClothSettings, spring_damping)
	FLOAT_PROPERTY(ClothSettings, structural_stiffness)
	FLOAT_PROPERTY(ClothSettings, structural_stiffness_max)
	STRING_PROPERTY(ClothSettings, vertex_group_structural_stiffness)
	FLOAT_PROPERTY(ClothSettings, bending_stiffness)
	FLOAT_PROPERTY(ClothSettings, bending_stiffness_max)
	STRING_PROPERTY(ClothSettings, vertex_group_bending)
	POINTER_PROPERTY(EffectorWeights, ClothSettings, effector_weights)
	INT_PROPERTY(ClothSettings, pre_roll)
	POINTER_PROPERTY(ShapeKey, ClothSettings, rest_shape_key)

	POINTER_PROPERTY(Struct, ClothCollisionSettings, rna_type)
	BOOLEAN_PROPERTY(ClothCollisionSettings, use_collision)
	FLOAT_PROPERTY(ClothCollisionSettings, distance_min)
	FLOAT_PROPERTY(ClothCollisionSettings, friction)
	INT_PROPERTY(ClothCollisionSettings, collision_quality)
	BOOLEAN_PROPERTY(ClothCollisionSettings, use_self_collision)
	FLOAT_PROPERTY(ClothCollisionSettings, self_distance_min)
	FLOAT_PROPERTY(ClothCollisionSettings, self_friction)
	INT_PROPERTY(ClothCollisionSettings, self_collision_quality)
	POINTER_PROPERTY(Group, ClothCollisionSettings, group)

	POINTER_PROPERTY(Struct, CurveMapPoint, rna_type)
	FLOAT_ARRAY_PROPERTY(CurveMapPoint, 2, location)
	ENUM_PROPERTY(handle_type_enum, CurveMapPoint, handle_type)
	BOOLEAN_PROPERTY(CurveMapPoint, select)

	POINTER_PROPERTY(Struct, CurveMap, rna_type)
	ENUM_PROPERTY(extend_enum, CurveMap, extend)


	POINTER_PROPERTY(Struct, CurveMapping, rna_type)
	BOOLEAN_PROPERTY(CurveMapping, use_clip)
	FLOAT_PROPERTY(CurveMapping, clip_min_x)
	FLOAT_PROPERTY(CurveMapping, clip_min_y)
	FLOAT_PROPERTY(CurveMapping, clip_max_x)
	FLOAT_PROPERTY(CurveMapping, clip_max_y)

	FLOAT_ARRAY_PROPERTY(CurveMapping, 3, black_level)
	FLOAT_ARRAY_PROPERTY(CurveMapping, 3, white_level)

	POINTER_PROPERTY(Struct, ColorRampElement, rna_type)
	FLOAT_ARRAY_PROPERTY(ColorRampElement, 4, color)
	FLOAT_PROPERTY(ColorRampElement, position)

	POINTER_PROPERTY(Struct, ColorRamp, rna_type)

	ENUM_PROPERTY(interpolation_enum, ColorRamp, interpolation)

	POINTER_PROPERTY(Struct, ColorRampElements, rna_type)

	POINTER_PROPERTY(Struct, Histogram, rna_type)
	ENUM_PROPERTY(mode_enum, Histogram, mode)

	POINTER_PROPERTY(Struct, Scopes, rna_type)
	BOOLEAN_PROPERTY(Scopes, use_full_resolution)
	FLOAT_PROPERTY(Scopes, accuracy)
	POINTER_PROPERTY(Histogram, Scopes, histogram)
	ENUM_PROPERTY(waveform_mode_enum, Scopes, waveform_mode)
	FLOAT_PROPERTY(Scopes, waveform_alpha)
	FLOAT_PROPERTY(Scopes, vectorscope_alpha)

	POINTER_PROPERTY(Struct, Constraint, rna_type)
	STRING_PROPERTY(Constraint, name)
	ENUM_PROPERTY(type_enum, Constraint, type)
	ENUM_PROPERTY(owner_space_enum, Constraint, owner_space)
	ENUM_PROPERTY(target_space_enum, Constraint, target_space)
	BOOLEAN_PROPERTY(Constraint, mute)
	BOOLEAN_PROPERTY(Constraint, show_expanded)
	BOOLEAN_PROPERTY(Constraint, is_valid)
	BOOLEAN_PROPERTY(Constraint, active)
	BOOLEAN_PROPERTY(Constraint, is_proxy_local)
	FLOAT_PROPERTY(Constraint, influence)
	FLOAT_PROPERTY(Constraint, error_location)
	FLOAT_PROPERTY(Constraint, error_rotation)

	POINTER_PROPERTY(Struct, ConstraintTarget, rna_type)
	POINTER_PROPERTY(Object, ConstraintTarget, target)
	STRING_PROPERTY(ConstraintTarget, subtarget)

	POINTER_PROPERTY(Object, ChildOfConstraint, target)
	STRING_PROPERTY(ChildOfConstraint, subtarget)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_location_x)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_location_y)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_location_z)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_rotation_x)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_rotation_y)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_rotation_z)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_scale_x)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_scale_y)
	BOOLEAN_PROPERTY(ChildOfConstraint, use_scale_z)


	INT_PROPERTY(PythonConstraint, target_count)
	POINTER_PROPERTY(Text, PythonConstraint, text)
	BOOLEAN_PROPERTY(PythonConstraint, use_targets)
	BOOLEAN_PROPERTY(PythonConstraint, has_script_error)

	FLOAT_PROPERTY(StretchToConstraint, head_tail)
	POINTER_PROPERTY(Object, StretchToConstraint, target)
	STRING_PROPERTY(StretchToConstraint, subtarget)
	ENUM_PROPERTY(volume_enum, StretchToConstraint, volume)
	ENUM_PROPERTY(keep_axis_enum, StretchToConstraint, keep_axis)
	FLOAT_PROPERTY(StretchToConstraint, rest_length)
	FLOAT_PROPERTY(StretchToConstraint, bulge)

	POINTER_PROPERTY(Object, FollowPathConstraint, target)
	FLOAT_PROPERTY(FollowPathConstraint, offset)
	FLOAT_PROPERTY(FollowPathConstraint, offset_factor)
	ENUM_PROPERTY(forward_axis_enum, FollowPathConstraint, forward_axis)
	ENUM_PROPERTY(up_axis_enum, FollowPathConstraint, up_axis)
	BOOLEAN_PROPERTY(FollowPathConstraint, use_curve_follow)
	BOOLEAN_PROPERTY(FollowPathConstraint, use_fixed_location)
	BOOLEAN_PROPERTY(FollowPathConstraint, use_curve_radius)

	POINTER_PROPERTY(Object, LockedTrackConstraint, target)
	STRING_PROPERTY(LockedTrackConstraint, subtarget)
	ENUM_PROPERTY(track_axis_enum, LockedTrackConstraint, track_axis)
	ENUM_PROPERTY(lock_axis_enum, LockedTrackConstraint, lock_axis)

	POINTER_PROPERTY(Object, ActionConstraint, target)
	STRING_PROPERTY(ActionConstraint, subtarget)
	ENUM_PROPERTY(transform_channel_enum, ActionConstraint, transform_channel)
	POINTER_PROPERTY(Action, ActionConstraint, action)
	INT_PROPERTY(ActionConstraint, frame_start)
	INT_PROPERTY(ActionConstraint, frame_end)
	FLOAT_PROPERTY(ActionConstraint, max)
	FLOAT_PROPERTY(ActionConstraint, min)

	POINTER_PROPERTY(Object, CopyScaleConstraint, target)
	STRING_PROPERTY(CopyScaleConstraint, subtarget)
	BOOLEAN_PROPERTY(CopyScaleConstraint, use_x)
	BOOLEAN_PROPERTY(CopyScaleConstraint, use_y)
	BOOLEAN_PROPERTY(CopyScaleConstraint, use_z)
	BOOLEAN_PROPERTY(CopyScaleConstraint, use_offset)

	ENUM_PROPERTY(free_axis_enum, MaintainVolumeConstraint, free_axis)
	FLOAT_PROPERTY(MaintainVolumeConstraint, volume)

	FLOAT_PROPERTY(CopyLocationConstraint, head_tail)
	POINTER_PROPERTY(Object, CopyLocationConstraint, target)
	STRING_PROPERTY(CopyLocationConstraint, subtarget)
	BOOLEAN_PROPERTY(CopyLocationConstraint, use_x)
	BOOLEAN_PROPERTY(CopyLocationConstraint, use_y)
	BOOLEAN_PROPERTY(CopyLocationConstraint, use_z)
	BOOLEAN_PROPERTY(CopyLocationConstraint, invert_x)
	BOOLEAN_PROPERTY(CopyLocationConstraint, invert_y)
	BOOLEAN_PROPERTY(CopyLocationConstraint, invert_z)
	BOOLEAN_PROPERTY(CopyLocationConstraint, use_offset)

	POINTER_PROPERTY(Object, CopyRotationConstraint, target)
	STRING_PROPERTY(CopyRotationConstraint, subtarget)
	BOOLEAN_PROPERTY(CopyRotationConstraint, use_x)
	BOOLEAN_PROPERTY(CopyRotationConstraint, use_y)
	BOOLEAN_PROPERTY(CopyRotationConstraint, use_z)
	BOOLEAN_PROPERTY(CopyRotationConstraint, invert_x)
	BOOLEAN_PROPERTY(CopyRotationConstraint, invert_y)
	BOOLEAN_PROPERTY(CopyRotationConstraint, invert_z)
	BOOLEAN_PROPERTY(CopyRotationConstraint, use_offset)

	FLOAT_PROPERTY(CopyTransformsConstraint, head_tail)
	POINTER_PROPERTY(Object, CopyTransformsConstraint, target)
	STRING_PROPERTY(CopyTransformsConstraint, subtarget)

	POINTER_PROPERTY(Object, FloorConstraint, target)
	STRING_PROPERTY(FloorConstraint, subtarget)
	ENUM_PROPERTY(floor_location_enum, FloorConstraint, floor_location)
	BOOLEAN_PROPERTY(FloorConstraint, use_sticky)
	BOOLEAN_PROPERTY(FloorConstraint, use_rotation)
	FLOAT_PROPERTY(FloorConstraint, offset)

	FLOAT_PROPERTY(TrackToConstraint, head_tail)
	POINTER_PROPERTY(Object, TrackToConstraint, target)
	STRING_PROPERTY(TrackToConstraint, subtarget)
	ENUM_PROPERTY(track_axis_enum, TrackToConstraint, track_axis)
	ENUM_PROPERTY(up_axis_enum, TrackToConstraint, up_axis)
	BOOLEAN_PROPERTY(TrackToConstraint, use_target_z)

	POINTER_PROPERTY(Object, KinematicConstraint, target)
	STRING_PROPERTY(KinematicConstraint, subtarget)
	INT_PROPERTY(KinematicConstraint, iterations)
	POINTER_PROPERTY(Object, KinematicConstraint, pole_target)
	STRING_PROPERTY(KinematicConstraint, pole_subtarget)
	FLOAT_PROPERTY(KinematicConstraint, pole_angle)
	FLOAT_PROPERTY(KinematicConstraint, weight)
	FLOAT_PROPERTY(KinematicConstraint, orient_weight)
	INT_PROPERTY(KinematicConstraint, chain_count)
	BOOLEAN_PROPERTY(KinematicConstraint, use_tail)
	ENUM_PROPERTY(reference_axis_enum, KinematicConstraint, reference_axis)
	BOOLEAN_PROPERTY(KinematicConstraint, use_location)
	BOOLEAN_PROPERTY(KinematicConstraint, lock_location_x)
	BOOLEAN_PROPERTY(KinematicConstraint, lock_location_y)
	BOOLEAN_PROPERTY(KinematicConstraint, lock_location_z)
	BOOLEAN_PROPERTY(KinematicConstraint, use_rotation)
	BOOLEAN_PROPERTY(KinematicConstraint, lock_rotation_x)
	BOOLEAN_PROPERTY(KinematicConstraint, lock_rotation_y)
	BOOLEAN_PROPERTY(KinematicConstraint, lock_rotation_z)
	BOOLEAN_PROPERTY(KinematicConstraint, use_target)
	BOOLEAN_PROPERTY(KinematicConstraint, use_stretch)
	ENUM_PROPERTY(ik_type_enum, KinematicConstraint, ik_type)
	ENUM_PROPERTY(limit_mode_enum, KinematicConstraint, limit_mode)
	FLOAT_PROPERTY(KinematicConstraint, distance)

	POINTER_PROPERTY(Object, RigidBodyJointConstraint, target)
	POINTER_PROPERTY(Object, RigidBodyJointConstraint, child)
	ENUM_PROPERTY(pivot_type_enum, RigidBodyJointConstraint, pivot_type)
	FLOAT_PROPERTY(RigidBodyJointConstraint, pivot_x)
	FLOAT_PROPERTY(RigidBodyJointConstraint, pivot_y)
	FLOAT_PROPERTY(RigidBodyJointConstraint, pivot_z)
	FLOAT_PROPERTY(RigidBodyJointConstraint, axis_x)
	FLOAT_PROPERTY(RigidBodyJointConstraint, axis_y)
	FLOAT_PROPERTY(RigidBodyJointConstraint, axis_z)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, use_linked_collision)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, show_pivot)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_min_x)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_min_y)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_min_z)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_max_x)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_max_y)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_max_z)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_angle_min_x)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_angle_min_y)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_angle_min_z)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_angle_max_x)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_angle_max_y)
	FLOAT_PROPERTY(RigidBodyJointConstraint, limit_angle_max_z)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, use_limit_x)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, use_limit_y)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, use_limit_z)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, use_angular_limit_x)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, use_angular_limit_y)
	BOOLEAN_PROPERTY(RigidBodyJointConstraint, use_angular_limit_z)

	POINTER_PROPERTY(Object, ClampToConstraint, target)
	ENUM_PROPERTY(main_axis_enum, ClampToConstraint, main_axis)
	BOOLEAN_PROPERTY(ClampToConstraint, use_cyclic)

	POINTER_PROPERTY(Object, LimitDistanceConstraint, target)
	STRING_PROPERTY(LimitDistanceConstraint, subtarget)
	FLOAT_PROPERTY(LimitDistanceConstraint, distance)
	ENUM_PROPERTY(limit_mode_enum, LimitDistanceConstraint, limit_mode)

	BOOLEAN_PROPERTY(LimitScaleConstraint, use_min_x)
	BOOLEAN_PROPERTY(LimitScaleConstraint, use_min_y)
	BOOLEAN_PROPERTY(LimitScaleConstraint, use_min_z)
	BOOLEAN_PROPERTY(LimitScaleConstraint, use_max_x)
	BOOLEAN_PROPERTY(LimitScaleConstraint, use_max_y)
	BOOLEAN_PROPERTY(LimitScaleConstraint, use_max_z)
	FLOAT_PROPERTY(LimitScaleConstraint, min_x)
	FLOAT_PROPERTY(LimitScaleConstraint, min_y)
	FLOAT_PROPERTY(LimitScaleConstraint, min_z)
	FLOAT_PROPERTY(LimitScaleConstraint, max_x)
	FLOAT_PROPERTY(LimitScaleConstraint, max_y)
	FLOAT_PROPERTY(LimitScaleConstraint, max_z)
	BOOLEAN_PROPERTY(LimitScaleConstraint, use_transform_limit)

	BOOLEAN_PROPERTY(LimitRotationConstraint, use_limit_x)
	BOOLEAN_PROPERTY(LimitRotationConstraint, use_limit_y)
	BOOLEAN_PROPERTY(LimitRotationConstraint, use_limit_z)
	FLOAT_PROPERTY(LimitRotationConstraint, min_x)
	FLOAT_PROPERTY(LimitRotationConstraint, min_y)
	FLOAT_PROPERTY(LimitRotationConstraint, min_z)
	FLOAT_PROPERTY(LimitRotationConstraint, max_x)
	FLOAT_PROPERTY(LimitRotationConstraint, max_y)
	FLOAT_PROPERTY(LimitRotationConstraint, max_z)
	BOOLEAN_PROPERTY(LimitRotationConstraint, use_transform_limit)

	BOOLEAN_PROPERTY(LimitLocationConstraint, use_min_x)
	BOOLEAN_PROPERTY(LimitLocationConstraint, use_min_y)
	BOOLEAN_PROPERTY(LimitLocationConstraint, use_min_z)
	BOOLEAN_PROPERTY(LimitLocationConstraint, use_max_x)
	BOOLEAN_PROPERTY(LimitLocationConstraint, use_max_y)
	BOOLEAN_PROPERTY(LimitLocationConstraint, use_max_z)
	FLOAT_PROPERTY(LimitLocationConstraint, min_x)
	FLOAT_PROPERTY(LimitLocationConstraint, min_y)
	FLOAT_PROPERTY(LimitLocationConstraint, min_z)
	FLOAT_PROPERTY(LimitLocationConstraint, max_x)
	FLOAT_PROPERTY(LimitLocationConstraint, max_y)
	FLOAT_PROPERTY(LimitLocationConstraint, max_z)
	BOOLEAN_PROPERTY(LimitLocationConstraint, use_transform_limit)

	POINTER_PROPERTY(Object, TransformConstraint, target)
	STRING_PROPERTY(TransformConstraint, subtarget)
	ENUM_PROPERTY(map_from_enum, TransformConstraint, map_from)
	ENUM_PROPERTY(map_to_enum, TransformConstraint, map_to)
	ENUM_PROPERTY(map_to_x_from_enum, TransformConstraint, map_to_x_from)
	ENUM_PROPERTY(map_to_y_from_enum, TransformConstraint, map_to_y_from)
	ENUM_PROPERTY(map_to_z_from_enum, TransformConstraint, map_to_z_from)
	BOOLEAN_PROPERTY(TransformConstraint, use_motion_extrapolate)
	FLOAT_PROPERTY(TransformConstraint, from_min_x)
	FLOAT_PROPERTY(TransformConstraint, from_min_y)
	FLOAT_PROPERTY(TransformConstraint, from_min_z)
	FLOAT_PROPERTY(TransformConstraint, from_max_x)
	FLOAT_PROPERTY(TransformConstraint, from_max_y)
	FLOAT_PROPERTY(TransformConstraint, from_max_z)
	FLOAT_PROPERTY(TransformConstraint, to_min_x)
	FLOAT_PROPERTY(TransformConstraint, to_min_y)
	FLOAT_PROPERTY(TransformConstraint, to_min_z)
	FLOAT_PROPERTY(TransformConstraint, to_max_x)
	FLOAT_PROPERTY(TransformConstraint, to_max_y)
	FLOAT_PROPERTY(TransformConstraint, to_max_z)

	POINTER_PROPERTY(Object, ShrinkwrapConstraint, target)
	ENUM_PROPERTY(shrinkwrap_type_enum, ShrinkwrapConstraint, shrinkwrap_type)
	FLOAT_PROPERTY(ShrinkwrapConstraint, distance)
	BOOLEAN_PROPERTY(ShrinkwrapConstraint, use_x)
	BOOLEAN_PROPERTY(ShrinkwrapConstraint, use_y)
	BOOLEAN_PROPERTY(ShrinkwrapConstraint, use_z)

	POINTER_PROPERTY(Object, DampedTrackConstraint, target)
	STRING_PROPERTY(DampedTrackConstraint, subtarget)
	ENUM_PROPERTY(track_axis_enum, DampedTrackConstraint, track_axis)

	POINTER_PROPERTY(Object, SplineIKConstraint, target)
	INT_PROPERTY(SplineIKConstraint, chain_count)
	FLOAT_ARRAY_PROPERTY(SplineIKConstraint, 32, joint_bindings)
	BOOLEAN_PROPERTY(SplineIKConstraint, use_chain_offset)
	BOOLEAN_PROPERTY(SplineIKConstraint, use_even_divisions)
	BOOLEAN_PROPERTY(SplineIKConstraint, use_y_stretch)
	BOOLEAN_PROPERTY(SplineIKConstraint, use_curve_radius)
	ENUM_PROPERTY(xz_scale_mode_enum, SplineIKConstraint, xz_scale_mode)

	FLOAT_PROPERTY(PivotConstraint, head_tail)
	POINTER_PROPERTY(Object, PivotConstraint, target)
	STRING_PROPERTY(PivotConstraint, subtarget)
	BOOLEAN_PROPERTY(PivotConstraint, use_relative_location)
	FLOAT_ARRAY_PROPERTY(PivotConstraint, 3, offset)
	ENUM_PROPERTY(rotation_range_enum, PivotConstraint, rotation_range)

	POINTER_PROPERTY(Struct, Context, rna_type)
	POINTER_PROPERTY(WindowManager, Context, window_manager)
	POINTER_PROPERTY(Window, Context, window)
	POINTER_PROPERTY(Screen, Context, screen)
	POINTER_PROPERTY(Area, Context, area)
	POINTER_PROPERTY(Space, Context, space_data)
	POINTER_PROPERTY(Region, Context, region)
	POINTER_PROPERTY(RegionView3D, Context, region_data)
	POINTER_PROPERTY(BlendData, Context, blend_data)
	POINTER_PROPERTY(Scene, Context, scene)
	POINTER_PROPERTY(ToolSettings, Context, tool_settings)
	POINTER_PROPERTY(UserPreferences, Context, user_preferences)
	ENUM_PROPERTY(mode_enum, Context, mode)

	POINTER_PROPERTY(Struct, Controller, rna_type)
	STRING_PROPERTY(Controller, name)
	ENUM_PROPERTY(type_enum, Controller, type)
	BOOLEAN_PROPERTY(Controller, show_expanded)
	BOOLEAN_PROPERTY(Controller, use_priority)
	INT_PROPERTY(Controller, states)

	STRING_PROPERTY(ExpressionController, expression)

	ENUM_PROPERTY(mode_enum, PythonController, mode)
	POINTER_PROPERTY(Text, PythonController, text)
	STRING_PROPERTY(PythonController, module)
	BOOLEAN_PROPERTY(PythonController, use_debug)







	POINTER_PROPERTY(AnimData, Curve, animation_data)
	POINTER_PROPERTY(Key, Curve, shape_keys)

	BOOLEAN_PROPERTY(Curve, show_handles)
	BOOLEAN_PROPERTY(Curve, show_normal_face)
	INT_PROPERTY(Curve, path_duration)
	BOOLEAN_PROPERTY(Curve, use_path)
	BOOLEAN_PROPERTY(Curve, use_path_follow)
	BOOLEAN_PROPERTY(Curve, use_stretch)
	BOOLEAN_PROPERTY(Curve, use_deform_bounds)
	BOOLEAN_PROPERTY(Curve, use_time_offset)
	BOOLEAN_PROPERTY(Curve, use_radius)
	INT_PROPERTY(Curve, bevel_resolution)
	FLOAT_PROPERTY(Curve, offset)
	FLOAT_PROPERTY(Curve, extrude)
	FLOAT_PROPERTY(Curve, bevel_depth)
	INT_PROPERTY(Curve, resolution_u)
	INT_PROPERTY(Curve, resolution_v)
	INT_PROPERTY(Curve, render_resolution_u)
	INT_PROPERTY(Curve, render_resolution_v)
	FLOAT_PROPERTY(Curve, eval_time)
	POINTER_PROPERTY(Object, Curve, bevel_object)
	POINTER_PROPERTY(Object, Curve, taper_object)
	ENUM_PROPERTY(dimensions_enum, Curve, dimensions)
	BOOLEAN_PROPERTY(Curve, use_fill_front)
	BOOLEAN_PROPERTY(Curve, use_fill_back)
	ENUM_PROPERTY(twist_mode_enum, Curve, twist_mode)
	FLOAT_PROPERTY(Curve, twist_smooth)
	BOOLEAN_PROPERTY(Curve, use_fill_deform)
	BOOLEAN_PROPERTY(Curve, use_auto_texspace)
	FLOAT_ARRAY_PROPERTY(Curve, 3, texspace_location)
	FLOAT_ARRAY_PROPERTY(Curve, 3, texspace_size)
	BOOLEAN_PROPERTY(Curve, use_uv_as_generated)


	POINTER_PROPERTY(Struct, CurveSplines, rna_type)
	POINTER_PROPERTY(Object, CurveSplines, active)

	BOOLEAN_PROPERTY(SurfaceCurve, use_uv_as_generated)

	ENUM_PROPERTY(align_enum, TextCurve, align)
	FLOAT_PROPERTY(TextCurve, size)
	FLOAT_PROPERTY(TextCurve, small_caps_scale)
	FLOAT_PROPERTY(TextCurve, space_line)
	FLOAT_PROPERTY(TextCurve, space_word)
	FLOAT_PROPERTY(TextCurve, space_character)
	FLOAT_PROPERTY(TextCurve, shear)
	FLOAT_PROPERTY(TextCurve, offset_x)
	FLOAT_PROPERTY(TextCurve, offset_y)
	FLOAT_PROPERTY(TextCurve, underline_position)
	FLOAT_PROPERTY(TextCurve, underline_height)

	INT_PROPERTY(TextCurve, active_textbox)
	STRING_PROPERTY(TextCurve, family)
	STRING_PROPERTY(TextCurve, body)

	POINTER_PROPERTY(Object, TextCurve, follow_curve)
	POINTER_PROPERTY(VectorFont, TextCurve, font)
	POINTER_PROPERTY(VectorFont, TextCurve, font_bold)
	POINTER_PROPERTY(VectorFont, TextCurve, font_italic)
	POINTER_PROPERTY(VectorFont, TextCurve, font_bold_italic)
	POINTER_PROPERTY(TextCharacterFormat, TextCurve, edit_format)
	BOOLEAN_PROPERTY(TextCurve, use_fast_edit)
	BOOLEAN_PROPERTY(TextCurve, use_uv_as_generated)

	POINTER_PROPERTY(Struct, TextBox, rna_type)
	FLOAT_PROPERTY(TextBox, x)
	FLOAT_PROPERTY(TextBox, y)
	FLOAT_PROPERTY(TextBox, width)
	FLOAT_PROPERTY(TextBox, height)

	POINTER_PROPERTY(Struct, TextCharacterFormat, rna_type)
	BOOLEAN_PROPERTY(TextCharacterFormat, use_bold)
	BOOLEAN_PROPERTY(TextCharacterFormat, use_italic)
	BOOLEAN_PROPERTY(TextCharacterFormat, use_underline)
	BOOLEAN_PROPERTY(TextCharacterFormat, use_small_caps)

	POINTER_PROPERTY(Struct, SplinePoint, rna_type)
	BOOLEAN_PROPERTY(SplinePoint, select)
	BOOLEAN_PROPERTY(SplinePoint, hide)
	FLOAT_ARRAY_PROPERTY(SplinePoint, 4, co)
	FLOAT_PROPERTY(SplinePoint, weight)
	FLOAT_PROPERTY(SplinePoint, tilt)
	FLOAT_PROPERTY(SplinePoint, weight_softbody)
	FLOAT_PROPERTY(SplinePoint, radius)

	POINTER_PROPERTY(Struct, BezierSplinePoint, rna_type)
	BOOLEAN_PROPERTY(BezierSplinePoint, select_left_handle)
	BOOLEAN_PROPERTY(BezierSplinePoint, select_right_handle)
	BOOLEAN_PROPERTY(BezierSplinePoint, select_control_point)
	BOOLEAN_PROPERTY(BezierSplinePoint, hide)
	ENUM_PROPERTY(handle_left_type_enum, BezierSplinePoint, handle_left_type)
	ENUM_PROPERTY(handle_right_type_enum, BezierSplinePoint, handle_right_type)
	FLOAT_ARRAY_PROPERTY(BezierSplinePoint, 3, handle_left)
	FLOAT_ARRAY_PROPERTY(BezierSplinePoint, 3, co)
	FLOAT_ARRAY_PROPERTY(BezierSplinePoint, 3, handle_right)
	FLOAT_PROPERTY(BezierSplinePoint, tilt)
	FLOAT_PROPERTY(BezierSplinePoint, weight)
	FLOAT_PROPERTY(BezierSplinePoint, radius)

	POINTER_PROPERTY(Struct, Spline, rna_type)


	ENUM_PROPERTY(tilt_interpolation_enum, Spline, tilt_interpolation)
	ENUM_PROPERTY(radius_interpolation_enum, Spline, radius_interpolation)
	ENUM_PROPERTY(type_enum, Spline, type)
	INT_PROPERTY(Spline, point_count_u)
	INT_PROPERTY(Spline, point_count_v)
	INT_PROPERTY(Spline, order_u)
	INT_PROPERTY(Spline, order_v)
	INT_PROPERTY(Spline, resolution_u)
	INT_PROPERTY(Spline, resolution_v)
	BOOLEAN_PROPERTY(Spline, use_cyclic_u)
	BOOLEAN_PROPERTY(Spline, use_cyclic_v)
	BOOLEAN_PROPERTY(Spline, use_endpoint_u)
	BOOLEAN_PROPERTY(Spline, use_endpoint_v)
	BOOLEAN_PROPERTY(Spline, use_bezier_u)
	BOOLEAN_PROPERTY(Spline, use_bezier_v)
	BOOLEAN_PROPERTY(Spline, use_smooth)
	BOOLEAN_PROPERTY(Spline, hide)
	INT_PROPERTY(Spline, material_index)
	INT_PROPERTY(Spline, character_index)

	POINTER_PROPERTY(Struct, SplinePoints, rna_type)

	POINTER_PROPERTY(Struct, SplineBezierPoints, rna_type)

	POINTER_PROPERTY(Struct, FCurve, rna_type)
	ENUM_PROPERTY(extrapolation_enum, FCurve, extrapolation)
	POINTER_PROPERTY(Driver, FCurve, driver)
	POINTER_PROPERTY(ActionGroup, FCurve, group)
	STRING_PROPERTY(FCurve, data_path)
	INT_PROPERTY(FCurve, array_index)
	ENUM_PROPERTY(color_mode_enum, FCurve, color_mode)
	FLOAT_ARRAY_PROPERTY(FCurve, 3, color)
	BOOLEAN_PROPERTY(FCurve, select)
	BOOLEAN_PROPERTY(FCurve, lock)
	BOOLEAN_PROPERTY(FCurve, mute)
	BOOLEAN_PROPERTY(FCurve, use_auto_handle_clamp)
	BOOLEAN_PROPERTY(FCurve, hide)
	BOOLEAN_PROPERTY(FCurve, is_valid)




	POINTER_PROPERTY(Struct, FCurveKeyframePoints, rna_type)

	POINTER_PROPERTY(Struct, FCurveModifiers, rna_type)
	POINTER_PROPERTY(FModifier, FCurveModifiers, active)

	POINTER_PROPERTY(Struct, Keyframe, rna_type)
	BOOLEAN_PROPERTY(Keyframe, select_left_handle)
	BOOLEAN_PROPERTY(Keyframe, select_right_handle)
	BOOLEAN_PROPERTY(Keyframe, select_control_point)
	ENUM_PROPERTY(handle_left_type_enum, Keyframe, handle_left_type)
	ENUM_PROPERTY(handle_right_type_enum, Keyframe, handle_right_type)
	ENUM_PROPERTY(interpolation_enum, Keyframe, interpolation)
	ENUM_PROPERTY(type_enum, Keyframe, type)
	FLOAT_ARRAY_PROPERTY(Keyframe, 2, handle_left)
	FLOAT_ARRAY_PROPERTY(Keyframe, 2, co)
	FLOAT_ARRAY_PROPERTY(Keyframe, 2, handle_right)

	POINTER_PROPERTY(Struct, FCurveSample, rna_type)
	BOOLEAN_PROPERTY(FCurveSample, select)
	FLOAT_ARRAY_PROPERTY(FCurveSample, 2, co)

	POINTER_PROPERTY(Struct, DriverTarget, rna_type)
	POINTER_PROPERTY(ID, DriverTarget, id)
	ENUM_PROPERTY(id_type_enum, DriverTarget, id_type)
	STRING_PROPERTY(DriverTarget, data_path)
	STRING_PROPERTY(DriverTarget, bone_target)
	ENUM_PROPERTY(transform_type_enum, DriverTarget, transform_type)
	BOOLEAN_PROPERTY(DriverTarget, use_local_space_transform)

	POINTER_PROPERTY(Struct, DriverVariable, rna_type)
	STRING_PROPERTY(DriverVariable, name)
	ENUM_PROPERTY(type_enum, DriverVariable, type)


	POINTER_PROPERTY(Struct, Driver, rna_type)
	ENUM_PROPERTY(type_enum, Driver, type)
	STRING_PROPERTY(Driver, expression)

	BOOLEAN_PROPERTY(Driver, show_debug_info)
	BOOLEAN_PROPERTY(Driver, is_valid)

	POINTER_PROPERTY(Struct, ChannelDriverVariables, rna_type)

	POINTER_PROPERTY(Struct, FModifier, rna_type)
	ENUM_PROPERTY(type_enum, FModifier, type)
	BOOLEAN_PROPERTY(FModifier, show_expanded)
	BOOLEAN_PROPERTY(FModifier, mute)
	BOOLEAN_PROPERTY(FModifier, is_valid)
	BOOLEAN_PROPERTY(FModifier, active)

	BOOLEAN_PROPERTY(FModifierGenerator, use_additive)
	ENUM_PROPERTY(mode_enum, FModifierGenerator, mode)
	INT_PROPERTY(FModifierGenerator, poly_order)
	FLOAT_ARRAY_PROPERTY(FModifierGenerator, 32, coefficients)

	FLOAT_PROPERTY(FModifierFunctionGenerator, amplitude)
	FLOAT_PROPERTY(FModifierFunctionGenerator, phase_multiplier)
	FLOAT_PROPERTY(FModifierFunctionGenerator, phase_offset)
	FLOAT_PROPERTY(FModifierFunctionGenerator, value_offset)
	BOOLEAN_PROPERTY(FModifierFunctionGenerator, use_additive)
	ENUM_PROPERTY(function_type_enum, FModifierFunctionGenerator, function_type)


	FLOAT_PROPERTY(FModifierEnvelope, reference_value)
	FLOAT_PROPERTY(FModifierEnvelope, default_min)
	FLOAT_PROPERTY(FModifierEnvelope, default_max)

	POINTER_PROPERTY(Struct, FModifierEnvelopeControlPoint, rna_type)
	FLOAT_PROPERTY(FModifierEnvelopeControlPoint, min)
	FLOAT_PROPERTY(FModifierEnvelopeControlPoint, max)
	FLOAT_PROPERTY(FModifierEnvelopeControlPoint, frame)

	ENUM_PROPERTY(mode_before_enum, FModifierCycles, mode_before)
	INT_PROPERTY(FModifierCycles, cycles_before)
	ENUM_PROPERTY(mode_after_enum, FModifierCycles, mode_after)
	INT_PROPERTY(FModifierCycles, cycles_after)


	BOOLEAN_PROPERTY(FModifierLimits, use_min_x)
	BOOLEAN_PROPERTY(FModifierLimits, use_min_y)
	BOOLEAN_PROPERTY(FModifierLimits, use_max_x)
	BOOLEAN_PROPERTY(FModifierLimits, use_max_y)
	FLOAT_PROPERTY(FModifierLimits, min_x)
	FLOAT_PROPERTY(FModifierLimits, min_y)
	FLOAT_PROPERTY(FModifierLimits, max_x)
	FLOAT_PROPERTY(FModifierLimits, max_y)

	ENUM_PROPERTY(blend_type_enum, FModifierNoise, blend_type)
	FLOAT_PROPERTY(FModifierNoise, scale)
	FLOAT_PROPERTY(FModifierNoise, strength)
	FLOAT_PROPERTY(FModifierNoise, phase)
	INT_PROPERTY(FModifierNoise, depth)

	FLOAT_PROPERTY(FModifierStepped, frame_step)
	FLOAT_PROPERTY(FModifierStepped, frame_offset)
	BOOLEAN_PROPERTY(FModifierStepped, use_frame_start)
	BOOLEAN_PROPERTY(FModifierStepped, use_frame_end)
	FLOAT_PROPERTY(FModifierStepped, frame_start)
	FLOAT_PROPERTY(FModifierStepped, frame_end)

	POINTER_PROPERTY(Struct, FluidSettings, rna_type)
	ENUM_PROPERTY(type_enum, FluidSettings, type)

	INT_PROPERTY(DomainFluidSettings, resolution)
	INT_PROPERTY(DomainFluidSettings, preview_resolution)
	ENUM_PROPERTY(viewport_display_mode_enum, DomainFluidSettings, viewport_display_mode)
	ENUM_PROPERTY(render_display_mode_enum, DomainFluidSettings, render_display_mode)
	BOOLEAN_PROPERTY(DomainFluidSettings, use_reverse_frames)
	STRING_PROPERTY(DomainFluidSettings, filepath)
	STRING_PROPERTY(DomainFluidSettings, memory_estimate)
	FLOAT_ARRAY_PROPERTY(DomainFluidSettings, 3, gravity)
	BOOLEAN_PROPERTY(DomainFluidSettings, use_time_override)
	FLOAT_PROPERTY(DomainFluidSettings, start_time)
	FLOAT_PROPERTY(DomainFluidSettings, end_time)
	FLOAT_PROPERTY(DomainFluidSettings, simulation_scale)
	ENUM_PROPERTY(viscosity_preset_enum, DomainFluidSettings, viscosity_preset)
	FLOAT_PROPERTY(DomainFluidSettings, viscosity_base)
	INT_PROPERTY(DomainFluidSettings, viscosity_exponent)
	INT_PROPERTY(DomainFluidSettings, grid_levels)
	FLOAT_PROPERTY(DomainFluidSettings, compressibility)
	ENUM_PROPERTY(slip_type_enum, DomainFluidSettings, slip_type)
	FLOAT_PROPERTY(DomainFluidSettings, partial_slip_factor)
	FLOAT_PROPERTY(DomainFluidSettings, surface_smooth)
	INT_PROPERTY(DomainFluidSettings, surface_subdivisions)
	BOOLEAN_PROPERTY(DomainFluidSettings, use_speed_vectors)
	INT_PROPERTY(DomainFluidSettings, tracer_particles)
	FLOAT_PROPERTY(DomainFluidSettings, generate_particles)

	BOOLEAN_PROPERTY(FluidFluidSettings, use)
	ENUM_PROPERTY(volume_initialization_enum, FluidFluidSettings, volume_initialization)
	BOOLEAN_PROPERTY(FluidFluidSettings, use_animated_mesh)
	FLOAT_ARRAY_PROPERTY(FluidFluidSettings, 3, initial_velocity)

	BOOLEAN_PROPERTY(ObstacleFluidSettings, use)
	ENUM_PROPERTY(volume_initialization_enum, ObstacleFluidSettings, volume_initialization)
	BOOLEAN_PROPERTY(ObstacleFluidSettings, use_animated_mesh)
	ENUM_PROPERTY(slip_type_enum, ObstacleFluidSettings, slip_type)
	FLOAT_PROPERTY(ObstacleFluidSettings, partial_slip_factor)
	FLOAT_PROPERTY(ObstacleFluidSettings, impact_factor)

	BOOLEAN_PROPERTY(InflowFluidSettings, use)
	ENUM_PROPERTY(volume_initialization_enum, InflowFluidSettings, volume_initialization)
	BOOLEAN_PROPERTY(InflowFluidSettings, use_animated_mesh)
	FLOAT_ARRAY_PROPERTY(InflowFluidSettings, 3, inflow_velocity)
	BOOLEAN_PROPERTY(InflowFluidSettings, use_local_coords)

	BOOLEAN_PROPERTY(OutflowFluidSettings, use)
	ENUM_PROPERTY(volume_initialization_enum, OutflowFluidSettings, volume_initialization)
	BOOLEAN_PROPERTY(OutflowFluidSettings, use_animated_mesh)

	BOOLEAN_PROPERTY(ParticleFluidSettings, use_drops)
	BOOLEAN_PROPERTY(ParticleFluidSettings, use_floats)
	BOOLEAN_PROPERTY(ParticleFluidSettings, show_tracer)
	FLOAT_PROPERTY(ParticleFluidSettings, particle_influence)
	FLOAT_PROPERTY(ParticleFluidSettings, alpha_influence)
	STRING_PROPERTY(ParticleFluidSettings, filepath)

	BOOLEAN_PROPERTY(ControlFluidSettings, use)
	FLOAT_PROPERTY(ControlFluidSettings, start_time)
	FLOAT_PROPERTY(ControlFluidSettings, end_time)
	FLOAT_PROPERTY(ControlFluidSettings, attraction_strength)
	FLOAT_PROPERTY(ControlFluidSettings, attraction_radius)
	FLOAT_PROPERTY(ControlFluidSettings, velocity_strength)
	FLOAT_PROPERTY(ControlFluidSettings, velocity_radius)
	FLOAT_PROPERTY(ControlFluidSettings, quality)
	BOOLEAN_PROPERTY(ControlFluidSettings, use_reverse_frames)


	ENUM_PROPERTY(draw_mode_enum, GreasePencil, draw_mode)
	BOOLEAN_PROPERTY(GreasePencil, use_stroke_endpoints)

	POINTER_PROPERTY(Struct, GPencilLayer, rna_type)
	STRING_PROPERTY(GPencilLayer, info)

	POINTER_PROPERTY(GPencilFrame, GPencilLayer, active_frame)
	FLOAT_ARRAY_PROPERTY(GPencilLayer, 3, color)
	FLOAT_PROPERTY(GPencilLayer, alpha)
	INT_PROPERTY(GPencilLayer, line_width)
	BOOLEAN_PROPERTY(GPencilLayer, use_onion_skinning)
	INT_PROPERTY(GPencilLayer, ghost_range_max)
	BOOLEAN_PROPERTY(GPencilLayer, hide)
	BOOLEAN_PROPERTY(GPencilLayer, lock)
	BOOLEAN_PROPERTY(GPencilLayer, lock_frame)
	BOOLEAN_PROPERTY(GPencilLayer, active)
	BOOLEAN_PROPERTY(GPencilLayer, select)
	BOOLEAN_PROPERTY(GPencilLayer, show_points)

	POINTER_PROPERTY(Struct, GPencilFrame, rna_type)

	INT_PROPERTY(GPencilFrame, frame_number)
	BOOLEAN_PROPERTY(GPencilFrame, is_edited)
	BOOLEAN_PROPERTY(GPencilFrame, select)

	POINTER_PROPERTY(Struct, GPencilStroke, rna_type)


	POINTER_PROPERTY(Struct, GPencilStrokePoint, rna_type)
	FLOAT_ARRAY_PROPERTY(GPencilStrokePoint, 3, co)
	FLOAT_PROPERTY(GPencilStrokePoint, pressure)

	FLOAT_ARRAY_PROPERTY(Group, 3, dupli_offset)
	BOOLEAN_ARRAY_PROPERTY(Group, 20, layers)


	POINTER_PROPERTY(Struct, GroupObjects, rna_type)

	STRING_PROPERTY(Image, filepath)
	STRING_PROPERTY(Image, filepath_raw)
	ENUM_PROPERTY(file_format_enum, Image, file_format)
	ENUM_PROPERTY(source_enum, Image, source)
	ENUM_PROPERTY(type_enum, Image, type)
	POINTER_PROPERTY(PackedFile, Image, packed_file)
	ENUM_PROPERTY(field_order_enum, Image, field_order)
	BOOLEAN_PROPERTY(Image, use_fields)
	BOOLEAN_PROPERTY(Image, use_premultiply)
	BOOLEAN_PROPERTY(Image, is_dirty)
	ENUM_PROPERTY(generated_type_enum, Image, generated_type)
	INT_PROPERTY(Image, generated_width)
	INT_PROPERTY(Image, generated_height)
	ENUM_PROPERTY(mapping_enum, Image, mapping)
	FLOAT_ARRAY_PROPERTY(Image, 2, display_aspect)
	BOOLEAN_PROPERTY(Image, use_animation)
	INT_PROPERTY(Image, frame_start)
	INT_PROPERTY(Image, frame_end)
	INT_PROPERTY(Image, fps)
	BOOLEAN_PROPERTY(Image, use_tiles)
	INT_PROPERTY(Image, tiles_x)
	INT_PROPERTY(Image, tiles_y)
	BOOLEAN_PROPERTY(Image, use_clamp_x)
	BOOLEAN_PROPERTY(Image, use_clamp_y)
	INT_PROPERTY(Image, bindcode)
	BOOLEAN_PROPERTY(Image, has_data)
	INT_PROPERTY(Image, depth)
	INT_ARRAY_PROPERTY(Image, 2, size)

	POINTER_PROPERTY(Struct, ImageUser, rna_type)
	BOOLEAN_PROPERTY(ImageUser, use_auto_refresh)
	BOOLEAN_PROPERTY(ImageUser, use_cyclic)
	INT_PROPERTY(ImageUser, frame_duration)
	INT_PROPERTY(ImageUser, frame_offset)
	INT_PROPERTY(ImageUser, frame_start)
	INT_PROPERTY(ImageUser, fields_per_frame)
	INT_PROPERTY(ImageUser, multilayer_layer)
	INT_PROPERTY(ImageUser, multilayer_pass)

	POINTER_PROPERTY(ShapeKey, Key, reference_key)

	POINTER_PROPERTY(AnimData, Key, animation_data)
	POINTER_PROPERTY(ID, Key, user)
	BOOLEAN_PROPERTY(Key, use_relative)
	INT_PROPERTY(Key, slurph)

	POINTER_PROPERTY(Struct, ShapeKey, rna_type)
	STRING_PROPERTY(ShapeKey, name)
	FLOAT_PROPERTY(ShapeKey, frame)
	FLOAT_PROPERTY(ShapeKey, value)
	ENUM_PROPERTY(interpolation_enum, ShapeKey, interpolation)
	STRING_PROPERTY(ShapeKey, vertex_group)
	POINTER_PROPERTY(ShapeKey, ShapeKey, relative_key)
	BOOLEAN_PROPERTY(ShapeKey, mute)
	FLOAT_PROPERTY(ShapeKey, slider_min)
	FLOAT_PROPERTY(ShapeKey, slider_max)


	POINTER_PROPERTY(Struct, ShapeKeyPoint, rna_type)
	FLOAT_ARRAY_PROPERTY(ShapeKeyPoint, 3, co)

	POINTER_PROPERTY(Struct, ShapeKeyCurvePoint, rna_type)
	FLOAT_ARRAY_PROPERTY(ShapeKeyCurvePoint, 3, co)
	FLOAT_PROPERTY(ShapeKeyCurvePoint, tilt)

	POINTER_PROPERTY(Struct, ShapeKeyBezierPoint, rna_type)
	FLOAT_ARRAY_PROPERTY(ShapeKeyBezierPoint, 3, co)
	FLOAT_ARRAY_PROPERTY(ShapeKeyBezierPoint, 3, handle_left)
	FLOAT_ARRAY_PROPERTY(ShapeKeyBezierPoint, 3, handle_right)

	ENUM_PROPERTY(type_enum, Lamp, type)
	FLOAT_PROPERTY(Lamp, distance)
	FLOAT_PROPERTY(Lamp, energy)
	FLOAT_ARRAY_PROPERTY(Lamp, 3, color)
	BOOLEAN_PROPERTY(Lamp, use_own_layer)
	BOOLEAN_PROPERTY(Lamp, use_negative)
	BOOLEAN_PROPERTY(Lamp, use_specular)
	BOOLEAN_PROPERTY(Lamp, use_diffuse)
	POINTER_PROPERTY(AnimData, Lamp, animation_data)

	POINTER_PROPERTY(Texture, Lamp, active_texture)
	INT_PROPERTY(Lamp, active_texture_index)

	POINTER_PROPERTY(Struct, LampTextureSlots, rna_type)

	ENUM_PROPERTY(falloff_type_enum, PointLamp, falloff_type)
	POINTER_PROPERTY(CurveMapping, PointLamp, falloff_curve)
	BOOLEAN_PROPERTY(PointLamp, use_sphere)
	FLOAT_PROPERTY(PointLamp, linear_attenuation)
	FLOAT_PROPERTY(PointLamp, quadratic_attenuation)
	ENUM_PROPERTY(shadow_method_enum, PointLamp, shadow_method)
	FLOAT_ARRAY_PROPERTY(PointLamp, 3, shadow_color)
	BOOLEAN_PROPERTY(PointLamp, use_only_shadow)
	ENUM_PROPERTY(shadow_ray_sample_method_enum, PointLamp, shadow_ray_sample_method)
	INT_PROPERTY(PointLamp, shadow_ray_samples)
	FLOAT_PROPERTY(PointLamp, shadow_adaptive_threshold)
	FLOAT_PROPERTY(PointLamp, shadow_soft_size)
	BOOLEAN_PROPERTY(PointLamp, use_shadow_layer)

	ENUM_PROPERTY(shadow_method_enum, AreaLamp, shadow_method)
	FLOAT_ARRAY_PROPERTY(AreaLamp, 3, shadow_color)
	BOOLEAN_PROPERTY(AreaLamp, use_only_shadow)
	ENUM_PROPERTY(shadow_ray_sample_method_enum, AreaLamp, shadow_ray_sample_method)
	INT_PROPERTY(AreaLamp, shadow_ray_samples_x)
	INT_PROPERTY(AreaLamp, shadow_ray_samples_y)
	FLOAT_PROPERTY(AreaLamp, shadow_adaptive_threshold)
	FLOAT_PROPERTY(AreaLamp, shadow_soft_size)
	BOOLEAN_PROPERTY(AreaLamp, use_shadow_layer)
	BOOLEAN_PROPERTY(AreaLamp, use_umbra)
	BOOLEAN_PROPERTY(AreaLamp, use_dither)
	BOOLEAN_PROPERTY(AreaLamp, use_jitter)
	ENUM_PROPERTY(shape_enum, AreaLamp, shape)
	FLOAT_PROPERTY(AreaLamp, size)
	FLOAT_PROPERTY(AreaLamp, size_y)
	FLOAT_PROPERTY(AreaLamp, gamma)

	ENUM_PROPERTY(falloff_type_enum, SpotLamp, falloff_type)
	POINTER_PROPERTY(CurveMapping, SpotLamp, falloff_curve)
	BOOLEAN_PROPERTY(SpotLamp, use_sphere)
	FLOAT_PROPERTY(SpotLamp, linear_attenuation)
	FLOAT_PROPERTY(SpotLamp, quadratic_attenuation)
	ENUM_PROPERTY(shadow_method_enum, SpotLamp, shadow_method)
	FLOAT_ARRAY_PROPERTY(SpotLamp, 3, shadow_color)
	BOOLEAN_PROPERTY(SpotLamp, use_only_shadow)
	ENUM_PROPERTY(shadow_ray_sample_method_enum, SpotLamp, shadow_ray_sample_method)
	INT_PROPERTY(SpotLamp, shadow_ray_samples)
	FLOAT_PROPERTY(SpotLamp, shadow_adaptive_threshold)
	FLOAT_PROPERTY(SpotLamp, shadow_soft_size)
	BOOLEAN_PROPERTY(SpotLamp, use_shadow_layer)
	BOOLEAN_PROPERTY(SpotLamp, use_square)
	BOOLEAN_PROPERTY(SpotLamp, use_halo)
	FLOAT_PROPERTY(SpotLamp, halo_intensity)
	INT_PROPERTY(SpotLamp, halo_step)
	INT_PROPERTY(SpotLamp, shadow_buffer_size)
	ENUM_PROPERTY(shadow_filter_type_enum, SpotLamp, shadow_filter_type)
	ENUM_PROPERTY(shadow_sample_buffers_enum, SpotLamp, shadow_sample_buffers)
	FLOAT_PROPERTY(SpotLamp, spot_blend)
	FLOAT_PROPERTY(SpotLamp, spot_size)
	BOOLEAN_PROPERTY(SpotLamp, show_cone)
	FLOAT_PROPERTY(SpotLamp, shadow_buffer_clip_start)
	FLOAT_PROPERTY(SpotLamp, shadow_buffer_clip_end)
	FLOAT_PROPERTY(SpotLamp, shadow_buffer_bias)
	FLOAT_PROPERTY(SpotLamp, shadow_buffer_soft)
	INT_PROPERTY(SpotLamp, shadow_buffer_samples)
	ENUM_PROPERTY(shadow_buffer_type_enum, SpotLamp, shadow_buffer_type)
	BOOLEAN_PROPERTY(SpotLamp, use_auto_clip_start)
	BOOLEAN_PROPERTY(SpotLamp, use_auto_clip_end)
	FLOAT_PROPERTY(SpotLamp, compression_threshold)

	ENUM_PROPERTY(shadow_method_enum, SunLamp, shadow_method)
	FLOAT_ARRAY_PROPERTY(SunLamp, 3, shadow_color)
	BOOLEAN_PROPERTY(SunLamp, use_only_shadow)
	ENUM_PROPERTY(shadow_ray_sample_method_enum, SunLamp, shadow_ray_sample_method)
	INT_PROPERTY(SunLamp, shadow_ray_samples)
	FLOAT_PROPERTY(SunLamp, shadow_adaptive_threshold)
	FLOAT_PROPERTY(SunLamp, shadow_soft_size)
	BOOLEAN_PROPERTY(SunLamp, use_shadow_layer)
	POINTER_PROPERTY(LampSkySettings, SunLamp, sky)

	POINTER_PROPERTY(Struct, LampSkySettings, rna_type)
	ENUM_PROPERTY(sky_color_space_enum, LampSkySettings, sky_color_space)
	ENUM_PROPERTY(sky_blend_type_enum, LampSkySettings, sky_blend_type)
	FLOAT_PROPERTY(LampSkySettings, horizon_brightness)
	FLOAT_PROPERTY(LampSkySettings, spread)
	FLOAT_PROPERTY(LampSkySettings, sun_brightness)
	FLOAT_PROPERTY(LampSkySettings, sun_size)
	FLOAT_PROPERTY(LampSkySettings, backscattered_light)
	FLOAT_PROPERTY(LampSkySettings, sun_intensity)
	FLOAT_PROPERTY(LampSkySettings, atmosphere_turbidity)
	FLOAT_PROPERTY(LampSkySettings, atmosphere_inscattering)
	FLOAT_PROPERTY(LampSkySettings, atmosphere_extinction)
	FLOAT_PROPERTY(LampSkySettings, atmosphere_distance_factor)
	FLOAT_PROPERTY(LampSkySettings, sky_blend)
	FLOAT_PROPERTY(LampSkySettings, sky_exposure)
	BOOLEAN_PROPERTY(LampSkySettings, use_sky)
	BOOLEAN_PROPERTY(LampSkySettings, use_atmosphere)


	ENUM_PROPERTY(texture_coords_enum, LampTextureSlot, texture_coords)
	POINTER_PROPERTY(Object, LampTextureSlot, object)
	BOOLEAN_PROPERTY(LampTextureSlot, use_map_color)
	BOOLEAN_PROPERTY(LampTextureSlot, use_map_shadow)
	FLOAT_PROPERTY(LampTextureSlot, color_factor)
	FLOAT_PROPERTY(LampTextureSlot, shadow_factor)

	INT_PROPERTY(Lattice, points_u)
	INT_PROPERTY(Lattice, points_v)
	INT_PROPERTY(Lattice, points_w)
	ENUM_PROPERTY(interpolation_type_u_enum, Lattice, interpolation_type_u)
	ENUM_PROPERTY(interpolation_type_v_enum, Lattice, interpolation_type_v)
	ENUM_PROPERTY(interpolation_type_w_enum, Lattice, interpolation_type_w)
	BOOLEAN_PROPERTY(Lattice, use_outside)
	STRING_PROPERTY(Lattice, vertex_group)
	POINTER_PROPERTY(Key, Lattice, shape_keys)

	POINTER_PROPERTY(AnimData, Lattice, animation_data)

	POINTER_PROPERTY(Struct, LatticePoint, rna_type)
	FLOAT_ARRAY_PROPERTY(LatticePoint, 3, co)
	FLOAT_ARRAY_PROPERTY(LatticePoint, 3, co_deform)


	POINTER_PROPERTY(Struct, BlendData, rna_type)
	STRING_PROPERTY(BlendData, filepath)
	BOOLEAN_PROPERTY(BlendData, is_dirty)




























	POINTER_PROPERTY(Struct, BlendDataCameras, rna_type)

	POINTER_PROPERTY(Struct, BlendDataScenes, rna_type)

	POINTER_PROPERTY(Struct, BlendDataObjects, rna_type)

	POINTER_PROPERTY(Struct, BlendDataMaterials, rna_type)

	POINTER_PROPERTY(Struct, BlendDataNodeTrees, rna_type)

	POINTER_PROPERTY(Struct, BlendDataMeshes, rna_type)

	POINTER_PROPERTY(Struct, BlendDataLamps, rna_type)

	POINTER_PROPERTY(Struct, BlendDataLibraries, rna_type)

	POINTER_PROPERTY(Struct, BlendDataScreens, rna_type)

	POINTER_PROPERTY(Struct, BlendDataWindowManagers, rna_type)

	POINTER_PROPERTY(Struct, BlendDataImages, rna_type)

	POINTER_PROPERTY(Struct, BlendDataLattices, rna_type)

	POINTER_PROPERTY(Struct, BlendDataCurves, rna_type)

	POINTER_PROPERTY(Struct, BlendDataMetaBalls, rna_type)

	POINTER_PROPERTY(Struct, BlendDataFonts, rna_type)

	POINTER_PROPERTY(Struct, BlendDataTextures, rna_type)

	POINTER_PROPERTY(Struct, BlendDataBrushes, rna_type)

	POINTER_PROPERTY(Struct, BlendDataWorlds, rna_type)

	POINTER_PROPERTY(Struct, BlendDataGroups, rna_type)

	POINTER_PROPERTY(Struct, BlendDataTexts, rna_type)

	POINTER_PROPERTY(Struct, BlendDataSounds, rna_type)

	POINTER_PROPERTY(Struct, BlendDataArmatures, rna_type)

	POINTER_PROPERTY(Struct, BlendDataActions, rna_type)

	POINTER_PROPERTY(Struct, BlendDataParticles, rna_type)

	POINTER_PROPERTY(Struct, BlendDataGreasePencils, rna_type)

	ENUM_PROPERTY(type_enum, Material, type)
	BOOLEAN_PROPERTY(Material, use_transparency)
	ENUM_PROPERTY(transparency_method_enum, Material, transparency_method)
	ENUM_PROPERTY(preview_render_type_enum, Material, preview_render_type)
	FLOAT_PROPERTY(Material, ambient)
	FLOAT_PROPERTY(Material, emit)
	FLOAT_PROPERTY(Material, translucency)
	BOOLEAN_PROPERTY(Material, use_cubic)
	BOOLEAN_PROPERTY(Material, use_object_color)
	FLOAT_PROPERTY(Material, shadow_ray_bias)
	FLOAT_PROPERTY(Material, shadow_buffer_bias)
	FLOAT_PROPERTY(Material, shadow_cast_alpha)
	POINTER_PROPERTY(Group, Material, light_group)
	BOOLEAN_PROPERTY(Material, use_light_group_exclusive)
	BOOLEAN_PROPERTY(Material, use_raytrace)
	BOOLEAN_PROPERTY(Material, use_shadows)
	BOOLEAN_PROPERTY(Material, use_shadeless)
	BOOLEAN_PROPERTY(Material, use_vertex_color_light)
	BOOLEAN_PROPERTY(Material, use_vertex_color_paint)
	BOOLEAN_PROPERTY(Material, invert_z)
	FLOAT_PROPERTY(Material, offset_z)
	BOOLEAN_PROPERTY(Material, use_sky)
	BOOLEAN_PROPERTY(Material, use_only_shadow)
	BOOLEAN_PROPERTY(Material, use_face_texture)
	BOOLEAN_PROPERTY(Material, use_face_texture_alpha)
	BOOLEAN_PROPERTY(Material, use_cast_shadows_only)
	BOOLEAN_PROPERTY(Material, use_mist)
	BOOLEAN_PROPERTY(Material, use_transparent_shadows)
	BOOLEAN_PROPERTY(Material, use_ray_shadow_bias)
	BOOLEAN_PROPERTY(Material, use_full_oversampling)
	BOOLEAN_PROPERTY(Material, use_cast_buffer_shadows)
	BOOLEAN_PROPERTY(Material, use_cast_approximate)
	BOOLEAN_PROPERTY(Material, use_tangent_shading)
	POINTER_PROPERTY(MaterialRaytraceMirror, Material, raytrace_mirror)
	POINTER_PROPERTY(MaterialRaytraceTransparency, Material, raytrace_transparency)
	POINTER_PROPERTY(MaterialVolume, Material, volume)
	POINTER_PROPERTY(MaterialHalo, Material, halo)
	POINTER_PROPERTY(MaterialSubsurfaceScattering, Material, subsurface_scattering)
	POINTER_PROPERTY(MaterialStrand, Material, strand)
	POINTER_PROPERTY(MaterialPhysics, Material, physics)
	POINTER_PROPERTY(NodeTree, Material, node_tree)
	BOOLEAN_PROPERTY(Material, use_nodes)
	POINTER_PROPERTY(Material, Material, active_node_material)
	POINTER_PROPERTY(AnimData, Material, animation_data)

	POINTER_PROPERTY(Texture, Material, active_texture)
	INT_PROPERTY(Material, active_texture_index)
	BOOLEAN_ARRAY_PROPERTY(Material, 18, use_textures)
	FLOAT_ARRAY_PROPERTY(Material, 3, diffuse_color)
	FLOAT_ARRAY_PROPERTY(Material, 3, specular_color)
	FLOAT_ARRAY_PROPERTY(Material, 3, mirror_color)
	FLOAT_PROPERTY(Material, alpha)
	FLOAT_PROPERTY(Material, specular_alpha)
	BOOLEAN_PROPERTY(Material, use_diffuse_ramp)
	POINTER_PROPERTY(ColorRamp, Material, diffuse_ramp)
	BOOLEAN_PROPERTY(Material, use_specular_ramp)
	POINTER_PROPERTY(ColorRamp, Material, specular_ramp)
	ENUM_PROPERTY(diffuse_ramp_blend_enum, Material, diffuse_ramp_blend)
	ENUM_PROPERTY(specular_ramp_blend_enum, Material, specular_ramp_blend)
	ENUM_PROPERTY(diffuse_ramp_input_enum, Material, diffuse_ramp_input)
	ENUM_PROPERTY(specular_ramp_input_enum, Material, specular_ramp_input)
	FLOAT_PROPERTY(Material, diffuse_ramp_factor)
	FLOAT_PROPERTY(Material, specular_ramp_factor)
	ENUM_PROPERTY(diffuse_shader_enum, Material, diffuse_shader)
	FLOAT_PROPERTY(Material, diffuse_intensity)
	FLOAT_PROPERTY(Material, roughness)
	FLOAT_PROPERTY(Material, diffuse_toon_size)
	FLOAT_PROPERTY(Material, diffuse_toon_smooth)
	FLOAT_PROPERTY(Material, diffuse_fresnel)
	FLOAT_PROPERTY(Material, diffuse_fresnel_factor)
	FLOAT_PROPERTY(Material, darkness)
	ENUM_PROPERTY(specular_shader_enum, Material, specular_shader)
	FLOAT_PROPERTY(Material, specular_intensity)
	INT_PROPERTY(Material, specular_hardness)
	FLOAT_PROPERTY(Material, specular_ior)
	FLOAT_PROPERTY(Material, specular_toon_size)
	FLOAT_PROPERTY(Material, specular_toon_smooth)
	FLOAT_PROPERTY(Material, specular_slope)

	POINTER_PROPERTY(Struct, MaterialTextureSlots, rna_type)

	POINTER_PROPERTY(Struct, MaterialRaytraceMirror, rna_type)
	BOOLEAN_PROPERTY(MaterialRaytraceMirror, use)
	FLOAT_PROPERTY(MaterialRaytraceMirror, reflect_factor)
	FLOAT_PROPERTY(MaterialRaytraceMirror, fresnel)
	FLOAT_PROPERTY(MaterialRaytraceMirror, fresnel_factor)
	FLOAT_PROPERTY(MaterialRaytraceMirror, gloss_factor)
	FLOAT_PROPERTY(MaterialRaytraceMirror, gloss_anisotropic)
	INT_PROPERTY(MaterialRaytraceMirror, gloss_samples)
	FLOAT_PROPERTY(MaterialRaytraceMirror, gloss_threshold)
	INT_PROPERTY(MaterialRaytraceMirror, depth)
	FLOAT_PROPERTY(MaterialRaytraceMirror, distance)
	ENUM_PROPERTY(fade_to_enum, MaterialRaytraceMirror, fade_to)

	POINTER_PROPERTY(Struct, MaterialRaytraceTransparency, rna_type)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, ior)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, fresnel)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, fresnel_factor)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, gloss_factor)
	INT_PROPERTY(MaterialRaytraceTransparency, gloss_samples)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, gloss_threshold)
	INT_PROPERTY(MaterialRaytraceTransparency, depth)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, filter)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, depth_max)
	FLOAT_PROPERTY(MaterialRaytraceTransparency, falloff)

	POINTER_PROPERTY(Struct, MaterialVolume, rna_type)
	ENUM_PROPERTY(step_method_enum, MaterialVolume, step_method)
	FLOAT_PROPERTY(MaterialVolume, step_size)
	ENUM_PROPERTY(light_method_enum, MaterialVolume, light_method)
	BOOLEAN_PROPERTY(MaterialVolume, use_external_shadows)
	BOOLEAN_PROPERTY(MaterialVolume, use_light_cache)
	INT_PROPERTY(MaterialVolume, cache_resolution)
	FLOAT_PROPERTY(MaterialVolume, ms_diffusion)
	FLOAT_PROPERTY(MaterialVolume, ms_spread)
	FLOAT_PROPERTY(MaterialVolume, ms_intensity)
	FLOAT_PROPERTY(MaterialVolume, depth_threshold)
	FLOAT_PROPERTY(MaterialVolume, density)
	FLOAT_PROPERTY(MaterialVolume, density_scale)
	FLOAT_PROPERTY(MaterialVolume, scattering)
	FLOAT_ARRAY_PROPERTY(MaterialVolume, 3, transmission_color)
	FLOAT_ARRAY_PROPERTY(MaterialVolume, 3, reflection_color)
	FLOAT_PROPERTY(MaterialVolume, reflection)
	FLOAT_ARRAY_PROPERTY(MaterialVolume, 3, emission_color)
	FLOAT_PROPERTY(MaterialVolume, emission)
	FLOAT_PROPERTY(MaterialVolume, asymmetry)

	POINTER_PROPERTY(Struct, MaterialHalo, rna_type)
	FLOAT_PROPERTY(MaterialHalo, size)
	INT_PROPERTY(MaterialHalo, hardness)
	FLOAT_PROPERTY(MaterialHalo, add)
	INT_PROPERTY(MaterialHalo, ring_count)
	INT_PROPERTY(MaterialHalo, line_count)
	INT_PROPERTY(MaterialHalo, star_tip_count)
	INT_PROPERTY(MaterialHalo, seed)
	BOOLEAN_PROPERTY(MaterialHalo, use_flare_mode)
	FLOAT_PROPERTY(MaterialHalo, flare_size)
	FLOAT_PROPERTY(MaterialHalo, flare_subflare_size)
	FLOAT_PROPERTY(MaterialHalo, flare_boost)
	INT_PROPERTY(MaterialHalo, flare_seed)
	INT_PROPERTY(MaterialHalo, flare_subflare_count)
	BOOLEAN_PROPERTY(MaterialHalo, use_ring)
	BOOLEAN_PROPERTY(MaterialHalo, use_lines)
	BOOLEAN_PROPERTY(MaterialHalo, use_star)
	BOOLEAN_PROPERTY(MaterialHalo, use_texture)
	BOOLEAN_PROPERTY(MaterialHalo, use_vertex_normal)
	BOOLEAN_PROPERTY(MaterialHalo, use_extreme_alpha)
	BOOLEAN_PROPERTY(MaterialHalo, use_shaded)
	BOOLEAN_PROPERTY(MaterialHalo, use_soft)

	POINTER_PROPERTY(Struct, MaterialSubsurfaceScattering, rna_type)
	FLOAT_ARRAY_PROPERTY(MaterialSubsurfaceScattering, 3, radius)
	FLOAT_ARRAY_PROPERTY(MaterialSubsurfaceScattering, 3, color)
	FLOAT_PROPERTY(MaterialSubsurfaceScattering, error_threshold)
	FLOAT_PROPERTY(MaterialSubsurfaceScattering, scale)
	FLOAT_PROPERTY(MaterialSubsurfaceScattering, ior)
	FLOAT_PROPERTY(MaterialSubsurfaceScattering, color_factor)
	FLOAT_PROPERTY(MaterialSubsurfaceScattering, texture_factor)
	FLOAT_PROPERTY(MaterialSubsurfaceScattering, front)
	FLOAT_PROPERTY(MaterialSubsurfaceScattering, back)
	BOOLEAN_PROPERTY(MaterialSubsurfaceScattering, use)

	ENUM_PROPERTY(texture_coords_enum, MaterialTextureSlot, texture_coords)
	POINTER_PROPERTY(Object, MaterialTextureSlot, object)
	STRING_PROPERTY(MaterialTextureSlot, uv_layer)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_from_dupli)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_from_original)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_color_diffuse)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_normal)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_color_spec)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_mirror)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_diffuse)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_specular)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_ambient)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_hardness)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_raymir)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_alpha)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_emit)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_translucency)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_displacement)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_warp)
	ENUM_PROPERTY(mapping_x_enum, MaterialTextureSlot, mapping_x)
	ENUM_PROPERTY(mapping_y_enum, MaterialTextureSlot, mapping_y)
	ENUM_PROPERTY(mapping_z_enum, MaterialTextureSlot, mapping_z)
	ENUM_PROPERTY(mapping_enum, MaterialTextureSlot, mapping)
	ENUM_PROPERTY(normal_map_space_enum, MaterialTextureSlot, normal_map_space)
	FLOAT_PROPERTY(MaterialTextureSlot, normal_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, displacement_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, warp_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, specular_color_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, diffuse_color_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, mirror_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, alpha_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, diffuse_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, specular_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, emit_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, hardness_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, raymir_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, translucency_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, ambient_factor)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_color_emission)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_color_reflection)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_color_transmission)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_density)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_emission)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_scatter)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use_map_reflect)
	FLOAT_PROPERTY(MaterialTextureSlot, emission_color_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, reflection_color_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, transmission_color_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, density_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, emission_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, scattering_factor)
	FLOAT_PROPERTY(MaterialTextureSlot, reflection_factor)
	BOOLEAN_PROPERTY(MaterialTextureSlot, use)
	ENUM_PROPERTY(bump_method_enum, MaterialTextureSlot, bump_method)
	ENUM_PROPERTY(bump_objectspace_enum, MaterialTextureSlot, bump_objectspace)

	POINTER_PROPERTY(Struct, MaterialStrand, rna_type)
	BOOLEAN_PROPERTY(MaterialStrand, use_tangent_shading)
	BOOLEAN_PROPERTY(MaterialStrand, use_surface_diffuse)
	FLOAT_PROPERTY(MaterialStrand, blend_distance)
	BOOLEAN_PROPERTY(MaterialStrand, use_blender_units)
	FLOAT_PROPERTY(MaterialStrand, root_size)
	FLOAT_PROPERTY(MaterialStrand, tip_size)
	FLOAT_PROPERTY(MaterialStrand, size_min)
	FLOAT_PROPERTY(MaterialStrand, shape)
	FLOAT_PROPERTY(MaterialStrand, width_fade)
	STRING_PROPERTY(MaterialStrand, uv_layer)

	POINTER_PROPERTY(Struct, MaterialPhysics, rna_type)
	FLOAT_PROPERTY(MaterialPhysics, friction)
	FLOAT_PROPERTY(MaterialPhysics, elasticity)
	BOOLEAN_PROPERTY(MaterialPhysics, use_fh_normal)
	FLOAT_PROPERTY(MaterialPhysics, fh_force)
	FLOAT_PROPERTY(MaterialPhysics, fh_distance)
	FLOAT_PROPERTY(MaterialPhysics, fh_damping)





	POINTER_PROPERTY(Mesh, Mesh, texture_mesh)

	POINTER_PROPERTY(MeshTextureFaceLayer, Mesh, uv_texture_clone)
	INT_PROPERTY(Mesh, uv_texture_clone_index)
	POINTER_PROPERTY(MeshTextureFaceLayer, Mesh, uv_texture_stencil)
	INT_PROPERTY(Mesh, uv_texture_stencil_index)




	BOOLEAN_PROPERTY(Mesh, use_auto_smooth)
	INT_PROPERTY(Mesh, auto_smooth_angle)
	BOOLEAN_PROPERTY(Mesh, show_double_sided)
	POINTER_PROPERTY(Mesh, Mesh, texco_mesh)
	POINTER_PROPERTY(Key, Mesh, shape_keys)
	BOOLEAN_PROPERTY(Mesh, use_auto_texspace)
	FLOAT_ARRAY_PROPERTY(Mesh, 3, texspace_location)
	FLOAT_ARRAY_PROPERTY(Mesh, 3, texspace_size)

	BOOLEAN_PROPERTY(Mesh, show_edges)
	BOOLEAN_PROPERTY(Mesh, show_all_edges)
	BOOLEAN_PROPERTY(Mesh, show_faces)
	BOOLEAN_PROPERTY(Mesh, show_normal_face)
	BOOLEAN_PROPERTY(Mesh, show_normal_vertex)
	BOOLEAN_PROPERTY(Mesh, show_edge_crease)
	BOOLEAN_PROPERTY(Mesh, show_edge_bevel_weight)
	BOOLEAN_PROPERTY(Mesh, show_edge_seams)
	BOOLEAN_PROPERTY(Mesh, show_edge_sharp)
	BOOLEAN_PROPERTY(Mesh, show_extra_edge_length)
	BOOLEAN_PROPERTY(Mesh, show_extra_face_angle)
	BOOLEAN_PROPERTY(Mesh, show_extra_face_area)
	BOOLEAN_PROPERTY(Mesh, use_mirror_x)
	BOOLEAN_PROPERTY(Mesh, use_mirror_topology)
	BOOLEAN_PROPERTY(Mesh, use_paint_mask)
	INT_PROPERTY(Mesh, total_vert_sel)
	INT_PROPERTY(Mesh, total_edge_sel)
	INT_PROPERTY(Mesh, total_face_sel)
	POINTER_PROPERTY(AnimData, Mesh, animation_data)

	POINTER_PROPERTY(Struct, MeshVertices, rna_type)

	POINTER_PROPERTY(Struct, MeshEdges, rna_type)

	POINTER_PROPERTY(Struct, MeshFaces, rna_type)
	INT_PROPERTY(MeshFaces, active)
	POINTER_PROPERTY(MeshTextureFace, MeshFaces, active_tface)

	POINTER_PROPERTY(Struct, UVTextures, rna_type)
	POINTER_PROPERTY(MeshTextureFaceLayer, UVTextures, active)
	INT_PROPERTY(UVTextures, active_index)

	POINTER_PROPERTY(Struct, VertexColors, rna_type)
	POINTER_PROPERTY(MeshColorLayer, VertexColors, active)
	INT_PROPERTY(VertexColors, active_index)

	POINTER_PROPERTY(Struct, MeshVertex, rna_type)
	FLOAT_ARRAY_PROPERTY(MeshVertex, 3, co)
	FLOAT_ARRAY_PROPERTY(MeshVertex, 3, normal)
	BOOLEAN_PROPERTY(MeshVertex, select)
	BOOLEAN_PROPERTY(MeshVertex, hide)
	FLOAT_PROPERTY(MeshVertex, bevel_weight)

	INT_PROPERTY(MeshVertex, index)

	POINTER_PROPERTY(Struct, VertexGroupElement, rna_type)
	INT_PROPERTY(VertexGroupElement, group)
	FLOAT_PROPERTY(VertexGroupElement, weight)

	POINTER_PROPERTY(Struct, MeshEdge, rna_type)
	INT_ARRAY_PROPERTY(MeshEdge, 2, vertices)
	FLOAT_PROPERTY(MeshEdge, crease)
	FLOAT_PROPERTY(MeshEdge, bevel_weight)
	BOOLEAN_PROPERTY(MeshEdge, select)
	BOOLEAN_PROPERTY(MeshEdge, hide)
	BOOLEAN_PROPERTY(MeshEdge, use_seam)
	BOOLEAN_PROPERTY(MeshEdge, use_edge_sharp)
	BOOLEAN_PROPERTY(MeshEdge, is_loose)
	BOOLEAN_PROPERTY(MeshEdge, is_fgon)
	INT_PROPERTY(MeshEdge, index)

	POINTER_PROPERTY(Struct, MeshFace, rna_type)
	INT_ARRAY_PROPERTY(MeshFace, 4, vertices)
	INT_ARRAY_PROPERTY(MeshFace, 4, vertices_raw)
	INT_PROPERTY(MeshFace, material_index)
	BOOLEAN_PROPERTY(MeshFace, select)
	BOOLEAN_PROPERTY(MeshFace, hide)
	BOOLEAN_PROPERTY(MeshFace, use_smooth)
	FLOAT_ARRAY_PROPERTY(MeshFace, 3, normal)
	FLOAT_PROPERTY(MeshFace, area)
	INT_PROPERTY(MeshFace, index)

	POINTER_PROPERTY(Struct, MeshTextureFaceLayer, rna_type)
	STRING_PROPERTY(MeshTextureFaceLayer, name)
	BOOLEAN_PROPERTY(MeshTextureFaceLayer, active)
	BOOLEAN_PROPERTY(MeshTextureFaceLayer, active_render)
	BOOLEAN_PROPERTY(MeshTextureFaceLayer, active_clone)


	POINTER_PROPERTY(Struct, MeshTextureFace, rna_type)
	POINTER_PROPERTY(Image, MeshTextureFace, image)
	BOOLEAN_PROPERTY(MeshTextureFace, use_image)
	BOOLEAN_PROPERTY(MeshTextureFace, use_light)
	BOOLEAN_PROPERTY(MeshTextureFace, hide)
	BOOLEAN_PROPERTY(MeshTextureFace, use_collision)
	BOOLEAN_PROPERTY(MeshTextureFace, use_blend_shared)
	BOOLEAN_PROPERTY(MeshTextureFace, use_twoside)
	BOOLEAN_PROPERTY(MeshTextureFace, use_object_color)
	BOOLEAN_PROPERTY(MeshTextureFace, use_halo)
	BOOLEAN_PROPERTY(MeshTextureFace, use_billboard)
	BOOLEAN_PROPERTY(MeshTextureFace, use_shadow_cast)
	BOOLEAN_PROPERTY(MeshTextureFace, use_bitmap_text)
	BOOLEAN_PROPERTY(MeshTextureFace, use_alpha_sort)
	ENUM_PROPERTY(blend_type_enum, MeshTextureFace, blend_type)
	BOOLEAN_ARRAY_PROPERTY(MeshTextureFace, 4, select_uv)
	BOOLEAN_ARRAY_PROPERTY(MeshTextureFace, 4, pin_uv)
	FLOAT_ARRAY_PROPERTY(MeshTextureFace, 2, uv1)
	FLOAT_ARRAY_PROPERTY(MeshTextureFace, 2, uv2)
	FLOAT_ARRAY_PROPERTY(MeshTextureFace, 2, uv3)
	FLOAT_ARRAY_PROPERTY(MeshTextureFace, 2, uv4)
	FLOAT_ARRAY_PROPERTY(MeshTextureFace, 8, uv)
	FLOAT_ARRAY_PROPERTY(MeshTextureFace, 8, uv_raw)

	POINTER_PROPERTY(Struct, MeshSticky, rna_type)
	FLOAT_ARRAY_PROPERTY(MeshSticky, 2, co)

	POINTER_PROPERTY(Struct, MeshColorLayer, rna_type)
	STRING_PROPERTY(MeshColorLayer, name)
	BOOLEAN_PROPERTY(MeshColorLayer, active)
	BOOLEAN_PROPERTY(MeshColorLayer, active_render)


	POINTER_PROPERTY(Struct, MeshColor, rna_type)
	FLOAT_ARRAY_PROPERTY(MeshColor, 3, color1)
	FLOAT_ARRAY_PROPERTY(MeshColor, 3, color2)
	FLOAT_ARRAY_PROPERTY(MeshColor, 3, color3)
	FLOAT_ARRAY_PROPERTY(MeshColor, 3, color4)

	POINTER_PROPERTY(Struct, MeshFloatPropertyLayer, rna_type)
	STRING_PROPERTY(MeshFloatPropertyLayer, name)


	POINTER_PROPERTY(Struct, MeshFloatProperty, rna_type)
	FLOAT_PROPERTY(MeshFloatProperty, value)

	POINTER_PROPERTY(Struct, MeshIntPropertyLayer, rna_type)
	STRING_PROPERTY(MeshIntPropertyLayer, name)


	POINTER_PROPERTY(Struct, MeshIntProperty, rna_type)
	INT_PROPERTY(MeshIntProperty, value)

	POINTER_PROPERTY(Struct, MeshStringPropertyLayer, rna_type)
	STRING_PROPERTY(MeshStringPropertyLayer, name)


	POINTER_PROPERTY(Struct, MeshStringProperty, rna_type)
	STRING_PROPERTY(MeshStringProperty, value)

	POINTER_PROPERTY(Struct, MetaElement, rna_type)
	ENUM_PROPERTY(type_enum, MetaElement, type)
	FLOAT_ARRAY_PROPERTY(MetaElement, 3, co)
	FLOAT_ARRAY_PROPERTY(MetaElement, 4, rotation)
	FLOAT_PROPERTY(MetaElement, radius)
	FLOAT_PROPERTY(MetaElement, size_x)
	FLOAT_PROPERTY(MetaElement, size_y)
	FLOAT_PROPERTY(MetaElement, size_z)
	FLOAT_PROPERTY(MetaElement, stiffness)
	BOOLEAN_PROPERTY(MetaElement, use_negative)
	BOOLEAN_PROPERTY(MetaElement, hide)


	ENUM_PROPERTY(update_method_enum, MetaBall, update_method)
	FLOAT_PROPERTY(MetaBall, resolution)
	FLOAT_PROPERTY(MetaBall, render_resolution)
	FLOAT_PROPERTY(MetaBall, threshold)
	BOOLEAN_PROPERTY(MetaBall, use_auto_texspace)
	FLOAT_ARRAY_PROPERTY(MetaBall, 3, texspace_location)
	FLOAT_ARRAY_PROPERTY(MetaBall, 3, texspace_size)

	POINTER_PROPERTY(AnimData, MetaBall, animation_data)

	POINTER_PROPERTY(Struct, MetaBallElements, rna_type)
	POINTER_PROPERTY(MetaElement, MetaBallElements, active)

	POINTER_PROPERTY(Struct, Modifier, rna_type)
	STRING_PROPERTY(Modifier, name)
	ENUM_PROPERTY(type_enum, Modifier, type)
	BOOLEAN_PROPERTY(Modifier, show_viewport)
	BOOLEAN_PROPERTY(Modifier, show_render)
	BOOLEAN_PROPERTY(Modifier, show_in_editmode)
	BOOLEAN_PROPERTY(Modifier, show_on_cage)
	BOOLEAN_PROPERTY(Modifier, show_expanded)
	BOOLEAN_PROPERTY(Modifier, use_apply_on_spline)

	ENUM_PROPERTY(subdivision_type_enum, SubsurfModifier, subdivision_type)
	INT_PROPERTY(SubsurfModifier, levels)
	INT_PROPERTY(SubsurfModifier, render_levels)
	BOOLEAN_PROPERTY(SubsurfModifier, show_only_control_edges)
	BOOLEAN_PROPERTY(SubsurfModifier, use_subsurf_uv)

	POINTER_PROPERTY(Object, LatticeModifier, object)
	STRING_PROPERTY(LatticeModifier, vertex_group)

	POINTER_PROPERTY(Object, CurveModifier, object)
	STRING_PROPERTY(CurveModifier, vertex_group)
	ENUM_PROPERTY(deform_axis_enum, CurveModifier, deform_axis)

	FLOAT_PROPERTY(BuildModifier, frame_start)
	FLOAT_PROPERTY(BuildModifier, frame_duration)
	BOOLEAN_PROPERTY(BuildModifier, use_random_order)
	INT_PROPERTY(BuildModifier, seed)

	BOOLEAN_PROPERTY(MirrorModifier, use_x)
	BOOLEAN_PROPERTY(MirrorModifier, use_y)
	BOOLEAN_PROPERTY(MirrorModifier, use_z)
	BOOLEAN_PROPERTY(MirrorModifier, use_clip)
	BOOLEAN_PROPERTY(MirrorModifier, use_mirror_vertex_groups)
	BOOLEAN_PROPERTY(MirrorModifier, use_mirror_merge)
	BOOLEAN_PROPERTY(MirrorModifier, use_mirror_u)
	BOOLEAN_PROPERTY(MirrorModifier, use_mirror_v)
	FLOAT_PROPERTY(MirrorModifier, merge_threshold)
	POINTER_PROPERTY(Object, MirrorModifier, mirror_object)

	FLOAT_PROPERTY(DecimateModifier, ratio)
	INT_PROPERTY(DecimateModifier, face_count)

	BOOLEAN_PROPERTY(WaveModifier, use_x)
	BOOLEAN_PROPERTY(WaveModifier, use_y)
	BOOLEAN_PROPERTY(WaveModifier, use_cyclic)
	BOOLEAN_PROPERTY(WaveModifier, use_normal)
	BOOLEAN_PROPERTY(WaveModifier, use_normal_x)
	BOOLEAN_PROPERTY(WaveModifier, use_normal_y)
	BOOLEAN_PROPERTY(WaveModifier, use_normal_z)
	FLOAT_PROPERTY(WaveModifier, time_offset)
	FLOAT_PROPERTY(WaveModifier, lifetime)
	FLOAT_PROPERTY(WaveModifier, damping_time)
	FLOAT_PROPERTY(WaveModifier, falloff_radius)
	FLOAT_PROPERTY(WaveModifier, start_position_x)
	FLOAT_PROPERTY(WaveModifier, start_position_y)
	POINTER_PROPERTY(Object, WaveModifier, start_position_object)
	STRING_PROPERTY(WaveModifier, vertex_group)
	POINTER_PROPERTY(Texture, WaveModifier, texture)
	ENUM_PROPERTY(texture_coords_enum, WaveModifier, texture_coords)
	STRING_PROPERTY(WaveModifier, uv_layer)
	POINTER_PROPERTY(Object, WaveModifier, texture_coords_object)
	FLOAT_PROPERTY(WaveModifier, speed)
	FLOAT_PROPERTY(WaveModifier, height)
	FLOAT_PROPERTY(WaveModifier, width)
	FLOAT_PROPERTY(WaveModifier, narrowness)

	POINTER_PROPERTY(Object, ArmatureModifier, object)
	BOOLEAN_PROPERTY(ArmatureModifier, use_bone_envelopes)
	BOOLEAN_PROPERTY(ArmatureModifier, use_vertex_groups)
	BOOLEAN_PROPERTY(ArmatureModifier, use_deform_preserve_volume)
	BOOLEAN_PROPERTY(ArmatureModifier, use_multi_modifier)
	STRING_PROPERTY(ArmatureModifier, vertex_group)
	BOOLEAN_PROPERTY(ArmatureModifier, invert_vertex_group)

	FLOAT_PROPERTY(HookModifier, falloff)
	FLOAT_PROPERTY(HookModifier, force)
	POINTER_PROPERTY(Object, HookModifier, object)
	STRING_PROPERTY(HookModifier, subtarget)
	STRING_PROPERTY(HookModifier, vertex_group)

	POINTER_PROPERTY(SoftBodySettings, SoftBodyModifier, settings)
	POINTER_PROPERTY(PointCache, SoftBodyModifier, point_cache)

	POINTER_PROPERTY(Object, BooleanModifier, object)
	ENUM_PROPERTY(operation_enum, BooleanModifier, operation)

	ENUM_PROPERTY(fit_type_enum, ArrayModifier, fit_type)
	INT_PROPERTY(ArrayModifier, count)
	FLOAT_PROPERTY(ArrayModifier, fit_length)
	POINTER_PROPERTY(Object, ArrayModifier, curve)
	BOOLEAN_PROPERTY(ArrayModifier, use_constant_offset)
	FLOAT_ARRAY_PROPERTY(ArrayModifier, 3, constant_offset_displace)
	BOOLEAN_PROPERTY(ArrayModifier, use_relative_offset)
	FLOAT_ARRAY_PROPERTY(ArrayModifier, 3, relative_offset_displace)
	BOOLEAN_PROPERTY(ArrayModifier, use_merge_vertices)
	BOOLEAN_PROPERTY(ArrayModifier, use_merge_vertices_cap)
	FLOAT_PROPERTY(ArrayModifier, merge_threshold)
	BOOLEAN_PROPERTY(ArrayModifier, use_object_offset)
	POINTER_PROPERTY(Object, ArrayModifier, offset_object)
	POINTER_PROPERTY(Object, ArrayModifier, start_cap)
	POINTER_PROPERTY(Object, ArrayModifier, end_cap)

	FLOAT_PROPERTY(EdgeSplitModifier, split_angle)
	BOOLEAN_PROPERTY(EdgeSplitModifier, use_edge_angle)
	BOOLEAN_PROPERTY(EdgeSplitModifier, use_edge_sharp)

	STRING_PROPERTY(DisplaceModifier, vertex_group)
	POINTER_PROPERTY(Texture, DisplaceModifier, texture)
	FLOAT_PROPERTY(DisplaceModifier, mid_level)
	FLOAT_PROPERTY(DisplaceModifier, strength)
	ENUM_PROPERTY(direction_enum, DisplaceModifier, direction)
	ENUM_PROPERTY(texture_coords_enum, DisplaceModifier, texture_coords)
	STRING_PROPERTY(DisplaceModifier, uv_layer)
	POINTER_PROPERTY(Object, DisplaceModifier, texture_coordinate_object)

	STRING_PROPERTY(UVProjectModifier, uv_layer)
	INT_PROPERTY(UVProjectModifier, projector_count)

	POINTER_PROPERTY(Image, UVProjectModifier, image)
	FLOAT_PROPERTY(UVProjectModifier, aspect_x)
	FLOAT_PROPERTY(UVProjectModifier, aspect_y)
	FLOAT_PROPERTY(UVProjectModifier, scale_x)
	FLOAT_PROPERTY(UVProjectModifier, scale_y)
	BOOLEAN_PROPERTY(UVProjectModifier, use_image_override)

	POINTER_PROPERTY(Struct, UVProjector, rna_type)
	POINTER_PROPERTY(Object, UVProjector, object)

	BOOLEAN_PROPERTY(SmoothModifier, use_x)
	BOOLEAN_PROPERTY(SmoothModifier, use_y)
	BOOLEAN_PROPERTY(SmoothModifier, use_z)
	FLOAT_PROPERTY(SmoothModifier, factor)
	INT_PROPERTY(SmoothModifier, iterations)
	STRING_PROPERTY(SmoothModifier, vertex_group)

	ENUM_PROPERTY(cast_type_enum, CastModifier, cast_type)
	POINTER_PROPERTY(Object, CastModifier, object)
	BOOLEAN_PROPERTY(CastModifier, use_x)
	BOOLEAN_PROPERTY(CastModifier, use_y)
	BOOLEAN_PROPERTY(CastModifier, use_z)
	BOOLEAN_PROPERTY(CastModifier, use_radius_as_size)
	BOOLEAN_PROPERTY(CastModifier, use_transform)
	FLOAT_PROPERTY(CastModifier, factor)
	FLOAT_PROPERTY(CastModifier, radius)
	FLOAT_PROPERTY(CastModifier, size)
	STRING_PROPERTY(CastModifier, vertex_group)

	POINTER_PROPERTY(Object, MeshDeformModifier, object)
	BOOLEAN_PROPERTY(MeshDeformModifier, is_bound)
	BOOLEAN_PROPERTY(MeshDeformModifier, invert_vertex_group)
	STRING_PROPERTY(MeshDeformModifier, vertex_group)
	INT_PROPERTY(MeshDeformModifier, precision)
	BOOLEAN_PROPERTY(MeshDeformModifier, use_dynamic_bind)

	POINTER_PROPERTY(ParticleSystem, ParticleSystemModifier, particle_system)

	POINTER_PROPERTY(Object, ParticleInstanceModifier, object)
	INT_PROPERTY(ParticleInstanceModifier, particle_system_index)
	ENUM_PROPERTY(axis_enum, ParticleInstanceModifier, axis)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, use_normal)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, use_children)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, use_path)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, show_unborn)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, show_alive)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, show_dead)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, use_preserve_shape)
	BOOLEAN_PROPERTY(ParticleInstanceModifier, use_size)
	FLOAT_PROPERTY(ParticleInstanceModifier, position)
	FLOAT_PROPERTY(ParticleInstanceModifier, random_position)

	STRING_PROPERTY(ExplodeModifier, vertex_group)
	FLOAT_PROPERTY(ExplodeModifier, protect)
	BOOLEAN_PROPERTY(ExplodeModifier, use_edge_cut)
	BOOLEAN_PROPERTY(ExplodeModifier, show_unborn)
	BOOLEAN_PROPERTY(ExplodeModifier, show_alive)
	BOOLEAN_PROPERTY(ExplodeModifier, show_dead)
	BOOLEAN_PROPERTY(ExplodeModifier, use_size)
	STRING_PROPERTY(ExplodeModifier, particle_uv)

	POINTER_PROPERTY(ClothSettings, ClothModifier, settings)
	POINTER_PROPERTY(ClothCollisionSettings, ClothModifier, collision_settings)
	POINTER_PROPERTY(PointCache, ClothModifier, point_cache)

	POINTER_PROPERTY(CollisionSettings, CollisionModifier, settings)

	FLOAT_PROPERTY(BevelModifier, width)
	BOOLEAN_PROPERTY(BevelModifier, use_only_vertices)
	ENUM_PROPERTY(limit_method_enum, BevelModifier, limit_method)
	ENUM_PROPERTY(edge_weight_method_enum, BevelModifier, edge_weight_method)
	FLOAT_PROPERTY(BevelModifier, angle_limit)

	ENUM_PROPERTY(wrap_method_enum, ShrinkwrapModifier, wrap_method)
	ENUM_PROPERTY(cull_face_enum, ShrinkwrapModifier, cull_face)
	POINTER_PROPERTY(Object, ShrinkwrapModifier, target)
	POINTER_PROPERTY(Object, ShrinkwrapModifier, auxiliary_target)
	STRING_PROPERTY(ShrinkwrapModifier, vertex_group)
	FLOAT_PROPERTY(ShrinkwrapModifier, offset)
	BOOLEAN_PROPERTY(ShrinkwrapModifier, use_project_x)
	BOOLEAN_PROPERTY(ShrinkwrapModifier, use_project_y)
	BOOLEAN_PROPERTY(ShrinkwrapModifier, use_project_z)
	INT_PROPERTY(ShrinkwrapModifier, subsurf_levels)
	BOOLEAN_PROPERTY(ShrinkwrapModifier, use_negative_direction)
	BOOLEAN_PROPERTY(ShrinkwrapModifier, use_positive_direction)
	BOOLEAN_PROPERTY(ShrinkwrapModifier, use_keep_above_surface)

	POINTER_PROPERTY(FluidSettings, FluidSimulationModifier, settings)

	ENUM_PROPERTY(mode_enum, MaskModifier, mode)
	POINTER_PROPERTY(Object, MaskModifier, armature)
	STRING_PROPERTY(MaskModifier, vertex_group)
	BOOLEAN_PROPERTY(MaskModifier, invert_vertex_group)

	ENUM_PROPERTY(deform_method_enum, SimpleDeformModifier, deform_method)
	STRING_PROPERTY(SimpleDeformModifier, vertex_group)
	POINTER_PROPERTY(Object, SimpleDeformModifier, origin)
	BOOLEAN_PROPERTY(SimpleDeformModifier, use_relative)
	FLOAT_PROPERTY(SimpleDeformModifier, factor)
	FLOAT_ARRAY_PROPERTY(SimpleDeformModifier, 2, limits)
	BOOLEAN_PROPERTY(SimpleDeformModifier, lock_x)
	BOOLEAN_PROPERTY(SimpleDeformModifier, lock_y)

	ENUM_PROPERTY(subdivision_type_enum, MultiresModifier, subdivision_type)
	INT_PROPERTY(MultiresModifier, levels)
	INT_PROPERTY(MultiresModifier, sculpt_levels)
	INT_PROPERTY(MultiresModifier, render_levels)
	INT_PROPERTY(MultiresModifier, total_levels)
	BOOLEAN_PROPERTY(MultiresModifier, is_external)
	STRING_PROPERTY(MultiresModifier, filepath)
	BOOLEAN_PROPERTY(MultiresModifier, show_only_control_edges)


	POINTER_PROPERTY(SmokeDomainSettings, SmokeModifier, domain_settings)
	POINTER_PROPERTY(SmokeFlowSettings, SmokeModifier, flow_settings)
	POINTER_PROPERTY(SmokeCollSettings, SmokeModifier, coll_settings)
	ENUM_PROPERTY(smoke_type_enum, SmokeModifier, smoke_type)

	FLOAT_PROPERTY(SolidifyModifier, thickness)
	FLOAT_PROPERTY(SolidifyModifier, offset)
	FLOAT_PROPERTY(SolidifyModifier, edge_crease_inner)
	FLOAT_PROPERTY(SolidifyModifier, edge_crease_outer)
	FLOAT_PROPERTY(SolidifyModifier, edge_crease_rim)
	INT_PROPERTY(SolidifyModifier, material_offset)
	INT_PROPERTY(SolidifyModifier, material_offset_rim)
	STRING_PROPERTY(SolidifyModifier, vertex_group)
	BOOLEAN_PROPERTY(SolidifyModifier, use_rim)
	BOOLEAN_PROPERTY(SolidifyModifier, use_even_offset)
	BOOLEAN_PROPERTY(SolidifyModifier, use_quality_normals)
	BOOLEAN_PROPERTY(SolidifyModifier, invert_vertex_group)

	POINTER_PROPERTY(Object, ScrewModifier, object)
	INT_PROPERTY(ScrewModifier, steps)
	INT_PROPERTY(ScrewModifier, render_steps)
	INT_PROPERTY(ScrewModifier, iterations)
	ENUM_PROPERTY(axis_enum, ScrewModifier, axis)
	FLOAT_PROPERTY(ScrewModifier, angle)
	FLOAT_PROPERTY(ScrewModifier, screw_offset)
	BOOLEAN_PROPERTY(ScrewModifier, use_normal_flip)
	BOOLEAN_PROPERTY(ScrewModifier, use_normal_calculate)
	BOOLEAN_PROPERTY(ScrewModifier, use_object_screw_offset)

	POINTER_PROPERTY(Struct, NlaTrack, rna_type)

	STRING_PROPERTY(NlaTrack, name)
	BOOLEAN_PROPERTY(NlaTrack, active)
	BOOLEAN_PROPERTY(NlaTrack, is_solo)
	BOOLEAN_PROPERTY(NlaTrack, select)
	BOOLEAN_PROPERTY(NlaTrack, mute)
	BOOLEAN_PROPERTY(NlaTrack, lock)

	POINTER_PROPERTY(Struct, NlaStrips, rna_type)

	POINTER_PROPERTY(Struct, NlaStrip, rna_type)
	STRING_PROPERTY(NlaStrip, name)
	ENUM_PROPERTY(type_enum, NlaStrip, type)
	ENUM_PROPERTY(extrapolation_enum, NlaStrip, extrapolation)
	ENUM_PROPERTY(blend_type_enum, NlaStrip, blend_type)
	FLOAT_PROPERTY(NlaStrip, frame_start)
	FLOAT_PROPERTY(NlaStrip, frame_end)
	FLOAT_PROPERTY(NlaStrip, blend_in)
	FLOAT_PROPERTY(NlaStrip, blend_out)
	BOOLEAN_PROPERTY(NlaStrip, use_auto_blend)
	POINTER_PROPERTY(Action, NlaStrip, action)
	FLOAT_PROPERTY(NlaStrip, action_frame_start)
	FLOAT_PROPERTY(NlaStrip, action_frame_end)
	FLOAT_PROPERTY(NlaStrip, repeat)
	FLOAT_PROPERTY(NlaStrip, scale)



	FLOAT_PROPERTY(NlaStrip, influence)
	FLOAT_PROPERTY(NlaStrip, strip_time)
	BOOLEAN_PROPERTY(NlaStrip, use_animated_influence)
	BOOLEAN_PROPERTY(NlaStrip, use_animated_time)
	BOOLEAN_PROPERTY(NlaStrip, use_animated_time_cyclic)
	BOOLEAN_PROPERTY(NlaStrip, active)
	BOOLEAN_PROPERTY(NlaStrip, select)
	BOOLEAN_PROPERTY(NlaStrip, mute)
	BOOLEAN_PROPERTY(NlaStrip, use_reverse)

	POINTER_PROPERTY(AnimData, NodeTree, animation_data)

	POINTER_PROPERTY(GreasePencil, NodeTree, grease_pencil)
	ENUM_PROPERTY(type_enum, NodeTree, type)



	POINTER_PROPERTY(Struct, NodeLinks, rna_type)

	POINTER_PROPERTY(Struct, GroupInputs, rna_type)

	POINTER_PROPERTY(Struct, GroupOutputs, rna_type)

	POINTER_PROPERTY(Struct, NodeSocket, rna_type)
	STRING_PROPERTY(NodeSocket, name)
	ENUM_PROPERTY(type_enum, NodeSocket, type)

	FLOAT_ARRAY_PROPERTY(ValueNodeSocket, 1, default_value)

	FLOAT_ARRAY_PROPERTY(VectorNodeSocket, 3, default_value)

	FLOAT_ARRAY_PROPERTY(RGBANodeSocket, 4, default_value)

	POINTER_PROPERTY(Struct, Node, rna_type)
	FLOAT_ARRAY_PROPERTY(Node, 2, location)
	STRING_PROPERTY(Node, name)



	POINTER_PROPERTY(Struct, NodeLink, rna_type)
	POINTER_PROPERTY(Node, NodeLink, from_node)
	POINTER_PROPERTY(Node, NodeLink, to_node)
	POINTER_PROPERTY(NodeSocket, NodeLink, from_socket)
	POINTER_PROPERTY(NodeSocket, NodeLink, to_socket)

	ENUM_PROPERTY(type_enum, ShaderNode, type)

	ENUM_PROPERTY(type_enum, CompositorNode, type)

	ENUM_PROPERTY(type_enum, TextureNode, type)



	POINTER_PROPERTY(Struct, CompositorNodes, rna_type)



	POINTER_PROPERTY(Struct, ShaderNodes, rna_type)



	POINTER_PROPERTY(Struct, TextureNodes, rna_type)


	POINTER_PROPERTY(Material, ShaderNodeMaterial, material)
	BOOLEAN_PROPERTY(ShaderNodeMaterial, use_diffuse)
	BOOLEAN_PROPERTY(ShaderNodeMaterial, use_specular)
	BOOLEAN_PROPERTY(ShaderNodeMaterial, invert_normal)



	ENUM_PROPERTY(blend_type_enum, ShaderNodeMixRGB, blend_type)
	BOOLEAN_PROPERTY(ShaderNodeMixRGB, use_alpha)

	POINTER_PROPERTY(ColorRamp, ShaderNodeValToRGB, color_ramp)


	POINTER_PROPERTY(Texture, ShaderNodeTexture, texture)
	INT_PROPERTY(ShaderNodeTexture, node_output)


	STRING_PROPERTY(ShaderNodeGeometry, uv_layer)
	STRING_PROPERTY(ShaderNodeGeometry, color_layer)

	FLOAT_ARRAY_PROPERTY(ShaderNodeMapping, 3, location)
	FLOAT_ARRAY_PROPERTY(ShaderNodeMapping, 3, rotation)
	FLOAT_ARRAY_PROPERTY(ShaderNodeMapping, 3, scale)
	BOOLEAN_PROPERTY(ShaderNodeMapping, use_min)
	FLOAT_ARRAY_PROPERTY(ShaderNodeMapping, 3, min)
	BOOLEAN_PROPERTY(ShaderNodeMapping, use_max)
	FLOAT_ARRAY_PROPERTY(ShaderNodeMapping, 3, max)

	POINTER_PROPERTY(CurveMapping, ShaderNodeVectorCurve, mapping)

	POINTER_PROPERTY(CurveMapping, ShaderNodeRGBCurve, mapping)


	ENUM_PROPERTY(operation_enum, ShaderNodeMath, operation)

	ENUM_PROPERTY(operation_enum, ShaderNodeVectorMath, operation)


	POINTER_PROPERTY(Material, ShaderNodeExtendedMaterial, material)
	BOOLEAN_PROPERTY(ShaderNodeExtendedMaterial, use_diffuse)
	BOOLEAN_PROPERTY(ShaderNodeExtendedMaterial, use_specular)
	BOOLEAN_PROPERTY(ShaderNodeExtendedMaterial, invert_normal)








	ENUM_PROPERTY(blend_type_enum, CompositorNodeMixRGB, blend_type)
	BOOLEAN_PROPERTY(CompositorNodeMixRGB, use_alpha)

	POINTER_PROPERTY(ColorRamp, CompositorNodeValToRGB, color_ramp)



	POINTER_PROPERTY(CurveMapping, CompositorNodeCurveVec, mapping)

	POINTER_PROPERTY(CurveMapping, CompositorNodeCurveRGB, mapping)

	BOOLEAN_PROPERTY(CompositorNodeAlphaOver, use_premultiply)
	FLOAT_PROPERTY(CompositorNodeAlphaOver, premul)

	INT_PROPERTY(CompositorNodeBlur, size_x)
	INT_PROPERTY(CompositorNodeBlur, size_y)
	BOOLEAN_PROPERTY(CompositorNodeBlur, use_relative)
	ENUM_PROPERTY(aspect_correction_enum, CompositorNodeBlur, aspect_correction)
	FLOAT_PROPERTY(CompositorNodeBlur, factor)
	FLOAT_PROPERTY(CompositorNodeBlur, factor_x)
	FLOAT_PROPERTY(CompositorNodeBlur, factor_y)
	ENUM_PROPERTY(filter_type_enum, CompositorNodeBlur, filter_type)
	BOOLEAN_PROPERTY(CompositorNodeBlur, use_bokeh)
	BOOLEAN_PROPERTY(CompositorNodeBlur, use_gamma_correction)

	ENUM_PROPERTY(filter_type_enum, CompositorNodeFilter, filter_type)

	FLOAT_ARRAY_PROPERTY(CompositorNodeMapValue, 1, offset)
	FLOAT_ARRAY_PROPERTY(CompositorNodeMapValue, 1, size)
	BOOLEAN_PROPERTY(CompositorNodeMapValue, use_min)
	BOOLEAN_PROPERTY(CompositorNodeMapValue, use_max)
	FLOAT_ARRAY_PROPERTY(CompositorNodeMapValue, 1, min)
	FLOAT_ARRAY_PROPERTY(CompositorNodeMapValue, 1, max)

	POINTER_PROPERTY(CurveMapping, CompositorNodeTime, curve)
	INT_PROPERTY(CompositorNodeTime, frame_start)
	INT_PROPERTY(CompositorNodeTime, frame_end)

	INT_PROPERTY(CompositorNodeVecBlur, samples)
	INT_PROPERTY(CompositorNodeVecBlur, speed_min)
	INT_PROPERTY(CompositorNodeVecBlur, speed_max)
	FLOAT_PROPERTY(CompositorNodeVecBlur, factor)
	BOOLEAN_PROPERTY(CompositorNodeVecBlur, use_curved)




	FLOAT_PROPERTY(CompositorNodeHueSat, color_hue)
	FLOAT_PROPERTY(CompositorNodeHueSat, color_saturation)
	FLOAT_PROPERTY(CompositorNodeHueSat, color_value)

	POINTER_PROPERTY(Image, CompositorNodeImage, image)
	INT_PROPERTY(CompositorNodeImage, frame_duration)
	INT_PROPERTY(CompositorNodeImage, frame_start)
	INT_PROPERTY(CompositorNodeImage, frame_offset)
	BOOLEAN_PROPERTY(CompositorNodeImage, use_cyclic)
	BOOLEAN_PROPERTY(CompositorNodeImage, use_auto_refresh)
	ENUM_PROPERTY(layer_enum, CompositorNodeImage, layer)

	POINTER_PROPERTY(Scene, CompositorNodeRLayers, scene)
	ENUM_PROPERTY(layer_enum, CompositorNodeRLayers, layer)


	STRING_PROPERTY(CompositorNodeOutputFile, filepath)
	ENUM_PROPERTY(image_type_enum, CompositorNodeOutputFile, image_type)
	BOOLEAN_PROPERTY(CompositorNodeOutputFile, use_exr_half)
	ENUM_PROPERTY(exr_codec_enum, CompositorNodeOutputFile, exr_codec)
	INT_PROPERTY(CompositorNodeOutputFile, quality)
	INT_PROPERTY(CompositorNodeOutputFile, frame_start)
	INT_PROPERTY(CompositorNodeOutputFile, frame_end)

	POINTER_PROPERTY(Texture, CompositorNodeTexture, texture)
	INT_PROPERTY(CompositorNodeTexture, node_output)


	BOOLEAN_PROPERTY(CompositorNodeZcombine, use_alpha)


	INT_PROPERTY(CompositorNodeDilateErode, distance)

	ENUM_PROPERTY(filter_type_enum, CompositorNodeRotate, filter_type)

	ENUM_PROPERTY(space_enum, CompositorNodeScale, space)

	ENUM_PROPERTY(mode_enum, CompositorNodeSepYCCA, mode)

	ENUM_PROPERTY(mode_enum, CompositorNodeCombYCCA, mode)



	FLOAT_PROPERTY(CompositorNodeDiffMatte, tolerance)
	FLOAT_PROPERTY(CompositorNodeDiffMatte, falloff)

	ENUM_PROPERTY(channel_enum, CompositorNodeColorSpill, channel)
	ENUM_PROPERTY(limit_method_enum, CompositorNodeColorSpill, limit_method)
	ENUM_PROPERTY(limit_channel_enum, CompositorNodeColorSpill, limit_channel)
	FLOAT_PROPERTY(CompositorNodeColorSpill, ratio)
	BOOLEAN_PROPERTY(CompositorNodeColorSpill, use_unspill)
	FLOAT_PROPERTY(CompositorNodeColorSpill, unspill_red)
	FLOAT_PROPERTY(CompositorNodeColorSpill, unspill_green)
	FLOAT_PROPERTY(CompositorNodeColorSpill, unspill_blue)

	FLOAT_PROPERTY(CompositorNodeChromaMatte, tolerance)
	FLOAT_PROPERTY(CompositorNodeChromaMatte, threshold)
	FLOAT_PROPERTY(CompositorNodeChromaMatte, lift)
	FLOAT_PROPERTY(CompositorNodeChromaMatte, gain)
	FLOAT_PROPERTY(CompositorNodeChromaMatte, shadow_adjust)

	ENUM_PROPERTY(color_space_enum, CompositorNodeChannelMatte, color_space)
	ENUM_PROPERTY(matte_channel_enum, CompositorNodeChannelMatte, matte_channel)
	ENUM_PROPERTY(limit_method_enum, CompositorNodeChannelMatte, limit_method)
	ENUM_PROPERTY(limit_channel_enum, CompositorNodeChannelMatte, limit_channel)
	FLOAT_PROPERTY(CompositorNodeChannelMatte, limit_max)
	FLOAT_PROPERTY(CompositorNodeChannelMatte, limit_min)

	ENUM_PROPERTY(axis_enum, CompositorNodeFlip, axis)

	ENUM_PROPERTY(axis_enum, CompositorNodeSplitViewer, axis)
	INT_PROPERTY(CompositorNodeSplitViewer, factor)

	INT_PROPERTY(CompositorNodeMapUV, alpha)

	INT_PROPERTY(CompositorNodeIDMask, index)

	ENUM_PROPERTY(bokeh_enum, CompositorNodeDefocus, bokeh)
	INT_PROPERTY(CompositorNodeDefocus, angle)
	BOOLEAN_PROPERTY(CompositorNodeDefocus, use_gamma_correction)
	FLOAT_PROPERTY(CompositorNodeDefocus, f_stop)
	FLOAT_PROPERTY(CompositorNodeDefocus, blur_max)
	FLOAT_PROPERTY(CompositorNodeDefocus, threshold)
	BOOLEAN_PROPERTY(CompositorNodeDefocus, use_preview)
	INT_PROPERTY(CompositorNodeDefocus, samples)
	BOOLEAN_PROPERTY(CompositorNodeDefocus, use_zbuffer)
	FLOAT_PROPERTY(CompositorNodeDefocus, z_scale)



	ENUM_PROPERTY(operation_enum, CompositorNodeMath, operation)

	FLOAT_PROPERTY(CompositorNodeLumaMatte, limit_max)
	FLOAT_PROPERTY(CompositorNodeLumaMatte, limit_min)



	BOOLEAN_PROPERTY(CompositorNodeInvert, invert_rgb)
	BOOLEAN_PROPERTY(CompositorNodeInvert, invert_alpha)


	BOOLEAN_PROPERTY(CompositorNodeCrop, use_crop_size)
	BOOLEAN_PROPERTY(CompositorNodeCrop, relative)
	INT_PROPERTY(CompositorNodeCrop, min_x)
	INT_PROPERTY(CompositorNodeCrop, max_x)
	INT_PROPERTY(CompositorNodeCrop, min_y)
	INT_PROPERTY(CompositorNodeCrop, max_y)
	FLOAT_PROPERTY(CompositorNodeCrop, rel_min_x)
	FLOAT_PROPERTY(CompositorNodeCrop, rel_max_x)
	FLOAT_PROPERTY(CompositorNodeCrop, rel_min_y)
	FLOAT_PROPERTY(CompositorNodeCrop, rel_max_y)

	INT_PROPERTY(CompositorNodeDBlur, iterations)
	BOOLEAN_PROPERTY(CompositorNodeDBlur, use_wrap)
	FLOAT_PROPERTY(CompositorNodeDBlur, center_x)
	FLOAT_PROPERTY(CompositorNodeDBlur, center_y)
	FLOAT_PROPERTY(CompositorNodeDBlur, distance)
	FLOAT_PROPERTY(CompositorNodeDBlur, angle)
	FLOAT_PROPERTY(CompositorNodeDBlur, spin)
	FLOAT_PROPERTY(CompositorNodeDBlur, zoom)

	INT_PROPERTY(CompositorNodeBilateralblur, iterations)
	FLOAT_PROPERTY(CompositorNodeBilateralblur, sigma_color)
	FLOAT_PROPERTY(CompositorNodeBilateralblur, sigma_space)

	ENUM_PROPERTY(mapping_enum, CompositorNodePremulKey, mapping)

	ENUM_PROPERTY(glare_type_enum, CompositorNodeGlare, glare_type)
	ENUM_PROPERTY(quality_enum, CompositorNodeGlare, quality)
	INT_PROPERTY(CompositorNodeGlare, iterations)
	FLOAT_PROPERTY(CompositorNodeGlare, color_modulation)
	FLOAT_PROPERTY(CompositorNodeGlare, mix)
	FLOAT_PROPERTY(CompositorNodeGlare, threshold)
	INT_PROPERTY(CompositorNodeGlare, streaks)
	INT_PROPERTY(CompositorNodeGlare, angle_offset)
	FLOAT_PROPERTY(CompositorNodeGlare, fade)
	BOOLEAN_PROPERTY(CompositorNodeGlare, use_rotate_45)
	INT_PROPERTY(CompositorNodeGlare, size)

	ENUM_PROPERTY(tonemap_type_enum, CompositorNodeTonemap, tonemap_type)
	FLOAT_PROPERTY(CompositorNodeTonemap, key)
	FLOAT_PROPERTY(CompositorNodeTonemap, offset)
	FLOAT_PROPERTY(CompositorNodeTonemap, gamma)
	FLOAT_PROPERTY(CompositorNodeTonemap, intensity)
	FLOAT_PROPERTY(CompositorNodeTonemap, contrast)
	FLOAT_PROPERTY(CompositorNodeTonemap, adaptation)
	FLOAT_PROPERTY(CompositorNodeTonemap, correction)

	BOOLEAN_PROPERTY(CompositorNodeLensdist, use_projector)
	BOOLEAN_PROPERTY(CompositorNodeLensdist, use_jitter)
	BOOLEAN_PROPERTY(CompositorNodeLensdist, use_fit)

	ENUM_PROPERTY(channel_enum, CompositorNodeLevels, channel)

	FLOAT_PROPERTY(CompositorNodeColorMatte, color_hue)
	FLOAT_PROPERTY(CompositorNodeColorMatte, color_saturation)
	FLOAT_PROPERTY(CompositorNodeColorMatte, color_value)

	FLOAT_PROPERTY(CompositorNodeDistanceMatte, tolerance)
	FLOAT_PROPERTY(CompositorNodeDistanceMatte, falloff)

	ENUM_PROPERTY(correction_method_enum, CompositorNodeColorBalance, correction_method)
	FLOAT_ARRAY_PROPERTY(CompositorNodeColorBalance, 3, lift)
	FLOAT_ARRAY_PROPERTY(CompositorNodeColorBalance, 3, gamma)
	FLOAT_ARRAY_PROPERTY(CompositorNodeColorBalance, 3, gain)
	FLOAT_ARRAY_PROPERTY(CompositorNodeColorBalance, 3, offset)
	FLOAT_ARRAY_PROPERTY(CompositorNodeColorBalance, 3, power)
	FLOAT_ARRAY_PROPERTY(CompositorNodeColorBalance, 3, slope)

	POINTER_PROPERTY(CurveMapping, CompositorNodeHueCorrect, mapping)

	STRING_PROPERTY(TextureNodeOutput, filepath)


	POINTER_PROPERTY(Texture, TextureNodeTexture, texture)
	INT_PROPERTY(TextureNodeTexture, node_output)

	FLOAT_PROPERTY(TextureNodeBricks, offset)
	INT_PROPERTY(TextureNodeBricks, offset_frequency)
	FLOAT_PROPERTY(TextureNodeBricks, squash)
	INT_PROPERTY(TextureNodeBricks, squash_frequency)

	ENUM_PROPERTY(operation_enum, TextureNodeMath, operation)

	ENUM_PROPERTY(blend_type_enum, TextureNodeMixRGB, blend_type)
	BOOLEAN_PROPERTY(TextureNodeMixRGB, use_alpha)


	POINTER_PROPERTY(ColorRamp, TextureNodeValToRGB, color_ramp)

	POINTER_PROPERTY(Image, TextureNodeImage, image)

	POINTER_PROPERTY(CurveMapping, TextureNodeCurveRGB, mapping)



	POINTER_PROPERTY(CurveMapping, TextureNodeCurveTime, curve)
	INT_PROPERTY(TextureNodeCurveTime, frame_start)
	INT_PROPERTY(TextureNodeCurveTime, frame_end)










	POINTER_PROPERTY(NodeTree, NodeGroup, node_tree)

	POINTER_PROPERTY(ID, Object, data)
	ENUM_PROPERTY(type_enum, Object, type)
	ENUM_PROPERTY(mode_enum, Object, mode)
	BOOLEAN_ARRAY_PROPERTY(Object, 20, layers)
	BOOLEAN_PROPERTY(Object, select)
	FLOAT_ARRAY_PROPERTY(Object, 24, bound_box)
	POINTER_PROPERTY(Object, Object, parent)
	ENUM_PROPERTY(parent_type_enum, Object, parent_type)
	INT_ARRAY_PROPERTY(Object, 3, parent_vertices)
	STRING_PROPERTY(Object, parent_bone)
	ENUM_PROPERTY(track_axis_enum, Object, track_axis)
	ENUM_PROPERTY(up_axis_enum, Object, up_axis)
	POINTER_PROPERTY(Object, Object, proxy)
	POINTER_PROPERTY(Object, Object, proxy_group)

	POINTER_PROPERTY(Material, Object, active_material)
	INT_PROPERTY(Object, active_material_index)
	FLOAT_ARRAY_PROPERTY(Object, 3, location)
	FLOAT_ARRAY_PROPERTY(Object, 4, rotation_quaternion)
	FLOAT_ARRAY_PROPERTY(Object, 4, rotation_axis_angle)
	FLOAT_ARRAY_PROPERTY(Object, 3, rotation_euler)
	ENUM_PROPERTY(rotation_mode_enum, Object, rotation_mode)
	FLOAT_ARRAY_PROPERTY(Object, 3, scale)
	FLOAT_ARRAY_PROPERTY(Object, 3, dimensions)
	FLOAT_ARRAY_PROPERTY(Object, 3, delta_location)
	FLOAT_ARRAY_PROPERTY(Object, 3, delta_rotation_euler)
	FLOAT_ARRAY_PROPERTY(Object, 4, delta_rotation_quaternion)
	FLOAT_ARRAY_PROPERTY(Object, 3, delta_scale)
	BOOLEAN_ARRAY_PROPERTY(Object, 3, lock_location)
	BOOLEAN_ARRAY_PROPERTY(Object, 3, lock_rotation)
	BOOLEAN_PROPERTY(Object, lock_rotation_w)
	BOOLEAN_PROPERTY(Object, lock_rotations_4d)
	BOOLEAN_ARRAY_PROPERTY(Object, 3, lock_scale)
	FLOAT_ARRAY_PROPERTY(Object, 16, matrix_world)
	FLOAT_ARRAY_PROPERTY(Object, 16, matrix_local)
	FLOAT_ARRAY_PROPERTY(Object, 16, matrix_basis)


	POINTER_PROPERTY(GameObjectSettings, Object, game)

	ENUM_PROPERTY(empty_draw_type_enum, Object, empty_draw_type)
	FLOAT_PROPERTY(Object, empty_draw_size)
	INT_PROPERTY(Object, pass_index)
	FLOAT_ARRAY_PROPERTY(Object, 4, color)
	POINTER_PROPERTY(FieldSettings, Object, field)
	POINTER_PROPERTY(CollisionSettings, Object, collision)
	POINTER_PROPERTY(SoftBodySettings, Object, soft_body)

	BOOLEAN_PROPERTY(Object, hide)
	BOOLEAN_PROPERTY(Object, hide_select)
	BOOLEAN_PROPERTY(Object, hide_render)
	POINTER_PROPERTY(AnimData, Object, animation_data)
	POINTER_PROPERTY(AnimViz, Object, animation_visualisation)
	POINTER_PROPERTY(MotionPath, Object, motion_path)
	BOOLEAN_PROPERTY(Object, use_slow_parent)
	ENUM_PROPERTY(dupli_type_enum, Object, dupli_type)
	BOOLEAN_PROPERTY(Object, use_dupli_frames_speed)
	BOOLEAN_PROPERTY(Object, use_dupli_vertices_rotation)
	BOOLEAN_PROPERTY(Object, use_dupli_faces_scale)
	FLOAT_PROPERTY(Object, dupli_faces_scale)
	POINTER_PROPERTY(Group, Object, dupli_group)
	INT_PROPERTY(Object, dupli_frames_start)
	INT_PROPERTY(Object, dupli_frames_end)
	INT_PROPERTY(Object, dupli_frames_on)
	INT_PROPERTY(Object, dupli_frames_off)

	BOOLEAN_PROPERTY(Object, is_duplicator)
	FLOAT_PROPERTY(Object, time_offset)
	BOOLEAN_PROPERTY(Object, use_time_offset_edit)
	BOOLEAN_PROPERTY(Object, use_time_offset_parent)
	BOOLEAN_PROPERTY(Object, use_time_offset_particle)
	BOOLEAN_PROPERTY(Object, use_time_offset_add_parent)
	ENUM_PROPERTY(draw_type_enum, Object, draw_type)
	BOOLEAN_PROPERTY(Object, show_bounds)
	ENUM_PROPERTY(draw_bounds_type_enum, Object, draw_bounds_type)
	BOOLEAN_PROPERTY(Object, show_name)
	BOOLEAN_PROPERTY(Object, show_axis)
	BOOLEAN_PROPERTY(Object, show_texture_space)
	BOOLEAN_PROPERTY(Object, show_wire)
	BOOLEAN_PROPERTY(Object, show_transparent)
	BOOLEAN_PROPERTY(Object, show_x_ray)
	POINTER_PROPERTY(GreasePencil, Object, grease_pencil)
	POINTER_PROPERTY(Action, Object, pose_library)
	POINTER_PROPERTY(Pose, Object, pose)
	BOOLEAN_PROPERTY(Object, show_only_shape_key)
	BOOLEAN_PROPERTY(Object, use_shape_key_edit_mode)
	POINTER_PROPERTY(ShapeKey, Object, active_shape_key)
	INT_PROPERTY(Object, active_shape_key_index)

	POINTER_PROPERTY(Struct, ObjectConstraints, rna_type)
	POINTER_PROPERTY(Constraint, ObjectConstraints, active)

	POINTER_PROPERTY(Struct, ObjectModifiers, rna_type)

	POINTER_PROPERTY(Struct, VertexGroups, rna_type)
	POINTER_PROPERTY(VertexGroup, VertexGroups, active)
	INT_PROPERTY(VertexGroups, active_index)

	POINTER_PROPERTY(Struct, ParticleSystems, rna_type)
	POINTER_PROPERTY(ParticleSystem, ParticleSystems, active)
	INT_PROPERTY(ParticleSystems, active_index)

	POINTER_PROPERTY(Struct, GameObjectSettings, rna_type)




	BOOLEAN_PROPERTY(GameObjectSettings, show_sensors)
	BOOLEAN_PROPERTY(GameObjectSettings, show_controllers)
	BOOLEAN_PROPERTY(GameObjectSettings, show_actuators)
	ENUM_PROPERTY(physics_type_enum, GameObjectSettings, physics_type)
	BOOLEAN_PROPERTY(GameObjectSettings, use_actor)
	BOOLEAN_PROPERTY(GameObjectSettings, use_ghost)
	FLOAT_PROPERTY(GameObjectSettings, mass)
	FLOAT_PROPERTY(GameObjectSettings, radius)
	BOOLEAN_PROPERTY(GameObjectSettings, use_sleep)
	FLOAT_PROPERTY(GameObjectSettings, damping)
	FLOAT_PROPERTY(GameObjectSettings, rotation_damping)
	FLOAT_PROPERTY(GameObjectSettings, velocity_min)
	FLOAT_PROPERTY(GameObjectSettings, velocity_max)
	BOOLEAN_PROPERTY(GameObjectSettings, lock_location_x)
	BOOLEAN_PROPERTY(GameObjectSettings, lock_location_y)
	BOOLEAN_PROPERTY(GameObjectSettings, lock_location_z)
	BOOLEAN_PROPERTY(GameObjectSettings, lock_rotation_x)
	BOOLEAN_PROPERTY(GameObjectSettings, lock_rotation_y)
	BOOLEAN_PROPERTY(GameObjectSettings, lock_rotation_z)
	BOOLEAN_PROPERTY(GameObjectSettings, use_activity_culling)
	BOOLEAN_PROPERTY(GameObjectSettings, use_material_physics_fh)
	BOOLEAN_PROPERTY(GameObjectSettings, use_rotate_from_normal)
	FLOAT_PROPERTY(GameObjectSettings, form_factor)
	BOOLEAN_PROPERTY(GameObjectSettings, use_anisotropic_friction)
	FLOAT_ARRAY_PROPERTY(GameObjectSettings, 3, friction_coefficients)
	BOOLEAN_PROPERTY(GameObjectSettings, use_collision_bounds)
	ENUM_PROPERTY(collision_bounds_type_enum, GameObjectSettings, collision_bounds_type)
	BOOLEAN_PROPERTY(GameObjectSettings, use_collision_compound)
	FLOAT_PROPERTY(GameObjectSettings, collision_margin)
	POINTER_PROPERTY(GameSoftBodySettings, GameObjectSettings, soft_body)
	BOOLEAN_ARRAY_PROPERTY(GameObjectSettings, 30, states_visible)
	BOOLEAN_ARRAY_PROPERTY(GameObjectSettings, 30, used_states)
	BOOLEAN_ARRAY_PROPERTY(GameObjectSettings, 30, states_initial)
	BOOLEAN_PROPERTY(GameObjectSettings, show_debug_state)
	BOOLEAN_PROPERTY(GameObjectSettings, use_all_states)
	BOOLEAN_PROPERTY(GameObjectSettings, show_state_panel)

	POINTER_PROPERTY(Struct, ObjectBase, rna_type)
	POINTER_PROPERTY(Object, ObjectBase, object)
	BOOLEAN_ARRAY_PROPERTY(ObjectBase, 20, layers)
	BOOLEAN_PROPERTY(ObjectBase, select)

	POINTER_PROPERTY(Struct, VertexGroup, rna_type)
	STRING_PROPERTY(VertexGroup, name)
	INT_PROPERTY(VertexGroup, index)

	POINTER_PROPERTY(Struct, MaterialSlot, rna_type)
	POINTER_PROPERTY(Material, MaterialSlot, material)
	ENUM_PROPERTY(link_enum, MaterialSlot, link)
	STRING_PROPERTY(MaterialSlot, name)

	POINTER_PROPERTY(Struct, DupliObject, rna_type)
	POINTER_PROPERTY(Object, DupliObject, object)
	FLOAT_ARRAY_PROPERTY(DupliObject, 16, matrix_original)
	FLOAT_ARRAY_PROPERTY(DupliObject, 16, matrix)

	POINTER_PROPERTY(Struct, PointCache, rna_type)
	INT_PROPERTY(PointCache, frame_start)
	INT_PROPERTY(PointCache, frame_end)
	INT_PROPERTY(PointCache, frame_step)
	INT_PROPERTY(PointCache, index)
	ENUM_PROPERTY(compression_enum, PointCache, compression)
	BOOLEAN_PROPERTY(PointCache, is_baked)
	BOOLEAN_PROPERTY(PointCache, is_baking)
	BOOLEAN_PROPERTY(PointCache, use_disk_cache)
	BOOLEAN_PROPERTY(PointCache, is_outdated)
	BOOLEAN_PROPERTY(PointCache, frames_skipped)
	STRING_PROPERTY(PointCache, name)
	STRING_PROPERTY(PointCache, filepath)
	BOOLEAN_PROPERTY(PointCache, use_quick_cache)
	STRING_PROPERTY(PointCache, info)
	BOOLEAN_PROPERTY(PointCache, use_external)
	BOOLEAN_PROPERTY(PointCache, use_library_path)


	POINTER_PROPERTY(Struct, PointCaches, rna_type)
	INT_PROPERTY(PointCaches, active_index)

	POINTER_PROPERTY(Struct, CollisionSettings, rna_type)
	BOOLEAN_PROPERTY(CollisionSettings, use)
	FLOAT_PROPERTY(CollisionSettings, damping_factor)
	FLOAT_PROPERTY(CollisionSettings, damping_random)
	FLOAT_PROPERTY(CollisionSettings, friction_factor)
	FLOAT_PROPERTY(CollisionSettings, friction_random)
	FLOAT_PROPERTY(CollisionSettings, permeability)
	BOOLEAN_PROPERTY(CollisionSettings, use_particle_kill)
	FLOAT_PROPERTY(CollisionSettings, stickness)
	FLOAT_PROPERTY(CollisionSettings, thickness_inner)
	FLOAT_PROPERTY(CollisionSettings, thickness_outer)
	FLOAT_PROPERTY(CollisionSettings, damping)
	FLOAT_PROPERTY(CollisionSettings, absorption)

	POINTER_PROPERTY(Struct, EffectorWeights, rna_type)
	BOOLEAN_PROPERTY(EffectorWeights, apply_to_hair_growing)
	POINTER_PROPERTY(Group, EffectorWeights, group)
	FLOAT_PROPERTY(EffectorWeights, gravity)
	FLOAT_PROPERTY(EffectorWeights, all)
	FLOAT_PROPERTY(EffectorWeights, force)
	FLOAT_PROPERTY(EffectorWeights, vortex)
	FLOAT_PROPERTY(EffectorWeights, magnetic)
	FLOAT_PROPERTY(EffectorWeights, wind)
	FLOAT_PROPERTY(EffectorWeights, curve_guide)
	FLOAT_PROPERTY(EffectorWeights, texture)
	FLOAT_PROPERTY(EffectorWeights, harmonic)
	FLOAT_PROPERTY(EffectorWeights, charge)
	FLOAT_PROPERTY(EffectorWeights, lennardjones)
	FLOAT_PROPERTY(EffectorWeights, boid)
	FLOAT_PROPERTY(EffectorWeights, turbulence)
	FLOAT_PROPERTY(EffectorWeights, drag)

	POINTER_PROPERTY(Struct, FieldSettings, rna_type)
	ENUM_PROPERTY(type_enum, FieldSettings, type)
	ENUM_PROPERTY(shape_enum, FieldSettings, shape)
	ENUM_PROPERTY(falloff_type_enum, FieldSettings, falloff_type)
	ENUM_PROPERTY(texture_mode_enum, FieldSettings, texture_mode)
	ENUM_PROPERTY(z_direction_enum, FieldSettings, z_direction)
	FLOAT_PROPERTY(FieldSettings, strength)
	FLOAT_PROPERTY(FieldSettings, linear_drag)
	FLOAT_PROPERTY(FieldSettings, harmonic_damping)
	FLOAT_PROPERTY(FieldSettings, quadratic_drag)
	FLOAT_PROPERTY(FieldSettings, flow)
	FLOAT_PROPERTY(FieldSettings, inflow)
	FLOAT_PROPERTY(FieldSettings, size)
	FLOAT_PROPERTY(FieldSettings, rest_length)
	FLOAT_PROPERTY(FieldSettings, falloff_power)
	FLOAT_PROPERTY(FieldSettings, distance_min)
	FLOAT_PROPERTY(FieldSettings, distance_max)
	FLOAT_PROPERTY(FieldSettings, radial_min)
	FLOAT_PROPERTY(FieldSettings, radial_max)
	FLOAT_PROPERTY(FieldSettings, radial_falloff)
	FLOAT_PROPERTY(FieldSettings, texture_nabla)
	FLOAT_PROPERTY(FieldSettings, noise)
	INT_PROPERTY(FieldSettings, seed)
	BOOLEAN_PROPERTY(FieldSettings, use_min_distance)
	BOOLEAN_PROPERTY(FieldSettings, use_max_distance)
	BOOLEAN_PROPERTY(FieldSettings, use_radial_min)
	BOOLEAN_PROPERTY(FieldSettings, use_radial_max)
	BOOLEAN_PROPERTY(FieldSettings, use_object_coords)
	BOOLEAN_PROPERTY(FieldSettings, use_global_coords)
	BOOLEAN_PROPERTY(FieldSettings, use_2d_force)
	BOOLEAN_PROPERTY(FieldSettings, use_root_coords)
	BOOLEAN_PROPERTY(FieldSettings, apply_to_location)
	BOOLEAN_PROPERTY(FieldSettings, apply_to_rotation)
	BOOLEAN_PROPERTY(FieldSettings, use_absorption)
	BOOLEAN_PROPERTY(FieldSettings, use_multiple_springs)
	POINTER_PROPERTY(Texture, FieldSettings, texture)
	FLOAT_PROPERTY(FieldSettings, guide_minimum)
	FLOAT_PROPERTY(FieldSettings, guide_free)
	BOOLEAN_PROPERTY(FieldSettings, use_guide_path_add)
	BOOLEAN_PROPERTY(FieldSettings, use_guide_path_weight)
	FLOAT_PROPERTY(FieldSettings, guide_clump_amount)
	FLOAT_PROPERTY(FieldSettings, guide_clump_shape)
	ENUM_PROPERTY(guide_kink_type_enum, FieldSettings, guide_kink_type)
	ENUM_PROPERTY(guide_kink_axis_enum, FieldSettings, guide_kink_axis)
	FLOAT_PROPERTY(FieldSettings, guide_kink_frequency)
	FLOAT_PROPERTY(FieldSettings, guide_kink_shape)
	FLOAT_PROPERTY(FieldSettings, guide_kink_amplitude)

	POINTER_PROPERTY(Struct, GameSoftBodySettings, rna_type)
	FLOAT_PROPERTY(GameSoftBodySettings, linear_stiffness)
	FLOAT_PROPERTY(GameSoftBodySettings, dynamic_friction)
	FLOAT_PROPERTY(GameSoftBodySettings, shape_threshold)
	FLOAT_PROPERTY(GameSoftBodySettings, collision_margin)
	FLOAT_PROPERTY(GameSoftBodySettings, weld_threshold)
	INT_PROPERTY(GameSoftBodySettings, location_iterations)
	INT_PROPERTY(GameSoftBodySettings, cluster_iterations)
	BOOLEAN_PROPERTY(GameSoftBodySettings, use_shape_match)
	BOOLEAN_PROPERTY(GameSoftBodySettings, use_bending_constraints)
	BOOLEAN_PROPERTY(GameSoftBodySettings, use_cluster_rigid_to_softbody)
	BOOLEAN_PROPERTY(GameSoftBodySettings, use_cluster_soft_to_softbody)

	POINTER_PROPERTY(Struct, SoftBodySettings, rna_type)
	FLOAT_PROPERTY(SoftBodySettings, friction)
	FLOAT_PROPERTY(SoftBodySettings, mass)
	STRING_PROPERTY(SoftBodySettings, vertex_group_mass)
	FLOAT_PROPERTY(SoftBodySettings, gravity)
	FLOAT_PROPERTY(SoftBodySettings, speed)
	STRING_PROPERTY(SoftBodySettings, vertex_group_goal)
	FLOAT_PROPERTY(SoftBodySettings, goal_min)
	FLOAT_PROPERTY(SoftBodySettings, goal_max)
	FLOAT_PROPERTY(SoftBodySettings, goal_default)
	FLOAT_PROPERTY(SoftBodySettings, goal_spring)
	FLOAT_PROPERTY(SoftBodySettings, goal_friction)
	FLOAT_PROPERTY(SoftBodySettings, pull)
	FLOAT_PROPERTY(SoftBodySettings, push)
	FLOAT_PROPERTY(SoftBodySettings, damping)
	INT_PROPERTY(SoftBodySettings, spring_length)
	INT_PROPERTY(SoftBodySettings, aero)
	INT_PROPERTY(SoftBodySettings, plastic)
	FLOAT_PROPERTY(SoftBodySettings, bend)
	FLOAT_PROPERTY(SoftBodySettings, shear)
	STRING_PROPERTY(SoftBodySettings, vertex_group_spring)
	ENUM_PROPERTY(collision_type_enum, SoftBodySettings, collision_type)
	FLOAT_PROPERTY(SoftBodySettings, ball_size)
	FLOAT_PROPERTY(SoftBodySettings, ball_stiff)
	FLOAT_PROPERTY(SoftBodySettings, ball_damp)
	FLOAT_PROPERTY(SoftBodySettings, error_threshold)
	INT_PROPERTY(SoftBodySettings, step_min)
	INT_PROPERTY(SoftBodySettings, step_max)
	INT_PROPERTY(SoftBodySettings, choke)
	INT_PROPERTY(SoftBodySettings, fuzzy)
	BOOLEAN_PROPERTY(SoftBodySettings, use_auto_step)
	BOOLEAN_PROPERTY(SoftBodySettings, use_diagnose)
	BOOLEAN_PROPERTY(SoftBodySettings, use_estimate_matrix)
	FLOAT_ARRAY_PROPERTY(SoftBodySettings, 3, location_mass_center)
	FLOAT_ARRAY_PROPERTY(SoftBodySettings, 9, rotation_estimate)
	FLOAT_ARRAY_PROPERTY(SoftBodySettings, 9, scale_estimate)
	BOOLEAN_PROPERTY(SoftBodySettings, use_goal)
	BOOLEAN_PROPERTY(SoftBodySettings, use_edges)
	BOOLEAN_PROPERTY(SoftBodySettings, use_stiff_quads)
	BOOLEAN_PROPERTY(SoftBodySettings, use_edge_collision)
	BOOLEAN_PROPERTY(SoftBodySettings, use_face_collision)
	ENUM_PROPERTY(aerodynamics_type_enum, SoftBodySettings, aerodynamics_type)
	BOOLEAN_PROPERTY(SoftBodySettings, use_self_collision)
	POINTER_PROPERTY(EffectorWeights, SoftBodySettings, effector_weights)

	POINTER_PROPERTY(Struct, PackedFile, rna_type)
	INT_PROPERTY(PackedFile, size)

	POINTER_PROPERTY(Struct, ParticleTarget, rna_type)
	STRING_PROPERTY(ParticleTarget, name)
	POINTER_PROPERTY(Object, ParticleTarget, object)
	INT_PROPERTY(ParticleTarget, system)
	FLOAT_PROPERTY(ParticleTarget, time)
	FLOAT_PROPERTY(ParticleTarget, duration)
	BOOLEAN_PROPERTY(ParticleTarget, is_valid)
	ENUM_PROPERTY(alliance_enum, ParticleTarget, alliance)

	POINTER_PROPERTY(Struct, SPHFluidSettings, rna_type)
	FLOAT_PROPERTY(SPHFluidSettings, spring_force)
	FLOAT_PROPERTY(SPHFluidSettings, fluid_radius)
	FLOAT_PROPERTY(SPHFluidSettings, rest_length)
	BOOLEAN_PROPERTY(SPHFluidSettings, use_viscoelastic_springs)
	BOOLEAN_PROPERTY(SPHFluidSettings, use_initial_rest_length)
	FLOAT_PROPERTY(SPHFluidSettings, plasticity)
	FLOAT_PROPERTY(SPHFluidSettings, yield_ratio)
	FLOAT_PROPERTY(SPHFluidSettings, linear_viscosity)
	FLOAT_PROPERTY(SPHFluidSettings, square_viscosity)
	FLOAT_PROPERTY(SPHFluidSettings, density_force)
	FLOAT_PROPERTY(SPHFluidSettings, repulsion_force)
	FLOAT_PROPERTY(SPHFluidSettings, rest_density)
	FLOAT_PROPERTY(SPHFluidSettings, buoyancy)

	POINTER_PROPERTY(Struct, ParticleHairKey, rna_type)
	FLOAT_PROPERTY(ParticleHairKey, time)
	FLOAT_PROPERTY(ParticleHairKey, weight)
	FLOAT_ARRAY_PROPERTY(ParticleHairKey, 3, co)
	FLOAT_ARRAY_PROPERTY(ParticleHairKey, 3, co_hair_space)

	POINTER_PROPERTY(Struct, ParticleKey, rna_type)
	FLOAT_ARRAY_PROPERTY(ParticleKey, 3, location)
	FLOAT_ARRAY_PROPERTY(ParticleKey, 3, velocity)
	FLOAT_ARRAY_PROPERTY(ParticleKey, 4, rotation)
	FLOAT_ARRAY_PROPERTY(ParticleKey, 3, angular_velocity)
	FLOAT_PROPERTY(ParticleKey, time)

	POINTER_PROPERTY(Struct, ChildParticle, rna_type)

	POINTER_PROPERTY(Struct, Particle, rna_type)
	FLOAT_ARRAY_PROPERTY(Particle, 3, location)
	FLOAT_ARRAY_PROPERTY(Particle, 3, velocity)
	FLOAT_ARRAY_PROPERTY(Particle, 3, angular_velocity)
	FLOAT_ARRAY_PROPERTY(Particle, 4, rotation)
	FLOAT_ARRAY_PROPERTY(Particle, 3, prev_location)
	FLOAT_ARRAY_PROPERTY(Particle, 3, prev_velocity)
	FLOAT_ARRAY_PROPERTY(Particle, 3, prev_angular_velocity)
	FLOAT_ARRAY_PROPERTY(Particle, 4, prev_rotation)


	FLOAT_PROPERTY(Particle, birth_time)
	FLOAT_PROPERTY(Particle, lifetime)
	FLOAT_PROPERTY(Particle, die_time)
	FLOAT_PROPERTY(Particle, size)
	BOOLEAN_PROPERTY(Particle, is_exist)
	BOOLEAN_PROPERTY(Particle, is_visible)
	ENUM_PROPERTY(alive_state_enum, Particle, alive_state)

	POINTER_PROPERTY(Struct, ParticleDupliWeight, rna_type)
	STRING_PROPERTY(ParticleDupliWeight, name)
	INT_PROPERTY(ParticleDupliWeight, count)

	POINTER_PROPERTY(Struct, ParticleSystem, rna_type)
	STRING_PROPERTY(ParticleSystem, name)
	POINTER_PROPERTY(ParticleSettings, ParticleSystem, settings)


	INT_PROPERTY(ParticleSystem, seed)
	INT_PROPERTY(ParticleSystem, child_seed)
	BOOLEAN_PROPERTY(ParticleSystem, is_global_hair)
	BOOLEAN_PROPERTY(ParticleSystem, use_hair_dynamics)
	POINTER_PROPERTY(ClothModifier, ParticleSystem, cloth)
	POINTER_PROPERTY(Object, ParticleSystem, reactor_target_object)
	INT_PROPERTY(ParticleSystem, reactor_target_particle_system)
	BOOLEAN_PROPERTY(ParticleSystem, use_keyed_timing)

	POINTER_PROPERTY(ParticleTarget, ParticleSystem, active_particle_target)
	INT_PROPERTY(ParticleSystem, active_particle_target_index)
	STRING_PROPERTY(ParticleSystem, billboard_normal_uv)
	STRING_PROPERTY(ParticleSystem, billboard_time_index_uv)
	STRING_PROPERTY(ParticleSystem, billboard_split_uv)
	STRING_PROPERTY(ParticleSystem, vertex_group_density)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_density)
	STRING_PROPERTY(ParticleSystem, vertex_group_velocity)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_velocity)
	STRING_PROPERTY(ParticleSystem, vertex_group_length)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_length)
	STRING_PROPERTY(ParticleSystem, vertex_group_clump)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_clump)
	STRING_PROPERTY(ParticleSystem, vertex_group_kink)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_kink)
	STRING_PROPERTY(ParticleSystem, vertex_group_roughness_1)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_roughness_1)
	STRING_PROPERTY(ParticleSystem, vertex_group_roughness_2)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_roughness_2)
	STRING_PROPERTY(ParticleSystem, vertex_group_roughness_end)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_roughness_end)
	STRING_PROPERTY(ParticleSystem, vertex_group_size)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_size)
	STRING_PROPERTY(ParticleSystem, vertex_group_tangent)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_tangent)
	STRING_PROPERTY(ParticleSystem, vertex_group_rotation)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_rotation)
	STRING_PROPERTY(ParticleSystem, vertex_group_field)
	BOOLEAN_PROPERTY(ParticleSystem, invert_vertex_group_field)
	POINTER_PROPERTY(PointCache, ParticleSystem, point_cache)
	BOOLEAN_PROPERTY(ParticleSystem, has_multiple_caches)
	POINTER_PROPERTY(Object, ParticleSystem, parent)
	BOOLEAN_PROPERTY(ParticleSystem, is_editable)
	BOOLEAN_PROPERTY(ParticleSystem, is_edited)

	ENUM_PROPERTY(texture_coords_enum, ParticleSettingsTextureSlot, texture_coords)
	POINTER_PROPERTY(Object, ParticleSettingsTextureSlot, object)
	STRING_PROPERTY(ParticleSettingsTextureSlot, uv_layer)
	ENUM_PROPERTY(mapping_x_enum, ParticleSettingsTextureSlot, mapping_x)
	ENUM_PROPERTY(mapping_y_enum, ParticleSettingsTextureSlot, mapping_y)
	ENUM_PROPERTY(mapping_z_enum, ParticleSettingsTextureSlot, mapping_z)
	ENUM_PROPERTY(mapping_enum, ParticleSettingsTextureSlot, mapping)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_time)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_life)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_density)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_size)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_velocity)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_field)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_gravity)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_damp)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_clump)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_kink)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_rough)
	BOOLEAN_PROPERTY(ParticleSettingsTextureSlot, use_map_length)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, time_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, life_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, density_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, size_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, velocity_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, field_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, gravity_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, damp_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, length_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, clump_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, kink_factor)
	FLOAT_PROPERTY(ParticleSettingsTextureSlot, rough_factor)


	POINTER_PROPERTY(Texture, ParticleSettings, active_texture)
	INT_PROPERTY(ParticleSettings, active_texture_index)
	BOOLEAN_PROPERTY(ParticleSettings, is_fluid)
	BOOLEAN_PROPERTY(ParticleSettings, use_react_start_end)
	BOOLEAN_PROPERTY(ParticleSettings, use_react_multiple)
	BOOLEAN_PROPERTY(ParticleSettings, regrow_hair)
	BOOLEAN_PROPERTY(ParticleSettings, show_unborn)
	BOOLEAN_PROPERTY(ParticleSettings, use_dead)
	BOOLEAN_PROPERTY(ParticleSettings, use_emit_random)
	BOOLEAN_PROPERTY(ParticleSettings, use_even_distribution)
	BOOLEAN_PROPERTY(ParticleSettings, use_die_on_collision)
	BOOLEAN_PROPERTY(ParticleSettings, use_size_deflect)
	BOOLEAN_PROPERTY(ParticleSettings, use_dynamic_rotation)
	BOOLEAN_PROPERTY(ParticleSettings, use_multiply_size_mass)
	BOOLEAN_PROPERTY(ParticleSettings, use_advanced_hair)
	BOOLEAN_PROPERTY(ParticleSettings, lock_boids_to_surface)
	BOOLEAN_PROPERTY(ParticleSettings, use_hair_bspline)
	BOOLEAN_PROPERTY(ParticleSettings, invert_grid)
	BOOLEAN_PROPERTY(ParticleSettings, hexagonal_grid)
	BOOLEAN_PROPERTY(ParticleSettings, apply_effector_to_children)
	BOOLEAN_PROPERTY(ParticleSettings, create_long_hair_children)
	BOOLEAN_PROPERTY(ParticleSettings, apply_guide_to_children)
	BOOLEAN_PROPERTY(ParticleSettings, use_self_effect)
	ENUM_PROPERTY(type_enum, ParticleSettings, type)
	ENUM_PROPERTY(emit_from_enum, ParticleSettings, emit_from)
	ENUM_PROPERTY(distribution_enum, ParticleSettings, distribution)
	ENUM_PROPERTY(physics_type_enum, ParticleSettings, physics_type)
	ENUM_PROPERTY(rotation_mode_enum, ParticleSettings, rotation_mode)
	ENUM_PROPERTY(angular_velocity_mode_enum, ParticleSettings, angular_velocity_mode)
	ENUM_PROPERTY(react_event_enum, ParticleSettings, react_event)
	BOOLEAN_PROPERTY(ParticleSettings, show_velocity)
	BOOLEAN_PROPERTY(ParticleSettings, show_size)
	BOOLEAN_PROPERTY(ParticleSettings, use_render_emitter)
	BOOLEAN_PROPERTY(ParticleSettings, show_health)
	BOOLEAN_PROPERTY(ParticleSettings, use_absolute_path_time)
	BOOLEAN_PROPERTY(ParticleSettings, lock_billboard)
	BOOLEAN_PROPERTY(ParticleSettings, use_parent_particles)
	BOOLEAN_PROPERTY(ParticleSettings, show_number)
	BOOLEAN_PROPERTY(ParticleSettings, use_group_pick_random)
	BOOLEAN_PROPERTY(ParticleSettings, use_group_count)
	BOOLEAN_PROPERTY(ParticleSettings, use_global_dupli)
	BOOLEAN_PROPERTY(ParticleSettings, use_render_adaptive)
	BOOLEAN_PROPERTY(ParticleSettings, use_velocity_length)
	BOOLEAN_PROPERTY(ParticleSettings, show_material_color)
	BOOLEAN_PROPERTY(ParticleSettings, use_whole_group)
	BOOLEAN_PROPERTY(ParticleSettings, use_strand_primitive)
	ENUM_PROPERTY(draw_method_enum, ParticleSettings, draw_method)
	ENUM_PROPERTY(render_type_enum, ParticleSettings, render_type)
	INT_PROPERTY(ParticleSettings, draw_size)
	ENUM_PROPERTY(child_type_enum, ParticleSettings, child_type)
	INT_PROPERTY(ParticleSettings, draw_step)
	INT_PROPERTY(ParticleSettings, render_step)
	INT_PROPERTY(ParticleSettings, hair_step)
	INT_PROPERTY(ParticleSettings, keys_step)
	INT_PROPERTY(ParticleSettings, adaptive_angle)
	INT_PROPERTY(ParticleSettings, adaptive_pixel)
	INT_PROPERTY(ParticleSettings, draw_percentage)
	INT_PROPERTY(ParticleSettings, material)
	ENUM_PROPERTY(integrator_enum, ParticleSettings, integrator)
	ENUM_PROPERTY(kink_enum, ParticleSettings, kink)
	ENUM_PROPERTY(kink_axis_enum, ParticleSettings, kink_axis)
	ENUM_PROPERTY(billboard_align_enum, ParticleSettings, billboard_align)
	INT_PROPERTY(ParticleSettings, billboard_uv_split)
	ENUM_PROPERTY(billboard_animation_enum, ParticleSettings, billboard_animation)
	ENUM_PROPERTY(billboard_offset_split_enum, ParticleSettings, billboard_offset_split)
	FLOAT_PROPERTY(ParticleSettings, billboard_tilt)
	FLOAT_PROPERTY(ParticleSettings, billboard_tilt_random)
	FLOAT_ARRAY_PROPERTY(ParticleSettings, 2, billboard_offset)
	BOOLEAN_PROPERTY(ParticleSettings, use_simplify)
	BOOLEAN_PROPERTY(ParticleSettings, use_simplify_viewport)
	INT_PROPERTY(ParticleSettings, simplify_refsize)
	FLOAT_PROPERTY(ParticleSettings, simplify_rate)
	FLOAT_PROPERTY(ParticleSettings, simplify_transition)
	FLOAT_PROPERTY(ParticleSettings, simplify_viewport)
	FLOAT_PROPERTY(ParticleSettings, frame_start)
	FLOAT_PROPERTY(ParticleSettings, frame_end)
	FLOAT_PROPERTY(ParticleSettings, lifetime)
	FLOAT_PROPERTY(ParticleSettings, lifetime_random)
	FLOAT_PROPERTY(ParticleSettings, time_tweak)
	INT_PROPERTY(ParticleSettings, subframes)
	FLOAT_PROPERTY(ParticleSettings, jitter_factor)
	FLOAT_PROPERTY(ParticleSettings, effect_hair)
	INT_PROPERTY(ParticleSettings, count)
	INT_PROPERTY(ParticleSettings, userjit)
	INT_PROPERTY(ParticleSettings, grid_resolution)
	FLOAT_PROPERTY(ParticleSettings, grid_random)
	INT_PROPERTY(ParticleSettings, effector_amount)
	FLOAT_PROPERTY(ParticleSettings, normal_factor)
	FLOAT_PROPERTY(ParticleSettings, object_factor)
	FLOAT_PROPERTY(ParticleSettings, factor_random)
	FLOAT_PROPERTY(ParticleSettings, particle_factor)
	FLOAT_PROPERTY(ParticleSettings, tangent_factor)
	FLOAT_PROPERTY(ParticleSettings, tangent_phase)
	FLOAT_PROPERTY(ParticleSettings, reactor_factor)
	FLOAT_ARRAY_PROPERTY(ParticleSettings, 3, object_align_factor)
	FLOAT_PROPERTY(ParticleSettings, angular_velocity_factor)
	FLOAT_PROPERTY(ParticleSettings, phase_factor)
	FLOAT_PROPERTY(ParticleSettings, rotation_factor_random)
	FLOAT_PROPERTY(ParticleSettings, phase_factor_random)
	FLOAT_PROPERTY(ParticleSettings, hair_length)
	FLOAT_PROPERTY(ParticleSettings, mass)
	FLOAT_PROPERTY(ParticleSettings, particle_size)
	FLOAT_PROPERTY(ParticleSettings, size_random)
	FLOAT_PROPERTY(ParticleSettings, drag_factor)
	FLOAT_PROPERTY(ParticleSettings, brownian_factor)
	FLOAT_PROPERTY(ParticleSettings, damping)
	FLOAT_PROPERTY(ParticleSettings, length_random)
	INT_PROPERTY(ParticleSettings, child_nbr)
	INT_PROPERTY(ParticleSettings, rendered_child_count)
	FLOAT_PROPERTY(ParticleSettings, virtual_parents)
	FLOAT_PROPERTY(ParticleSettings, child_size)
	FLOAT_PROPERTY(ParticleSettings, child_size_random)
	FLOAT_PROPERTY(ParticleSettings, child_radius)
	FLOAT_PROPERTY(ParticleSettings, child_roundness)
	FLOAT_PROPERTY(ParticleSettings, clump_factor)
	FLOAT_PROPERTY(ParticleSettings, clump_shape)
	FLOAT_PROPERTY(ParticleSettings, kink_amplitude)
	FLOAT_PROPERTY(ParticleSettings, kink_amplitude_clump)
	FLOAT_PROPERTY(ParticleSettings, kink_frequency)
	FLOAT_PROPERTY(ParticleSettings, kink_shape)
	FLOAT_PROPERTY(ParticleSettings, kink_flat)
	FLOAT_PROPERTY(ParticleSettings, roughness_1)
	FLOAT_PROPERTY(ParticleSettings, roughness_1_size)
	FLOAT_PROPERTY(ParticleSettings, roughness_2)
	FLOAT_PROPERTY(ParticleSettings, roughness_2_size)
	FLOAT_PROPERTY(ParticleSettings, roughness_2_threshold)
	FLOAT_PROPERTY(ParticleSettings, roughness_endpoint)
	FLOAT_PROPERTY(ParticleSettings, roughness_end_shape)
	FLOAT_PROPERTY(ParticleSettings, child_length)
	FLOAT_PROPERTY(ParticleSettings, child_length_threshold)
	FLOAT_PROPERTY(ParticleSettings, child_parting_factor)
	FLOAT_PROPERTY(ParticleSettings, child_parting_min)
	FLOAT_PROPERTY(ParticleSettings, child_parting_max)
	FLOAT_PROPERTY(ParticleSettings, branch_threshold)
	FLOAT_PROPERTY(ParticleSettings, line_length_tail)
	FLOAT_PROPERTY(ParticleSettings, line_length_head)
	FLOAT_PROPERTY(ParticleSettings, path_start)
	FLOAT_PROPERTY(ParticleSettings, path_end)
	INT_PROPERTY(ParticleSettings, trail_count)
	INT_PROPERTY(ParticleSettings, keyed_loops)
	POINTER_PROPERTY(Group, ParticleSettings, dupli_group)

	POINTER_PROPERTY(ParticleDupliWeight, ParticleSettings, active_dupliweight)
	INT_PROPERTY(ParticleSettings, active_dupliweight_index)
	POINTER_PROPERTY(Object, ParticleSettings, dupli_object)
	POINTER_PROPERTY(Object, ParticleSettings, billboard_object)
	POINTER_PROPERTY(BoidSettings, ParticleSettings, boids)
	POINTER_PROPERTY(SPHFluidSettings, ParticleSettings, fluid)
	POINTER_PROPERTY(EffectorWeights, ParticleSettings, effector_weights)
	POINTER_PROPERTY(AnimData, ParticleSettings, animation_data)
	POINTER_PROPERTY(FieldSettings, ParticleSettings, force_field_1)
	POINTER_PROPERTY(FieldSettings, ParticleSettings, force_field_2)

	POINTER_PROPERTY(Struct, ParticleSettingsTextureSlots, rna_type)

	POINTER_PROPERTY(Struct, Pose, rna_type)


	ENUM_PROPERTY(ik_solver_enum, Pose, ik_solver)
	POINTER_PROPERTY(IKParam, Pose, ik_param)
	POINTER_PROPERTY(AnimViz, Pose, animation_visualisation)

	POINTER_PROPERTY(Struct, BoneGroups, rna_type)
	POINTER_PROPERTY(BoneGroup, BoneGroups, active)
	INT_PROPERTY(BoneGroups, active_index)

	POINTER_PROPERTY(Struct, PoseBone, rna_type)

	STRING_PROPERTY(PoseBone, name)
	POINTER_PROPERTY(MotionPath, PoseBone, motion_path)
	POINTER_PROPERTY(Bone, PoseBone, bone)
	POINTER_PROPERTY(PoseBone, PoseBone, parent)
	POINTER_PROPERTY(PoseBone, PoseBone, child)
	FLOAT_ARRAY_PROPERTY(PoseBone, 3, location)
	FLOAT_ARRAY_PROPERTY(PoseBone, 3, scale)
	FLOAT_ARRAY_PROPERTY(PoseBone, 4, rotation_quaternion)
	FLOAT_ARRAY_PROPERTY(PoseBone, 4, rotation_axis_angle)
	FLOAT_ARRAY_PROPERTY(PoseBone, 3, rotation_euler)
	ENUM_PROPERTY(rotation_mode_enum, PoseBone, rotation_mode)
	FLOAT_ARRAY_PROPERTY(PoseBone, 16, matrix_channel)
	FLOAT_ARRAY_PROPERTY(PoseBone, 16, matrix_basis)
	FLOAT_ARRAY_PROPERTY(PoseBone, 16, matrix)
	FLOAT_ARRAY_PROPERTY(PoseBone, 3, head)
	FLOAT_ARRAY_PROPERTY(PoseBone, 3, tail)
	BOOLEAN_PROPERTY(PoseBone, is_in_ik_chain)
	BOOLEAN_PROPERTY(PoseBone, lock_ik_x)
	BOOLEAN_PROPERTY(PoseBone, lock_ik_y)
	BOOLEAN_PROPERTY(PoseBone, lock_ik_z)
	BOOLEAN_PROPERTY(PoseBone, use_ik_limit_x)
	BOOLEAN_PROPERTY(PoseBone, use_ik_limit_y)
	BOOLEAN_PROPERTY(PoseBone, use_ik_limit_z)
	BOOLEAN_PROPERTY(PoseBone, use_ik_rotation_control)
	BOOLEAN_PROPERTY(PoseBone, use_ik_linear_control)
	FLOAT_PROPERTY(PoseBone, ik_min_x)
	FLOAT_PROPERTY(PoseBone, ik_max_x)
	FLOAT_PROPERTY(PoseBone, ik_min_y)
	FLOAT_PROPERTY(PoseBone, ik_max_y)
	FLOAT_PROPERTY(PoseBone, ik_min_z)
	FLOAT_PROPERTY(PoseBone, ik_max_z)
	FLOAT_PROPERTY(PoseBone, ik_stiffness_x)
	FLOAT_PROPERTY(PoseBone, ik_stiffness_y)
	FLOAT_PROPERTY(PoseBone, ik_stiffness_z)
	FLOAT_PROPERTY(PoseBone, ik_stretch)
	FLOAT_PROPERTY(PoseBone, ik_rotation_weight)
	FLOAT_PROPERTY(PoseBone, ik_linear_weight)
	POINTER_PROPERTY(Object, PoseBone, custom_shape)
	POINTER_PROPERTY(PoseBone, PoseBone, custom_shape_transform)
	INT_PROPERTY(PoseBone, bone_group_index)
	POINTER_PROPERTY(BoneGroup, PoseBone, bone_group)
	BOOLEAN_ARRAY_PROPERTY(PoseBone, 3, lock_location)
	BOOLEAN_ARRAY_PROPERTY(PoseBone, 3, lock_rotation)
	BOOLEAN_PROPERTY(PoseBone, lock_rotation_w)
	BOOLEAN_PROPERTY(PoseBone, lock_rotations_4d)
	BOOLEAN_ARRAY_PROPERTY(PoseBone, 3, lock_scale)

	POINTER_PROPERTY(Struct, PoseBoneConstraints, rna_type)
	POINTER_PROPERTY(Constraint, PoseBoneConstraints, active)

	POINTER_PROPERTY(Struct, IKParam, rna_type)
	ENUM_PROPERTY(ik_solver_enum, IKParam, ik_solver)

	FLOAT_PROPERTY(Itasc, precision)
	INT_PROPERTY(Itasc, iterations)
	INT_PROPERTY(Itasc, step_count)
	ENUM_PROPERTY(mode_enum, Itasc, mode)
	ENUM_PROPERTY(reiteration_method_enum, Itasc, reiteration_method)
	BOOLEAN_PROPERTY(Itasc, use_auto_step)
	FLOAT_PROPERTY(Itasc, step_min)
	FLOAT_PROPERTY(Itasc, step_max)
	FLOAT_PROPERTY(Itasc, feedback)
	FLOAT_PROPERTY(Itasc, velocity_max)
	ENUM_PROPERTY(solver_enum, Itasc, solver)
	FLOAT_PROPERTY(Itasc, damping_max)
	FLOAT_PROPERTY(Itasc, damping_epsilon)

	POINTER_PROPERTY(Struct, BoneGroup, rna_type)
	STRING_PROPERTY(BoneGroup, name)
	ENUM_PROPERTY(color_set_enum, BoneGroup, color_set)
	POINTER_PROPERTY(ThemeBoneColorSet, BoneGroup, colors)

	POINTER_PROPERTY(Struct, GameProperty, rna_type)
	STRING_PROPERTY(GameProperty, name)
	ENUM_PROPERTY(type_enum, GameProperty, type)
	BOOLEAN_PROPERTY(GameProperty, show_debug)

	BOOLEAN_PROPERTY(GameBooleanProperty, value)

	INT_PROPERTY(GameIntProperty, value)

	FLOAT_PROPERTY(GameFloatProperty, value)

	FLOAT_PROPERTY(GameTimerProperty, value)

	STRING_PROPERTY(GameStringProperty, value)

	POINTER_PROPERTY(Struct, RenderEngine, rna_type)
	STRING_PROPERTY(RenderEngine, bl_idname)
	STRING_PROPERTY(RenderEngine, bl_label)
	BOOLEAN_PROPERTY(RenderEngine, bl_use_preview)
	BOOLEAN_PROPERTY(RenderEngine, bl_use_postprocess)

	POINTER_PROPERTY(Struct, RenderResult, rna_type)
	INT_PROPERTY(RenderResult, resolution_x)
	INT_PROPERTY(RenderResult, resolution_y)


	POINTER_PROPERTY(Struct, RenderLayer, rna_type)
	STRING_PROPERTY(RenderLayer, name)
	POINTER_PROPERTY(Material, RenderLayer, material_override)
	POINTER_PROPERTY(Group, RenderLayer, light_override)
	BOOLEAN_ARRAY_PROPERTY(RenderLayer, 20, layers)
	BOOLEAN_ARRAY_PROPERTY(RenderLayer, 20, layers_zmask)
	BOOLEAN_PROPERTY(RenderLayer, use)
	BOOLEAN_PROPERTY(RenderLayer, use_zmask)
	BOOLEAN_PROPERTY(RenderLayer, invert_zmask)
	BOOLEAN_PROPERTY(RenderLayer, use_all_z)
	BOOLEAN_PROPERTY(RenderLayer, use_solid)
	BOOLEAN_PROPERTY(RenderLayer, use_halo)
	BOOLEAN_PROPERTY(RenderLayer, use_ztransp)
	BOOLEAN_PROPERTY(RenderLayer, use_sky)
	BOOLEAN_PROPERTY(RenderLayer, use_edge_enhance)
	BOOLEAN_PROPERTY(RenderLayer, use_strand)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_combined)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_z)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_vector)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_normal)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_uv)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_mist)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_object_index)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_color)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_diffuse)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_specular)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_shadow)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_ambient_occlusion)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_reflection)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_refraction)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_emit)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_environment)
	BOOLEAN_PROPERTY(RenderLayer, use_pass_indirect)
	BOOLEAN_PROPERTY(RenderLayer, exclude_specular)
	BOOLEAN_PROPERTY(RenderLayer, exclude_shadow)
	BOOLEAN_PROPERTY(RenderLayer, exclude_ambient_occlusion)
	BOOLEAN_PROPERTY(RenderLayer, exclude_reflection)
	BOOLEAN_PROPERTY(RenderLayer, exclude_refraction)
	BOOLEAN_PROPERTY(RenderLayer, exclude_emit)
	BOOLEAN_PROPERTY(RenderLayer, exclude_environment)
	BOOLEAN_PROPERTY(RenderLayer, exclude_indirect)

	FLOAT_ARRAY_PROPERTY(RenderLayer, 0, rect)

	POINTER_PROPERTY(Struct, RenderPass, rna_type)
	STRING_PROPERTY(RenderPass, name)
	STRING_PROPERTY(RenderPass, channel_id)
	INT_PROPERTY(RenderPass, channels)
	ENUM_PROPERTY(type_enum, RenderPass, type)
	FLOAT_ARRAY_PROPERTY(RenderPass, 0, rect)

	POINTER_PROPERTY(Object, Scene, camera)
	POINTER_PROPERTY(Scene, Scene, background_set)
	POINTER_PROPERTY(World, Scene, world)
	FLOAT_ARRAY_PROPERTY(Scene, 3, cursor_location)


	BOOLEAN_ARRAY_PROPERTY(Scene, 20, layers)
	INT_PROPERTY(Scene, frame_current)
	INT_PROPERTY(Scene, frame_start)
	INT_PROPERTY(Scene, frame_end)
	INT_PROPERTY(Scene, frame_step)
	BOOLEAN_PROPERTY(Scene, use_preview_range)
	INT_PROPERTY(Scene, frame_preview_start)
	INT_PROPERTY(Scene, frame_preview_end)
	STRING_PROPERTY(Scene, use_stamp_note)
	POINTER_PROPERTY(AnimData, Scene, animation_data)
	BOOLEAN_PROPERTY(Scene, is_nla_tweakmode)
	BOOLEAN_PROPERTY(Scene, use_frame_drop)
	ENUM_PROPERTY(sync_mode_enum, Scene, sync_mode)
	POINTER_PROPERTY(NodeTree, Scene, node_tree)
	BOOLEAN_PROPERTY(Scene, use_nodes)
	POINTER_PROPERTY(SequenceEditor, Scene, sequence_editor)


	POINTER_PROPERTY(ToolSettings, Scene, tool_settings)
	POINTER_PROPERTY(UnitSettings, Scene, unit_settings)
	FLOAT_ARRAY_PROPERTY(Scene, 3, gravity)
	BOOLEAN_PROPERTY(Scene, use_gravity)
	POINTER_PROPERTY(RenderSettings, Scene, render)

	BOOLEAN_PROPERTY(Scene, use_audio)
	BOOLEAN_PROPERTY(Scene, use_audio_sync)
	BOOLEAN_PROPERTY(Scene, use_audio_scrub)
	FLOAT_PROPERTY(Scene, audio_doppler_speed)
	FLOAT_PROPERTY(Scene, audio_doppler_factor)
	ENUM_PROPERTY(audio_distance_model_enum, Scene, audio_distance_model)
	POINTER_PROPERTY(SceneGameData, Scene, game_settings)
	POINTER_PROPERTY(GreasePencil, Scene, grease_pencil)


	POINTER_PROPERTY(Struct, SceneBases, rna_type)
	POINTER_PROPERTY(ObjectBase, SceneBases, active)

	POINTER_PROPERTY(Struct, SceneObjects, rna_type)
	POINTER_PROPERTY(Object, SceneObjects, active)

	POINTER_PROPERTY(Struct, KeyingSets, rna_type)
	POINTER_PROPERTY(KeyingSet, KeyingSets, active)
	INT_PROPERTY(KeyingSets, active_index)

	POINTER_PROPERTY(Struct, KeyingSetsAll, rna_type)
	POINTER_PROPERTY(KeyingSet, KeyingSetsAll, active)
	INT_PROPERTY(KeyingSetsAll, active_index)

	POINTER_PROPERTY(Struct, TimelineMarkers, rna_type)

	POINTER_PROPERTY(Struct, ToolSettings, rna_type)
	POINTER_PROPERTY(Sculpt, ToolSettings, sculpt)
	BOOLEAN_PROPERTY(ToolSettings, use_auto_normalize)
	POINTER_PROPERTY(VertexPaint, ToolSettings, vertex_paint)
	POINTER_PROPERTY(VertexPaint, ToolSettings, weight_paint)
	POINTER_PROPERTY(ImagePaint, ToolSettings, image_paint)
	POINTER_PROPERTY(ParticleEdit, ToolSettings, particle_edit)
	ENUM_PROPERTY(proportional_edit_enum, ToolSettings, proportional_edit)
	BOOLEAN_PROPERTY(ToolSettings, use_proportional_edit_objects)
	ENUM_PROPERTY(proportional_edit_falloff_enum, ToolSettings, proportional_edit_falloff)
	FLOAT_PROPERTY(ToolSettings, proportional_size)
	FLOAT_PROPERTY(ToolSettings, normal_size)
	BOOLEAN_PROPERTY(ToolSettings, use_mesh_automerge)
	BOOLEAN_PROPERTY(ToolSettings, use_snap)
	BOOLEAN_PROPERTY(ToolSettings, use_snap_align_rotation)
	ENUM_PROPERTY(snap_element_enum, ToolSettings, snap_element)
	ENUM_PROPERTY(snap_target_enum, ToolSettings, snap_target)
	BOOLEAN_PROPERTY(ToolSettings, use_snap_peel_object)
	BOOLEAN_PROPERTY(ToolSettings, use_snap_project)
	BOOLEAN_PROPERTY(ToolSettings, use_grease_pencil_sessions)
	BOOLEAN_PROPERTY(ToolSettings, use_keyframe_insert_auto)
	ENUM_PROPERTY(auto_keying_mode_enum, ToolSettings, auto_keying_mode)
	BOOLEAN_PROPERTY(ToolSettings, use_record_with_nla)
	BOOLEAN_PROPERTY(ToolSettings, use_keyframe_insert_keyingset)
	ENUM_PROPERTY(uv_select_mode_enum, ToolSettings, uv_select_mode)
	BOOLEAN_PROPERTY(ToolSettings, use_uv_select_sync)
	BOOLEAN_PROPERTY(ToolSettings, show_uv_local_view)
	BOOLEAN_ARRAY_PROPERTY(ToolSettings, 3, mesh_select_mode)
	FLOAT_PROPERTY(ToolSettings, vertex_group_weight)
	ENUM_PROPERTY(edge_path_mode_enum, ToolSettings, edge_path_mode)
	BOOLEAN_PROPERTY(ToolSettings, use_bone_sketching)
	BOOLEAN_PROPERTY(ToolSettings, use_etch_quick)
	BOOLEAN_PROPERTY(ToolSettings, use_etch_overdraw)
	BOOLEAN_PROPERTY(ToolSettings, use_etch_autoname)
	STRING_PROPERTY(ToolSettings, etch_number)
	STRING_PROPERTY(ToolSettings, etch_side)
	POINTER_PROPERTY(Object, ToolSettings, etch_template)
	INT_PROPERTY(ToolSettings, etch_subdivision_number)
	FLOAT_PROPERTY(ToolSettings, etch_adaptive_limit)
	FLOAT_PROPERTY(ToolSettings, etch_length_limit)
	ENUM_PROPERTY(etch_roll_mode_enum, ToolSettings, etch_roll_mode)
	ENUM_PROPERTY(etch_convert_mode_enum, ToolSettings, etch_convert_mode)
	BOOLEAN_PROPERTY(ToolSettings, sculpt_paint_use_unified_size)
	BOOLEAN_PROPERTY(ToolSettings, sculpt_paint_use_unified_strength)

	POINTER_PROPERTY(Struct, UnitSettings, rna_type)
	ENUM_PROPERTY(system_enum, UnitSettings, system)
	ENUM_PROPERTY(system_rotation_enum, UnitSettings, system_rotation)
	FLOAT_PROPERTY(UnitSettings, scale_length)
	BOOLEAN_PROPERTY(UnitSettings, use_separate)

	POINTER_PROPERTY(Struct, RenderSettings, rna_type)
	ENUM_PROPERTY(color_mode_enum, RenderSettings, color_mode)
	INT_PROPERTY(RenderSettings, resolution_x)
	INT_PROPERTY(RenderSettings, resolution_y)
	INT_PROPERTY(RenderSettings, resolution_percentage)
	INT_PROPERTY(RenderSettings, parts_x)
	INT_PROPERTY(RenderSettings, parts_y)
	FLOAT_PROPERTY(RenderSettings, pixel_aspect_x)
	FLOAT_PROPERTY(RenderSettings, pixel_aspect_y)
	INT_PROPERTY(RenderSettings, file_quality)
	BOOLEAN_PROPERTY(RenderSettings, use_tiff_16bit)
	BOOLEAN_PROPERTY(RenderSettings, use_cineon_log)
	INT_PROPERTY(RenderSettings, cineon_black)
	INT_PROPERTY(RenderSettings, cineon_white)
	FLOAT_PROPERTY(RenderSettings, cineon_gamma)
	ENUM_PROPERTY(jpeg2k_preset_enum, RenderSettings, jpeg2k_preset)
	ENUM_PROPERTY(jpeg2k_depth_enum, RenderSettings, jpeg2k_depth)
	BOOLEAN_PROPERTY(RenderSettings, jpeg2k_ycc)
	INT_PROPERTY(RenderSettings, fps)
	FLOAT_PROPERTY(RenderSettings, fps_base)
	INT_PROPERTY(RenderSettings, frame_map_old)
	INT_PROPERTY(RenderSettings, frame_map_new)
	FLOAT_PROPERTY(RenderSettings, dither_intensity)
	ENUM_PROPERTY(pixel_filter_type_enum, RenderSettings, pixel_filter_type)
	FLOAT_PROPERTY(RenderSettings, filter_size)
	ENUM_PROPERTY(alpha_mode_enum, RenderSettings, alpha_mode)
	ENUM_PROPERTY(octree_resolution_enum, RenderSettings, octree_resolution)
	ENUM_PROPERTY(raytrace_method_enum, RenderSettings, raytrace_method)
	BOOLEAN_PROPERTY(RenderSettings, use_instances)
	BOOLEAN_PROPERTY(RenderSettings, use_local_coords)
	BOOLEAN_PROPERTY(RenderSettings, use_antialiasing)
	ENUM_PROPERTY(antialiasing_samples_enum, RenderSettings, antialiasing_samples)
	BOOLEAN_PROPERTY(RenderSettings, use_fields)
	ENUM_PROPERTY(field_order_enum, RenderSettings, field_order)
	BOOLEAN_PROPERTY(RenderSettings, use_fields_still)
	BOOLEAN_PROPERTY(RenderSettings, use_shadows)
	BOOLEAN_PROPERTY(RenderSettings, use_envmaps)
	BOOLEAN_PROPERTY(RenderSettings, use_radiosity)
	BOOLEAN_PROPERTY(RenderSettings, use_sss)
	BOOLEAN_PROPERTY(RenderSettings, use_raytrace)
	BOOLEAN_PROPERTY(RenderSettings, use_textures)
	BOOLEAN_PROPERTY(RenderSettings, use_edge_enhance)
	INT_PROPERTY(RenderSettings, edge_threshold)
	FLOAT_ARRAY_PROPERTY(RenderSettings, 3, edge_color)
	INT_PROPERTY(RenderSettings, threads)
	ENUM_PROPERTY(threads_mode_enum, RenderSettings, threads_mode)
	BOOLEAN_PROPERTY(RenderSettings, use_motion_blur)
	INT_PROPERTY(RenderSettings, motion_blur_samples)
	FLOAT_PROPERTY(RenderSettings, motion_blur_shutter)
	BOOLEAN_PROPERTY(RenderSettings, use_border)
	FLOAT_PROPERTY(RenderSettings, border_min_x)
	FLOAT_PROPERTY(RenderSettings, border_min_y)
	FLOAT_PROPERTY(RenderSettings, border_max_x)
	FLOAT_PROPERTY(RenderSettings, border_max_y)
	BOOLEAN_PROPERTY(RenderSettings, use_crop_to_border)
	BOOLEAN_PROPERTY(RenderSettings, use_placeholder)
	BOOLEAN_PROPERTY(RenderSettings, use_overwrite)
	BOOLEAN_PROPERTY(RenderSettings, use_compositing)
	BOOLEAN_PROPERTY(RenderSettings, use_sequencer)
	BOOLEAN_PROPERTY(RenderSettings, use_color_management)
	BOOLEAN_PROPERTY(RenderSettings, use_file_extension)
	ENUM_PROPERTY(file_format_enum, RenderSettings, file_format)
	STRING_PROPERTY(RenderSettings, file_extension)
	BOOLEAN_PROPERTY(RenderSettings, is_movie_format)
	BOOLEAN_PROPERTY(RenderSettings, use_free_image_textures)
	BOOLEAN_PROPERTY(RenderSettings, use_free_unused_nodes)
	BOOLEAN_PROPERTY(RenderSettings, use_save_buffers)
	BOOLEAN_PROPERTY(RenderSettings, use_full_sample)
	ENUM_PROPERTY(display_mode_enum, RenderSettings, display_mode)
	STRING_PROPERTY(RenderSettings, filepath)
	ENUM_PROPERTY(bake_type_enum, RenderSettings, bake_type)
	ENUM_PROPERTY(bake_normal_space_enum, RenderSettings, bake_normal_space)
	ENUM_PROPERTY(bake_quad_split_enum, RenderSettings, bake_quad_split)
	ENUM_PROPERTY(bake_aa_mode_enum, RenderSettings, bake_aa_mode)
	BOOLEAN_PROPERTY(RenderSettings, use_bake_selected_to_active)
	BOOLEAN_PROPERTY(RenderSettings, use_bake_normalize)
	BOOLEAN_PROPERTY(RenderSettings, use_bake_clear)
	BOOLEAN_PROPERTY(RenderSettings, use_bake_antialiasing)
	INT_PROPERTY(RenderSettings, bake_margin)
	FLOAT_PROPERTY(RenderSettings, bake_distance)
	FLOAT_PROPERTY(RenderSettings, bake_bias)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_time)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_date)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_frame)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_camera)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_lens)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_scene)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_note)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_marker)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_filename)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_sequencer_strip)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp_render_time)
	STRING_PROPERTY(RenderSettings, stamp_note_text)
	BOOLEAN_PROPERTY(RenderSettings, use_stamp)
	INT_PROPERTY(RenderSettings, stamp_font_size)
	FLOAT_ARRAY_PROPERTY(RenderSettings, 4, stamp_foreground)
	FLOAT_ARRAY_PROPERTY(RenderSettings, 4, stamp_background)
	BOOLEAN_PROPERTY(RenderSettings, use_sequencer_gl_preview)
	BOOLEAN_PROPERTY(RenderSettings, use_sequencer_gl_render)
	ENUM_PROPERTY(sequencer_gl_preview_enum, RenderSettings, sequencer_gl_preview)
	ENUM_PROPERTY(sequencer_gl_render_enum, RenderSettings, sequencer_gl_render)

	BOOLEAN_PROPERTY(RenderSettings, use_single_layer)
	ENUM_PROPERTY(engine_enum, RenderSettings, engine)
	BOOLEAN_PROPERTY(RenderSettings, has_multiple_engines)
	BOOLEAN_PROPERTY(RenderSettings, use_game_engine)
	BOOLEAN_PROPERTY(RenderSettings, use_simplify)
	INT_PROPERTY(RenderSettings, simplify_subdivision)
	FLOAT_PROPERTY(RenderSettings, simplify_child_particles)
	INT_PROPERTY(RenderSettings, simplify_shadow_samples)
	FLOAT_PROPERTY(RenderSettings, simplify_ao_sss)
	BOOLEAN_PROPERTY(RenderSettings, use_simplify_triangulate)

	POINTER_PROPERTY(Struct, RenderLayers, rna_type)
	INT_PROPERTY(RenderLayers, active_index)
	POINTER_PROPERTY(SceneRenderLayer, RenderLayers, active)

	POINTER_PROPERTY(Struct, SceneGameData, rna_type)
	INT_PROPERTY(SceneGameData, resolution_x)
	INT_PROPERTY(SceneGameData, resolution_y)
	INT_PROPERTY(SceneGameData, depth)
	INT_PROPERTY(SceneGameData, frequency)
	BOOLEAN_PROPERTY(SceneGameData, show_fullscreen)
	ENUM_PROPERTY(frame_type_enum, SceneGameData, frame_type)
	FLOAT_ARRAY_PROPERTY(SceneGameData, 3, frame_color)
	ENUM_PROPERTY(stereo_enum, SceneGameData, stereo)
	ENUM_PROPERTY(stereo_mode_enum, SceneGameData, stereo_mode)
	FLOAT_PROPERTY(SceneGameData, stereo_eye_separation)
	ENUM_PROPERTY(dome_mode_enum, SceneGameData, dome_mode)
	INT_PROPERTY(SceneGameData, dome_tesselation)
	FLOAT_PROPERTY(SceneGameData, dome_buffer_resolution)
	INT_PROPERTY(SceneGameData, dome_angle)
	INT_PROPERTY(SceneGameData, dome_tilt)
	POINTER_PROPERTY(Text, SceneGameData, dome_text)
	ENUM_PROPERTY(physics_engine_enum, SceneGameData, physics_engine)
	FLOAT_PROPERTY(SceneGameData, physics_gravity)
	INT_PROPERTY(SceneGameData, occlusion_culling_resolution)
	INT_PROPERTY(SceneGameData, fps)
	INT_PROPERTY(SceneGameData, logic_step_max)
	INT_PROPERTY(SceneGameData, physics_step_max)
	INT_PROPERTY(SceneGameData, physics_step_sub)
	BOOLEAN_PROPERTY(SceneGameData, use_occlusion_culling)
	BOOLEAN_PROPERTY(SceneGameData, use_activity_culling)
	FLOAT_PROPERTY(SceneGameData, activity_culling_box_radius)
	BOOLEAN_PROPERTY(SceneGameData, show_debug_properties)
	BOOLEAN_PROPERTY(SceneGameData, show_framerate_profile)
	BOOLEAN_PROPERTY(SceneGameData, show_physics_visualization)
	BOOLEAN_PROPERTY(SceneGameData, show_mouse)
	BOOLEAN_PROPERTY(SceneGameData, use_frame_rate)
	BOOLEAN_PROPERTY(SceneGameData, use_display_lists)
	BOOLEAN_PROPERTY(SceneGameData, use_deprecation_warnings)
	BOOLEAN_PROPERTY(SceneGameData, use_animation_record)
	BOOLEAN_PROPERTY(SceneGameData, use_auto_start)
	ENUM_PROPERTY(material_mode_enum, SceneGameData, material_mode)
	BOOLEAN_PROPERTY(SceneGameData, use_glsl_lights)
	BOOLEAN_PROPERTY(SceneGameData, use_glsl_shaders)
	BOOLEAN_PROPERTY(SceneGameData, use_glsl_shadows)
	BOOLEAN_PROPERTY(SceneGameData, use_glsl_ramps)
	BOOLEAN_PROPERTY(SceneGameData, use_glsl_nodes)
	BOOLEAN_PROPERTY(SceneGameData, use_glsl_extra_textures)

	POINTER_PROPERTY(Struct, SceneRenderLayer, rna_type)
	STRING_PROPERTY(SceneRenderLayer, name)
	POINTER_PROPERTY(Material, SceneRenderLayer, material_override)
	POINTER_PROPERTY(Group, SceneRenderLayer, light_override)
	BOOLEAN_ARRAY_PROPERTY(SceneRenderLayer, 20, layers)
	BOOLEAN_ARRAY_PROPERTY(SceneRenderLayer, 20, layers_zmask)
	BOOLEAN_PROPERTY(SceneRenderLayer, use)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_zmask)
	BOOLEAN_PROPERTY(SceneRenderLayer, invert_zmask)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_all_z)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_solid)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_halo)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_ztransp)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_sky)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_edge_enhance)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_strand)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_combined)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_z)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_vector)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_normal)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_uv)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_mist)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_object_index)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_color)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_diffuse)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_specular)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_shadow)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_ambient_occlusion)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_reflection)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_refraction)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_emit)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_environment)
	BOOLEAN_PROPERTY(SceneRenderLayer, use_pass_indirect)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_specular)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_shadow)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_ambient_occlusion)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_reflection)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_refraction)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_emit)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_environment)
	BOOLEAN_PROPERTY(SceneRenderLayer, exclude_indirect)

	POINTER_PROPERTY(Struct, TransformOrientation, rna_type)
	FLOAT_ARRAY_PROPERTY(TransformOrientation, 9, matrix)
	STRING_PROPERTY(TransformOrientation, name)

	POINTER_PROPERTY(Scene, Screen, scene)

	BOOLEAN_PROPERTY(Screen, is_animation_playing)
	BOOLEAN_PROPERTY(Screen, show_fullscreen)
	BOOLEAN_PROPERTY(Screen, use_play_top_left_3d_editor)
	BOOLEAN_PROPERTY(Screen, use_play_3d_editors)
	BOOLEAN_PROPERTY(Screen, use_play_animation_editors)
	BOOLEAN_PROPERTY(Screen, use_play_properties_editors)
	BOOLEAN_PROPERTY(Screen, use_play_image_editors)
	BOOLEAN_PROPERTY(Screen, use_play_sequence_editors)
	BOOLEAN_PROPERTY(Screen, use_play_node_editors)

	POINTER_PROPERTY(Struct, Area, rna_type)

	POINTER_PROPERTY(Space, Area, active_space)

	BOOLEAN_PROPERTY(Area, show_menus)
	ENUM_PROPERTY(type_enum, Area, type)

	POINTER_PROPERTY(Struct, Region, rna_type)
	INT_PROPERTY(Region, id)
	ENUM_PROPERTY(type_enum, Region, type)
	INT_PROPERTY(Region, width)
	INT_PROPERTY(Region, height)

	POINTER_PROPERTY(Struct, Paint, rna_type)
	POINTER_PROPERTY(Brush, Paint, brush)
	BOOLEAN_PROPERTY(Paint, show_brush)
	BOOLEAN_PROPERTY(Paint, show_brush_on_surface)
	BOOLEAN_PROPERTY(Paint, show_low_resolution)

	INT_ARRAY_PROPERTY(Sculpt, 3, radial_symmetry)
	BOOLEAN_PROPERTY(Sculpt, use_symmetry_x)
	BOOLEAN_PROPERTY(Sculpt, use_symmetry_y)
	BOOLEAN_PROPERTY(Sculpt, use_symmetry_z)
	BOOLEAN_PROPERTY(Sculpt, lock_x)
	BOOLEAN_PROPERTY(Sculpt, lock_y)
	BOOLEAN_PROPERTY(Sculpt, lock_z)
	BOOLEAN_PROPERTY(Sculpt, use_symmetry_feather)
	BOOLEAN_PROPERTY(Sculpt, use_threaded)

	BOOLEAN_PROPERTY(VertexPaint, use_all_faces)
	BOOLEAN_PROPERTY(VertexPaint, use_normal)
	BOOLEAN_PROPERTY(VertexPaint, use_spray)

	BOOLEAN_PROPERTY(ImagePaint, use_projection)
	BOOLEAN_PROPERTY(ImagePaint, use_occlude)
	BOOLEAN_PROPERTY(ImagePaint, use_backface_culling)
	BOOLEAN_PROPERTY(ImagePaint, use_normal_falloff)
	BOOLEAN_PROPERTY(ImagePaint, use_stencil_layer)
	BOOLEAN_PROPERTY(ImagePaint, invert_stencil)
	BOOLEAN_PROPERTY(ImagePaint, use_clone_layer)
	INT_PROPERTY(ImagePaint, seam_bleed)
	INT_PROPERTY(ImagePaint, normal_angle)
	INT_ARRAY_PROPERTY(ImagePaint, 2, screen_grab_size)

	POINTER_PROPERTY(Struct, ParticleEdit, rna_type)
	ENUM_PROPERTY(tool_enum, ParticleEdit, tool)
	ENUM_PROPERTY(select_mode_enum, ParticleEdit, select_mode)
	BOOLEAN_PROPERTY(ParticleEdit, use_preserve_length)
	BOOLEAN_PROPERTY(ParticleEdit, use_preserve_root)
	BOOLEAN_PROPERTY(ParticleEdit, use_emitter_deflect)
	FLOAT_PROPERTY(ParticleEdit, emitter_distance)
	BOOLEAN_PROPERTY(ParticleEdit, use_fade_time)
	BOOLEAN_PROPERTY(ParticleEdit, use_auto_velocity)
	BOOLEAN_PROPERTY(ParticleEdit, show_particles)
	BOOLEAN_PROPERTY(ParticleEdit, use_default_interpolate)
	INT_PROPERTY(ParticleEdit, default_key_count)
	POINTER_PROPERTY(ParticleBrush, ParticleEdit, brush)
	INT_PROPERTY(ParticleEdit, draw_step)
	INT_PROPERTY(ParticleEdit, fade_frames)
	ENUM_PROPERTY(type_enum, ParticleEdit, type)
	BOOLEAN_PROPERTY(ParticleEdit, is_editable)
	BOOLEAN_PROPERTY(ParticleEdit, is_hair)
	POINTER_PROPERTY(Object, ParticleEdit, object)

	POINTER_PROPERTY(Struct, ParticleBrush, rna_type)
	INT_PROPERTY(ParticleBrush, size)
	FLOAT_PROPERTY(ParticleBrush, strength)
	INT_PROPERTY(ParticleBrush, count)
	INT_PROPERTY(ParticleBrush, steps)
	ENUM_PROPERTY(puff_mode_enum, ParticleBrush, puff_mode)
	BOOLEAN_PROPERTY(ParticleBrush, use_puff_volume)
	ENUM_PROPERTY(length_mode_enum, ParticleBrush, length_mode)
	POINTER_PROPERTY(CurveMapping, ParticleBrush, curve)

	POINTER_PROPERTY(Struct, Sensor, rna_type)
	STRING_PROPERTY(Sensor, name)
	ENUM_PROPERTY(type_enum, Sensor, type)
	BOOLEAN_PROPERTY(Sensor, pin)
	BOOLEAN_PROPERTY(Sensor, show_expanded)
	BOOLEAN_PROPERTY(Sensor, invert)
	BOOLEAN_PROPERTY(Sensor, use_level)
	BOOLEAN_PROPERTY(Sensor, use_pulse_true_level)
	BOOLEAN_PROPERTY(Sensor, use_pulse_false_level)
	INT_PROPERTY(Sensor, frequency)
	BOOLEAN_PROPERTY(Sensor, use_tap)


	STRING_PROPERTY(NearSensor, property)
	FLOAT_PROPERTY(NearSensor, distance)
	FLOAT_PROPERTY(NearSensor, reset_distance)

	ENUM_PROPERTY(mouse_event_enum, MouseSensor, mouse_event)

	POINTER_PROPERTY(Material, TouchSensor, material)

	ENUM_PROPERTY(key_enum, KeyboardSensor, key)
	ENUM_PROPERTY(modifier_key_1_enum, KeyboardSensor, modifier_key_1)
	ENUM_PROPERTY(modifier_key_2_enum, KeyboardSensor, modifier_key_2)
	STRING_PROPERTY(KeyboardSensor, target)
	STRING_PROPERTY(KeyboardSensor, log)
	BOOLEAN_PROPERTY(KeyboardSensor, use_all_keys)

	ENUM_PROPERTY(evaluation_type_enum, PropertySensor, evaluation_type)
	STRING_PROPERTY(PropertySensor, property)
	STRING_PROPERTY(PropertySensor, value)
	STRING_PROPERTY(PropertySensor, value_min)
	STRING_PROPERTY(PropertySensor, value_max)

	ENUM_PROPERTY(test_type_enum, ArmatureSensor, test_type)
	STRING_PROPERTY(ArmatureSensor, bone)
	STRING_PROPERTY(ArmatureSensor, constraint)
	FLOAT_PROPERTY(ArmatureSensor, value)

	STRING_PROPERTY(ActuatorSensor, actuator)

	INT_PROPERTY(DelaySensor, delay)
	INT_PROPERTY(DelaySensor, duration)
	BOOLEAN_PROPERTY(DelaySensor, use_repeat)

	BOOLEAN_PROPERTY(CollisionSensor, use_pulse)
	BOOLEAN_PROPERTY(CollisionSensor, use_material)
	STRING_PROPERTY(CollisionSensor, property)
	STRING_PROPERTY(CollisionSensor, material)

	STRING_PROPERTY(RadarSensor, property)
	ENUM_PROPERTY(axis_enum, RadarSensor, axis)
	FLOAT_PROPERTY(RadarSensor, angle)
	FLOAT_PROPERTY(RadarSensor, distance)

	INT_PROPERTY(RandomSensor, seed)

	ENUM_PROPERTY(ray_type_enum, RaySensor, ray_type)
	STRING_PROPERTY(RaySensor, property)
	STRING_PROPERTY(RaySensor, material)
	BOOLEAN_PROPERTY(RaySensor, use_x_ray)
	FLOAT_PROPERTY(RaySensor, range)
	ENUM_PROPERTY(axis_enum, RaySensor, axis)

	STRING_PROPERTY(MessageSensor, subject)

	INT_PROPERTY(JoystickSensor, joystick_index)
	ENUM_PROPERTY(event_type_enum, JoystickSensor, event_type)
	BOOLEAN_PROPERTY(JoystickSensor, use_all_events)
	INT_PROPERTY(JoystickSensor, button_number)
	INT_PROPERTY(JoystickSensor, axis_number)
	INT_PROPERTY(JoystickSensor, axis_threshold)
	ENUM_PROPERTY(axis_direction_enum, JoystickSensor, axis_direction)
	INT_PROPERTY(JoystickSensor, single_axis_number)
	INT_PROPERTY(JoystickSensor, hat_number)
	ENUM_PROPERTY(hat_direction_enum, JoystickSensor, hat_direction)

	POINTER_PROPERTY(Struct, SequenceElement, rna_type)
	STRING_PROPERTY(SequenceElement, filename)
	INT_PROPERTY(SequenceElement, orig_width)
	INT_PROPERTY(SequenceElement, orig_height)

	POINTER_PROPERTY(Struct, SequenceProxy, rna_type)
	STRING_PROPERTY(SequenceProxy, directory)
	STRING_PROPERTY(SequenceProxy, filepath)

	POINTER_PROPERTY(Struct, SequenceColorBalance, rna_type)
	FLOAT_ARRAY_PROPERTY(SequenceColorBalance, 3, lift)
	FLOAT_ARRAY_PROPERTY(SequenceColorBalance, 3, gamma)
	FLOAT_ARRAY_PROPERTY(SequenceColorBalance, 3, gain)
	BOOLEAN_PROPERTY(SequenceColorBalance, invert_gain)
	BOOLEAN_PROPERTY(SequenceColorBalance, invert_gamma)
	BOOLEAN_PROPERTY(SequenceColorBalance, invert_lift)

	POINTER_PROPERTY(Struct, SequenceCrop, rna_type)
	INT_PROPERTY(SequenceCrop, max_y)
	INT_PROPERTY(SequenceCrop, min_y)
	INT_PROPERTY(SequenceCrop, min_x)
	INT_PROPERTY(SequenceCrop, max_x)

	POINTER_PROPERTY(Struct, SequenceTransform, rna_type)
	INT_PROPERTY(SequenceTransform, offset_x)
	INT_PROPERTY(SequenceTransform, offset_y)

	POINTER_PROPERTY(Struct, Sequence, rna_type)
	STRING_PROPERTY(Sequence, name)
	ENUM_PROPERTY(type_enum, Sequence, type)
	BOOLEAN_PROPERTY(Sequence, select)
	BOOLEAN_PROPERTY(Sequence, select_left_handle)
	BOOLEAN_PROPERTY(Sequence, select_right_handle)
	BOOLEAN_PROPERTY(Sequence, mute)
	BOOLEAN_PROPERTY(Sequence, lock)
	INT_PROPERTY(Sequence, frame_final_duration)
	INT_PROPERTY(Sequence, frame_duration)
	INT_PROPERTY(Sequence, frame_start)
	INT_PROPERTY(Sequence, frame_final_start)
	INT_PROPERTY(Sequence, frame_final_end)
	INT_PROPERTY(Sequence, frame_offset_start)
	INT_PROPERTY(Sequence, frame_offset_end)
	INT_PROPERTY(Sequence, frame_still_start)
	INT_PROPERTY(Sequence, frame_still_end)
	INT_PROPERTY(Sequence, channel)
	ENUM_PROPERTY(blend_type_enum, Sequence, blend_type)
	FLOAT_PROPERTY(Sequence, blend_alpha)
	FLOAT_PROPERTY(Sequence, effect_fader)
	BOOLEAN_PROPERTY(Sequence, use_default_fade)
	FLOAT_PROPERTY(Sequence, speed_factor)
	INT_PROPERTY(Sequence, input_count)
	POINTER_PROPERTY(Sequence, Sequence, input_1)
	POINTER_PROPERTY(Sequence, Sequence, input_2)
	POINTER_PROPERTY(Sequence, Sequence, input_3)

	POINTER_PROPERTY(Struct, SequenceEditor, rna_type)



	POINTER_PROPERTY(Sequence, SequenceEditor, active_strip)
	BOOLEAN_PROPERTY(SequenceEditor, show_overlay)
	BOOLEAN_PROPERTY(SequenceEditor, overlay_lock)
	INT_PROPERTY(SequenceEditor, overlay_frame)

	STRING_PROPERTY(ImageSequence, directory)

	BOOLEAN_PROPERTY(ImageSequence, use_deinterlace)
	BOOLEAN_PROPERTY(ImageSequence, use_premultiply)
	BOOLEAN_PROPERTY(ImageSequence, use_flip_x)
	BOOLEAN_PROPERTY(ImageSequence, use_flip_y)
	BOOLEAN_PROPERTY(ImageSequence, use_float)
	BOOLEAN_PROPERTY(ImageSequence, use_reverse_frames)
	FLOAT_PROPERTY(ImageSequence, color_multiply)
	FLOAT_PROPERTY(ImageSequence, color_saturation)
	FLOAT_PROPERTY(ImageSequence, strobe)
	BOOLEAN_PROPERTY(ImageSequence, use_color_balance)
	POINTER_PROPERTY(SequenceColorBalance, ImageSequence, color_balance)
	BOOLEAN_PROPERTY(ImageSequence, use_translation)
	POINTER_PROPERTY(SequenceTransform, ImageSequence, transform)
	BOOLEAN_PROPERTY(ImageSequence, use_crop)
	POINTER_PROPERTY(SequenceCrop, ImageSequence, crop)
	BOOLEAN_PROPERTY(ImageSequence, use_proxy)
	POINTER_PROPERTY(SequenceProxy, ImageSequence, proxy)
	BOOLEAN_PROPERTY(ImageSequence, use_proxy_custom_directory)
	BOOLEAN_PROPERTY(ImageSequence, use_proxy_custom_file)
	INT_PROPERTY(ImageSequence, animation_offset_start)
	INT_PROPERTY(ImageSequence, animation_offset_end)


	BOOLEAN_PROPERTY(MetaSequence, use_deinterlace)
	BOOLEAN_PROPERTY(MetaSequence, use_premultiply)
	BOOLEAN_PROPERTY(MetaSequence, use_flip_x)
	BOOLEAN_PROPERTY(MetaSequence, use_flip_y)
	BOOLEAN_PROPERTY(MetaSequence, use_float)
	BOOLEAN_PROPERTY(MetaSequence, use_reverse_frames)
	FLOAT_PROPERTY(MetaSequence, color_multiply)
	FLOAT_PROPERTY(MetaSequence, color_saturation)
	FLOAT_PROPERTY(MetaSequence, strobe)
	BOOLEAN_PROPERTY(MetaSequence, use_color_balance)
	POINTER_PROPERTY(SequenceColorBalance, MetaSequence, color_balance)
	BOOLEAN_PROPERTY(MetaSequence, use_translation)
	POINTER_PROPERTY(SequenceTransform, MetaSequence, transform)
	BOOLEAN_PROPERTY(MetaSequence, use_crop)
	POINTER_PROPERTY(SequenceCrop, MetaSequence, crop)
	BOOLEAN_PROPERTY(MetaSequence, use_proxy)
	POINTER_PROPERTY(SequenceProxy, MetaSequence, proxy)
	BOOLEAN_PROPERTY(MetaSequence, use_proxy_custom_directory)
	BOOLEAN_PROPERTY(MetaSequence, use_proxy_custom_file)
	INT_PROPERTY(MetaSequence, animation_offset_start)
	INT_PROPERTY(MetaSequence, animation_offset_end)

	POINTER_PROPERTY(Scene, SceneSequence, scene)
	POINTER_PROPERTY(Object, SceneSequence, scene_camera)
	BOOLEAN_PROPERTY(SceneSequence, use_deinterlace)
	BOOLEAN_PROPERTY(SceneSequence, use_premultiply)
	BOOLEAN_PROPERTY(SceneSequence, use_flip_x)
	BOOLEAN_PROPERTY(SceneSequence, use_flip_y)
	BOOLEAN_PROPERTY(SceneSequence, use_float)
	BOOLEAN_PROPERTY(SceneSequence, use_reverse_frames)
	FLOAT_PROPERTY(SceneSequence, color_multiply)
	FLOAT_PROPERTY(SceneSequence, color_saturation)
	FLOAT_PROPERTY(SceneSequence, strobe)
	BOOLEAN_PROPERTY(SceneSequence, use_color_balance)
	POINTER_PROPERTY(SequenceColorBalance, SceneSequence, color_balance)
	BOOLEAN_PROPERTY(SceneSequence, use_translation)
	POINTER_PROPERTY(SequenceTransform, SceneSequence, transform)
	BOOLEAN_PROPERTY(SceneSequence, use_crop)
	POINTER_PROPERTY(SequenceCrop, SceneSequence, crop)
	BOOLEAN_PROPERTY(SceneSequence, use_proxy)
	POINTER_PROPERTY(SequenceProxy, SceneSequence, proxy)
	BOOLEAN_PROPERTY(SceneSequence, use_proxy_custom_directory)
	BOOLEAN_PROPERTY(SceneSequence, use_proxy_custom_file)
	INT_PROPERTY(SceneSequence, animation_offset_start)
	INT_PROPERTY(SceneSequence, animation_offset_end)

	INT_PROPERTY(MovieSequence, mpeg_preseek)

	STRING_PROPERTY(MovieSequence, filepath)
	BOOLEAN_PROPERTY(MovieSequence, use_deinterlace)
	BOOLEAN_PROPERTY(MovieSequence, use_premultiply)
	BOOLEAN_PROPERTY(MovieSequence, use_flip_x)
	BOOLEAN_PROPERTY(MovieSequence, use_flip_y)
	BOOLEAN_PROPERTY(MovieSequence, use_float)
	BOOLEAN_PROPERTY(MovieSequence, use_reverse_frames)
	FLOAT_PROPERTY(MovieSequence, color_multiply)
	FLOAT_PROPERTY(MovieSequence, color_saturation)
	FLOAT_PROPERTY(MovieSequence, strobe)
	BOOLEAN_PROPERTY(MovieSequence, use_color_balance)
	POINTER_PROPERTY(SequenceColorBalance, MovieSequence, color_balance)
	BOOLEAN_PROPERTY(MovieSequence, use_translation)
	POINTER_PROPERTY(SequenceTransform, MovieSequence, transform)
	BOOLEAN_PROPERTY(MovieSequence, use_crop)
	POINTER_PROPERTY(SequenceCrop, MovieSequence, crop)
	BOOLEAN_PROPERTY(MovieSequence, use_proxy)
	POINTER_PROPERTY(SequenceProxy, MovieSequence, proxy)
	BOOLEAN_PROPERTY(MovieSequence, use_proxy_custom_directory)
	BOOLEAN_PROPERTY(MovieSequence, use_proxy_custom_file)
	INT_PROPERTY(MovieSequence, animation_offset_start)
	INT_PROPERTY(MovieSequence, animation_offset_end)

	POINTER_PROPERTY(Sound, SoundSequence, sound)
	FLOAT_PROPERTY(SoundSequence, volume)
	FLOAT_PROPERTY(SoundSequence, attenuation)
	STRING_PROPERTY(SoundSequence, filepath)
	INT_PROPERTY(SoundSequence, animation_offset_start)
	INT_PROPERTY(SoundSequence, animation_offset_end)

	BOOLEAN_PROPERTY(EffectSequence, use_deinterlace)
	BOOLEAN_PROPERTY(EffectSequence, use_premultiply)
	BOOLEAN_PROPERTY(EffectSequence, use_flip_x)
	BOOLEAN_PROPERTY(EffectSequence, use_flip_y)
	BOOLEAN_PROPERTY(EffectSequence, use_float)
	BOOLEAN_PROPERTY(EffectSequence, use_reverse_frames)
	FLOAT_PROPERTY(EffectSequence, color_multiply)
	FLOAT_PROPERTY(EffectSequence, color_saturation)
	FLOAT_PROPERTY(EffectSequence, strobe)
	BOOLEAN_PROPERTY(EffectSequence, use_color_balance)
	POINTER_PROPERTY(SequenceColorBalance, EffectSequence, color_balance)
	BOOLEAN_PROPERTY(EffectSequence, use_translation)
	POINTER_PROPERTY(SequenceTransform, EffectSequence, transform)
	BOOLEAN_PROPERTY(EffectSequence, use_crop)
	POINTER_PROPERTY(SequenceCrop, EffectSequence, crop)
	BOOLEAN_PROPERTY(EffectSequence, use_proxy)
	POINTER_PROPERTY(SequenceProxy, EffectSequence, proxy)
	BOOLEAN_PROPERTY(EffectSequence, use_proxy_custom_directory)
	BOOLEAN_PROPERTY(EffectSequence, use_proxy_custom_file)

	INT_PROPERTY(MulticamSequence, multicam_source)
	BOOLEAN_PROPERTY(MulticamSequence, use_deinterlace)
	BOOLEAN_PROPERTY(MulticamSequence, use_premultiply)
	BOOLEAN_PROPERTY(MulticamSequence, use_flip_x)
	BOOLEAN_PROPERTY(MulticamSequence, use_flip_y)
	BOOLEAN_PROPERTY(MulticamSequence, use_float)
	BOOLEAN_PROPERTY(MulticamSequence, use_reverse_frames)
	FLOAT_PROPERTY(MulticamSequence, color_multiply)
	FLOAT_PROPERTY(MulticamSequence, color_saturation)
	FLOAT_PROPERTY(MulticamSequence, strobe)
	BOOLEAN_PROPERTY(MulticamSequence, use_color_balance)
	POINTER_PROPERTY(SequenceColorBalance, MulticamSequence, color_balance)
	BOOLEAN_PROPERTY(MulticamSequence, use_translation)
	POINTER_PROPERTY(SequenceTransform, MulticamSequence, transform)
	BOOLEAN_PROPERTY(MulticamSequence, use_crop)
	POINTER_PROPERTY(SequenceCrop, MulticamSequence, crop)
	BOOLEAN_PROPERTY(MulticamSequence, use_proxy)
	POINTER_PROPERTY(SequenceProxy, MulticamSequence, proxy)
	BOOLEAN_PROPERTY(MulticamSequence, use_proxy_custom_directory)
	BOOLEAN_PROPERTY(MulticamSequence, use_proxy_custom_file)
	INT_PROPERTY(MulticamSequence, animation_offset_start)
	INT_PROPERTY(MulticamSequence, animation_offset_end)

	STRING_PROPERTY(PluginSequence, filename)

	FLOAT_PROPERTY(WipeSequence, blur_width)
	FLOAT_PROPERTY(WipeSequence, angle)
	ENUM_PROPERTY(direction_enum, WipeSequence, direction)
	ENUM_PROPERTY(transition_type_enum, WipeSequence, transition_type)

	FLOAT_PROPERTY(GlowSequence, threshold)
	FLOAT_PROPERTY(GlowSequence, clamp)
	FLOAT_PROPERTY(GlowSequence, boost_factor)
	FLOAT_PROPERTY(GlowSequence, blur_radius)
	INT_PROPERTY(GlowSequence, quality)
	BOOLEAN_PROPERTY(GlowSequence, use_only_boost)

	FLOAT_PROPERTY(TransformSequence, scale_start_x)
	FLOAT_PROPERTY(TransformSequence, scale_start_y)
	BOOLEAN_PROPERTY(TransformSequence, use_uniform_scale)
	FLOAT_PROPERTY(TransformSequence, translate_start_x)
	FLOAT_PROPERTY(TransformSequence, translate_start_y)
	FLOAT_PROPERTY(TransformSequence, rotation_start)
	ENUM_PROPERTY(translation_unit_enum, TransformSequence, translation_unit)
	ENUM_PROPERTY(interpolation_enum, TransformSequence, interpolation)

	FLOAT_ARRAY_PROPERTY(ColorSequence, 3, color)

	FLOAT_PROPERTY(SpeedControlSequence, multiply_speed)
	BOOLEAN_PROPERTY(SpeedControlSequence, use_as_speed)
	BOOLEAN_PROPERTY(SpeedControlSequence, use_frame_blend)
	BOOLEAN_PROPERTY(SpeedControlSequence, scale_to_length)

	POINTER_PROPERTY(Struct, SmokeDomainSettings, rna_type)
	INT_PROPERTY(SmokeDomainSettings, resolution_max)
	INT_PROPERTY(SmokeDomainSettings, amplify)
	BOOLEAN_PROPERTY(SmokeDomainSettings, use_high_resolution)
	BOOLEAN_PROPERTY(SmokeDomainSettings, show_high_resolution)
	ENUM_PROPERTY(noise_type_enum, SmokeDomainSettings, noise_type)
	FLOAT_PROPERTY(SmokeDomainSettings, alpha)
	FLOAT_PROPERTY(SmokeDomainSettings, beta)
	POINTER_PROPERTY(Group, SmokeDomainSettings, collision_group)
	POINTER_PROPERTY(Group, SmokeDomainSettings, fluid_group)
	POINTER_PROPERTY(Group, SmokeDomainSettings, effector_group)
	FLOAT_PROPERTY(SmokeDomainSettings, strength)
	INT_PROPERTY(SmokeDomainSettings, dissolve_speed)
	BOOLEAN_PROPERTY(SmokeDomainSettings, use_dissolve_smoke)
	BOOLEAN_PROPERTY(SmokeDomainSettings, use_dissolve_smoke_log)
	POINTER_PROPERTY(PointCache, SmokeDomainSettings, point_cache)
	ENUM_PROPERTY(point_cache_compress_type_enum, SmokeDomainSettings, point_cache_compress_type)
	ENUM_PROPERTY(collision_extents_enum, SmokeDomainSettings, collision_extents)
	POINTER_PROPERTY(EffectorWeights, SmokeDomainSettings, effector_weights)
	BOOLEAN_PROPERTY(SmokeDomainSettings, smooth_emitter)
	FLOAT_PROPERTY(SmokeDomainSettings, time_scale)
	FLOAT_PROPERTY(SmokeDomainSettings, vorticity)

	POINTER_PROPERTY(Struct, SmokeFlowSettings, rna_type)
	FLOAT_PROPERTY(SmokeFlowSettings, density)
	FLOAT_PROPERTY(SmokeFlowSettings, temperature)
	POINTER_PROPERTY(ParticleSystem, SmokeFlowSettings, particle_system)
	BOOLEAN_PROPERTY(SmokeFlowSettings, use_outflow)
	BOOLEAN_PROPERTY(SmokeFlowSettings, use_absolute)
	BOOLEAN_PROPERTY(SmokeFlowSettings, initial_velocity)
	FLOAT_PROPERTY(SmokeFlowSettings, velocity_factor)

	POINTER_PROPERTY(Struct, SmokeCollSettings, rna_type)

	POINTER_PROPERTY(Struct, Space, rna_type)
	ENUM_PROPERTY(type_enum, Space, type)

	POINTER_PROPERTY(Image, SpaceImageEditor, image)
	POINTER_PROPERTY(ImageUser, SpaceImageEditor, image_user)
	POINTER_PROPERTY(CurveMapping, SpaceImageEditor, curves)
	POINTER_PROPERTY(Scopes, SpaceImageEditor, scopes)
	BOOLEAN_PROPERTY(SpaceImageEditor, use_image_pin)
	POINTER_PROPERTY(Histogram, SpaceImageEditor, sample_histogram)
	BOOLEAN_PROPERTY(SpaceImageEditor, show_repeat)
	ENUM_PROPERTY(draw_channels_enum, SpaceImageEditor, draw_channels)
	POINTER_PROPERTY(SpaceUVEditor, SpaceImageEditor, uv_editor)
	BOOLEAN_PROPERTY(SpaceImageEditor, use_image_paint)
	POINTER_PROPERTY(GreasePencil, SpaceImageEditor, grease_pencil)
	BOOLEAN_PROPERTY(SpaceImageEditor, use_grease_pencil)
	BOOLEAN_PROPERTY(SpaceImageEditor, use_realtime_update)
	BOOLEAN_PROPERTY(SpaceImageEditor, show_render)
	BOOLEAN_PROPERTY(SpaceImageEditor, show_paint)
	BOOLEAN_PROPERTY(SpaceImageEditor, show_uvedit)

	POINTER_PROPERTY(Struct, SpaceUVEditor, rna_type)
	ENUM_PROPERTY(sticky_select_mode_enum, SpaceUVEditor, sticky_select_mode)
	ENUM_PROPERTY(edge_draw_type_enum, SpaceUVEditor, edge_draw_type)
	BOOLEAN_PROPERTY(SpaceUVEditor, show_smooth_edges)
	BOOLEAN_PROPERTY(SpaceUVEditor, show_stretch)
	ENUM_PROPERTY(draw_stretch_type_enum, SpaceUVEditor, draw_stretch_type)
	BOOLEAN_PROPERTY(SpaceUVEditor, show_modified_edges)
	BOOLEAN_PROPERTY(SpaceUVEditor, show_other_objects)
	BOOLEAN_PROPERTY(SpaceUVEditor, show_normalized_coords)
	FLOAT_ARRAY_PROPERTY(SpaceUVEditor, 2, cursor_location)
	BOOLEAN_PROPERTY(SpaceUVEditor, use_snap_to_pixels)
	BOOLEAN_PROPERTY(SpaceUVEditor, lock_bounds)
	BOOLEAN_PROPERTY(SpaceUVEditor, use_live_unwrap)
	ENUM_PROPERTY(pivot_point_enum, SpaceUVEditor, pivot_point)

	ENUM_PROPERTY(view_type_enum, SpaceSequenceEditor, view_type)
	ENUM_PROPERTY(display_mode_enum, SpaceSequenceEditor, display_mode)
	BOOLEAN_PROPERTY(SpaceSequenceEditor, show_frame_indicator)
	BOOLEAN_PROPERTY(SpaceSequenceEditor, show_frames)
	BOOLEAN_PROPERTY(SpaceSequenceEditor, use_marker_sync)
	BOOLEAN_PROPERTY(SpaceSequenceEditor, show_separate_color)
	BOOLEAN_PROPERTY(SpaceSequenceEditor, show_safe_margin)
	BOOLEAN_PROPERTY(SpaceSequenceEditor, use_grease_pencil)
	POINTER_PROPERTY(UnknownType, SpaceSequenceEditor, grease_pencil)
	INT_PROPERTY(SpaceSequenceEditor, display_channel)
	INT_PROPERTY(SpaceSequenceEditor, draw_overexposed)
	ENUM_PROPERTY(proxy_render_size_enum, SpaceSequenceEditor, proxy_render_size)
	FLOAT_PROPERTY(SpaceSequenceEditor, offset_x)
	FLOAT_PROPERTY(SpaceSequenceEditor, offset_y)
	FLOAT_PROPERTY(SpaceSequenceEditor, zoom)

	POINTER_PROPERTY(Text, SpaceTextEditor, text)
	BOOLEAN_PROPERTY(SpaceTextEditor, show_word_wrap)
	BOOLEAN_PROPERTY(SpaceTextEditor, show_line_numbers)
	BOOLEAN_PROPERTY(SpaceTextEditor, show_syntax_highlight)
	BOOLEAN_PROPERTY(SpaceTextEditor, show_line_highlight)
	INT_PROPERTY(SpaceTextEditor, tab_width)
	INT_PROPERTY(SpaceTextEditor, font_size)
	BOOLEAN_PROPERTY(SpaceTextEditor, show_margin)
	INT_PROPERTY(SpaceTextEditor, margin_column)
	BOOLEAN_PROPERTY(SpaceTextEditor, use_overwrite)
	BOOLEAN_PROPERTY(SpaceTextEditor, use_live_edit)
	BOOLEAN_PROPERTY(SpaceTextEditor, use_find_all)
	BOOLEAN_PROPERTY(SpaceTextEditor, use_find_wrap)
	STRING_PROPERTY(SpaceTextEditor, find_text)
	STRING_PROPERTY(SpaceTextEditor, replace_text)

	POINTER_PROPERTY(Struct, FileSelectParams, rna_type)
	STRING_PROPERTY(FileSelectParams, title)
	STRING_PROPERTY(FileSelectParams, directory)
	STRING_PROPERTY(FileSelectParams, filename)
	ENUM_PROPERTY(display_type_enum, FileSelectParams, display_type)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter)
	BOOLEAN_PROPERTY(FileSelectParams, show_hidden)
	ENUM_PROPERTY(sort_method_enum, FileSelectParams, sort_method)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_image)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_blender)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_movie)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_script)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_font)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_sound)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_text)
	BOOLEAN_PROPERTY(FileSelectParams, use_filter_folder)
	STRING_PROPERTY(FileSelectParams, filter_glob)

	POINTER_PROPERTY(FileSelectParams, SpaceFileBrowser, params)
	POINTER_PROPERTY(Operator, SpaceFileBrowser, operator)

	ENUM_PROPERTY(display_mode_enum, SpaceOutliner, display_mode)
	STRING_PROPERTY(SpaceOutliner, filter_text)
	BOOLEAN_PROPERTY(SpaceOutliner, use_filter_case_sensitive)
	BOOLEAN_PROPERTY(SpaceOutliner, use_filter_complete)
	BOOLEAN_PROPERTY(SpaceOutliner, show_restrict_columns)

	POINTER_PROPERTY(Struct, BackgroundImage, rna_type)
	POINTER_PROPERTY(Image, BackgroundImage, image)
	POINTER_PROPERTY(ImageUser, BackgroundImage, image_user)
	FLOAT_PROPERTY(BackgroundImage, offset_x)
	FLOAT_PROPERTY(BackgroundImage, offset_y)
	FLOAT_PROPERTY(BackgroundImage, size)
	FLOAT_PROPERTY(BackgroundImage, opacity)
	ENUM_PROPERTY(view_axis_enum, BackgroundImage, view_axis)
	BOOLEAN_PROPERTY(BackgroundImage, show_expanded)

	POINTER_PROPERTY(Object, SpaceView3D, camera)
	POINTER_PROPERTY(Object, SpaceView3D, lock_object)
	STRING_PROPERTY(SpaceView3D, lock_bone)
	BOOLEAN_PROPERTY(SpaceView3D, lock_cursor)
	ENUM_PROPERTY(viewport_shade_enum, SpaceView3D, viewport_shade)
	POINTER_PROPERTY(SpaceView3D, SpaceView3D, local_view)
	FLOAT_ARRAY_PROPERTY(SpaceView3D, 3, cursor_location)
	FLOAT_PROPERTY(SpaceView3D, lens)
	FLOAT_PROPERTY(SpaceView3D, clip_start)
	FLOAT_PROPERTY(SpaceView3D, clip_end)
	FLOAT_PROPERTY(SpaceView3D, grid_scale)
	INT_PROPERTY(SpaceView3D, grid_lines)
	INT_PROPERTY(SpaceView3D, grid_subdivisions)
	BOOLEAN_PROPERTY(SpaceView3D, show_floor)
	BOOLEAN_PROPERTY(SpaceView3D, show_axis_x)
	BOOLEAN_PROPERTY(SpaceView3D, show_axis_y)
	BOOLEAN_PROPERTY(SpaceView3D, show_axis_z)
	BOOLEAN_PROPERTY(SpaceView3D, show_outline_selected)
	BOOLEAN_PROPERTY(SpaceView3D, show_all_objects_origin)
	BOOLEAN_PROPERTY(SpaceView3D, show_relationship_lines)
	BOOLEAN_PROPERTY(SpaceView3D, show_textured_solid)
	BOOLEAN_PROPERTY(SpaceView3D, show_only_render)
	BOOLEAN_PROPERTY(SpaceView3D, use_occlude_geometry)

	BOOLEAN_PROPERTY(SpaceView3D, show_background_images)
	ENUM_PROPERTY(pivot_point_enum, SpaceView3D, pivot_point)
	BOOLEAN_PROPERTY(SpaceView3D, use_pivot_point_align)
	BOOLEAN_PROPERTY(SpaceView3D, show_manipulator)
	BOOLEAN_PROPERTY(SpaceView3D, use_manipulator_translate)
	BOOLEAN_PROPERTY(SpaceView3D, use_manipulator_rotate)
	BOOLEAN_PROPERTY(SpaceView3D, use_manipulator_scale)
	ENUM_PROPERTY(transform_orientation_enum, SpaceView3D, transform_orientation)
	POINTER_PROPERTY(TransformOrientation, SpaceView3D, current_orientation)
	BOOLEAN_PROPERTY(SpaceView3D, lock_camera_and_layers)
	BOOLEAN_ARRAY_PROPERTY(SpaceView3D, 20, layers)
	BOOLEAN_ARRAY_PROPERTY(SpaceView3D, 20, layers_used)
	POINTER_PROPERTY(RegionView3D, SpaceView3D, region_3d)
	POINTER_PROPERTY(RegionView3D, SpaceView3D, region_quadview)

	POINTER_PROPERTY(Struct, RegionView3D, rna_type)
	BOOLEAN_PROPERTY(RegionView3D, lock_rotation)
	BOOLEAN_PROPERTY(RegionView3D, show_sync_view)
	BOOLEAN_PROPERTY(RegionView3D, use_box_clip)
	FLOAT_ARRAY_PROPERTY(RegionView3D, 16, perspective_matrix)
	FLOAT_ARRAY_PROPERTY(RegionView3D, 16, view_matrix)
	ENUM_PROPERTY(view_perspective_enum, RegionView3D, view_perspective)
	FLOAT_ARRAY_PROPERTY(RegionView3D, 3, view_location)
	FLOAT_ARRAY_PROPERTY(RegionView3D, 4, view_rotation)
	FLOAT_PROPERTY(RegionView3D, view_distance)

	ENUM_PROPERTY(context_enum, SpaceProperties, context)
	ENUM_PROPERTY(align_enum, SpaceProperties, align)
	ENUM_PROPERTY(texture_context_enum, SpaceProperties, texture_context)
	POINTER_PROPERTY(ID, SpaceProperties, pin_id)
	BOOLEAN_PROPERTY(SpaceProperties, use_pin_id)

	POINTER_PROPERTY(Action, SpaceDopeSheetEditor, action)
	ENUM_PROPERTY(mode_enum, SpaceDopeSheetEditor, mode)
	BOOLEAN_PROPERTY(SpaceDopeSheetEditor, show_seconds)
	BOOLEAN_PROPERTY(SpaceDopeSheetEditor, show_frame_indicator)
	BOOLEAN_PROPERTY(SpaceDopeSheetEditor, show_sliders)
	BOOLEAN_PROPERTY(SpaceDopeSheetEditor, show_pose_markers)
	BOOLEAN_PROPERTY(SpaceDopeSheetEditor, use_auto_merge_keyframes)
	BOOLEAN_PROPERTY(SpaceDopeSheetEditor, use_realtime_update)
	BOOLEAN_PROPERTY(SpaceDopeSheetEditor, use_marker_sync)
	POINTER_PROPERTY(DopeSheet, SpaceDopeSheetEditor, dopesheet)
	ENUM_PROPERTY(auto_snap_enum, SpaceDopeSheetEditor, auto_snap)

	ENUM_PROPERTY(mode_enum, SpaceGraphEditor, mode)
	BOOLEAN_PROPERTY(SpaceGraphEditor, show_seconds)
	BOOLEAN_PROPERTY(SpaceGraphEditor, show_frame_indicator)
	BOOLEAN_PROPERTY(SpaceGraphEditor, show_sliders)
	BOOLEAN_PROPERTY(SpaceGraphEditor, show_handles)
	BOOLEAN_PROPERTY(SpaceGraphEditor, use_only_selected_curves_handles)
	BOOLEAN_PROPERTY(SpaceGraphEditor, use_only_selected_keyframe_handles)
	BOOLEAN_PROPERTY(SpaceGraphEditor, use_fancy_drawing)
	BOOLEAN_PROPERTY(SpaceGraphEditor, use_auto_merge_keyframes)
	BOOLEAN_PROPERTY(SpaceGraphEditor, use_realtime_update)
	BOOLEAN_PROPERTY(SpaceGraphEditor, show_cursor)
	FLOAT_PROPERTY(SpaceGraphEditor, cursor_position_y)
	ENUM_PROPERTY(pivot_point_enum, SpaceGraphEditor, pivot_point)
	POINTER_PROPERTY(DopeSheet, SpaceGraphEditor, dopesheet)
	ENUM_PROPERTY(auto_snap_enum, SpaceGraphEditor, auto_snap)
	BOOLEAN_PROPERTY(SpaceGraphEditor, has_ghost_curves)

	BOOLEAN_PROPERTY(SpaceNLA, show_seconds)
	BOOLEAN_PROPERTY(SpaceNLA, show_frame_indicator)
	BOOLEAN_PROPERTY(SpaceNLA, show_strip_curves)
	BOOLEAN_PROPERTY(SpaceNLA, use_realtime_update)
	POINTER_PROPERTY(DopeSheet, SpaceNLA, dopesheet)
	ENUM_PROPERTY(auto_snap_enum, SpaceNLA, auto_snap)

	BOOLEAN_PROPERTY(SpaceTimeline, show_only_selected)
	BOOLEAN_PROPERTY(SpaceTimeline, show_frame_indicator)
	BOOLEAN_PROPERTY(SpaceTimeline, show_cache)
	BOOLEAN_PROPERTY(SpaceTimeline, cache_softbody)
	BOOLEAN_PROPERTY(SpaceTimeline, cache_particles)
	BOOLEAN_PROPERTY(SpaceTimeline, cache_cloth)
	BOOLEAN_PROPERTY(SpaceTimeline, cache_smoke)

	INT_PROPERTY(SpaceConsole, font_size)
	INT_PROPERTY(SpaceConsole, select_start)
	INT_PROPERTY(SpaceConsole, select_end)
	STRING_PROPERTY(SpaceConsole, prompt)
	STRING_PROPERTY(SpaceConsole, language)



	POINTER_PROPERTY(Struct, ConsoleLine, rna_type)
	STRING_PROPERTY(ConsoleLine, body)
	INT_PROPERTY(ConsoleLine, current_character)

	BOOLEAN_PROPERTY(SpaceInfo, show_report_debug)
	BOOLEAN_PROPERTY(SpaceInfo, show_report_info)
	BOOLEAN_PROPERTY(SpaceInfo, show_report_operator)
	BOOLEAN_PROPERTY(SpaceInfo, show_report_warning)
	BOOLEAN_PROPERTY(SpaceInfo, show_report_error)

	STRING_PROPERTY(SpaceUserPreferences, filter_text)

	ENUM_PROPERTY(tree_type_enum, SpaceNodeEditor, tree_type)
	ENUM_PROPERTY(texture_type_enum, SpaceNodeEditor, texture_type)
	POINTER_PROPERTY(ID, SpaceNodeEditor, id)
	POINTER_PROPERTY(ID, SpaceNodeEditor, id_from)
	POINTER_PROPERTY(NodeTree, SpaceNodeEditor, node_tree)
	BOOLEAN_PROPERTY(SpaceNodeEditor, show_backdrop)
	BOOLEAN_PROPERTY(SpaceNodeEditor, use_auto_render)
	FLOAT_PROPERTY(SpaceNodeEditor, backdrop_zoom)
	FLOAT_PROPERTY(SpaceNodeEditor, backdrop_x)
	FLOAT_PROPERTY(SpaceNodeEditor, backdrop_y)
	ENUM_PROPERTY(backdrop_channels_enum, SpaceNodeEditor, backdrop_channels)

	BOOLEAN_PROPERTY(SpaceLogicEditor, show_sensors_selected_objects)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_sensors_active_object)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_sensors_linked_controller)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_sensors_active_states)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_controllers_selected_objects)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_controllers_active_object)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_controllers_linked_controller)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_actuators_selected_objects)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_actuators_active_object)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_actuators_linked_controller)
	BOOLEAN_PROPERTY(SpaceLogicEditor, show_actuators_active_states)

	POINTER_PROPERTY(Struct, TextLine, rna_type)
	STRING_PROPERTY(TextLine, body)

	POINTER_PROPERTY(Struct, TextMarker, rna_type)
	INT_PROPERTY(TextMarker, line)
	INT_PROPERTY(TextMarker, character_index_start)
	INT_PROPERTY(TextMarker, character_index_end)
	INT_PROPERTY(TextMarker, group)
	BOOLEAN_PROPERTY(TextMarker, is_temporary)
	BOOLEAN_PROPERTY(TextMarker, use_edit_all)
	FLOAT_ARRAY_PROPERTY(TextMarker, 4, color)

	STRING_PROPERTY(Text, filepath)
	BOOLEAN_PROPERTY(Text, is_dirty)
	BOOLEAN_PROPERTY(Text, is_modified)
	BOOLEAN_PROPERTY(Text, is_in_memory)
	BOOLEAN_PROPERTY(Text, use_module)
	BOOLEAN_PROPERTY(Text, use_tabs_as_spaces)

	POINTER_PROPERTY(TextLine, Text, current_line)
	INT_PROPERTY(Text, current_character)
	POINTER_PROPERTY(TextLine, Text, select_end_line)
	INT_PROPERTY(Text, select_end_character)


	POINTER_PROPERTY(Struct, TimelineMarker, rna_type)
	STRING_PROPERTY(TimelineMarker, name)
	INT_PROPERTY(TimelineMarker, frame)
	BOOLEAN_PROPERTY(TimelineMarker, select)
	POINTER_PROPERTY(Object, TimelineMarker, camera)

	STRING_PROPERTY(Sound, filepath)
	POINTER_PROPERTY(PackedFile, Sound, packed_file)
	BOOLEAN_PROPERTY(Sound, use_memory_cache)

	POINTER_PROPERTY(Struct, UILayout, rna_type)
	BOOLEAN_PROPERTY(UILayout, active)
	ENUM_PROPERTY(operator_context_enum, UILayout, operator_context)
	BOOLEAN_PROPERTY(UILayout, enabled)
	BOOLEAN_PROPERTY(UILayout, alert)
	ENUM_PROPERTY(alignment_enum, UILayout, alignment)
	FLOAT_PROPERTY(UILayout, scale_x)
	FLOAT_PROPERTY(UILayout, scale_y)

	POINTER_PROPERTY(Struct, Panel, rna_type)
	POINTER_PROPERTY(UILayout, Panel, layout)
	STRING_PROPERTY(Panel, text)
	STRING_PROPERTY(Panel, bl_idname)
	STRING_PROPERTY(Panel, bl_label)
	ENUM_PROPERTY(bl_space_type_enum, Panel, bl_space_type)
	ENUM_PROPERTY(bl_region_type_enum, Panel, bl_region_type)
	STRING_PROPERTY(Panel, bl_context)
	ENUM_PROPERTY(bl_options_enum, Panel, bl_options)

	POINTER_PROPERTY(Struct, Header, rna_type)
	POINTER_PROPERTY(UILayout, Header, layout)
	STRING_PROPERTY(Header, bl_idname)
	ENUM_PROPERTY(bl_space_type_enum, Header, bl_space_type)

	POINTER_PROPERTY(Struct, Menu, rna_type)
	POINTER_PROPERTY(UILayout, Menu, layout)
	STRING_PROPERTY(Menu, bl_idname)
	STRING_PROPERTY(Menu, bl_label)

	POINTER_PROPERTY(Struct, ThemeFontStyle, rna_type)
	INT_PROPERTY(ThemeFontStyle, points)
	ENUM_PROPERTY(font_kerning_style_enum, ThemeFontStyle, font_kerning_style)
	INT_PROPERTY(ThemeFontStyle, shadow)
	INT_PROPERTY(ThemeFontStyle, shadow_offset_x)
	INT_PROPERTY(ThemeFontStyle, shadow_offset_y)
	FLOAT_PROPERTY(ThemeFontStyle, shadowalpha)
	FLOAT_PROPERTY(ThemeFontStyle, shadowcolor)

	POINTER_PROPERTY(Struct, ThemeStyle, rna_type)
	FLOAT_PROPERTY(ThemeStyle, panelzoom)
	POINTER_PROPERTY(ThemeFontStyle, ThemeStyle, panel_title)
	POINTER_PROPERTY(ThemeFontStyle, ThemeStyle, group_label)
	POINTER_PROPERTY(ThemeFontStyle, ThemeStyle, widget_label)
	POINTER_PROPERTY(ThemeFontStyle, ThemeStyle, widget)

	POINTER_PROPERTY(Struct, ThemeWidgetColors, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetColors, 3, outline)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetColors, 4, inner)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetColors, 4, inner_sel)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetColors, 4, item)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetColors, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetColors, 3, text_sel)
	BOOLEAN_PROPERTY(ThemeWidgetColors, show_shaded)
	INT_PROPERTY(ThemeWidgetColors, shadetop)
	INT_PROPERTY(ThemeWidgetColors, shadedown)

	POINTER_PROPERTY(Struct, ThemeWidgetStateColors, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetStateColors, 3, inner_anim)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetStateColors, 3, inner_anim_sel)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetStateColors, 3, inner_key)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetStateColors, 3, inner_key_sel)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetStateColors, 3, inner_driven)
	FLOAT_ARRAY_PROPERTY(ThemeWidgetStateColors, 3, inner_driven_sel)
	FLOAT_PROPERTY(ThemeWidgetStateColors, blend)

	POINTER_PROPERTY(Struct, ThemeUserInterface, rna_type)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_regular)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_tool)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_radio)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_text)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_option)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_toggle)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_num)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_numslider)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_box)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_menu)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_pulldown)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_menu_back)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_menu_item)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_scroll)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_progress)
	POINTER_PROPERTY(ThemeWidgetColors, ThemeUserInterface, wcol_list_item)
	POINTER_PROPERTY(ThemeWidgetStateColors, ThemeUserInterface, wcol_state)
	STRING_PROPERTY(ThemeUserInterface, icon_file)

	POINTER_PROPERTY(Struct, ThemeView3D, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, grid)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 4, panel)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, wire)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 4, lamp)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, object_selected)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, object_active)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, object_grouped)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, object_grouped_active)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, transform)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, vertex)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, vertex_select)
	INT_PROPERTY(ThemeView3D, vertex_size)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, edge_select)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, edge_seam)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, edge_sharp)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, edge_crease)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, edge_facesel)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 4, face)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 4, face_select)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, face_dot)
	INT_PROPERTY(ThemeView3D, facedot_size)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, nurb_uline)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, nurb_vline)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, nurb_sel_uline)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, nurb_sel_vline)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, act_spline)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_free)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_auto)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_vect)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_align)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_sel_free)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_sel_auto)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_sel_vect)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, handle_sel_align)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, lastsel_point)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, extra_edge_len)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, extra_face_angle)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, extra_face_area)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 4, editmesh_active)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, normal)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, vertex_normal)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, bone_solid)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, bone_pose)
	FLOAT_ARRAY_PROPERTY(ThemeView3D, 3, frame_current)

	POINTER_PROPERTY(Struct, ThemeGraphEditor, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, list)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, list_title)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, list_text)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, list_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, grid)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, panel)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, window_sliders)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, channels_region)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, vertex)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, vertex_select)
	INT_PROPERTY(ThemeGraphEditor, vertex_size)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_free)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_auto)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_vect)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_align)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_sel_free)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_sel_auto)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_sel_vect)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_sel_align)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, lastsel_point)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, frame_current)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_vertex)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, handle_vertex_select)
	INT_PROPERTY(ThemeGraphEditor, handle_vertex_size)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, channel_group)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, active_channels_group)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, dopesheet_channel)
	FLOAT_ARRAY_PROPERTY(ThemeGraphEditor, 3, dopesheet_subchannel)

	POINTER_PROPERTY(Struct, ThemeFileBrowser, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, list)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, list_title)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, list_text)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, list_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, selected_file)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, tiles)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, scrollbar)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, scroll_handle)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, active_file)
	FLOAT_ARRAY_PROPERTY(ThemeFileBrowser, 3, active_file_text)

	POINTER_PROPERTY(Struct, ThemeNLAEditor, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, list)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, list_title)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, list_text)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, list_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, grid)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, view_sliders)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, bars)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, bars_selected)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, strips)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, strips_selected)
	FLOAT_ARRAY_PROPERTY(ThemeNLAEditor, 3, frame_current)

	POINTER_PROPERTY(Struct, ThemeDopeSheet, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, list)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, list_title)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, list_text)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, list_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, grid)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, value_sliders)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, view_sliders)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, channels)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, channels_selected)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, channel_group)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, active_channels_group)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, long_key)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, long_key_selected)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, frame_current)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, dopesheet_channel)
	FLOAT_ARRAY_PROPERTY(ThemeDopeSheet, 3, dopesheet_subchannel)

	POINTER_PROPERTY(Struct, ThemeImageEditor, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, vertex)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, vertex_select)
	INT_PROPERTY(ThemeImageEditor, vertex_size)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 4, face)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 4, face_select)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 3, face_dot)
	INT_PROPERTY(ThemeImageEditor, facedot_size)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 4, editmesh_active)
	FLOAT_ARRAY_PROPERTY(ThemeImageEditor, 4, scope_back)

	POINTER_PROPERTY(Struct, ThemeSequenceEditor, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, grid)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, window_sliders)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, movie_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, image_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, scene_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, audio_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, effect_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, plugin_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, transition_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, meta_strip)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, frame_current)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, keyframe)
	FLOAT_ARRAY_PROPERTY(ThemeSequenceEditor, 3, draw_action)

	POINTER_PROPERTY(Struct, ThemeProperties, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeProperties, 3, panel)

	POINTER_PROPERTY(Struct, ThemeTextEditor, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, line_numbers_background)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, scroll_bar)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, selected_text)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, cursor)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, syntax_builtin)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, syntax_special)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, syntax_comment)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, syntax_string)
	FLOAT_ARRAY_PROPERTY(ThemeTextEditor, 3, syntax_numbers)

	POINTER_PROPERTY(Struct, ThemeTimeline, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, grid)
	FLOAT_ARRAY_PROPERTY(ThemeTimeline, 3, frame_current)

	POINTER_PROPERTY(Struct, ThemeNodeEditor, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, list)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, list_title)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, list_text)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, list_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, wire)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, wire_select)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, selected_text)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 4, node_backdrop)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, in_out_node)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, converter_node)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, operator_node)
	FLOAT_ARRAY_PROPERTY(ThemeNodeEditor, 3, group_node)

	POINTER_PROPERTY(Struct, ThemeOutliner, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeOutliner, 3, button_text_hi)

	POINTER_PROPERTY(Struct, ThemeInfo, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeInfo, 3, button_text_hi)

	POINTER_PROPERTY(Struct, ThemeUserPreferences, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeUserPreferences, 3, button_text_hi)

	POINTER_PROPERTY(Struct, ThemeConsole, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, line_output)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, line_input)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, line_info)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, line_error)
	FLOAT_ARRAY_PROPERTY(ThemeConsole, 3, cursor)

	POINTER_PROPERTY(Struct, ThemeAudioWindow, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, grid)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, window_sliders)
	FLOAT_ARRAY_PROPERTY(ThemeAudioWindow, 3, frame_current)

	POINTER_PROPERTY(Struct, ThemeLogicEditor, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, back)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, title)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, text)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, header)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, header_text)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, header_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, button)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, button_title)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, button_text)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, button_text_hi)
	FLOAT_ARRAY_PROPERTY(ThemeLogicEditor, 3, panel)

	POINTER_PROPERTY(Struct, ThemeBoneColorSet, rna_type)
	FLOAT_ARRAY_PROPERTY(ThemeBoneColorSet, 3, normal)
	FLOAT_ARRAY_PROPERTY(ThemeBoneColorSet, 3, select)
	FLOAT_ARRAY_PROPERTY(ThemeBoneColorSet, 3, active)
	BOOLEAN_PROPERTY(ThemeBoneColorSet, show_colored_constraints)

	POINTER_PROPERTY(Struct, Theme, rna_type)
	STRING_PROPERTY(Theme, name)
	ENUM_PROPERTY(theme_area_enum, Theme, theme_area)
	POINTER_PROPERTY(ThemeUserInterface, Theme, user_interface)
	POINTER_PROPERTY(ThemeView3D, Theme, view_3d)
	POINTER_PROPERTY(ThemeGraphEditor, Theme, graph_editor)
	POINTER_PROPERTY(ThemeFileBrowser, Theme, file_browser)
	POINTER_PROPERTY(ThemeNLAEditor, Theme, nla_editor)
	POINTER_PROPERTY(ThemeDopeSheet, Theme, dopesheet_editor)
	POINTER_PROPERTY(ThemeImageEditor, Theme, image_editor)
	POINTER_PROPERTY(ThemeSequenceEditor, Theme, sequence_editor)
	POINTER_PROPERTY(ThemeProperties, Theme, properties)
	POINTER_PROPERTY(ThemeTextEditor, Theme, text_editor)
	POINTER_PROPERTY(ThemeTimeline, Theme, timeline)
	POINTER_PROPERTY(ThemeNodeEditor, Theme, node_editor)
	POINTER_PROPERTY(ThemeLogicEditor, Theme, logic_editor)
	POINTER_PROPERTY(ThemeOutliner, Theme, outliner)
	POINTER_PROPERTY(ThemeInfo, Theme, info)
	POINTER_PROPERTY(ThemeUserPreferences, Theme, user_preferences)
	POINTER_PROPERTY(ThemeConsole, Theme, console)


	POINTER_PROPERTY(Struct, UserSolidLight, rna_type)
	BOOLEAN_PROPERTY(UserSolidLight, use)
	FLOAT_ARRAY_PROPERTY(UserSolidLight, 3, direction)
	FLOAT_ARRAY_PROPERTY(UserSolidLight, 3, diffuse_color)
	FLOAT_ARRAY_PROPERTY(UserSolidLight, 3, specular_color)

	POINTER_PROPERTY(Struct, UserPreferences, rna_type)
	ENUM_PROPERTY(active_section_enum, UserPreferences, active_section)



	POINTER_PROPERTY(UserPreferencesView, UserPreferences, view)
	POINTER_PROPERTY(UserPreferencesEdit, UserPreferences, edit)
	POINTER_PROPERTY(UserPreferencesInput, UserPreferences, inputs)
	POINTER_PROPERTY(UserPreferencesFilePaths, UserPreferences, filepaths)
	POINTER_PROPERTY(UserPreferencesSystem, UserPreferences, system)

	POINTER_PROPERTY(Struct, Addons, rna_type)

	POINTER_PROPERTY(Struct, UserPreferencesView, rna_type)
	BOOLEAN_PROPERTY(UserPreferencesView, show_tooltips)
	BOOLEAN_PROPERTY(UserPreferencesView, show_tooltips_python)
	BOOLEAN_PROPERTY(UserPreferencesView, show_object_info)
	BOOLEAN_PROPERTY(UserPreferencesView, use_global_scene)
	BOOLEAN_PROPERTY(UserPreferencesView, show_large_cursors)
	BOOLEAN_PROPERTY(UserPreferencesView, show_view_name)
	BOOLEAN_PROPERTY(UserPreferencesView, show_splash)
	BOOLEAN_PROPERTY(UserPreferencesView, show_playback_fps)
	BOOLEAN_PROPERTY(UserPreferencesView, use_mouse_over_open)
	INT_PROPERTY(UserPreferencesView, open_toplevel_delay)
	INT_PROPERTY(UserPreferencesView, open_sublevel_delay)
	INT_PROPERTY(UserPreferencesView, open_left_mouse_delay)
	INT_PROPERTY(UserPreferencesView, open_right_mouse_delay)
	BOOLEAN_PROPERTY(UserPreferencesView, show_column_layout)
	BOOLEAN_PROPERTY(UserPreferencesView, use_directional_menus)
	BOOLEAN_PROPERTY(UserPreferencesView, use_global_pivot)
	BOOLEAN_PROPERTY(UserPreferencesView, use_mouse_auto_depth)
	BOOLEAN_PROPERTY(UserPreferencesView, use_zoom_to_mouse)
	BOOLEAN_PROPERTY(UserPreferencesView, use_auto_perspective)
	BOOLEAN_PROPERTY(UserPreferencesView, use_rotate_around_active)
	BOOLEAN_PROPERTY(UserPreferencesView, show_mini_axis)
	INT_PROPERTY(UserPreferencesView, mini_axis_size)
	INT_PROPERTY(UserPreferencesView, mini_axis_brightness)
	INT_PROPERTY(UserPreferencesView, smooth_view)
	INT_PROPERTY(UserPreferencesView, rotation_angle)
	BOOLEAN_PROPERTY(UserPreferencesView, show_manipulator)
	INT_PROPERTY(UserPreferencesView, manipulator_size)
	INT_PROPERTY(UserPreferencesView, manipulator_handle_size)
	INT_PROPERTY(UserPreferencesView, manipulator_hotspot)
	INT_PROPERTY(UserPreferencesView, object_origin_size)
	INT_PROPERTY(UserPreferencesView, view2d_grid_spacing_min)
	ENUM_PROPERTY(timecode_style_enum, UserPreferencesView, timecode_style)

	POINTER_PROPERTY(Struct, UserPreferencesEdit, rna_type)
	ENUM_PROPERTY(material_link_enum, UserPreferencesEdit, material_link)
	ENUM_PROPERTY(object_align_enum, UserPreferencesEdit, object_align)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_enter_edit_mode)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_drag_immediately)
	INT_PROPERTY(UserPreferencesEdit, undo_steps)
	INT_PROPERTY(UserPreferencesEdit, undo_memory_limit)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_global_undo)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_auto_keying)
	ENUM_PROPERTY(auto_keying_mode_enum, UserPreferencesEdit, auto_keying_mode)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_keyframe_insert_available)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_keyframe_insert_needed)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_visual_keying)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_insertkey_xyz_to_rgb)
	ENUM_PROPERTY(keyframe_new_interpolation_type_enum, UserPreferencesEdit, keyframe_new_interpolation_type)
	ENUM_PROPERTY(keyframe_new_handle_type_enum, UserPreferencesEdit, keyframe_new_handle_type)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_negative_frames)
	INT_PROPERTY(UserPreferencesEdit, grease_pencil_manhattan_distance)
	INT_PROPERTY(UserPreferencesEdit, grease_pencil_euclidean_distance)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_grease_pencil_smooth_stroke)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_grease_pencil_simplify_stroke)
	INT_PROPERTY(UserPreferencesEdit, grease_pencil_eraser_radius)
	FLOAT_ARRAY_PROPERTY(UserPreferencesEdit, 3, sculpt_paint_overlay_color)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_mesh)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_surface)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_curve)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_text)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_metaball)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_armature)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_lamp)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_material)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_texture)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_fcurve)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_action)
	BOOLEAN_PROPERTY(UserPreferencesEdit, use_duplicate_particle)

	POINTER_PROPERTY(Struct, UserPreferencesInput, rna_type)
	ENUM_PROPERTY(select_mouse_enum, UserPreferencesInput, select_mouse)
	ENUM_PROPERTY(view_zoom_method_enum, UserPreferencesInput, view_zoom_method)
	ENUM_PROPERTY(view_zoom_axis_enum, UserPreferencesInput, view_zoom_axis)
	BOOLEAN_PROPERTY(UserPreferencesInput, invert_mouse_wheel_zoom)
	ENUM_PROPERTY(view_rotate_method_enum, UserPreferencesInput, view_rotate_method)
	BOOLEAN_PROPERTY(UserPreferencesInput, use_mouse_continuous)
	INT_PROPERTY(UserPreferencesInput, drag_threshold)
	INT_PROPERTY(UserPreferencesInput, ndof_pan_speed)
	INT_PROPERTY(UserPreferencesInput, ndof_rotate_speed)
	INT_PROPERTY(UserPreferencesInput, mouse_double_click_time)
	BOOLEAN_PROPERTY(UserPreferencesInput, use_mouse_emulate_3_button)
	BOOLEAN_PROPERTY(UserPreferencesInput, use_emulate_numpad)
	BOOLEAN_PROPERTY(UserPreferencesInput, use_mouse_mmb_paste)
	BOOLEAN_PROPERTY(UserPreferencesInput, invert_zoom_wheel)
	INT_PROPERTY(UserPreferencesInput, wheel_scroll_lines)

	STRING_PROPERTY(UserPreferencesInput, active_keyconfig)

	POINTER_PROPERTY(Struct, UserPreferencesFilePaths, rna_type)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, show_hidden_files_datablocks)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, use_filter_files)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, hide_recent_locations)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, show_thumbnails)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, use_relative_paths)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, use_file_compression)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, use_load_ui)
	STRING_PROPERTY(UserPreferencesFilePaths, font_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, texture_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, texture_plugin_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, sequence_plugin_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, render_output_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, script_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, sound_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, temporary_directory)
	STRING_PROPERTY(UserPreferencesFilePaths, image_editor)
	STRING_PROPERTY(UserPreferencesFilePaths, animation_player)
	ENUM_PROPERTY(animation_player_preset_enum, UserPreferencesFilePaths, animation_player_preset)
	INT_PROPERTY(UserPreferencesFilePaths, save_version)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, use_auto_save_temporary_files)
	INT_PROPERTY(UserPreferencesFilePaths, auto_save_time)
	INT_PROPERTY(UserPreferencesFilePaths, recent_files)
	BOOLEAN_PROPERTY(UserPreferencesFilePaths, use_save_preview_images)

	POINTER_PROPERTY(Struct, UserPreferencesSystem, rna_type)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_international_fonts)
	INT_PROPERTY(UserPreferencesSystem, dpi)
	INT_PROPERTY(UserPreferencesSystem, scrollback)
	STRING_PROPERTY(UserPreferencesSystem, author)
	ENUM_PROPERTY(language_enum, UserPreferencesSystem, language)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_translate_tooltips)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_translate_buttons)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_translate_toolbox)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_textured_fonts)

	BOOLEAN_PROPERTY(UserPreferencesSystem, use_weight_color_range)
	POINTER_PROPERTY(ColorRamp, UserPreferencesSystem, weight_color_range)
	ENUM_PROPERTY(color_picker_type_enum, UserPreferencesSystem, color_picker_type)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_preview_images)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_scripts_auto_execute)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_tabs_as_spaces)
	INT_PROPERTY(UserPreferencesSystem, prefetch_frames)
	INT_PROPERTY(UserPreferencesSystem, memory_cache_limit)
	INT_PROPERTY(UserPreferencesSystem, frame_server_port)
	FLOAT_PROPERTY(UserPreferencesSystem, gl_clip_alpha)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_mipmaps)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_vertex_buffer_objects)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_antialiasing)
	ENUM_PROPERTY(gl_texture_limit_enum, UserPreferencesSystem, gl_texture_limit)
	INT_PROPERTY(UserPreferencesSystem, texture_time_out)
	INT_PROPERTY(UserPreferencesSystem, texture_collection_rate)
	ENUM_PROPERTY(window_draw_method_enum, UserPreferencesSystem, window_draw_method)
	ENUM_PROPERTY(audio_mixing_buffer_enum, UserPreferencesSystem, audio_mixing_buffer)
	ENUM_PROPERTY(audio_device_enum, UserPreferencesSystem, audio_device)
	ENUM_PROPERTY(audio_sample_rate_enum, UserPreferencesSystem, audio_sample_rate)
	ENUM_PROPERTY(audio_sample_format_enum, UserPreferencesSystem, audio_sample_format)
	ENUM_PROPERTY(audio_channels_enum, UserPreferencesSystem, audio_channels)
	INT_PROPERTY(UserPreferencesSystem, screencast_fps)
	INT_PROPERTY(UserPreferencesSystem, screencast_wait_time)
	BOOLEAN_PROPERTY(UserPreferencesSystem, use_text_antialiasing)

	POINTER_PROPERTY(Struct, Addon, rna_type)
	STRING_PROPERTY(Addon, module)

	STRING_PROPERTY(VectorFont, filepath)
	POINTER_PROPERTY(PackedFile, VectorFont, packed_file)

	POINTER_PROPERTY(Struct, Operator, rna_type)
	STRING_PROPERTY(Operator, name)
	POINTER_PROPERTY(OperatorProperties, Operator, properties)
	BOOLEAN_PROPERTY(Operator, has_reports)
	POINTER_PROPERTY(UILayout, Operator, layout)
	STRING_PROPERTY(Operator, bl_idname)
	STRING_PROPERTY(Operator, bl_label)
	STRING_PROPERTY(Operator, bl_description)
	ENUM_PROPERTY(bl_options_enum, Operator, bl_options)

	POINTER_PROPERTY(Struct, OperatorProperties, rna_type)



	POINTER_PROPERTY(Struct, Macro, rna_type)
	STRING_PROPERTY(Macro, name)
	POINTER_PROPERTY(OperatorProperties, Macro, properties)
	STRING_PROPERTY(Macro, bl_idname)
	STRING_PROPERTY(Macro, bl_label)
	STRING_PROPERTY(Macro, bl_description)
	ENUM_PROPERTY(bl_options_enum, Macro, bl_options)

	POINTER_PROPERTY(Struct, OperatorTypeMacro, rna_type)
	POINTER_PROPERTY(OperatorProperties, OperatorTypeMacro, properties)

	POINTER_PROPERTY(Struct, Event, rna_type)
	STRING_PROPERTY(Event, ascii)
	ENUM_PROPERTY(value_enum, Event, value)
	ENUM_PROPERTY(type_enum, Event, type)
	INT_PROPERTY(Event, mouse_x)
	INT_PROPERTY(Event, mouse_y)
	INT_PROPERTY(Event, mouse_region_x)
	INT_PROPERTY(Event, mouse_region_y)
	INT_PROPERTY(Event, mouse_prev_x)
	INT_PROPERTY(Event, mouse_prev_y)
	BOOLEAN_PROPERTY(Event, shift)
	BOOLEAN_PROPERTY(Event, ctrl)
	BOOLEAN_PROPERTY(Event, alt)
	BOOLEAN_PROPERTY(Event, oskey)

	POINTER_PROPERTY(Struct, Window, rna_type)
	POINTER_PROPERTY(Screen, Window, screen)




	STRING_PROPERTY(WindowManager, clipboard)

	POINTER_PROPERTY(Struct, KeyConfigurations, rna_type)
	POINTER_PROPERTY(KeyConfig, KeyConfigurations, active)
	POINTER_PROPERTY(KeyConfig, KeyConfigurations, default)

	POINTER_PROPERTY(Struct, KeyConfig, rna_type)
	STRING_PROPERTY(KeyConfig, name)

	BOOLEAN_PROPERTY(KeyConfig, is_user_defined)

	POINTER_PROPERTY(Struct, KeyMaps, rna_type)

	POINTER_PROPERTY(Struct, KeyMap, rna_type)
	STRING_PROPERTY(KeyMap, name)
	ENUM_PROPERTY(space_type_enum, KeyMap, space_type)
	ENUM_PROPERTY(region_type_enum, KeyMap, region_type)

	BOOLEAN_PROPERTY(KeyMap, is_user_defined)
	BOOLEAN_PROPERTY(KeyMap, is_modal)
	BOOLEAN_PROPERTY(KeyMap, show_expanded_items)
	BOOLEAN_PROPERTY(KeyMap, show_expanded_children)

	POINTER_PROPERTY(Struct, KeyMapItems, rna_type)

	POINTER_PROPERTY(Struct, KeyMapItem, rna_type)
	STRING_PROPERTY(KeyMapItem, idname)
	STRING_PROPERTY(KeyMapItem, name)
	POINTER_PROPERTY(OperatorProperties, KeyMapItem, properties)
	ENUM_PROPERTY(map_type_enum, KeyMapItem, map_type)
	ENUM_PROPERTY(type_enum, KeyMapItem, type)
	ENUM_PROPERTY(value_enum, KeyMapItem, value)
	INT_PROPERTY(KeyMapItem, id)
	BOOLEAN_PROPERTY(KeyMapItem, any)
	BOOLEAN_PROPERTY(KeyMapItem, shift)
	BOOLEAN_PROPERTY(KeyMapItem, ctrl)
	BOOLEAN_PROPERTY(KeyMapItem, alt)
	BOOLEAN_PROPERTY(KeyMapItem, oskey)
	ENUM_PROPERTY(key_modifier_enum, KeyMapItem, key_modifier)
	BOOLEAN_PROPERTY(KeyMapItem, show_expanded)
	ENUM_PROPERTY(propvalue_enum, KeyMapItem, propvalue)
	BOOLEAN_PROPERTY(KeyMapItem, active)
	BOOLEAN_PROPERTY(KeyMapItem, is_user_defined)

	POINTER_PROPERTY(AnimData, World, animation_data)

	POINTER_PROPERTY(Texture, World, active_texture)
	INT_PROPERTY(World, active_texture_index)
	FLOAT_ARRAY_PROPERTY(World, 3, horizon_color)
	FLOAT_ARRAY_PROPERTY(World, 3, zenith_color)
	FLOAT_ARRAY_PROPERTY(World, 3, ambient_color)
	FLOAT_PROPERTY(World, exposure)
	FLOAT_PROPERTY(World, color_range)
	BOOLEAN_PROPERTY(World, use_sky_blend)
	BOOLEAN_PROPERTY(World, use_sky_paper)
	BOOLEAN_PROPERTY(World, use_sky_real)
	POINTER_PROPERTY(WorldLighting, World, light_settings)
	POINTER_PROPERTY(WorldMistSettings, World, mist_settings)
	POINTER_PROPERTY(WorldStarsSettings, World, star_settings)

	POINTER_PROPERTY(Struct, WorldTextureSlots, rna_type)

	POINTER_PROPERTY(Struct, WorldLighting, rna_type)
	BOOLEAN_PROPERTY(WorldLighting, use_ambient_occlusion)
	FLOAT_PROPERTY(WorldLighting, ao_factor)
	ENUM_PROPERTY(ao_blend_type_enum, WorldLighting, ao_blend_type)
	BOOLEAN_PROPERTY(WorldLighting, use_environment_light)
	FLOAT_PROPERTY(WorldLighting, environment_energy)
	ENUM_PROPERTY(environment_color_enum, WorldLighting, environment_color)
	BOOLEAN_PROPERTY(WorldLighting, use_indirect_light)
	FLOAT_PROPERTY(WorldLighting, indirect_factor)
	INT_PROPERTY(WorldLighting, indirect_bounces)
	ENUM_PROPERTY(gather_method_enum, WorldLighting, gather_method)
	INT_PROPERTY(WorldLighting, passes)
	FLOAT_PROPERTY(WorldLighting, distance)
	FLOAT_PROPERTY(WorldLighting, falloff_strength)
	FLOAT_PROPERTY(WorldLighting, bias)
	FLOAT_PROPERTY(WorldLighting, threshold)
	FLOAT_PROPERTY(WorldLighting, adapt_to_speed)
	FLOAT_PROPERTY(WorldLighting, error_threshold)
	FLOAT_PROPERTY(WorldLighting, correction)
	BOOLEAN_PROPERTY(WorldLighting, use_falloff)
	BOOLEAN_PROPERTY(WorldLighting, use_cache)
	INT_PROPERTY(WorldLighting, samples)
	ENUM_PROPERTY(sample_method_enum, WorldLighting, sample_method)

	POINTER_PROPERTY(Struct, WorldMistSettings, rna_type)
	BOOLEAN_PROPERTY(WorldMistSettings, use_mist)
	FLOAT_PROPERTY(WorldMistSettings, intensity)
	FLOAT_PROPERTY(WorldMistSettings, start)
	FLOAT_PROPERTY(WorldMistSettings, depth)
	FLOAT_PROPERTY(WorldMistSettings, height)
	ENUM_PROPERTY(falloff_enum, WorldMistSettings, falloff)

	POINTER_PROPERTY(Struct, WorldStarsSettings, rna_type)
	BOOLEAN_PROPERTY(WorldStarsSettings, use_stars)
	FLOAT_PROPERTY(WorldStarsSettings, size)
	FLOAT_PROPERTY(WorldStarsSettings, distance_min)
	FLOAT_PROPERTY(WorldStarsSettings, average_separation)
	FLOAT_PROPERTY(WorldStarsSettings, color_random)

	BOOLEAN_PROPERTY(WorldTextureSlot, use_map_blend)
	BOOLEAN_PROPERTY(WorldTextureSlot, use_map_horizon)
	BOOLEAN_PROPERTY(WorldTextureSlot, use_map_zenith_up)
	BOOLEAN_PROPERTY(WorldTextureSlot, use_map_zenith_down)
	ENUM_PROPERTY(texture_coords_enum, WorldTextureSlot, texture_coords)
	POINTER_PROPERTY(Object, WorldTextureSlot, object)
	FLOAT_PROPERTY(WorldTextureSlot, blend_factor)
	FLOAT_PROPERTY(WorldTextureSlot, horizon_factor)
	FLOAT_PROPERTY(WorldTextureSlot, zenith_up_factor)
	FLOAT_PROPERTY(WorldTextureSlot, zenith_down_factor)

}

#endif /* __RNA_BLENDER_CPP_H__ */

