cmake_minimum_required(VERSION 3.9)
project(ClueGame)

set(CMAKE_CXX_STANDARD 11)

add_executable(ClueGame main.cpp GameLoop.cpp GameLoop.h Graphics.cpp Graphics.h Room.cpp Room.h Suspect.cpp Suspect.h)
target_link_libraries(ClueGame -lOpenGL32 -lfreeGLUT)