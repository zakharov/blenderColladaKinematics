# -*- mode: cmake; indent-tabs-mode: t; -*-
# $Id: CMakeLists.txt 34876 2011-02-15 19:04:51Z campbellbarton $
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

#-----------------------------------------------------------------------------
# We don't allow in-source builds. This causes no end of troubles because 
# all out-of-source builds will use the CMakeCache.txt file there and even 
# build the libs and objects in it. It will also conflict with the current 
# Makefile system for Blender

if(${CMAKE_SOURCE_DIR} STREQUAL ${CMAKE_BINARY_DIR})
message(FATAL_ERROR "CMake generation for blender is not allowed within the source directory! 
Remove the CMakeCache.txt file and try again from another folder, e.g.: 

	rm CMakeCache.txt 
	cd ..
	mkdir cmake-make 
	cd cmake-make
	cmake -G \"Unix Makefiles\" ../blender
")
endif()

cmake_minimum_required(VERSION 2.6)

# quiet output for Makefiles, 'make -s' helps too
# set_property(GLOBAL PROPERTY RULE_MESSAGES OFF)

project(Blender)

enable_testing()

#-----------------------------------------------------------------------------
# Redirect output files

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin CACHE INTERNAL "" FORCE )
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/lib CACHE INTERNAL "" FORCE )

#-----------------------------------------------------------------------------
# Load some macros.
include(build_files/cmake/macros.cmake)

#-----------------------------------------------------------------------------
# Set default config options

get_blender_version()

# Blender internal features
option(WITH_INTERNATIONAL "Enable I18N   (International fonts and text)" ON)
option(WITH_PYTHON        "Enable Embedded Python API" ON)
option(WITH_BUILDINFO     "Include extra build details" ON)
option(WITH_IK_ITASC      "Enable ITASC IK solver" ON)
option(WITH_FFTW3         "Enable FFTW3 support (Used for smoke and audio effects)" OFF)
option(WITH_BULLET        "Enable Bullet (Physics Engine)" ON)
option(WITH_GAMEENGINE    "Enable Game Engine" ON)
option(WITH_PLAYER        "Build Player" OFF)
# (unix defaults to OpenMP On)
if(UNIX AND NOT APPLE)
	option(WITH_OPENMP        "Enable OpenMP (has to be supported by the compiler)" ON)
else()
	option(WITH_OPENMP        "Enable OpenMP (has to be supported by the compiler)" OFF)
endif()

# Modifiers
option(WITH_MOD_FLUID        	"Enable Elbeem Modifier (Fluid Simulation)" ON)
option(WITH_MOD_DECIMATE       	"Enable Decimate Modifier" ON)
option(WITH_MOD_BOOLEAN        	"Enable Boolean Modifier" ON)

# Image format support
option(WITH_IMAGE_OPENEXR       "Enable OpenEXR Support (http://www.openexr.com)" ON)
option(WITH_IMAGE_OPENJPEG      "Enable OpenJpeg Support (http://www.openjpeg.org)" ON)
option(WITH_IMAGE_TIFF          "Enable LibTIFF Support" ON)
option(WITH_IMAGE_DDS           "Enable DDS Image Support" ON)
option(WITH_IMAGE_CINEON        "Enable CINEON and DPX Image Support" ON)
option(WITH_IMAGE_HDR           "Enable HDR Image Support" ON)
option(WITH_IMAGE_REDCODE       "Enable RedCode Image Support" OFF)

# Audio/Video format support
option(WITH_CODEC_FFMPEG        "Enable FFMPeg Support (http://ffmpeg.mplayerhq.hu)" OFF)
option(WITH_CODEC_SNDFILE       "Enable libsndfile Support (http://www.mega-nerd.com/libsndfile)" OFF)
if(APPLE OR (WIN32 AND NOT UNIX))
	option(WITH_CODEC_QUICKTIME     "Enable Quicktime Support" OFF)
endif()

# 3D format support
# disable opencollada on non-apple unix because opencollada has no package for debian
if(UNIX AND NOT APPLE)
	option(WITH_OPENCOLLADA		"Enable OpenCollada Support (http://www.opencollada.org)"	OFF)
else()
	option(WITH_OPENCOLLADA		"Enable OpenCollada Support (http://www.opencollada.org)"	OFF)
endif()

# Sound output
option(WITH_SDL           "Enable SDL for sound and joystick support" ON)
option(WITH_OPENAL        "Enable OpenAL Support (http://www.openal.org)" ON)
option(WITH_JACK          "Enable Jack Support (http://www.jackaudio.org)" OFF)
option(WITH_SAMPLERATE    "Enable samplerate conversion" ON)

# Compression
option(WITH_LZO           "Enable fast LZO compression (used for pointcache)" ON)
option(WITH_LZMA          "Enable best LZMA compression, (used for pointcache)" ON)

# Misc
option(WITH_RAYOPTIMIZATION	"Enable use of SIMD (SSE) optimizations for the raytracer" ON) 
option(WITH_INSTALL       "Install accompanying scripts and language files needed to run blender" ON)
option(WITH_PYTHON_INSTALL       "Copy system python into the blender install folder" ON)

# Debug
option(WITH_CXX_GUARDEDALLOC "Enable GuardedAlloc for C++ memory allocation tracking" OFF)
mark_as_advanced(WITH_CXX_GUARDEDALLOC)

option(WITH_ASSERT_ABORT "Call abort() when raising an assertion through BLI_assert()" OFF)
mark_as_advanced(WITH_ASSERT_ABORT)

if(APPLE)
	option(WITH_COCOA	  "Use Cocoa framework instead of deprecated Carbon" ON)
	option(USE_QTKIT	  "Use QtKit instead of Carbon quicktime (needed for having partial quicktime for 64bit)" OFF)
	option(WITH_LIBS10.5  "Use 10.5 libs (needed for 64bit builds)" OFF)
endif()

# only for developers who want to make this functional
# option(WITH_LCMS          "Enable color correction with lcms" OFF)

if(NOT WITH_GAMEENGINE AND WITH_PLAYER)
	message(FATAL_ERROR "WITH_PLAYER requires WITH_GAMEENGINE")
endif()

if(NOT WITH_INSTALL AND WITH_PYTHON_INSTALL)
	message("WARNING: WITH_PYTHON_INSTALL requires WITH_INSTALL")
endif()

if(NOT WITH_SAMPLERATE AND (WITH_OPENAL OR WITH_SDL OR WITH_JACK))
	message(FATAL_ERROR "WITH_OPENAL/WITH_SDL/WITH_JACK require WITH_SAMPLERATE")
