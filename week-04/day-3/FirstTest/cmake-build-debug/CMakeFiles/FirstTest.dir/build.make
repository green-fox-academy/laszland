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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/64CBB6D8-BEE8-44F3-A985-91AAFDF679CA/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/64CBB6D8-BEE8-44F3-A985-91AAFDF679CA/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-04/day-3/FirstTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FirstTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FirstTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FirstTest.dir/flags.make

CMakeFiles/FirstTest.dir/main.cpp.o: CMakeFiles/FirstTest.dir/flags.make
CMakeFiles/FirstTest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-04/day-3/FirstTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FirstTest.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/FirstTest.dir/main.cpp.o -c /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/main.cpp

CMakeFiles/FirstTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FirstTest.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/main.cpp > CMakeFiles/FirstTest.dir/main.cpp.i

CMakeFiles/FirstTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FirstTest.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/main.cpp -o CMakeFiles/FirstTest.dir/main.cpp.s

# Object files for target FirstTest
FirstTest_OBJECTS = \
"CMakeFiles/FirstTest.dir/main.cpp.o"

# External object files for target FirstTest
FirstTest_EXTERNAL_OBJECTS =

FirstTest: CMakeFiles/FirstTest.dir/main.cpp.o
FirstTest: CMakeFiles/FirstTest.dir/build.make
FirstTest: MyAppLib/libMyAppLib.a
FirstTest: CMakeFiles/FirstTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-04/day-3/FirstTest/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable FirstTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/FirstTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FirstTest.dir/build: FirstTest

.PHONY : CMakeFiles/FirstTest.dir/build

CMakeFiles/FirstTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/FirstTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/FirstTest.dir/clean

CMakeFiles/FirstTest.dir/depend:
	cd /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-04/day-3/FirstTest /Users/peter/greenfox/laszland/week-04/day-3/FirstTest /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/cmake-build-debug /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/cmake-build-debug /Users/peter/greenfox/laszland/week-04/day-3/FirstTest/cmake-build-debug/CMakeFiles/FirstTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FirstTest.dir/depend

