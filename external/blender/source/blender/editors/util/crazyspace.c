/*
 * $Id: crazyspace.c 36485 2011-05-04 13:15:42Z nazgul $
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
 * The Original Code is Copyright (C) 2005 Blender Foundation.
 * All rights reserved.
 *
 *
 * Contributor(s): Blender Foundation,
 *                 Sergey Sharybin
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file blender/editors/util/crazyspace.c
 *  \ingroup edutil
 */


#include "MEM_guardedalloc.h"

#include "DNA_scene_types.h"
#include "DNA_object_types.h"
#include "DNA_modifier_types.h"
#include "DNA_meshdata_types.h"

#include "BKE_DerivedMesh.h"
#include "BKE_modifier.h"
#include "BKE_multires.h"
#include "BKE_mesh.h"

#include "BLI_utildefines.h"
#include "BLI_math.h"
#include "BLI_editVert.h"

#include "ED_util.h"

typedef struct {
	float *vertexcos;
	short *flags;
} MappedUserData;

#define TAN_MAKE_VEC(a, b, c)	a[0]= b[0] + 0.2f*(b[0]-c[0]); a[1]= b[1] + 0.2f*(b[1]-c[1]); a[2]= b[2] + 0.2f*(b[2]-c[2])
static void set_crazy_vertex_quat(float *quat, float *v1, float *v2, float *v3, float *def1, float *def2, float *def3)
{
	float vecu[3], vecv[3];
	float q1[4], q2[4];

	TAN_MAKE_VEC(vecu, v1, v2);
	TAN_MAKE_VEC(vecv, v1, v3);
	tri_to_quat( q1,v1, vecu, vecv);

	TAN_MAKE_VEC(vecu, def1, def2);
	TAN_MAKE_VEC(vecv, def1, def3);
	tri_to_quat( q2,def1, vecu, vecv);

	sub_qt_qtqt(quat, q2, q1);
}
#undef TAN_MAKE_VEC

static void make_vertexcos__mapFunc(void *userData, int index, float *co, float *UNUSED(no_f), short *UNUSED(no_s))
{
	MappedUserData *mappedData= (MappedUserData*)userData;
	float *vec = mappedData->vertexcos;

	vec+= 3*index;
	if(!mappedData->flags[index]) {
		/* we need coord from prototype vertex, not it clones or images,
		   suppose they stored in the beginning of vertex array stored in DM */
		VECCOPY(vec, co);
		mappedData->flags[index]= 1;
	}
}

static int modifiers_disable_subsurf_temporary(Object *ob)
{
	ModifierData *md;
	int disabled = 0;

	for(md=ob->modifiers.first; md; md=md->next)
		if(md->type==eModifierType_Subsurf)
			if(md->mode & eModifierMode_OnCage) {
				md->mode ^= eModifierMode_DisableTemporary;
				disabled= 1;
			}

	return disabled;
}

/* disable subsurf temporal, get mapped cos, and enable it */
float *crazyspace_get_mapped_editverts(Scene *scene, Object *obedit)
{
	Mesh *me= obedit->data;
	DerivedMesh *dm;
	float *vertexcos;
	int nverts= me->edit_mesh->totvert;
	short *flags;
	MappedUserData userData;

	/* disable subsurf temporal, get mapped cos, and enable it */
	if(modifiers_disable_subsurf_temporary(obedit)) {
		/* need to make new derivemesh */
		makeDerivedMesh(scene, obedit, me->edit_mesh, CD_MASK_BAREMESH);
	}

	/* now get the cage */
	dm= editmesh_get_derived_cage(scene, obedit, me->edit_mesh, CD_MASK_BAREMESH);

	vertexcos= MEM_callocN(3*sizeof(float)*nverts, "vertexcos map");
	flags= MEM_callocN(sizeof(short)*nverts, "vertexcos flags");

	userData.vertexcos= vertexcos;
	userData.flags= flags;
	dm->foreachMappedVert(dm, make_vertexcos__mapFunc, &userData);

	dm->release(dm);

	/* set back the flag, no new cage needs to be built, transform does it */
	modifiers_disable_subsurf_temporary(obedit);

	MEM_freeN(flags);

	return vertexcos;
}

