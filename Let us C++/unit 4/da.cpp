#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"Enter the Year :";
    cin>>yr;
    if(yr%4==0)
    cout<<"Year is a leap Year !!!";
    else
    cout<<"Year is an ordinary Year !!!";
    return 0;
}