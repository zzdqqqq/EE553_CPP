# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\cLion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\cLion\CLion 2018.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lesson3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lesson3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lesson3.dir/flags.make

CMakeFiles/Lesson3.dir/Lesson3/main.cpp.obj: CMakeFiles/Lesson3.dir/flags.make
CMakeFiles/Lesson3.dir/Lesson3/main.cpp.obj: CMakeFiles/Lesson3.dir/includes_CXX.rsp
CMakeFiles/Lesson3.dir/Lesson3/main.cpp.obj: ../Lesson3/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lesson3.dir/Lesson3/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lesson3.dir\Lesson3\main.cpp.obj -c C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\Lesson3\main.cpp

CMakeFiles/Lesson3.dir/Lesson3/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson3.dir/Lesson3/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\Lesson3\main.cpp > CMakeFiles\Lesson3.dir\Lesson3\main.cpp.i

CMakeFiles/Lesson3.dir/Lesson3/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson3.dir/Lesson3/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\Lesson3\main.cpp -o CMakeFiles\Lesson3.dir\Lesson3\main.cpp.s

# Object files for target Lesson3
Lesson3_OBJECTS = \
"CMakeFiles/Lesson3.dir/Lesson3/main.cpp.obj"

# External object files for target Lesson3
Lesson3_EXTERNAL_OBJECTS =

Lesson3.exe: CMakeFiles/Lesson3.dir/Lesson3/main.cpp.obj
Lesson3.exe: CMakeFiles/Lesson3.dir/build.make
Lesson3.exe: CMakeFiles/Lesson3.dir/linklibs.rsp
Lesson3.exe: CMakeFiles/Lesson3.dir/objects1.rsp
Lesson3.exe: CMakeFiles/Lesson3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lesson3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lesson3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lesson3.dir/build: Lesson3.exe

.PHONY : CMakeFiles/Lesson3.dir/build

CMakeFiles/Lesson3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lesson3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lesson3.dir/clean

CMakeFiles/Lesson3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles\Lesson3.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lesson3.dir/depend

