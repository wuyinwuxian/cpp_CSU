#include <iostream>
using namespace std;
class X
{   int x;
public:
    int y;
    friend void out(X t); 
    void set( int a, int b) { x = a; y = b; }
};
void out(X t)
{  cout << t.x << endl;     
    cout << t.y;                   
}
main()
{   X obj;
    obj.set(100, 100);
    out(obj);
}

