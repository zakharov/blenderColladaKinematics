# $Id: CMakeLists.txt 20156 2009-05-11 16:31:30Z ben2610 $
# ***** BEGIN GPL LICENSE BLOCK *****
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
#
# The Original Code is Copyright (C) 2006, Blender Foundation
# All rights reserved.
#
# The Original Code is: all of this file.
#
# Contributor(s): Jacques Beaurain.
#
# ***** END GPL LICENSE BLOCK *****

set(INC 
	../blenlib
	../makesdna
	../blenkernel
	../ikplugin
	../../../intern/guardedalloc
	../../../intern/iksolver/extern
)

set(SRC
	intern/ikplugin_api.c
	intern/iksolver_plugin.c

	BIK_api.h
	intern/ikplugin_api.h
	intern/iksolver_plugin.h
	intern/itasc_plugin.h
)

if(WITH_IK_ITASC)
	add_definitions(-DWITH_IK_ITASC)
	list(APPEND INC ../../../extern/Eigen2)
	list(APPEND INC ../../../intern/itasc)
	list(APPEND SRC
		./intern/itasc_plugin.cpp
	)
endif()

blender_add_lib(bf_ikplugin "${SRC}" "${INC}")
