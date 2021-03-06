/**
 * $Id: view3d_edit.c 34834 2011-02-14 03:15:55Z campbellbarton $
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
 * The Original Code is Copyright (C) 2008 Blender Foundation.
 * All rights reserved.
 *
 *
 * Contributor(s): Blender Foundation
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <float.h>

#include "DNA_armature_types.h"
#include "DNA_object_types.h"
#include "DNA_scene_types.h"
#include "DNA_camera_types.h"

#include "MEM_guardedalloc.h"

#include "BLI_blenlib.h"
#include "BLI_math.h"
#include "BLI_rand.h"
#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_image.h"
#include "BKE_library.h"
#include "BKE_object.h"
#include "BKE_paint.h"
#include "BKE_report.h"
#include "BKE_scene.h"


#include "BIF_gl.h"
#include "BIF_glutil.h"

#include "WM_api.h"
#include "WM_types.h"

#include "RNA_access.h"
#include "RNA_define.h"

#include "ED_particle.h"
#include "ED_screen.h"
#include "ED_transform.h"
#include "ED_mesh.h"
#include "ED_view3d.h"


#include "PIL_time.h" /* smoothview */

#include "view3d_intern.h"	// own include

/* ********************** view3d_edit: view manipulations ********************* */

/* ********************* box view support ***************** */

static void view3d_boxview_clip(ScrArea *sa)
{
	ARegion *ar;
	BoundBox *bb = MEM_callocN(sizeof(BoundBox), "clipbb");
	float clip[6][4];
	float x1= 0.0f, y1= 0.0f, z1= 0.0f, ofs[3] = {0.0f, 0.0f, 0.0f};
	int val;

	/* create bounding box */
	for(ar= sa->regionbase.first; ar; ar= ar->next) {
		if(ar->regiontype==RGN_TYPE_WINDOW) {
			RegionView3D *rv3d= ar->regiondata;

			if(rv3d->viewlock & RV3D_BOXCLIP) {
				if(ELEM(rv3d->view, RV3D_VIEW_TOP, RV3D_VIEW_BOTTOM)) {
					if(ar->winx>ar->winy) x1= rv3d->dist;
					else x1= ar->winx*rv3d->dist/ar->winy;

					if(ar->winx>ar->winy) y1= ar->winy*rv3d->dist/ar->winx;
					else y1= rv3d->dist;
					copy_v2_v2(ofs, rv3d->ofs);
				}
				else if(ELEM(rv3d->view, RV3D_VIEW_FRONT, RV3D_VIEW_BACK)) {
					ofs[2]= rv3d->ofs[2];

					if(ar->winx>ar->winy) z1= ar->winy*rv3d->dist/ar->winx;
					else z1= rv3d->dist;
				}
			}
		}
	}

	for(val=0; val<8; val++) {
		if(ELEM4(val, 0, 3, 4, 7))
			bb->vec[val][0]= -x1 - ofs[0];
		else
			bb->vec[val][0]=  x1 - ofs[0];

		if(ELEM4(val, 0, 1, 4, 5))
			bb->vec[val][1]= -y1 - ofs[1];
		else
			bb->vec[val][1]=  y1 - ofs[1];

		if(val > 3)
			bb->vec[val][2]= -z1 - ofs[2];
		else
			bb->vec[val][2]=  z1 - ofs[2];
	}

	/* normals for plane equations */
	normal_tri_v3( clip[0],bb->vec[0], bb->vec[1], bb->vec[4]);
	normal_tri_v3( clip[1],bb->vec[1], bb->vec[2], bb->vec[5]);
	normal_tri_v3( clip[2],bb->vec[2], bb->vec[3], bb->vec[6]);
	normal_tri_v3( clip[3],bb->vec[3], bb->vec[0], bb->vec[7]);
	normal_tri_v3( clip[4],bb->vec[4], bb->vec[5], bb->vec[6]);
	normal_tri_v3( clip[5],bb->vec[0], bb->vec[2], bb->vec[1]);

	/* then plane equations */
	for(val=0; val<5; val++) {
		clip[val][3]= - clip[val][0]*bb->vec[val][0] - clip[val][1]*bb->vec[val][1] - clip[val][2]*bb->vec[val][2];
	}
	clip[5][3]= - clip[5][0]*bb->vec[0][0] - clip[5][1]*bb->vec[0][1] - clip[5][2]*bb->vec[0][2];

	/* create bounding box */
	for(ar= sa->regionbase.first; ar; ar= ar->next) {
		if(ar->regiontype==RGN_TYPE_WINDOW) {
			RegionView3D *rv3d= ar->regiondata;

			if(rv3d->viewlock & RV3D_BOXCLIP) {
				rv3d->rflag |= RV3D_CLIPPING;
				memcpy(rv3d->clip, clip, sizeof(clip));
				if(rv3d->clipbb) MEM_freeN(rv3d->clipbb);
				rv3d->clipbb= MEM_dupallocN(bb);
			}
		}
	}
	MEM_freeN(bb);
}

/* sync center/zoom view of region to others, for view transforms */
static void view3d_boxview_sync(ScrArea *sa, ARegion *ar)
{
	ARegion *artest;
	RegionView3D *rv3d= ar->regiondata;
	short clip= 0;

	for(artest= sa->regionbase.first; artest; artest= artest->next) {
		if(artest!=ar && artest->regiontype==RGN_TYPE_WINDOW) {
			RegionView3D *rv3dtest= artest->regiondata;

			if(rv3dtest->viewlock) {
				rv3dtest->dist= rv3d->dist;

				if( ELEM(rv3d->view, RV3D_VIEW_TOP, RV3D_VIEW_BOTTOM) ) {
					if( ELEM(rv3dtest->view, RV3D_VIEW_FRONT, RV3D_VIEW_BACK))
						rv3dtest->ofs[0]= rv3d->ofs[0];
					else if( ELEM(rv3dtest->view, RV3D_VIEW_RIGHT, RV3D_VIEW_LEFT))
						rv3dtest->ofs[1]= rv3d->ofs[1];
				}
				else if( ELEM(rv3d->view, RV3D_VIEW_FRONT, RV3D_VIEW_BACK) ) {
					if( ELEM(rv3dtest->view, RV3D_VIEW_TOP, RV3D_VIEW_BOTTOM))
						rv3dtest->ofs[0]= rv3d->ofs[0];
					else if( ELEM(rv3dtest->view, RV3D_VIEW_RIGHT, RV3D_VIEW_LEFT))
						rv3dtest->ofs[2]= rv3d->ofs[2];
				}
				else if( ELEM(rv3d->view, RV3D_VIEW_RIGHT, RV3D_VIEW_LEFT) ) {
					if( ELEM(rv3dtest->view, RV3D_VIEW_TOP, RV3D_VIEW_BOTTOM))
						rv3dtest->ofs[1]= rv3d->ofs[1];
					if( ELEM(rv3dtest->view, RV3D_VIEW_FRONT, RV3D_VIEW_BACK))
						rv3dtest->ofs[2]= rv3d->ofs[2];
				}

				clip |= rv3dtest->viewlock & RV3D_BOXCLIP;

				ED_region_tag_redraw(artest);
			}
		}
	}

	if(clip) {
		view3d_boxview_clip(sa);
	}
}

/* for home, center etc */
void view3d_boxview_copy(ScrArea *sa, ARegion *ar)
{
	ARegion *artest;
	RegionView3D *rv3d= ar->regiondata;
	short clip= 0;

	for(artest= sa->regionbase.first; artest; artest= artest->next) {
		if(artest!=ar && artest->regiontype==RGN_TYPE_WINDOW) {
			RegionView3D *rv3dtest= artest->regiondata;

			if(rv3dtest->viewlock) {
				rv3dtest->dist= rv3d->dist;
				copy_v3_v3(rv3dtest->ofs, rv3d->ofs);
				ED_region_tag_redraw(artest);

				clip |= rv3dtest->viewlock & RV3D_BOXCLIP;
			}
		}
	}

	if(clip) {
		view3d_boxview_clip(sa);
	}
}

/* 'clip' is used to know if our clip setting has changed */
void ED_view3d_quadview_update(ScrArea *sa, ARegion *ar, short do_clip)
{
	ARegion *arsync= NULL;
	RegionView3D *rv3d= ar->regiondata;
	short viewlock;
	/* this function copies flags from the first of the 3 other quadview
	   regions to the 2 other, so it assumes this is the region whose
	   properties are always being edited, weak */
	viewlock= rv3d->viewlock;

	if((viewlock & RV3D_LOCKED)==0)
		viewlock= 0;
	else if((viewlock & RV3D_BOXVIEW)==0) {
		viewlock &= ~RV3D_BOXCLIP;
		do_clip= TRUE;
	}

	for(; ar; ar= ar->prev) {
		if(ar->alignment==RGN_ALIGN_QSPLIT) {
			rv3d= ar->regiondata;
			rv3d->viewlock= viewlock;

			if(do_clip && (viewlock & RV3D_BOXCLIP)==0) {
				rv3d->rflag &= ~RV3D_BOXCLIP;
			}

			/* use arsync so we sync with one of the aligned views below
			 * else the view jumps on changing view settings like 'clip'
			 * since it copies from the perspective view */
			arsync= ar;
		}
	}

	if(rv3d->viewlock & RV3D_BOXVIEW) {
		view3d_boxview_copy(sa, arsync ? arsync : sa->regionbase.last);
	}

	ED_area_tag_redraw(sa);
}

/* ************************** init for view ops **********************************/

typedef struct ViewOpsData {
	ScrArea *sa;
	ARegion *ar;
	RegionView3D *rv3d;

	/* needed for continuous zoom */
	wmTimer *timer;
	double timer_lastdraw;

	float oldquat[4];
	float trackvec[3];
	float reverse, dist0;
	float grid, far;
	short axis_snap; /* view rotate only */

	/* use for orbit selection and auto-dist */
	float ofs[3], dyn_ofs[3];
	short use_dyn_ofs;

	int origx, origy, oldx, oldy;
	int origkey; /* the key that triggered the operator */

} ViewOpsData;

#define TRACKBALLSIZE  (1.1)

static void calctrackballvec(rcti *rect, int mx, int my, float *vec)
{
	float x, y, radius, d, z, t;

	radius= TRACKBALLSIZE;

	/* normalize x and y */
	x= (rect->xmax + rect->xmin)/2 - mx;
	x/= (float)((rect->xmax - rect->xmin)/4);
	y= (rect->ymax + rect->ymin)/2 - my;
	y/= (float)((rect->ymax - rect->ymin)/2);

	d = sqrt(x*x + y*y);
	if (d < radius*M_SQRT1_2)  	/* Inside sphere */
		z = sqrt(radius*radius - d*d);
	else
	{ 			/* On hyperbola */
		t = radius / M_SQRT2;
		z = t*t / d;
	}

	vec[0]= x;
	vec[1]= y;
	vec[2]= -z;		/* yah yah! */
}


static void viewops_data_create(bContext *C, wmOperator *op, wmEvent *event)
{
	static float lastofs[3] = {0,0,0};
	View3D *v3d;
	RegionView3D *rv3d;
	ViewOpsData *vod= MEM_callocN(sizeof(ViewOpsData), "viewops data");

	/* store data */
	op->customdata= vod;
	vod->sa= CTX_wm_area(C);
	vod->ar= CTX_wm_region(C);
	v3d= vod->sa->spacedata.first;
	vod->rv3d= rv3d= vod->ar->regiondata;
	vod->dist0= rv3d->dist;
	copy_qt_qt(vod->oldquat, rv3d->viewquat);
	vod->origx= vod->oldx= event->x;
	vod->origy= vod->oldy= event->y;
	vod->origkey= event->type; /* the key that triggered the operator.  */
	vod->use_dyn_ofs= (U.uiflag & USER_ORBIT_SELECTION) ? 1:0;

	if (vod->use_dyn_ofs) {
		copy_v3_v3(vod->ofs, rv3d->ofs);
		/* If there's no selection, lastofs is unmodified and last value since static */
		calculateTransformCenter(C, V3D_CENTROID, lastofs);
		negate_v3_v3(vod->dyn_ofs, lastofs);
	}
	else if (U.uiflag & USER_ORBIT_ZBUF) {

		view3d_operator_needs_opengl(C); /* needed for zbuf drawing */

		if((vod->use_dyn_ofs=view_autodist(CTX_data_scene(C), vod->ar, v3d, event->mval, vod->dyn_ofs))) {
			if (rv3d->persp==RV3D_PERSP) {
				float my_origin[3]; /* original G.vd->ofs */
				float my_pivot[3]; /* view */
				float dvec[3];

				// locals for dist correction
				float mat[3][3];
				float upvec[3];

				negate_v3_v3(my_origin, rv3d->ofs);				/* ofs is flipped */

				/* Set the dist value to be the distance from this 3d point */
				/* this means youll always be able to zoom into it and panning wont go bad when dist was zero */

				/* remove dist value */
				upvec[0] = upvec[1] = 0;
				upvec[2] = rv3d->dist;
				copy_m3_m4(mat, rv3d->viewinv);

				mul_m3_v3(mat, upvec);
				sub_v3_v3v3(my_pivot, rv3d->ofs, upvec);
				negate_v3(my_pivot);				/* ofs is flipped */

				/* find a new ofs value that is allong the view axis (rather then the mouse location) */
				closest_to_line_v3(dvec, vod->dyn_ofs, my_pivot, my_origin);
				vod->dist0 = rv3d->dist = len_v3v3(my_pivot, dvec);

				negate_v3_v3(rv3d->ofs, dvec);
			}
			negate_v3(vod->dyn_ofs);
			copy_v3_v3(vod->ofs, rv3d->ofs);
		} else {
			vod->ofs[0] = vod->ofs[1] = vod->ofs[2] = 0.0f;
		}
	}

	/* lookup, we dont pass on v3d to prevent confusement */
	vod->grid= v3d->grid;
	vod->far= v3d->far;

	calctrackballvec(&vod->ar->winrct, event->x, event->y, vod->trackvec);

	initgrabz(rv3d, -rv3d->ofs[0], -rv3d->ofs[1], -rv3d->ofs[2]);

	vod->reverse= 1.0f;
	if (rv3d->persmat[2][1] < 0.0f)
		vod->reverse= -1.0f;

	rv3d->rflag |= RV3D_NAVIGATING;
}

