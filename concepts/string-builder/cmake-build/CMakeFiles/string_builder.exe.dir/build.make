# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /home/madilynsimons/Documents/cracking-coding/concepts/string-builder

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/cmake-build

# Include any dependencies generated for this target.
include CMakeFiles/string_builder.exe.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/string_builder.exe.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/string_builder.exe.dir/flags.make

CMakeFiles/string_builder.exe.dir/string_builder.cc.o: CMakeFiles/string_builder.exe.dir/flags.make
CMakeFiles/string_builder.exe.dir/string_builder.cc.o: ../string_builder.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/madilynsimons/Documents/cracking-coding/concepts/string-builder/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/string_builder.exe.dir/string_builder.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/string_builder.exe.dir/string_builder.cc.o -c /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/string_builder.cc

CMakeFiles/string_builder.exe.dir/string_builder.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string_builder.exe.dir/string_builder.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/string_builder.cc > CMakeFiles/string_builder.exe.dir/string_builder.cc.i

CMakeFiles/string_builder.exe.dir/string_builder.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string_builder.exe.dir/string_builder.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/string_builder.cc -o CMakeFiles/string_builder.exe.dir/string_builder.cc.s

CMakeFiles/string_builder.exe.dir/string_builder.cc.o.requires:

.PHONY : CMakeFiles/string_builder.exe.dir/string_builder.cc.o.requires

CMakeFiles/string_builder.exe.dir/string_builder.cc.o.provides: CMakeFiles/string_builder.exe.dir/string_builder.cc.o.requires
	$(MAKE) -f CMakeFiles/string_builder.exe.dir/build.make CMakeFiles/string_builder.exe.dir/string_builder.cc.o.provides.build
.PHONY : CMakeFiles/string_builder.exe.dir/string_builder.cc.o.provides

CMakeFiles/string_builder.exe.dir/string_builder.cc.o.provides.build: CMakeFiles/string_builder.exe.dir/string_builder.cc.o


# Object files for target string_builder.exe
string_builder_exe_OBJECTS = \
"CMakeFiles/string_builder.exe.dir/string_builder.cc.o"

# External object files for target string_builder.exe
string_builder_exe_EXTERNAL_OBJECTS =

string_builder.exe: CMakeFiles/string_builder.exe.dir/string_builder.cc.o
string_builder.exe: CMakeFiles/string_builder.exe.dir/build.make
string_builder.exe: CMakeFiles/string_builder.exe.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/madilynsimons/Documents/cracking-coding/concepts/string-builder/cmake-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable string_builder.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/string_builder.exe.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/string_builder.exe.dir/build: string_builder.exe

.PHONY : CMakeFiles/string_builder.exe.dir/build

CMakeFiles/string_builder.exe.dir/requires: CMakeFiles/string_builder.exe.dir/string_builder.cc.o.requires

.PHONY : CMakeFiles/string_builder.exe.dir/requires

CMakeFiles/string_builder.exe.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/string_builder.exe.dir/cmake_clean.cmake
.PHONY : CMakeFiles/string_builder.exe.dir/clean

CMakeFiles/string_builder.exe.dir/depend:
	cd /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/cmake-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/madilynsimons/Documents/cracking-coding/concepts/string-builder /home/madilynsimons/Documents/cracking-coding/concepts/string-builder /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/cmake-build /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/cmake-build /home/madilynsimons/Documents/cracking-coding/concepts/string-builder/cmake-build/CMakeFiles/string_builder.exe.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/string_builder.exe.dir/depend

