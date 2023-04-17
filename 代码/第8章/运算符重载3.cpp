#include <iostream>
using namespace std; 
class three_d
{   int x, y, z;
public:
    friend ostream & operator << ( ostream & scout, three_d & obj)
    {   scout << obj.x << "," << obj.y << "," << obj.z << endl;
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
    cout << x1 << x2;
    return 0;
}

