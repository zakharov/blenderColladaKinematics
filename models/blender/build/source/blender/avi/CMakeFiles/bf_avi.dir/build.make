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
include source/blender/avi/CMakeFiles/bf_avi.dir/depend.make

# Include the progress variables for this target.
include source/blender/avi/CMakeFiles/bf_avi.dir/progress.make

# Include the compile flags for this target's objects.
include source/blender/avi/CMakeFiles/bf_avi.dir/flags.make

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o: source/blender/avi/CMakeFiles/bf_avi.dir/flags.make
source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o: ../source/blender/avi/intern/avi.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@echo "Building C object source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_avi.dir/intern/avi.c.o   -c /home/anton/workspace/blender/source/blender/avi/intern/avi.c

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_avi.dir/intern/avi.c.i"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/avi/intern/avi.c > CMakeFiles/bf_avi.dir/intern/avi.c.i

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_avi.dir/intern/avi.c.s"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/avi/intern/avi.c -o CMakeFiles/bf_avi.dir/intern/avi.c.s

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.requires:
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.requires

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.provides: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.requires
	$(MAKE) -f source/blender/avi/CMakeFiles/bf_avi.dir/build.make source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.provides.build
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.provides

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.provides.build: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.provides.build

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o: source/blender/avi/CMakeFiles/bf_avi.dir/flags.make
source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o: ../source/blender/avi/intern/avirgb.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@echo "Building C object source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_avi.dir/intern/avirgb.c.o   -c /home/anton/workspace/blender/source/blender/avi/intern/avirgb.c

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_avi.dir/intern/avirgb.c.i"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/avi/intern/avirgb.c > CMakeFiles/bf_avi.dir/intern/avirgb.c.i

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_avi.dir/intern/avirgb.c.s"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/avi/intern/avirgb.c -o CMakeFiles/bf_avi.dir/intern/avirgb.c.s

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.requires:
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.requires

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.provides: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.requires
	$(MAKE) -f source/blender/avi/CMakeFiles/bf_avi.dir/build.make source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.provides.build
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.provides

source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.provides.build: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.provides.build

source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o: source/blender/avi/CMakeFiles/bf_avi.dir/flags.make
source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o: ../source/blender/avi/intern/codecs.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_3)
	@echo "Building C object source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_avi.dir/intern/codecs.c.o   -c /home/anton/workspace/blender/source/blender/avi/intern/codecs.c

source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_avi.dir/intern/codecs.c.i"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/avi/intern/codecs.c > CMakeFiles/bf_avi.dir/intern/codecs.c.i

source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_avi.dir/intern/codecs.c.s"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/avi/intern/codecs.c -o CMakeFiles/bf_avi.dir/intern/codecs.c.s

source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.requires:
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.requires

source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.provides: source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.requires
	$(MAKE) -f source/blender/avi/CMakeFiles/bf_avi.dir/build.make source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.provides.build
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.provides

source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.provides.build: source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.provides.build

source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o: source/blender/avi/CMakeFiles/bf_avi.dir/flags.make
source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o: ../source/blender/avi/intern/endian.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_4)
	@echo "Building C object source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_avi.dir/intern/endian.c.o   -c /home/anton/workspace/blender/source/blender/avi/intern/endian.c

source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_avi.dir/intern/endian.c.i"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/avi/intern/endian.c > CMakeFiles/bf_avi.dir/intern/endian.c.i

source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_avi.dir/intern/endian.c.s"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/avi/intern/endian.c -o CMakeFiles/bf_avi.dir/intern/endian.c.s

source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.requires:
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.requires

source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.provides: source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.requires
	$(MAKE) -f source/blender/avi/CMakeFiles/bf_avi.dir/build.make source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.provides.build
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.provides

source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.provides.build: source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.provides.build

source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o: source/blender/avi/CMakeFiles/bf_avi.dir/flags.make
source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o: ../source/blender/avi/intern/mjpeg.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_5)
	@echo "Building C object source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_avi.dir/intern/mjpeg.c.o   -c /home/anton/workspace/blender/source/blender/avi/intern/mjpeg.c

source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_avi.dir/intern/mjpeg.c.i"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/avi/intern/mjpeg.c > CMakeFiles/bf_avi.dir/intern/mjpeg.c.i

source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_avi.dir/intern/mjpeg.c.s"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/avi/intern/mjpeg.c -o CMakeFiles/bf_avi.dir/intern/mjpeg.c.s

source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.requires:
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.requires

source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.provides: source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.requires
	$(MAKE) -f source/blender/avi/CMakeFiles/bf_avi.dir/build.make source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.provides.build
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.provides

source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.provides.build: source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.provides.build

source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o: source/blender/avi/CMakeFiles/bf_avi.dir/flags.make
source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o: ../source/blender/avi/intern/options.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_6)
	@echo "Building C object source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_avi.dir/intern/options.c.o   -c /home/anton/workspace/blender/source/blender/avi/intern/options.c

