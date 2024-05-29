#include "pch.h"
#include "../project1/cal.cpp"
TEST(TestCal, getMinus) {
  EXPECT_EQ(5, getMinus(10,5));
}