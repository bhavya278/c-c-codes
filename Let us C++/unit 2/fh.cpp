// Program to Find Swap two numbers without using third number
#include<iostream>
using namespace std;
int main()
{
     int c,d;
     cout<<"Enter the value of C:";
     cin>>c;
     cout<<"Enter the value of D:";
     cin>>d;
     cout<<"Entered values of C and D are "<<c<<" and "<<d<<" respectively "<<endl;
     c+=d;
     d=c-d;
     c-=d;
     cout<<"Final values of C and D are "<<c<<" and "<<d<<" respectively";
     return 0;
}