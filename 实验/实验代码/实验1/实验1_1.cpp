#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float a,b,c,s,area;
    cout<<"������a,b,c"<<endl;
    while(1){
    	cin>>a>>b>>c;
    	if (a+b>c && a+c>b && b+c>a)
    		break;
    	else
    		cout<<"������Ҫ������������a,b,c"<<endl;
	}
	s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area is:"<<area<<endl;
    return 0;
} 
