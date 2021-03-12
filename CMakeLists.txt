cmake_minimum_required(VERSION 3.17)
project(LastMultiConfigLibrary)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../")

add_executable(parser main.cpp)
add_executable(remake registry.cpp)