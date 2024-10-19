#include <gtest/gtest.h>

int Add(int a, int b) {
    return a + b;
}


TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(Add(1, 2), 10);  // 期待 Add(1, 2) 返回 3
    EXPECT_EQ(Add(5, 7), 12);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(Add(-1, -1), -2);  // 期待 Add(-1, -1) 返回 -2
    EXPECT_EQ(Add(-5, 3), -2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();  // 运行所有测试
}
