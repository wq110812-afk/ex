#include "Student.hpp"
#include <iostream>
#include <vector>

int main() {
    int n = 0;
    std::cout << "请输入学生人数 n：";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "人数必须大于 0！" << std::endl;
        return 1;
    }

    // 每个学生 = 一个 Student 对象，姓名与成绩绑定在同一个对象里
    std::vector<Student> students;
    students.reserve(n);
    for (int i = 0; i < n; ++i) {
        std::string name;
        double score = 0.0;
        std::cout << "请输入第 " << i + 1 << " 位学生的姓名和成绩：";
        std::cin >> name >> score;
        students.emplace_back(name, score);
    }

    // 统计：数据只能通过对象的公有接口读取
    double sum = 0.0;
    double maxScore = students.front().getScore();
    double minScore = students.front().getScore();
    const Student* best = &students.front();
    const Student* worst = &students.front();
    for (const Student& s : students) {
        sum += s.getScore();
        if (s.getScore() > maxScore) {
            maxScore = s.getScore();
            best = &s;
        }
        if (s.getScore() < minScore) {
            minScore = s.getScore();
            worst = &s;
        }
    }

    std::cout << "平均分：" << sum / n << " 分" << std::endl;
    std::cout << "最高分：" << best->getName() << "（" << best->getScore()
              << " 分）" << std::endl;
    std::cout << "最低分：" << worst->getName() << "（" << worst->getScore()
              << " 分）" << std::endl;
    return 0;
}
