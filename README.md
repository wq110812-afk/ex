题目（经典 C++ 入门题）：输入学生人数 n，再输入每位学生的姓名与成绩，
输出平均分、最高分（含姓名）与最低分（含姓名）。

## 编译与运行（CMake）

```bash
cd ex
cmake -S . -B build
cmake --build build
./build/score
```

## 目录结构

```
ex/
├── CMakeLists.txt
├── include/
│   └── Student.hpp   # Student 类声明（name_、score_ 私有，接口公有）
├── src/
│   ├── Student.cpp   # 类成员函数的实现
│   └── main.cpp      # 输入学生信息，创建对象并统计输出
└── README.md
```

## 实现要点（类与对象）

1. `class Student` 把「一名学生」抽象成一个对象：姓名 `name_`、成绩 `score_`
   是对象自己的状态，`getName()`、`getScore()` 是对象的行为；
2. 数据封装在 `private`，外部只能通过公有接口读取；
3. `main` 里每位学生 = 一个 `Student` 对象，姓名与成绩天然绑定，
   不会出现“姓名和成绩对不上”的问题；
4. 构造函数带默认参数 `Student(const std::string& name = "未知", double score = 0.0)`。

## 运行示例

```
请输入学生人数 n：3
请输入第 1 位学生的姓名和成绩：张三 88
请输入第 2 位学生的姓名和成绩：李四 95
请输入第 3 位学生的姓名和成绩：王五 78
平均分：87 分
最高分：李四（95 分）
最低分：王五（78 分）
```
