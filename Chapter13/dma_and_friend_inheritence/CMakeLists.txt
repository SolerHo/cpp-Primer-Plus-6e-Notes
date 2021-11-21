#说明cmake最低版本
cmake_minimum_required(VERSION 3.0.0)

project(dma)

set(CMAKE_CXX_STANDARD 14)

add_executable(dma.out dmamain.cc dma.cc dma.hh)