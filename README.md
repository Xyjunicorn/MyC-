# MyC++ - C++ 算法练习

记录 C++ 语法学习和算法练习的代码仓库。

## 目录结构

```
MyC-/
├── .gitignore
├── README.md
├── src/                    # 源代码
│   ├── 两数之和.cpp
│   ├── 合并两个有序链表.cpp
│   └── 有效的括号.cpp
└── ConsoleApplication1/    # VS 项目文件
```

## 题目列表

| 题目 | 难度 | 标签 |
|------|------|------|
| 两数之和 | 简单 | 哈希表 |
| 合并两个有序链表 | 中等 | 链表 / 递归 |
| 有效的括号 | 简单 | 栈 |

## 运行方式

使用 Visual Studio 打开 `ConsoleApplication1.slnx`，或直接编译 `src/` 下的源文件：

```bash
g++ src/两数之和.cpp -o 两数之和.exe
```

## 学习笔记

- `vector` - 动态数组
- `unordered_map` - 哈希表，O(1) 查找
- `stack` - 后进先出数据结构
- 递归思想 - 分解问题，层层返回
