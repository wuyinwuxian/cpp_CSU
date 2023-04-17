#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;


main()
{
     int a1 = 123;
     int a2 = 0123;
     int a3 = 0x123;
     float b1 = 12.3e2; 
     cout<<"十进制数: "<<a1<<endl;
     cout<<"八进制数: "<<a2<<endl;
     cout<<"十六进制数: "<<a3<<endl;
     cout<<"科学计数法: "<<scientific<<b1<<endl;
}
