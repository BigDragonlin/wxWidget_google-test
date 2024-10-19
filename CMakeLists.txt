cmake_minimum_required(VERSION 3.10)
project(google-test)

# 添加 Google Test 库
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests test.cpp) # 你的测试文件
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
