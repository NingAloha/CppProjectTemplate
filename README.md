# C++ 项目模板

## 🆕 如何用本模板初始化新项目


本模板为纯净结构，未包含任何示例类或业务代码，适合直接作为新项目骨架使用。你可以将本仓库作为新 C++ 项目的起点，快速搭建属于自己的工程。推荐流程如下：

### 方式一：GitHub 上直接使用

1. 打开本项目仓库主页，点击 `Use this template` 按钮。
2. 填写你的新仓库名称，点击 `Create repository from template`。
3. 克隆你自己的新仓库到本地，开始开发。

### 方式二：手动克隆并重命名

1. 克隆本仓库到本地：
   ```bash
   git clone https://github.com/NingAloha/CppProjectTemplate.git MyNewProject
   cd MyNewProject
   ```
2. 删除原有的 git 记录，初始化新仓库：
   ```bash
   rm -rf .git
   git init
   git add .
   git commit -m "init: project from template"
   ```
3. 修改 `README.md`、`LICENSE`、`CMakeLists.txt` 等文件中的项目信息为你的新项目名。
4. 按需调整 include/src/tests 目录内容，开始你的开发。

---

[![CMake Build and Test](https://github.com/NingAloha/CppProjectTemplate/actions/workflows/cmake.yml/badge.svg)](https://github.com/NingAloha/CppProjectTemplate/actions/workflows/cmake.yml)

这是一个现代化的 C++ 项目模板，提供完整的项目结构、构建系统和测试框架，帮助您快速启动新的 C++ 项目。

## ✨ 特性

- 🏗️ **现代 CMake** - 使用 CMake 3.15+ 构建系统
- 📦 **模块化结构** - 清晰的代码组织（include/src/tests）
- ✅ **单元测试** - 集成 Google Test 测试框架
- 🔄 **CI/CD** - GitHub Actions 自动化构建和测试
- 🎨 **代码格式化** - clang-format 和 clang-tidy 配置
- 📝 **完整文档** - 详细的使用说明和示例代码
- 🔧 **跨平台** - 支持 Windows、Linux 和 macOS

## 📁 项目结构

```
CppProjectTemplate/
├── .github/
│   └── workflows/      # GitHub Actions CI/CD 配置
├── cmake/              # 自定义 CMake 模块
├── docs/               # 项目文档
├── include/            # 公共头文件
│   └── calculator.h
├── src/                # 源代码
│   ├── CMakeLists.txt
│   ├── calculator.cpp
│   └── main.cpp
├── tests/              # 单元测试
│   ├── CMakeLists.txt
│   └── calculator_test.cpp
├── .clang-format       # 代码格式化配置
├── .clang-tidy         # 静态分析配置
├── .gitignore          # Git 忽略规则
├── CMakeLists.txt      # 主 CMake 配置
├── LICENSE             # 许可证文件
└── README.md           # 项目说明
```

## 🚀 快速开始

### 前置要求

- C++17 兼容的编译器（MSVC、GCC、Clang）
- CMake 3.15 或更高版本
- Git

### 构建步骤

1. **克隆仓库**
   ```bash
   git clone https://github.com/NingAloha/CppProjectTemplate.git
   cd CppProjectTemplate
   ```

2. **配置和构建**
   ```bash
   # 创建构建目录
   mkdir build && cd build
   
   # 配置项目
   cmake ..
   
   # 构建项目
   cmake --build . --config Release
   ```

3. **运行程序**
   ```bash
   # Windows
   .\bin\Release\CppProjectTemplate.exe
   
   # Linux/macOS
   ./bin/CppProjectTemplate
   ```

4. **运行测试**
   ```bash
   ctest -C Release --output-on-failure
   ```

## 🧪 测试

项目使用 Google Test 框架进行单元测试。测试文件位于 `tests/` 目录。

```bash
# 构建并运行所有测试
cd build
cmake --build . --config Release
ctest -C Release --verbose
```

## 🛠️ 开发指南

### 添加新的源文件

1. 在 `include/` 中创建头文件
2. 在 `src/` 中创建对应的源文件
3. 更新 `src/CMakeLists.txt` 中的源文件列表
4. 在 `tests/` 中添加相应的测试文件

### 代码格式化

项目包含 `.clang-format` 配置文件，可以使用以下命令格式化代码：

```bash
clang-format -i src/*.cpp include/*.h
```

### 静态分析

使用 clang-tidy 进行静态代码分析：

```bash
clang-tidy src/*.cpp -- -I./include
```

## 📊 持续集成

项目配置了 GitHub Actions，会在以下情况下自动运行：
- Push 到 main 或 develop 分支
- 创建 Pull Request

CI 流程包括：
- 多平台构建（Windows、Linux、macOS）
- 运行所有单元测试
- 生成构建产物

## 📄 许可证

本项目采用 MIT 许可证。详情请参阅 [LICENSE](LICENSE) 文件。

## 🤝 贡献

欢迎贡献！请随时提交 Issue 或 Pull Request。

## 📧 联系方式

- 作者：NingAloha
- 仓库：[https://github.com/NingAloha/CppProjectTemplate](https://github.com/NingAloha/CppProjectTemplate)

---

如有任何问题或建议，请创建 Issue！
