# Install script for directory: /home/alexey/workspace/blender/blender/source/gameengine

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
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/BlenderRoutines/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Converter/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Expressions/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/GameLogic/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Ketsji/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Ketsji/KXNetwork/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Network/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Network/LoopBackNetwork/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Physics/common/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Physics/Dummy/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Rasterizer/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Rasterizer/RAS_OpenGLRasterizer/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/SceneGraph/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/Physics/Bullet/cmake_install.cmake")
  INCLUDE("/home/alexey/workspace/blender/blender/build/source/gameengine/VideoTexture/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

