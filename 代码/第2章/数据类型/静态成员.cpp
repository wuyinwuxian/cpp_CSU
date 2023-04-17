#include <iostream>
using namespace std;

class counter
{  int count;
public:
    static void setcount( int i, counter &c) {c.count = i; }
    void showcount( ) { cout << count << endl;}
};
// int counter::count = 0;

int main()
{
    counter a, b;
    a.setcount(10,a);
    a.showcount();
    //b.showcount();
    //counter::setcount(20);
    //b.setcount(20);
    //a.showcount();
    //b.showcount();
    return 0;
}

