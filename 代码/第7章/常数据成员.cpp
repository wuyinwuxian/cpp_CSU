#include<iostream>
using namespace std;
class Increment
{   
	const int increment;                                 
    int count;                                                   
public:
    Increment(int c=0, int i=1);
    void print() {cout<<increment<<":"<<count<<endl;}
};

Increment::Increment(int c, int i):increment(i) {count = c;}  
int main()
{  	Increment a;
    a.print();  
    return 0;
}

