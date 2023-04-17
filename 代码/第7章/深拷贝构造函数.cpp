#include<iostream>
#include<assert.h>
using namespace std;
class Rect
{
public:
    Rect()
    {
     p=new int(100);
    }
    
    Rect(const Rect& r)
    {
        width=r.width;
        height=r.height;
        p=new int(100);
        *p=*(r.p);
    }

   
    ~Rect()
    {
     assert(p!=NULL);
        delete p;
    }
private:
    int width;
    int height;
    int *p;
};

int main()
{
    Rect rect1;
    Rect rect2(rect1);
    return 0;
}

