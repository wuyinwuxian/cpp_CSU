#include <iostream>
using namespace std;
//����������������������ֵ
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
    cout<<N<<"�����ĺ��� "<<y<<endl;
    return 0;
}
