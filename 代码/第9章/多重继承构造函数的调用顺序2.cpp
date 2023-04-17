#include <iostream>
using namespace std;
class Base1
{ public:
    Base1(int x) { 
		value = x ;
		cout<<"Bese1的构造函数:"<<value<<endl;
	}
     int getData()
     { return value; }
   protected:
      int value;
};

class Base2
{ public:
     Base2(char c) {
	 letter=c;
	 cout<<"Bese2的构造函数:"<<letter<<endl;
	 }
     char getData()
     { return letter;}
   protected:
      char letter;
};

class Derived : public Base1, public Base2
{ friend ostream &operator<< (ostream &, const Derived &) ;
   public :
      Derived ( int x, char y, double z):Base1(x), Base2(y){
	  real=z;
	  cout<<"Derived的构造函数:"<<real<<endl;
	  }
      double getReal();
   private:   double real ;
};

int main()
{    Derived objDerived(1,'A',1.2);
}
