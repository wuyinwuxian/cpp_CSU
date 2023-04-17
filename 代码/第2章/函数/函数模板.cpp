#include <iostream>
using namespace std;
template<typename T> //模板声明，其中T为类型参数
T maxfun(T a, T b)        //定义通用函数，用T作虚拟的类型名
{   
      if(b>a) return b;
      else return a;
}

int main()
{     
      int i1=185, i2=-76, i;
      double d1=56.87, d2=90.23, d;
      i = maxfun(i1, i2);       //调用模板函数，此时T被int取代
      d = maxfun(d1, d2);     //调用模板函数，此时T被double取代
      cout << "i_max=" << i << endl;
      cout << "d_max=" << d << endl;
      return 0;
}

