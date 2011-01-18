CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

SET(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/external/cmake-modules")
SET(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Only do Release and Debug" FORCE )
MARK_AS_ADVANCED(CMAKE_CONFIGURATION_TYPES)

PROJECT(BlenderCOLLADAKinematics)      #must be after setting cmake_configuration_types

#defines where specific parts of BRICS_MM are stored or created
SET(KINEMATICS_CORE_SRC                 ${CMAKE_HOME_DIRECTORY}/src)  #core sources
SET(LIBRARY_OUTPUT_PATH            ${CMAKE_HOME_DIRECTORY}/lib)  #static libraries 
SET(EXECUTABLE_OUTPUT_PATH         ${CMAKE_HOME_DIRECTORY}/bin)  #executables 
SET(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_HOME_DIRECTORY}/bin)  #dynamic libraries (plugins) 

#define all your definition which are put into all projects here
ADD_DEFINITIONS(-DKINEMATICS_MODELS_DIR="${CMAKE_HOME_DIRECTORY}/models")

# search for cpp unut testing library
FIND_PACKAGE(CppUnit)
IF (CppUnit_FOUND)
  MESSAGE(STATUS "SUCCESSFUL: CppUnit found")
ELSE (CppUnit_FOUND)
  MESSAGE(STATUS "WARNING: CppUnit not found")
ENDIF (CppUnit_FOUND)

# search for libxml2
FIND_PACKAGE(LibXml2)
IF (LIBXML2_FOUND)
  MESSAGE(STATUS "SUCCESSFUL: LibXml2 found")
ELSE (LIBXML2_FOUND) #if xml2 not found building its local copy from ./Externals
  MESSAGE("ERROR: LibXml2 not found")
ENDIF (LIBXML2_FOUND)

#search for pcre
FIND_PACKAGE(PCRE)
IF (PCRE_FOUND)
	MESSAGE(STATUS "SUCCESSFUL: PCRE found")
ELSE (PCRE_FOUND) #if pcre not found building its local copy from ./Externals
	MESSAGE("ERROR: PCRE not found")
ENDIF (PCRE_FOUND)

# TODO: create cmake find_package module for OpenCOLLADA
# appending requred include paths
SET(OPENCOLLADA_DIR /usr/local/opencollada CACHE FILEPATH "OpenCollada Directory")
SET(OPENCOLLADA_LIB_DIR ${OPENCOLLADA_DIR}/lib)
SET(OPENCOLLADA_LIBRARIES 
	OpenCOLLADASaxFrameworkLoader	
	GeneratedSaxParser	
	OpenCOLLADAFramework	
	OpenCOLLADABaseUtils
	MathMLSolver
        ${PCRE_LIBRARIES}
	${LIBXML2_LIBRARIES}
	UTF)
SET(OPENCOLLADA_INCLUDE_DIR
	${OPENCOLLADA_DIR}/COLLADAStreamWriter/include
	${OPENCOLLADA_DIR}/COLLADABaseUtils/include
	${OPENCOLLADA_DIR}/COLLADAFramework/include
	${OPENCOLLADA_DIR}/COLLADASaxFrameworkLoader/include
	${OPENCOLLADA_DIR}/GeneratedSaxParser/include
)

# path to the blender's source code
SET(BLENDER_SOURCE_DIR ${CMAKE_HOME_DIRECTORY}/external/blender/source/blender)

#include all CMakeList.txt files within this package
#each generates one library or application	
ADD_SUBDIRECTORY(src)    
IF(CppUnit_FOUND)
    ADD_SUBDIRECTORY(./tests) #compile everything in tests to create the unit test binaries
ENDIF(CppUnit_FOUND)