endif()

if(NOT WITH_IMAGE_OPENJPEG AND WITH_IMAGE_REDCODE)
	message(FATAL_ERROR "WITH_IMAGE_REDCODE requires WITH_IMAGE_OPENJPEG")
endif()

TEST_SSE_SUPPORT()

# disabled for now, not supported
# option(WITH_WEBPLUGIN     "Enable Web Plugin (Unix only)" OFF)

# For alternate Python locations the commandline can be used to override detected/default cache settings, e.g:
# On Unix: 
#   cmake -D PYTHON_LIBRARY=/usr/local/lib/python3.1/config/libpython3.1.so -D PYTHON_INCLUDE_DIRS=/usr/local/include/python3.1 -G "Unix Makefiles" ../blender
# On Macs: 
#   cmake -D PYTHON_INCLUDE_DIRS=/System/Library/Frameworks/Python.framework/Versions/3.1/include/python3.1 -D PYTHON_LIBPATH=/System/Library/Frameworks/Python.framework/Versions/3.1/lib/python3.1/config -G Xcode ../blender
#
# When changing any of this remember to update the notes in doc/build_systems/cmake.txt

#-----------------------------------------------------------------------------
#Platform specifics

if(UNIX AND NOT APPLE)

	if(WITH_OPENAL)
		find_package(OpenAL)
		if(NOT OPENAL_FOUND)
			set(WITH_OPENAL OFF)
		endif()
	endif()

	if(WITH_JACK)
		set(JACK /usr)
		set(JACK_INC ${JACK}/include/jack)
		set(JACK_LIB jack)
		set(JACK_LIBPATH ${JACK}/lib)
	endif()

	if(WITH_CODEC_SNDFILE)
		set(SNDFILE /usr)
		set(SNDFILE_INC ${SNDFILE}/include)
		set(SNDFILE_LIB sndfile)
		set(SNDFILE_LIBPATH ${SNDFILE}/lib)
	endif()

	if(WITH_INTERNATIONAL)
		find_library(INTL_LIBRARY
			NAMES intl
			PATHS
			/sw/lib
		)

		find_library(ICONV_LIBRARY
			NAMES iconv
			PATHS
			/sw/lib
		)
		mark_as_advanced(ICONV_LIBRARY)
		mark_as_advanced(INTL_LIBRARY)

		if(INTL_LIBRARY AND ICONV_LIBRARY)
			set(GETTEXT_LIB ${INTL_LIBRARY} ${ICONV_LIBRARY})
		endif()
	endif()

	find_package(Freetype)
	# unset(FREETYPE_INCLUDE_DIRS CACHE) # cant use


	if(WITH_PYTHON)
		# No way to set py31. remove for now.
		# find_package(PythonLibs)
		set(PYTHON /usr)
		set(PYTHON_VERSION 3.1 CACHE STRING "")
		mark_as_advanced(PYTHON_VERSION)
		set(PYTHON_INCLUDE_DIRS "${PYTHON}/include/python${PYTHON_VERSION}" CACHE STRING "")
		mark_as_advanced(PYTHON_INCLUDE_DIRS)
		# set(PYTHON_BINARY python) # not used yet
		set(PYTHON_LIBRARY python${PYTHON_VERSION} CACHE STRING "")
		mark_as_advanced(PYTHON_LIBRARY)
		set(PYTHON_LIBPATH ${PYTHON}/lib CACHE STRING "")
		mark_as_advanced(PYTHON_LIBPATH)
		# find_package(PythonInterp) # not used yet
		# set(PYTHON_BINARY ${PYTHON_EXECUTABLE} CACHE STRING "")

		set(PYTHON_LINKFLAGS "-Xlinker -export-dynamic")
		mark_as_advanced(PYTHON_LINKFLAGS)
	endif()

	if(WITH_SDL)
		find_package(SDL)
		mark_as_advanced(SDLMAIN_LIBRARY)
		mark_as_advanced(SDL_INCLUDE_DIR)
		mark_as_advanced(SDL_LIBRARY)
		mark_as_advanced(SDL_LIBRARY_TEMP)
		# unset(SDLMAIN_LIBRARY CACHE)
		if(NOT SDL_FOUND)
			set(WITH_SDL OFF)
		endif()
	endif()

	if(WITH_IMAGE_OPENEXR)
		set(OPENEXR /usr CACHE FILEPATH "OPENEXR Directory")
		mark_as_advanced(OPENEXR)
		find_path(OPENEXR_INC
			ImfXdr.h
			PATHS
			${OPENEXR}/include/OpenEXR
			/usr/local/include/OpenEXR
			/sw/include/OpenEXR
			/opt/local/include/OpenEXR
			/opt/csw/include/OpenEXR
			/opt/include/OpenEXR
		)
		mark_as_advanced(OPENEXR_INC)

		set(OPENEXR_LIB Half IlmImf Iex Imath)
		
		if(NOT OPENEXR_INC)
			set(WITH_IMAGE_OPENEXR OFF)
		endif()
	endif()

	if(WITH_IMAGE_TIFF)
		find_package(TIFF)
		if(NOT TIFF_FOUND)
			set(WITH_IMAGE_TIFF OFF)
		endif()
	endif()

	find_package(JPEG REQUIRED)

	find_package(PNG REQUIRED)

	find_package(ZLIB REQUIRED)

	if(WITH_LCMS)
		set(LCMS /usr CACHE FILEPATH "LCMS directory")
		set(LCMS_INCLUDE_DIR ${LCMS}/include)
		set(LCMS_LIBRARY lcms)
		set(LCMS_LIBPATH ${LCMS}/lib)
	endif()

	if(WITH_CODEC_FFMPEG)
		set(FFMPEG /usr CACHE FILEPATH "FFMPEG Directory")
		mark_as_advanced(FFMPEG)
		set(FFMPEG_INC ${FFMPEG}/include)
		set(FFMPEG_LIB avformat avcodec avutil avdevice swscale CACHE STRING "FFMPEG Libraries")
		mark_as_advanced(FFMPEG_LIB)
		set(FFMPEG_LIBPATH ${FFMPEG}/lib)
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__STDC_CONSTANT_MACROS")
	endif()

	if(WITH_FFTW3)
		set(FFTW3 /usr)
		set(FFTW3_INC ${FFTW3}/include)
		set(FFTW3_LIB fftw3)
		set(FFTW3_LIBPATH ${FFTW3}/lib)
	endif()

	if(WITH_SAMPLERATE)
		set(LIBSAMPLERATE /usr)
		set(LIBSAMPLERATE_INC ${LIBSAMPLERATE}/include)
		set(LIBSAMPLERATE_LIB samplerate)
		set(LIBSAMPLERATE_LIBPATH ${LIBSAMPLERATE}/lib)
	endif()

	if(WITH_OPENCOLLADA)
		set(OPENCOLLADA /usr/local/opencollada CACHE FILEPATH "OpenCollada Directory")
		mark_as_advanced(OPENCOLLADA)
		set(OPENCOLLADA_LIBPATH ${OPENCOLLADA}/lib)
		set(OPENCOLLADA_LIB OpenCOLLADAStreamWriter OpenCOLLADASaxFrameworkLoader OpenCOLLADAFramework OpenCOLLADABaseUtils GeneratedSaxParser UTF MathMLSolver pcre ftoa buffer xml2)
		set(OPENCOLLADA_INC ${OPENCOLLADA})

		set(PCRE /usr CACHE FILEPATH "PCRE Directory")
		mark_as_advanced(PCRE)
		set(PCRE_LIBPATH ${PCRE}/lib)
		set(PCRE_LIB pcre)

		set(EXPAT /usr CACHE FILEPATH "Expat Directory")
		mark_as_advanced(EXPAT)
		set(EXPAT_LIBPATH ${EXPAT}/lib)
		set(EXPAT_LIB expat)
	endif()

	find_package(X11 REQUIRED)

	# OpenSuse needs lutil, ArchLinux not, for now keep, can avoid by using --as-needed
	set(LLIBS "-lutil -lc -lm -lpthread -lstdc++ ${X11_X11_LIB} ${X11_Xinput_LIB}")

	if(CMAKE_SYSTEM_NAME MATCHES "Linux")
		# BSD's dont use libdl.so
		list(APPEND LLIBS -ldl)

		# binreloc is linux only
		set(BINRELOC ${CMAKE_SOURCE_DIR}/extern/binreloc)
		set(BINRELOC_INC ${BINRELOC}/include)
	endif()

	set(PLATFORM_LINKFLAGS "-pthread")

	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE64_SOURCE")
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE64_SOURCE")

	# GNU Compiler
	if(CMAKE_COMPILER_IS_GNUCC)
		set(PLATFORM_CFLAGS "-pipe -fPIC -funsigned-char -fno-strict-aliasing")
	# Intel C++ Compiler
	elseif(CMAKE_C_COMPILER_ID MATCHES "Intel")
		# think these next two are broken
		find_program(XIAR xiar) 
		if(XIAR) 
			set(CMAKE_AR "${XIAR}")
		endif() 
		mark_as_advanced(XIAR)

		find_program(XILD xild) 
		if(XILD) 
			set(CMAKE_LINKER "${XILD}")
		endif() 
		mark_as_advanced(XILD)

		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fp-model precise -prec_div -parallel")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fp-model precise -prec_div -parallel")

		# set(PLATFORM_CFLAGS "${PLATFORM_CFLAGS} -diag-enable sc3")
		set(PLATFORM_CFLAGS "-pipe -fPIC -funsigned-char -fno-strict-aliasing")
		set(PLATFORM_LINKFLAGS "${PLATFORM_LINKFLAGS} -static-intel")
	endif()

