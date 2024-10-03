# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Default target executed when no arguments are given to make.
default_target: all
.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pknadimp/ray_tracing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pknadimp/ray_tracing

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "No interactive CMake dialog available..."
	/usr/bin/cmake -E echo No\ interactive\ CMake\ dialog\ available.
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache
.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	/usr/bin/cmake --regenerate-during-build -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache
.PHONY : rebuild_cache/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pknadimp/ray_tracing/CMakeFiles /home/pknadimp/ray_tracing//CMakeFiles/progress.marks
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start /home/pknadimp/ray_tracing/CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean
.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named ray_tracer

# Build rule for target.
ray_tracer: cmake_check_build_system
	$(MAKE) $(MAKESILENT) -f CMakeFiles/Makefile2 ray_tracer
.PHONY : ray_tracer

# fast build rule for target.
ray_tracer/fast:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/build
.PHONY : ray_tracer/fast

src/camera.o: src/camera.cpp.o
.PHONY : src/camera.o

# target to build an object file
src/camera.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/camera.cpp.o
.PHONY : src/camera.cpp.o

src/camera.i: src/camera.cpp.i
.PHONY : src/camera.i

# target to preprocess a source file
src/camera.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/camera.cpp.i
.PHONY : src/camera.cpp.i

src/camera.s: src/camera.cpp.s
.PHONY : src/camera.s

# target to generate assembly for a file
src/camera.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/camera.cpp.s
.PHONY : src/camera.cpp.s

src/display.o: src/display.cpp.o
.PHONY : src/display.o

# target to build an object file
src/display.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/display.cpp.o
.PHONY : src/display.cpp.o

src/display.i: src/display.cpp.i
.PHONY : src/display.i

# target to preprocess a source file
src/display.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/display.cpp.i
.PHONY : src/display.cpp.i

src/display.s: src/display.cpp.s
.PHONY : src/display.s

# target to generate assembly for a file
src/display.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/display.cpp.s
.PHONY : src/display.cpp.s

src/hittable.o: src/hittable.cpp.o
.PHONY : src/hittable.o

# target to build an object file
src/hittable.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/hittable.cpp.o
.PHONY : src/hittable.cpp.o

src/hittable.i: src/hittable.cpp.i
.PHONY : src/hittable.i

# target to preprocess a source file
src/hittable.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/hittable.cpp.i
.PHONY : src/hittable.cpp.i

src/hittable.s: src/hittable.cpp.s
.PHONY : src/hittable.s

# target to generate assembly for a file
src/hittable.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/hittable.cpp.s
.PHONY : src/hittable.cpp.s

src/image.o: src/image.cpp.o
.PHONY : src/image.o

# target to build an object file
src/image.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/image.cpp.o
.PHONY : src/image.cpp.o

src/image.i: src/image.cpp.i
.PHONY : src/image.i

# target to preprocess a source file
src/image.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/image.cpp.i
.PHONY : src/image.cpp.i

src/image.s: src/image.cpp.s
.PHONY : src/image.s

# target to generate assembly for a file
src/image.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/image.cpp.s
.PHONY : src/image.cpp.s

src/interval.o: src/interval.cpp.o
.PHONY : src/interval.o

# target to build an object file
src/interval.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/interval.cpp.o
.PHONY : src/interval.cpp.o

src/interval.i: src/interval.cpp.i
.PHONY : src/interval.i

# target to preprocess a source file
src/interval.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/interval.cpp.i
.PHONY : src/interval.cpp.i

src/interval.s: src/interval.cpp.s
.PHONY : src/interval.s

# target to generate assembly for a file
src/interval.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/interval.cpp.s
.PHONY : src/interval.cpp.s

src/main.o: src/main.cpp.o
.PHONY : src/main.o

# target to build an object file
src/main.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/main.cpp.o
.PHONY : src/main.cpp.o

src/main.i: src/main.cpp.i
.PHONY : src/main.i

# target to preprocess a source file
src/main.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/main.cpp.i
.PHONY : src/main.cpp.i

src/main.s: src/main.cpp.s
.PHONY : src/main.s

# target to generate assembly for a file
src/main.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/main.cpp.s
.PHONY : src/main.cpp.s

src/plane.o: src/plane.cpp.o
.PHONY : src/plane.o

# target to build an object file
src/plane.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/plane.cpp.o
.PHONY : src/plane.cpp.o

