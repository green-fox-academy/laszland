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
CMAKE_SOURCE_DIR = "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/PRINT_ADDRESSES.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PRINT_ADDRESSES.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PRINT_ADDRESSES.dir/flags.make

CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.o: CMakeFiles/PRINT_ADDRESSES.dir/flags.make
CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.o -c "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/main.cpp"

CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/main.cpp" > CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.i

CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/main.cpp" -o CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.s

# Object files for target PRINT_ADDRESSES
PRINT_ADDRESSES_OBJECTS = \
"CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.o"

# External object files for target PRINT_ADDRESSES
PRINT_ADDRESSES_EXTERNAL_OBJECTS =

PRINT_ADDRESSES: CMakeFiles/PRINT_ADDRESSES.dir/main.cpp.o
PRINT_ADDRESSES: CMakeFiles/PRINT_ADDRESSES.dir/build.make
PRINT_ADDRESSES: CMakeFiles/PRINT_ADDRESSES.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PRINT_ADDRESSES"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PRINT_ADDRESSES.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PRINT_ADDRESSES.dir/build: PRINT_ADDRESSES

.PHONY : CMakeFiles/PRINT_ADDRESSES.dir/build

CMakeFiles/PRINT_ADDRESSES.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PRINT_ADDRESSES.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PRINT_ADDRESSES.dir/clean

CMakeFiles/PRINT_ADDRESSES.dir/depend:
	cd "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES" "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES" "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/cmake-build-debug" "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/cmake-build-debug" "/Users/peter/greenfox/laszland/week-02/day-2/ARRAYS AND POINTER/PRINT ADDRESSES/cmake-build-debug/CMakeFiles/PRINT_ADDRESSES.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/PRINT_ADDRESSES.dir/depend
