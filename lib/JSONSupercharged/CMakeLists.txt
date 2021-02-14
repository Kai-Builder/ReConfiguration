cmake_minimum_required(VERSION 3.17)
project(JSONSupercharged)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../")

add_executable(JSONSupercharged main.cpp)