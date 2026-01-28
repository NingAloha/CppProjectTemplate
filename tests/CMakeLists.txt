# CMake configuration for the tests directory

# 使用 FetchContent 自动下载 GoogleTest
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# 防止在父项目中安装
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_executable(CppProjectTemplateTests
    test_main.cpp
)

target_link_libraries(CppProjectTemplateTests gtest gtest_main)

enable_testing()
add_test(NAME ExampleTest COMMAND CppProjectTemplateTests)
