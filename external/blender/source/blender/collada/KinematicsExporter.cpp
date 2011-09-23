/*
 * Contributor(s): Francois Lancelot
 */

/** \file blender/collada/KinematicsExporter.cpp
 *  \ingroup collada
 */

#include "KinematicsExporter.h"
#include <iostream>
#include <string>

#include <stdio.h>
#define couleur(param) printf("\033[%sm",param)

using namespace std;

KinematicsExporter::KinematicsExporter()
{

}

void KinematicsExporter::exportKinematics(Scene *scene)
{
    this->scene=scene;
    cout <<" << Export kinematics >>" << endl;
    printData(scene);
}

void KinematicsExporter::printData(Scene *scene)
{
    Base *base = (Base*) scene->base.first;

    while(base)
    {
        // une base est un objet avec des info supp
        Object *ob = base->object;

        if(get_armature(ob))
        {
            bArmature *arm = (bArmature*)ob->data;
            find_all_bones(ob, arm);
        }
        base = base->next;
    }
}

void KinematicsExporter::find_all_bones(Object* ob, bArmature* arm)
{
    int level=0;


    for(Bone* bone= (Bone*)arm->bonebase.first; bone; bone=bone->next)
    {
        // start from root bones
        if(!bone->parent)
            find_child_bones(ob, bone, &level);
    }
}

void KinematicsExporter::find_child_bones(Object *ob, Bone* bone, int * level)
{
    for(int i=0; i<*level; i++)
        cout << "  " ;
    cout << "<< Bone : " << bone->name << " >>" << endl;

    // World-pose
    //bPoseChannel *pchan = get_pose_channel(ob->pose, bone->name);

    float mat[4][4];
    get_bone_transform(ob, bone, mat);

    for(int k=0; k<*level; k++)
        cout << "  " ;
    cout << "Transform : " << endl;

    for(int i=0; i<4; i++)
    {
        for(int k=0; k<*level; k++)
            cout << "  " ;
        for(int j=0; j<4; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // Objects attached to bone
    std::vector <Object*> ob_attach;
    get_objects_attached_to_bone(bone, &ob_attach);


    if(ob_attach.size()>0)
    {
        for(int i=0; i<*level; i++)
            cout << "  " ;
        cout << "Objects attached to bone :  " ;
        for(int i=0; i<ob_attach.size(); i++)
        {
            cout << ob_attach.at(i)->id.name << " ";
        }
         cout << endl;
    }
    else
    {
        for(int i=0; i<*level; i++)
            cout << "  " ;
        cout << "No object attached to bone" << endl;
    }

    for (Bone *child = (Bone*)bone->childbase.first; child; child = child->next)
    {
        (*level)++;
        find_child_bones(ob, child, level);
    }
}

void KinematicsExporter::get_bone_transform(Object *ob_arm, Bone *bone, float mat[4][4])
{
        bPoseChannel *pchan = get_pose_channel(ob_arm->pose, bone->name);

        if (bone->parent) {
                // get bone-space matrix from armature-space
                bPoseChannel *parchan = get_pose_channel(ob_arm->pose, bone->parent->name);

                float invpar[4][4];
                invert_m4_m4(invpar, parchan->pose_mat);
                mul_m4_m4m4(mat, pchan->pose_mat, invpar);
        }
        else {
                // get world-space from armature-space
                mul_m4_m4m4(mat, pchan->pose_mat, ob_arm->obmat);
        }
}


void KinematicsExporter::get_objects_attached_to_bone(Bone *bone, std::vector <Object*>* ob_attach)
{

    // Go through all objects
    Base *base = (Base*) scene->base.first;

    while(base)
    {
        // une base est un objet avec des info supp
        Object *ob = base->object;
        if (ob->type == OB_MESH)
        {

            // If object is related to the bone
            // Add it to the vector
            if(strcmp(ob->parsubstr,bone->name) == 0)
            {
                ob_attach->push_back(ob);
            }
        }
        base = base->next;
    }

}

Bone * KinematicsExporter::get_parent_bone(Bone * bone)
{
    if(bone)
    {
        return bone->parent;
    }
    else
        return NULL;
}
