#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;

#include <iostream>
using namespace std;
int main( )
{   
    int j,k,a,b,c;
    j=3;  k=++j;  
    cout<<j<<", "<<k<<endl;
    j=3;  
	//k=j++;  
    cout<<j++<<endl;
    a=3; b=5; c=(--a)*b;    
    cout<<a<<", "<<c<<endl;
    a=3; b=5; c=(a--)*b;  
	cout<<a<<", "<<c<<endl;  
     return 0;
}

