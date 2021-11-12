#声明最低cmake版本
cmake_minimum_required(VERSION 3.0.0)

project(mytime10)

set(CMAKE_CXX_STANDARD 14)

add_executable(mytime10.out main.cc mytime10.cc mytime10.h)