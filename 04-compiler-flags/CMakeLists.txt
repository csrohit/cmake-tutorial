cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(cc-flags LANGUAGES CXX)

message("C++ compiler flags: ${CMAKE_CXX_FLAGS}")

list(APPEND flags "-fPIC" "-Wall" "-Wextra" "-Wpedantic")

add_library(geometry
    STATIC
    circle.hpp
    circle.cpp
    square.hpp
    square.cpp
)

target_compile_options(geometry
    PRIVATE
    ${flags}
)

add_executable(compute_areas main.cpp)

target_compile_options(compute_areas
    PRIVATE
    "-fPIC"
)

target_link_libraries(compute_areas geometry)


