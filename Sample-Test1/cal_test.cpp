#include "pch.h"
#include "../project1/cal.cpp"

TEST(TestCaseName, getSumTest) {
	int a = 10;
	int b = 5;
    EXPECT_EQ(getSum(a, b), a+b);
    EXPECT_TRUE(true);
}