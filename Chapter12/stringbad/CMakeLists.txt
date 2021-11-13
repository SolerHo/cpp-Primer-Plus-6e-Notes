#声明最低cmake版本
cmake_minimum_required(VERSION 3.0.0)

project(StringBad)

set(CMAKE_CXX_STANDARD 14)

add_executable(StringBad.out vegnews.cc stringbad.cc stringbad.h)