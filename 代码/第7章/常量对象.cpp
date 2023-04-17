#include<iostream>
using namespace std;
class R
{   int R1, R2;
public:
    R(int r1, int r2) { R1 = r1; R2 = r2; }
    void print() const {cout<<R1<<":"<<R2<<endl;}
};
int main()
{  const R a(2, 3);
    a.print();  
    return 0;
}

