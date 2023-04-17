#include <iostream>
using namespace std;
class parent {                                      
 public: 
virtual void output(); 
virtual void aaa();
 }; 
void parent::output() 
{ cout<<"parent"; aaa(); } 
void parent::aaa() 
{ cout<<"aaa"; } 
class son:public parent { 
public: 
virtual void output(); 
virtual void aaa();
 }; 
void son::output() { cout<<"son"; aaa(); } 
void son::aaa() { cout<<"bbb"; }

int main() { 
son s; //memset(&s,0,sizeof(s)); 
parent &p=s;//reference 
p.output(); cout<<endl; 
parent *q=&s;//pointer 
q->output(); 
return 0; }

