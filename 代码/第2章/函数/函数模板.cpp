#include <iostream>
using namespace std;
template<typename T> //ģ������������TΪ���Ͳ���
T maxfun(T a, T b)        //����ͨ�ú�������T�������������
{   
      if(b>a) return b;
      else return a;
}

int main()
{     
      int i1=185, i2=-76, i;
      double d1=56.87, d2=90.23, d;
      i = maxfun(i1, i2);       //����ģ�庯������ʱT��intȡ��
      d = maxfun(d1, d2);     //����ģ�庯������ʱT��doubleȡ��
      cout << "i_max=" << i << endl;
      cout << "d_max=" << d << endl;
      return 0;
}

