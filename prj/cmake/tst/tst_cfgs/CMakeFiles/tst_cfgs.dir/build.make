# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /vm/vm_exec/cmake/bin/cmake

# The command to remove a file.
RM = /vm/vm_exec/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /vm/vm_tools

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /vm/vm_tools/prj/cmake

# Include any dependencies generated for this target.
include tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/depend.make

# Include the progress variables for this target.
include tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/progress.make

# Include the compile flags for this target's objects.
include tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/flags.make

tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.o: tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/flags.make
tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.o: ../../tst/tst_cfgs/tst_cfgs.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/vm/vm_tools/prj/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.o"
	cd /vm/vm_tools/prj/cmake/tst/tst_cfgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.o -c /vm/vm_tools/tst/tst_cfgs/tst_cfgs.cpp

tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.i"
	cd /vm/vm_tools/prj/cmake/tst/tst_cfgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /vm/vm_tools/tst/tst_cfgs/tst_cfgs.cpp > CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.i

tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.s"
	cd /vm/vm_tools/prj/cmake/tst/tst_cfgs && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /vm/vm_tools/tst/tst_cfgs/tst_cfgs.cpp -o CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.s

# Object files for target tst_cfgs
tst_cfgs_OBJECTS = \
"CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.o"

# External object files for target tst_cfgs
tst_cfgs_EXTERNAL_OBJECTS =

../../bin/tst_cfgs: tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/tst_cfgs.cpp.o
../../bin/tst_cfgs: tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/build.make
../../bin/tst_cfgs: tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/vm/vm_tools/prj/cmake/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../bin/tst_cfgs"
	cd /vm/vm_tools/prj/cmake/tst/tst_cfgs && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tst_cfgs.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/build: ../../bin/tst_cfgs

.PHONY : tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/build

tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/clean:
	cd /vm/vm_tools/prj/cmake/tst/tst_cfgs && $(CMAKE_COMMAND) -P CMakeFiles/tst_cfgs.dir/cmake_clean.cmake
.PHONY : tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/clean

tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/depend:
	cd /vm/vm_tools/prj/cmake && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /vm/vm_tools /vm/vm_tools/tst/tst_cfgs /vm/vm_tools/prj/cmake /vm/vm_tools/prj/cmake/tst/tst_cfgs /vm/vm_tools/prj/cmake/tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tst/tst_cfgs/CMakeFiles/tst_cfgs.dir/depend

