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
include intern/string/CMakeFiles/bf_intern_string.dir/depend.make

# Include the progress variables for this target.
include intern/string/CMakeFiles/bf_intern_string.dir/progress.make

# Include the compile flags for this target's objects.
include intern/string/CMakeFiles/bf_intern_string.dir/flags.make

intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o: intern/string/CMakeFiles/bf_intern_string.dir/flags.make
intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o: ../intern/string/intern/STR_String.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blenderColladaKinematics/external/blender/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building CXX object intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o -c /home/anton/workspace/blenderColladaKinematics/external/blender/intern/string/intern/STR_String.cpp

intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.i: cmake_force
	@echo "Preprocessing CXX source to CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.i"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/anton/workspace/blenderColladaKinematics/external/blender/intern/string/intern/STR_String.cpp > CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.i

intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.s: cmake_force
	@echo "Compiling CXX source to assembly CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.s"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/anton/workspace/blenderColladaKinematics/external/blender/intern/string/intern/STR_String.cpp -o CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.s

intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.requires:
.PHONY : intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.requires

intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.provides: intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.requires
	$(MAKE) -f intern/string/CMakeFiles/bf_intern_string.dir/build.make intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.provides.build
.PHONY : intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.provides

intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.provides.build: intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o
.PHONY : intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.provides.build

# Object files for target bf_intern_string
bf_intern_string_OBJECTS = \
"CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o"

# External object files for target bf_intern_string
bf_intern_string_EXTERNAL_OBJECTS =

lib/libbf_intern_string.a: intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o
lib/libbf_intern_string.a: intern/string/CMakeFiles/bf_intern_string.dir/build.make
lib/libbf_intern_string.a: intern/string/CMakeFiles/bf_intern_string.dir/link.txt
	@echo "Linking CXX static library ../../lib/libbf_intern_string.a"
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string && $(CMAKE_COMMAND) -P CMakeFiles/bf_intern_string.dir/cmake_clean_target.cmake
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_intern_string.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
intern/string/CMakeFiles/bf_intern_string.dir/build: lib/libbf_intern_string.a
.PHONY : intern/string/CMakeFiles/bf_intern_string.dir/build

intern/string/CMakeFiles/bf_intern_string.dir/requires: intern/string/CMakeFiles/bf_intern_string.dir/intern/STR_String.cpp.o.requires
.PHONY : intern/string/CMakeFiles/bf_intern_string.dir/requires

intern/string/CMakeFiles/bf_intern_string.dir/clean:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string && $(CMAKE_COMMAND) -P CMakeFiles/bf_intern_string.dir/cmake_clean.cmake
.PHONY : intern/string/CMakeFiles/bf_intern_string.dir/clean

intern/string/CMakeFiles/bf_intern_string.dir/depend:
	cd /home/anton/workspace/blenderColladaKinematics/external/blender/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/workspace/blenderColladaKinematics/external/blender /home/anton/workspace/blenderColladaKinematics/external/blender/intern/string /home/anton/workspace/blenderColladaKinematics/external/blender/build /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string /home/anton/workspace/blenderColladaKinematics/external/blender/build/intern/string/CMakeFiles/bf_intern_string.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : intern/string/CMakeFiles/bf_intern_string.dir/depend

