#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string id;  // ѧ��
    string name;  // ����
    string gender;  // �Ա�
    vector<double> scores;  // ���ſγ̵ĳɼ�

public:
    Student();  // Ĭ�Ϲ��캯��
    Student(string id, string name, string gender, vector<double> scores);  // �������Ĺ��캯��
    ~Student();  // ��������

    void setID(string id);  // ����ѧ��
    string getID();  // ��ȡѧ��

    void setName(string name);  // ��������
    string getName();  // ��ȡ����

    void setGender(string gender);  // �����Ա�
    string getGender();  // ��ȡ�Ա�

    void setScores(vector<double> scores);  // ���óɼ�
    vector<double> getScores();  // ��ȡ�ɼ�

    double calcAvgScore() const;  // ����ƽ���ɼ�

    void printInfo();  // ���ѧ����Ϣ
};

#endif

