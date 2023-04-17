#include "student.h"

// 默认构造函数
Student::Student() {}

// 带参数的构造函数
Student::Student(string id, string name, string gender, vector<double> scores) {
    this->id = id;
    this->name = name;
    this->gender = gender;
    this->scores = scores;
}

// 析构函数
Student::~Student() {
    cout << "本程序由" << this->name << "编写！" << endl;
}

// 设置学号
void Student::setID(string id) {
    this->id = id;
}

// 获取学号
string Student::getID() {
    return this->id;
}

// 设置姓名
void Student::setName(string name) {
    this->name = name;
}

// 获取姓名
string Student::getName() {
    return this->name;
}

// 设置性别
void Student::setGender(string gender) {
    this->gender = gender;
}

// 获取性别
string Student::getGender() {
    return this->gender;
}

// 设置成绩
void Student::setScores(vector<double> scores) {
    this->scores = scores;
}

// 获取成绩
vector<double> Student::getScores() {
    return this->scores;
}

// 计算平均成绩
double Student::calcAvgScore() const {
    double sum = 0.0;
    for (int i = 0; i < scores.size(); i++) {
        sum += scores[i];
    }
    return sum / scores.size();
}

// 输出学生信息
void Student::printInfo() {
    cout << "学号：" << this->id << endl;
    cout << "姓名：" << this->name << endl;
    cout << "性别：" << this->gender << endl;
    cout << "成绩：";
    for (int i = 0; i < scores.size(); i++) {
        cout << scores[i] << " ";
    }
    cout << endl;
}

