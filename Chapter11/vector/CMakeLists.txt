#声明最低cmake版本
cmake_minimum_required(VERSION 3.0.0)

project(vector)

set(CMAKE_CXX_STANDARD 14)

add_executable(vector.out main.cc vector.cc vector.h)