#include "pch.h"
#include "../project1/cal.cpp"

TEST(TestCaseName, getSumTest) {
	EXPECT_EQ(getSum(5, 10), 15);
	EXPECT_TRUE(true);

TEST(Cal, getGop) {
  int expected = 6;
  int actual = getGop(2, 3);

  EXPECT_EQ(actual, expected);
}

TEST(TestCaseName, ZegopTest1) {

	EXPECT_EQ(4, getZegop(2));
}

TEST(TestCaseName, ZegopTest2) {

	EXPECT_EQ(2.25, getZegop(1.5));
}

TEST(TestCal, getMinus) {
  EXPECT_EQ(5, getMinus(10,5));
}


TEST(TestCaseName, getSumSumTest) {
	EXPECT_EQ(12, getSumSum(3, 4, 5));
	EXPECT_TRUE(true);
}