elseif(WIN32)

	# this file is included anyway when building under Windows with cl.exe
	#  include(${CMAKE_ROOT}/Modules/Platform/Windows-cl.cmake)

	set(LIBDIR ${CMAKE_SOURCE_DIR}/../lib/windows)

	# Setup 64bit and 64bit windows systems
	if(CMAKE_CL_64)
		message("64 bit compiler detected.")
		set(LIBDIR ${CMAKE_SOURCE_DIR}/../lib/win64)
	endif()
	
	add_definitions(-DWIN32)

	if(WITH_INTERNATIONAL)
		set(ICONV ${LIBDIR}/iconv)
		set(ICONV_INC ${ICONV}/include)
		set(ICONV_LIB iconv)
		set(ICONV_LIBPATH ${ICONV}/lib)
	endif()

	if(WITH_SAMPLERATE)
		set(LIBSAMPLERATE ${LIBDIR}/samplerate)
		set(LIBSAMPLERATE_INC ${LIBSAMPLERATE}/include)
		set(LIBSAMPLERATE_LIB libsamplerate)
		set(LIBSAMPLERATE_LIBPATH ${LIBSAMPLERATE}/lib)
	endif()

	set(PNG "${LIBDIR}/png")
	set(PNG_INCLUDE_DIR "${PNG}/include")
	set(PNG_LIBPATH ${PNG}/lib) # not cmake defined

	set(JPEG "${LIBDIR}/jpeg")
	set(JPEG_INCLUDE_DIR "${JPEG}/include")
	set(JPEG_LIBPATH ${JPEG}/lib) # not cmake defined

	set(WINTAB_INC ${LIBDIR}/wintab/include) 

	if(WITH_OPENAL)
		set(OPENAL ${LIBDIR}/openal)
		set(OPENAL_INCLUDE_DIR ${OPENAL}/include)
		set(OPENAL_LIBRARY wrap_oal)
		set(OPENAL_LIBPATH ${OPENAL}/lib)
	endif()

	if(WITH_CODEC_SNDFILE)
		set(SNDFILE ${LIBDIR}/sndfile)
		set(SNDFILE_INC ${SNDFILE}/include)
		set(SNDFILE_LIB libsndfile-1)
		set(SNDFILE_LIBPATH ${SNDFILE}/lib)
	endif()

	if(WITH_SDL)
		set(SDL ${LIBDIR}/sdl)
		set(SDL_INCLUDE_DIR ${SDL}/include)
		set(SDL_LIBRARY SDL)
		set(SDL_LIBPATH ${SDL}/lib)
	endif()

	if(WITH_CODEC_QUICKTIME)
		set(QUICKTIME ${LIBDIR}/QTDevWin)
		set(QUICKTIME_INC ${QUICKTIME}/CIncludes)
		set(QUICKTIME_LIB qtmlClient)
		set(QUICKTIME_LIBPATH ${QUICKTIME}/Libraries)
	endif()

	if(WITH_RAYOPTIMIZATION AND SUPPORT_SSE_BUILD)
		add_definitions(-D__SSE__ -D__MMX__)
	endif()

	if(MSVC)
		if(CMAKE_CL_64)
			set(LLIBS kernel32 user32 vfw32 winmm ws2_32 )
		else()
			set(LLIBS kernel32 user32 gdi32 comdlg32 advapi32 shell32 ole32 oleaut32 uuid ws2_32 vfw32 winmm)
		endif()
		
		set(CMAKE_CXX_FLAGS "/D_CRT_NONSTDC_NO_DEPRECATE /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /we4013 /wd4018 /wd4800 /wd4244 /wd4305 /wd4065 /wd4267" CACHE STRING "MSVC MT C++ flags " FORCE)
		set(CMAKE_C_FLAGS   "/D_CRT_NONSTDC_NO_DEPRECATE /D_CRT_SECURE_NO_DEPRECATE /D_SCL_SECURE_NO_DEPRECATE /we4013 /wd4018 /wd4800 /wd4244 /wd4305 /wd4065 /wd4267" CACHE STRING "MSVC MT C++ flags " FORCE)

		if(CMAKE_CL_64)
			set(CMAKE_CXX_FLAGS_DEBUG "/D_DEBUG /Od /Gm /EHsc /RTC1 /MTd /W3 /nologo /Zi /J" CACHE STRING "MSVC MT flags " FORCE)
		else()
			set(CMAKE_CXX_FLAGS_DEBUG "/D_DEBUG /Od /Gm /EHsc /RTC1 /MTd /W3 /nologo /ZI /J" CACHE STRING "MSVC MT flags " FORCE)
		endif()
		set(CMAKE_CXX_FLAGS_RELEASE "/O2 /Ob2 /DNDEBUG /EHsc /MT /W3 /nologo /J" CACHE STRING "MSVC MT flags " FORCE)
		set(CMAKE_CXX_FLAGS_MINSIZEREL "/O1 /Ob1 /DNDEBUG /EHsc /MT /W3 /nologo /J" CACHE STRING "MSVC MT flags " FORCE)
		set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/O2 /Ob1 /DNDEBUG /EHsc /MT /W3 /nologo /Zi /J" CACHE STRING "MSVC MT flags " FORCE)
		if(CMAKE_CL_64)
			set(CMAKE_C_FLAGS_DEBUG "/D_DEBUG /Od /Gm /EHsc /RTC1 /MTd /W3 /nologo /Zi /J" CACHE STRING "MSVC MT flags " FORCE)
		else()
			set(CMAKE_C_FLAGS_DEBUG "/D_DEBUG /Od /Gm /EHsc /RTC1 /MTd /W3 /nologo /ZI /J" CACHE STRING "MSVC MT flags " FORCE)
		endif()
		set(CMAKE_C_FLAGS_RELEASE "/O2 /Ob2 /DNDEBUG /EHsc /MT /W3 /nologo /J" CACHE STRING "MSVC MT flags " FORCE)
		set(CMAKE_C_FLAGS_MINSIZEREL "/O1 /Ob1 /DNDEBUG /EHsc /MT /W3 /nologo /J" CACHE STRING "MSVC MT flags " FORCE)
		set(CMAKE_C_FLAGS_RELWITHDEBINFO "/O2 /Ob1 /DNDEBUG /EHsc /MT /W3 /nologo /Zi /J" CACHE STRING "MSVC MT flags " FORCE)

		if(WITH_INTERNATIONAL)
			set(GETTEXT ${LIBDIR}/gettext)
			set(GETTEXT_INC ${GETTEXT}/include)
			set(GETTEXT_LIBPATH ${GETTEXT}/lib)
			if(CMAKE_CL_64)
				set(GETTEXT_LIB gettext)
			else()
				set(GETTEXT_LIB gnu_gettext)
			endif()
		endif()

		if(CMAKE_CL_64)
			set(PNG_LIBRARIES libpng)
		else()
			set(PNG_LIBRARIES libpng_st)
		endif()
		set(JPEG_LIBRARIES libjpeg)

		set(ZLIB ${LIBDIR}/zlib)
		set(ZLIB_INCLUDE_DIRS ${ZLIB}/include)
		set(ZLIB_LIBPATH ${ZLIB}/lib)
		if(CMAKE_CL_64)
			set(ZLIB_LIBRARIES libz)
		else()
			set(ZLIB_LIBRARIES zlib)
		endif()

		set(PTHREADS ${LIBDIR}/pthreads)
		set(PTHREADS_INC ${PTHREADS}/include)
		set(PTHREADS_LIBPATH ${PTHREADS}/lib)
		set(PTHREADS_LIB pthreadVC2)
		
		set(FREETYPE ${LIBDIR}/freetype)
		set(FREETYPE_INCLUDE_DIRS ${FREETYPE}/include ${FREETYPE}/include/freetype2)
		set(FREETYPE_LIBPATH ${FREETYPE}/lib)
		set(FREETYPE_LIBRARY freetype2ST)

		if(WITH_FFTW3)
			set(FFTW3 ${LIBDIR}/fftw3)
			set(FFTW3_LIB libfftw)
			set(FFTW3_INC ${FFTW3}/include)
			set(FFTW3_LIBPATH ${FFTW3}/lib)
		endif()

		if(WITH_OPENCOLLADA)
			set(OPENCOLLADA ${LIBDIR}/opencollada)
			set(OPENCOLLADA_INC ${OPENCOLLADA}/include)
			set(OPENCOLLADA_LIBPATH ${OPENCOLLADA}/lib)
			set(OPENCOLLADA_LIB OpenCOLLADASaxFrameworkLoader OpenCOLLADAFramework OpenCOLLADABaseUtils OpenCOLLADAStreamWriter MathMLSolver GeneratedSaxParser xml2 buffer ftoa UTF)
			set(PCRE_LIB pcre)
		endif()
		
		if(WITH_LCMS)
			set(LCMS ${LIBDIR}/lcms)
			set(LCMS_INCLUDE_DIR ${LCMS}/include)
			set(LCMS_LIBPATH ${LCMS}/lib)
			set(LCMS_LIB lcms)
		endif()

		if(WITH_CODEC_FFMPEG)
			set(FFMPEG ${LIBDIR}/ffmpeg)
			set(FFMPEG_INC ${FFMPEG}/include ${FFMPEG}/include/msvc)
			set(FFMPEG_LIB avcodec-52 avformat-52 avdevice-52 avutil-50 swscale-0)
			set(FFMPEG_LIBPATH ${FFMPEG}/lib)
		endif()

		if(WITH_IMAGE_OPENEXR)
			if(MSVC80)
				set(MSVC_LIB _vs2005)
				set(MSVC_INC)
			elseif(MSVC90)
				set(MSVC_LIB _vs2008)
				set(MSVC_INC)
			elseif(MSVC10)
				set(MSVC_LIB _vs2010)
				set(MSVC_INC _vs2010)
			else()
				set(MSVC_LIB msvc)
				set(MSVC_INC)
			endif()
			set(OPENEXR ${LIBDIR}/openexr)			
			set(OPENEXR_LIB Iex Half IlmImf Imath IlmThread)
			set(OPENEXR_LIBPATH ${OPENEXR}/lib${MSVC_LIB})
			set(OPENEXR_INCUDE ${OPENEXR}/include${MSVC_INC})
			set(OPENEXR_INC ${OPENEXR_INCUDE}/ ${OPENEXR_INCUDE}/IlmImf ${OPENEXR_INCUDE}/Iex ${OPENEXR_INCUDE}/Imath)
		endif()

		if(WITH_IMAGE_TIFF)
			set(TIFF ${LIBDIR}/tiff)
			set(TIFF_LIBRARY libtiff)
			set(TIFF_INCLUDE_DIR ${TIFF}/include)
			set(TIFF_LIBPATH ${TIFF}/lib)
		endif()

		if(WITH_JACK)
			set(JACK ${LIBDIR}/jack)
			set(JACK_INC ${JACK}/include/jack ${JACK}/include)
			set(JACK_LIB libjack)
			set(JACK_LIBPATH ${JACK}/lib)
		endif()

		if(WITH_PYTHON)
			set(PYTHON ${LIBDIR}/python)
			set(PYTHON_VERSION 3.1)
			set(PYTHON_INCLUDE_DIRS "${PYTHON}/include/python${PYTHON_VERSION}")
			# set(PYTHON_BINARY python) # not used yet
			set(PYTHON_LIBRARY python31)
			set(PYTHON_LIBPATH ${PYTHON}/lib)
		endif()

		# MSVC only, Mingw doesnt need
		if(CMAKE_CL_64)
			set(PLATFORM_LINKFLAGS "/MACHINE:X64 /NODEFAULTLIB:libc.lib ")
		else()
			set(PLATFORM_LINKFLAGS "/NODEFAULTLIB:libc.lib ")
		endif()

		set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} /NODEFAULTLIB:libcmt.lib;libc.lib ")

	else()
		# keep GCC spesific stuff here
		if(CMAKE_COMPILER_IS_GNUCC)
			set(LLIBS "-lshell32 -lshfolder -lgdi32 -lmsvcrt -lwinmm -lmingw32 -lm -lws2_32 -lz -lstdc++ -lole32 -luuid")
			set(PLATFORM_CFLAGS "-pipe -funsigned-char -fno-strict-aliasing")

			set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE64_SOURCE")
			set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_LARGEFILE_SOURCE -D_FILE_OFFSET_BITS=64 -D_LARGEFILE64_SOURCE")
		endif()

		add_definitions(-DFREE_WINDOWS)

		set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_DEBUG")
		set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -D_DEBUG")

		if(WITH_INTERNATIONAL)
			set(GETTEXT ${LIBDIR}/gcc/gettext)
			set(GETTEXT_INC ${GETTEXT}/include)
			set(GETTEXT_LIBPATH ${GETTEXT}/lib)
			set(GETTEXT_LIB intl)
		endif()

		set(JPEG_LIBRARIES libjpeg)
		set(PNG_LIBRARIES png)

		set(ZLIB ${LIBDIR}/zlib)
		set(ZLIB_INCLUDE_DIRS ${ZLIB}/include)
		set(ZLIB_LIBPATH ${ZLIB}/lib)
		set(ZLIB_LIBRARIES z)

		set(PTHREADS ${LIBDIR}/pthreads)
		set(PTHREADS_INC ${PTHREADS}/include)
		set(PTHREADS_LIBPATH ${PTHREADS}/lib)
		set(PTHREADS_LIB pthreadGC2)
		
		set(FREETYPE ${LIBDIR}/gcc/freetype)
		set(FREETYPE_INCLUDE_DIRS ${FREETYPE}/include ${FREETYPE}/include/freetype2)
		set(FREETYPE_LIBPATH ${FREETYPE}/lib)
		set(FREETYPE_LIBRARY freetype)

		if(WITH_FFTW3)
			set(FFTW3 ${LIBDIR}/gcc/fftw3)
			set(FFTW3_LIB fftw3)
			set(FFTW3_INC ${FFTW3}/include)
			set(FFTW3_LIBPATH ${FFTW3}/lib)
		endif()

		if(WITH_OPENCOLLADA)
			set(OPENCOLLADA ${LIBDIR}/gcc/opencollada)
			set(OPENCOLLADA_INC ${OPENCOLLADA}/include)
			set(OPENCOLLADA_LIBPATH ${OPENCOLLADA}/lib ${OPENCOLLADA}/lib)
			set(OPENCOLLADA_LIB OpenCOLLADAStreamWriter OpenCOLLADASaxFrameworkLoader OpenCOLLADAFramework OpenCOLLADABaseUtils GeneratedSaxParser UTF MathMLSolver expat pcre buffer ftoa)
			set(PCRE_LIB pcre)
		endif()
		
		if(WITH_CODEC_FFMPEG)
			set(FFMPEG ${LIBDIR}/ffmpeg)
			set(FFMPEG_INC ${FFMPEG}/include ${FFMPEG}/include)
			set(FFMPEG_LIB avcodec-52 avformat-52 avdevice-52 avutil-50 swscale-0)
			set(FFMPEG_LIBPATH ${FFMPEG}/lib)
		endif()

		if(WITH_IMAGE_OPENEXR)
			set(OPENEXR ${LIBDIR}/gcc/openexr)
			set(OPENEXR_INC ${OPENEXR}/include ${OPENEXR}/include/OpenEXR)
			set(OPENEXR_LIB Half IlmImf Imath IlmThread)
			set(OPENEXR_LIBPATH ${OPENEXR}/lib)

			# TODO, gives linking errors, force off
			set(WITH_IMAGE_OPENEXR OFF)
		endif()

		if(WITH_IMAGE_TIFF)
			set(TIFF ${LIBDIR}/gcc/tiff)
			set(TIFF_LIBRARY tiff)
			set(TIFF_INCLUDE_DIR ${TIFF}/include)
			set(TIFF_LIBPATH ${TIFF}/lib)
		endif()

		if(WITH_JACK)
			set(JACK ${LIBDIR}/jack)
			set(JACK_INC ${JACK}/include/jack ${JACK}/include)
			set(JACK_LIB jack)
			set(JACK_LIBPATH ${JACK}/lib)
			
			# TODO, gives linking errors, force off
			set(WITH_JACK OFF)
		endif()

		if(WITH_PYTHON)
			set(PYTHON ${LIBDIR}/python)
			set(PYTHON_VERSION 3.1)
			set(PYTHON_INCLUDE_DIRS "${PYTHON}/include/python${PYTHON_VERSION}")
			# set(PYTHON_BINARY python) # not used yet
			set(PYTHON_LIBRARY python31mw)
			set(PYTHON_LIBPATH ${PYTHON}/lib)
		endif()

	endif()

	# used in many places so include globally, like OpenGL
	blender_include_dirs("${PTHREADS_INC}")

