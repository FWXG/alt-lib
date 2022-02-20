cmake_minimum_required(VERSION 3.13)

project(alt LANGUAGES C CXX)

add_library(vector
    src/dummy.cpp
    src/vector.tpp
    headers/vector.h
    )

add_library(algorithm
    src/dummy.cpp
    src/algorithm.tpp
    headers/algorithm.h
    )

add_library(list
    src/dummy.cpp
    src/list.tpp
    headers/list.h
    )
	
add_library(point
    src/dummy.cpp
    src/point.tpp
    headers/point.h
    )

add_library(tupple
    src/dummy.cpp
    src/tupple.tpp
    headers/tupple.h
    )

add_library(math
    src/dummy.cpp
    src/matrix.tpp
    src/math_vector.tpp
    headers/math.h
    )


add_executable(alt src/main.cpp)
target_link_libraries(alt vector algorithm list point tupple)

