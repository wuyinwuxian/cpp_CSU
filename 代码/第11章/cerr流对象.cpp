#include <iostream> 
#include <cmath>
using namespace std;
int main()
{   float a, b, c, disc;
    cout << "please input a, b, c:"<< endl; 
    cin >> a >> b >> c;
    if (a==0)
        clog << "a is equal to zero,error! " << endl; 
    else if ((disc=b*b-4*a*c)<0)
        clog << "disc=b*b-4*a*c<0 " << endl;
    else
    {    cout << "x1=" << (-b+sqrt(disc))/(2*a) << endl;
          cout << "x2=" << (-b-sqrt(disc))/(2*a) << endl;
    }
    return 0;
}