source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_avi.dir/intern/options.c.i"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/avi/intern/options.c > CMakeFiles/bf_avi.dir/intern/options.c.i

source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_avi.dir/intern/options.c.s"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/avi/intern/options.c -o CMakeFiles/bf_avi.dir/intern/options.c.s

source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.requires:
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.requires

source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.provides: source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.requires
	$(MAKE) -f source/blender/avi/CMakeFiles/bf_avi.dir/build.make source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.provides.build
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.provides

source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.provides.build: source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.provides.build

source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o: source/blender/avi/CMakeFiles/bf_avi.dir/flags.make
source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o: ../source/blender/avi/intern/rgb32.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/anton/workspace/blender/build/CMakeFiles $(CMAKE_PROGRESS_7)
	@echo "Building C object source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/bf_avi.dir/intern/rgb32.c.o   -c /home/anton/workspace/blender/source/blender/avi/intern/rgb32.c

source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.i: cmake_force
	@echo "Preprocessing C source to CMakeFiles/bf_avi.dir/intern/rgb32.c.i"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -E /home/anton/workspace/blender/source/blender/avi/intern/rgb32.c > CMakeFiles/bf_avi.dir/intern/rgb32.c.i

source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.s: cmake_force
	@echo "Compiling C source to assembly CMakeFiles/bf_avi.dir/intern/rgb32.c.s"
	cd /home/anton/workspace/blender/build/source/blender/avi && /usr/bin/gcc  $(C_DEFINES) $(C_FLAGS) -S /home/anton/workspace/blender/source/blender/avi/intern/rgb32.c -o CMakeFiles/bf_avi.dir/intern/rgb32.c.s

source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.requires:
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.requires

source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.provides: source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.requires
	$(MAKE) -f source/blender/avi/CMakeFiles/bf_avi.dir/build.make source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.provides.build
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.provides

source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.provides.build: source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.provides.build

# Object files for target bf_avi
bf_avi_OBJECTS = \
"CMakeFiles/bf_avi.dir/intern/avi.c.o" \
"CMakeFiles/bf_avi.dir/intern/avirgb.c.o" \
"CMakeFiles/bf_avi.dir/intern/codecs.c.o" \
"CMakeFiles/bf_avi.dir/intern/endian.c.o" \
"CMakeFiles/bf_avi.dir/intern/mjpeg.c.o" \
"CMakeFiles/bf_avi.dir/intern/options.c.o" \
"CMakeFiles/bf_avi.dir/intern/rgb32.c.o"

# External object files for target bf_avi
bf_avi_EXTERNAL_OBJECTS =

lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/build.make
lib/libbf_avi.a: source/blender/avi/CMakeFiles/bf_avi.dir/link.txt
	@echo "Linking C static library ../../../lib/libbf_avi.a"
	cd /home/anton/workspace/blender/build/source/blender/avi && $(CMAKE_COMMAND) -P CMakeFiles/bf_avi.dir/cmake_clean_target.cmake
	cd /home/anton/workspace/blender/build/source/blender/avi && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/bf_avi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
source/blender/avi/CMakeFiles/bf_avi.dir/build: lib/libbf_avi.a
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/build

source/blender/avi/CMakeFiles/bf_avi.dir/requires: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avi.c.o.requires
source/blender/avi/CMakeFiles/bf_avi.dir/requires: source/blender/avi/CMakeFiles/bf_avi.dir/intern/avirgb.c.o.requires
source/blender/avi/CMakeFiles/bf_avi.dir/requires: source/blender/avi/CMakeFiles/bf_avi.dir/intern/codecs.c.o.requires
source/blender/avi/CMakeFiles/bf_avi.dir/requires: source/blender/avi/CMakeFiles/bf_avi.dir/intern/endian.c.o.requires
source/blender/avi/CMakeFiles/bf_avi.dir/requires: source/blender/avi/CMakeFiles/bf_avi.dir/intern/mjpeg.c.o.requires
source/blender/avi/CMakeFiles/bf_avi.dir/requires: source/blender/avi/CMakeFiles/bf_avi.dir/intern/options.c.o.requires
source/blender/avi/CMakeFiles/bf_avi.dir/requires: source/blender/avi/CMakeFiles/bf_avi.dir/intern/rgb32.c.o.requires
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/requires

source/blender/avi/CMakeFiles/bf_avi.dir/clean:
	cd /home/anton/workspace/blender/build/source/blender/avi && $(CMAKE_COMMAND) -P CMakeFiles/bf_avi.dir/cmake_clean.cmake
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/clean

source/blender/avi/CMakeFiles/bf_avi.dir/depend:
	cd /home/anton/workspace/blender/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anton/workspace/blender /home/anton/workspace/blender/source/blender/avi /home/anton/workspace/blender/build /home/anton/workspace/blender/build/source/blender/avi /home/anton/workspace/blender/build/source/blender/avi/CMakeFiles/bf_avi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : source/blender/avi/CMakeFiles/bf_avi.dir/depend

