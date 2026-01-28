# Download and configure GoogleTest
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.14.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Test executable
add_executable(CppProjectTemplateTests)

target_link_libraries(CppProjectTemplateTests

    gtest
    gtest_main
)

target_include_directories(CppProjectTemplateTests PRIVATE
    ${PROJECT_SOURCE_DIR}/include
)

# Discover tests
include(GoogleTest)
gtest_discover_tests(CppProjectTemplateTests)
