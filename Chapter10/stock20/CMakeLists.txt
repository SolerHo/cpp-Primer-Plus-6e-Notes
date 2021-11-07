#camke最低版本要求
cmake_minimum_required(VERSION 3.0.0)

# 工程名称
project(stock10)

# 设置C++ 11标准
set(CMAKE_CXX_STANDARD 11)

# 编译生成可执行文件
add_executable(stock20.out main.cc stock20.cc stock20.h)
