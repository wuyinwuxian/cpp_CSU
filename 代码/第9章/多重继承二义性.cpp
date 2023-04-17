#include <iostream>
#include<string>
using namespace std;
class Teacher
{public:
  Teacher(string nam, int a, string t)
  {name = nam;
   age=a;
   title=t;
  }
  void display()
  {
	  cout<<"name:"<<name<<endl;
	  cout<<"age:"<<age<<endl;
	  cout<<"title:"<<title<<endl;
  }
protected:
	string name;
	int age;
	string title;
};

class Student
{
public:
	Student(string nam, char s, float sco)
	{
		name1=nam;
		sex=s;
		score=sco;
	}
	void display1()
	{
	  cout<<"name:"<<name1<<endl;
	  cout<<"sex:"<<sex<<endl;
	  cout<<"score:"<<score<<endl;
	}
protected:
	string name1;
	char sex;
	float score;
};

class Graduate: public Teacher, public Student
{
public:
Graduate(string nam, int a, char s, string t, float sco, float w):Teacher(nam, a, t), Student(nam, s, sco), wage(w){}
	void show(){
		cout<<"name:"<<name<<endl;
	  	cout<<"age:"<<age<<endl;
		cout<<"sex:"<<sex<<endl;
		cout<<"score:"<<score<<endl;
	  	cout<<"title:"<<title<<endl;
	  	cout<<"wage:"<<wage<<endl;
	}
private:
	float wage;
};

int main()
{
Graduate grad1("wang", 24, 'f', "assistant", 89, 1200);
grad1.show();
return 0;
}


