#include<iostream>
using namespace std;
class Rect
{
public:
    Rect()
    {
     count++;
    }
    Rect(const Rect& r)
    {
        width = r.width;
        height = r.height;
        count++;
    }

    ~Rect()
    {
     count--;
    }
    static int getCount()
    {
     return count;
    }
private:
    int width;
    int height;
    static int count;
};
int Rect::count=0;
int main()
{
    Rect rect1;
    cout<<"The count of Rect:"<<Rect::getCount()<<endl;
    Rect rect2(rect1);
    cout<<"The count of Rect:"<<Rect::getCount()<<endl;
    return 0;
}

