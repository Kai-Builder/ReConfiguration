# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\seymo\Desktop\Colorama

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\seymo\Desktop\Colorama\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mtest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mtest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mtest.dir/flags.make

CMakeFiles/mtest.dir/test.cpp.obj: CMakeFiles/mtest.dir/flags.make
CMakeFiles/mtest.dir/test.cpp.obj: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\seymo\Desktop\Colorama\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mtest.dir/test.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mtest.dir\test.cpp.obj -c C:\Users\seymo\Desktop\Colorama\test.cpp

CMakeFiles/mtest.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mtest.dir/test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\seymo\Desktop\Colorama\test.cpp > CMakeFiles\mtest.dir\test.cpp.i

CMakeFiles/mtest.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mtest.dir/test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\seymo\Desktop\Colorama\test.cpp -o CMakeFiles\mtest.dir\test.cpp.s

# Object files for target mtest
mtest_OBJECTS = \
"CMakeFiles/mtest.dir/test.cpp.obj"

# External object files for target mtest
mtest_EXTERNAL_OBJECTS =

../tests/mtest.exe: CMakeFiles/mtest.dir/test.cpp.obj
../tests/mtest.exe: CMakeFiles/mtest.dir/build.make
../tests/mtest.exe: CMakeFiles/mtest.dir/linklibs.rsp
../tests/mtest.exe: CMakeFiles/mtest.dir/objects1.rsp
../tests/mtest.exe: CMakeFiles/mtest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\seymo\Desktop\Colorama\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ..\tests\mtest.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mtest.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mtest.dir/build: ../tests/mtest.exe

.PHONY : CMakeFiles/mtest.dir/build

CMakeFiles/mtest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mtest.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mtest.dir/clean

CMakeFiles/mtest.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\seymo\Desktop\Colorama C:\Users\seymo\Desktop\Colorama C:\Users\seymo\Desktop\Colorama\cmake-build-debug C:\Users\seymo\Desktop\Colorama\cmake-build-debug C:\Users\seymo\Desktop\Colorama\cmake-build-debug\CMakeFiles\mtest.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mtest.dir/depend

