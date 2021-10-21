cmake_minimum_required (VERSION 3.8)
project(calculator)

add_executable(calculator main.cpp)
add_library(calcproLib STATIC calculator.cpp calculator.h)
target_link_libraries(calculator calcproLib)

cmake_minimum_required(VERSION 3.16.3)