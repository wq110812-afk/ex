#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <string>

class Student {
public:
    Student(const std::string& name = "未知", double score = 0.0);

    const std::string& getName() const;
    double getScore() const;

private:
    std::string name_;  // 姓名
    double score_;      // 成绩（0~100）
};

#endif  // STUDENT_HPP
