#include "pch.h"
#include "../project1/cal.cpp"

TEST(Cal, getGop) {
  int expected = 6;
  int actual = getGop(2, 3);

  EXPECT_EQ(actual, expected);
}

TEST(TestCal, getMinus) {
  EXPECT_EQ(5, getMinus(10,5));
}