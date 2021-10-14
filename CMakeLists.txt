cmake_minimum_required(VERSION 3.20)
project(lab2)

set(CMAKE_CXX_STANDARD 20)

add_executable(lab2 main.cpp Google_tests/astroid.cpp Google_tests/lib/astroid.h)
add_subdirectory(Google_tests)
