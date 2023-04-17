//#include <iostream>
#include "Date.h"
using namespace std;

int main() {
    Date date1(2023, 4, 12);
    Date date2 = date1 + 40;
    Date date3 = date1 - 40;
    int daysBetween = date3 - date2;

    cout << "date1: " << date1 << endl;
    cout << "date2: " << date2 << endl;
    cout << "date3: " << date3 << endl;
    cout << "daysBetween: " << daysBetween << endl;
    

    return 0;
}

