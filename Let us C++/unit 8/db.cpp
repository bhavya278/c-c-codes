#include<iostream>
using namespace std;
double Power(double x,double y)
{
    double i,n=1;
    for(i=0;i<y;++i)
    n*=x;
    return(n);
} 
int main()
{
    double a,b;
    cout<<"Enter the Base : ";
    cin>>a;
    cout<<"Enter the Exponrent : ";
    cin>>b;
    cout<<"The value of "<<a<<" raised to power "<<b<<" is : "<<Power(a,b);
    return 0;
}