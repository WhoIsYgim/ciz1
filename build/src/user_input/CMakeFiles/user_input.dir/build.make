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
include src/user_input/CMakeFiles/user_input.dir/depend.make

# Include the progress variables for this target.
include src/user_input/CMakeFiles/user_input.dir/progress.make

# Include the compile flags for this target's objects.
include src/user_input/CMakeFiles/user_input.dir/flags.make

src/user_input/CMakeFiles/user_input.dir/input.c.o: src/user_input/CMakeFiles/user_input.dir/flags.make
src/user_input/CMakeFiles/user_input.dir/input.c.o: ../src/user_input/input.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/egornulllet/Документы/tpark/ciz1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/user_input/CMakeFiles/user_input.dir/input.c.o"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/user_input && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/user_input.dir/input.c.o   -c /home/egornulllet/Документы/tpark/ciz1/src/user_input/input.c

src/user_input/CMakeFiles/user_input.dir/input.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/user_input.dir/input.c.i"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/user_input && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/egornulllet/Документы/tpark/ciz1/src/user_input/input.c > CMakeFiles/user_input.dir/input.c.i

src/user_input/CMakeFiles/user_input.dir/input.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/user_input.dir/input.c.s"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/user_input && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/egornulllet/Документы/tpark/ciz1/src/user_input/input.c -o CMakeFiles/user_input.dir/input.c.s

# Object files for target user_input
user_input_OBJECTS = \
"CMakeFiles/user_input.dir/input.c.o"

# External object files for target user_input
user_input_EXTERNAL_OBJECTS =

src/user_input/libuser_input.a: src/user_input/CMakeFiles/user_input.dir/input.c.o
src/user_input/libuser_input.a: src/user_input/CMakeFiles/user_input.dir/build.make
src/user_input/libuser_input.a: src/user_input/CMakeFiles/user_input.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/egornulllet/Документы/tpark/ciz1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C static library libuser_input.a"
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/user_input && $(CMAKE_COMMAND) -P CMakeFiles/user_input.dir/cmake_clean_target.cmake
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/user_input && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/user_input.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/user_input/CMakeFiles/user_input.dir/build: src/user_input/libuser_input.a

.PHONY : src/user_input/CMakeFiles/user_input.dir/build

src/user_input/CMakeFiles/user_input.dir/clean:
	cd /home/egornulllet/Документы/tpark/ciz1/build/src/user_input && $(CMAKE_COMMAND) -P CMakeFiles/user_input.dir/cmake_clean.cmake
.PHONY : src/user_input/CMakeFiles/user_input.dir/clean

src/user_input/CMakeFiles/user_input.dir/depend:
	cd /home/egornulllet/Документы/tpark/ciz1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/egornulllet/Документы/tpark/ciz1 /home/egornulllet/Документы/tpark/ciz1/src/user_input /home/egornulllet/Документы/tpark/ciz1/build /home/egornulllet/Документы/tpark/ciz1/build/src/user_input /home/egornulllet/Документы/tpark/ciz1/build/src/user_input/CMakeFiles/user_input.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/user_input/CMakeFiles/user_input.dir/depend
