# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = "E:\Program Files (x86)\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "E:\Program Files (x86)\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Vlad\Desktop\proc-c-hw\code

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/proc-c-1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/proc-c-1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proc-c-1.dir/flags.make

CMakeFiles/proc-c-1.dir/transport.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/transport.c.obj: ../transport.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/proc-c-1.dir/transport.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\transport.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\transport.c

CMakeFiles/proc-c-1.dir/transport.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/transport.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\transport.c > CMakeFiles\proc-c-1.dir\transport.c.i

CMakeFiles/proc-c-1.dir/transport.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/transport.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\transport.c -o CMakeFiles\proc-c-1.dir\transport.c.s

CMakeFiles/proc-c-1.dir/plane.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/plane.c.obj: ../plane.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/proc-c-1.dir/plane.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\plane.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\plane.c

CMakeFiles/proc-c-1.dir/plane.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/plane.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\plane.c > CMakeFiles\proc-c-1.dir\plane.c.i

CMakeFiles/proc-c-1.dir/plane.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/plane.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\plane.c -o CMakeFiles\proc-c-1.dir\plane.c.s

CMakeFiles/proc-c-1.dir/train.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/train.c.obj: ../train.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/proc-c-1.dir/train.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\train.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\train.c

CMakeFiles/proc-c-1.dir/train.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/train.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\train.c > CMakeFiles\proc-c-1.dir\train.c.i

CMakeFiles/proc-c-1.dir/train.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/train.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\train.c -o CMakeFiles\proc-c-1.dir\train.c.s

CMakeFiles/proc-c-1.dir/ship.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/ship.c.obj: ../ship.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/proc-c-1.dir/ship.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\ship.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\ship.c

CMakeFiles/proc-c-1.dir/ship.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/ship.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\ship.c > CMakeFiles\proc-c-1.dir\ship.c.i

CMakeFiles/proc-c-1.dir/ship.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/ship.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\ship.c -o CMakeFiles\proc-c-1.dir\ship.c.s

CMakeFiles/proc-c-1.dir/container.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/container.c.obj: ../container.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/proc-c-1.dir/container.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\container.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\container.c

CMakeFiles/proc-c-1.dir/container.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/container.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\container.c > CMakeFiles\proc-c-1.dir\container.c.i

CMakeFiles/proc-c-1.dir/container.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/container.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\container.c -o CMakeFiles\proc-c-1.dir\container.c.s

CMakeFiles/proc-c-1.dir/main.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/proc-c-1.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\main.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\main.c

CMakeFiles/proc-c-1.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\main.c > CMakeFiles\proc-c-1.dir\main.c.i

CMakeFiles/proc-c-1.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\main.c -o CMakeFiles\proc-c-1.dir\main.c.s

CMakeFiles/proc-c-1.dir/rnd.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/rnd.c.obj: ../rnd.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/proc-c-1.dir/rnd.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\rnd.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\rnd.c

CMakeFiles/proc-c-1.dir/rnd.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/rnd.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\rnd.c > CMakeFiles\proc-c-1.dir\rnd.c.i

CMakeFiles/proc-c-1.dir/rnd.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/rnd.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\rnd.c -o CMakeFiles\proc-c-1.dir\rnd.c.s

CMakeFiles/proc-c-1.dir/test_generation.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/test_generation.c.obj: ../test_generation.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/proc-c-1.dir/test_generation.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\test_generation.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\test_generation.c

CMakeFiles/proc-c-1.dir/test_generation.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/test_generation.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\test_generation.c > CMakeFiles\proc-c-1.dir\test_generation.c.i

CMakeFiles/proc-c-1.dir/test_generation.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/test_generation.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\test_generation.c -o CMakeFiles\proc-c-1.dir\test_generation.c.s

CMakeFiles/proc-c-1.dir/file_read.c.obj: CMakeFiles/proc-c-1.dir/flags.make
CMakeFiles/proc-c-1.dir/file_read.c.obj: ../file_read.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/proc-c-1.dir/file_read.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\proc-c-1.dir\file_read.c.obj -c C:\Users\Vlad\Desktop\proc-c-hw\code\file_read.c

CMakeFiles/proc-c-1.dir/file_read.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/proc-c-1.dir/file_read.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Vlad\Desktop\proc-c-hw\code\file_read.c > CMakeFiles\proc-c-1.dir\file_read.c.i

CMakeFiles/proc-c-1.dir/file_read.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/proc-c-1.dir/file_read.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Vlad\Desktop\proc-c-hw\code\file_read.c -o CMakeFiles\proc-c-1.dir\file_read.c.s

# Object files for target proc-c-1
proc__c__1_OBJECTS = \
"CMakeFiles/proc-c-1.dir/transport.c.obj" \
"CMakeFiles/proc-c-1.dir/plane.c.obj" \
"CMakeFiles/proc-c-1.dir/train.c.obj" \
"CMakeFiles/proc-c-1.dir/ship.c.obj" \
"CMakeFiles/proc-c-1.dir/container.c.obj" \
"CMakeFiles/proc-c-1.dir/main.c.obj" \
"CMakeFiles/proc-c-1.dir/rnd.c.obj" \
"CMakeFiles/proc-c-1.dir/test_generation.c.obj" \
"CMakeFiles/proc-c-1.dir/file_read.c.obj"

# External object files for target proc-c-1
proc__c__1_EXTERNAL_OBJECTS =

../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/transport.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/plane.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/train.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/ship.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/container.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/main.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/rnd.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/test_generation.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/file_read.c.obj
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/build.make
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/linklibs.rsp
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/objects1.rsp
../bin/proc-c-1.exe: CMakeFiles/proc-c-1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking C executable ..\bin\proc-c-1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\proc-c-1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proc-c-1.dir/build: ../bin/proc-c-1.exe
.PHONY : CMakeFiles/proc-c-1.dir/build

CMakeFiles/proc-c-1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\proc-c-1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/proc-c-1.dir/clean

CMakeFiles/proc-c-1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Vlad\Desktop\proc-c-hw\code C:\Users\Vlad\Desktop\proc-c-hw\code C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug C:\Users\Vlad\Desktop\proc-c-hw\code\cmake-build-debug\CMakeFiles\proc-c-1.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/proc-c-1.dir/depend

