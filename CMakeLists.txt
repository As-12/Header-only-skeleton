cmake_minimum_required (VERSION 3.5)

project(Skeleton-Header)

# Add sub directories
add_subdirectory(include)
add_subdirectory(Test)
add_subdirectory(Benchmark)
add_subdirectory(Examples)

option(BUILD_DOC "Build documentation" ON)

add_subdirectory(Doc)
