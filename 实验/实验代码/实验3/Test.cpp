#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;
int main() {
    int numOfStudents;
    cout << "������ѧ��������";
    cin >> numOfStudents;
    vector<Student> students(numOfStudents);

    for (int i = 0; i < numOfStudents; i++) {
        students[i].setStudentInfo();
    }

    for (int i = 0; i < numOfStudents; i++) {
        cout << "ѧ��" << i+1 << "����Ϣ���£�" << endl;
        students[i].printStudentInfo();
        double avgScore = students[i].calculateAverageScore();
        cout << "ƽ���ɼ���" << avgScore << endl;
        if (students[i].hasFailedCourse()) {
            cout << "�в�����Ŀγ̡�" << endl;
        } else {
            cout << "û�в�����Ŀγ̡�" << endl;
        }
        cout << endl;
    }

    return 0;
}
