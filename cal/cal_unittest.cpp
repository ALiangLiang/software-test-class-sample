#include "gtest/gtest.h"
#include "cal.h"
TEST(cal, add){
	EXPECT_EQ(cal('+', 2, 3), 5);
}

TEST(cal, sub){
	EXPECT_EQ(cal('-', 2, 3), -1);
}

TEST(cal, mul){
	EXPECT_EQ(cal('*', 2, 3), 6);
}

TEST(cal, div){
	EXPECT_EQ(cal('/', 8, 2), 4);
}

TEST(cal, unknown){
	EXPECT_ANY_THROW(cal('%', 0, 3));
}
