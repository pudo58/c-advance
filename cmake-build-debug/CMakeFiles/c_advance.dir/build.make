# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\c-advance

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\c-advance\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_advance.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/c_advance.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/c_advance.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_advance.dir/flags.make

CMakeFiles/c_advance.dir/program.c.obj: CMakeFiles/c_advance.dir/flags.make
CMakeFiles/c_advance.dir/program.c.obj: D:/c-advance/program.c
CMakeFiles/c_advance.dir/program.c.obj: CMakeFiles/c_advance.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\c-advance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_advance.dir/program.c.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/c_advance.dir/program.c.obj -MF CMakeFiles\c_advance.dir\program.c.obj.d -o CMakeFiles\c_advance.dir\program.c.obj -c D:\c-advance\program.c

CMakeFiles/c_advance.dir/program.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_advance.dir/program.c.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E D:\c-advance\program.c > CMakeFiles\c_advance.dir\program.c.i

CMakeFiles/c_advance.dir/program.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_advance.dir/program.c.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S D:\c-advance\program.c -o CMakeFiles\c_advance.dir\program.c.s

# Object files for target c_advance
c_advance_OBJECTS = \
"CMakeFiles/c_advance.dir/program.c.obj"

# External object files for target c_advance
c_advance_EXTERNAL_OBJECTS =

c_advance.exe: CMakeFiles/c_advance.dir/program.c.obj
c_advance.exe: CMakeFiles/c_advance.dir/build.make
c_advance.exe: CMakeFiles/c_advance.dir/linkLibs.rsp
c_advance.exe: CMakeFiles/c_advance.dir/objects1.rsp
c_advance.exe: CMakeFiles/c_advance.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\c-advance\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_advance.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c_advance.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_advance.dir/build: c_advance.exe
.PHONY : CMakeFiles/c_advance.dir/build

CMakeFiles/c_advance.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c_advance.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c_advance.dir/clean

CMakeFiles/c_advance.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\c-advance D:\c-advance D:\c-advance\cmake-build-debug D:\c-advance\cmake-build-debug D:\c-advance\cmake-build-debug\CMakeFiles\c_advance.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_advance.dir/depend
