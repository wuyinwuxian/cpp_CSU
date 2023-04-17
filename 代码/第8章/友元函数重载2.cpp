#include<iostream>
#include<assert.h>
using namespace std;
class three_d
{
    int x, y, z;
public:
	three_d(int xi=0, int yi=0, int zi=0){
		x = xi;  y = yi; z = zi;
	} 
    friend three_d operator++(three_d &);
    output(){
    	cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
	}
};


three_d operator ++ (three_d &op1)
{
    op1.x++;  op1.y++; op1.z++; 
	return op1;
}


int main()
{
    three_d thd = {1,2,3};
    thd.output();
    ++thd;
    thd.output();
    return 0;
}
