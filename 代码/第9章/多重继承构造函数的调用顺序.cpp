#include <iostream>
using namespace std;
class A
{ public:
    A( ) { cout << "A的构造函数" << endl; }
    ~A( ) { cout << "A的析构函数" << endl; }
};
class B
{ public:
    B( ) { cout << "B的构造函数" << endl; }
    ~B( ) { cout << "B的析构函数" << endl; }
};

class C: public B, public A
//class C: public A, public B 
{ public:
    C( ) { cout <<"C的构造函数" << endl; }
    ~C( ) { cout <<"C的析构函数" << endl; }
};
int main()
{    C objC;
}

