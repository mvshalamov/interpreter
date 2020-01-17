cmake_minimum_required(VERSION 3.12)
project(interpreter)

set(CMAKE_CXX_STANDARD 17)

add_executable(interpreter main.cpp interpreter.cpp interpreter.h)