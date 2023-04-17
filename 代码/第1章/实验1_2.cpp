#include <iostream>
using namespace std;
#define   RADIUS  10
// #define   PI  3.1415926

int main()
{
     float area;
     const float PI = 3.1415926;
     cout<<&PI<<endl;
     cout<<sizeof(PI)<<endl;
     area = PI * RADIUS * RADIUS;
     cout<<"area =" <<area<<endl;
	 return 0;
}
