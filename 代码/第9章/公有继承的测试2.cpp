#include<iostream>
using namespace std;
class  A {   
           	int x;
protected:  int y;
public:     int z;
   			A(int a,int b,int c){x=a;
			   y=b;
			   z=c;
			}//基类初始化
  			int  Getx(){return x;}	//返回x
  			int  Gety(){return y;}	//返回y
  			void ShowA(){cout<< "x="<<x<<'\t'<<"y="<<y<<'\t'<<"z="<<z<<'\n';}
};

class B:public A{
	int m,n;
public:	B(int a,int b,int c,int d,int e):A(a,b,c){m=d;n=e;}
    void Show(){cout<<"m="<<m<<'\t'<<"n="<<n<<'\n';
    cout<<"x="<<Getx()<<'\t'<<"y="<<y<<'\t'<<"z="<<z<<'\n';  }
   int Sum(){return (Getx()+y+z+m+n);}
 };
int  main(void)
{    B b1(1,2,3,4,5);
     b1.ShowA();	      
	 b1.Show();
     cout<< "Sum = "<<b1.Sum()<<'\n';
	 cout<<"x="<<b1.Getx()<<'\t';
     cout << "y=" <<b1.Gety()<<'\t';	
	 cout << "z="<<b1.z<<'\n';
}

