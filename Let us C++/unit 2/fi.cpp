// Program to Find Smallest number of notes require to make a number entered by user
#include<iostream>
using namespace std;
int main()
{
    int N,h,f,t,fi,tw,o,a,b,c,d,e;
    cout<<"Enter the Number : ";
    cin>>N;
    h=N/100;
    a=N%100;
    f=a/50;
    b=a%50;
    t=b/10;
    c=b%10;
    fi=c/5;
    d=c%5;
    tw=d/2;
    e=d%2;
    o=e/1;
    cout<<"Number of Rs 100 notes require : "<<h<<endl;
    cout<<"Number of Rs 50 notes require : "<<f<<endl;
    cout<<"Number of Rs 10 notes require : "<<t<<endl;
    cout<<"Number of Rs 5 notes require : "<<fi<<endl;
    cout<<"Number of Rs 2 notes require : "<<tw<<endl;
    cout<<"Number of Rs 1 notes require : "<<o<<endl;
}
