#include <iostream>
using namespace std;
class  Base
{ public :
      Base ( ) { cout << "Base���캯��" << endl ; } 
      ~Base ( ) { cout << "Base��������" << endl ; } 
} ;
class  Base1
{ public :  
      Base1 ( ) {cout << "Base1���캯��" << endl ;  } 
      ~Base1 ( ) {cout << "Base1��������" << endl ;  } 
} ;
class  Base2
{ public :  
      Base2 ( ) {cout << "Base2���캯��" << endl ;  } 
     ~Base2 ( ) {cout << "Base2��������" << endl ;  } 
} ;
class  D :  public  Base ,  virtual public  Base2, virtual public Base1
{ public :  
       D ( ) {cout << "D���캯��" << endl ; } 
       ~D ( ) {cout << "D��������" << endl ; } 
} ;
int main ( )
{ D  dd  ;  }