elseif(APPLE)

	if(WITH_LIBS10.5)
		set(LIBDIR ${CMAKE_SOURCE_DIR}/../lib/darwin-9.x.universal)
	else()
		if(CMAKE_OSX_ARCHITECTURES MATCHES i386)
			set(LIBDIR ${CMAKE_SOURCE_DIR}/../lib/darwin-8.x.i386)
		else()
			set(LIBDIR ${CMAKE_SOURCE_DIR}/../lib/darwin-8.0.0-powerpc)
		endif()
	endif()
	

	if(WITH_OPENAL)
		find_package(OpenAL)
		if(OPENAL_FOUND)
			set(WITH_OPENAL ON)
			set(OPENAL_INCLUDE_DIR "${LIBDIR}/openal/include")
		else()
			set(WITH_OPENAL OFF)
		endif()
	endif()

	if(WITH_JACK)
		set(JACK /usr)
		set(JACK_INC ${JACK}/include/jack)
		set(JACK_LIB jack)
		set(JACK_LIBPATH ${JACK}/lib)
	endif()

	if(WITH_CODEC_SNDFILE)
		set(SNDFILE ${LIBDIR}/sndfile)
		set(SNDFILE_INC ${SNDFILE}/include)
		set(SNDFILE_LIB sndfile FLAC ogg vorbis vorbisenc)
		set(SNDFILE_LIBPATH ${SNDFILE}/lib ${FFMPEG}/lib)
	endif()

	set(PYTHON_VERSION 3.1)

	if(PYTHON_VERSION MATCHES 3.1)
		# we use precompiled libraries for py 3.1 and up by default

		set(PYTHON ${LIBDIR}/python)
		set(PYTHON_INCLUDE_DIRS "${PYTHON}/include/python${PYTHON_VERSION}")
		# set(PYTHON_BINARY "${PYTHON}/bin/python${PYTHON_VERSION}") # not used yet
		set(PYTHON_LIBRARY python${PYTHON_VERSION})
		set(PYTHON_LIBPATH "${PYTHON}/lib/python${PYTHON_VERSION}")
		# set(PYTHON_LINKFLAGS "-u _PyMac_Error")  # won't  build with this enabled
	else()
		# otherwise, use custom system framework

		set(PYTHON /System/Library/Frameworks/Python.framework/Versions/)
		set(PYTHON_VERSION 3.1)
		set(PYTHON_INCLUDE_DIRS "${PYTHON}${PYTHON_VERSION}/include/python${PYTHON_VERSION}")
		# set(PYTHON_BINARY ${PYTHON}${PYTHON_VERSION}/bin/python${PYTHON_VERSION}) # not used yet
		set(PYTHON_LIBRARY "")
		set(PYTHON_LIBPATH ${PYTHON}${PYTHON_VERSION}/lib/python${PYTHON_VERSION}/config)
		set(PYTHON_LINKFLAGS "-u _PyMac_Error -framework System -framework Python")
	endif()

	if(WITH_INTERNATIONAL)
		set(GETTEXT ${LIBDIR}/gettext)
		set(GETTEXT_INC "${GETTEXT}/include")
		set(GETTEXT_LIB intl iconv)
		set(GETTEXT_LIBPATH ${GETTEXT}/lib)
	endif()
  
	if(WITH_FFTW3)
		set(FFTW3 ${LIBDIR}/fftw3)
		set(FFTW3_INC ${FFTW3}/include)
		set(FFTW3_LIB fftw3)
		set(FFTW3_LIBPATH ${FFTW3}/lib)
	endif()

	set(PNG_LIBRARIES png)
	set(JPEG_LIBRARIES jpeg)

	set(ZLIB /usr)
	set(ZLIB_INCLUDE_DIRS "${ZLIB}/include")
	set(ZLIB_LIBRARIES z bz2)

	set(FREETYPE ${LIBDIR}/freetype)
	set(FREETYPE_INCLUDE_DIRS ${FREETYPE}/include ${FREETYPE}/include/freetype2)
	set(FREETYPE_LIBPATH ${FREETYPE}/lib)
	set(FREETYPE_LIBRARY freetype)

	if(WITH_IMAGE_OPENEXR)
		set(OPENEXR ${LIBDIR}/openexr)
		set(OPENEXR_INC ${OPENEXR}/include/OpenEXR ${OPENEXR}/include)
		set(OPENEXR_LIB Iex Half IlmImf Imath IlmThread)
		set(OPENEXR_LIBPATH ${OPENEXR}/lib)
	endif()

	if(WITH_LCMS)
		set(LCMS ${LIBDIR}/lcms)
		set(LCMS_INCLUDE_DIR ${LCMS}/include)
		set(LCMS_LIBRARY lcms)
		set(LCMS_LIBPATH ${LCMS}/lib)
	endif()

	if(WITH_CODEC_FFMPEG)
		set(FFMPEG ${LIBDIR}/ffmpeg)
		set(FFMPEG_INC ${FFMPEG}/include)
		set(FFMPEG_LIB avcodec avdevice avformat avutil mp3lame swscale x264 xvidcore theora theoradec theoraenc vorbis vorbisenc vorbisfile ogg)
		set(FFMPEG_LIBPATH ${FFMPEG}/lib)
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D__STDC_CONSTANT_MACROS")
	endif()

	if(WITH_SAMPLERATE)
		set(LIBSAMPLERATE ${LIBDIR}/samplerate)
		set(LIBSAMPLERATE_INC ${LIBSAMPLERATE}/include)
		set(LIBSAMPLERATE_LIB samplerate)
		set(LIBSAMPLERATE_LIBPATH ${LIBSAMPLERATE}/lib)
	endif()

	set(LLIBS stdc++ SystemStubs)

	if(WITH_COCOA)
		set(PLATFORM_CFLAGS "-pipe -funsigned-char -DGHOST_COCOA")
		set(PLATFORM_LINKFLAGS "-fexceptions -framework CoreServices -framework Foundation -framework IOKit -framework AppKit -framework Cocoa -framework Carbon -framework AudioUnit -framework AudioToolbox -framework CoreAudio")
		if(USE_QTKIT)
			set(PLATFORM_CFLAGS "${PLATFORM_CFLAGS} -DUSE_QTKIT")
			set(PLATFORM_LINKFLAGS "${PLATFORM_LINKFLAGS} -framework QTKit")
			if(CMAKE_OSX_ARCHITECTURES MATCHES i386)
				set(PLATFORM_LINKFLAGS "${PLATFORM_LINKFLAGS} -framework QuickTime")
				#libSDL still needs 32bit carbon quicktime 
			endif()
		elseif(WITH_CODEC_QUICKTIME)
			set(PLATFORM_LINKFLAGS "${PLATFORM_LINKFLAGS} -framework QuickTime")
		endif()
	else()
		set(PLATFORM_CFLAGS "-pipe -funsigned-char")
		set(PLATFORM_LINKFLAGS "-fexceptions -framework CoreServices -framework Foundation -framework IOKit -framework AppKit -framework Carbon -framework AGL -framework AudioUnit -framework AudioToolbox -framework CoreAudio -framework QuickTime")
	endif()

	if(WITH_OPENCOLLADA)
		set(OPENCOLLADA ${LIBDIR}/opencollada)
		set(OPENCOLLADA_INC ${OPENCOLLADA}/include)
		set(OPENCOLLADA_LIBPATH ${OPENCOLLADA}/lib)
		set(OPENCOLLADA_LIB "OpenCOLLADASaxFrameworkLoader -lOpenCOLLADAFramework -lOpenCOLLADABaseUtils -lOpenCOLLADAStreamWriter -lMathMLSolver -lGeneratedSaxParser -lUTF -lxml2 -lbuffer -lftoa" )
		#pcre is bundled with openCollada
		#set(PCRE ${LIBDIR}/pcre)
		#set(PCRE_LIBPATH ${PCRE}/lib)
		set(PCRE_LIB pcre)
		#libxml2 is used
		#set(EXPAT ${LIBDIR}/expat)
		#set(EXPAT_LIBPATH ${EXPAT}/lib)
		set(EXPAT_LIB)
	endif()

	if(WITH_SDL)
		set(SDL ${LIBDIR}/sdl)
		set(SDL_INCLUDE_DIR ${SDL}/include)
		set(SDL_LIBRARY SDL)
		set(SDL_LIBPATH ${SDL}/lib)
	endif()

	set(PNG "${LIBDIR}/png")
	set(PNG_INCLUDE_DIR "${PNG}/include")
	set(PNG_LIBPATH ${PNG}/lib)

	set(JPEG "${LIBDIR}/jpeg")
	set(JPEG_INCLUDE_DIR "${JPEG}/include")
	set(JPEG_LIBPATH ${JPEG}/lib)

	if(WITH_IMAGE_TIFF)
		set(TIFF ${LIBDIR}/tiff)
		set(TIFF_INCLUDE_DIR ${TIFF}/include)
		set(TIFF_LIBRARY tiff)
		set(TIFF_LIBPATH ${TIFF}/lib)
	endif()

	set(EXETYPE MACOSX_BUNDLE)

	set(CMAKE_C_FLAGS_DEBUG "-fno-strict-aliasing -g")
	set(CMAKE_CXX_FLAGS_DEBUG "-fno-strict-aliasing -g")
	if(CMAKE_OSX_ARCHITECTURES MATCHES "i386")
		set(CMAKE_CXX_FLAGS_RELEASE "-O3 -mdynamic-no-pic -ftree-vectorize -msse -msse2 -fvariable-expansion-in-unroller")
		set(CMAKE_C_FLAGS_RELEASE "-O3 -mdynamic-no-pic -ftree-vectorize -msse -msse2 -fvariable-expansion-in-unroller")
	elseif(CMAKE_OSX_ARCHITECTURES MATCHES "x86_64")
		set(CMAKE_CXX_FLAGS_RELEASE "-O3 -mdynamic-no-pic -ftree-vectorize -msse -msse2 -msse3 -mssse3 -fvariable-expansion-in-unroller")
		set(CMAKE_C_FLAGS_RELEASE "-O3 -mdynamic-no-pic -ftree-vectorize -msse -msse2 -msse3 -mssse3 -fvariable-expansion-in-unroller")
	else()
		set(CMAKE_C_FLAGS_RELEASE "-mdynamic-no-pic -fno-strict-aliasing")
		set(CMAKE_CXX_FLAGS_RELEASE "-mdynamic-no-pic -fno-strict-aliasing")
	endif()
