// Program to Find Area of Traingle 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double a,b,c,s,ar;
    cout<<"Enter the 1st side of the Traingle :";
    cin>>a;
    cout<<"Enter the 1st side of the Traingle :";
    cin>>b;
    cout<<"Enter the 1st side of the Traingle :";
    cin>>c;
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"The Area of the Traingle is:"<<ar;
    return 0;
}




