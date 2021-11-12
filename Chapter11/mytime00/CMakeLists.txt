#声明最低cmake版本
cmake_minimum_required(VERSION 3.0.0)

project(mytime00)

set(CMAKE_CXX_STANDARD 14)

add_executable(mytime00.out main.cc mytime00.cc mytime00.h)