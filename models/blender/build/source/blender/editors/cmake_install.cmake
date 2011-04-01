# Install script for directory: /home/anton/workspace/blender/source/blender/editors

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/usr/local")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "debug")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/animation/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/armature/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/curve/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/datafiles/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/gpencil/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/interface/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/mesh/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/metaball/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/object/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/physics/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/render/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/screen/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/sculpt_paint/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/sound/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_action/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_api/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_buttons/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_console/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_file/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_graph/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_image/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_info/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_logic/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_nla/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_node/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_outliner/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_script/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_sequencer/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_sound/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_text/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_time/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_userpref/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/space_view3d/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/transform/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/util/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blender/build/source/blender/editors/uvedit/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

