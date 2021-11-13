#声明最低cmake版本
cmake_minimum_required(VERSION 3.0.0)

project(sayings)

set(CMAKE_CXX_STANDARD 14)

add_executable(sayings.out saying1.cc string1.cc string1.h)