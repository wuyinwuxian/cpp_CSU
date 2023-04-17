#include <iostream>
using namespace std;
class Student
{public:
     Student(int, string, float);//�������캯��
     // void display( );                 //�����������
	 virtual void display( );                 //�����������Ϊ�麯�� 
protected:                        //�ܱ�����Ա����������Է��� 
     int num;
     string name;
     float score;
 };
//���幹�캯��
Student::Student(int n, string nam,float s)
{ num = n; name = nam; score = s;}
//�����������
void Student::display( ) 
{
     cout << "num:" << num << "\nname:" << name
             << "\nscore:" << score << "\n\n";
}

class Graduate:public Student
{public:
     Graduate(int, string, float, float);     //�������캯��
     virtual void display( );                                    //�����������
private:
     float pay;
};

//���幹�캯��
Graduate::Graduate(int n, string nam, float s, float p)
:Student(n,nam,s), pay(p){ }
//�����������
void Graduate::display()
{
     cout << "num:" << num << "\nname:" << name 
             << "\nscore:" << score << "\npay="
             << pay << endl;
}

int main()
{
     Student stud1(1001,"Li",87);    //����Student�����
     Graduate grad1(2001,"Wang",98,1200);  //����Graduate�����
     Student *pt=&stud1;     //����ָ���������ָ�����pt
     pt->display( );
     pt=&grad1;
     pt->display( );
     return 0;
 }

