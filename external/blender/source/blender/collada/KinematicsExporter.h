/*
 * Contributor(s): Francois Lancelot
 */

/** \file KinematicsExporter.h
 *  \ingroup collada
 */

#ifndef KINEMATICSEXPORTER_H
#define KINEMATICSEXPORTER_H

#include "DNA_object_types.h"
#include "DNA_scene_types.h"
#include "DNA_armature_types.h"

#include "DNA_action_types.h"

#include "BKE_action.h" // pose functions
#include "BKE_armature.h"

#include "BLI_math.h"

#include <vector>



class KinematicsExporter
{
public:
    KinematicsExporter();

    void exportKinematics(Scene *scene);

    void printData(Scene *scene);


private:

    Scene *scene;

    //
    // Functions to easily access information about bones
    //

    // Go through all bones in an armature
    void find_all_bones(Object* ob, bArmature* arm);
    void find_child_bones(Object* ob, Bone * bone, int* level);

    // Fill 'mat' with the bone transform
    void get_bone_transform(Object *ob_arm, Bone *bone, float mat[4][4]);

    void get_objects_attached_to_bone(Bone *bone, std::vector <Object*>* ob_attach);
    Bone * get_parent_bone(Bone * bone);


};

#endif // KINEMATICSEXPORTER_H
