cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 14)

add_executable(animal animal.cpp)
add_executable(queue queue.cpp SinglyLinkedList.cpp)
add_executable(airplane airplane.cpp)
add_executable(warmup warmup.cpp)
