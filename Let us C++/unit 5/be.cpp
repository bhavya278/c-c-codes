#include<iostream>
using namespace std;
int main()
{
    int n,x,y,res=0;
    cout<<"Enter the number : ";
    cin>>n;
    x=n;
    while(x!=0)
    {
        y=x%10;
        res+=y*y*y;
        x/=10;
    }
    if(res==n)
    cout<<"The number "<<n<<" is an Armstrong number ";
    else
    cout<<"The number "<<n<<" is not an Armstrong Number ";
}