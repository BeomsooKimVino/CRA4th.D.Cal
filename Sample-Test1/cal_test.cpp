#include "pch.h"
#include "../project1/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}


TEST(TestCaseName, ZegopTest1) {

	EXPECT_EQ(4, getZegop(2));
}

TEST(TestCaseName, ZegopTest2) {

	EXPECT_EQ(2.25, getZegop(1.5));
}