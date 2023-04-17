#include <iostream>
using namespace std; 
class three_d
{   int x, y, z;
public:
    ostream & operator << (ostream & scout)
    {   scout << x << "," << y << "," << z << endl;
        return scout;
    }
    friend istream & operator >> (istream & scin, three_d & obj)
    {   scin >> obj.x >> obj.y >> obj.z;
        return scin;
    }
};
int main()
{  three_d x1, x2;
    cin >> x1 >> x2;
    x2<<(x1<<cout);
    return 0;
}

