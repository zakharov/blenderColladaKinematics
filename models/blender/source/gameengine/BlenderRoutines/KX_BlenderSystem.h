/**
 * $Id: KX_BlenderSystem.h 29259 2010-06-06 01:15:44Z campbellbarton $
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
#ifndef __KX_BLENDERSYSTEM
#define __KX_BLENDERSYSTEM

/**
 * Blender System embedding. Needed when gameengine runs embedded within Blender.
 */
#include "KX_ISystem.h"

#ifdef WITH_CXX_GUARDEDALLOC
#include "MEM_guardedalloc.h"
#endif

class KX_BlenderSystem : public KX_ISystem
{
	double	m_starttime;

public:
	KX_BlenderSystem();
	virtual ~KX_BlenderSystem() {};
	virtual double GetTimeInSeconds();



#ifdef WITH_CXX_GUARDEDALLOC
public:
	void *operator new(size_t num_bytes) { return MEM_mallocN(num_bytes, "GE:KX_BlenderSystem"); }
	void operator delete( void *mem ) { MEM_freeN(mem); }
#endif
};

#endif //__KX_BLENDERSYSTEM

