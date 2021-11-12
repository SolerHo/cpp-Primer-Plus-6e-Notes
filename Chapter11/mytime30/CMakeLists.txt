#声明最低cmake版本
cmake_minimum_required(VERSION 3.0.0)

project(mytime30)

set(CMAKE_CXX_STANDARD 14)

add_executable(mytime30.out main.cc mytime30.cc mytime30.h)