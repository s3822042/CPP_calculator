cmake_minimum_required(VERSION 3.17)
project(calculator_score)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(calculator_score
        main.cpp
        main.h)
