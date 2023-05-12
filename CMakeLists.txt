# Minimum CMake Version and Project name
cmake_minimum_required(VERSION 3.25)
project(PacManCE)

set(CMAKE_CXX_STANDARD 17)

# SFML inclusion
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

# Excecutables amirite :3
add_executable( PacManCE src/main.cpp src/PlayState.cpp src/PlayState.h src/MainMenuState.cpp 
                src/MainMenuState.h src/Player.cpp src/Player.h src/Enemy.cpp src/Enemy.h
                src/Tile.cpp src/Tile.h)

# Linking sfml to the project
target_link_libraries(PacManCE sfml-graphics sfml-audio)