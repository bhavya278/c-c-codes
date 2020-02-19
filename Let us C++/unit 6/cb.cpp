#include<iostream>
using namespace std;
long double fact(long double n)
{
  long double i=1,f=1;
  do
    {
      f*=i;
      i++;
    }while(i<=n);
    return(f);
}
int main()
{
   long int num,j,sum=0;
   cout<<"Enter the number upto which you want to find the sum : ";
   cin>>num;
   for(j=1;j<=num;j++)
   sum+=j/fact(j);
   cout<<"Sum is  : "<<sum;
   return 0;   
}