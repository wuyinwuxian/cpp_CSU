#include <iostream>
using namespace std;
class A
{ public:
    A( ) { cout << "A�Ĺ��캯��" << endl; }
    ~A( ) { cout << "A����������" << endl; }
};
class B
{ public:
    B( ) { cout << "B�Ĺ��캯��" << endl; }
    ~B( ) { cout << "B����������" << endl; }
};

class C: public B, public A
//class C: public A, public B 
{ public:
    C( ) { cout <<"C�Ĺ��캯��" << endl; }
    ~C( ) { cout <<"C����������" << endl; }
};
int main()
{    C objC;
}

