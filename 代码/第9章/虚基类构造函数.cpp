#include <iostream>
using namespace std;
class  Base
{ public :
      Base ( ) { cout << "Base构造函数" << endl ; } 
      ~Base ( ) { cout << "Base析构函数" << endl ; } 
} ;
class  Base1
{ public :  
      Base1 ( ) {cout << "Base1构造函数" << endl ;  } 
      ~Base1 ( ) {cout << "Base1析构函数" << endl ;  } 
} ;
class  Base2
{ public :  
      Base2 ( ) {cout << "Base2构造函数" << endl ;  } 
     ~Base2 ( ) {cout << "Base2析构函数" << endl ;  } 
} ;
class  D :  public  Base ,  virtual public  Base2, virtual public Base1
{ public :  
       D ( ) {cout << "D构造函数" << endl ; } 
       ~D ( ) {cout << "D析构函数" << endl ; } 
} ;
int main ( )
{ D  dd  ;  }

