# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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

#Suppress display of executed commands.
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
CMAKE_SOURCE_DIR = C:\Users\paull\Desktop\C++\calculator_score

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\paull\Desktop\C++\calculator_score\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/calculator_score.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/calculator_score.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/calculator_score.dir/flags.make

CMakeFiles/calculator_score.dir/main.cpp.obj: CMakeFiles/calculator_score.dir/flags.make
CMakeFiles/calculator_score.dir/main.cpp.obj: CMakeFiles/calculator_score.dir/includes_CXX.rsp
CMakeFiles/calculator_score.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\paull\Desktop\C++\calculator_score\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/calculator_score.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\calculator_score.dir\main.cpp.obj -c C:\Users\paull\Desktop\C++\calculator_score\main.cpp

CMakeFiles/calculator_score.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/calculator_score.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\paull\Desktop\C++\calculator_score\main.cpp > CMakeFiles\calculator_score.dir\main.cpp.i

CMakeFiles/calculator_score.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/calculator_score.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\paull\Desktop\C++\calculator_score\main.cpp -o CMakeFiles\calculator_score.dir\main.cpp.s

# Object files for target calculator_score
calculator_score_OBJECTS = \
"CMakeFiles/calculator_score.dir/main.cpp.obj"

# External object files for target calculator_score
calculator_score_EXTERNAL_OBJECTS =

calculator_score.exe: CMakeFiles/calculator_score.dir/main.cpp.obj
calculator_score.exe: CMakeFiles/calculator_score.dir/build.make
calculator_score.exe: CMakeFiles/calculator_score.dir/linklibs.rsp
calculator_score.exe: CMakeFiles/calculator_score.dir/objects1.rsp
calculator_score.exe: CMakeFiles/calculator_score.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\paull\Desktop\C++\calculator_score\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable calculator_score.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\calculator_score.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/calculator_score.dir/build: calculator_score.exe

.PHONY : CMakeFiles/calculator_score.dir/build

CMakeFiles/calculator_score.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\calculator_score.dir\cmake_clean.cmake
.PHONY : CMakeFiles/calculator_score.dir/clean

CMakeFiles/calculator_score.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\paull\Desktop\C++\calculator_score C:\Users\paull\Desktop\C++\calculator_score C:\Users\paull\Desktop\C++\calculator_score\cmake-build-debug C:\Users\paull\Desktop\C++\calculator_score\cmake-build-debug C:\Users\paull\Desktop\C++\calculator_score\cmake-build-debug\CMakeFiles\calculator_score.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/calculator_score.dir/depend