void crazyspace_set_quats_editmesh(EditMesh *em, float *origcos, float *mappedcos, float *quats)
{
	EditVert *eve, *prev;
	EditFace *efa;
	float *v1, *v2, *v3, *v4, *co1, *co2, *co3, *co4;
	intptr_t index= 0;

	/* two abused locations in vertices */
	for(eve= em->verts.first; eve; eve= eve->next, index++) {
		eve->tmp.p = NULL;
		eve->prev= (EditVert *)index;
	}

	/* first store two sets of tangent vectors in vertices, we derive it just from the face-edges */
	for(efa= em->faces.first; efa; efa= efa->next) {

		/* retrieve mapped coordinates */
		v1= mappedcos + 3*(intptr_t)(efa->v1->prev);
		v2= mappedcos + 3*(intptr_t)(efa->v2->prev);
		v3= mappedcos + 3*(intptr_t)(efa->v3->prev);

		co1= (origcos)? origcos + 3*(intptr_t)(efa->v1->prev): efa->v1->co;
		co2= (origcos)? origcos + 3*(intptr_t)(efa->v2->prev): efa->v2->co;
		co3= (origcos)? origcos + 3*(intptr_t)(efa->v3->prev): efa->v3->co;

		if(efa->v2->tmp.p==NULL && efa->v2->f1) {
			set_crazy_vertex_quat(quats, co2, co3, co1, v2, v3, v1);
			efa->v2->tmp.p= (void*)quats;
			quats+= 4;
		}

		if(efa->v4) {
			v4= mappedcos + 3*(intptr_t)(efa->v4->prev);
			co4= (origcos)? origcos + 3*(intptr_t)(efa->v4->prev): efa->v4->co;

			if(efa->v1->tmp.p==NULL && efa->v1->f1) {
				set_crazy_vertex_quat(quats, co1, co2, co4, v1, v2, v4);
				efa->v1->tmp.p= (void*)quats;
				quats+= 4;
			}
			if(efa->v3->tmp.p==NULL && efa->v3->f1) {
				set_crazy_vertex_quat(quats, co3, co4, co2, v3, v4, v2);
				efa->v3->tmp.p= (void*)quats;
				quats+= 4;
			}
			if(efa->v4->tmp.p==NULL && efa->v4->f1) {
				set_crazy_vertex_quat(quats, co4, co1, co3, v4, v1, v3);
				efa->v4->tmp.p= (void*)quats;
				quats+= 4;
			}
		}
		else {
			if(efa->v1->tmp.p==NULL && efa->v1->f1) {
				set_crazy_vertex_quat(quats, co1, co2, co3, v1, v2, v3);
				efa->v1->tmp.p= (void*)quats;
				quats+= 4;
			}
			if(efa->v3->tmp.p==NULL && efa->v3->f1) {
				set_crazy_vertex_quat(quats, co3, co1, co2, v3, v1, v2);
				efa->v3->tmp.p= (void*)quats;
				quats+= 4;
			}
		}
	}

	/* restore abused prev pointer */
	for(prev= NULL, eve= em->verts.first; eve; prev= eve, eve= eve->next)
		eve->prev= prev;

}

