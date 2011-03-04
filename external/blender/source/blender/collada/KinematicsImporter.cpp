/**
 * $Id: DocumentImporter.cpp 33112 2010-11-16 23:18:17Z jesterking $
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * Contributor(s): Alexey Zakharov, Anton Sova.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#include "COLLADAFWRoot.h"
#include "COLLADAFWStableHeaders.h"
#include "COLLADAFWAnimationCurve.h"
#include "COLLADAFWAnimationList.h"
#include "COLLADAFWCamera.h"
#include "COLLADAFWColorOrTexture.h"
#include "COLLADAFWEffect.h"
#include "COLLADAFWFloatOrDoubleArray.h"
#include "COLLADAFWGeometry.h"
#include "COLLADAFWImage.h"
#include "COLLADAFWIndexList.h"
#include "COLLADAFWInstanceGeometry.h"
#include "COLLADAFWLight.h"
#include "COLLADAFWMaterial.h"
#include "COLLADAFWMesh.h"
#include "COLLADAFWMeshPrimitiveWithFaceVertexCount.h"
#include "COLLADAFWNode.h"
#include "COLLADAFWPolygons.h"
#include "COLLADAFWSampler.h"
#include "COLLADAFWSkinController.h"
#include "COLLADAFWSkinControllerData.h"
#include "COLLADAFWTransformation.h"
#include "COLLADAFWTranslate.h"
#include "COLLADAFWRotate.h"
#include "COLLADAFWScale.h"
#include "COLLADAFWMatrix.h"
#include "COLLADAFWTypes.h"
#include "COLLADAFWVisualScene.h"
#include "COLLADAFWFileInfo.h"
#include "COLLADAFWArrayPrimitiveType.h"
#include "COLLADASaxFWLLoader.h"
#include "COLLADAFWKinematicsScene.h"
#include "COLLADAFWInstanceKinematicsScene.h"
#include "COLLADAFWKinematicsModel.h"
#include "COLLADAFWScene.h"
#include "COLLADAFWUniqueId.h"
#include "COLLADAFWLibraryNodes.h"

// Blender related
#include "DNA_scene_types.h"
#include "BKE_object.h"

// Blender Collada Plugin related
#include "KinematicsImporter.h"
#include "MeshImporter.h"
#include "TransformReader.h"

using namespace std;

KinematicsImporter::Bone::Bone() {
    this->global_transform = COLLADABU::Math::Matrix4::IDENTITY;
    this->local_transform = COLLADABU::Math::Matrix4::IDENTITY;
    parent = NULL;
}

KinematicsImporter::Bone::~Bone() {
}

KinematicsImporter::KinematicsImporter(UnitConverter *unit_converter, MeshImporterBase *mesh_importer, Scene *scene) :
    unit_converter(unit_converter), mesh_importer(mesh_importer), scene(scene)
{

}

KinematicsImporter::KinematicsImporter(const KinematicsImporter& orig)
{

}

KinematicsImporter::~KinematicsImporter()
{

}

COLLADAFW::Node* KinematicsImporter::find_visual_node(const COLLADAFW::UniqueId& id)
{
    vector <COLLADAFW::Node*>::iterator it = visual_nodes.begin();
    while (it != visual_nodes.end())
    {
        if (id == (*it)->getUniqueId())
            return *it;
        ++it;
    }
    return NULL;
}

const COLLADABU::Math::Matrix4& KinematicsImporter::create_matrix_from_transform_list(const COLLADAFW::KinematicsModel* kinModel, size_t index)
{
    COLLADABU::Math::Matrix4 transformation;
    transformation = COLLADABU::Math::Matrix4::IDENTITY;
    COLLADAFW::KinematicsModel::LinkJointConnection* connection = kinModel->getLinkJointConnections()[index];
    const COLLADAFW::TransformationPointerArray& transforms = connection->getTransformations();

    for (int i = 0; i < transforms.getCount(); i++)
    {

        COLLADAFW::Transformation* transform = transforms[i];
        COLLADABU::Math::Vector3 t(0, 0, 0);
        COLLADABU::Math::Matrix4 matrix(COLLADABU::Math::Matrix4::IDENTITY);
        double angle;
        switch (transform->getTransformationType())
        {
        case COLLADAFW::Transformation::TRANSLATE:
            t = static_cast<COLLADAFW::Translate*> (transform)->getTranslation();
            //    cout << "TRANSLATE " << t.x << " " << t.y << " " << t.z << endl;
            matrix.setTrans(COLLADABU::Math::Vector3(t.x, t.y, t.z));
            break;
        case COLLADAFW::Transformation::ROTATE:
            t = static_cast<COLLADAFW::Rotate*> (transform)->getRotationAxis();
            angle = static_cast<COLLADAFW::Rotate*> (transform)->getRotationAngle();
            //    cout << "ROTATE " << t.x << " " << t.y << " " << t.z << " " << angle << endl;
            matrix.setRotate(COLLADABU::Math::Vector3(t.x, t.y, t.z),
                             t.x * angle * COLLADABU::Math::PI / 180.0,
                             t.y * angle * COLLADABU::Math::PI / 180.0,
                             t.z * angle * COLLADABU::Math::PI / 180.0);
            break;
        }
        transformation = transformation * matrix;
    }
    return transformation;
}

size_t KinematicsImporter::find_link_joint_connections(const COLLADAFW::KinematicsModel* kinModel, size_t linkIndex)
{
    const COLLADAFW::KinematicsModel::LinkJointConnections& connections = kinModel->getLinkJointConnections();
    size_t index = -1;
    for (int i = 0; i < connections.getCount(); i++)
    {
        if (connections[i]->getLinkNumber() == linkIndex)
            index = i;
    }
    return index;
}

std::vector <KinematicsImporter::Bone*> KinematicsImporter::build_kinematics_model(const COLLADAFW::KinematicsModel* kinModel)
{
    vector <KinematicsImporter::Bone*> bones;
    const COLLADAFW::KinematicsModel::LinkJointConnections& connections = kinModel->getLinkJointConnections();
    COLLADAFW::Joint* joint = NULL;
    for (int i = 1; i < connections.getCount(); i = i + 2)
    {
        size_t jointIndex = connections[i]->getJointIndex();
        size_t parentIndex = connections[i-1]->getLinkNumber();
        Bone* bone = new Bone();
        bone->id = jointIndex;
        bone->jointPtr = kinModel->getJoints()[jointIndex];
        bone->local_transform = create_matrix_from_transform_list(kinModel, i-1);
        if (parentIndex == 0)
            bone->parent = NULL;
        else
            bone->parent = bones[parentIndex-1];
        bones.push_back(bone);

        assert(bones.size() == connections[i]->getLinkNumber());
    }
    return bones;
}

bool KinematicsImporter::is_root(const Bone* bone) {
    if (bone->parent == NULL)
        return true;
    return false;
}

bool KinematicsImporter::write_kinematics_scene(const COLLADAFW::KinematicsScene* kinematicsScene)
{

    COLLADAFW::InstanceKinematicsSceneArray instances = kinematicsScene->getInstanceKinematicsScenes();
    COLLADAFW::KinematicsModelArray kinModels = kinematicsScene->getKinematicsModels();

    for (int i = 0; i < instances.getCount(); i++)
    {
        COLLADAFW::InstanceKinematicsScene* kinScene = instances[i];

        const COLLADAFW::InstanceKinematicsScene::NodeLinkBindingArray& linkBindings = kinScene->getNodeLinkBindings();
        if (linkBindings.getCount()  <= 0)
            continue;
        cout << linkBindings.getCount() << endl;
        cout << linkBindings[0].nodeUniqueId.toAscii() << endl;
        cout << linkBindings[0].kinematicsModelId << endl;
        cout << linkBindings[0].linkNumber << endl;
        size_t kinModelId = linkBindings[0].kinematicsModelId;
        const COLLADAFW::KinematicsModel* kinModel = kinModels[kinModelId];

        bones = build_kinematics_model(kinModel); //Buildling kinematics model here;
        for (int a = 0; a < linkBindings.getCount(); a++)
        {
            assert(kinModelId == linkBindings[a].kinematicsModelId);

            COLLADAFW::InstanceKinematicsScene::NodeLinkBinding linkBinding = linkBindings[a];
            assert(linkBinding.linkNumber < bones.size());

            COLLADAFW::UniqueId nodeId = linkBinding.nodeUniqueId;

            COLLADAFW::Node* node = find_visual_node(nodeId);
            if (node)
            {
                bones[linkBinding.linkNumber]->visualNodePtrArray.push_back(node);

            }
        }
    }

//    this->create_armature();

    Object* ob_armature;
    ob_armature = add_object(this->scene, OB_ARMATURE);
    ED_armature_to_edit(ob_armature);
    bArmature* armature = (bArmature*) (ob_armature->data);

    for (int i = 0; i < bones.size(); i++)
    {

        EditBone *blender_bone = ED_armature_edit_bone_add(armature, bones[i]->jointPtr->getName().c_str());
        bones[i]->blender_bone = blender_bone;


        cout << bones[i]->jointPtr->getName() <<  endl;
        cout << bones[i]->local_transform.getTrans().x << " " << bones[i]->local_transform.getTrans().y << " " << bones[i]->local_transform.getTrans().z << endl;
        if (bones[i]->visualNodePtrArray.size() > 0)
        {
            for (int h = 0; h < bones[i]->visualNodePtrArray.size(); h++)
            {
                cout <<  bones[i]->visualNodePtrArray[h]->getName() << " ";
            }
            cout << endl;
        }


        // bones is root
        // head is 0
        // tail is transform

        // bone has parent
        // head is parent transform
        // tail is current transform
        float length = 0;

        if (is_root(bones[i])) { //if bone is root
            blender_bone->parent = NULL;
            zero_v3(blender_bone->head);
            bones[i]->global_transform = bones[i]->local_transform;
            float tail_location [3] = {bones[i]->global_transform.getTrans().x,
                                       bones[i]->global_transform.getTrans().y,
                                       bones[i]->global_transform.getTrans().z};
            copy_v3_v3(blender_bone->tail, tail_location);
            bones[i]->blender_bone = blender_bone;
        } else {  //if bone is not root
            blender_bone->parent = bones[i]->parent->blender_bone;
            copy_v3_v3(blender_bone->head, blender_bone->parent->tail);

            bones[i]->global_transform = bones[i]->parent->global_transform * bones[i]->local_transform;
            float tail_location [3] = {bones[i]->global_transform.getTrans().x,
                                       bones[i]->global_transform.getTrans().y,
                                       bones[i]->global_transform.getTrans().z};
            copy_v3_v3(blender_bone->tail, tail_location);
            length = len_v3v3(blender_bone->parent->head, blender_bone->parent->tail);
            blender_bone->flag |= BONE_CONNECTED;


        }

    /*    if (bones[i]->parent != NULL) {

            EditBone *parent;

            parent = b

            bone->head[0] = 0;
            bone->head[1] = 0;
            bone->head[2] = 0;

            bone->tail[0] = bones[i]->local_transform.getTrans().x;
            bone->tail[1] = bones[i]->local_transform.getTrans().y;
            bone->tail[2] = bones[i]->local_transform.getTrans().z;

            bone->parent = ;

        }
            bone->head[0] = parent_bone->global_transform.getTrans().x;
            bone->head[1] = parent_bone->global_transform.getTrans().y;
            bone->head[2] = parent_bone->global_transform.getTrans().z;
            bone->tail[0] = bones[i]->global_transform.getTrans().x;
            bone->tail[1] = bones[i]->global_transform.getTrans().y;
            bone->tail[2] = bones[i]->global_transform.getTrans().z;
            cout << "----" << endl;    }
    */
    }
    ED_armature_from_edit(ob_armature);
	ED_armature_edit_free(ob_armature);
