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
include CMakeFiles/freetype_gl_lib.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/freetype_gl_lib.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/freetype_gl_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/freetype_gl_lib.dir/flags.make

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o: ../libs/freetype-gl/distance-field.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/distance-field.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/distance-field.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/distance-field.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o: ../libs/freetype-gl/edtaa3func.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/edtaa3func.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/edtaa3func.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/edtaa3func.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o: ../libs/freetype-gl/font-manager.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/font-manager.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/font-manager.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/font-manager.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o: ../libs/freetype-gl/ftgl-utils.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/ftgl-utils.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/ftgl-utils.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/ftgl-utils.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o: ../libs/freetype-gl/makefont.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/makefont.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/makefont.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/makefont.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o: ../libs/freetype-gl/platform.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/platform.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/platform.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/platform.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o: ../libs/freetype-gl/text-buffer.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/text-buffer.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/text-buffer.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/text-buffer.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o: ../libs/freetype-gl/texture-atlas.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/texture-atlas.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/texture-atlas.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/texture-atlas.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o: ../libs/freetype-gl/texture-font.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/texture-font.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/texture-font.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/texture-font.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o: ../libs/freetype-gl/utf8-utils.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/utf8-utils.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/utf8-utils.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/utf8-utils.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o: ../libs/freetype-gl/vector.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vector.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vector.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vector.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o: ../libs/freetype-gl/vertex-attribute.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vertex-attribute.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vertex-attribute.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vertex-attribute.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.s

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o: CMakeFiles/freetype_gl_lib.dir/flags.make
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o: ../libs/freetype-gl/vertex-buffer.c
CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o: CMakeFiles/freetype_gl_lib.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o -MF CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o.d -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o -c /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vertex-buffer.c

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vertex-buffer.c > CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.i

CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/libs/freetype-gl/vertex-buffer.c -o CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.s

# Object files for target freetype_gl_lib
freetype_gl_lib_OBJECTS = \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o" \
"CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o"

# External object files for target freetype_gl_lib
freetype_gl_lib_EXTERNAL_OBJECTS =

libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/distance-field.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/edtaa3func.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/font-manager.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/ftgl-utils.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/makefont.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/platform.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/text-buffer.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-atlas.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/texture-font.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/utf8-utils.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vector.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-attribute.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/libs/freetype-gl/vertex-buffer.c.o
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/build.make
libfreetype_gl_lib.a: CMakeFiles/freetype_gl_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Linking C static library libfreetype_gl_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/freetype_gl_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/freetype_gl_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/freetype_gl_lib.dir/build: libfreetype_gl_lib.a
.PHONY : CMakeFiles/freetype_gl_lib.dir/build

CMakeFiles/freetype_gl_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/freetype_gl_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/freetype_gl_lib.dir/clean

CMakeFiles/freetype_gl_lib.dir/depend:
	cd /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build /home/ubuntu/dev/cpp/ChurnEngine/ChurnEngine/Churn/build/CMakeFiles/freetype_gl_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/freetype_gl_lib.dir/depend

