# cmake_minimum_required(VERSION <specify CMake version here>)
project(pointy)

set(CMAKE_CXX_STANDARD 14)

add_executable(pointy main.cpp)
add_executable(pointy ref.cpp)