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
include intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/depend.make

# Include the progress variables for this target.
include intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/progress.make

# Include the compile flags for this target's objects.
include intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/flags.make

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o: intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/flags.make
intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o: ../intern/guardedalloc/intern/mallocn.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building C object intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o   -c /home/anton/workspace/blenderColladaKinematics/external/blender/intern/guardedalloc/intern/mallocn.c

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/intern/guardedalloc/intern/mallocn.c > CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.i

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/intern/guardedalloc/intern/mallocn.c -o CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.s

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.requires:
.PHONY : intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.requires

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.provides: intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.requires
	$(MAKE) -f intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/build.make intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.provides.build
.PHONY : intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.provides

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.provides.build: intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o
.PHONY : intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.provides.build

# Object files for target bf_intern_guardedalloc
bf_intern_guardedalloc_OBJECTS = \
"CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o"

# External object files for target bf_intern_guardedalloc
bf_intern_guardedalloc_EXTERNAL_OBJECTS =

lib/libbf_intern_guardedalloc.a: intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o
lib/libbf_intern_guardedalloc.a: intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/build.make
lib/libbf_intern_guardedalloc.a: intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/link.txt
	@echo "Linking C static library ../../lib/libbf_intern_guardedalloc.a"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc && $(CMAKE_COMMAND) -P CMakeFiles/bf_intern_guardedalloc.dir/cmake_clean_target.cmake
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_intern_guardedalloc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/build: lib/libbf_intern_guardedalloc.a
.PHONY : intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/build

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/requires: intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/intern/mallocn.c.o.requires
.PHONY : intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/requires

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/clean:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc && $(CMAKE_COMMAND) -P CMakeFiles/bf_intern_guardedalloc.dir/cmake_clean.cmake
.PHONY : intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/clean

intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/depend:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/workspace/blenderColladaKinematics/external/blender /home/anton/workspace/blenderColladaKinematics/external/blender/intern/guardedalloc /home/anton/workspace/blenderColladaKinematics/external/blender/build /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : intern/guardedalloc/CMakeFiles/bf_intern_guardedalloc.dir/depend

