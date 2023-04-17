#include <iostream>
using namespace std;
class Base1
{ public:
     Base1(int x) {value = x; }
     int getData()
     { return value; }
   protected:
      int value;
};

class Base2
{ public:
     Base2(char c) {letter=c;}
     char getData()
     { return letter;}
   protected:
      char letter;
};

class Derived : public Base1, public Base2
{ 
   public :
      Derived (int x, char y, double z):Base2(y),Base1(x),real(z) {}
      double getReal(){
      	return real;
	  }
   private:   
   double real;
};

int main()
{ 
   Base1 b1 (10) ;
   Base2 b2 ('k') ;
   cout<<b1.getData()<<endl;
   cout<<b2.getData()<<endl;
   Derived d(5, 'A', 2.5);
   cout<<d.Base1::getData()<<endl;
   cout<<d.Base2::getData()<<endl;
   cout<<d.getReal()<<endl;
   return 0;
}



