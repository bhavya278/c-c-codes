#include<iostream>
using namespace std;
void  IsPrime(int n)
{
    if(n%2==0)
    cout<<"Even Number";
    else
    {
        if(n%n==0||n%1==0)
        throw "The Number is prime";
        else
        {
            cout<<"The Number is odd";
        }
    }
    
}
int main()
{
    int num;
    cout<<"Enter your favourite number";
    cin>>num;
    try
    {
        IsPrime(num);
    }
    catch(const char*p)
    {
        cerr<<p<<'\n';
    }
    
}