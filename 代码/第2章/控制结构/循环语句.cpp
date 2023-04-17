#include <iostream>
using namespace std;
int main( )
{
   int i=1,j=1,sum1=0,sum2=0;
   while(i<=100)
   {
       sum1 = sum1 + i;
       i++;
   }
   cout<<"sum1="<<sum1<<endl;
   do
   {
       sum2 = sum2 + j;
       j++;
   }while(j<=100);
   cout<<"sum2="<<sum2<<endl;
   return 0;
}

