#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int pop;
    float electr_qty, electr_fee;
    cout<<"请输入人口数："<<endl;
	cin>>pop;
	cout<<"请输入用电量："<<endl;
	cin>>electr_qty;
    if (electr_qty < 20)
		electr_fee = pop*electr_qty*0.6;
	else if (electr_qty < 30)
	    electr_fee = pop*(20*0.6 + (electr_qty - 20)*1.0);
	else
	    electr_fee = pop*(20*0.6 + 10*1.0 + (electr_qty - 30)*2.0);
	cout<<"总费用为:"<<electr_fee<<endl;
    return 0;
} 
