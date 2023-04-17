#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	int n,S=0;
	for(int i=1;i<=10;i++){
		cin>>n;
		if (n>=50&&n<=10000)
			break;
	}
    for(int j=1;j<=n;j++)
        S = S + j;
    cout<<"从1到"<<n<<"的和是:"<<S<<endl;
	//cout<<"从1到"<<std::to_string(n)<<"的和是:"<<S<<endl;
    return 0;
} 
