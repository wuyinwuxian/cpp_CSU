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
	cout << t.x << endl;     //�������ⲻ�ܷ���˽�����ݳ�Ա
    cout << t.y;                   //��ȷ�������ܷ��ʹ������ݳ�Ա
}

int main()
{   point obj;
    obj.set(100, 100);
    print(obj);
    return 0;
}

