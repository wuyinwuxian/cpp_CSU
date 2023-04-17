#include <iostream>
using namespace std; 
class Array
{
    int *p; int size;
public:
    Array(int num) 
    {
        size = (num > 2) ? num : 2;
        p = new int[size];
    }
    ~Array( ) { delete [ ] p; }
	int & operator [ ] (int idx)
    {
        if (idx < size) return p[idx];
        else
        {
            expand(idx-size +1);
            return p[idx];
        }
    }
    void expand(int offset)
    {
        int * pi = new int [size + offset];
        for (int n = 0; n < size; n++)   pi[n] = p[n];
        delete [ ] p; p = pi; size += offset;
    }
};
int main()
{
    int num = 0;
    Array a_array(10);
    for (; num <10; num++)  a_array[num] = num;
    a_array[10] = 10;
    for (num=0;num<=10;num++)
        cout << a_array[num] <<endl;
    return 0;
}

