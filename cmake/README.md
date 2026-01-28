# cmake 目录使用指南

本目录用于存放自定义 CMake 脚本和模块。

- 可放置 FindXXX.cmake、工具函数等辅助脚本。
- 在主 CMakeLists.txt 通过 include(cmake/xxx.cmake) 引用。
- 便于项目构建流程的扩展和复用。

---

你可以在此目录下添加自己的 CMake 脚本，提升构建系统灵活性。
