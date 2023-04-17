#include <iostream>
using namespace std; 

int main(){
    int  a = 1;
    int *p;
    p = &a;
    cout <<*p <<endl;
    cout <<&a <<endl;
	return 0; 
}
