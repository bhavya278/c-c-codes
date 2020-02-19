#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double x,sum=0;
    cout<<"Enter the value of x : ";
    cin>>x;
    for(int i=2;i<8;i++)
    sum+=x-1/x+1/2*pow((x-1/x),i);
    cout<<"The Total value after summation : "<<sum;
}