static void viewops_data_free(bContext *C, wmOperator *op)
{
	ARegion *ar;
	Paint *p = paint_get_active(CTX_data_scene(C));

	if(op->customdata) {
		ViewOpsData *vod= op->customdata;
		ar= vod->ar;
		vod->rv3d->rflag &= ~RV3D_NAVIGATING;

		if(vod->timer)
			WM_event_remove_timer(CTX_wm_manager(C), vod->timer->win, vod->timer);

		MEM_freeN(vod);
		op->customdata= NULL;
	}
	else {
		ar= CTX_wm_region(C);
	}

	if(p && (p->flags & PAINT_FAST_NAVIGATE))
		ED_region_tag_redraw(ar);
}

/* ************************** viewrotate **********************************/

static const float thres = 0.93f; //cos(20 deg);

#define COS45 0.70710678118654746
#define SIN45 COS45

static float snapquats[39][5] = {
	/*{q0, q1, q3, q4, view}*/
	{COS45, -SIN45, 0.0, 0.0, RV3D_VIEW_FRONT},  //front
	{0.0, 0.0, -SIN45, -SIN45, RV3D_VIEW_BACK}, //back
	{1.0, 0.0, 0.0, 0.0, RV3D_VIEW_TOP},       //top
	{0.0, -1.0, 0.0, 0.0, RV3D_VIEW_BOTTOM},      //bottom
	{0.5, -0.5, -0.5, -0.5, RV3D_VIEW_RIGHT},    //left
	{0.5, -0.5, 0.5, 0.5, RV3D_VIEW_LEFT},      //right

	/* some more 45 deg snaps */
	{0.65328145027160645, -0.65328145027160645, 0.27059805393218994, 0.27059805393218994, 0},
	{0.92387950420379639, 0.0, 0.0, 0.38268342614173889, 0},
	{0.0, -0.92387950420379639, 0.38268342614173889, 0.0, 0},
	{0.35355335474014282, -0.85355335474014282, 0.35355338454246521, 0.14644660055637360, 0},
	{0.85355335474014282, -0.35355335474014282, 0.14644660055637360, 0.35355338454246521, 0},
	{0.49999994039535522, -0.49999994039535522, 0.49999997019767761, 0.49999997019767761, 0},
	{0.27059802412986755, -0.65328145027160645, 0.65328145027160645, 0.27059802412986755, 0},
	{0.65328145027160645, -0.27059802412986755, 0.27059802412986755, 0.65328145027160645, 0},
	{0.27059799432754517, -0.27059799432754517, 0.65328139066696167, 0.65328139066696167, 0},
	{0.38268336653709412, 0.0, 0.0, 0.92387944459915161, 0},
	{0.0, -0.38268336653709412, 0.92387944459915161, 0.0, 0},
	{0.14644658565521240, -0.35355335474014282, 0.85355335474014282, 0.35355335474014282, 0},
	{0.35355335474014282, -0.14644658565521240, 0.35355335474014282, 0.85355335474014282, 0},
	{0.0, 0.0, 0.92387944459915161, 0.38268336653709412, 0},
	{-0.0, 0.0, 0.38268336653709412, 0.92387944459915161, 0},
	{-0.27059802412986755, 0.27059802412986755, 0.65328133106231689, 0.65328133106231689, 0},
	{-0.38268339633941650, 0.0, 0.0, 0.92387938499450684, 0},
	{0.0, 0.38268339633941650, 0.92387938499450684, 0.0, 0},
	{-0.14644658565521240, 0.35355338454246521, 0.85355329513549805, 0.35355332493782043, 0},
	{-0.35355338454246521, 0.14644658565521240, 0.35355332493782043, 0.85355329513549805, 0},
	{-0.49999991059303284, 0.49999991059303284, 0.49999985098838806, 0.49999985098838806, 0},
	{-0.27059799432754517, 0.65328145027160645, 0.65328139066696167, 0.27059799432754517, 0},
	{-0.65328145027160645, 0.27059799432754517, 0.27059799432754517, 0.65328139066696167, 0},
	{-0.65328133106231689, 0.65328133106231689, 0.27059793472290039, 0.27059793472290039, 0},
	{-0.92387932538986206, 0.0, 0.0, 0.38268333673477173, 0},
	{0.0, 0.92387932538986206, 0.38268333673477173, 0.0, 0},
	{-0.35355329513549805, 0.85355329513549805, 0.35355329513549805, 0.14644657075405121, 0},
	{-0.85355329513549805, 0.35355329513549805, 0.14644657075405121, 0.35355329513549805, 0},
	{-0.38268330693244934, 0.92387938499450684, 0.0, 0.0, 0},
	{-0.92387938499450684, 0.38268330693244934, 0.0, 0.0, 0},
	{-COS45, 0.0, 0.0, SIN45, 0},
	{COS45, 0.0, 0.0, SIN45, 0},
	{0.0, 0.0, 0.0, 1.0, 0}
};

enum {
	VIEW_PASS= 0,
	VIEW_APPLY,
	VIEW_CONFIRM
};

/* NOTE: these defines are saved in keymap files, do not change values but just add new ones */
#define VIEW_MODAL_CONFIRM				1 /* used for all view operations */
#define VIEWROT_MODAL_AXIS_SNAP_ENABLE	2
#define VIEWROT_MODAL_AXIS_SNAP_DISABLE	3
#define VIEWROT_MODAL_SWITCH_ZOOM		4
#define VIEWROT_MODAL_SWITCH_MOVE		5
#define VIEWROT_MODAL_SWITCH_ROTATE		6

/* called in transform_ops.c, on each regeneration of keymaps  */
void viewrotate_modal_keymap(wmKeyConfig *keyconf)
{
	static EnumPropertyItem modal_items[] = {
	{VIEW_MODAL_CONFIRM,	"CONFIRM", 0, "Confirm", ""},

	{VIEWROT_MODAL_AXIS_SNAP_ENABLE,	"AXIS_SNAP_ENABLE", 0, "Enable Axis Snap", ""},
	{VIEWROT_MODAL_AXIS_SNAP_DISABLE,	"AXIS_SNAP_DISABLE", 0, "Disable Axis Snap", ""},
		
	{VIEWROT_MODAL_SWITCH_ZOOM, "SWITCH_TO_ZOOM", 0, "Switch to Zoom"},
	{VIEWROT_MODAL_SWITCH_MOVE, "SWITCH_TO_MOVE", 0, "Switch to Move"},

	{0, NULL, 0, NULL, NULL}};

	wmKeyMap *keymap= WM_modalkeymap_get(keyconf, "View3D Rotate Modal");

	/* this function is called for each spacetype, only needs to add map once */
	if(keymap) return;

	keymap= WM_modalkeymap_add(keyconf, "View3D Rotate Modal", modal_items);

	/* items for modal map */
	WM_modalkeymap_add_item(keymap, MIDDLEMOUSE, KM_RELEASE, KM_ANY, 0, VIEW_MODAL_CONFIRM);
	WM_modalkeymap_add_item(keymap, ESCKEY, KM_PRESS, KM_ANY, 0, VIEW_MODAL_CONFIRM);

	WM_modalkeymap_add_item(keymap, LEFTALTKEY, KM_PRESS, KM_ANY, 0, VIEWROT_MODAL_AXIS_SNAP_ENABLE);
	WM_modalkeymap_add_item(keymap, LEFTALTKEY, KM_RELEASE, KM_ANY, 0, VIEWROT_MODAL_AXIS_SNAP_DISABLE);

	/* disabled mode switching for now, can re-implement better, later on
	WM_modalkeymap_add_item(keymap, LEFTMOUSE, KM_PRESS, KM_ANY, 0, VIEWROT_MODAL_SWITCH_ZOOM);
	WM_modalkeymap_add_item(keymap, LEFTCTRLKEY, KM_PRESS, KM_ANY, 0, VIEWROT_MODAL_SWITCH_ZOOM);
	WM_modalkeymap_add_item(keymap, LEFTSHIFTKEY, KM_PRESS, KM_ANY, 0, VIEWROT_MODAL_SWITCH_MOVE);
	*/
	
	/* assign map to operators */
	WM_modalkeymap_assign(keymap, "VIEW3D_OT_rotate");

}

static void viewrotate_apply(ViewOpsData *vod, int x, int y)
{
	RegionView3D *rv3d= vod->rv3d;

	rv3d->view= 0; /* need to reset everytime because of view snapping */

	if (U.flag & USER_TRACKBALL) {
		float phi, si, q1[4], dvec[3], newvec[3];

		calctrackballvec(&vod->ar->winrct, x, y, newvec);

		sub_v3_v3v3(dvec, newvec, vod->trackvec);

		si= sqrt(dvec[0]*dvec[0]+ dvec[1]*dvec[1]+ dvec[2]*dvec[2]);
		si/= (2.0*TRACKBALLSIZE);

		cross_v3_v3v3(q1+1, vod->trackvec, newvec);
		normalize_v3(q1+1);

		/* Allow for rotation beyond the interval
			* [-pi, pi] */
		while (si > 1.0)
			si -= 2.0;

		/* This relation is used instead of
			* phi = asin(si) so that the angle
			* of rotation is linearly proportional
			* to the distance that the mouse is
			* dragged. */
		phi = si * M_PI / 2.0;

		q1[0]= cos(phi);
		mul_v3_fl(q1+1, sin(phi));
		mul_qt_qtqt(rv3d->viewquat, q1, vod->oldquat);

		if (vod->use_dyn_ofs) {
			/* compute the post multiplication quat, to rotate the offset correctly */
			copy_qt_qt(q1, vod->oldquat);
			conjugate_qt(q1);
			mul_qt_qtqt(q1, q1, rv3d->viewquat);

			conjugate_qt(q1); /* conj == inv for unit quat */
			copy_v3_v3(rv3d->ofs, vod->ofs);
			sub_v3_v3(rv3d->ofs, vod->dyn_ofs);
			mul_qt_v3(q1, rv3d->ofs);
			add_v3_v3(rv3d->ofs, vod->dyn_ofs);
		}
	}
	else {
		/* New turntable view code by John Aughey */
		float phi, q1[4];
		float m[3][3];
		float m_inv[3][3];
		float xvec[3] = {1,0,0};
		/* Sensitivity will control how fast the viewport rotates.  0.0035 was
			obtained experimentally by looking at viewport rotation sensitivities
			on other modeling programs. */
		/* Perhaps this should be a configurable user parameter. */
		const float sensitivity = 0.0035;

		/* Get the 3x3 matrix and its inverse from the quaternion */
		quat_to_mat3( m,rv3d->viewquat);
		invert_m3_m3(m_inv,m);

		/* Determine the direction of the x vector (for rotating up and down) */
		/* This can likely be computed directly from the quaternion. */
		mul_m3_v3(m_inv,xvec);

		/* Perform the up/down rotation */
		phi = sensitivity * -(y - vod->oldy);
		q1[0] = cos(phi);
		mul_v3_v3fl(q1+1, xvec, sin(phi));
		mul_qt_qtqt(rv3d->viewquat, rv3d->viewquat, q1);

		if (vod->use_dyn_ofs) {
			conjugate_qt(q1); /* conj == inv for unit quat */
			sub_v3_v3(rv3d->ofs, vod->dyn_ofs);
			mul_qt_v3(q1, rv3d->ofs);
			add_v3_v3(rv3d->ofs, vod->dyn_ofs);
		}

		/* Perform the orbital rotation */
		phi = sensitivity * vod->reverse * (x - vod->oldx);
		q1[0] = cos(phi);
		q1[1] = q1[2] = 0.0;
		q1[3] = sin(phi);
		mul_qt_qtqt(rv3d->viewquat, rv3d->viewquat, q1);

		if (vod->use_dyn_ofs) {
			conjugate_qt(q1);
			sub_v3_v3(rv3d->ofs, vod->dyn_ofs);
			mul_qt_v3(q1, rv3d->ofs);
			add_v3_v3(rv3d->ofs, vod->dyn_ofs);
		}
	}

	/* check for view snap */
	if (vod->axis_snap){
		int i;
		float viewquat_inv[4];
		float zaxis[3]={0,0,1};
		invert_qt_qt(viewquat_inv, rv3d->viewquat);

		mul_qt_v3(viewquat_inv, zaxis);

		for (i = 0 ; i < 39; i++){

			float view = (int)snapquats[i][4];
			float viewquat_inv_test[4];
			float zaxis_test[3]={0,0,1};

			invert_qt_qt(viewquat_inv_test, snapquats[i]);
			mul_qt_v3(viewquat_inv_test, zaxis_test);
			
			if(angle_v3v3(zaxis_test, zaxis) < DEG2RAD(45/3)) {
				/* find the best roll */
				float quat_roll[4], quat_final[4], quat_best[4];
				float viewquat_align[4]; /* viewquat aligned to zaxis_test */
				float viewquat_align_inv[4]; /* viewquat aligned to zaxis_test */
				float best_angle = FLT_MAX;
				int j;

				/* viewquat_align is the original viewquat aligned to the snapped axis
				 * for testing roll */
				rotation_between_vecs_to_quat(viewquat_align, zaxis_test, zaxis);
				normalize_qt(viewquat_align);
				mul_qt_qtqt(viewquat_align, rv3d->viewquat, viewquat_align);
				normalize_qt(viewquat_align);
				invert_qt_qt(viewquat_align_inv, viewquat_align);

				/* find best roll */
				for(j= 0; j<8; j++) {
					float angle;
					float xaxis1[3]={1,0,0};
					float xaxis2[3]={1,0,0};
					float quat_final_inv[4];

					axis_angle_to_quat(quat_roll, zaxis_test, j * DEG2RAD(45.0));
					normalize_qt(quat_roll);

					mul_qt_qtqt(quat_final, snapquats[i], quat_roll);
					normalize_qt(quat_final);
					
					/* compare 2 vector angles to find the least roll */
					invert_qt_qt(quat_final_inv, quat_final);
					mul_qt_v3(viewquat_align_inv, xaxis1);
					mul_qt_v3(quat_final_inv, xaxis2);
					angle= angle_v3v3(xaxis1, xaxis2);

					if(angle <= best_angle) {
						best_angle= angle;
						copy_qt_qt(quat_best, quat_final);
						if(j) view= 0; /* view grid assumes certain up axis */
					}
				}

				copy_qt_qt(rv3d->viewquat, quat_best);
				rv3d->view= view; /* if we snap to a rolled camera the grid is invalid */

				break;
			}
		}
	}
	vod->oldx= x;
	vod->oldy= y;

	/* avoid precision loss over time */
	normalize_qt(rv3d->viewquat);

	ED_region_tag_redraw(vod->ar);
}

