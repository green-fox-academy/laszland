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
include CMakeFiles/centeredBoxes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/centeredBoxes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/centeredBoxes.dir/flags.make

CMakeFiles/centeredBoxes.dir/main.cpp.o: CMakeFiles/centeredBoxes.dir/flags.make
CMakeFiles/centeredBoxes.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/centeredBoxes.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/centeredBoxes.dir/main.cpp.o -c /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/main.cpp

CMakeFiles/centeredBoxes.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/centeredBoxes.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/main.cpp > CMakeFiles/centeredBoxes.dir/main.cpp.i

CMakeFiles/centeredBoxes.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/centeredBoxes.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/main.cpp -o CMakeFiles/centeredBoxes.dir/main.cpp.s

CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.o: CMakeFiles/centeredBoxes.dir/flags.make
CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.o: ../centeredBoxes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.o -c /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/centeredBoxes.cpp

CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/centeredBoxes.cpp > CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.i

CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/centeredBoxes.cpp -o CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.s

# Object files for target centeredBoxes
centeredBoxes_OBJECTS = \
"CMakeFiles/centeredBoxes.dir/main.cpp.o" \
"CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.o"

# External object files for target centeredBoxes
centeredBoxes_EXTERNAL_OBJECTS =

centeredBoxes: CMakeFiles/centeredBoxes.dir/main.cpp.o
centeredBoxes: CMakeFiles/centeredBoxes.dir/centeredBoxes.cpp.o
centeredBoxes: CMakeFiles/centeredBoxes.dir/build.make
centeredBoxes: CMakeFiles/centeredBoxes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable centeredBoxes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/centeredBoxes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/centeredBoxes.dir/build: centeredBoxes

.PHONY : CMakeFiles/centeredBoxes.dir/build

CMakeFiles/centeredBoxes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/centeredBoxes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/centeredBoxes.dir/clean

CMakeFiles/centeredBoxes.dir/depend:
	cd /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug /Users/peter/greenfox/laszland/week-02/day-3/drawing_setup/cmake-build-debug/CMakeFiles/centeredBoxes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/centeredBoxes.dir/depend

