cmake_minimum_required(VERSION 3.17)
project(lecture24)

set(CMAKE_CXX_STANDARD 14)

add_executable(queue queue.cpp SinglyLinkedList.cpp)
add_executable(warmup warmup.cpp SinglyLinkedList.cpp)
