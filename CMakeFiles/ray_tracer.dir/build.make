# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

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

# Include any dependencies generated for this target.
include CMakeFiles/ray_tracer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/ray_tracer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ray_tracer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ray_tracer.dir/flags.make

CMakeFiles/ray_tracer.dir/src/main.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/ray_tracer.dir/src/main.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ray_tracer.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/main.cpp.o -MF CMakeFiles/ray_tracer.dir/src/main.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/main.cpp.o -c /home/pknadimp/ray_tracing/src/main.cpp

CMakeFiles/ray_tracer.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/main.cpp > CMakeFiles/ray_tracer.dir/src/main.cpp.i

CMakeFiles/ray_tracer.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/main.cpp -o CMakeFiles/ray_tracer.dir/src/main.cpp.s

CMakeFiles/ray_tracer.dir/src/vec.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/vec.cpp.o: src/vec.cpp
CMakeFiles/ray_tracer.dir/src/vec.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/ray_tracer.dir/src/vec.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/vec.cpp.o -MF CMakeFiles/ray_tracer.dir/src/vec.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/vec.cpp.o -c /home/pknadimp/ray_tracing/src/vec.cpp

CMakeFiles/ray_tracer.dir/src/vec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/vec.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/vec.cpp > CMakeFiles/ray_tracer.dir/src/vec.cpp.i

CMakeFiles/ray_tracer.dir/src/vec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/vec.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/vec.cpp -o CMakeFiles/ray_tracer.dir/src/vec.cpp.s

CMakeFiles/ray_tracer.dir/src/sphere.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/sphere.cpp.o: src/sphere.cpp
CMakeFiles/ray_tracer.dir/src/sphere.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/ray_tracer.dir/src/sphere.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/sphere.cpp.o -MF CMakeFiles/ray_tracer.dir/src/sphere.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/sphere.cpp.o -c /home/pknadimp/ray_tracing/src/sphere.cpp

CMakeFiles/ray_tracer.dir/src/sphere.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/sphere.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/sphere.cpp > CMakeFiles/ray_tracer.dir/src/sphere.cpp.i

CMakeFiles/ray_tracer.dir/src/sphere.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/sphere.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/sphere.cpp -o CMakeFiles/ray_tracer.dir/src/sphere.cpp.s

CMakeFiles/ray_tracer.dir/src/image.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/image.cpp.o: src/image.cpp
CMakeFiles/ray_tracer.dir/src/image.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/ray_tracer.dir/src/image.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/image.cpp.o -MF CMakeFiles/ray_tracer.dir/src/image.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/image.cpp.o -c /home/pknadimp/ray_tracing/src/image.cpp

CMakeFiles/ray_tracer.dir/src/image.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/image.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/image.cpp > CMakeFiles/ray_tracer.dir/src/image.cpp.i

CMakeFiles/ray_tracer.dir/src/image.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/image.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/image.cpp -o CMakeFiles/ray_tracer.dir/src/image.cpp.s

CMakeFiles/ray_tracer.dir/src/display.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/display.cpp.o: src/display.cpp
CMakeFiles/ray_tracer.dir/src/display.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/ray_tracer.dir/src/display.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/display.cpp.o -MF CMakeFiles/ray_tracer.dir/src/display.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/display.cpp.o -c /home/pknadimp/ray_tracing/src/display.cpp

CMakeFiles/ray_tracer.dir/src/display.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/display.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/display.cpp > CMakeFiles/ray_tracer.dir/src/display.cpp.i

CMakeFiles/ray_tracer.dir/src/display.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/display.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/display.cpp -o CMakeFiles/ray_tracer.dir/src/display.cpp.s

CMakeFiles/ray_tracer.dir/src/camera.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/camera.cpp.o: src/camera.cpp
CMakeFiles/ray_tracer.dir/src/camera.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/ray_tracer.dir/src/camera.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/camera.cpp.o -MF CMakeFiles/ray_tracer.dir/src/camera.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/camera.cpp.o -c /home/pknadimp/ray_tracing/src/camera.cpp

CMakeFiles/ray_tracer.dir/src/camera.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/camera.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/camera.cpp > CMakeFiles/ray_tracer.dir/src/camera.cpp.i

CMakeFiles/ray_tracer.dir/src/camera.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/camera.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/camera.cpp -o CMakeFiles/ray_tracer.dir/src/camera.cpp.s

CMakeFiles/ray_tracer.dir/src/ray.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/ray.cpp.o: src/ray.cpp
CMakeFiles/ray_tracer.dir/src/ray.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/ray_tracer.dir/src/ray.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/ray.cpp.o -MF CMakeFiles/ray_tracer.dir/src/ray.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/ray.cpp.o -c /home/pknadimp/ray_tracing/src/ray.cpp

CMakeFiles/ray_tracer.dir/src/ray.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/ray.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/ray.cpp > CMakeFiles/ray_tracer.dir/src/ray.cpp.i

CMakeFiles/ray_tracer.dir/src/ray.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/ray.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/ray.cpp -o CMakeFiles/ray_tracer.dir/src/ray.cpp.s

CMakeFiles/ray_tracer.dir/src/interval.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/interval.cpp.o: src/interval.cpp
CMakeFiles/ray_tracer.dir/src/interval.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/ray_tracer.dir/src/interval.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/interval.cpp.o -MF CMakeFiles/ray_tracer.dir/src/interval.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/interval.cpp.o -c /home/pknadimp/ray_tracing/src/interval.cpp

CMakeFiles/ray_tracer.dir/src/interval.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/interval.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/interval.cpp > CMakeFiles/ray_tracer.dir/src/interval.cpp.i

