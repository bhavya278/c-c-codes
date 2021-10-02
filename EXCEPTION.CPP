#include<bits/stdc++.h>
using namespace std;
float division(float x,float y)
{
    if(y==0)
    {
      throw "Attempted to be divided by zero !!!";
    }
  return(x/y);
}
int main()
{
   float i,j,k;
   cout<<"Enter the divident :";
   cin>>i;
   cout<<"Enter the divisor :";
   cin>>j;
   try
   {
      k=division(i,j);
      cout<<"Correct Answer is : "<<k;
   }
   catch(const char*z)
   {
      cout<<"Value of z is "<<z<<"\n";
   }
}

