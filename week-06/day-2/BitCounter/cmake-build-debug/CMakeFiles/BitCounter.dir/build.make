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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/7315FDD5-60CF-4E22-BEDA-ACF1A0E73388/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/7315FDD5-60CF-4E22-BEDA-ACF1A0E73388/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-06/day-2/BitCounter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/BitCounter.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/BitCounter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/BitCounter.dir/flags.make

CMakeFiles/BitCounter.dir/main.c.o: CMakeFiles/BitCounter.dir/flags.make
CMakeFiles/BitCounter.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-06/day-2/BitCounter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/BitCounter.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/BitCounter.dir/main.c.o   -c /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/main.c

CMakeFiles/BitCounter.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/BitCounter.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/main.c > CMakeFiles/BitCounter.dir/main.c.i

CMakeFiles/BitCounter.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/BitCounter.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/main.c -o CMakeFiles/BitCounter.dir/main.c.s

# Object files for target BitCounter
BitCounter_OBJECTS = \
"CMakeFiles/BitCounter.dir/main.c.o"

# External object files for target BitCounter
BitCounter_EXTERNAL_OBJECTS =

BitCounter: CMakeFiles/BitCounter.dir/main.c.o
BitCounter: CMakeFiles/BitCounter.dir/build.make
BitCounter: CMakeFiles/BitCounter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-06/day-2/BitCounter/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable BitCounter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BitCounter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/BitCounter.dir/build: BitCounter

.PHONY : CMakeFiles/BitCounter.dir/build

CMakeFiles/BitCounter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/BitCounter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/BitCounter.dir/clean

CMakeFiles/BitCounter.dir/depend:
	cd /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-06/day-2/BitCounter /Users/peter/greenfox/laszland/week-06/day-2/BitCounter /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/cmake-build-debug /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/cmake-build-debug /Users/peter/greenfox/laszland/week-06/day-2/BitCounter/cmake-build-debug/CMakeFiles/BitCounter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/BitCounter.dir/depend
