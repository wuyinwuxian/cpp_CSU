//#include <iostream>
#include "Date.h"
using namespace std;

bool Date::isLeapYear(int year) {
    // 四年一闰，百年不闰，四百年再闰
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    return false;
}

int Date::dateToDays(int year, int month, int day) {
    int days = 0;
    for (int i = 1; i <= year; i++) {
        if (isLeapYear(i)) {
            days += 366;
        } else {
            days += 365;
        }
    }
    int daysOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeapYear(year)) {
        daysOfMonth[1] = 29;
    }
    for (int i = 0; i <= month - 1; i++) {
        days += daysOfMonth[i];
    }
    days += day;
    return days;
}

void Date::daysToDate(int days, int& year, int& month, int& day) {
    year = 0;
    while (days >= 365) {
        if (isLeapYear(year)) {
            if (days >= 366) {
                days -= 366;
                year++;
            } else {
                break;
            }
        } else {
            days -= 365;
            year++;
        }
    }
    int daysOfMonth[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (isLeapYear(year)) {
        daysOfMonth[1] = 29;
    }
    month = 0;
    while (days >= daysOfMonth[month+1] && month < 12) {
        days -= daysOfMonth[month+1];
        month++;
    }
    day = days + 1;
}


Date::Date(int year, int month, int day) {
    this->year = year;
    this->month = month;
    this->day = day;
}

Date Date::operator+(int days) {
    int days1 = dateToDays(year, month, day);
    int days2 = days1 + days;
    int year2, month2, day2;
    daysToDate(days2, year2, month2, day2);
    return Date(year2, month2, day2);
}

Date Date::operator-(int days) {
    int days1 = dateToDays(year, month, day);
    int days2 = days1 - days;
    int year2, month2, day2;
    daysToDate(days2, year2, month2, day2);
    return Date(year2, month2, day2);
}

int Date::operator-(const Date& d) {
    int days1 = dateToDays(year, month, day);
    int days2 = dateToDays(d.year, d.month, d.day);
    return days1 - days2;
}

ostream& operator<<(ostream& os, const Date& d) {
    os << d.year << "-" << d.month << "-" << d.day;
    return os;
}


