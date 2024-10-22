#include <gtest/gtest.h>

int Add(int a, int b) {
	return a + b;
}

int Sub(int a, int b)
{
	return a - b;
}

TEST(SubTest, HandleSubtiveNumber)
{
	EXPECT_EQ(Sub(2, 1), 1);
	EXPECT_EQ(Sub(5, 3), 2);
	EXPECT_EQ(Sub(1, 1), 2);
}

int main(int argc, char** argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();  // 运行所有测试
}
