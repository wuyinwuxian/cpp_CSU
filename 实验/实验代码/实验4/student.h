#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string id;  // 学号
    string name;  // 姓名
    string gender;  // 性别
    vector<double> scores;  // 多门课程的成绩

public:
    Student();  // 默认构造函数
    Student(string id, string name, string gender, vector<double> scores);  // 带参数的构造函数
    ~Student();  // 析构函数

    void setID(string id);  // 设置学号
    string getID();  // 获取学号

    void setName(string name);  // 设置姓名
    string getName();  // 获取姓名

    void setGender(string gender);  // 设置性别
    string getGender();  // 获取性别

    void setScores(vector<double> scores);  // 设置成绩
    vector<double> getScores();  // 获取成绩

    double calcAvgScore() const;  // 计算平均成绩

    void printInfo();  // 输出学生信息
};

#endif

