# Library target
add_library(calculator_lib
    calculator.cpp
)

target_include_directories(calculator_lib PUBLIC
    ${PROJECT_SOURCE_DIR}/include
)

# Executable target
add_executable(CppProjectTemplate
    main.cpp
)

target_link_libraries(CppProjectTemplate PRIVATE
    calculator_lib
)
