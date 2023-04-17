#include <iostream>
using namespace std; 
class  XX
{
    int a, b, c;
public:
    XX(){a = 1; b = 1, c = 1;}
    XX(const XX & p) 
    {
        a = p.a; b = p.b; c = p.c;
        cout << " sum = " << a+b+c << endl;
    }
};
XX ff(XX arg)
{
    return(arg);
}
int main(int argc, char* argv[])
{
    XX x1;
    XX x2 = ff(x1);
    return 0;
}
