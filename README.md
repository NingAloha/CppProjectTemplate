
# C++ 项目模板使用指南

## 🆕 如何用本模板初始化新项目

本模板为纯净结构，无任何示例类或业务代码，适合直接作为新项目骨架。推荐两种初始化方式：

### 方式一：GitHub 一键模板
1. 打开仓库主页，点击 `Use this template`。
2. 填写新仓库信息，创建后克隆到本地即可开发。

### 方式二：手动克隆
1. 克隆本仓库
   ```bash
   git clone https://github.com/NingAloha/CppProjectTemplate.git MyNewProject
   cd MyNewProject
   ```
2. 删除原有 git 记录，初始化新仓库
   ```bash
   rm -rf .git
   git init
   git add .
   git commit -m "init: project from template"
   ```
3. 修改 `README.md`、`LICENSE`、`CMakeLists.txt` 等项目信息
4. 按需调整 include/src/tests/third_party 目录内容，开始开发

---

## ✨ 模板特性

- 🏗️ 现代 CMake 构建系统
- 📦 规范化目录结构（include/src/tests/third_party/docs/cmake）
- ✅ 单元测试集成（Google Test）
- 🔄 CI/CD 支持（可选）
- 🎨 代码格式化与静态分析配置
- 📝 每个一级目录均有 README 指南
- 🔧 跨平台支持（Windows/Linux/macOS）

## 📁 目录结构说明

```
CppProjectTemplate/
├── .vscode/         # VSCode 项目配置（含调试/构建指南）
├── cmake/           # 自定义 CMake 脚本和模块
├── docs/            # 项目文档
├── include/         # 公共头文件
├── src/             # 源代码
├── tests/           # 单元测试
├── third_party/     # 第三方库
├── .clang-format    # 代码格式化配置
├── .clang-tidy      # 静态分析配置
├── .gitignore       # Git 忽略规则
├── CMakeLists.txt   # 主 CMake 配置
├── LICENSE          # 许可证文件
├── README.md        # 项目说明
└── 模板使用指南.md  # 本文件
```

每个一级目录下均有 README.md 指南，便于理解和扩展。

## 🚀 快速开始（推荐 VSCode + CMake）

### 前置要求
- C++17 兼容编译器（MSVC、GCC、Clang）
- CMake 3.15+
- Git
- 推荐使用 VSCode + CMake Tools 插件

### 构建与运行
1. 打开终端，进入项目根目录
2. 构建项目
   ```bash
   cmake -S . -B build
   cmake --build build
   ```
3. 运行程序
   ```bash
   # Windows
   build/bin/Debug/main.exe
   # Linux/macOS
   build/bin/main
   ```

### VSCode 一键调试
1. 按 F5 或选择“Launch main (CMake)”配置，自动构建并运行最新 main.exe
2. 可在 .vscode/launch.json 和 tasks.json 自定义更多调试/构建任务

### 运行测试
```bash
cd build
ctest --verbose
```

## 🛠️ 开发建议

- 新增模块时，头文件放 include/，实现放 src/，测试放 tests/
- 第三方库统一放 third_party/，并参考各目录 README
- 保持 CMakeLists.txt、README.md 等项目信息同步更新

## 📄 许可证
本项目采用 MIT 许可证。详情见 LICENSE 文件。

---

如有建议或问题，欢迎 Issue 或 PR！

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
