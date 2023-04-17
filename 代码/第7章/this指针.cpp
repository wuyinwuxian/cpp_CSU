#include<iostream>
using namespace std;
class  Simple
{
    int  x, y ;
public :
    void setXY ( int a, int b) { this->x = a ;  this->y = b ; }
    void printXY() { cout << x << "," << y << endl ; } ;
} ;
int  main()
{ 
    Simple obj1, obj2, obj3; 
    obj1.setXY (10, 15) ;
    obj1.printXY () ;
    obj2.setXY (20, 25) ;
    obj2.printXY () ;
}