static int viewrotate_modal(bContext *C, wmOperator *op, wmEvent *event)
{
	ViewOpsData *vod= op->customdata;
	short event_code= VIEW_PASS;

	/* execute the events */
	if(event->type==MOUSEMOVE) {
		event_code= VIEW_APPLY;
	}
	else if(event->type==EVT_MODAL_MAP) {
		switch (event->val) {
			case VIEW_MODAL_CONFIRM:
				event_code= VIEW_CONFIRM;
				break;
			case VIEWROT_MODAL_AXIS_SNAP_ENABLE:
				vod->axis_snap= TRUE;
				event_code= VIEW_APPLY;
				break;
			case VIEWROT_MODAL_AXIS_SNAP_DISABLE:
				vod->axis_snap= FALSE;
				event_code= VIEW_APPLY;
				break;
			case VIEWROT_MODAL_SWITCH_ZOOM:
				WM_operator_name_call(C, "VIEW3D_OT_zoom", WM_OP_INVOKE_DEFAULT, NULL);
				event_code= VIEW_CONFIRM;
				break;
			case VIEWROT_MODAL_SWITCH_MOVE:
				WM_operator_name_call(C, "VIEW3D_OT_move", WM_OP_INVOKE_DEFAULT, NULL);
				event_code= VIEW_CONFIRM;
				break;
		}
	}
	else if(event->type==vod->origkey && event->val==KM_RELEASE) {
		event_code= VIEW_CONFIRM;
	}

	if(event_code==VIEW_APPLY) {
		viewrotate_apply(vod, event->x, event->y);
	}
	else if (event_code==VIEW_CONFIRM) {
		request_depth_update(vod->rv3d);
		viewops_data_free(C, op);

		return OPERATOR_FINISHED;
	}

	return OPERATOR_RUNNING_MODAL;
}

static int viewrotate_invoke(bContext *C, wmOperator *op, wmEvent *event)
{
	ViewOpsData *vod;
	RegionView3D *rv3d;

	/* makes op->customdata */
	viewops_data_create(C, op, event);
	vod= op->customdata;
	rv3d= vod->rv3d;

	if(rv3d->viewlock) { /* poll should check but in some cases fails, see poll func for details */
		viewops_data_free(C, op);
		return OPERATOR_PASS_THROUGH;
	}

	/* switch from camera view when: */
	if(rv3d->persp != RV3D_PERSP) {

		if (U.uiflag & USER_AUTOPERSP) {
			rv3d->persp= RV3D_PERSP;
		}
		else if(rv3d->persp==RV3D_CAMOB) {

			/* changed since 2.4x, use the camera view */
			View3D *v3d = vod->sa->spacedata.first;

			if(v3d->camera) {
				view3d_settings_from_ob(v3d->camera, rv3d->ofs, rv3d->viewquat, &rv3d->dist, NULL);
			}

			if(rv3d->persp==RV3D_CAMOB) {
				rv3d->persp= rv3d->lpersp;
			}
		}
		ED_region_tag_redraw(vod->ar);
	}
	
	if (event->type == MOUSEPAN) {
		viewrotate_apply(vod, event->prevx, event->prevy);
		request_depth_update(rv3d);
		
		viewops_data_free(C, op);
		
		return OPERATOR_FINISHED;
	}
	else if (event->type == MOUSEROTATE) {
		/* MOUSEROTATE performs orbital rotation, so y axis delta is set to 0 */
		viewrotate_apply(vod, event->prevx, event->y);
		request_depth_update(rv3d);
		
		viewops_data_free(C, op);
		
		return OPERATOR_FINISHED;
	}
	else {		
		/* add temp handler */
		WM_event_add_modal_handler(C, op);

		return OPERATOR_RUNNING_MODAL;
	}
}

static int view3d_camera_active_poll(bContext *C)
{
	if(ED_operator_view3d_active(C)) {
		RegionView3D *rv3d= CTX_wm_region_view3d(C);
		if(rv3d && rv3d->persp==RV3D_CAMOB) {
			return 1;
		}
	}

	return 0;
}

void VIEW3D_OT_rotate(wmOperatorType *ot)
{

	/* identifiers */
	ot->name= "Rotate view";
	ot->description = "Rotate the view";
	ot->idname= "VIEW3D_OT_rotate";

	/* api callbacks */
	ot->invoke= viewrotate_invoke;
	ot->modal= viewrotate_modal;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= OPTYPE_BLOCKING|OPTYPE_GRAB_POINTER;
}

/* ************************ viewmove ******************************** */


/* NOTE: these defines are saved in keymap files, do not change values but just add new ones */

/* called in transform_ops.c, on each regeneration of keymaps  */
void viewmove_modal_keymap(wmKeyConfig *keyconf)
{
	static EnumPropertyItem modal_items[] = {
	{VIEW_MODAL_CONFIRM,	"CONFIRM", 0, "Confirm", ""},
		
	{VIEWROT_MODAL_SWITCH_ZOOM, "SWITCH_TO_ZOOM", 0, "Switch to Zoom"},
	{VIEWROT_MODAL_SWITCH_ROTATE, "SWITCH_TO_ROTATE", 0, "Switch to Rotate"},

	{0, NULL, 0, NULL, NULL}};

	wmKeyMap *keymap= WM_modalkeymap_get(keyconf, "View3D Move Modal");

	/* this function is called for each spacetype, only needs to add map once */
	if(keymap) return;

	keymap= WM_modalkeymap_add(keyconf, "View3D Move Modal", modal_items);

	/* items for modal map */
	WM_modalkeymap_add_item(keymap, MIDDLEMOUSE, KM_RELEASE, KM_ANY, 0, VIEW_MODAL_CONFIRM);
	WM_modalkeymap_add_item(keymap, ESCKEY, KM_PRESS, KM_ANY, 0, VIEW_MODAL_CONFIRM);

	/* disabled mode switching for now, can re-implement better, later on
	WM_modalkeymap_add_item(keymap, LEFTMOUSE, KM_PRESS, KM_ANY, 0, VIEWROT_MODAL_SWITCH_ZOOM);
	WM_modalkeymap_add_item(keymap, LEFTCTRLKEY, KM_PRESS, KM_ANY, 0, VIEWROT_MODAL_SWITCH_ZOOM);
	WM_modalkeymap_add_item(keymap, LEFTSHIFTKEY, KM_RELEASE, KM_ANY, 0, VIEWROT_MODAL_SWITCH_ROTATE);
	*/
	
	/* assign map to operators */
	WM_modalkeymap_assign(keymap, "VIEW3D_OT_move");
}


static void viewmove_apply(ViewOpsData *vod, int x, int y)
{
	if(vod->rv3d->persp==RV3D_CAMOB) {
		float zoomfac= (M_SQRT2 + vod->rv3d->camzoom/50.0);
		zoomfac= (zoomfac*zoomfac)*0.5;

		vod->rv3d->camdx += (vod->oldx - x)/(vod->ar->winx * zoomfac);
		vod->rv3d->camdy += (vod->oldy - y)/(vod->ar->winy * zoomfac);
		CLAMP(vod->rv3d->camdx, -1.0f, 1.0f);
		CLAMP(vod->rv3d->camdy, -1.0f, 1.0f);
// XXX		preview3d_event= 0;
	}
	else {
		float dvec[3];

		window_to_3d_delta(vod->ar, dvec, x-vod->oldx, y-vod->oldy);
		add_v3_v3(vod->rv3d->ofs, dvec);

		if(vod->rv3d->viewlock & RV3D_BOXVIEW)
			view3d_boxview_sync(vod->sa, vod->ar);
	}

	vod->oldx= x;
	vod->oldy= y;

	ED_region_tag_redraw(vod->ar);
}


static int viewmove_modal(bContext *C, wmOperator *op, wmEvent *event)
{

	ViewOpsData *vod= op->customdata;
	short event_code= VIEW_PASS;

	/* execute the events */
	if(event->type==MOUSEMOVE) {
		event_code= VIEW_APPLY;
	}
	else if(event->type==EVT_MODAL_MAP) {
		switch (event->val) {
			case VIEW_MODAL_CONFIRM:
				event_code= VIEW_CONFIRM;
				break;
			case VIEWROT_MODAL_SWITCH_ZOOM:
				WM_operator_name_call(C, "VIEW3D_OT_zoom", WM_OP_INVOKE_DEFAULT, NULL);
				event_code= VIEW_CONFIRM;
				break;
			case VIEWROT_MODAL_SWITCH_ROTATE:
				WM_operator_name_call(C, "VIEW3D_OT_rotate", WM_OP_INVOKE_DEFAULT, NULL);
				event_code= VIEW_CONFIRM;
				break;
		}
	}
	else if(event->type==vod->origkey && event->val==KM_RELEASE) {
		event_code= VIEW_CONFIRM;
	}

	if(event_code==VIEW_APPLY) {
		viewmove_apply(vod, event->x, event->y);
	}
	else if (event_code==VIEW_CONFIRM) {
		request_depth_update(vod->rv3d);

		viewops_data_free(C, op);

		return OPERATOR_FINISHED;
	}

	return OPERATOR_RUNNING_MODAL;
}

static int viewmove_invoke(bContext *C, wmOperator *op, wmEvent *event)
{
	/* makes op->customdata */
	viewops_data_create(C, op, event);

	if (event->type == MOUSEPAN) {
		ViewOpsData *vod= op->customdata;
		viewmove_apply(vod, event->prevx, event->prevy);
		request_depth_update(vod->rv3d);
		
		viewops_data_free(C, op);		
		
		return OPERATOR_FINISHED;
	}
	else {
		/* add temp handler */
		WM_event_add_modal_handler(C, op);

		return OPERATOR_RUNNING_MODAL;
	}
}

void VIEW3D_OT_move(wmOperatorType *ot)
{

	/* identifiers */
	ot->name= "Move view";
	ot->description = "Move the view";
	ot->idname= "VIEW3D_OT_move";

	/* api callbacks */
	ot->invoke= viewmove_invoke;
	ot->modal= viewmove_modal;
	ot->poll= ED_operator_view3d_active;

	/* flags */
	ot->flag= OPTYPE_BLOCKING|OPTYPE_GRAB_POINTER;
}

/* ************************ viewzoom ******************************** */

/* called in transform_ops.c, on each regeneration of keymaps  */
void viewzoom_modal_keymap(wmKeyConfig *keyconf)
{
	static EnumPropertyItem modal_items[] = {
	{VIEW_MODAL_CONFIRM,	"CONFIRM", 0, "Confirm", ""},
		
	{VIEWROT_MODAL_SWITCH_ROTATE, "SWITCH_TO_ROTATE", 0, "Switch to Rotate"},
	{VIEWROT_MODAL_SWITCH_MOVE, "SWITCH_TO_MOVE", 0, "Switch to Move"},

	{0, NULL, 0, NULL, NULL}};

	wmKeyMap *keymap= WM_modalkeymap_get(keyconf, "View3D Zoom Modal");

	/* this function is called for each spacetype, only needs to add map once */
	if(keymap) return;

	keymap= WM_modalkeymap_add(keyconf, "View3D Zoom Modal", modal_items);

	/* items for modal map */
	WM_modalkeymap_add_item(keymap, MIDDLEMOUSE, KM_RELEASE, KM_ANY, 0, VIEW_MODAL_CONFIRM);
	WM_modalkeymap_add_item(keymap, ESCKEY, KM_PRESS, KM_ANY, 0, VIEW_MODAL_CONFIRM);

	/* disabled mode switching for now, can re-implement better, later on
	WM_modalkeymap_add_item(keymap, LEFTMOUSE, KM_RELEASE, KM_ANY, 0, VIEWROT_MODAL_SWITCH_ROTATE);
	WM_modalkeymap_add_item(keymap, LEFTCTRLKEY, KM_RELEASE, KM_ANY, 0, VIEWROT_MODAL_SWITCH_ROTATE);
	WM_modalkeymap_add_item(keymap, LEFTSHIFTKEY, KM_PRESS, KM_ANY, 0, VIEWROT_MODAL_SWITCH_MOVE);
	 */
	
	/* assign map to operators */
	WM_modalkeymap_assign(keymap, "VIEW3D_OT_zoom");
}

static void view_zoom_mouseloc(ARegion *ar, float dfac, int mx, int my)
{
	RegionView3D *rv3d= ar->regiondata;

	if(U.uiflag & USER_ZOOM_TO_MOUSEPOS) {
		float dvec[3];
		float tvec[3];
		float tpos[3];
		float new_dist;
		short vb[2], mouseloc[2];

		mouseloc[0]= mx - ar->winrct.xmin;
		mouseloc[1]= my - ar->winrct.ymin;

		/* find the current window width and height */
		vb[0] = ar->winx;
		vb[1] = ar->winy;

		negate_v3_v3(tpos, rv3d->ofs);

		/* Project cursor position into 3D space */
		initgrabz(rv3d, tpos[0], tpos[1], tpos[2]);
		window_to_3d_delta(ar, dvec, mouseloc[0]-vb[0]/2, mouseloc[1]-vb[1]/2);

		/* Calculate view target position for dolly */
		add_v3_v3v3(tvec, tpos, dvec);
		negate_v3(tvec);

		/* Offset to target position and dolly */
		new_dist = rv3d->dist * dfac;

		copy_v3_v3(rv3d->ofs, tvec);
		rv3d->dist = new_dist;

		/* Calculate final offset */
		madd_v3_v3v3fl(rv3d->ofs, tvec, dvec, dfac);
	} else {
		rv3d->dist *= dfac;
	}
}


