#This project requires at least CMake 3.5
cmake_minimum_required (VERSION 3.5 FATAL_ERROR)

project(Header-Library)

#set source file to be build with the binary

# Add a library with the above sources
add_library(${PROJECT_NAME} INTERFACE)
add_library(lib::myLibrary ALIAS ${PROJECT_NAME})

target_include_directories( ${PROJECT_NAME}
    INTERFACE ${PROJECT_SOURCE_DIR}
)