//	DAG_id_flush_update(&ob_armature->id, OB_RECALC_OB|OB_RECALC_DATA);
    return true;
}

void KinematicsImporter::create_armature() {
 /*   Object* ob_armature;
    ob_armature = add_object(this->scene, OB_ARMATURE);
    ED_armature_to_edit(ob_armature);
    bArmature* armature = (bArmature*) (ob_armature->data); //BAAAD

    EditBone *bone1 = ED_armature_edit_bone_add(armature, "test1");
    EditBone *bone2 = ED_armature_edit_bone_add(armature, "test2");
*/
}

/*
void ArmatureImporter::create_bone(SkinInfo& skin, COLLADAFW::Node *node, EditBone *parent, int totchild,
				 float parent_mat[][4], bArmature *arm)
{
	float joint_inv_bind_mat[4][4];

	// JointData* jd = get_joint_data(node);

	float mat[4][4];

	if (skin.get_joint_inv_bind_matrix(joint_inv_bind_mat, node)) {
		// get original world-space matrix
		invert_m4_m4(mat, joint_inv_bind_mat);
	}
	// create a bone even if there's no joint data for it (i.e. it has no influence)
	else {
		float obmat[4][4];

		// object-space
		get_node_mat(obmat, node, NULL, NULL);

		// get world-space
		if (parent)
			mul_m4_m4m4(mat, obmat, parent_mat);
		else
			copy_m4_m4(mat, obmat);
	}

	// TODO rename from Node "name" attrs later
	EditBone *bone = ED_armature_edit_bone_add(arm, (char*)bc_get_joint_name(node));
	totbone++;

	if (parent) bone->parent = parent;

	// set head
	copy_v3_v3(bone->head, mat[3]);

	// set tail, don't set it to head because 0-length bones are not allowed
	float vec[3] = {0.0f, 0.5f, 0.0f};
	add_v3_v3v3(bone->tail, bone->head, vec);

	// set parent tail
	if (parent && totchild == 1) {
		copy_v3_v3(parent->tail, bone->head);

		// not setting BONE_CONNECTED because this would lock child bone location with respect to parent
		// bone->flag |= BONE_CONNECTED;

		// XXX increase this to prevent "very" small bones?
		const float epsilon = 0.000001f;

		// derive leaf bone length
		float length = len_v3v3(parent->head, parent->tail);
		if ((length < leaf_bone_length || totbone == 0) && length > epsilon) {
			leaf_bone_length = length;
		}

		// treat zero-sized bone like a leaf bone
		if (length <= epsilon) {
			add_leaf_bone(parent_mat, parent);
		}


	}

	COLLADAFW::NodePointerArray& children = node->getChildNodes();
	for (unsigned int i = 0; i < children.getCount(); i++) {
		create_bone(skin, children[i], bone, children.getCount(), mat, arm);
	}

	// in second case it's not a leaf bone, but we handle it the same way
	if (!children.getCount() || children.getCount() > 1) {
		add_leaf_bone(mat, bone);
	}
}
*/
