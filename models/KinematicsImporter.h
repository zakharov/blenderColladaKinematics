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

#ifndef KINEMATICSIMPORTER_H
#define	KINEMATICSIMPORTER_H

#include <vector>

struct Scene;

namespace COLLADAFW
{
    class Node;
    class UniqueId;
    class Joint;
    class KinematicsModel;
 }

namespace COLLADABU
{
    namespace Math
    {
        class Matrix4;
    }
}

class MeshImporterBase;
class UnitConverter;
struct EditBone;

class KinematicsImporter
{
    class Bone {
    public:
        Bone();
        ~Bone();
        Bone* parent;
        COLLADAFW::Joint* jointPtr;
        std::vector <COLLADAFW::Node*> visualNodePtrArray;
        COLLADABU::Math::Matrix4 local_transform;
        COLLADABU::Math::Matrix4 global_transform;
        size_t id;
        EditBone* blender_bone;
    };

public:
    KinematicsImporter();
    KinematicsImporter(UnitConverter *unit_converter, MeshImporterBase *mesh_importer, Scene *scene);
    KinematicsImporter(const KinematicsImporter& orig);
    virtual ~KinematicsImporter();

    COLLADAFW::Node* find_visual_node(const COLLADAFW::UniqueId& id);
    const COLLADABU::Math::Matrix4& create_matrix_from_transform_list(const COLLADAFW::KinematicsModel* kinModel, size_t index);
    size_t find_link_joint_connections(const COLLADAFW::KinematicsModel* kinModel, size_t linkIndex);
    std::vector <Bone*> build_kinematics_model(const COLLADAFW::KinematicsModel* kinModel);
    bool write_kinematics_scene(const COLLADAFW::KinematicsScene* kinematicsScene);

private:
    void create_armature();
    bool is_root(const Bone* bone);

    std::string file_name;
    std::vector <COLLADAFW::Node*> visual_nodes;
    std::vector <Bone*> bones;

    Scene* scene;
    UnitConverter* unit_converter;
    MeshImporterBase* mesh_importer;
};

#endif	/* KINEMATICSIMPORTER_H */

