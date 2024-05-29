#include "pch.h"
#include "../project1/cal.cpp"

TEST(TestCaseName, getSumTest) {
	EXPECT_EQ(getSum(5, 10), 15);
	EXPECT_TRUE(true);
}