endif()


# buildinfo
if(WITH_BUILDINFO)
	# BUILD_PLATFORM and BUILD_PLATFORM are taken from CMake
	if(UNIX)
		execute_process(COMMAND date "+%Y-%m-%d" OUTPUT_VARIABLE BUILD_DATE OUTPUT_STRIP_TRAILING_WHITESPACE)
		execute_process(COMMAND date "+%H:%M:%S" OUTPUT_VARIABLE BUILD_TIME OUTPUT_STRIP_TRAILING_WHITESPACE)  
		execute_process(COMMAND svnversion ${CMAKE_SOURCE_DIR} OUTPUT_VARIABLE BUILD_REV RESULT_VARIABLE BUILD_REV_RETURN OUTPUT_STRIP_TRAILING_WHITESPACE)
		if(BUILD_REV_RETURN)
			set(BUILD_REV "unknown")
		endif()
	endif()
	
	if(WIN32)
		execute_process(COMMAND cmd /c date /t OUTPUT_VARIABLE BUILD_DATE OUTPUT_STRIP_TRAILING_WHITESPACE)
		execute_process(COMMAND cmd /c time /t OUTPUT_VARIABLE BUILD_TIME OUTPUT_STRIP_TRAILING_WHITESPACE)  
		execute_process(COMMAND svnversion ${CMAKE_SOURCE_DIR} OUTPUT_VARIABLE BUILD_REV RESULT_VARIABLE BUILD_REV_RETURN OUTPUT_STRIP_TRAILING_WHITESPACE)
		if(BUILD_REV_RETURN)
			set(BUILD_REV "unknown")
		endif()
	endif()