src/plane.i: src/plane.cpp.i
.PHONY : src/plane.i

# target to preprocess a source file
src/plane.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/plane.cpp.i
.PHONY : src/plane.cpp.i

src/plane.s: src/plane.cpp.s
.PHONY : src/plane.s

# target to generate assembly for a file
src/plane.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/plane.cpp.s
.PHONY : src/plane.cpp.s

src/ray.o: src/ray.cpp.o
.PHONY : src/ray.o

# target to build an object file
src/ray.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/ray.cpp.o
.PHONY : src/ray.cpp.o

src/ray.i: src/ray.cpp.i
.PHONY : src/ray.i

# target to preprocess a source file
src/ray.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/ray.cpp.i
.PHONY : src/ray.cpp.i

src/ray.s: src/ray.cpp.s
.PHONY : src/ray.s

# target to generate assembly for a file
src/ray.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/ray.cpp.s
.PHONY : src/ray.cpp.s

src/sphere.o: src/sphere.cpp.o
.PHONY : src/sphere.o

# target to build an object file
src/sphere.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/sphere.cpp.o
.PHONY : src/sphere.cpp.o

src/sphere.i: src/sphere.cpp.i
.PHONY : src/sphere.i

# target to preprocess a source file
src/sphere.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/sphere.cpp.i
.PHONY : src/sphere.cpp.i

src/sphere.s: src/sphere.cpp.s
.PHONY : src/sphere.s

# target to generate assembly for a file
src/sphere.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/sphere.cpp.s
.PHONY : src/sphere.cpp.s

src/vec.o: src/vec.cpp.o
.PHONY : src/vec.o

# target to build an object file
src/vec.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/vec.cpp.o
.PHONY : src/vec.cpp.o

src/vec.i: src/vec.cpp.i
.PHONY : src/vec.i

# target to preprocess a source file
src/vec.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/vec.cpp.i
.PHONY : src/vec.cpp.i

src/vec.s: src/vec.cpp.s
.PHONY : src/vec.s

# target to generate assembly for a file
src/vec.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/vec.cpp.s
.PHONY : src/vec.cpp.s

src/world.o: src/world.cpp.o
.PHONY : src/world.o

# target to build an object file
src/world.cpp.o:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/world.cpp.o
.PHONY : src/world.cpp.o

src/world.i: src/world.cpp.i
.PHONY : src/world.i

# target to preprocess a source file
src/world.cpp.i:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/world.cpp.i
.PHONY : src/world.cpp.i

src/world.s: src/world.cpp.s
.PHONY : src/world.s

# target to generate assembly for a file
src/world.cpp.s:
	$(MAKE) $(MAKESILENT) -f CMakeFiles/ray_tracer.dir/build.make CMakeFiles/ray_tracer.dir/src/world.cpp.s
.PHONY : src/world.cpp.s

# Help Target
help:
	@echo "The following are some of the valid targets for this Makefile:"
	@echo "... all (the default if no target is provided)"
	@echo "... clean"
	@echo "... depend"
	@echo "... edit_cache"
	@echo "... rebuild_cache"
	@echo "... ray_tracer"
	@echo "... src/camera.o"
	@echo "... src/camera.i"
	@echo "... src/camera.s"
	@echo "... src/display.o"
	@echo "... src/display.i"
	@echo "... src/display.s"
	@echo "... src/hittable.o"
	@echo "... src/hittable.i"
	@echo "... src/hittable.s"
	@echo "... src/image.o"
	@echo "... src/image.i"
	@echo "... src/image.s"
	@echo "... src/interval.o"
	@echo "... src/interval.i"
	@echo "... src/interval.s"
	@echo "... src/main.o"
	@echo "... src/main.i"
	@echo "... src/main.s"
	@echo "... src/plane.o"
	@echo "... src/plane.i"
	@echo "... src/plane.s"
	@echo "... src/ray.o"
	@echo "... src/ray.i"
	@echo "... src/ray.s"
	@echo "... src/sphere.o"
	@echo "... src/sphere.i"
	@echo "... src/sphere.s"
	@echo "... src/vec.o"
	@echo "... src/vec.i"
	@echo "... src/vec.s"
	@echo "... src/world.o"
	@echo "... src/world.i"
	@echo "... src/world.s"
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -S$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles/Makefile.cmake 0
.PHONY : cmake_check_build_system

