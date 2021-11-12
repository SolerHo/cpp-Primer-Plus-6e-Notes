#声明最低cmake版本
cmake_minimum_required(VERSION 3.0.0)

project(mytime20)

set(CMAKE_CXX_STANDARD 14)

add_executable(mytime20.out main.cc mytime20.cc mytime20.h)