#include<iostream>
using namespace std;
class A
{protected:    int x,  y;
  public :
      void  get_XY(){ 
	  cout<< "Enter 2 numbers of x, y"<< endl;
	  cin >> x >> y; 
	  }
      void  put_XY()  { 
	  cout << "x = "<< x << ", y = " << y << '\n'; 
	  }
   };
   
class B : public A
{protected:   int s; 
  public :
      int  get_S() { return s; };
      void  make_S()  { s = x * y; }; // 使用基类数据成员x，y
   };
   
class C : public B
{ protected:    int h, v; 
public : 
      void  get_H()   {  cin >> h; } 
      int  get_V() { return v; }
      void  make_V() {
	  make_S();
	  v=get_S()*h;
	  } //使用基类成员函数
   };
   
int main()
{  A objA;
   B objB;
   C objC;
   cout << "It is object_A :\n";
   objA.get_XY();
   objA.put_XY();
   cout << "It is object_B :\n";
   objB.get_XY();
   objB.make_S();
   cout << "S = " << objB.get_S() << endl;
   cout << "It is object_C :\n";
   objC.get_XY();
   objC.get_H();
   objC.make_V();
   cout << "V = " << objC.get_V() << endl;
}
   
   

