# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/2E215AD7-A9A0-447E-917F-A543B53BAE85/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/2E215AD7-A9A0-447E-917F-A543B53BAE85/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fourRectangles.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fourRectangles.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fourRectangles.dir/flags.make

CMakeFiles/fourRectangles.dir/main.cpp.o: CMakeFiles/fourRectangles.dir/flags.make
CMakeFiles/fourRectangles.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fourRectangles.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fourRectangles.dir/main.cpp.o -c /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/main.cpp

CMakeFiles/fourRectangles.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fourRectangles.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/main.cpp > CMakeFiles/fourRectangles.dir/main.cpp.i

CMakeFiles/fourRectangles.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fourRectangles.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/main.cpp -o CMakeFiles/fourRectangles.dir/main.cpp.s

CMakeFiles/fourRectangles.dir/fourRectangles.cpp.o: CMakeFiles/fourRectangles.dir/flags.make
CMakeFiles/fourRectangles.dir/fourRectangles.cpp.o: ../fourRectangles.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fourRectangles.dir/fourRectangles.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fourRectangles.dir/fourRectangles.cpp.o -c /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/fourRectangles.cpp

CMakeFiles/fourRectangles.dir/fourRectangles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fourRectangles.dir/fourRectangles.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/fourRectangles.cpp > CMakeFiles/fourRectangles.dir/fourRectangles.cpp.i

CMakeFiles/fourRectangles.dir/fourRectangles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fourRectangles.dir/fourRectangles.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/fourRectangles.cpp -o CMakeFiles/fourRectangles.dir/fourRectangles.cpp.s

# Object files for target fourRectangles
fourRectangles_OBJECTS = \
"CMakeFiles/fourRectangles.dir/main.cpp.o" \
"CMakeFiles/fourRectangles.dir/fourRectangles.cpp.o"

# External object files for target fourRectangles
fourRectangles_EXTERNAL_OBJECTS =

fourRectangles: CMakeFiles/fourRectangles.dir/main.cpp.o
fourRectangles: CMakeFiles/fourRectangles.dir/fourRectangles.cpp.o
fourRectangles: CMakeFiles/fourRectangles.dir/build.make
fourRectangles: CMakeFiles/fourRectangles.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable fourRectangles"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fourRectangles.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fourRectangles.dir/build: fourRectangles

.PHONY : CMakeFiles/fourRectangles.dir/build

CMakeFiles/fourRectangles.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fourRectangles.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fourRectangles.dir/clean

CMakeFiles/fourRectangles.dir/depend:
	cd /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles/fourRectangles.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fourRectangles.dir/depend