CMakeFiles/ray_tracer.dir/src/interval.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/interval.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/interval.cpp -o CMakeFiles/ray_tracer.dir/src/interval.cpp.s

CMakeFiles/ray_tracer.dir/src/hittable.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/hittable.cpp.o: src/hittable.cpp
CMakeFiles/ray_tracer.dir/src/hittable.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/ray_tracer.dir/src/hittable.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/hittable.cpp.o -MF CMakeFiles/ray_tracer.dir/src/hittable.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/hittable.cpp.o -c /home/pknadimp/ray_tracing/src/hittable.cpp

CMakeFiles/ray_tracer.dir/src/hittable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/hittable.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/hittable.cpp > CMakeFiles/ray_tracer.dir/src/hittable.cpp.i

CMakeFiles/ray_tracer.dir/src/hittable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/hittable.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/hittable.cpp -o CMakeFiles/ray_tracer.dir/src/hittable.cpp.s

CMakeFiles/ray_tracer.dir/src/world.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/world.cpp.o: src/world.cpp
CMakeFiles/ray_tracer.dir/src/world.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/ray_tracer.dir/src/world.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/world.cpp.o -MF CMakeFiles/ray_tracer.dir/src/world.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/world.cpp.o -c /home/pknadimp/ray_tracing/src/world.cpp

CMakeFiles/ray_tracer.dir/src/world.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/world.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/world.cpp > CMakeFiles/ray_tracer.dir/src/world.cpp.i

CMakeFiles/ray_tracer.dir/src/world.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/world.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/world.cpp -o CMakeFiles/ray_tracer.dir/src/world.cpp.s

CMakeFiles/ray_tracer.dir/src/plane.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/plane.cpp.o: src/plane.cpp
CMakeFiles/ray_tracer.dir/src/plane.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/ray_tracer.dir/src/plane.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/plane.cpp.o -MF CMakeFiles/ray_tracer.dir/src/plane.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/plane.cpp.o -c /home/pknadimp/ray_tracing/src/plane.cpp

CMakeFiles/ray_tracer.dir/src/plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/plane.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/plane.cpp > CMakeFiles/ray_tracer.dir/src/plane.cpp.i

CMakeFiles/ray_tracer.dir/src/plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/plane.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/plane.cpp -o CMakeFiles/ray_tracer.dir/src/plane.cpp.s

CMakeFiles/ray_tracer.dir/src/material.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/material.cpp.o: src/material.cpp
CMakeFiles/ray_tracer.dir/src/material.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/ray_tracer.dir/src/material.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/material.cpp.o -MF CMakeFiles/ray_tracer.dir/src/material.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/material.cpp.o -c /home/pknadimp/ray_tracing/src/material.cpp

CMakeFiles/ray_tracer.dir/src/material.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/material.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/material.cpp > CMakeFiles/ray_tracer.dir/src/material.cpp.i

CMakeFiles/ray_tracer.dir/src/material.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/material.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/material.cpp -o CMakeFiles/ray_tracer.dir/src/material.cpp.s

CMakeFiles/ray_tracer.dir/src/renderer.cpp.o: CMakeFiles/ray_tracer.dir/flags.make
CMakeFiles/ray_tracer.dir/src/renderer.cpp.o: src/renderer.cpp
CMakeFiles/ray_tracer.dir/src/renderer.cpp.o: CMakeFiles/ray_tracer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/ray_tracer.dir/src/renderer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/ray_tracer.dir/src/renderer.cpp.o -MF CMakeFiles/ray_tracer.dir/src/renderer.cpp.o.d -o CMakeFiles/ray_tracer.dir/src/renderer.cpp.o -c /home/pknadimp/ray_tracing/src/renderer.cpp

CMakeFiles/ray_tracer.dir/src/renderer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ray_tracer.dir/src/renderer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pknadimp/ray_tracing/src/renderer.cpp > CMakeFiles/ray_tracer.dir/src/renderer.cpp.i

CMakeFiles/ray_tracer.dir/src/renderer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ray_tracer.dir/src/renderer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pknadimp/ray_tracing/src/renderer.cpp -o CMakeFiles/ray_tracer.dir/src/renderer.cpp.s

# Object files for target ray_tracer
ray_tracer_OBJECTS = \
"CMakeFiles/ray_tracer.dir/src/main.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/vec.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/sphere.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/image.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/display.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/camera.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/ray.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/interval.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/hittable.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/world.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/plane.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/material.cpp.o" \
"CMakeFiles/ray_tracer.dir/src/renderer.cpp.o"

# External object files for target ray_tracer
ray_tracer_EXTERNAL_OBJECTS =

ray_tracer: CMakeFiles/ray_tracer.dir/src/main.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/vec.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/sphere.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/image.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/display.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/camera.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/ray.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/interval.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/hittable.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/world.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/plane.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/material.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/src/renderer.cpp.o
ray_tracer: CMakeFiles/ray_tracer.dir/build.make
ray_tracer: /usr/lib/x86_64-linux-gnu/libtbb.so.12.5
ray_tracer: CMakeFiles/ray_tracer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pknadimp/ray_tracing/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking CXX executable ray_tracer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ray_tracer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ray_tracer.dir/build: ray_tracer
.PHONY : CMakeFiles/ray_tracer.dir/build

CMakeFiles/ray_tracer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ray_tracer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ray_tracer.dir/clean

CMakeFiles/ray_tracer.dir/depend:
	cd /home/pknadimp/ray_tracing && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pknadimp/ray_tracing /home/pknadimp/ray_tracing /home/pknadimp/ray_tracing /home/pknadimp/ray_tracing /home/pknadimp/ray_tracing/CMakeFiles/ray_tracer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ray_tracer.dir/depend

