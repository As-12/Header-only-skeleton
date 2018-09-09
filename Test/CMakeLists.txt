# Requires at least CMake 3.5
cmake_minimum_required(VERSION 3.5)

# Set the project name
project (MyProject-Test-Suite)

# Download and build Google Test framework from github
add_subdirectory(google-test)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit-test run-test.cpp)
# Link the test executable
target_link_libraries(unit-test
    GTest::GTest 
    GTest::Main
    lib::myLibrary  # Header-only library
)

# Add tests
add_test(test_all unit-test)