endif()
#-----------------------------------------------------------------------------
# Common.

if(WITH_RAYOPTIMIZATION)
	if(CMAKE_COMPILER_IS_GNUCC)
		if(SUPPORT_SSE_BUILD)
			set(PLATFORM_CFLAGS " -msse ${PLATFORM_CFLAGS}")
			add_definitions(-D__SSE__ -D__MMX__)
		endif()
		if(SUPPORT_SSE2_BUILD)
			set(PLATFORM_CFLAGS " -msse2 ${PLATFORM_CFLAGS}")
			add_definitions(-D__SSE2__)
			if(NOT SUPPORT_SSE_BUILD) # dont double up
				add_definitions(-D__MMX__)
			endif()
		endif()
	endif()
endif()

if(WITH_IMAGE_OPENJPEG)
	if(UNIX AND NOT APPLE)
		set(OPENJPEG /usr)
		set(OPENJPEG_INC ${OPENJPEG}/include)
		set(OPENJPEG_LIB openjpeg)
		set(OPENJPEG_LIBPATH ${OPENJPEG}/lib)
	else()
		set(OPENJPEG ${CMAKE_SOURCE_DIR}/extern/libopenjpeg)
		set(OPENJPEG_INC ${OPENJPEG})
	endif()
endif()

if(WITH_IMAGE_REDCODE)
	set(REDCODE ${CMAKE_SOURCE_DIR}/extern)
	set(REDCODE_INC ${REDCODE})
