// Program to Find Sum of Digit of a number 
#include<iostream>
using namespace std;
int main()
{
    long int n,sum=0,m;
    cout<<"enter the number : ";
    cin>>n;
    while(n>0)
    {
        m=n%10;
        sum+=m;
        n/=10;
    }
    cout<<"The Sum of digits of the number : "<<sum;
}