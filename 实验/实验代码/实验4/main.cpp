#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include "student.h"

using namespace std;

// 定义按平均成绩排序的比较函数
bool cmp(const Student &s1, const Student &s2) {
    return s1.calcAvgScore() > s2.calcAvgScore();
}

// 按照平均成绩排序并输出所有学生信息
void printAllStudents(vector<Student> students) {
    sort(students.begin(), students.end(), cmp);
    for (int i = 0; i < students.size(); i++) {
        cout << "学号：" << students[i].getID() << endl;
        cout << "姓名：" << students[i].getName() << endl;
        cout << "性别：" << students[i].getGender() << endl;
        cout << "平均成绩：" << students[i].calcAvgScore() << endl << endl;
    }
}

// 输出指定学生信息
void printStudentInfo(Student student) {
    cout << "学号：" << student.getID() << endl;
    cout << "姓名：" << student.getName() << endl;
    cout << "性别：" << student.getGender() << endl;
    cout << "成绩：";
    vector<double> scores = student.getScores();
    for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    cout << "平均成绩：" << student.calcAvgScore() << endl << endl;
}

int main() {
    int n;
    cout << "请输入学生数：";
    cin >> n;

    // 动态分配内存空间
    vector<Student> students(n);

    // 输入学生信息
    for (int i = 0; i < n; i++) {
        string id, name, gender;
        vector<double> scores;
        cout << "请输入第" << i + 1 << "个学生的信息：" << endl;
        cout << "学号：";
        cin >> id;
        cout << "姓名：";
        cin >> name;
        cout << "性别：";
        cin >> gender;
        cout << "请输入3门课程成绩："<<endl;
        for (int j = 0; j < 3; j++) {
            double score;
            cin >> score;
            scores.push_back(score);
        }
        Student student(id, name, gender, scores);
        students[i] = student;
    }

    // 按课程统计平均成绩、最高分和最低分
    vector<double> course1, course2, course3;
    for (int i = 0; i < n; i++) {
        vector<double> scores = students[i].getScores();
        course1.push_back(scores[0]);
        course2.push_back(scores[1]);
        course3.push_back(scores[2]);
    }
    double avg1 = accumulate(course1.begin(), course1.end(), 0.0) / course1.size();
    double avg2 = accumulate(course2.begin(), course2.end(), 0.0) / course2.size();
    double avg3 = accumulate(course3.begin(), course3.end(), 0.0) / course3.size();
	double max1 = *max_element(course1.begin(), course1.end());
	double max2 = *max_element(course2.begin(), course2.end());
	double max3 = *max_element(course3.begin(), course3.end());
	double min1 = *min_element(course1.begin(), course1.end());
	double min2 = *min_element(course2.begin(), course2.end());
	double min3 = *min_element(course3.begin(), course3.end());

	cout << "课程1平均分：" << avg1 << endl;
	cout << "课程2平均分：" << avg2 << endl;
	cout << "课程3平均分：" << avg3 << endl;
	cout << "课程1最高分：" << max1 << endl;
	cout << "课程2最高分：" << max2 << endl;
	cout << "课程3最高分：" << max3 << endl;
	cout << "课程1最低分：" << min1 << endl;
	cout << "课程2最低分：" << min2 << endl;
	cout << "课程3最低分：" << min3 << endl;

}
