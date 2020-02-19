#include<iostream>
using namespace std;
long int Octal(long int num)
{
    long int rem[50],i=0,length=0;
    while(num>0)
    {
        rem[i]=num%8;
        num/=8;
        i++;
        length++;
    }
    cout<<"Octal Number : ";
    for(i=length-1;i>=0;i--)
        cout<<rem[i];
        return 0;
}
int main()
{
   long int n;
   cout<<"Enter the Number : ";
   cin>>n;
   Octal(n);
   return 0;
}