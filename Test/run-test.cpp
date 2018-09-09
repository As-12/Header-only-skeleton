// AllTests.cpp
#include <gtest/gtest.h>
#include <Library/Framework.hpp>
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}