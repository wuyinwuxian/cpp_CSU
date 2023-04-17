#include <iostream>
using namespace std;
class B {
	public: int b;
};
class B1: virtual public B{
	private: int b1;
};
class B2: virtual public B{
	private: int b2;
};
class C: public B1, public B2{
	private: int d;
	public: void set(){
		//B1::b = 1;
		B2::b = 2;
	}
} ;

int main()
{   C obj;
    obj.set();
    cout<<obj.b<<endl;
	return 0;
}


