cmake_minimum_required(VERSION 3.15)
project(CppProjectTemplate VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add source and header files
add_subdirectory(src)
add_subdirectory(tests)

# Enable testing
enable_testing()
