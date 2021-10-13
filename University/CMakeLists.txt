cmake_minimum_required(VERSION 3.16.3)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(University)

add_executable(
    UniversityTest
    main.cpp
    student.cpp
    elective_discipline.cpp
)