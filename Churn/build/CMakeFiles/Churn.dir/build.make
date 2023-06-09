# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build

# Include any dependencies generated for this target.
include CMakeFiles/Churn.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Churn.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Churn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Churn.dir/flags.make

CMakeFiles/Churn.dir/src/main.cpp.o: CMakeFiles/Churn.dir/flags.make
CMakeFiles/Churn.dir/src/main.cpp.o: ../src/main.cpp
CMakeFiles/Churn.dir/src/main.cpp.o: CMakeFiles/Churn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Churn.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Churn.dir/src/main.cpp.o -MF CMakeFiles/Churn.dir/src/main.cpp.o.d -o CMakeFiles/Churn.dir/src/main.cpp.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/src/main.cpp

CMakeFiles/Churn.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Churn.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/src/main.cpp > CMakeFiles/Churn.dir/src/main.cpp.i

CMakeFiles/Churn.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Churn.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/src/main.cpp -o CMakeFiles/Churn.dir/src/main.cpp.s

CMakeFiles/Churn.dir/libs/glad/glad.c.o: CMakeFiles/Churn.dir/flags.make
CMakeFiles/Churn.dir/libs/glad/glad.c.o: ../libs/glad/glad.c
CMakeFiles/Churn.dir/libs/glad/glad.c.o: CMakeFiles/Churn.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Churn.dir/libs/glad/glad.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/Churn.dir/libs/glad/glad.c.o -MF CMakeFiles/Churn.dir/libs/glad/glad.c.o.d -o CMakeFiles/Churn.dir/libs/glad/glad.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/glad/glad.c

CMakeFiles/Churn.dir/libs/glad/glad.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Churn.dir/libs/glad/glad.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/glad/glad.c > CMakeFiles/Churn.dir/libs/glad/glad.c.i

CMakeFiles/Churn.dir/libs/glad/glad.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Churn.dir/libs/glad/glad.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/glad/glad.c -o CMakeFiles/Churn.dir/libs/glad/glad.c.s

# Object files for target Churn
Churn_OBJECTS = \
"CMakeFiles/Churn.dir/src/main.cpp.o" \
"CMakeFiles/Churn.dir/libs/glad/glad.c.o"

# External object files for target Churn
Churn_EXTERNAL_OBJECTS =

Churn: CMakeFiles/Churn.dir/src/main.cpp.o
Churn: CMakeFiles/Churn.dir/libs/glad/glad.c.o
Churn: CMakeFiles/Churn.dir/build.make
Churn: /usr/lib/x86_64-linux-gnu/libOpenGL.so
Churn: /usr/lib/x86_64-linux-gnu/libGLX.so
Churn: /usr/lib/x86_64-linux-gnu/libGLU.so
Churn: /usr/local/lib/libglfw3.a
Churn: libfreetype_gl_lib.a
Churn: /usr/lib/x86_64-linux-gnu/librt.a
Churn: /usr/lib/x86_64-linux-gnu/libm.so
Churn: /usr/lib/x86_64-linux-gnu/libX11.so
Churn: CMakeFiles/Churn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Churn"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Churn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Churn.dir/build: Churn
.PHONY : CMakeFiles/Churn.dir/build

CMakeFiles/Churn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Churn.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Churn.dir/clean

CMakeFiles/Churn.dir/depend:
	cd /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles/Churn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Churn.dir/depend

