# third_party 目录使用指南

本目录用于存放项目依赖的第三方库源码或头文件，常见用法如下：

## 推荐用法

1. **子模块管理**：
   - 使用 git submodule 添加第三方库源码。
   - 示例：
     ```bash
     git submodule add https://github.com/example/SomeLibrary.git third_party/SomeLibrary
     ```
2. **手动拷贝**：
   - 将第三方库的头文件或源码直接复制到本目录下。

3. **CMake 集成**：
   - 在 CMakeLists.txt 中通过 `add_subdirectory` 或 `include_directories` 集成 third_party 下的库。
   - 示例：
     ```cmake
     add_subdirectory(third_party/SomeLibrary)
     include_directories(${CMAKE_SOURCE_DIR}/third_party/SomeLibrary/include)
     ```

## 注意事项
- 建议不要直接修改第三方库源码，如需修改请注明。
- 可在 .gitignore 中根据需要忽略部分第三方库。
- 如有 LICENSE 或 README，请一并保留。

---

你可以在此目录下添加任意第三方依赖，方便统一管理。