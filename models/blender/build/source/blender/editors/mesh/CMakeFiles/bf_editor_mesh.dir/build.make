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
CMAKE_SOURCE_DIR = /home/anton/workspace/blender

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anton/workspace/blender/build

# Include any dependencies generated for this target.
include source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/depend.make

# Include the progress variables for this target.
include source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/progress.make

# Include the compile flags for this target's objects.
include source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o: ../source/blender/editors/mesh/editface.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/editface.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/editface.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/editface.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/editface.c > CMakeFiles/bf_editor_mesh.dir/editface.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/editface.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/editface.c -o CMakeFiles/bf_editor_mesh.dir/editface.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o: ../source/blender/editors/mesh/editmesh.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/editmesh.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/editmesh.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/editmesh.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/editmesh.c > CMakeFiles/bf_editor_mesh.dir/editmesh.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/editmesh.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/editmesh.c -o CMakeFiles/bf_editor_mesh.dir/editmesh.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o: ../source/blender/editors/mesh/editmesh_add.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_add.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_add.c > CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_add.c -o CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o: ../source/blender/editors/mesh/editmesh_lib.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_lib.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_lib.c > CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_lib.c -o CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o: ../source/blender/editors/mesh/editmesh_loop.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_loop.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_loop.c > CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_loop.c -o CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o: ../source/blender/editors/mesh/editmesh_mods.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_mods.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_mods.c > CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_mods.c -o CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o: ../source/blender/editors/mesh/editmesh_tools.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_tools.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_tools.c > CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/editmesh_tools.c -o CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o: ../source/blender/editors/mesh/loopcut.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_8)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/loopcut.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/loopcut.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/loopcut.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/loopcut.c > CMakeFiles/bf_editor_mesh.dir/loopcut.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/loopcut.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/loopcut.c -o CMakeFiles/bf_editor_mesh.dir/loopcut.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o: ../source/blender/editors/mesh/mesh_data.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_9)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/mesh_data.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/mesh_data.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/mesh_data.c > CMakeFiles/bf_editor_mesh.dir/mesh_data.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/mesh_data.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/mesh_data.c -o CMakeFiles/bf_editor_mesh.dir/mesh_data.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o: ../source/blender/editors/mesh/mesh_ops.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_10)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/mesh_ops.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/mesh_ops.c > CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/mesh_ops.c -o CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.provides.build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/flags.make
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o: ../source/blender/editors/mesh/meshtools.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_11)
	@echo "Building C object source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_mesh.dir/meshtools.c.o   -c /home/anton/workspace/blender/source/blender/editors/mesh/meshtools.c

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_mesh.dir/meshtools.c.i"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/editors/mesh/meshtools.c > CMakeFiles/bf_editor_mesh.dir/meshtools.c.i

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_mesh.dir/meshtools.c.s"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/editors/mesh/meshtools.c -o CMakeFiles/bf_editor_mesh.dir/meshtools.c.s

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.requires:
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.provides: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.requires
	$(MAKE) -f source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.provides.build
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.provides

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.provides.build: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.provides.build

# Object files for target bf_editor_mesh
bf_editor_mesh_OBJECTS = \
"CMakeFiles/bf_editor_mesh.dir/editface.c.o" \
"CMakeFiles/bf_editor_mesh.dir/editmesh.c.o" \
"CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o" \
"CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o" \
"CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o" \
"CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o" \
"CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o" \
"CMakeFiles/bf_editor_mesh.dir/loopcut.c.o" \
"CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o" \
"CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o" \
"CMakeFiles/bf_editor_mesh.dir/meshtools.c.o"

# External object files for target bf_editor_mesh
bf_editor_mesh_EXTERNAL_OBJECTS =

lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build.make
lib/libbf_editor_mesh.a: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/link.txt
	@echo "Linking C static library ../../../../lib/libbf_editor_mesh.a"
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_mesh.dir/cmake_clean_target.cmake
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_editor_mesh.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build: lib/libbf_editor_mesh.a
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/build

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editface.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_add.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_lib.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_loop.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_mods.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/editmesh_tools.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/loopcut.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_data.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/mesh_ops.c.o.requires
source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires: source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/meshtools.c.o.requires
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/requires

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/clean:
	cd /home/anton/workspace/blender/build/source/blender/editors/mesh && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_mesh.dir/cmake_clean.cmake
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/clean

source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/depend:
	cd /home/anton/workspace/blender/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/workspace/blender /home/anton/workspace/blender/source/blender/editors/mesh /home/anton/workspace/blender/build /home/anton/workspace/blender/build/source/blender/editors/mesh /home/anton/workspace/blender/build/source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/blender/editors/mesh/CMakeFiles/bf_editor_mesh.dir/depend

