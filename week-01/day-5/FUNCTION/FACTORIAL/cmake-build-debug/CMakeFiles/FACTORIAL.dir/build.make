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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/355CD8C3-81B6-481C-900C-34B0C6F34EAA/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/355CD8C3-81B6-481C-900C-34B0C6F34EAA/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FACTORIAL.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FACTORIAL.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FACTORIAL.dir/flags.make

CMakeFiles/FACTORIAL.dir/main.cpp.o: CMakeFiles/FACTORIAL.dir/flags.make
CMakeFiles/FACTORIAL.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FACTORIAL.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FACTORIAL.dir/main.cpp.o -c /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/main.cpp

CMakeFiles/FACTORIAL.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FACTORIAL.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/main.cpp > CMakeFiles/FACTORIAL.dir/main.cpp.i

CMakeFiles/FACTORIAL.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FACTORIAL.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/main.cpp -o CMakeFiles/FACTORIAL.dir/main.cpp.s

# Object files for target FACTORIAL
FACTORIAL_OBJECTS = \
"CMakeFiles/FACTORIAL.dir/main.cpp.o"

# External object files for target FACTORIAL
FACTORIAL_EXTERNAL_OBJECTS =

FACTORIAL: CMakeFiles/FACTORIAL.dir/main.cpp.o
FACTORIAL: CMakeFiles/FACTORIAL.dir/build.make
FACTORIAL: CMakeFiles/FACTORIAL.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FACTORIAL"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FACTORIAL.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FACTORIAL.dir/build: FACTORIAL

.PHONY : CMakeFiles/FACTORIAL.dir/build

CMakeFiles/FACTORIAL.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FACTORIAL.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FACTORIAL.dir/clean

CMakeFiles/FACTORIAL.dir/depend:
	cd /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/cmake-build-debug /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/cmake-build-debug /Users/peter/greenfox/laszland/week-01/day-5/FUNCTION/FACTORIAL/cmake-build-debug/CMakeFiles/FACTORIAL.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FACTORIAL.dir/depend