endif()

#-----------------------------------------------------------------------------
# Blender WebPlugin

if(WITH_WEBPLUGIN) 
	set(GECKO_DIR "${CMAKE_SOURCE_DIR}/../gecko-sdk/" CACHE PATH "Gecko SDK path")
	set(WEBPLUGIN_SANDBOX_MODE "apparmor" CACHE STRING "WEB Plugin sandbox mode, can be apparmor, privsep, none")

	set(WITH_PLAYER ON)
endif()


#-----------------------------------------------------------------------------
# Configure OpenGL.
find_package(OpenGL)
blender_include_dirs("${OPENGL_INCLUDE_DIR}")
# unset(OPENGL_LIBRARIES CACHE) # not compat with older cmake 
# unset(OPENGL_xmesa_INCLUDE_DIR CACHE) # not compat with older cmake 

#-----------------------------------------------------------------------------
# Configure OpenMP.
if(WITH_OPENMP)
	find_package(OpenMP)	
	if(OPENMP_FOUND)
		set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
		set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")

		if(APPLE AND ${CMAKE_GENERATOR} MATCHES "Xcode")
			set(CMAKE_XCODE_ATTRIBUTE_ENABLE_OPENMP_SUPPORT "YES")
		endif()
	else()
		set(WITH_OPENMP OFF)
	endif()

	mark_as_advanced(OpenMP_C_FLAGS)
	mark_as_advanced(OpenMP_CXX_FLAGS)
