# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /home/jose/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.8770.66/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /home/jose/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/231.8770.66/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jose/Desktop/TEC/CE2103/PacManCE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PacManCE.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/PacManCE.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/PacManCE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PacManCE.dir/flags.make

CMakeFiles/PacManCE.dir/src/main.cpp.o: CMakeFiles/PacManCE.dir/flags.make
CMakeFiles/PacManCE.dir/src/main.cpp.o: /home/jose/Desktop/TEC/CE2103/PacManCE/src/main.cpp
CMakeFiles/PacManCE.dir/src/main.cpp.o: CMakeFiles/PacManCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PacManCE.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PacManCE.dir/src/main.cpp.o -MF CMakeFiles/PacManCE.dir/src/main.cpp.o.d -o CMakeFiles/PacManCE.dir/src/main.cpp.o -c /home/jose/Desktop/TEC/CE2103/PacManCE/src/main.cpp

CMakeFiles/PacManCE.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PacManCE.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/PacManCE/src/main.cpp > CMakeFiles/PacManCE.dir/src/main.cpp.i

CMakeFiles/PacManCE.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PacManCE.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/PacManCE/src/main.cpp -o CMakeFiles/PacManCE.dir/src/main.cpp.s

CMakeFiles/PacManCE.dir/src/PlayState.cpp.o: CMakeFiles/PacManCE.dir/flags.make
CMakeFiles/PacManCE.dir/src/PlayState.cpp.o: /home/jose/Desktop/TEC/CE2103/PacManCE/src/PlayState.cpp
CMakeFiles/PacManCE.dir/src/PlayState.cpp.o: CMakeFiles/PacManCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/PacManCE.dir/src/PlayState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PacManCE.dir/src/PlayState.cpp.o -MF CMakeFiles/PacManCE.dir/src/PlayState.cpp.o.d -o CMakeFiles/PacManCE.dir/src/PlayState.cpp.o -c /home/jose/Desktop/TEC/CE2103/PacManCE/src/PlayState.cpp

CMakeFiles/PacManCE.dir/src/PlayState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PacManCE.dir/src/PlayState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/PacManCE/src/PlayState.cpp > CMakeFiles/PacManCE.dir/src/PlayState.cpp.i

CMakeFiles/PacManCE.dir/src/PlayState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PacManCE.dir/src/PlayState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/PacManCE/src/PlayState.cpp -o CMakeFiles/PacManCE.dir/src/PlayState.cpp.s

CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o: CMakeFiles/PacManCE.dir/flags.make
CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o: /home/jose/Desktop/TEC/CE2103/PacManCE/src/MainMenuState.cpp
CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o: CMakeFiles/PacManCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o -MF CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o.d -o CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o -c /home/jose/Desktop/TEC/CE2103/PacManCE/src/MainMenuState.cpp

CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/PacManCE/src/MainMenuState.cpp > CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.i

CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/PacManCE/src/MainMenuState.cpp -o CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.s

CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o: CMakeFiles/PacManCE.dir/flags.make
CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o: /home/jose/Desktop/TEC/CE2103/PacManCE/src/CreditsState.cpp
CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o: CMakeFiles/PacManCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o -MF CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o.d -o CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o -c /home/jose/Desktop/TEC/CE2103/PacManCE/src/CreditsState.cpp

CMakeFiles/PacManCE.dir/src/CreditsState.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PacManCE.dir/src/CreditsState.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/PacManCE/src/CreditsState.cpp > CMakeFiles/PacManCE.dir/src/CreditsState.cpp.i

CMakeFiles/PacManCE.dir/src/CreditsState.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PacManCE.dir/src/CreditsState.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/PacManCE/src/CreditsState.cpp -o CMakeFiles/PacManCE.dir/src/CreditsState.cpp.s

CMakeFiles/PacManCE.dir/src/Player.cpp.o: CMakeFiles/PacManCE.dir/flags.make
CMakeFiles/PacManCE.dir/src/Player.cpp.o: /home/jose/Desktop/TEC/CE2103/PacManCE/src/Player.cpp
CMakeFiles/PacManCE.dir/src/Player.cpp.o: CMakeFiles/PacManCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/PacManCE.dir/src/Player.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PacManCE.dir/src/Player.cpp.o -MF CMakeFiles/PacManCE.dir/src/Player.cpp.o.d -o CMakeFiles/PacManCE.dir/src/Player.cpp.o -c /home/jose/Desktop/TEC/CE2103/PacManCE/src/Player.cpp

CMakeFiles/PacManCE.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PacManCE.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/PacManCE/src/Player.cpp > CMakeFiles/PacManCE.dir/src/Player.cpp.i

