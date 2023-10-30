cmake_minimum_required(VERSION 3.10)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
option(USE_MYMATH "Use tutorial provided math implementation" ON)
# set the project name and version
project(Tutorial VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(Tutorial src/main.cpp)
target_include_directories(
    ${CMAKE_PROJECT_NAME}
    PUBLIC
    /opt/homebrew/opt/llvm/include /opt/homebrew/opt/llvm/include/c++/v1
    ${PROJECT_BINARY_DIR}
    mylib
    )
message(PROJECT_SOURCE_DIR="${PROJECT_SOURCE_DIR}")
message(PROJECT_SOURCE_DIR="$ENV{CPPFLAGS}")
add_subdirectory(mylib)
target_link_libraries(
    ${CMAKE_PROJECT_NAME}
    PUBLIC
    mylib
    )
