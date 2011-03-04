# Install script for directory: /home/anton/workspace/blenderColladaKinematics/external/blender/intern

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
    SET(CMAKE_INSTALL_CONFIG_NAME "")
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
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/audaspace/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/ghost/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/moto/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/memutil/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/iksolver/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/opennl/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/smoke/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/mikktspace/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/elbeem/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/container/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/decimation/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/boolop/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/bsp/cmake_install.cmake")
  INCLUDE("/home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/itasc/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)

