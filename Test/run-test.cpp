// AllTests.cpp
#include <gtest/gtest.h>
#include <Library/Framework.hpp>

TEST(SubtractTest1, SubtractTwoNumbers)
{
    Library::print();
    EXPECT_EQ(5, 5);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}