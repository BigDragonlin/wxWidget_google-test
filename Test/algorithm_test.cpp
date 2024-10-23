#ifndef MYTINYSTL_ALGORITHM_TEST_H_
#define MYTINYSTL_ALGORITHM_TEST_H_
#include "gtest/gtest.h"
#include "algorithm"
#include "../TinySTL/algobase.h"
//算法测试：包含mystl的81个算法测试


//测试copy
TEST(copy, copy){
    int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
    int exp[5], act[5];
    std::copy(arr1, arr1 + 5, exp);
    mystl::copy(arr1, arr1 + 5, act);
    EXPECT_EQ(1, 2);
    std::copy(arr1 + 5, arr1 + 10, exp);
    mystl::copy(arr1 + 5, arr1 + 10, act);
}
#endif