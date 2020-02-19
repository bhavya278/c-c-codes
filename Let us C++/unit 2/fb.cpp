// Program to Find Reverse a number 
#include<iostream>
using namespace std;
int main()
{
    long int n,r =0;
    cout<<"Enter the Number : ";
    cin>>n;
    while(n!=0)
    {
          r*=10;
          r+=n%10;
          n/=10;
    }
   cout<<"The Reverse of the number is : "<<r;
}



