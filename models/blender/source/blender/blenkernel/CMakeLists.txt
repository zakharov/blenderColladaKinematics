# $Id: CMakeLists.txt 34861 2011-02-15 09:24:35Z jesterking $
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
	.
	../avi
	../blenlib
	../blenloader
	../gpu
	../ikplugin
	../imbuf
	../makesdna
	../makesrna
	../modifiers
	../nodes
	../editors/include
	../render/extern/include
	../../../extern/glew/include
	../../../intern/audaspace/intern
	../../../intern/bsp/extern ../blenfont
	../../../intern/decimation/extern
	../../../intern/elbeem/extern
	../../../intern/guardedalloc
	../../../intern/iksolver/extern
	../../../intern/memutil
	../../../intern/opennl/extern
	../../../intern/smoke/extern
	../../../intern/mikktspace
    ../../../source/blender/windowmanager # XXX - BAD LEVEL CALL WM_api.h
	${ZLIB_INCLUDE_DIRS}
)

set(SRC
	intern/BME_Customdata.c
	intern/BME_conversions.c
	intern/BME_eulers.c
	intern/BME_mesh.c
	intern/BME_structure.c
	intern/BME_tools.c
	intern/CCGSubSurf.c
	intern/DerivedMesh.c
	intern/action.c
	intern/anim.c
	intern/anim_sys.c
	intern/armature.c
	intern/blender.c
	intern/bmfont.c
	intern/boids.c
	intern/booleanops_mesh.c
	intern/brush.c
	intern/bullet.c
	intern/bvhutils.c
	intern/cdderivedmesh.c
	intern/cloth.c
	intern/collision.c
	intern/colortools.c
	intern/constraint.c
	intern/context.c
	intern/curve.c
	intern/customdata.c
	intern/customdata_file.c
	intern/deform.c
	intern/depsgraph.c
	intern/displist.c
	intern/effect.c
	intern/exotic.c
	intern/fcurve.c
	intern/fluidsim.c
	intern/fmodifier.c
	intern/font.c
	intern/gpencil.c
	intern/group.c
	intern/icons.c
	intern/idcode.c
	intern/idprop.c
	intern/image.c
	intern/image_gen.c
	intern/implicit.c
	intern/ipo.c
	intern/key.c
	intern/lattice.c
	intern/library.c
	intern/material.c
	intern/mball.c
	intern/mesh.c
	intern/mesh_validate.c
	intern/modifier.c
	intern/multires.c
	intern/nla.c
	intern/node.c
	intern/object.c
	intern/packedFile.c
	intern/paint.c
	intern/particle.c
	intern/particle_system.c
	intern/pointcache.c
	intern/property.c
	intern/report.c
	intern/sca.c
	intern/scene.c
	intern/screen.c
	intern/script.c
	intern/seqcache.c
	intern/seqeffects.c
	intern/sequencer.c
	intern/shrinkwrap.c
	intern/sketch.c
	intern/smoke.c
	intern/softbody.c
	intern/sound.c
	intern/subsurf_ccg.c
	intern/suggestions.c
	intern/text.c
	intern/texture.c
	intern/unit.c
	intern/world.c
	intern/writeavi.c
	intern/writeffmpeg.c
	intern/writeframeserver.c

	BKE_DerivedMesh.h
	BKE_action.h
	BKE_anim.h
	BKE_animsys.h
	BKE_armature.h
	BKE_array_mallocn.h
	BKE_blender.h
	BKE_bmesh.h
	BKE_bmeshCustomData.h
	BKE_bmfont.h
	BKE_bmfont_types.h
	BKE_boids.h
	BKE_booleanops_mesh.h
	BKE_brush.h
	BKE_bullet.h
	BKE_bvhutils.h
	BKE_cdderivedmesh.h
	BKE_cloth.h
	BKE_collision.h
	BKE_colortools.h
	BKE_constraint.h
	BKE_context.h
	BKE_curve.h
	BKE_customdata.h
	BKE_customdata_file.h
	BKE_deform.h
	BKE_depsgraph.h
	BKE_displist.h
	BKE_effect.h
	BKE_endian.h
	BKE_exotic.h
	BKE_fcurve.h
	BKE_fluidsim.h
	BKE_font.h
	BKE_global.h
	BKE_gpencil.h
	BKE_group.h
	BKE_icons.h
	BKE_idcode.h
	BKE_idprop.h
	BKE_image.h
	BKE_ipo.h
	BKE_key.h
	BKE_lattice.h
	BKE_library.h
	BKE_main.h
	BKE_material.h
	BKE_mball.h
	BKE_mesh.h
	BKE_modifier.h
	BKE_multires.h
	BKE_nla.h
	BKE_node.h
	BKE_object.h
	BKE_packedFile.h
	BKE_paint.h
	BKE_particle.h
	BKE_plugin_types.h
	BKE_pointcache.h
	BKE_property.h
	BKE_report.h
	BKE_sca.h
	BKE_scene.h
	BKE_screen.h
	BKE_script.h
	BKE_sequencer.h
	BKE_shrinkwrap.h
	BKE_sketch.h
	BKE_smoke.h
	BKE_softbody.h
	BKE_sound.h
	BKE_subsurf.h
	BKE_suggestions.h
	BKE_text.h
	BKE_texture.h
	BKE_unit.h
	BKE_utildefines.h
	BKE_world.h
	BKE_writeavi.h
	BKE_writeffmpeg.h
	BKE_writeframeserver.h
	depsgraph_private.h
	intern/CCGSubSurf.h
	intern/bmesh_private.h
	nla_private.h
)