void crazyspace_set_quats_mesh(Mesh *me, float *origcos, float *mappedcos, float *quats)
{
	int i;
	MVert *mvert;
	MFace *mface;
	float *v1, *v2, *v3, *v4, *co1, *co2, *co3, *co4;

	mvert= me->mvert;
	for(i=0; i<me->totvert; i++, mvert++)
		mvert->flag&= ~ME_VERT_TMP_TAG;

	/* first store two sets of tangent vectors in vertices, we derive it just from the face-edges */
	mvert= me->mvert;
	mface= me->mface;
	for(i=0; i<me->totface; i++, mface++) {

		/* retrieve mapped coordinates */
		v1= mappedcos + 3*mface->v1;
		v2= mappedcos + 3*mface->v2;
		v3= mappedcos + 3*mface->v3;

		co1= (origcos)? origcos + 3*mface->v1: mvert[mface->v1].co;
		co2= (origcos)? origcos + 3*mface->v2: mvert[mface->v2].co;
		co3= (origcos)? origcos + 3*mface->v3: mvert[mface->v3].co;

		if((mvert[mface->v2].flag&ME_VERT_TMP_TAG)==0) {
			set_crazy_vertex_quat(&quats[mface->v2*4], co2, co3, co1, v2, v3, v1);
			mvert[mface->v2].flag|= ME_VERT_TMP_TAG;
		}

		if(mface->v4) {
			v4= mappedcos + 3*mface->v4;
			co4= (origcos)? origcos + 3*mface->v4: mvert[mface->v4].co;

			if((mvert[mface->v1].flag&ME_VERT_TMP_TAG)==0) {
				set_crazy_vertex_quat(&quats[mface->v1*4], co1, co2, co4, v1, v2, v4);
				mvert[mface->v1].flag|= ME_VERT_TMP_TAG;
			}
			if((mvert[mface->v3].flag&ME_VERT_TMP_TAG)==0) {
				set_crazy_vertex_quat(&quats[mface->v3*4], co3, co4, co2, v3, v4, v2);
				mvert[mface->v3].flag|= ME_VERT_TMP_TAG;
			}
			if((mvert[mface->v4].flag&ME_VERT_TMP_TAG)==0) {
				set_crazy_vertex_quat(&quats[mface->v4*4], co4, co1, co3, v4, v1, v3);
				mvert[mface->v4].flag|= ME_VERT_TMP_TAG;
			}
		}
		else {
			if((mvert[mface->v1].flag&ME_VERT_TMP_TAG)==0) {
				set_crazy_vertex_quat(&quats[mface->v1*4], co1, co2, co3, v1, v2, v3);
				mvert[mface->v1].flag|= ME_VERT_TMP_TAG;
			}
			if((mvert[mface->v3].flag&ME_VERT_TMP_TAG)==0) {
				set_crazy_vertex_quat(&quats[mface->v3*4], co3, co1, co2, v3, v1, v2);
				mvert[mface->v3].flag|= ME_VERT_TMP_TAG;
			}
		}
	}
}

int editmesh_get_first_deform_matrices(Scene *scene, Object *ob, EditMesh *em, float (**deformmats)[3][3], float (**deformcos)[3])
{
	ModifierData *md;
	DerivedMesh *dm;
	int i, a, numleft = 0, numVerts = 0;
	int cageIndex = modifiers_getCageIndex(scene, ob, NULL, 1);
	float (*defmats)[3][3] = NULL, (*deformedVerts)[3] = NULL;

	modifiers_clearErrors(ob);

	dm = NULL;
	md = modifiers_getVirtualModifierList(ob);

	/* compute the deformation matrices and coordinates for the first
	   modifiers with on cage editing that are enabled and support computing
	   deform matrices */
	for(i = 0; md && i <= cageIndex; i++, md = md->next) {
		ModifierTypeInfo *mti = modifierType_getInfo(md->type);

		if(!editmesh_modifier_is_enabled(scene, md, dm))
			continue;

		if(mti->type==eModifierTypeType_OnlyDeform && mti->deformMatricesEM) {
			if(!defmats) {
				dm= editmesh_get_derived(em, NULL);
				deformedVerts= editmesh_get_vertex_cos(em, &numVerts);
				defmats= MEM_callocN(sizeof(*defmats)*numVerts, "defmats");

				for(a=0; a<numVerts; a++)
					unit_m3(defmats[a]);
			}

			mti->deformMatricesEM(md, ob, em, dm, deformedVerts, defmats,
				numVerts);
		}
		else
			break;
	}

	for(; md && i <= cageIndex; md = md->next, i++)
		if(editmesh_modifier_is_enabled(scene, md, dm) && modifier_isCorrectableDeformed(md))
			numleft++;

	if(dm)
		dm->release(dm);

	*deformmats= defmats;
	*deformcos= deformedVerts;

	return numleft;
}

