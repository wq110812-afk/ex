cmake_minimum_required(VERSION 3.10)
project(StudentScoreStats LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(score
    src/main.cpp
    src/Student.cpp
)

target_include_directories(score PRIVATE include)
