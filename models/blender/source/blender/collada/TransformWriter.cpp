/**
 * $Id: TransformWriter.cpp 32355 2010-10-06 20:40:16Z gsrb3d $
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
 * Contributor(s): Chingiz Dyussenov, Arystanbek Dyussenov, Jan Diederich, Tod Liverseed,
 *                 Nathan Letwory
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#include "BKE_object.h"

#include "TransformWriter.h"

#include "BLI_math.h"

void TransformWriter::add_node_transform(COLLADASW::Node& node, float mat[][4], float parent_mat[][4])
{
	float loc[3], rot[3], scale[3];
	float local[4][4];

	if (parent_mat) {
		float invpar[4][4];
		invert_m4_m4(invpar, parent_mat);
		mul_m4_m4m4(local, mat, invpar);
	}
	else {
		copy_m4_m4(local, mat);
	}

	TransformBase::decompose(local, loc, rot, NULL, scale);
	
	add_transform(node, loc, rot, scale);
}

void TransformWriter::add_node_transform_ob(COLLADASW::Node& node, Object *ob)
{
	float rot[3], loc[3], scale[3];

	if (ob->parent) {
		float C[4][4], tmat[4][4], imat[4][4], mat[4][4];

		// factor out scale from obmat

		copy_v3_v3(scale, ob->size);

		ob->size[0] = ob->size[1] = ob->size[2] = 1.0f;
		object_to_mat4(ob, C);
		copy_v3_v3(ob->size, scale);

		mul_serie_m4(tmat, ob->parent->obmat, ob->parentinv, C, NULL, NULL, NULL, NULL, NULL);

		// calculate local mat

		invert_m4_m4(imat, ob->parent->obmat);
		mul_m4_m4m4(mat, tmat, imat);

		// done

		mat4_to_eul(rot, mat);
		copy_v3_v3(loc, mat[3]);
	}
	else {
		copy_v3_v3(loc, ob->loc);
		copy_v3_v3(rot, ob->rot);
		copy_v3_v3(scale, ob->size);
	}

	add_transform(node, loc, rot, scale);
}

void TransformWriter::add_node_transform_identity(COLLADASW::Node& node)
{
	float loc[] = {0.0f, 0.0f, 0.0f}, scale[] = {1.0f, 1.0f, 1.0f}, rot[] = {0.0f, 0.0f, 0.0f};
	add_transform(node, loc, rot, scale);
}

void TransformWriter::add_transform(COLLADASW::Node& node, float loc[3], float rot[3], float scale[3])
{
	node.addTranslate("location", loc[0], loc[1], loc[2]);
	node.addRotateZ("rotationZ", COLLADABU::Math::Utils::radToDegF(rot[2]));
	node.addRotateY("rotationY", COLLADABU::Math::Utils::radToDegF(rot[1]));
	node.addRotateX("rotationX", COLLADABU::Math::Utils::radToDegF(rot[0]));
	node.addScale("scale", scale[0], scale[1], scale[2]);
}
