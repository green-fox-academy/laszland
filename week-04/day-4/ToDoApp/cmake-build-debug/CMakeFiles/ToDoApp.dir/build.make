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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/DC59EC6F-0255-4F2B-B80A-B166ABB47B2A/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/DC59EC6F-0255-4F2B-B80A-B166ABB47B2A/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ToDoApp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ToDoApp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ToDoApp.dir/flags.make

CMakeFiles/ToDoApp.dir/main.cpp.o: CMakeFiles/ToDoApp.dir/flags.make
CMakeFiles/ToDoApp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ToDoApp.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ToDoApp.dir/main.cpp.o -c /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/main.cpp

CMakeFiles/ToDoApp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ToDoApp.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/main.cpp > CMakeFiles/ToDoApp.dir/main.cpp.i

CMakeFiles/ToDoApp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ToDoApp.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/main.cpp -o CMakeFiles/ToDoApp.dir/main.cpp.s

# Object files for target ToDoApp
ToDoApp_OBJECTS = \
"CMakeFiles/ToDoApp.dir/main.cpp.o"

# External object files for target ToDoApp
ToDoApp_EXTERNAL_OBJECTS =

ToDoApp: CMakeFiles/ToDoApp.dir/main.cpp.o
ToDoApp: CMakeFiles/ToDoApp.dir/build.make
ToDoApp: CMakeFiles/ToDoApp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ToDoApp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ToDoApp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ToDoApp.dir/build: ToDoApp

.PHONY : CMakeFiles/ToDoApp.dir/build

CMakeFiles/ToDoApp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ToDoApp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ToDoApp.dir/clean

CMakeFiles/ToDoApp.dir/depend:
	cd /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/cmake-build-debug /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/cmake-build-debug /Users/peter/greenfox/laszland/week-04/day-4/ToDoApp/cmake-build-debug/CMakeFiles/ToDoApp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ToDoApp.dir/depend

