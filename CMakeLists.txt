cmake_minimum_required(VERSION 3.13)

project(alt LANGUAGES CXX)

add_library(vector
    src/main.cpp
    src/vector.tpp
    headers/vector.h
    )

add_library(algorithm
    src/main.cpp
    src/algorithm.tpp
    headers/algorithm.h
    )

add_executable(alt src/main.cpp)
target_link_libraries(alt vector algorithm)

