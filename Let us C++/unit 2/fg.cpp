// Program to Find Trignometric values of angle entered 
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
     double ang,s,c,t,sc,csc,ct;
     cout<<"Enter the Angle:";
     cin>>ang;
     s=sin(ang);
     c=cos(ang);
     t=tan(ang);
     sc=acos(ang);
     csc=asin(ang);
     ct=atan(ang);
     cout<<"Sine value is :"<<s<<endl;
     cout<<"Cosine value is:"<<c<<endl;
     cout<<"Tan value is :"<<t<<endl;
     cout<<"Secant value is :"<<sc<<endl;
     cout<<"Cosecant value is:"<<csc<<endl;
     cout<<"Cot value is:"<<ct<<endl;
     return 0;
}