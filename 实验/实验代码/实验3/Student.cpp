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
    cout << "������ѧ����Ϣ��" << endl;
    cout << "ѧ�ţ�";
    cin >> m_id;
    cout << "������";
    cin >> m_name;
    cout << "�Ա�";
    cin >> m_gender;
    cout << "���䣺";
    cin >> m_age;

    int numOfCourses;
    cout << "������γ�������";
    cin >> numOfCourses;
    for (int i = 0; i < numOfCourses; i++) {
        double score;
        cout << "�������" << i+1 << "�ſεĳɼ���";
        cin >> score;
        m_scores.push_back(score);
    }
}

void Student::printStudentInfo() const {
    cout << "ѧ�ţ�" << m_id << endl;
    cout << "������" << m_name << endl;
    cout << "�Ա�" << m_gender << endl;
    cout << "���䣺" << m_age << endl;
    cout << "�ɼ���";
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