static void viewzoom_apply(ViewOpsData *vod, int x, int y, short viewzoom)
{
	float zfac=1.0;

	if(viewzoom==USER_ZOOM_CONT) {
		double time= PIL_check_seconds_timer();
		float time_step= (float)(time - vod->timer_lastdraw);

		// oldstyle zoom
		zfac = 1.0f + (((float)(vod->origx - x + vod->origy - y)/20.0) * time_step);
		vod->timer_lastdraw= time;
	}
	else if(viewzoom==USER_ZOOM_SCALE) {
		int ctr[2], len1, len2;
		// method which zooms based on how far you move the mouse

		ctr[0] = (vod->ar->winrct.xmax + vod->ar->winrct.xmin)/2;
		ctr[1] = (vod->ar->winrct.ymax + vod->ar->winrct.ymin)/2;

		len1 = (int)sqrt((ctr[0] - x)*(ctr[0] - x) + (ctr[1] - y)*(ctr[1] - y)) + 5;
		len2 = (int)sqrt((ctr[0] - vod->origx)*(ctr[0] - vod->origx) + (ctr[1] - vod->origy)*(ctr[1] - vod->origy)) + 5;

		zfac = vod->dist0 * ((float)len2/len1) / vod->rv3d->dist;
	}
	else {	/* USER_ZOOM_DOLLY */
		float len1, len2;
		
		if (U.uiflag & USER_ZOOM_DOLLY_HORIZ) {
			len1 = (vod->ar->winrct.xmax - x) + 5;
			len2 = (vod->ar->winrct.xmax - vod->origx) + 5;
		}
		else {
			len1 = (vod->ar->winrct.ymax - y) + 5;
			len2 = (vod->ar->winrct.ymax - vod->origy) + 5;
		}
		if (U.uiflag & USER_ZOOM_INVERT)
			SWAP(float, len1, len2);
		
		zfac = vod->dist0 * (2.0*((len2/len1)-1.0) + 1.0) / vod->rv3d->dist;
	}

	if(zfac != 1.0 && zfac*vod->rv3d->dist > 0.001*vod->grid &&
				zfac*vod->rv3d->dist < 10.0*vod->far)
		view_zoom_mouseloc(vod->ar, zfac, vod->oldx, vod->oldy);


	if ((U.uiflag & USER_ORBIT_ZBUF) && (viewzoom==USER_ZOOM_CONT) && (vod->rv3d->persp==RV3D_PERSP)) {
		float upvec[3], mat[3][3];

		/* Secret apricot feature, translate the view when in continues mode */
		upvec[0] = upvec[1] = 0.0f;
		upvec[2] = (vod->dist0 - vod->rv3d->dist) * vod->grid;
		vod->rv3d->dist = vod->dist0;
		copy_m3_m4(mat, vod->rv3d->viewinv);
		mul_m3_v3(mat, upvec);
		add_v3_v3(vod->rv3d->ofs, upvec);
	} else {
		/* these limits were in old code too */
		if(vod->rv3d->dist<0.001*vod->grid) vod->rv3d->dist= 0.001*vod->grid;
		if(vod->rv3d->dist>10.0*vod->far) vod->rv3d->dist=10.0*vod->far;
	}

// XXX	if(vod->rv3d->persp==RV3D_ORTHO || vod->rv3d->persp==RV3D_CAMOB) preview3d_event= 0;

	if(vod->rv3d->viewlock & RV3D_BOXVIEW)
		view3d_boxview_sync(vod->sa, vod->ar);

	ED_region_tag_redraw(vod->ar);
}


static int viewzoom_modal(bContext *C, wmOperator *op, wmEvent *event)
{
	ViewOpsData *vod= op->customdata;
	short event_code= VIEW_PASS;

	/* execute the events */
	if (event->type == TIMER && event->customdata == vod->timer) {
		/* continuous zoom */
		event_code= VIEW_APPLY;
	}
	else if(event->type==MOUSEMOVE) {
		event_code= VIEW_APPLY;
	}
	else if(event->type==EVT_MODAL_MAP) {
		switch (event->val) {
			case VIEW_MODAL_CONFIRM:
				event_code= VIEW_CONFIRM;
				break;
			case VIEWROT_MODAL_SWITCH_MOVE:
				WM_operator_name_call(C, "VIEW3D_OT_move", WM_OP_INVOKE_DEFAULT, NULL);
				event_code= VIEW_CONFIRM;
				break;
			case VIEWROT_MODAL_SWITCH_ROTATE:
				WM_operator_name_call(C, "VIEW3D_OT_rotate", WM_OP_INVOKE_DEFAULT, NULL);
				event_code= VIEW_CONFIRM;
				break;
		}
	}
	else if(event->type==vod->origkey && event->val==KM_RELEASE) {
		event_code= VIEW_CONFIRM;
	}

	if(event_code==VIEW_APPLY) {
		viewzoom_apply(vod, event->x, event->y, U.viewzoom);
	}
	else if (event_code==VIEW_CONFIRM) {
		request_depth_update(vod->rv3d);
		viewops_data_free(C, op);

		return OPERATOR_FINISHED;
	}

	return OPERATOR_RUNNING_MODAL;
}

static int viewzoom_exec(bContext *C, wmOperator *op)
{
	View3D *v3d;
	RegionView3D *rv3d;
	ScrArea *sa;
	ARegion *ar;

	int delta= RNA_int_get(op->ptr, "delta");
	int mx, my;

	if(op->customdata) {
		ViewOpsData *vod= op->customdata;

		sa= vod->sa;
		ar= vod->ar;
	}
	else {
		sa= CTX_wm_area(C);
		ar= CTX_wm_region(C);
	}

	v3d= sa->spacedata.first;
	rv3d= ar->regiondata;

	mx= RNA_property_is_set(op->ptr, "mx") ? RNA_int_get(op->ptr, "mx") : ar->winx / 2;
	my= RNA_property_is_set(op->ptr, "my") ? RNA_int_get(op->ptr, "my") : ar->winy / 2;

	if(delta < 0) {
		/* this min and max is also in viewmove() */
		if(rv3d->persp==RV3D_CAMOB) {
			rv3d->camzoom-= 10;
			if(rv3d->camzoom < RV3D_CAMZOOM_MIN) rv3d->camzoom= RV3D_CAMZOOM_MIN;
		}
		else if(rv3d->dist<10.0*v3d->far) {
			view_zoom_mouseloc(ar, 1.2f, mx, my);
		}
	}
	else {
		if(rv3d->persp==RV3D_CAMOB) {
			rv3d->camzoom+= 10;
			if(rv3d->camzoom > RV3D_CAMZOOM_MAX) rv3d->camzoom= RV3D_CAMZOOM_MAX;
		}
		else if(rv3d->dist> 0.001*v3d->grid) {
			view_zoom_mouseloc(ar, .83333f, mx, my);
		}
	}

	if(rv3d->viewlock & RV3D_BOXVIEW)
		view3d_boxview_sync(sa, ar);

	request_depth_update(rv3d);
	ED_region_tag_redraw(ar);

	viewops_data_free(C, op);

	return OPERATOR_FINISHED;
}

static int viewzoom_invoke(bContext *C, wmOperator *op, wmEvent *event)
{
	/* if one or the other zoom position aren't set, set from event */
	if (!RNA_property_is_set(op->ptr, "mx") || !RNA_property_is_set(op->ptr, "my"))
	{
		RNA_int_set(op->ptr, "mx", event->x);
		RNA_int_set(op->ptr, "my", event->y);
	}

	if(RNA_property_is_set(op->ptr, "delta")) {
		/* makes op->customdata */
		viewops_data_create(C, op, event);
		viewzoom_exec(C, op);
	}
	else {
		ViewOpsData *vod;

		/* makes op->customdata */
		viewops_data_create(C, op, event);

		vod= op->customdata;

		if (event->type == MOUSEZOOM) {
			if (U.uiflag & USER_ZOOM_INVERT) /* Bypass Zoom invert flag */
				SWAP(int, event->x, event->prevx);

			if (U.uiflag & USER_ZOOM_DOLLY_HORIZ) {
				vod->origx = vod->oldx = event->x;
				viewzoom_apply(vod, event->prevx, event->prevy, USER_ZOOM_DOLLY);
			}
			else {
				
				/* Set y move = x move as MOUSEZOOM uses only x axis to pass magnification value */
				vod->origy = vod->oldy = vod->origy + event->x - event->prevx;
				viewzoom_apply(vod, event->prevx, event->prevy, USER_ZOOM_DOLLY);
			}
			request_depth_update(vod->rv3d);
			
			viewops_data_free(C, op);
			return OPERATOR_FINISHED;
		}
		else {
			if(U.viewzoom == USER_ZOOM_CONT) {
				/* needs a timer to continue redrawing */
				vod->timer= WM_event_add_timer(CTX_wm_manager(C), CTX_wm_window(C), TIMER, 0.01f);
				vod->timer_lastdraw= PIL_check_seconds_timer();
			}

			/* add temp handler */
			WM_event_add_modal_handler(C, op);

			return OPERATOR_RUNNING_MODAL;
		}
	}
	return OPERATOR_FINISHED;
}


void VIEW3D_OT_zoom(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "Zoom view";
	ot->description = "Zoom in/out in the view";
	ot->idname= "VIEW3D_OT_zoom";

	/* api callbacks */
	ot->invoke= viewzoom_invoke;
	ot->exec= viewzoom_exec;
	ot->modal= viewzoom_modal;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= OPTYPE_BLOCKING|OPTYPE_GRAB_POINTER;

	RNA_def_int(ot->srna, "delta", 0, INT_MIN, INT_MAX, "Delta", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "mx", 0, 0, INT_MAX, "Zoom Position X", "", 0, INT_MAX);
	RNA_def_int(ot->srna, "my", 0, 0, INT_MAX, "Zoom Position Y", "", 0, INT_MAX);
}

