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
include CMakeFiles/Lesson4_Fraction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lesson4_Fraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lesson4_Fraction.dir/flags.make

CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.obj: CMakeFiles/Lesson4_Fraction.dir/flags.make
CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.obj: CMakeFiles/Lesson4_Fraction.dir/includes_CXX.rsp
CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.obj: ../Lesson4/Fraction.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.obj"
	C:\msys64\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Lesson4_Fraction.dir\Lesson4\Fraction.cpp.obj -c C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\Lesson4\Fraction.cpp

CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.i"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\Lesson4\Fraction.cpp > CMakeFiles\Lesson4_Fraction.dir\Lesson4\Fraction.cpp.i

CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.s"
	C:\msys64\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\Lesson4\Fraction.cpp -o CMakeFiles\Lesson4_Fraction.dir\Lesson4\Fraction.cpp.s

# Object files for target Lesson4_Fraction
Lesson4_Fraction_OBJECTS = \
"CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.obj"

# External object files for target Lesson4_Fraction
Lesson4_Fraction_EXTERNAL_OBJECTS =

Lesson4_Fraction.exe: CMakeFiles/Lesson4_Fraction.dir/Lesson4/Fraction.cpp.obj
Lesson4_Fraction.exe: CMakeFiles/Lesson4_Fraction.dir/build.make
Lesson4_Fraction.exe: CMakeFiles/Lesson4_Fraction.dir/linklibs.rsp
Lesson4_Fraction.exe: CMakeFiles/Lesson4_Fraction.dir/objects1.rsp
Lesson4_Fraction.exe: CMakeFiles/Lesson4_Fraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lesson4_Fraction.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Lesson4_Fraction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lesson4_Fraction.dir/build: Lesson4_Fraction.exe

.PHONY : CMakeFiles/Lesson4_Fraction.dir/build

CMakeFiles/Lesson4_Fraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Lesson4_Fraction.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Lesson4_Fraction.dir/clean

CMakeFiles/Lesson4_Fraction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug C:\Users\Zidong\iCloudDrive\Desktop\EE553_CPP\cmake-build-debug\CMakeFiles\Lesson4_Fraction.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lesson4_Fraction.dir/depend

