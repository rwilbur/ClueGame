cmake_minimum_required(VERSION 3.1)
project(ClueGame)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SOURCES LIST_DIRECTORIES false RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/*.h")

add_executable(ClueGame ${SOURCES})
target_link_libraries(ClueGame -lOpenGL32 -lfreeGLUT)
