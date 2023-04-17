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
Watch::Watch(int hh = 1, int mm = 1, int ss = 1)
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
    Watch w1[3]; 
    return 0;
}
