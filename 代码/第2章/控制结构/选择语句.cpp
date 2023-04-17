#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char grade;
	grade = 'B';
	switch (grade)
	{
       case 'A':printf("85~100\n"); 
       case 'B':printf("70~84\n"); 
       case 'C':printf("60~69\n"); 
       case 'D':printf("<60\n"); 
       default :printf("error\n");
	}
   return 0;
}