int sculpt_get_first_deform_matrices(Scene *scene, Object *ob, float (**deformmats)[3][3], float (**deformcos)[3])
{
	ModifierData *md;
	DerivedMesh *dm;
	int a, numVerts= 0;
	float (*defmats)[3][3]= NULL, (*deformedVerts)[3]= NULL;
	MultiresModifierData *mmd= get_multires_modifier(scene, ob, 0);
	int has_multires = mmd != NULL && mmd->sculptlvl > 0;
	int numleft= 0;

	if(has_multires) {
		*deformmats= NULL;
		*deformcos= NULL;
		return numleft;
	}

	dm= NULL;
	md= modifiers_getVirtualModifierList(ob);

	for(; md; md= md->next) {
		ModifierTypeInfo *mti= modifierType_getInfo(md->type);

		if(!modifier_isEnabled(scene, md, eModifierMode_Realtime)) continue;

		if(mti->type==eModifierTypeType_OnlyDeform) {
			if(!defmats) {
				Mesh *me= (Mesh*)ob->data;
				dm= mesh_create_derived(me, ob, NULL);
				deformedVerts= mesh_getVertexCos(me, &numVerts);
				defmats= MEM_callocN(sizeof(*defmats)*numVerts, "defmats");

				for(a=0; a<numVerts; a++)
					unit_m3(defmats[a]);
			}

			if(mti->deformMatrices) mti->deformMatrices(md, ob, dm, deformedVerts, defmats, numVerts);
			else break;
		}
	}

	for(; md; md= md->next) {
		ModifierTypeInfo *mti= modifierType_getInfo(md->type);

		if(!modifier_isEnabled(scene, md, eModifierMode_Realtime)) continue;

		if(mti->type==eModifierTypeType_OnlyDeform)
			numleft++;
	}

	if(dm)
		dm->release(dm);

	*deformmats= defmats;
	*deformcos= deformedVerts;

	return numleft;
}

void crazyspace_build_sculpt(Scene *scene, Object *ob, float (**deformmats)[3][3], float (**deformcos)[3])
{
	int totleft= sculpt_get_first_deform_matrices(scene, ob, deformmats, deformcos);

	if(totleft) {
		/* there are deformation modifier which doesn't support deformation matricies
		   calculation. Need additional crazyspace correction */

		float (*deformedVerts)[3]= *deformcos;
		float (*origVerts)[3]= MEM_dupallocN(deformedVerts);
		float *quats= NULL;
		int i, deformed= 0;
		ModifierData *md= modifiers_getVirtualModifierList(ob);
		Mesh *me= (Mesh*)ob->data;

		for(; md; md= md->next) {
			ModifierTypeInfo *mti= modifierType_getInfo(md->type);

			if(!modifier_isEnabled(scene, md, eModifierMode_Realtime)) continue;

			if(mti->type==eModifierTypeType_OnlyDeform) {
				/* skip leading modifiers which have been already
				   handled in sculpt_get_first_deform_matrices */
				if(mti->deformMatrices && !deformed)
					continue;

				mti->deformVerts(md, ob, NULL, deformedVerts, me->totvert, 0, 0);
				deformed= 1;
			}
		}

		quats= MEM_mallocN(me->totvert*sizeof(float)*4, "crazy quats");

		crazyspace_set_quats_mesh(me, (float*)origVerts, (float*)deformedVerts, quats);

		for(i=0; i<me->totvert; i++) {
			float qmat[3][3], tmat[3][3];

			quat_to_mat3(qmat, &quats[i*4]);
			mul_m3_m3m3(tmat, qmat, (*deformmats)[i]);
			copy_m3_m3((*deformmats)[i], tmat);
		}

		MEM_freeN(origVerts);
		MEM_freeN(quats);
	}

	if(!*deformmats) {
		int a, numVerts;
		Mesh *me= (Mesh*)ob->data;

		*deformcos= mesh_getVertexCos(me, &numVerts);
		*deformmats= MEM_callocN(sizeof(*(*deformmats))*numVerts, "defmats");

		for(a=0; a<numVerts; a++)
			unit_m3((*deformmats)[a]);
	}
}
