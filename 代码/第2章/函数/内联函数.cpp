#include <iostream>
using namespace std;
//内联函数，交换两个数的值
inline int loop(int N){
	int y = 0;
	for(int i=1; i<=N; i++){
		y += i;
	}
	return y;

}
int main(){
    int N = 100, y;
    y = loop(N);
    cout<<N<<"个数的和是 "<<y<<endl;
    return 0;
}
