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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/BFB094B7-7EDA-4FB0-9559-229DC8CBF1AE/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/BFB094B7-7EDA-4FB0-9559-229DC8CBF1AE/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-07/day-1/Percentile

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-07/day-1/Percentile/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Percentile.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Percentile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Percentile.dir/flags.make

CMakeFiles/Percentile.dir/main.c.o: CMakeFiles/Percentile.dir/flags.make
CMakeFiles/Percentile.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-07/day-1/Percentile/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Percentile.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Percentile.dir/main.c.o   -c /Users/peter/greenfox/laszland/week-07/day-1/Percentile/main.c

CMakeFiles/Percentile.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Percentile.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/peter/greenfox/laszland/week-07/day-1/Percentile/main.c > CMakeFiles/Percentile.dir/main.c.i

CMakeFiles/Percentile.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Percentile.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/peter/greenfox/laszland/week-07/day-1/Percentile/main.c -o CMakeFiles/Percentile.dir/main.c.s

# Object files for target Percentile
Percentile_OBJECTS = \
"CMakeFiles/Percentile.dir/main.c.o"

# External object files for target Percentile
Percentile_EXTERNAL_OBJECTS =

Percentile: CMakeFiles/Percentile.dir/main.c.o
Percentile: CMakeFiles/Percentile.dir/build.make
Percentile: CMakeFiles/Percentile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-07/day-1/Percentile/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Percentile"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Percentile.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Percentile.dir/build: Percentile

.PHONY : CMakeFiles/Percentile.dir/build

CMakeFiles/Percentile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Percentile.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Percentile.dir/clean

CMakeFiles/Percentile.dir/depend:
	cd /Users/peter/greenfox/laszland/week-07/day-1/Percentile/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-07/day-1/Percentile /Users/peter/greenfox/laszland/week-07/day-1/Percentile /Users/peter/greenfox/laszland/week-07/day-1/Percentile/cmake-build-debug /Users/peter/greenfox/laszland/week-07/day-1/Percentile/cmake-build-debug /Users/peter/greenfox/laszland/week-07/day-1/Percentile/cmake-build-debug/CMakeFiles/Percentile.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Percentile.dir/depend

