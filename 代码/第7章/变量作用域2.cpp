#include <iostream>
using namespace std; 
int main() {
    //int a = 10;
    {
        int a = 20;  // 块作用域变量
        cout << "块变量: " << a << endl;
    }
    cout << "外部变量: " << a << endl;
    return 0;
}
