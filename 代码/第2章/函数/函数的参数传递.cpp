#include <iostream>
using namespace std;
int sum(int a, int b)
{
     a = a + b;
     b = a + b;
     return(a+b);
}
main()
{
     int a=1, b=3, c;
     c = sum(a,b);
     cout << "Sum is"  << c << endl;
}

