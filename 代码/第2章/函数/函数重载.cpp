#include <iostream>
using namespace std;



int main(){
	int x1 = 2, x2 = 4, x3;
	float y1 = 4.5, y2 = 2.4, y3;
	x3 = max(x1,x2);
	y3 = max(y1,y2);
	cout<< x3 << endl;
	cout<< y3 << endl;
    return 0;
}

int max (int x, int y)
{
     return (x > y) ? x: y;
}

float max (float x, float y)
{
     return (x > y) ? x: y;
}
