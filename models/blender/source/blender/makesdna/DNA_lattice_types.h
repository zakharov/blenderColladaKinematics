/**
 * $Id: DNA_lattice_types.h 34078 2011-01-05 00:37:21Z aligorith $ 
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
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */
#ifndef DNA_LATTICE_TYPES_H
#define DNA_LATTICE_TYPES_H

#include "DNA_ID.h"

struct AnimData;
struct BPoint;
struct Ipo;
struct Key;
struct MDeformVert;

typedef struct EditLatt {
	struct Lattice *latt;

	int shapenr;

	char pad[4];
} EditLatt;

typedef struct Lattice {
	ID id;
	struct AnimData *adt;
	
	short pntsu, pntsv, pntsw, flag;
	short opntsu, opntsv, opntsw, pad2;
	char typeu, typev, typew, pad3;
	int pad;
	
	float fu, fv, fw, du, dv, dw;
	
	struct BPoint *def;
	
	struct Ipo *ipo;  /* XXX: depreceated... old animation system */
	struct Key *key;
	
	struct MDeformVert *dvert;
	char vgroup[32]; /* multiply the influence */
	
	/* used while deforming, always free and NULL after use */
	float *latticedata;
	float latmat[4][4];
	
	struct EditLatt *editlatt;
} Lattice;

/* ***************** LATTICE ********************* */

/* flag */
#define LT_GRID		1
#define LT_OUTSIDE	2

#define LT_DS_EXPAND	4

#endif
