#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 
#include "student.h"

using namespace std;

// ���尴ƽ���ɼ�����ıȽϺ���
bool cmp(const Student &s1, const Student &s2) {
    return s1.calcAvgScore() > s2.calcAvgScore();
}

// ����ƽ���ɼ������������ѧ����Ϣ
void printAllStudents(vector<Student> students) {
    sort(students.begin(), students.end(), cmp);
    for (int i = 0; i < students.size(); i++) {
        cout << "ѧ�ţ�" << students[i].getID() << endl;
        cout << "������" << students[i].getName() << endl;
        cout << "�Ա�" << students[i].getGender() << endl;
        cout << "ƽ���ɼ���" << students[i].calcAvgScore() << endl << endl;
    }
}

// ���ָ��ѧ����Ϣ
void printStudentInfo(Student student) {
    cout << "ѧ�ţ�" << student.getID() << endl;
    cout << "������" << student.getName() << endl;
    cout << "�Ա�" << student.getGender() << endl;
    cout << "�ɼ���";
    vector<double> scores = student.getScores();
    for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
    cout << "ƽ���ɼ���" << student.calcAvgScore() << endl << endl;
}

int main() {
    int n;
    cout << "������ѧ������";
    cin >> n;

    // ��̬�����ڴ�ռ�
    vector<Student> students(n);

    // ����ѧ����Ϣ
    for (int i = 0; i < n; i++) {
        string id, name, gender;
        vector<double> scores;
        cout << "�������" << i + 1 << "��ѧ������Ϣ��" << endl;
        cout << "ѧ�ţ�";
        cin >> id;
        cout << "������";
        cin >> name;
        cout << "�Ա�";
        cin >> gender;
        cout << "������3�ſγ̳ɼ���"<<endl;
        for (int j = 0; j < 3; j++) {
            double score;
            cin >> score;
            scores.push_back(score);
        }
        Student student(id, name, gender, scores);
        students[i] = student;
    }

    // ���γ�ͳ��ƽ���ɼ�����߷ֺ���ͷ�
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

	cout << "�γ�1ƽ���֣�" << avg1 << endl;
	cout << "�γ�2ƽ���֣�" << avg2 << endl;
	cout << "�γ�3ƽ���֣�" << avg3 << endl;
	cout << "�γ�1��߷֣�" << max1 << endl;
	cout << "�γ�2��߷֣�" << max2 << endl;
	cout << "�γ�3��߷֣�" << max3 << endl;
	cout << "�γ�1��ͷ֣�" << min1 << endl;
	cout << "�γ�2��ͷ֣�" << min2 << endl;
	cout << "�γ�3��ͷ֣�" << min3 << endl;

}
