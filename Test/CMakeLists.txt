cmake_minimum_required(VERSION 3.5)

# Set the project name
project (MyProject-Test-Suite)

#############################################
# Unit tests

add_subdirectory(google-test)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(run-test run-test.cpp test-1.cpp test-2.cpp)

target_link_libraries(run-test
    GTest::GTest 
    GTest::Main
    lib::myLibrary  # Header-only library
)

add_test(test_all run-test)

