# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/cmake-gui

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anton/workspace/blenderColladaKinematics/external/blender

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/workspace/blenderColladaKinematics/external/blender/build

# Include any dependencies generated for this target.
include source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/depend.make

# Include the progress variables for this target.
include source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/progress.make

# Include the compile flags for this target's objects.
include source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/flags.make

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/flags.make
source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o: ../source/blender/editors/space_api/space.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building C object source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_space_api.dir/space.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_api/space.c

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_space_api.dir/space.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_api/space.c > CMakeFiles/bf_editor_space_api.dir/space.c.i

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_space_api.dir/space.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_api/space.c -o CMakeFiles/bf_editor_space_api.dir/space.c.s

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.requires:
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.requires

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.provides: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.requires
	$(MAKE) -f source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/build.make source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.provides.build
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.provides

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.provides.build: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.provides.build

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/flags.make
source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o: ../source/blender/editors/space_api/spacetypes.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@echo "Building C object source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_api/spacetypes.c

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_space_api.dir/spacetypes.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_api/spacetypes.c > CMakeFiles/bf_editor_space_api.dir/spacetypes.c.i

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_space_api.dir/spacetypes.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_api/spacetypes.c -o CMakeFiles/bf_editor_space_api.dir/spacetypes.c.s

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.requires:
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.requires

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.provides: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.requires
	$(MAKE) -f source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/build.make source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.provides.build
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.provides

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.provides.build: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.provides.build

# Object files for target bf_editor_space_api
bf_editor_space_api_OBJECTS = \
"CMakeFiles/bf_editor_space_api.dir/space.c.o" \
"CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o"

# External object files for target bf_editor_space_api
bf_editor_space_api_EXTERNAL_OBJECTS =

lib/libbf_editor_space_api.a: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o
lib/libbf_editor_space_api.a: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o
lib/libbf_editor_space_api.a: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/build.make
lib/libbf_editor_space_api.a: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/link.txt
	@echo "Linking C static library ../../../../lib/libbf_editor_space_api.a"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_space_api.dir/cmake_clean_target.cmake
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_editor_space_api.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/build: lib/libbf_editor_space_api.a
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/build

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/requires: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/space.c.o.requires
source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/requires: source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/spacetypes.c.o.requires
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/requires

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/clean:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_space_api.dir/cmake_clean.cmake
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/clean

source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/depend:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/workspace/blenderColladaKinematics/external/blender /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_api /home/anton/workspace/blenderColladaKinematics/external/blender/build /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/blender/editors/space_api/CMakeFiles/bf_editor_space_api.dir/depend