endif() 

#-----------------------------------------------------------------------------
# Extra compile flags

if((NOT WIN32) AND (NOT MSVC))
	# used for internal debug checks
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DDEBUG")
	set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -DDEBUG")
	
	# assert() checks for this.
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -DNDEBUG")
	set(CMAKE_CXX_FLAGS_MINSIZEREL "${CMAKE_CXX_FLAGS_MINSIZEREL} -DNDEBUG")
	set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} -DNDEBUG")

	set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -DNDEBUG")
	set(CMAKE_C_FLAGS_MINSIZEREL "${CMAKE_C_FLAGS_MINSIZEREL} -DNDEBUG")
	set(CMAKE_C_FLAGS_RELWITHDEBINFO "${CMAKE_C_FLAGS_RELWITHDEBINFO} -DNDEBUG")
endif()

if(CMAKE_COMPILER_IS_GNUCC)

	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_ALL -Wall)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_CAST_ALIGN -Wcast-align)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_ERROR_DECLARATION_AFTER_STATEMENT -Werror=declaration-after-statement)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_ERROR_IMPLICIT_FUNCTION_DECLARATION -Werror=implicit-function-declaration)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_ERROR_RETURN_TYPE -Werror=return-type)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_ERROR_STRICT_PROTOTYPES -Werror=strict-prototypes)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_NO_CHAR_SUBSCRIPTS -Wno-char-subscripts)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_NO_UNKNOWN_PRAGMAS -Wno-unknown-pragmas)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_POINTER_ARITH -Wpointer-arith)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_UNUSED_PARAMETER -Wunused-parameter)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_WRITE_STRINGS -Wwrite-strings)

	ADD_CHECK_CXX_COMPILER_FLAG(CXX_WARNINGS CXX_WARN_ALL -Wall)
	ADD_CHECK_CXX_COMPILER_FLAG(CXX_WARNINGS CXX_WARN_NO_INVALID_OFFSETOF -Wno-invalid-offsetof)
	ADD_CHECK_CXX_COMPILER_FLAG(CXX_WARNINGS CXX_WARN_NO_SIGN_COMPARE -Wno-sign-compare)

elseif(CMAKE_C_COMPILER_ID MATCHES "Intel")

	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_ALL -Wall)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_POINTER_ARITH -Wpointer-arith)
	ADD_CHECK_C_COMPILER_FLAG(C_WARNINGS C_WARN_NO_UNKNOWN_PRAGMAS -Wno-unknown-pragmas)

	ADD_CHECK_CXX_COMPILER_FLAG(CXX_WARNINGS CXX_WARN_ALL -Wall)
	ADD_CHECK_CXX_COMPILER_FLAG(CXX_WARNINGS CXX_WARN_NO_INVALID_OFFSETOF -Wno-invalid-offsetof)
	ADD_CHECK_CXX_COMPILER_FLAG(CXX_WARNINGS CXX_WARN_NO_SIGN_COMPARE -Wno-sign-compare)

endif()


set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${PLATFORM_CFLAGS} ${C_WARNINGS}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${PLATFORM_CFLAGS} ${CXX_WARNINGS}")

# better not define flags here but this is a debugging option thats off by default.
if(WITH_CXX_GUARDEDALLOC)
	set(CMAKE_CXX_FLAGS " -DWITH_CXX_GUARDEDALLOC -I${CMAKE_SOURCE_DIR}/intern/guardedalloc ${CMAKE_CXX_FLAGS}")
endif()

if(WITH_ASSERT_ABORT)
	add_definitions(-DWITH_ASSERT_ABORT)
endif()

# message(STATUS "Using CFLAGS: ${CMAKE_C_FLAGS}")
# message(STATUS "Using CXXFLAGS: ${CMAKE_CXX_FLAGS}")

#-----------------------------------------------------------------------------
# Libraries

add_subdirectory(source)
add_subdirectory(intern)
add_subdirectory(extern)


#-----------------------------------------------------------------------------
# Blender Application
add_subdirectory(source/creator)


#-----------------------------------------------------------------------------
# Blender Player
if(WITH_PLAYER)
	add_subdirectory(source/blenderplayer)
endif()

#-----------------------------------------------------------------------------
# CPack for generating packages
include(build_files/cmake/packaging.cmake)
