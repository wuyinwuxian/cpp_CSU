#include <iostream>
using namespace std;

class A
{public:
    int a, b;
    A(int x = 1, int y = 1){a = x; b = y;}
    void print( )  {   cout << "A.a = " << a << ", A.b = " << b << endl;  }
};

class B: public A
{public:
    int b, c;
    B(int x = 2, int y = 2){b = x; c = y;}
    void print( )  {   cout << "B.b = " << b << ", B.c = " << c << endl;   }
};

int main( )
{   
    A objA(5,6); 
    B objB(2,3);
    objA.print();
    objB.print();
    A &r1 = objA;
    r1.print();
    A &r2 = objB;
    r2.print();
    //B &r3 = objA;
    A *p1 = &objB;
    p1->print();
    cout<<&objB<<endl;
    cout<<&objB.a<<endl;
    cout<<&objB.A::a<<endl;
    cout<<&objB.A::b<<endl;
    cout<<&objB.b<<endl;
    cout<<&objB.c<<endl;
    //B *p2 = &objA;
    return 0;
}