static int view3d_all_exec(bContext *C, wmOperator *op) /* was view3d_home() in 2.4x */
{
	ARegion *ar= CTX_wm_region(C);
	View3D *v3d = CTX_wm_view3d(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	Scene *scene= CTX_data_scene(C);
	Base *base;
	float *curs;

	int center= RNA_boolean_get(op->ptr, "center");

	float size, min[3], max[3], afm[3];
	int ok= 1, onedone=0;

	if(center) {
		/* in 2.4x this also move the cursor to (0, 0, 0) (with shift+c). */
		curs= give_cursor(scene, v3d);
		zero_v3(min);
		zero_v3(max);
		zero_v3(curs);
	}
	else {
		INIT_MINMAX(min, max);
	}

	for(base= scene->base.first; base; base= base->next) {
		if(BASE_VISIBLE(v3d, base)) {
			onedone= 1;
			minmax_object(base->object, min, max);
		}
	}
	if(!onedone) {
		ED_region_tag_redraw(ar);
		/* TODO - should this be cancel?
		 * I think no, because we always move the cursor, with or without
		 * object, but in this case there is no change in the scene,
		 * only the cursor so I choice a ED_region_tag like
		 * smooth_view do for the center_cursor.
		 * See bug #22640
		 */
		return OPERATOR_FINISHED;
	}

	sub_v3_v3v3(afm, max, min);
	size= 0.7f*MAX3(afm[0], afm[1], afm[2]);
	if(size==0.0) ok= 0;

	if(ok) {
		float new_dist;
		float new_ofs[3];

		new_dist = size;
		new_ofs[0]= -(min[0]+max[0])/2.0f;
		new_ofs[1]= -(min[1]+max[1])/2.0f;
		new_ofs[2]= -(min[2]+max[2])/2.0f;

		// correction for window aspect ratio
		if(ar->winy>2 && ar->winx>2) {
			size= (float)ar->winx/(float)ar->winy;
			if(size<1.0) size= 1.0f/size;
			new_dist*= size;
		}

		if (rv3d->persp==RV3D_CAMOB) {
			rv3d->persp= RV3D_PERSP;
			smooth_view(C, v3d->camera, NULL, new_ofs, NULL, &new_dist, NULL);
		}
		else {
			smooth_view(C, NULL, NULL, new_ofs, NULL, &new_dist, NULL);
		}
	}
// XXX	BIF_view3d_previewrender_signal(curarea, PR_DBASE|PR_DISPRECT);

	WM_event_add_notifier(C, NC_SPACE|ND_SPACE_VIEW3D, v3d);

	return OPERATOR_FINISHED;
}


void VIEW3D_OT_view_all(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "View All";
	ot->description = "View all objects in scene";
	ot->idname= "VIEW3D_OT_view_all";

	/* api callbacks */
	ot->exec= view3d_all_exec;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;

	RNA_def_boolean(ot->srna, "center", 0, "Center", "");
}


static int viewselected_exec(bContext *C, wmOperator *UNUSED(op)) /* like a localview without local!, was centerview() in 2.4x */
{
	ARegion *ar= CTX_wm_region(C);
	View3D *v3d = CTX_wm_view3d(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	Scene *scene= CTX_data_scene(C);
	Object *ob= OBACT;
	Object *obedit= CTX_data_edit_object(C);
	float size, min[3], max[3], afm[3];
	int ok=0, ok_dist=1;

	/* SMOOTHVIEW */
	float new_ofs[3];
	float new_dist;

	INIT_MINMAX(min, max);

	if (ob && ob->mode & OB_MODE_WEIGHT_PAINT) {
		/* hardcoded exception, we look for the one selected armature */
		/* this is weak code this way, we should make a generic active/selection callback interface once... */
		Base *base;
		for(base=scene->base.first; base; base= base->next) {
			if(TESTBASELIB(v3d, base)) {
				if(base->object->type==OB_ARMATURE)
					if(base->object->mode & OB_MODE_POSE)
						break;
			}
		}
		if(base)
			ob= base->object;
	}


	if(obedit) {
		ok = minmax_verts(obedit, min, max);	/* only selected */
	}
	else if(ob && (ob->mode & OB_MODE_POSE)) {
		if(ob->pose) {
			bArmature *arm= ob->data;
			bPoseChannel *pchan;
			float vec[3];

			for(pchan= ob->pose->chanbase.first; pchan; pchan= pchan->next) {
				if(pchan->bone->flag & BONE_SELECTED) {
					if(pchan->bone->layer & arm->layer) {
						bPoseChannel *pchan_tx= pchan->custom_tx ? pchan->custom_tx : pchan;
						ok= 1;
						mul_v3_m4v3(vec, ob->obmat, pchan_tx->pose_head);
						DO_MINMAX(vec, min, max);
						mul_v3_m4v3(vec, ob->obmat, pchan_tx->pose_tail);
						DO_MINMAX(vec, min, max);
					}
				}
			}
		}
	}
	else if (paint_facesel_test(ob)) {
		ok= paintface_minmax(ob, min, max);
	}
	else if (ob && (ob->mode & OB_MODE_PARTICLE_EDIT)) {
		ok= PE_minmax(scene, min, max);
	}
	else {
		Base *base= FIRSTBASE;
		while(base) {
			if(TESTBASE(v3d, base))  {

				/* account for duplis */
				if (minmax_object_duplis(scene, base->object, min, max)==0)
					minmax_object(base->object, min, max); /* use if duplis not found */

				ok= 1;
			}
			base= base->next;
		}
	}

	if(ok==0) return OPERATOR_FINISHED;

	sub_v3_v3v3(afm, max, min);
	size= MAX3(afm[0], afm[1], afm[2]);

	if(rv3d->persp==RV3D_ORTHO) {
		if(size < 0.0001f) { /* if its a sinble point. dont even re-scale */
			ok_dist= 0;
		}
		else {
			/* perspective should be a bit farther away to look nice */
			size*= 0.7f;
		}
	}
	else {
		if(size <= v3d->near*1.5f) {
			size= v3d->near*1.5f;
		}
	}

	add_v3_v3v3(new_ofs, min, max);
	mul_v3_fl(new_ofs, -0.5f);

	new_dist = size;

	/* correction for window aspect ratio */
	if(ar->winy>2 && ar->winx>2) {
		size= (float)ar->winx/(float)ar->winy;
		if(size<1.0f) size= 1.0f/size;
		new_dist*= size;
	}

	if (rv3d->persp==RV3D_CAMOB) {
		rv3d->persp= RV3D_PERSP;
		smooth_view(C, v3d->camera, NULL, new_ofs, NULL, &new_dist, NULL);
	}
	else {
		smooth_view(C, NULL, NULL, new_ofs, NULL, ok_dist ? &new_dist : NULL, NULL);
	}

	/* smooth view does viewlock RV3D_BOXVIEW copy */
	
// XXX	BIF_view3d_previewrender_signal(curarea, PR_DBASE|PR_DISPRECT);

	return OPERATOR_FINISHED;
}

void VIEW3D_OT_view_selected(wmOperatorType *ot)
{

	/* identifiers */
	ot->name= "View Selected";
	ot->description = "Move the view to the selection center";
	ot->idname= "VIEW3D_OT_view_selected";

	/* api callbacks */
	ot->exec= viewselected_exec;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;
}

static int viewcenter_cursor_exec(bContext *C, wmOperator *UNUSED(op))
{
	View3D *v3d = CTX_wm_view3d(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	Scene *scene= CTX_data_scene(C);
	
	if (rv3d) {
		/* non camera center */
		float new_ofs[3];
		negate_v3_v3(new_ofs, give_cursor(scene, v3d));
		smooth_view(C, NULL, NULL, new_ofs, NULL, NULL, NULL);
		
		/* smooth view does viewlock RV3D_BOXVIEW copy */
	}
	
	return OPERATOR_FINISHED;
}

void VIEW3D_OT_view_center_cursor(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "Center View to Cursor";
	ot->description= "Centers the view so that the cursor is in the middle of the view";
	ot->idname= "VIEW3D_OT_view_center_cursor";
	
	/* api callbacks */
	ot->exec= viewcenter_cursor_exec;
	ot->poll= ED_operator_view3d_active;
	
	/* flags */
	ot->flag= 0;
}

static int view3d_center_camera_exec(bContext *C, wmOperator *UNUSED(op)) /* was view3d_home() in 2.4x */
{
	RegionView3D *rv3d= CTX_wm_region_view3d(C);

	rv3d->camdx= rv3d->camdy= 0.0f;

	WM_event_add_notifier(C, NC_SPACE|ND_SPACE_VIEW3D, CTX_wm_view3d(C));

	return OPERATOR_FINISHED;
}

void VIEW3D_OT_view_center_camera(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "View Camera Center";
	ot->description = "Center the camera view";
	ot->idname= "VIEW3D_OT_view_center_camera";

	/* api callbacks */
	ot->exec= view3d_center_camera_exec;
	ot->poll= view3d_camera_active_poll;

	/* flags */
	ot->flag= 0;
}

/* ********************* Set render border operator ****************** */

static int render_border_exec(bContext *C, wmOperator *op)
{
	View3D *v3d = CTX_wm_view3d(C);
	ARegion *ar= CTX_wm_region(C);
	RegionView3D *rv3d= ED_view3d_context_rv3d(C);
	Scene *scene= CTX_data_scene(C);

	rcti rect;
	rctf vb;

	/* get border select values using rna */
	rect.xmin= RNA_int_get(op->ptr, "xmin");
	rect.ymin= RNA_int_get(op->ptr, "ymin");
	rect.xmax= RNA_int_get(op->ptr, "xmax");
	rect.ymax= RNA_int_get(op->ptr, "ymax");

	/* calculate range */
	view3d_calc_camera_border(scene, ar, rv3d, v3d, &vb, FALSE);

	scene->r.border.xmin= ((float)rect.xmin-vb.xmin)/(vb.xmax-vb.xmin);
	scene->r.border.ymin= ((float)rect.ymin-vb.ymin)/(vb.ymax-vb.ymin);
	scene->r.border.xmax= ((float)rect.xmax-vb.xmin)/(vb.xmax-vb.xmin);
	scene->r.border.ymax= ((float)rect.ymax-vb.ymin)/(vb.ymax-vb.ymin);

	/* actually set border */
	CLAMP(scene->r.border.xmin, 0.0, 1.0);
	CLAMP(scene->r.border.ymin, 0.0, 1.0);
	CLAMP(scene->r.border.xmax, 0.0, 1.0);
	CLAMP(scene->r.border.ymax, 0.0, 1.0);

	/* drawing a border surrounding the entire camera view switches off border rendering
	 * or the border covers no pixels */
	if ((scene->r.border.xmin <= 0.0 && scene->r.border.xmax >= 1.0 &&
		scene->r.border.ymin <= 0.0 && scene->r.border.ymax >= 1.0) ||
	   (scene->r.border.xmin == scene->r.border.xmax ||
		scene->r.border.ymin == scene->r.border.ymax ))
	{
		scene->r.mode &= ~R_BORDER;
	} else {
		scene->r.mode |= R_BORDER;
	}
	
	WM_event_add_notifier(C, NC_SCENE|ND_RENDER_OPTIONS, NULL);

	return OPERATOR_FINISHED;

}

void VIEW3D_OT_render_border(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "Set Render Border";
	ot->description = "Set the boundries of the border render and enables border render ";
	ot->idname= "VIEW3D_OT_render_border";

	/* api callbacks */
	ot->invoke= WM_border_select_invoke;
	ot->exec= render_border_exec;
	ot->modal= WM_border_select_modal;

	ot->poll= view3d_camera_active_poll;

	/* flags */
	ot->flag= OPTYPE_REGISTER|OPTYPE_UNDO;

	/* rna */
	RNA_def_int(ot->srna, "xmin", 0, INT_MIN, INT_MAX, "X Min", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "xmax", 0, INT_MIN, INT_MAX, "X Max", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "ymin", 0, INT_MIN, INT_MAX, "Y Min", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "ymax", 0, INT_MIN, INT_MAX, "Y Max", "", INT_MIN, INT_MAX);

}
/* ********************* Border Zoom operator ****************** */

static int view3d_zoom_border_exec(bContext *C, wmOperator *op)
{
	ARegion *ar= CTX_wm_region(C);
	View3D *v3d = CTX_wm_view3d(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	Scene *scene= CTX_data_scene(C);

	/* Zooms in on a border drawn by the user */
	rcti rect;
	float dvec[3], vb[2], xscale, yscale, scale;

	/* SMOOTHVIEW */
	float new_dist;
	float new_ofs[3];

	/* ZBuffer depth vars */
	bglMats mats;
	float depth_close= FLT_MAX;
	double cent[2],  p[3];

	/* note; otherwise opengl won't work */
	view3d_operator_needs_opengl(C);

	/* get border select values using rna */
	rect.xmin= RNA_int_get(op->ptr, "xmin");
	rect.ymin= RNA_int_get(op->ptr, "ymin");
	rect.xmax= RNA_int_get(op->ptr, "xmax");
	rect.ymax= RNA_int_get(op->ptr, "ymax");

	/* Get Z Depths, needed for perspective, nice for ortho */
	bgl_get_mats(&mats);
	draw_depth(scene, ar, v3d, NULL);
	
	{
		/* avoid allocating the whole depth buffer */
		ViewDepths depth_temp= {0};

		/* avoid view3d_update_depths() for speed. */
		view3d_update_depths_rect(ar, &depth_temp, &rect);
	
		/* find the closest Z pixel */
		depth_close= view3d_depth_near(&depth_temp);
	
		MEM_freeN(depth_temp.depths);
	}

	cent[0] = (((double)rect.xmin)+((double)rect.xmax)) / 2;
	cent[1] = (((double)rect.ymin)+((double)rect.ymax)) / 2;

	if (rv3d->persp==RV3D_PERSP) {
		double p_corner[3];

		/* no depths to use, we cant do anything! */
		if (depth_close==FLT_MAX){
			BKE_report(op->reports, RPT_ERROR, "Depth Too Large");
			return OPERATOR_CANCELLED;
		}
		/* convert border to 3d coordinates */
		if ((	!gluUnProject(cent[0], cent[1], depth_close, mats.modelview, mats.projection, (GLint *)mats.viewport, &p[0], &p[1], &p[2])) ||
			(	!gluUnProject((double)rect.xmin, (double)rect.ymin, depth_close, mats.modelview, mats.projection, (GLint *)mats.viewport, &p_corner[0], &p_corner[1], &p_corner[2])))
			return OPERATOR_CANCELLED;

		dvec[0] = p[0]-p_corner[0];
		dvec[1] = p[1]-p_corner[1];
		dvec[2] = p[2]-p_corner[2];

		new_dist = len_v3(dvec);
		if(new_dist <= v3d->near*1.5) new_dist= v3d->near*1.5;

		new_ofs[0] = -p[0];
		new_ofs[1] = -p[1];
		new_ofs[2] = -p[2];

	} else { /* othographic */
		/* find the current window width and height */
		vb[0] = ar->winx;
		vb[1] = ar->winy;

		new_dist = rv3d->dist;

		/* convert the drawn rectangle into 3d space */
		if (depth_close!=FLT_MAX && gluUnProject(cent[0], cent[1], depth_close, mats.modelview, mats.projection, (GLint *)mats.viewport, &p[0], &p[1], &p[2])) {
			new_ofs[0] = -p[0];
			new_ofs[1] = -p[1];
			new_ofs[2] = -p[2];
		} else {
			/* We cant use the depth, fallback to the old way that dosnt set the center depth */
			copy_v3_v3(new_ofs, rv3d->ofs);

			initgrabz(rv3d, -new_ofs[0], -new_ofs[1], -new_ofs[2]);

			window_to_3d_delta(ar, dvec, (rect.xmin+rect.xmax-vb[0])/2, (rect.ymin+rect.ymax-vb[1])/2);
			/* center the view to the center of the rectangle */
			sub_v3_v3(new_ofs, dvec);
		}

		/* work out the ratios, so that everything selected fits when we zoom */
		xscale = ((rect.xmax-rect.xmin)/vb[0]);
		yscale = ((rect.ymax-rect.ymin)/vb[1]);
		scale = (xscale >= yscale)?xscale:yscale;

		/* zoom in as required, or as far as we can go */
		new_dist = ((new_dist*scale) >= 0.001*v3d->grid)? new_dist*scale:0.001*v3d->grid;
	}

	smooth_view(C, NULL, NULL, new_ofs, NULL, &new_dist, NULL);

	if(rv3d->viewlock & RV3D_BOXVIEW)
		view3d_boxview_sync(CTX_wm_area(C), ar);

	return OPERATOR_FINISHED;
}

static int view3d_zoom_border_invoke(bContext *C, wmOperator *op, wmEvent *event)
{
	RegionView3D *rv3d= CTX_wm_region_view3d(C);

	/* if in camera view do not exec the operator so we do not conflict with set render border*/
	if (rv3d->persp != RV3D_CAMOB)
		return WM_border_select_invoke(C, op, event);
	else
		return OPERATOR_PASS_THROUGH;
}

void VIEW3D_OT_zoom_border(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "Border Zoom";
	ot->description = "Zoom in the view to the nearest object contained in the border";
	ot->idname= "VIEW3D_OT_zoom_border";

	/* api callbacks */
	ot->invoke= view3d_zoom_border_invoke;
	ot->exec= view3d_zoom_border_exec;
	ot->modal= WM_border_select_modal;

	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;

	/* rna */
	RNA_def_int(ot->srna, "xmin", 0, INT_MIN, INT_MAX, "X Min", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "xmax", 0, INT_MIN, INT_MAX, "X Max", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "ymin", 0, INT_MIN, INT_MAX, "Y Min", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "ymax", 0, INT_MIN, INT_MAX, "Y Max", "", INT_MIN, INT_MAX);

}
/* ********************* Changing view operator ****************** */

static EnumPropertyItem prop_view_items[] = {
	{RV3D_VIEW_FRONT, "FRONT", 0, "Front", "View From the Front"},
	{RV3D_VIEW_BACK, "BACK", 0, "Back", "View From the Back"},
	{RV3D_VIEW_LEFT, "LEFT", 0, "Left", "View From the Left"},
	{RV3D_VIEW_RIGHT, "RIGHT", 0, "Right", "View From the Right"},
	{RV3D_VIEW_TOP, "TOP", 0, "Top", "View From the Top"},
	{RV3D_VIEW_BOTTOM, "BOTTOM", 0, "Bottom", "View From the Bottom"},
	{RV3D_VIEW_CAMERA, "CAMERA", 0, "Camera", "View From the active amera"},
	{0, NULL, 0, NULL, NULL}};


/* would like to make this a generic function - outside of transform */

static void axis_set_view(bContext *C, float q1, float q2, float q3, float q4, short view, int perspo, int align_active)
{
	View3D *v3d = CTX_wm_view3d(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	float new_quat[4];

	new_quat[0]= q1; new_quat[1]= q2;
	new_quat[2]= q3; new_quat[3]= q4;

	if(align_active) {
		/* align to active object */
		Object *obact= CTX_data_active_object(C);
		if (obact==NULL) {
			/* no active object, ignore this option */
			align_active= FALSE;
		}
		else {
			float obact_quat[4];
			float twmat[3][3];

			/* same as transform manipulator when normal is set */
			ED_getTransformOrientationMatrix(C, twmat, TRUE);

			mat3_to_quat( obact_quat,twmat);
			invert_qt(obact_quat);
			mul_qt_qtqt(new_quat, new_quat, obact_quat);

			rv3d->view= view= 0;
		}
	}

	if(align_active==FALSE) {
		/* normal operation */
		if(rv3d->viewlock) {
			/* only pass on if */
			if(rv3d->view==RV3D_VIEW_FRONT && view==RV3D_VIEW_BACK);
			else if(rv3d->view==RV3D_VIEW_BACK && view==RV3D_VIEW_FRONT);
			else if(rv3d->view==RV3D_VIEW_RIGHT && view==RV3D_VIEW_LEFT);
			else if(rv3d->view==RV3D_VIEW_LEFT && view==RV3D_VIEW_RIGHT);
			else if(rv3d->view==RV3D_VIEW_BOTTOM && view==RV3D_VIEW_TOP);
			else if(rv3d->view==RV3D_VIEW_TOP && view==RV3D_VIEW_BOTTOM);
			else return;
		}

		rv3d->view= view;
	}

	if(rv3d->viewlock) {
		ED_region_tag_redraw(CTX_wm_region(C));
		return;
	}

	if (rv3d->persp==RV3D_CAMOB && v3d->camera) {

		if (U.uiflag & USER_AUTOPERSP) rv3d->persp= view ? RV3D_ORTHO : RV3D_PERSP;
		else if(rv3d->persp==RV3D_CAMOB) rv3d->persp= perspo;

		smooth_view(C, v3d->camera, NULL, rv3d->ofs, new_quat, NULL, NULL);
	}
	else {

		if (U.uiflag & USER_AUTOPERSP) rv3d->persp= view ? RV3D_ORTHO : RV3D_PERSP;
		else if(rv3d->persp==RV3D_CAMOB) rv3d->persp= perspo;

		smooth_view(C, NULL, NULL, NULL, new_quat, NULL, NULL);
	}

}

static int viewnumpad_exec(bContext *C, wmOperator *op)
{
	View3D *v3d = CTX_wm_view3d(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	Scene *scene= CTX_data_scene(C);
	static int perspo=RV3D_PERSP;
	int viewnum, align_active, nextperspo;

	viewnum = RNA_enum_get(op->ptr, "type");
	align_active = RNA_boolean_get(op->ptr, "align_active");

	/* set this to zero, gets handled in axis_set_view */
	if(rv3d->viewlock)
		align_active= 0;

	/* Use this to test if we started out with a camera */

	if (rv3d->persp == RV3D_CAMOB) {
		nextperspo= rv3d->lpersp;
	} else {
		nextperspo= perspo;
	}

	switch (viewnum) {
		case RV3D_VIEW_BOTTOM :
			axis_set_view(C, 0.0, -1.0, 0.0, 0.0, viewnum, nextperspo, align_active);
			break;

		case RV3D_VIEW_BACK:
			axis_set_view(C, 0.0, 0.0, (float)-cos(M_PI/4.0), (float)-cos(M_PI/4.0), viewnum, nextperspo, align_active);
			break;

		case RV3D_VIEW_LEFT:
			axis_set_view(C, 0.5, -0.5, 0.5, 0.5, viewnum, nextperspo, align_active);
			break;

		case RV3D_VIEW_TOP:
			axis_set_view(C, 1.0, 0.0, 0.0, 0.0, viewnum, nextperspo, align_active);
			break;

		case RV3D_VIEW_FRONT:
			axis_set_view(C, (float)cos(M_PI/4.0), (float)-sin(M_PI/4.0), 0.0, 0.0, viewnum, nextperspo, align_active);
			break;

		case RV3D_VIEW_RIGHT:
			axis_set_view(C, 0.5, -0.5, -0.5, -0.5, viewnum, nextperspo, align_active);
			break;

		case RV3D_VIEW_CAMERA:
			if(rv3d->viewlock==0) {
				/* lastview -  */

				if(rv3d->persp != RV3D_CAMOB) {
					Object *ob= OBACT;

					if (!rv3d->smooth_timer) {
						/* store settings of current view before allowing overwriting with camera view
						 * only if we're not currently in a view transition */
						copy_qt_qt(rv3d->lviewquat, rv3d->viewquat);
						rv3d->lview= rv3d->view;
						rv3d->lpersp= rv3d->persp;
					}

	#if 0
					if(G.qual==LR_ALTKEY) {
						if(oldcamera && is_an_active_object(oldcamera)) {
							v3d->camera= oldcamera;
						}
						handle_view3d_lock();
					}
	#endif
					
					/* first get the default camera for the view lock type */
					if(v3d->scenelock) {
						/* sets the camera view if available */
						v3d->camera= scene->camera;						
					}
					else {
						/* use scene camera if one is not set (even though we're unlocked) */
						if(v3d->camera==NULL) {
							v3d->camera= scene->camera;
						}
					}

					/* if the camera isnt found, check a number of options */
					if(v3d->camera==NULL && ob && ob->type==OB_CAMERA)
						v3d->camera= ob;
					
					if(v3d->camera==NULL)
						v3d->camera= scene_find_camera(scene);		

					/* couldnt find any useful camera, bail out */
					if(v3d->camera==NULL)
						return OPERATOR_CANCELLED;
					
					/* important these dont get out of sync for locked scenes */
					if(v3d->scenelock)
						scene->camera= v3d->camera;

					/* finally do snazzy view zooming */
					rv3d->persp= RV3D_CAMOB;
					smooth_view(C, NULL, v3d->camera, rv3d->ofs, rv3d->viewquat, &rv3d->dist, &v3d->lens);

				}
				else{
					/* return to settings of last view */
					/* does smooth_view too */
					axis_set_view(C, rv3d->lviewquat[0], rv3d->lviewquat[1], rv3d->lviewquat[2], rv3d->lviewquat[3], rv3d->lview, rv3d->lpersp, 0);
				}
			}
			break;

		default :
			break;
	}

	if(rv3d->persp != RV3D_CAMOB) perspo= rv3d->persp;

	return OPERATOR_FINISHED;
}


void VIEW3D_OT_viewnumpad(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "View numpad";
	ot->description = "Set the view";
	ot->idname= "VIEW3D_OT_viewnumpad";

	/* api callbacks */
	ot->exec= viewnumpad_exec;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;

	RNA_def_enum(ot->srna, "type", prop_view_items, 0, "View", "The Type of view");
	RNA_def_boolean(ot->srna, "align_active", 0, "Align Active", "Align to the active objects axis");
}

static EnumPropertyItem prop_view_orbit_items[] = {
	{V3D_VIEW_STEPLEFT, "ORBITLEFT", 0, "Orbit Left", "Orbit the view around to the Left"},
	{V3D_VIEW_STEPRIGHT, "ORBITRIGHT", 0, "Orbit Right", "Orbit the view around to the Right"},
	{V3D_VIEW_STEPUP, "ORBITUP", 0, "Orbit Up", "Orbit the view Up"},
	{V3D_VIEW_STEPDOWN, "ORBITDOWN", 0, "Orbit Down", "Orbit the view Down"},
	{0, NULL, 0, NULL, NULL}};

static int vieworbit_exec(bContext *C, wmOperator *op)
{
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	float phi, q1[4], new_quat[4];
	int orbitdir;

	orbitdir = RNA_enum_get(op->ptr, "type");

	if(rv3d->viewlock==0) {

		if(rv3d->persp != RV3D_CAMOB) {
			if(orbitdir == V3D_VIEW_STEPLEFT || orbitdir == V3D_VIEW_STEPRIGHT) {
				float si;
				/* z-axis */
				phi= (float)(M_PI/360.0)*U.pad_rot_angle;
				if(orbitdir == V3D_VIEW_STEPRIGHT) phi= -phi;
				si= (float)sin(phi);
				q1[0]= (float)cos(phi);
				q1[1]= q1[2]= 0.0;
				q1[3]= si;
				mul_qt_qtqt(new_quat, rv3d->viewquat, q1);
				rv3d->view= 0;
			}
			else if(orbitdir == V3D_VIEW_STEPDOWN || orbitdir == V3D_VIEW_STEPUP) {
				/* horizontal axis */
				copy_v3_v3(q1+1, rv3d->viewinv[0]);

				normalize_v3(q1+1);
				phi= (float)(M_PI/360.0)*U.pad_rot_angle;
				if(orbitdir == V3D_VIEW_STEPDOWN) phi= -phi;
				q1[0]= (float)cos(phi);
				mul_v3_fl(q1+1, sin(phi));
				mul_qt_qtqt(new_quat, rv3d->viewquat, q1);
				rv3d->view= 0;
			}

			smooth_view(C, NULL, NULL, NULL, new_quat, NULL, NULL);
		}
	}

	return OPERATOR_FINISHED;
}

void VIEW3D_OT_view_orbit(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "View Orbit";
	ot->description = "Orbit the view";
	ot->idname= "VIEW3D_OT_view_orbit";

	/* api callbacks */
	ot->exec= vieworbit_exec;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;
	RNA_def_enum(ot->srna, "type", prop_view_orbit_items, 0, "Orbit", "Direction of View Orbit");
}

static EnumPropertyItem prop_view_pan_items[] = {
	{V3D_VIEW_PANLEFT, "PANLEFT", 0, "Pan Left", "Pan the view to the Left"},
	{V3D_VIEW_PANRIGHT, "PANRIGHT", 0, "Pan Right", "Pan the view to the Right"},
	{V3D_VIEW_PANUP, "PANUP", 0, "Pan Up", "Pan the view Up"},
	{V3D_VIEW_PANDOWN, "PANDOWN", 0, "Pan Down", "Pan the view Down"},
	{0, NULL, 0, NULL, NULL}};

static int viewpan_exec(bContext *C, wmOperator *op)
{
	ARegion *ar= CTX_wm_region(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	float vec[3];
	int pandir;

	pandir = RNA_enum_get(op->ptr, "type");

	initgrabz(rv3d, 0.0, 0.0, 0.0);
	if(pandir == V3D_VIEW_PANRIGHT) window_to_3d_delta(ar, vec, -32, 0);
	else if(pandir == V3D_VIEW_PANLEFT) window_to_3d_delta(ar, vec, 32, 0);
	else if(pandir == V3D_VIEW_PANUP) window_to_3d_delta(ar, vec, 0, -25);
	else if(pandir == V3D_VIEW_PANDOWN) window_to_3d_delta(ar, vec, 0, 25);
	add_v3_v3(rv3d->ofs, vec);

	if(rv3d->viewlock & RV3D_BOXVIEW)
		view3d_boxview_sync(CTX_wm_area(C), ar);

	ED_region_tag_redraw(ar);

	return OPERATOR_FINISHED;
}

void VIEW3D_OT_view_pan(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "View Pan";
	ot->description = "Pan the view";
	ot->idname= "VIEW3D_OT_view_pan";

	/* api callbacks */
	ot->exec= viewpan_exec;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;
	RNA_def_enum(ot->srna, "type", prop_view_pan_items, 0, "Pan", "Direction of View Pan");
}

static int viewpersportho_exec(bContext *C, wmOperator *UNUSED(op))
{
	ARegion *ar= CTX_wm_region(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);

	if(rv3d->viewlock==0) {
		if(rv3d->persp!=RV3D_ORTHO)
			rv3d->persp=RV3D_ORTHO;
		else rv3d->persp=RV3D_PERSP;
		ED_region_tag_redraw(ar);
	}

	return OPERATOR_FINISHED;

}

void VIEW3D_OT_view_persportho(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "View Persp/Ortho";
	ot->description = "Switch the current view from perspective/orthographic";
	ot->idname= "VIEW3D_OT_view_persportho";

	/* api callbacks */
	ot->exec= viewpersportho_exec;
	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;
}

/* ******************** add background image operator **************** */

static BGpic *background_image_add(bContext *C)
{
	View3D *v3d= CTX_wm_view3d(C);
	
	BGpic *bgpic= MEM_callocN(sizeof(BGpic), "Background Image");
	bgpic->size= 5.0;
	bgpic->blend= 0.5;
	bgpic->iuser.fie_ima= 2;
	bgpic->iuser.ok= 1;
	bgpic->view= 0; /* 0 for all */
	
	BLI_addtail(&v3d->bgpicbase, bgpic);
	
	return bgpic;
}

static int background_image_add_exec(bContext *C, wmOperator *UNUSED(op))
{
	background_image_add(C);

	return OPERATOR_FINISHED;
}

static int background_image_add_invoke(bContext *C, wmOperator *op, wmEvent *UNUSED(event))
{
	View3D *v3d= CTX_wm_view3d(C);
	Image *ima= NULL;
	BGpic *bgpic;
	char name[32];
	
	/* check input variables */
	if(RNA_property_is_set(op->ptr, "filepath")) {
		char path[FILE_MAX];
		
		RNA_string_get(op->ptr, "filepath", path);
		ima= BKE_add_image_file(path);
	}
	else if(RNA_property_is_set(op->ptr, "name")) {
		RNA_string_get(op->ptr, "name", name);
		ima= (Image *)find_id("IM", name);
	}
	
	bgpic = background_image_add(C);
	
	if (ima) {
		bgpic->ima = ima;
		
		if(ima->id.us==0) id_us_plus(&ima->id);
		else id_lib_extern(&ima->id);
		
		if (!(v3d->flag & V3D_DISPBGPICS))
			v3d->flag |= V3D_DISPBGPICS;
	}
	
	WM_event_add_notifier(C, NC_SPACE|ND_SPACE_VIEW3D, v3d);
	
	return OPERATOR_FINISHED;
}

void VIEW3D_OT_background_image_add(wmOperatorType *ot)
{
	/* identifiers */
	ot->name   = "Add Background Image";
	ot->description= "Add a new background image";
	ot->idname = "VIEW3D_OT_background_image_add";

	/* api callbacks */
	ot->invoke = background_image_add_invoke;
	ot->exec   = background_image_add_exec;
	ot->poll   = ED_operator_view3d_active;

	/* flags */
	ot->flag   = 0;
	
	/* properties */
	RNA_def_string(ot->srna, "name", "Image", 24, "Name", "Image name to assign.");
	RNA_def_string(ot->srna, "filepath", "Path", FILE_MAX, "Filepath", "Path to image file");
}


/* ***** remove image operator ******* */
static int background_image_remove_exec(bContext *C, wmOperator *op)
{
	View3D *vd = CTX_wm_view3d(C);
	int index = RNA_int_get(op->ptr, "index");
	BGpic *bgpic_rem= BLI_findlink(&vd->bgpicbase, index);

	if(bgpic_rem) {
		BLI_remlink(&vd->bgpicbase, bgpic_rem);
		if(bgpic_rem->ima) bgpic_rem->ima->id.us--;
		MEM_freeN(bgpic_rem);
		WM_event_add_notifier(C, NC_SPACE|ND_SPACE_VIEW3D, vd);
		return OPERATOR_FINISHED;
	}
	else {
		return OPERATOR_CANCELLED;
	}

}

void VIEW3D_OT_background_image_remove(wmOperatorType *ot)
{
	/* identifiers */
	ot->name   = "Remove Background Image";
	ot->description= "Remove a background image from the 3D view";
	ot->idname = "VIEW3D_OT_background_image_remove";

	/* api callbacks */
	ot->exec   = background_image_remove_exec;
	ot->poll   = ED_operator_view3d_active;

	/* flags */
	ot->flag   = 0;

	RNA_def_int(ot->srna, "index", 0, 0, INT_MAX, "Index", "Background image index to remove ", 0, INT_MAX);
}

/* ********************* set clipping operator ****************** */

static void calc_clipping_plane(float clip[6][4], BoundBox *clipbb)
{
	int val;

	for(val=0; val<4; val++) {

		normal_tri_v3( clip[val],clipbb->vec[val], clipbb->vec[val==3?0:val+1], clipbb->vec[val+4]);

		clip[val][3]=
			- clip[val][0]*clipbb->vec[val][0]
			- clip[val][1]*clipbb->vec[val][1]
			- clip[val][2]*clipbb->vec[val][2];
	}
}

static void calc_local_clipping(float clip_local[][4], BoundBox *clipbb, float mat[][4])
{
	BoundBox clipbb_local;
	float imat[4][4];
	int i;

	invert_m4_m4(imat, mat);

	for(i=0; i<8; i++) {
		mul_v3_m4v3(clipbb_local.vec[i], imat, clipbb->vec[i]);
	}

	calc_clipping_plane(clip_local, &clipbb_local);
}

void ED_view3d_local_clipping(RegionView3D *rv3d, float mat[][4])
{
	if(rv3d->rflag & RV3D_CLIPPING)
		calc_local_clipping(rv3d->clip_local, rv3d->clipbb, mat);
}

static int view3d_clipping_exec(bContext *C, wmOperator *op)
{
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	ViewContext vc;
	bglMats mats;
	rcti rect;

	rect.xmin= RNA_int_get(op->ptr, "xmin");
	rect.ymin= RNA_int_get(op->ptr, "ymin");
	rect.xmax= RNA_int_get(op->ptr, "xmax");
	rect.ymax= RNA_int_get(op->ptr, "ymax");

	rv3d->rflag |= RV3D_CLIPPING;
	rv3d->clipbb= MEM_callocN(sizeof(BoundBox), "clipbb");

	/* note; otherwise opengl won't work */
	view3d_operator_needs_opengl(C);

	view3d_set_viewcontext(C, &vc);
	view3d_get_transformation(vc.ar, vc.rv3d, NULL, &mats); /* NULL because we don't want it in object space */
	view3d_calculate_clipping(rv3d->clipbb, rv3d->clip, &mats, &rect);

	return OPERATOR_FINISHED;
}

static int view3d_clipping_invoke(bContext *C, wmOperator *op, wmEvent *event)
{
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	ARegion *ar= CTX_wm_region(C);

	if(rv3d->rflag & RV3D_CLIPPING) {
		rv3d->rflag &= ~RV3D_CLIPPING;
		ED_region_tag_redraw(ar);
		if(rv3d->clipbb) MEM_freeN(rv3d->clipbb);
		rv3d->clipbb= NULL;
		return OPERATOR_FINISHED;
	}
	else {
		return WM_border_select_invoke(C, op, event);
	}
}

/* toggles */
void VIEW3D_OT_clip_border(wmOperatorType *ot)
{

	/* identifiers */
	ot->name= "Clipping Border";
	ot->description = "Set the view clipping border";
	ot->idname= "VIEW3D_OT_clip_border";

	/* api callbacks */
	ot->invoke= view3d_clipping_invoke;
	ot->exec= view3d_clipping_exec;
	ot->modal= WM_border_select_modal;

	ot->poll= ED_operator_region_view3d_active;

	/* flags */
	ot->flag= 0;

	/* rna */
	RNA_def_int(ot->srna, "xmin", 0, INT_MIN, INT_MAX, "X Min", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "xmax", 0, INT_MIN, INT_MAX, "X Max", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "ymin", 0, INT_MIN, INT_MAX, "Y Min", "", INT_MIN, INT_MAX);
	RNA_def_int(ot->srna, "ymax", 0, INT_MIN, INT_MAX, "Y Max", "", INT_MIN, INT_MAX);
}

/* ***************** 3d cursor cursor op ******************* */

/* mx my in region coords */
static int set_3dcursor_invoke(bContext *C, wmOperator *UNUSED(op), wmEvent *event)
{
	Scene *scene= CTX_data_scene(C);
	ARegion *ar= CTX_wm_region(C);
	View3D *v3d = CTX_wm_view3d(C);
	RegionView3D *rv3d= CTX_wm_region_view3d(C);
	float dx, dy, fz, *fp = NULL, dvec[3], oldcurs[3];
	short mx, my, mval[2];
//	short ctrl= 0; // XXX
	int flip;
	fp= give_cursor(scene, v3d);

//	if(obedit && ctrl) lr_click= 1;
	copy_v3_v3(oldcurs, fp);

	mx= event->x - ar->winrct.xmin;
	my= event->y - ar->winrct.ymin;

	project_short_noclip(ar, fp, mval);
	flip= initgrabz(rv3d, fp[0], fp[1], fp[2]);
	
	/* reset the depth based on the view offset */
	if(flip) {
		negate_v3_v3(fp, rv3d->ofs);

		/* re initialize */
		project_short_noclip(ar, fp, mval);
		flip= initgrabz(rv3d, fp[0], fp[1], fp[2]);
	}

	if(mval[0]!=IS_CLIPPED) {
		short depth_used = 0;

		if (U.uiflag & USER_ORBIT_ZBUF) { /* maybe this should be accessed some other way */
			short mval_depth[2];
			mval_depth[0]= mx;
			mval_depth[1]= my;
			view3d_operator_needs_opengl(C);
			if (view_autodist(scene, ar, v3d, mval_depth, fp))
				depth_used= 1;
		}

		if(depth_used==0) {
			window_to_3d_delta(ar, dvec, mval[0]-mx, mval[1]-my);
			sub_v3_v3(fp, dvec);
		}
	}
	else {

		dx= ((float)(mx-(ar->winx/2)))*rv3d->zfac/(ar->winx/2);
		dy= ((float)(my-(ar->winy/2)))*rv3d->zfac/(ar->winy/2);

		fz= rv3d->persmat[0][3]*fp[0]+ rv3d->persmat[1][3]*fp[1]+ rv3d->persmat[2][3]*fp[2]+ rv3d->persmat[3][3];
		fz= fz/rv3d->zfac;

		fp[0]= (rv3d->persinv[0][0]*dx + rv3d->persinv[1][0]*dy+ rv3d->persinv[2][0]*fz)-rv3d->ofs[0];
		fp[1]= (rv3d->persinv[0][1]*dx + rv3d->persinv[1][1]*dy+ rv3d->persinv[2][1]*fz)-rv3d->ofs[1];
		fp[2]= (rv3d->persinv[0][2]*dx + rv3d->persinv[1][2]*dy+ rv3d->persinv[2][2]*fz)-rv3d->ofs[2];
	}

	if(v3d && v3d->localvd)
		WM_event_add_notifier(C, NC_SPACE|ND_SPACE_VIEW3D, v3d);
	else
		WM_event_add_notifier(C, NC_SCENE|NA_EDITED, scene);

	return OPERATOR_FINISHED;
}

void VIEW3D_OT_cursor3d(wmOperatorType *ot)
{

	/* identifiers */
	ot->name= "Set 3D Cursor";
	ot->description = "Set the location of the 3D cursor";
	ot->idname= "VIEW3D_OT_cursor3d";

	/* api callbacks */
	ot->invoke= set_3dcursor_invoke;

	ot->poll= ED_operator_view3d_active;
    
	/* flags */
//	ot->flag= OPTYPE_REGISTER|OPTYPE_UNDO;
    
	/* rna later */

}

/* ***************** manipulator op ******************* */


static int manipulator_invoke(bContext *C, wmOperator *op, wmEvent *event)
{
	View3D *v3d = CTX_wm_view3d(C);

	if(!(v3d->twflag & V3D_USE_MANIPULATOR)) return OPERATOR_PASS_THROUGH;
	if(!(v3d->twflag & V3D_DRAW_MANIPULATOR)) return OPERATOR_PASS_THROUGH;

	/* only no modifier or shift */
	if(event->keymodifier != 0 && event->keymodifier != KM_SHIFT) return OPERATOR_PASS_THROUGH;

	/* note; otherwise opengl won't work */
	view3d_operator_needs_opengl(C);

	if(0==BIF_do_manipulator(C, event, op))
		return OPERATOR_PASS_THROUGH;

	return OPERATOR_FINISHED;
}

void VIEW3D_OT_manipulator(wmOperatorType *ot)
{

	/* identifiers */
	ot->name= "3D Manipulator";
	ot->description = "Manipulate selected item by axis";
	ot->idname= "VIEW3D_OT_manipulator";

	/* api callbacks */
	ot->invoke= manipulator_invoke;

	ot->poll= ED_operator_view3d_active;

	/* properties to pass to transform */
	Transform_Properties(ot, P_CONSTRAINT);
}

static int enable_manipulator_invoke(bContext *C, wmOperator *op, wmEvent *UNUSED(event))
{
	View3D *v3d = CTX_wm_view3d(C);

	v3d->twtype=0;
	
	if (RNA_boolean_get(op->ptr, "translate"))
		v3d->twtype |= V3D_MANIP_TRANSLATE;
	if (RNA_boolean_get(op->ptr, "rotate"))
		v3d->twtype |= V3D_MANIP_ROTATE;
	if (RNA_boolean_get(op->ptr, "scale"))
		v3d->twtype |= V3D_MANIP_SCALE;
		
	WM_event_add_notifier(C, NC_SPACE|ND_SPACE_VIEW3D, v3d);

	return OPERATOR_FINISHED;
}

void VIEW3D_OT_enable_manipulator(wmOperatorType *ot)
{
	/* identifiers */
	ot->name= "Enable 3D Manipulator";
	ot->description = "Enable the transform manipulator for use";
	ot->idname= "VIEW3D_OT_enable_manipulator";
	
	/* api callbacks */
	ot->invoke= enable_manipulator_invoke;
	ot->poll= ED_operator_view3d_active;
	
	/* rna later */
	RNA_def_boolean(ot->srna, "translate", 0, "Translate", "Enable the translate manipulator");
	RNA_def_boolean(ot->srna, "rotate", 0, "Rotate", "Enable the rotate manipulator");
	RNA_def_boolean(ot->srna, "scale", 0, "Scale", "Enable the scale manipulator");
}

/* ************************* below the line! *********************** */


static float view_autodist_depth_margin(ARegion *ar, short mval[2], int margin)
{
	ViewDepths depth_temp= {0};
	rcti rect;
	float depth_close;

	if(margin==0) {
		/* Get Z Depths, needed for perspective, nice for ortho */
		rect.xmin= mval[0];
		rect.ymin= mval[1];
		rect.xmax= mval[0] + 1;
		rect.ymax= mval[1] + 1;
	}
	else {
		rect.xmax = mval[0] + margin;
		rect.ymax = mval[1] + margin;

		rect.xmin = mval[0] - margin;
		rect.ymin = mval[1] - margin;
	}

	view3d_update_depths_rect(ar, &depth_temp, &rect);
	depth_close= view3d_depth_near(&depth_temp);
	if(depth_temp.depths) MEM_freeN(depth_temp.depths);
	return depth_close;
}

/* XXX todo Zooms in on a border drawn by the user */
int view_autodist(Scene *scene, ARegion *ar, View3D *v3d, short *mval, float mouse_worldloc[3] ) //, float *autodist )
{
	bglMats mats; /* ZBuffer depth vars */
	float depth_close= FLT_MAX;
	double cent[2],  p[3];

	/* Get Z Depths, needed for perspective, nice for ortho */
	bgl_get_mats(&mats);
	draw_depth(scene, ar, v3d, NULL);

	depth_close= view_autodist_depth_margin(ar, mval, 4);

	if (depth_close==FLT_MAX)
		return 0;

	cent[0] = (double)mval[0];
	cent[1] = (double)mval[1];

	if (!gluUnProject(cent[0], cent[1], depth_close, mats.modelview, mats.projection, (GLint *)mats.viewport, &p[0], &p[1], &p[2]))
		return 0;

	mouse_worldloc[0] = (float)p[0];
	mouse_worldloc[1] = (float)p[1];
	mouse_worldloc[2] = (float)p[2];
	return 1;
}

int view_autodist_init(Scene *scene, ARegion *ar, View3D *v3d, int mode) //, float *autodist )
{
	/* Get Z Depths, needed for perspective, nice for ortho */
	switch(mode) {
	case 0:
		draw_depth(scene, ar, v3d, NULL);
		break;
	case 1:
		draw_depth_gpencil(scene, ar, v3d);
		break;
	}

	return 1;
}

// no 4x4 sampling, run view_autodist_init first
int view_autodist_simple(ARegion *ar, short *mval, float mouse_worldloc[3], int margin, float *force_depth) //, float *autodist )
{
	bglMats mats; /* ZBuffer depth vars, could cache? */
	float depth;
	double cent[2],  p[3];

	/* Get Z Depths, needed for perspective, nice for ortho */
	if(force_depth)
		depth= *force_depth;
	else
		depth= view_autodist_depth_margin(ar, mval, margin);

	if (depth==FLT_MAX)
		return 0;

	cent[0] = (double)mval[0];
	cent[1] = (double)mval[1];

	bgl_get_mats(&mats);
	if (!gluUnProject(cent[0], cent[1], depth, mats.modelview, mats.projection, (GLint *)mats.viewport, &p[0], &p[1], &p[2]))
		return 0;

	mouse_worldloc[0] = (float)p[0];
	mouse_worldloc[1] = (float)p[1];
	mouse_worldloc[2] = (float)p[2];
	return 1;
}

int view_autodist_depth(struct ARegion *ar, short mval[2], int margin, float *depth)
{
	*depth= view_autodist_depth_margin(ar, mval, margin);

	return (*depth==FLT_MAX) ? 0:1;
}

static int depth_segment_cb(int x, int y, void *userData)
{
	struct { struct ARegion *ar; int margin; float depth; } *data = userData;
	short mval[2];
	float depth;

	mval[0]= (short)x;
	mval[1]= (short)y;

	depth= view_autodist_depth_margin(data->ar, mval, data->margin);

	if(depth != FLT_MAX) {
		data->depth= depth;
		return 0;
	}
	else {
		return 1;
	}
}

int view_autodist_depth_segment(struct ARegion *ar, short mval_sta[2], short mval_end[2], int margin, float *depth)
{
	struct { struct ARegion *ar; int margin; float depth; } data = {0};
	int p1[2];
	int p2[2];

	data.ar= ar;
	data.margin= margin;
	data.depth= FLT_MAX;

	VECCOPY2D(p1, mval_sta);
	VECCOPY2D(p2, mval_end);

	plot_line_v2v2i(p1, p2, depth_segment_cb, &data);

	*depth= data.depth;

	return (*depth==FLT_MAX) ? 0:1;
}

/* ********************* NDOF ************************ */
/* note: this code is confusing and unclear... (ton) */
/* **************************************************** */

// ndof scaling will be moved to user setting.
// In the mean time this is just a place holder.

// Note: scaling in the plugin and ghostwinlay.c
// should be removed. With driver default setting,
// each axis returns approx. +-200 max deflection.

// The values I selected are based on the older
// polling i/f. With event i/f, the sensistivity
// can be increased for improved response from
// small deflections of the device input.


// lukep notes : i disagree on the range.
// the normal 3Dconnection driver give +/-400
// on defaut range in other applications
// and up to +/- 1000 if set to maximum
// because i remove the scaling by delta,
// which was a bad idea as it depend of the system
// speed and os, i changed the scaling values, but
// those are still not ok

#if 0
static float ndof_axis_scale[6] = {
	+0.01,	// Tx
	+0.01,	// Tz
	+0.01,	// Ty
	+0.0015,	// Rx
	+0.0015,	// Rz
	+0.0015	// Ry
};

static void filterNDOFvalues(float *sbval)
{
	int i=0;
	float max  = 0.0;

	for (i =0; i<6;i++)
		if (fabs(sbval[i]) > max)
			max = fabs(sbval[i]);
	for (i =0; i<6;i++)
		if (fabs(sbval[i]) != max )
			sbval[i]=0.0;
}

// statics for controlling rv3d->dist corrections.
// viewmoveNDOF zeros and adjusts rv3d->ofs.
// viewmove restores based on dz_flag state.

int dz_flag = 0;
float m_dist;

void viewmoveNDOFfly(ARegion *ar, View3D *v3d, int UNUSED(mode))
{
	RegionView3D *rv3d= ar->regiondata;
	int i;
	float phi;
	float dval[7];
	// static fval[6] for low pass filter; device input vector is dval[6]
	static float fval[6];
	float tvec[3],rvec[3];
	float q1[4];
	float mat[3][3];
	float upvec[3];


	/*----------------------------------------------------
	 * sometimes this routine is called from headerbuttons
	 * viewmove needs to refresh the screen
	 */
// XXX	areawinset(ar->win);


	// fetch the current state of the ndof device
// XXX	getndof(dval);

	if (v3d->ndoffilter)
		filterNDOFvalues(fval);

	// Scale input values

//	if(dval[6] == 0) return; // guard against divide by zero

	for(i=0;i<6;i++) {

		// user scaling
		dval[i] = dval[i] * ndof_axis_scale[i];
	}


	// low pass filter with zero crossing reset

	for(i=0;i<6;i++) {
		if((dval[i] * fval[i]) >= 0)
			dval[i] = (fval[i] * 15 + dval[i]) / 16;
		else
			fval[i] = 0;
	}


	// force perspective mode. This is a hack and is
	// incomplete. It doesn't actually effect the view
	// until the first draw and doesn't update the menu
	// to reflect persp mode.

	rv3d->persp = RV3D_PERSP;


	// Correct the distance jump if rv3d->dist != 0

	// This is due to a side effect of the original
	// mouse view rotation code. The rotation point is
	// set a distance in front of the viewport to
	// make rotating with the mouse look better.
	// The distance effect is written at a low level
	// in the view management instead of the mouse
	// view function. This means that all other view
	// movement devices must subtract this from their
	// view transformations.

	if(rv3d->dist != 0.0) {
		dz_flag = 1;
		m_dist = rv3d->dist;
		upvec[0] = upvec[1] = 0;
		upvec[2] = rv3d->dist;
		copy_m3_m4(mat, rv3d->viewinv);
		mul_m3_v3(mat, upvec);
		sub_v3_v3(rv3d->ofs, upvec);
		rv3d->dist = 0.0;
	}


	// Apply rotation
	// Rotations feel relatively faster than translations only in fly mode, so
	// we have no choice but to fix that here (not in the plugins)
	rvec[0] = -0.5 * dval[3];
	rvec[1] = -0.5 * dval[4];
	rvec[2] = -0.5 * dval[5];

	// rotate device x and y by view z

	copy_m3_m4(mat, rv3d->viewinv);
	mat[2][2] = 0.0f;
	mul_m3_v3(mat, rvec);

	// rotate the view

	phi = normalize_v3(rvec);
	if(phi != 0) {
		axis_angle_to_quat(q1,rvec,phi);
		mul_qt_qtqt(rv3d->viewquat, rv3d->viewquat, q1);
	}


	// Apply translation

	tvec[0] = dval[0];
	tvec[1] = dval[1];
	tvec[2] = -dval[2];

	// the next three lines rotate the x and y translation coordinates
	// by the current z axis angle

	copy_m3_m4(mat, rv3d->viewinv);
	mat[2][2] = 0.0f;
	mul_m3_v3(mat, tvec);

	// translate the view

	sub_v3_v3(rv3d->ofs, tvec);


	/*----------------------------------------------------
	 * refresh the screen XXX
	  */

	// update render preview window

// XXX	BIF_view3d_previewrender_signal(ar, PR_DBASE|PR_DISPRECT);
}

void viewmoveNDOF(Scene *scene, ARegion *ar, View3D *v3d, int UNUSED(mode))
{
	RegionView3D *rv3d= ar->regiondata;
	float fval[7];
	float dvec[3];
	float sbadjust = 1.0f;
	float len;
	short use_sel = 0;
	Object *ob = OBACT;
	float m[3][3];
	float m_inv[3][3];
	float xvec[3] = {1,0,0};
	float yvec[3] = {0,-1,0};
	float zvec[3] = {0,0,1};
	float phi;
	float q1[4];
	float obofs[3];
	float reverse;
	//float diff[4];
	float d, curareaX, curareaY;
	float mat[3][3];
	float upvec[3];

	/* Sensitivity will control how fast the view rotates.  The value was
	 * obtained experimentally by tweaking until the author didn't get dizzy watching.
	 * Perhaps this should be a configurable user parameter.
	 */
	float psens = 0.005f * (float) U.ndof_pan;   /* pan sensitivity */
	float rsens = 0.005f * (float) U.ndof_rotate;  /* rotate sensitivity */
	float zsens = 0.3f;   /* zoom sensitivity */

	const float minZoom = -30.0f;
	const float maxZoom = 300.0f;

	//reset view type
	rv3d->view = 0;
//printf("passing here \n");
//
	if (scene->obedit==NULL && ob && !(ob->mode & OB_MODE_POSE)) {
		use_sel = 1;
	}

	if((dz_flag)||rv3d->dist==0) {
		dz_flag = 0;
		rv3d->dist = m_dist;
		upvec[0] = upvec[1] = 0;
		upvec[2] = rv3d->dist;
		copy_m3_m4(mat, rv3d->viewinv);
		mul_m3_v3(mat, upvec);
		add_v3_v3(rv3d->ofs, upvec);
	}

	/*----------------------------------------------------
	 * sometimes this routine is called from headerbuttons
	 * viewmove needs to refresh the screen
	 */
// XXX	areawinset(curarea->win);

	/*----------------------------------------------------
	 * record how much time has passed. clamp at 10 Hz
	 * pretend the previous frame occurred at the clamped time
	 */
//    now = PIL_check_seconds_timer();
 //   frametime = (now - prevTime);
 //   if (frametime > 0.1f){        /* if more than 1/10s */
 //       frametime = 1.0f/60.0;      /* clamp at 1/60s so no jumps when starting to move */
//    }
//    prevTime = now;
 //   sbadjust *= 60 * frametime;             /* normalize ndof device adjustments to 100Hz for framerate independence */

	/* fetch the current state of the ndof device & enforce dominant mode if selected */
// XXX    getndof(fval);
	if (v3d->ndoffilter)
		filterNDOFvalues(fval);


	// put scaling back here, was previously in ghostwinlay
	fval[0] = fval[0] * (1.0f/600.0f);
	fval[1] = fval[1] * (1.0f/600.0f);
	fval[2] = fval[2] * (1.0f/1100.0f);
	fval[3] = fval[3] * 0.00005f;
	fval[4] =-fval[4] * 0.00005f;
	fval[5] = fval[5] * 0.00005f;
	fval[6] = fval[6] / 1000000.0f;

	// scale more if not in perspective mode
	if (rv3d->persp == RV3D_ORTHO) {
		fval[0] = fval[0] * 0.05f;
		fval[1] = fval[1] * 0.05f;
		fval[2] = fval[2] * 0.05f;
		fval[3] = fval[3] * 0.9f;
		fval[4] = fval[4] * 0.9f;
		fval[5] = fval[5] * 0.9f;
		zsens *= 8;
	}

	/* set object offset */
	if (ob) {
		obofs[0] = -ob->obmat[3][0];
		obofs[1] = -ob->obmat[3][1];
		obofs[2] = -ob->obmat[3][2];
	}
	else {
		copy_v3_v3(obofs, rv3d->ofs);
	}

	/* calc an adjustment based on distance from camera
	   disabled per patch 14402 */
	 d = 1.0f;

/*    if (ob) {
		sub_v3_v3v3(diff, obofs, rv3d->ofs);
		d = len_v3(diff);
	}
*/

	reverse = (rv3d->persmat[2][1] < 0.0f) ? -1.0f : 1.0f;

	/*----------------------------------------------------
	 * ndof device pan
	 */
	psens *= 1.0f + d;
	curareaX = sbadjust * psens * fval[0];
	curareaY = sbadjust * psens * fval[1];
	dvec[0] = curareaX * rv3d->persinv[0][0] + curareaY * rv3d->persinv[1][0];
	dvec[1] = curareaX * rv3d->persinv[0][1] + curareaY * rv3d->persinv[1][1];
	dvec[2] = curareaX * rv3d->persinv[0][2] + curareaY * rv3d->persinv[1][2];
	add_v3_v3(rv3d->ofs, dvec);

	/*----------------------------------------------------
	 * ndof device dolly
	 */
	len = zsens * sbadjust * fval[2];

	if (rv3d->persp==RV3D_CAMOB) {
		if(rv3d->persp==RV3D_CAMOB) { /* This is stupid, please fix - TODO */
			rv3d->camzoom+= 10.0f * -len;
		}
		if (rv3d->camzoom < minZoom) rv3d->camzoom = minZoom;
		else if (rv3d->camzoom > maxZoom) rv3d->camzoom = maxZoom;
	}
	else if ((rv3d->dist> 0.001*v3d->grid) && (rv3d->dist<10.0*v3d->far)) {
		rv3d->dist*=(1.0 + len);
	}


	/*----------------------------------------------------
	 * ndof device turntable
	 * derived from the turntable code in viewmove
	 */

	/* Get the 3x3 matrix and its inverse from the quaternion */
	quat_to_mat3( m,rv3d->viewquat);
	invert_m3_m3(m_inv,m);

	/* Determine the direction of the x vector (for rotating up and down) */
	/* This can likely be compuated directly from the quaternion. */
	mul_m3_v3(m_inv,xvec);
	mul_m3_v3(m_inv,yvec);
	mul_m3_v3(m_inv,zvec);

	/* Perform the up/down rotation */
	phi = sbadjust * rsens * /*0.5f * */ fval[3]; /* spin vertically half as fast as horizontally */
	q1[0] = cos(phi);
	mul_v3_v3fl(q1+1, xvec, sin(phi));
	mul_qt_qtqt(rv3d->viewquat, rv3d->viewquat, q1);

	if (use_sel) {
		conjugate_qt(q1); /* conj == inv for unit quat */
		sub_v3_v3(rv3d->ofs, obofs);
		mul_qt_v3(q1, rv3d->ofs);
		add_v3_v3(rv3d->ofs, obofs);
	}

	/* Perform the orbital rotation */
	/* Perform the orbital rotation
	   If the seen Up axis is parallel to the zoom axis, rotation should be
	   achieved with a pure Roll motion (no Spin) on the device. When you start
	   to tilt, moving from Top to Side view, Spinning will increasingly become
	   more relevant while the Roll component will decrease. When a full
	   Side view is reached, rotations around the world's Up axis are achieved
	   with a pure Spin-only motion.  In other words the control of the spinning
	   around the world's Up axis should move from the device's Spin axis to the
	   device's Roll axis depending on the orientation of the world's Up axis
	   relative to the screen. */
	//phi = sbadjust * rsens * reverse * fval[4];  /* spin the knob, y axis */
	phi = sbadjust * rsens * (yvec[2] * fval[4] + zvec[2] * fval[5]);
	q1[0] = cos(phi);
	q1[1] = q1[2] = 0.0;
	q1[3] = sin(phi);
	mul_qt_qtqt(rv3d->viewquat, rv3d->viewquat, q1);

	if (use_sel) {
		conjugate_qt(q1);
		sub_v3_v3(rv3d->ofs, obofs);
		mul_qt_v3(q1, rv3d->ofs);
		add_v3_v3(rv3d->ofs, obofs);
	}

	/*----------------------------------------------------
	 * refresh the screen
	 */
// XXX    scrarea_do_windraw(curarea);
}
#endif // if 0, unused NDof code

/* give a 4x4 matrix from a perspective view, only needs viewquat, ofs and dist
 * basically the same as...
 *     rv3d->persp= RV3D_PERSP
 *     setviewmatrixview3d(scene, v3d, rv3d);
 *     setcameratoview3d(v3d, rv3d, v3d->camera);
 * ...but less of a hassle
 * */
void view3d_persp_mat4(RegionView3D *rv3d, float mat[][4])
{
	float qt[4], dvec[3];
	copy_qt_qt(qt, rv3d->viewquat);
	qt[0]= -qt[0];
	quat_to_mat4(mat, qt);
	mat[3][2] -= rv3d->dist;
	translate_m4(mat, rv3d->ofs[0], rv3d->ofs[1], rv3d->ofs[2]);
	mul_v3_v3fl(dvec, mat[2], -rv3d->dist);
	sub_v3_v3v3(mat[3], dvec, rv3d->ofs);
}
