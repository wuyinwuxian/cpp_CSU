#include <iostream>
using namespace std;

class Date {
private:
    int year; // 年
    int month; // 月
    int day; // 日

public:
    bool isLeapYear(int year); // 判断是否为闰年
    int dateToDays(int year, int month, int day); // 将日期转换为天数
    void daysToDate(int days, int& year, int& month, int& day); // 将天数转换为日期

public:
    Date(int year, int month, int day); // 构造函数
    Date operator+(int days); // 重载加法运算符
    Date operator-(int days); // 重载减法运算符
    int operator-(const Date& d); // 重载减法运算符
    friend ostream& operator<<(ostream& os, const Date& d);
};


