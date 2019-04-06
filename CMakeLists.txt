cmake_minimum_required(VERSION 3.9)
project(ClueGame)

set(CMAKE_CXX_STANDARD 11)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp")
add_executable(ClueGame ${SOURCES})
