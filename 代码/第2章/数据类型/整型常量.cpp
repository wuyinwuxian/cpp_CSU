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
     cout<<"ʮ������: "<<a1<<endl;
     cout<<"�˽�����: "<<a2<<endl;
     cout<<"ʮ��������: "<<a3<<endl;
     cout<<"��ѧ������: "<<scientific<<b1<<endl;
}