CMakeFiles/PacManCE.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PacManCE.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/PacManCE/src/Player.cpp -o CMakeFiles/PacManCE.dir/src/Player.cpp.s

CMakeFiles/PacManCE.dir/src/Enemy.cpp.o: CMakeFiles/PacManCE.dir/flags.make
CMakeFiles/PacManCE.dir/src/Enemy.cpp.o: /home/jose/Desktop/TEC/CE2103/PacManCE/src/Enemy.cpp
CMakeFiles/PacManCE.dir/src/Enemy.cpp.o: CMakeFiles/PacManCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/PacManCE.dir/src/Enemy.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PacManCE.dir/src/Enemy.cpp.o -MF CMakeFiles/PacManCE.dir/src/Enemy.cpp.o.d -o CMakeFiles/PacManCE.dir/src/Enemy.cpp.o -c /home/jose/Desktop/TEC/CE2103/PacManCE/src/Enemy.cpp

CMakeFiles/PacManCE.dir/src/Enemy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PacManCE.dir/src/Enemy.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/PacManCE/src/Enemy.cpp > CMakeFiles/PacManCE.dir/src/Enemy.cpp.i

CMakeFiles/PacManCE.dir/src/Enemy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PacManCE.dir/src/Enemy.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/PacManCE/src/Enemy.cpp -o CMakeFiles/PacManCE.dir/src/Enemy.cpp.s

CMakeFiles/PacManCE.dir/src/Tile.cpp.o: CMakeFiles/PacManCE.dir/flags.make
CMakeFiles/PacManCE.dir/src/Tile.cpp.o: /home/jose/Desktop/TEC/CE2103/PacManCE/src/Tile.cpp
CMakeFiles/PacManCE.dir/src/Tile.cpp.o: CMakeFiles/PacManCE.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/PacManCE.dir/src/Tile.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/PacManCE.dir/src/Tile.cpp.o -MF CMakeFiles/PacManCE.dir/src/Tile.cpp.o.d -o CMakeFiles/PacManCE.dir/src/Tile.cpp.o -c /home/jose/Desktop/TEC/CE2103/PacManCE/src/Tile.cpp

CMakeFiles/PacManCE.dir/src/Tile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PacManCE.dir/src/Tile.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jose/Desktop/TEC/CE2103/PacManCE/src/Tile.cpp > CMakeFiles/PacManCE.dir/src/Tile.cpp.i

CMakeFiles/PacManCE.dir/src/Tile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PacManCE.dir/src/Tile.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jose/Desktop/TEC/CE2103/PacManCE/src/Tile.cpp -o CMakeFiles/PacManCE.dir/src/Tile.cpp.s

# Object files for target PacManCE
PacManCE_OBJECTS = \
"CMakeFiles/PacManCE.dir/src/main.cpp.o" \
"CMakeFiles/PacManCE.dir/src/PlayState.cpp.o" \
"CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o" \
"CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o" \
"CMakeFiles/PacManCE.dir/src/Player.cpp.o" \
"CMakeFiles/PacManCE.dir/src/Enemy.cpp.o" \
"CMakeFiles/PacManCE.dir/src/Tile.cpp.o"

# External object files for target PacManCE
PacManCE_EXTERNAL_OBJECTS =

PacManCE: CMakeFiles/PacManCE.dir/src/main.cpp.o
PacManCE: CMakeFiles/PacManCE.dir/src/PlayState.cpp.o
PacManCE: CMakeFiles/PacManCE.dir/src/MainMenuState.cpp.o
PacManCE: CMakeFiles/PacManCE.dir/src/CreditsState.cpp.o
PacManCE: CMakeFiles/PacManCE.dir/src/Player.cpp.o
PacManCE: CMakeFiles/PacManCE.dir/src/Enemy.cpp.o
PacManCE: CMakeFiles/PacManCE.dir/src/Tile.cpp.o
PacManCE: CMakeFiles/PacManCE.dir/build.make
PacManCE: CMakeFiles/PacManCE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable PacManCE"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/PacManCE.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PacManCE.dir/build: PacManCE
.PHONY : CMakeFiles/PacManCE.dir/build

CMakeFiles/PacManCE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/PacManCE.dir/cmake_clean.cmake
.PHONY : CMakeFiles/PacManCE.dir/clean

CMakeFiles/PacManCE.dir/depend:
	cd /home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jose/Desktop/TEC/CE2103/PacManCE /home/jose/Desktop/TEC/CE2103/PacManCE /home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug /home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug /home/jose/Desktop/TEC/CE2103/PacManCE/cmake-build-debug/CMakeFiles/PacManCE.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PacManCE.dir/depend

