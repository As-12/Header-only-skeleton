cmake_minimum_required(VERSION 3.5)

# Set the project name
project (MyProject-Test-Suite)

add_subdirectory(google-test)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit-test run-test.cpp)

target_link_libraries(unit-test
    GTest::GTest 
    GTest::Main
    lib::myLibrary  # Header-only library
)

add_test(test_all unit-test)

