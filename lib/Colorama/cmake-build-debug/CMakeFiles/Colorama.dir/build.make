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
include CMakeFiles/Colorama.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Colorama.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Colorama.dir/flags.make

CMakeFiles/Colorama.dir/test.cpp.obj: CMakeFiles/Colorama.dir/flags.make
CMakeFiles/Colorama.dir/test.cpp.obj: ../test.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\seymo\Desktop\Colorama\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Colorama.dir/test.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Colorama.dir\test.cpp.obj -c C:\Users\seymo\Desktop\Colorama\test.cpp

CMakeFiles/Colorama.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Colorama.dir/test.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\seymo\Desktop\Colorama\test.cpp > CMakeFiles\Colorama.dir\test.cpp.i

CMakeFiles/Colorama.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Colorama.dir/test.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\seymo\Desktop\Colorama\test.cpp -o CMakeFiles\Colorama.dir\test.cpp.s

# Object files for target Colorama
Colorama_OBJECTS = \
"CMakeFiles/Colorama.dir/test.cpp.obj"

# External object files for target Colorama
Colorama_EXTERNAL_OBJECTS =

Colorama.exe: CMakeFiles/Colorama.dir/test.cpp.obj
Colorama.exe: CMakeFiles/Colorama.dir/build.make
Colorama.exe: CMakeFiles/Colorama.dir/linklibs.rsp
Colorama.exe: CMakeFiles/Colorama.dir/objects1.rsp
Colorama.exe: CMakeFiles/Colorama.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\seymo\Desktop\Colorama\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Colorama.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Colorama.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Colorama.dir/build: Colorama.exe

.PHONY : CMakeFiles/Colorama.dir/build

CMakeFiles/Colorama.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Colorama.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Colorama.dir/clean

CMakeFiles/Colorama.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\seymo\Desktop\Colorama C:\Users\seymo\Desktop\Colorama C:\Users\seymo\Desktop\Colorama\cmake-build-debug C:\Users\seymo\Desktop\Colorama\cmake-build-debug C:\Users\seymo\Desktop\Colorama\cmake-build-debug\CMakeFiles\Colorama.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Colorama.dir/depend