add_definitions(-DGLEW_STATIC)

if(WITH_BULLET)
	list(APPEND INC ../../../extern/bullet2/src)
	add_definitions(-DUSE_BULLET)
endif()

if(WITH_IMAGE_OPENEXR)
	add_definitions(-DWITH_OPENEXR)
endif()

if(WITH_IMAGE_TIFF)
	add_definitions(-DWITH_TIFF)
endif()

if(WITH_IMAGE_OPENJPEG)
	add_definitions(-DWITH_OPENJPEG)
endif()

if(WITH_IMAGE_DDS)
	add_definitions(-DWITH_DDS)
endif()

if(WITH_IMAGE_CINEON)
	add_definitions(-DWITH_CINEON)
endif()

if(WITH_IMAGE_HDR)
	add_definitions(-DWITH_HDR)
endif()

if(WITH_CODEC_QUICKTIME)
	list(APPEND INC ../quicktime ${QUICKTIME_INC})
	add_definitions(-DWITH_QUICKTIME)
endif()

if(WITH_CODEC_FFMPEG)
	list(APPEND INC ${FFMPEG_INC})
	add_definitions(-DWITH_FFMPEG)
endif()

if(WITH_LCMS)
	list(APPEND INC ${LCMS_INCLUDE_DIR})
	add_definitions(-DWITH_LCMS)
endif()

if(WITH_PYTHON)
	list(APPEND INC ../python ${PYTHON_INCLUDE_DIRS})
	add_definitions(-DWITH_PYTHON)
endif()

if(WITH_OPENMP)
	add_definitions(-DPARALLEL=1)
endif()

if(NOT WITH_MOD_FLUID)
	add_definitions(-DDISABLE_ELBEEM)
endif()

if(WITH_JACK)
	add_definitions(-DWITH_JACK)
endif()

if(WITH_LZO)
	list(APPEND INC ../../../extern/lzo/minilzo)
	add_definitions(-DWITH_LZO)
endif()

if(WITH_LZMA)
	list(APPEND INC ../../../extern/lzma)
	add_definitions(-DWITH_LZMA)
endif()

if(MSVC)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} /WX")
endif()

blender_add_lib(bf_blenkernel "${SRC}" "${INC}")
