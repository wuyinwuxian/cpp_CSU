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
    std::string m_id; // ѧ��
    std::string m_name; // ����
    std::string m_gender; // �Ա�
    int m_age; // ����
    std::vector<double> m_scores; // �ɼ�
};

#endif // STUDENT_H
