/**
 * $Id: time_intern.h 27639 2010-03-21 01:14:04Z gsrb3d $
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

#ifndef ED_TIME_INTERN_H
#define ED_TIME_INTERN_H

/* internal exports only */

struct wmWindowManager;

/* time_ops.c */
void time_operatortypes(void);
void time_keymap(struct wmKeyConfig *keyconf);

/* time_header.c */
void time_header_buttons(const bContext *C, ARegion *ar);

#endif /* ED_TIME_INTERN_H */
