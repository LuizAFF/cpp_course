# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_SOURCE_DIR = /home/lviz/Documents/cpp_course_caravela/aula_04/example-project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build

# Include any dependencies generated for this target.
include CMakeFiles/school.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/school.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/school.dir/flags.make

CMakeFiles/school.dir/functions.cpp.o: CMakeFiles/school.dir/flags.make
CMakeFiles/school.dir/functions.cpp.o: ../functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/school.dir/functions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/school.dir/functions.cpp.o -c /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/functions.cpp

CMakeFiles/school.dir/functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/school.dir/functions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/functions.cpp > CMakeFiles/school.dir/functions.cpp.i

CMakeFiles/school.dir/functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/school.dir/functions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/functions.cpp -o CMakeFiles/school.dir/functions.cpp.s

CMakeFiles/school.dir/student.cpp.o: CMakeFiles/school.dir/flags.make
CMakeFiles/school.dir/student.cpp.o: ../student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/school.dir/student.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/school.dir/student.cpp.o -c /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/student.cpp

CMakeFiles/school.dir/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/school.dir/student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/student.cpp > CMakeFiles/school.dir/student.cpp.i

CMakeFiles/school.dir/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/school.dir/student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/student.cpp -o CMakeFiles/school.dir/student.cpp.s

CMakeFiles/school.dir/main.cpp.o: CMakeFiles/school.dir/flags.make
CMakeFiles/school.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/school.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/school.dir/main.cpp.o -c /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/main.cpp

CMakeFiles/school.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/school.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/main.cpp > CMakeFiles/school.dir/main.cpp.i

CMakeFiles/school.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/school.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/main.cpp -o CMakeFiles/school.dir/main.cpp.s

# Object files for target school
school_OBJECTS = \
"CMakeFiles/school.dir/functions.cpp.o" \
"CMakeFiles/school.dir/student.cpp.o" \
"CMakeFiles/school.dir/main.cpp.o"

# External object files for target school
school_EXTERNAL_OBJECTS =

libschool.a: CMakeFiles/school.dir/functions.cpp.o
libschool.a: CMakeFiles/school.dir/student.cpp.o
libschool.a: CMakeFiles/school.dir/main.cpp.o
libschool.a: CMakeFiles/school.dir/build.make
libschool.a: CMakeFiles/school.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library libschool.a"
	$(CMAKE_COMMAND) -P CMakeFiles/school.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/school.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/school.dir/build: libschool.a

.PHONY : CMakeFiles/school.dir/build

CMakeFiles/school.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/school.dir/cmake_clean.cmake
.PHONY : CMakeFiles/school.dir/clean

CMakeFiles/school.dir/depend:
	cd /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lviz/Documents/cpp_course_caravela/aula_04/example-project /home/lviz/Documents/cpp_course_caravela/aula_04/example-project /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build /home/lviz/Documents/cpp_course_caravela/aula_04/example-project/build/CMakeFiles/school.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/school.dir/depend
