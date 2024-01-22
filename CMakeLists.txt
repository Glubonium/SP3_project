cmake_minimum_required(VERSION 3.0)
project(lab4)

set(CMAKE_CXX_STANDARD 11)

add_library(lab4 calculator.cpp)

add_executable(calculator main.cpp)

target_link_libraries(calculator Lib)
