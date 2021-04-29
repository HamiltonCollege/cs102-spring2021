cmake_minimum_required(VERSION 3.17)
project(lecture25)

set(CMAKE_CXX_STANDARD 14)

add_executable(warmup warmup.cpp SinglyLinkedList.cpp)
add_executable(search search.cpp)
