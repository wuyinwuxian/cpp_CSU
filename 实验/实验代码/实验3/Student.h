#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>

class Student {
public:
    Student();
    void setStudentInfo();
    void printStudentInfo() const;
    double calculateAverageScore() const;
    bool hasFailedCourse() const;

private:
    std::string m_id; // 学号
    std::string m_name; // 姓名
    std::string m_gender; // 性别
    int m_age; // 年龄
    std::vector<double> m_scores; // 成绩
};

#endif // STUDENT_H
