# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/egornulllet/Документы/tpark/ciz1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/egornulllet/Документы/tpark/ciz1/build

# Include any dependencies generated for this target.
include src/interface/CMakeFiles/interface.dir/depend.make

# Include the progress variables for this target.
include src/interface/CMakeFiles/interface.dir/progress.make

# Include the compile flags for this target's objects.
include src/interface/CMakeFiles/interface.dir/flags.make

src/interface/CMakeFiles/interface.dir/interface.c.o: src/interface/CMakeFiles/interface.dir/flags.make
src/interface/CMakeFiles/interface.dir/interface.c.o: ../src/interface/interface.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/egornulllet/Документы/tpark/ciz1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/interface/CMakeFiles/interface.dir/interface.c.o"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/interface && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/interface.dir/interface.c.o   -c /home/egornulllet/Документы/tpark/ciz1/src/interface/interface.c

src/interface/CMakeFiles/interface.dir/interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/interface.dir/interface.c.i"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/interface && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/egornulllet/Документы/tpark/ciz1/src/interface/interface.c > CMakeFiles/interface.dir/interface.c.i

src/interface/CMakeFiles/interface.dir/interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/interface.dir/interface.c.s"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/interface && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/egornulllet/Документы/tpark/ciz1/src/interface/interface.c -o CMakeFiles/interface.dir/interface.c.s

# Object files for target interface
interface_OBJECTS = \
"CMakeFiles/interface.dir/interface.c.o"

# External object files for target interface
interface_EXTERNAL_OBJECTS =

src/interface/libinterface.a: src/interface/CMakeFiles/interface.dir/interface.c.o
src/interface/libinterface.a: src/interface/CMakeFiles/interface.dir/build.make
src/interface/libinterface.a: src/interface/CMakeFiles/interface.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/egornulllet/Документы/tpark/ciz1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libinterface.a"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/interface && $(CMAKE_COMMAND) -P CMakeFiles/interface.dir/cmake_clean_target.cmake
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/interface && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/interface.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/interface/CMakeFiles/interface.dir/build: src/interface/libinterface.a

.PHONY : src/interface/CMakeFiles/interface.dir/build

src/interface/CMakeFiles/interface.dir/clean:
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/interface && $(CMAKE_COMMAND) -P CMakeFiles/interface.dir/cmake_clean.cmake
.PHONY : src/interface/CMakeFiles/interface.dir/clean

src/interface/CMakeFiles/interface.dir/depend:
	cd /home/egornulllet/Документы/tpark/ciz1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/egornulllet/Документы/tpark/ciz1 /home/egornulllet/Документы/tpark/ciz1/src/interface /home/egornulllet/Документы/tpark/ciz1/build /home/egornulllet/Документы/tpark/ciz1/build/src/interface /home/egornulllet/Документы/tpark/ciz1/build/src/interface/CMakeFiles/interface.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/interface/CMakeFiles/interface.dir/depend
