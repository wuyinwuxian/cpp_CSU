#include <iostream>
#include <vector>
#include "Student.h"

using namespace std;
int main() {
    int numOfStudents;
    cout << "请输入学生数量：";
    cin >> numOfStudents;
    vector<Student> students(numOfStudents);

    for (int i = 0; i < numOfStudents; i++) {
        students[i].setStudentInfo();
    }

    for (int i = 0; i < numOfStudents; i++) {
        cout << "学生" << i+1 << "的信息如下：" << endl;
        students[i].printStudentInfo();
        double avgScore = students[i].calculateAverageScore();
        cout << "平均成绩：" << avgScore << endl;
        if (students[i].hasFailedCourse()) {
            cout << "有不及格的课程。" << endl;
        } else {
            cout << "没有不及格的课程。" << endl;
        }
        cout << endl;
    }

    return 0;
}
