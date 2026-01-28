# C++ 项目模板

这是一个通用的 C++ 项目模板，旨在快速设置和扩展。它包括结构化的文件夹布局、CMake 构建系统、示例代码和文档。

## 特性
- 组织良好的文件夹结构
- CMake 构建系统
- 示例代码
- 单元测试设置
- 文档和许可

## 文件夹结构
```
CppProjectTemplate/
├── cmake/          # CMake 模块
├── docs/           # 文档
├── include/        # 头文件
├── src/            # 源代码
├── tests/          # 单元测试
├── .github/        # GitHub 专用文件
├── .gitignore      # Git 忽略规则
├── CMakeLists.txt  # CMake 构建配置
├── LICENSE         # 许可文件
└── README.md       # 项目概述
```

## 构建说明
1. 安装 C++ 编译器和 CMake。
2. 克隆此仓库：
   ```bash
   git clone https://github.com/your-username/CppProjectTemplate.git
   ```
3. 创建构建目录并配置项目：
   ```bash
   mkdir build && cd build
   cmake ..
   ```
4. 构建项目：
   ```bash
   cmake --build .
   ```

## 许可
此项目基于 MIT 许可。详情请参阅 [LICENSE](LICENSE) 文件。
