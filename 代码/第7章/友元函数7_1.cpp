#include <iostream>
using namespace std; 
class point
{   
    int x;
	public:
    	int y;
    	friend void print(point  t);
    	void set( int a, int b) { x = a; y = b; }
};
void print(point t)
{  
	cout << t.x << endl;     //错误：类外不能访问私有数据成员
    cout << t.y;                   //正确：类外能访问公有数据成员
}

int main()
{   point obj;
    obj.set(100, 100);
    print(obj);
    return 0;
}

