#include <iostream>
using namespace std;

class Date {
private:
    int year; // ��
    int month; // ��
    int day; // ��

public:
    bool isLeapYear(int year); // �ж��Ƿ�Ϊ����
    int dateToDays(int year, int month, int day); // ������ת��Ϊ����
    void daysToDate(int days, int& year, int& month, int& day); // ������ת��Ϊ����

public:
    Date(int year, int month, int day); // ���캯��
    Date operator+(int days); // ���ؼӷ������
    Date operator-(int days); // ���ؼ��������
    int operator-(const Date& d); // ���ؼ��������
    friend ostream& operator<<(ostream& os, const Date& d);
};


