#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	double a = 123.456789012345;
	cout<<a<<endl;
	cout<<setprecision(7)<<a<<endl;
	cout<<setiosflags(ios::fixed)<<a<<endl;
	return 0;
}




