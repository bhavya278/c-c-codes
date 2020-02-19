#include<iostream>
using namespace std;
int Leap(int x)
{
    int f=0;
    if(x%4==0)
    f=1;
    else
    f=0;
   return f;
}
int main()
{
    int yr;
    cout<<"Enter the Year : ";
    cin>>yr;
    if(Leap(yr)==1)
    cout<<"The Year is a Leap Year !!! ";
    else
    cout<<"The Year is an ordinary Year !!!";
    return 0;
}