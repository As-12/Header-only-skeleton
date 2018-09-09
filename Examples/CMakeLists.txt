cmake_minimum_required(VERSION 3.5)

# Set the project name
project (Skeleton-Demo)


# Add a testing executable
add_executable(demo-1 demo-1.cpp)

target_link_libraries(demo-1
    GTest::GTest 
    GTest::Main
    lib::myLibrary  # Header-only library
)

# Add a testing executable
add_executable(demo-2 demo-2.cpp)

target_link_libraries(demo-2
    GTest::GTest 
    GTest::Main
    lib::myLibrary  # Header-only library
)

