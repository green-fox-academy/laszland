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
CMAKE_COMMAND = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/64DDB782-48BE-48AE-9E4B-87F7AA60BFB7/d/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /private/var/folders/xv/m9tm7qpd7t5ff6j0zcqbf1sm0000gn/T/AppTranslocation/64DDB782-48BE-48AE-9E4B-87F7AA60BFB7/d/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/peter/greenfox/laszland/week-05/day-3/Testing

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug

# Include any dependencies generated for this target.
include MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/depend.make

# Include the progress variables for this target.
include MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/progress.make

# Include the compile flags for this target's objects.
include MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/flags.make

MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/flags.make
MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o: /Users/peter/greenfox/googletest/googlemock/src/gmock_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"
	cd /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock && /Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.o -c /Users/peter/greenfox/googletest/googlemock/src/gmock_main.cc

MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/gmock_main.dir/src/gmock_main.cc.i"
	cd /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/peter/greenfox/googletest/googlemock/src/gmock_main.cc > CMakeFiles/gmock_main.dir/src/gmock_main.cc.i

MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/gmock_main.dir/src/gmock_main.cc.s"
	cd /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock && /Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/peter/greenfox/googletest/googlemock/src/gmock_main.cc -o CMakeFiles/gmock_main.dir/src/gmock_main.cc.s

# Object files for target gmock_main
gmock_main_OBJECTS = \
"CMakeFiles/gmock_main.dir/src/gmock_main.cc.o"

# External object files for target gmock_main
gmock_main_EXTERNAL_OBJECTS =

lib/libgmock_maind.a: MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/src/gmock_main.cc.o
lib/libgmock_maind.a: MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/build.make
lib/libgmock_maind.a: MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../lib/libgmock_maind.a"
	cd /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean_target.cmake
	cd /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/gmock_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/build: lib/libgmock_maind.a

.PHONY : MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/build

MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/clean:
	cd /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock && $(CMAKE_COMMAND) -P CMakeFiles/gmock_main.dir/cmake_clean.cmake
.PHONY : MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/clean

MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/depend:
	cd /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/peter/greenfox/laszland/week-05/day-3/Testing /Users/peter/greenfox/googletest/googlemock /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock /Users/peter/greenfox/laszland/week-05/day-3/Testing/cmake-build-debug/MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : MyApp_tests/googletest/googlemock/CMakeFiles/gmock_main.dir/depend
