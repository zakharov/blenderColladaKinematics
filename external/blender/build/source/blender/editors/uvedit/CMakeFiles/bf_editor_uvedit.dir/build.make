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
CMAKE_SOURCE_DIR = /home/alexey/workspace/blender/blender

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/alexey/workspace/blender/blender/build

# Include any dependencies generated for this target.
include source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/depend.make

# Include the progress variables for this target.
include source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/progress.make

# Include the compile flags for this target's objects.
include source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/flags.make

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/flags.make
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o: ../source/blender/editors/uvedit/uvedit_draw.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alexey/workspace/blender/blender/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building C object source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o   -c /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_draw.c

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.i"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_draw.c > CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.i

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.s"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_draw.c -o CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.s

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.requires:
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.requires

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.provides: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.requires
	$(MAKE) -f source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/build.make source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.provides.build
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.provides

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.provides.build: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.provides.build

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/flags.make
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o: ../source/blender/editors/uvedit/uvedit_ops.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alexey/workspace/blender/blender/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@echo "Building C object source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o   -c /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_ops.c

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.i"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_ops.c > CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.i

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.s"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_ops.c -o CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.s

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.requires:
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.requires

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.provides: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.requires
	$(MAKE) -f source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/build.make source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.provides.build
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.provides

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.provides.build: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.provides.build

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/flags.make
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o: ../source/blender/editors/uvedit/uvedit_parametrizer.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alexey/workspace/blender/blender/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@echo "Building C object source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o   -c /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_parametrizer.c

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.i"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_parametrizer.c > CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.i

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.s"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_parametrizer.c -o CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.s

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.requires:
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.requires

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.provides: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.requires
	$(MAKE) -f source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/build.make source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.provides.build
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.provides

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.provides.build: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.provides.build

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/flags.make
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o: ../source/blender/editors/uvedit/uvedit_unwrap_ops.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/alexey/workspace/blender/blender/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@echo "Building C object source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o   -c /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_unwrap_ops.c

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.i"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_unwrap_ops.c > CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.i

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.s"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/alexey/workspace/blender/blender/source/blender/editors/uvedit/uvedit_unwrap_ops.c -o CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.s

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.requires:
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.requires

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.provides: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.requires
	$(MAKE) -f source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/build.make source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.provides.build
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.provides

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.provides.build: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.provides.build

# Object files for target bf_editor_uvedit
bf_editor_uvedit_OBJECTS = \
"CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o" \
"CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o" \
"CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o" \
"CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o"

# External object files for target bf_editor_uvedit
bf_editor_uvedit_EXTERNAL_OBJECTS =

lib/libbf_editor_uvedit.a: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o
lib/libbf_editor_uvedit.a: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o
lib/libbf_editor_uvedit.a: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o
lib/libbf_editor_uvedit.a: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o
lib/libbf_editor_uvedit.a: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/build.make
lib/libbf_editor_uvedit.a: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/link.txt
	@echo "Linking C static library ../../../../lib/libbf_editor_uvedit.a"
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_uvedit.dir/cmake_clean_target.cmake
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_editor_uvedit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/build: lib/libbf_editor_uvedit.a
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/build

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/requires: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_draw.c.o.requires
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/requires: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_ops.c.o.requires
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/requires: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_parametrizer.c.o.requires
source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/requires: source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/uvedit_unwrap_ops.c.o.requires
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/requires

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/clean:
	cd /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit && $(CMAKE_COMMAND) -P CMakeFiles/bf_editor_uvedit.dir/cmake_clean.cmake
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/clean

source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/depend:
	cd /home/alexey/workspace/blender/blender/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/alexey/workspace/blender/blender /home/alexey/workspace/blender/blender/source/blender/editors/uvedit /home/alexey/workspace/blender/blender/build /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit /home/alexey/workspace/blender/blender/build/source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/blender/editors/uvedit/CMakeFiles/bf_editor_uvedit.dir/depend
