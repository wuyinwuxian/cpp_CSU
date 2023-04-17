#include <iostream>
using namespace std;
int add(int x, int y){
	int result;
	result = x + y;
	return result;
}
float add(float x, float y){
	float result;
	result = x + y;
	return result;
}

int main(){
	int a1 = 3, a2 = 4, a3;
	float b1 = 3.0, b2 = 4.0, b3;
	a3 = add(a1,a2);
	b3 = add(b1,b2); 
	cout<<a3<<endl;
	cout<<b3<<endl;
}
