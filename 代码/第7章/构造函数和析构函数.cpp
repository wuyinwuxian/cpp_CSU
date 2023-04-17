#include <iostream>
using namespace std; 

class point
{   
	int x,y;
public:
//	point(){
//		x = 0; y=0;
//		cout<<"子对象构造函数"<<endl;
//	}
//	~point(){
//		cout<<"子对象析构函数"<<endl;
//	}
};

//class line
//{   
//	point origin_point;
//	int delta_x,delta_y;
//public:
//	line(){
//		delta_x = 1; delta_y=1;
//		cout<<"构造函数"<<endl;
//	}
//	~line(){
//		cout<<"析构函数"<<endl;
//	}
//};

int main(){
    //line line1;
    point P;
    cout<<sizeof(P)<<endl;
	return 0; 
}
