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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/AE35B370-59BD-47BB-A0ED-4B9096278051/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/AE35B370-59BD-47BB-A0ED-4B9096278051/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-01/day-4/LOOPS

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LOOPS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LOOPS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LOOPS.dir/flags.make

CMakeFiles/LOOPS.dir/main.cpp.o: CMakeFiles/LOOPS.dir/flags.make
CMakeFiles/LOOPS.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-01/day-4/LOOPS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LOOPS.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LOOPS.dir/main.cpp.o -c /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/main.cpp

CMakeFiles/LOOPS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LOOPS.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/main.cpp > CMakeFiles/LOOPS.dir/main.cpp.i

CMakeFiles/LOOPS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LOOPS.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/main.cpp -o CMakeFiles/LOOPS.dir/main.cpp.s

# Object files for target LOOPS
LOOPS_OBJECTS = \
"CMakeFiles/LOOPS.dir/main.cpp.o"

# External object files for target LOOPS
LOOPS_EXTERNAL_OBJECTS =

LOOPS: CMakeFiles/LOOPS.dir/main.cpp.o
LOOPS: CMakeFiles/LOOPS.dir/build.make
LOOPS: CMakeFiles/LOOPS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-01/day-4/LOOPS/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LOOPS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LOOPS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LOOPS.dir/build: LOOPS

.PHONY : CMakeFiles/LOOPS.dir/build

CMakeFiles/LOOPS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LOOPS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LOOPS.dir/clean

CMakeFiles/LOOPS.dir/depend:
	cd /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-01/day-4/LOOPS /Users/peter/greenfox/laszland/week-01/day-4/LOOPS /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/cmake-build-debug /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/cmake-build-debug /Users/peter/greenfox/laszland/week-01/day-4/LOOPS/cmake-build-debug/CMakeFiles/LOOPS.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LOOPS.dir/depend

