#include <iostream>
using namespace std; 
class Com
{    
    double Re, Im; 
public:
    Com(double r, double i) 
    {Re = r; Im = i; }
    Com( ) { Re = 0; Im =0; }
    Com operator+( Com );
    void show_Com( );
};
Com Com::operator+( Com c)
{
    Com tmp;
    tmp.Re = Re + c. Re;
    tmp.Im = Im + c.Im;
    return tmp;
}

void Com::show_Com( )
{
    cout << Re << "+" << Im  << "j" << endl;
}

int main()
{    
    Com obj1(1, 2), obj2(2,3);
    Com obj3 = obj1 + (obj2);
    obj1.show_Com();
    obj2.show_Com();
    obj3.show_Com();
    return 0;
}

