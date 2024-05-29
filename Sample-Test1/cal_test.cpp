#include "pch.h"
#include "../project1/cal.cpp"

TEST(CalTest, devideTest) {
	int expected = 2;
	int actual = Cal.getDevice(4, 2);
	EXPECTED_EQ(expected, actual);
}