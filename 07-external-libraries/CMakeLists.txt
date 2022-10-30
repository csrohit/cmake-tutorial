cmake_minimum_required(VERSION 3.22 FATAL_ERROR)

project(modular LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_CXX_STANDARD 11)

# define sources
add_subdirectory(src)
add_subdirectory(lib/**)
