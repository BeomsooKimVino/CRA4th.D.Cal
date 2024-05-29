#include "pch.h"
#include "../project1/cal.cpp"

TEST(TestCaseName, getSumSumTest) {
	int a = 3;
	int b = 4;
	int c = 5;
	EXPECT_EQ(a+b+c, getSumSum(a, b, c));
	EXPECT_TRUE(true);
}
