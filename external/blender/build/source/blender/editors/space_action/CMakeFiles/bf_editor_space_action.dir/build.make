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
include source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/depend.make

# Include the progress variables for this target.
include source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/progress.make

# Include the compile flags for this target's objects.
include source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/flags.make

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/flags.make
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o: ../source/blender/editors/space_action/action_draw.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building C object source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_space_action.dir/action_draw.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_draw.c

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_space_action.dir/action_draw.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_draw.c > CMakeFiles/bf_editor_space_action.dir/action_draw.c.i

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_space_action.dir/action_draw.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_draw.c -o CMakeFiles/bf_editor_space_action.dir/action_draw.c.s

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.requires:
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.requires

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.provides: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.requires
	$(MAKE) -f source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build.make source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.provides.build
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.provides

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.provides.build: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.provides.build

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/flags.make
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o: ../source/blender/editors/space_action/action_edit.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@echo "Building C object source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_space_action.dir/action_edit.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_edit.c

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_space_action.dir/action_edit.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_edit.c > CMakeFiles/bf_editor_space_action.dir/action_edit.c.i

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_space_action.dir/action_edit.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_edit.c -o CMakeFiles/bf_editor_space_action.dir/action_edit.c.s

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.requires:
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.requires

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.provides: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.requires
	$(MAKE) -f source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build.make source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.provides.build
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.provides

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.provides.build: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.provides.build

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/flags.make
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o: ../source/blender/editors/space_action/action_ops.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@echo "Building C object source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_space_action.dir/action_ops.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_ops.c

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_space_action.dir/action_ops.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_ops.c > CMakeFiles/bf_editor_space_action.dir/action_ops.c.i

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_space_action.dir/action_ops.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_ops.c -o CMakeFiles/bf_editor_space_action.dir/action_ops.c.s

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.requires:
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.requires

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.provides: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.requires
	$(MAKE) -f source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build.make source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.provides.build
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.provides

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.provides.build: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.provides.build

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/flags.make
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o: ../source/blender/editors/space_action/action_select.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@echo "Building C object source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_space_action.dir/action_select.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_select.c

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_space_action.dir/action_select.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_select.c > CMakeFiles/bf_editor_space_action.dir/action_select.c.i

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_space_action.dir/action_select.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/action_select.c -o CMakeFiles/bf_editor_space_action.dir/action_select.c.s

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.requires:
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.requires

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.provides: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.requires
	$(MAKE) -f source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build.make source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.provides.build
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.provides

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.provides.build: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.provides.build

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/flags.make
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o: ../source/blender/editors/space_action/space_action.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@echo "Building C object source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_space_action.dir/space_action.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/space_action.c

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_space_action.dir/space_action.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/space_action.c > CMakeFiles/bf_editor_space_action.dir/space_action.c.i

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_space_action.dir/space_action.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action/space_action.c -o CMakeFiles/bf_editor_space_action.dir/space_action.c.s

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.requires:
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.requires

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.provides: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.requires
	$(MAKE) -f source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build.make source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.provides.build
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.provides

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.provides.build: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.provides.build

# Object files for target bf_editor_space_action
bf_editor_space_action_OBJECTS = \
"CMakeFiles/bf_editor_space_action.dir/action_draw.c.o" \
"CMakeFiles/bf_editor_space_action.dir/action_edit.c.o" \
"CMakeFiles/bf_editor_space_action.dir/action_ops.c.o" \
"CMakeFiles/bf_editor_space_action.dir/action_select.c.o" \
"CMakeFiles/bf_editor_space_action.dir/space_action.c.o"

# External object files for target bf_editor_space_action
bf_editor_space_action_EXTERNAL_OBJECTS =

lib/libbf_editor_space_action.a: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o
lib/libbf_editor_space_action.a: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o
lib/libbf_editor_space_action.a: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o
lib/libbf_editor_space_action.a: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o
lib/libbf_editor_space_action.a: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o
lib/libbf_editor_space_action.a: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build.make
lib/libbf_editor_space_action.a: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/link.txt
	@echo "Linking C static library ../../../../lib/libbf_editor_space_action.a"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_space_action.dir/cmake_clean_target.cmake
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_editor_space_action.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build: lib/libbf_editor_space_action.a
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/build

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/requires: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_draw.c.o.requires
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/requires: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_edit.c.o.requires
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/requires: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_ops.c.o.requires
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/requires: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/action_select.c.o.requires
source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/requires: source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/space_action.c.o.requires
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/requires

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/clean:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_space_action.dir/cmake_clean.cmake
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/clean

source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/depend:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/workspace/blenderColladaKinematics/external/blender /home/anton/workspace/blenderColladaKinematics/external/blender/source/blender/editors/space_action /home/anton/workspace/blenderColladaKinematics/external/blender/build /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action /home/anton/workspace/blenderColladaKinematics/external/blender/build/source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/blender/editors/space_action/CMakeFiles/bf_editor_space_action.dir/depend

