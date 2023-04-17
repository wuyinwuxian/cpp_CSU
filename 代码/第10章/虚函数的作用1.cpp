#include <iostream>
using namespace std;
class Student
{public:
     Student(int, string, float);//声明构造函数
     // void display( );                 //声明输出函数
	 virtual void display( );                 //声明输出函数为虚函数 
protected:                        //受保护成员，派生类可以访问 
     int num;
     string name;
     float score;
 };
//定义构造函数
Student::Student(int n, string nam,float s)
{ num = n; name = nam; score = s;}
//定义输出函数
void Student::display( ) 
{
     cout << "num:" << num << "\nname:" << name
             << "\nscore:" << score << "\n\n";
}

class Graduate:public Student
{public:
     Graduate(int, string, float, float);     //声明构造函数
     virtual void display( );                                    //声明输出函数
private:
     float pay;
};

//定义构造函数
Graduate::Graduate(int n, string nam, float s, float p)
:Student(n,nam,s), pay(p){ }
//定义输出函数
void Graduate::display()
{
     cout << "num:" << num << "\nname:" << name 
             << "\nscore:" << score << "\npay="
             << pay << endl;
}

int main()
{
     Student stud1(1001,"Li",87);    //定义Student类对象
     Graduate grad1(2001,"Wang",98,1200);  //定义Graduate类对象
     Student *pt=&stud1;     //定义指向基类对象的指针变量pt
     pt->display( );
     pt=&grad1;
     pt->display( );
     return 0;
 }

