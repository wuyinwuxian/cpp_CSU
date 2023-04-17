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
    Watch w1(0, 0, 0); 
	Watch *p = new Watch(1, 1, 1);
    Watch w2(2,2,2);
    //delete p;
    return 0;
}
