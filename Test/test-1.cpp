#include "gtest/gtest.h"
#include <Library/Framework.hpp>

TEST(SubtractTest1, SubtractTwoNumbers)
{
    Library::print();
    EXPECT_EQ(5, 6-1);
}


