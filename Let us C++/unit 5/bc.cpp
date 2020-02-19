#include<iostream>
using namespace std;
 int CalcPow(int x,int y)
{
    int i;
    int n=1;;
    for(i=0;i<y;++i)
    n*=x;
    return(n);
} 
int main()
{
    int n,e,a;
    cout<<"Enter the Number :";
    cin>>n;
    cout<<"Enter the Exponent  : ";
    cin>>e;
    a=CalcPow(n,e);
    cout<<"The Final Answer is : "<<a;
    return 0;
}