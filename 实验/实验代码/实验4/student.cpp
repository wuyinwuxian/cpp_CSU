#include "student.h"

// Ĭ�Ϲ��캯��
Student::Student() {}

// �������Ĺ��캯��
Student::Student(string id, string name, string gender, vector<double> scores) {
    this->id = id;
    this->name = name;
    this->gender = gender;
    this->scores = scores;
}

// ��������
Student::~Student() {
    cout << "��������" << this->name << "��д��" << endl;
}

// ����ѧ��
void Student::setID(string id) {
    this->id = id;
}

// ��ȡѧ��
string Student::getID() {
    return this->id;
}

// ��������
void Student::setName(string name) {
    this->name = name;
}

// ��ȡ����
string Student::getName() {
    return this->name;
}

// �����Ա�
void Student::setGender(string gender) {
    this->gender = gender;
}

// ��ȡ�Ա�
string Student::getGender() {
    return this->gender;
}

// ���óɼ�
void Student::setScores(vector<double> scores) {
    this->scores = scores;
}

// ��ȡ�ɼ�
vector<double> Student::getScores() {
    return this->scores;
}

// ����ƽ���ɼ�
double Student::calcAvgScore() const {
    double sum = 0.0;
    for (int i = 0; i < scores.size(); i++) {
        sum += scores[i];
    }
    return sum / scores.size();
}

// ���ѧ����Ϣ
void Student::printInfo() {
    cout << "ѧ�ţ�" << this->id << endl;
    cout << "������" << this->name << endl;
    cout << "�Ա�" << this->gender << endl;
    cout << "�ɼ���";
    for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
}

