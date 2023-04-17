#include <iostream>
#include "Student.h"

using namespace std;

Student::Student() {
    m_id = "";
    m_name = "";
    m_gender = "";
    m_age = 0;
}

void Student::setStudentInfo() {
    cout << "请输入学生信息：" << endl;
    cout << "学号：";
    cin >> m_id;
    cout << "姓名：";
    cin >> m_name;
    cout << "性别：";
    cin >> m_gender;
    cout << "年龄：";
    cin >> m_age;

    int numOfCourses;
    cout << "请输入课程数量：";
    cin >> numOfCourses;
    for (int i = 0; i < numOfCourses; i++) {
        double score;
        cout << "请输入第" << i+1 << "门课的成绩：";
        cin >> score;
        m_scores.push_back(score);
    }
}

void Student::printStudentInfo() const {
    cout << "学号：" << m_id << endl;
    cout << "姓名：" << m_name << endl;
    cout << "性别：" << m_gender << endl;
    cout << "年龄：" << m_age << endl;
    cout << "成绩：";
    for (auto score : m_scores) {
        cout << score << " ";
    }
    cout << endl;
}

double Student::calculateAverageScore() const {
    double sum = 0.0;
    for (auto score : m_scores) {
        sum += score;
    }
    return sum / m_scores.size();
}

bool Student::hasFailedCourse() const {
    for (auto score : m_scores) {
        if (score < 60) {
            return true;
        }
    }
    return false;
}
