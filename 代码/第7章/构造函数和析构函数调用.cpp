#include <iostream>
using namespace std; 
class Watch
{
private:
    int h,m,s;
public:
    Watch(int, int, int);
    ~Watch();
void ShowTime();
};
Watch::Watch(int hh, int mm, int ss)
{
    h=hh;    m=mm;    s=ss;
    cout<<h<<":"<<m<<":"<<s<<endl;
}
Watch::~Watch()
{
    cout<<h<<":"<<m<<":"
           << s << endl;
}
void Watch::ShowTime()
{
    cout<<h<<":"<<m<<":"
           << s << endl;
} 

int main( )
{
    //Watch w1(0, 0, 0), w2(1, 1, 1);
    //w1.~Watch();
    //if(1){
    //	Watch w3(2,2,2);
	//}
	//Watch w4(3,3,3);
	Watch w = {2,3,4};
    return 0;
}

