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
include CMakeFiles/EE553_CPP.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EE553_CPP.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EE553_CPP.dir/flags.make

CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.obj: CMakeFiles/EE553_CPP.dir/flags.make
CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.obj: CMakeFiles/EE553_CPP.dir/includes_CXX.rsp
CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.obj: ../EE553_CPP/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EE553_CPP.dir\EE553_CPP\main.cpp.obj -c C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\EE553_CPP\main.cpp

CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\EE553_CPP\main.cpp > CMakeFiles\EE553_CPP.dir\EE553_CPP\main.cpp.i

CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\EE553_CPP\main.cpp -o CMakeFiles\EE553_CPP.dir\EE553_CPP\main.cpp.s

# Object files for target EE553_CPP
EE553_CPP_OBJECTS = \
"CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.obj"

# External object files for target EE553_CPP
EE553_CPP_EXTERNAL_OBJECTS =

EE553_CPP.exe: CMakeFiles/EE553_CPP.dir/EE553_CPP/main.cpp.obj
EE553_CPP.exe: CMakeFiles/EE553_CPP.dir/build.make
EE553_CPP.exe: CMakeFiles/EE553_CPP.dir/linklibs.rsp
EE553_CPP.exe: CMakeFiles/EE553_CPP.dir/objects1.rsp
EE553_CPP.exe: CMakeFiles/EE553_CPP.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EE553_CPP.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EE553_CPP.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EE553_CPP.dir/build: EE553_CPP.exe

.PHONY : CMakeFiles/EE553_CPP.dir/build

CMakeFiles/EE553_CPP.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EE553_CPP.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EE553_CPP.dir/clean

CMakeFiles/EE553_CPP.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles\EE553_CPP.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/EE553_CPP.dir/depend

