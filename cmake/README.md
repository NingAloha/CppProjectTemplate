# 自定义 CMake 模块

本目录用于存放自定义的 CMake 模块和辅助脚本。

## 使用方法

在主 CMakeLists.txt 中添加：

```cmake
list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/cmake")
```

然后可以使用 `include()` 导入自定义模块。

## 常用模块示例

- 代码覆盖率配置
- 静态分析工具集成
- 第三方库查找脚本
- 打包和安装配置
