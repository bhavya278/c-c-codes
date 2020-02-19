#include<iostream>
using namespace std;
int main()
{
    int p=100000,i,r;
    for(i=9;i>=1;i--)
    {
        cout<<"The Population at : "<<i<<" year is "<<p-(p/10)<<endl;
        p-=p/10;
    }
}