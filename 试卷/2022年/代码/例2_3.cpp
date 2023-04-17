#include <iostream> 
using namespace std; 
class A
{public:
int a, b;
A() {a=0;b=0;}
void set(int x, int y){a = x; b = y;} 
void print( )
{cout<<"A.a="<<a<<", A.b ="<<b<< endl;}
};
class B: public A
{public:
int b, c;
B() {b=0; c=0;}
void set( int x, int y){b = x; c = y;} 
void print( )
{cout<<"B.b="<<b<<", B.c ="<<c<<endl; }
};
int main( )
{	B objB; 
    objB.A::set(1,2); 
	objB.print();
    objB.set(3,4);
    objB.A::print(); 
	return 0;
}

