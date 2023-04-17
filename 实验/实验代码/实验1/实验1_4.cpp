#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int gcd(int m,int n){
	if (m>n){
		int temp = m;
		m = n;
		n = temp;
	}
	if (n%m==0)
		return m;
	else
	    if (n-m <m)
			return gcd(n-m,m);
		else
			return gcd(m,n-m);
}


int main(){
	int m,n;
	m = 45; n = 35;
	cout<<m<<"和"<<n<<"的最大公约数是:"<<gcd(m,n)<<endl;
    return 0;
} 
