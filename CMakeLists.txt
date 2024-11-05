cmake_minimum_required(VERSION 3.14)
project(google-test-sample)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 启用测试
enable_testing()

# 包含 FetchContent 模块
include(FetchContent)

# 配置 FetchContent 以下载 Google Test
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        release-1.12.1  # 可以根据需要选择最新版本
)

# 防止 Google Test 在测试期间构建共享库
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

# 下载并添加 Google Test
FetchContent_MakeAvailable(googletest)

# 添加测试可执行文件
file(GLOB TEST_SOURCE "test/*.cpp")
add_executable(MyTests
        ${TEST_SOURCE}
)

# 链接 Google Test 库
target_link_libraries(MyTests GTest::gtest GTest::gtest_main)

# 添加测试
add_test(NAME MyTests COMMAND MyTests)
