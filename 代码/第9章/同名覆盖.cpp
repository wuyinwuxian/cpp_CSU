#include <iostream>
using namespace std;

class A
{public:
    int a, b;
    void set( int x, int y){a = x; b = y;}
    void print( )  {   cout << "A.a = " << a << ", A.b = " << b << endl;  }
};

class B: public A
{public:
    int b, c;
    void set( int x, int y){b = x; c = y;}
    void print( )  {   cout << "B.b = " << b << ", B.c = " << c << endl;   }
};

int main( )
{   
    B objB;
  
    //cout<<sizeof(objB)<<endl;
    objB.set(2,3);
    objB.print();
    objB.A::set(2,3);
    objB.A::print();
    objB.A::b=4;
    objB.print();
    objB.A::print();
}

