cmake_minimum_required(VERSION 3.20)
project(my_project)

set(CMAKE_CXX_STANDARD 17)

add_executable(my_project main.cpp struct1.h struct2.h show_struct.h show_struct.cpp)
