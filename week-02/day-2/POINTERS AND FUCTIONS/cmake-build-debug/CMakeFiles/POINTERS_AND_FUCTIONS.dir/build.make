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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/127705C2-40D2-45DA-A2B9-EA2A3626ABD7/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/127705C2-40D2-45DA-A2B9-EA2A3626ABD7/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/POINTERS_AND_FUCTIONS.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/POINTERS_AND_FUCTIONS.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/POINTERS_AND_FUCTIONS.dir/flags.make

CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.o: CMakeFiles/POINTERS_AND_FUCTIONS.dir/flags.make
CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.o -c "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/main.cpp"

CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/main.cpp" > CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.i

CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/main.cpp" -o CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.s

# Object files for target POINTERS_AND_FUCTIONS
POINTERS_AND_FUCTIONS_OBJECTS = \
"CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.o"

# External object files for target POINTERS_AND_FUCTIONS
POINTERS_AND_FUCTIONS_EXTERNAL_OBJECTS =

POINTERS_AND_FUCTIONS: CMakeFiles/POINTERS_AND_FUCTIONS.dir/main.cpp.o
POINTERS_AND_FUCTIONS: CMakeFiles/POINTERS_AND_FUCTIONS.dir/build.make
POINTERS_AND_FUCTIONS: CMakeFiles/POINTERS_AND_FUCTIONS.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable POINTERS_AND_FUCTIONS"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/POINTERS_AND_FUCTIONS.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/POINTERS_AND_FUCTIONS.dir/build: POINTERS_AND_FUCTIONS

.PHONY : CMakeFiles/POINTERS_AND_FUCTIONS.dir/build

CMakeFiles/POINTERS_AND_FUCTIONS.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/POINTERS_AND_FUCTIONS.dir/cmake_clean.cmake
.PHONY : CMakeFiles/POINTERS_AND_FUCTIONS.dir/clean

CMakeFiles/POINTERS_AND_FUCTIONS.dir/depend:
	cd "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS" "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS" "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/cmake-build-debug" "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/cmake-build-debug" "/Users/peter/greenfox/laszland/week-02/day-2/POINTERS AND FUCTIONS/cmake-build-debug/CMakeFiles/POINTERS_AND_FUCTIONS.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/POINTERS_AND_FUCTIONS.dir/depend

