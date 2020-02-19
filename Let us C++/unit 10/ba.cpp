#include<iostream>
using namespace std;
int Reverse(int n)
{
   static int r,sum;
   if(n)
   {
    r=n%10;
    sum=sum*10+r;
    Reverse(n/10);
   }
   else
   return 0;
   return sum;
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    cout<<"The Reverse of the number is : "<<Reverse(num);
    return 0;
}