#include<iostream>
#include<math.h>
using namespace std;
int CalcAr(int *x,int *y,int *z,int *q)
{
   int a;
   a=sqrt((*q)*(*q-*x)*(*q-*y)*(*q-*z)); 
   cout<<"The Area is : "<<a;
}
int main()
{
    int a,b,c,s,ar;
    cout<<"Enter the 1st side : ";
    cin>>a;
    cout<<"Entert the 2nd side : ";
    cin>>b;
    cout<<"enter the 3rd side : ";
    cin>>c;
    s=(a+b+c)/2;
    CalcAr(&a,&b,&c,&s);
}