# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake3

# The command to remove a file.
RM = /usr/bin/cmake3 -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /tmp/tmp.YDnIeVvR5l

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /tmp/tmp.YDnIeVvR5l/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/getline.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/getline.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/getline.dir/flags.make

CMakeFiles/getline.dir/main.cpp.o: CMakeFiles/getline.dir/flags.make
CMakeFiles/getline.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.YDnIeVvR5l/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/getline.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/getline.dir/main.cpp.o -c /tmp/tmp.YDnIeVvR5l/main.cpp

CMakeFiles/getline.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/getline.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.YDnIeVvR5l/main.cpp > CMakeFiles/getline.dir/main.cpp.i

CMakeFiles/getline.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/getline.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.YDnIeVvR5l/main.cpp -o CMakeFiles/getline.dir/main.cpp.s

CMakeFiles/getline.dir/old.cpp.o: CMakeFiles/getline.dir/flags.make
CMakeFiles/getline.dir/old.cpp.o: ../old.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/tmp/tmp.YDnIeVvR5l/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/getline.dir/old.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/getline.dir/old.cpp.o -c /tmp/tmp.YDnIeVvR5l/old.cpp

CMakeFiles/getline.dir/old.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/getline.dir/old.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /tmp/tmp.YDnIeVvR5l/old.cpp > CMakeFiles/getline.dir/old.cpp.i

CMakeFiles/getline.dir/old.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/getline.dir/old.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /tmp/tmp.YDnIeVvR5l/old.cpp -o CMakeFiles/getline.dir/old.cpp.s

# Object files for target getline
getline_OBJECTS = \
"CMakeFiles/getline.dir/main.cpp.o" \
"CMakeFiles/getline.dir/old.cpp.o"

# External object files for target getline
getline_EXTERNAL_OBJECTS =

getline: CMakeFiles/getline.dir/main.cpp.o
getline: CMakeFiles/getline.dir/old.cpp.o
getline: CMakeFiles/getline.dir/build.make
getline: CMakeFiles/getline.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/tmp/tmp.YDnIeVvR5l/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable getline"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/getline.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/getline.dir/build: getline

.PHONY : CMakeFiles/getline.dir/build

CMakeFiles/getline.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/getline.dir/cmake_clean.cmake
.PHONY : CMakeFiles/getline.dir/clean

CMakeFiles/getline.dir/depend:
	cd /tmp/tmp.YDnIeVvR5l/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /tmp/tmp.YDnIeVvR5l /tmp/tmp.YDnIeVvR5l /tmp/tmp.YDnIeVvR5l/cmake-build-debug /tmp/tmp.YDnIeVvR5l/cmake-build-debug /tmp/tmp.YDnIeVvR5l/cmake-build-debug/CMakeFiles/getline.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/getline.dir/depend
