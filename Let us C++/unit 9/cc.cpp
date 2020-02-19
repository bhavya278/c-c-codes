#include<iostream>
#include<math.h>
using namespace std;
int fact(int  *n)
{ 
    int f=1,i=1;
    do
    {
       f*=i;
       i++;
    }while(i<=*n);
    return(f);
}
int Sine(int *a)
{
    int sum=0;
    for(int j=1;j<=10;j++)
    {
        if(j%2!=0)
        sum+=pow(*a,j)/fact(&j);
        else
        cout<<" ";
    }
    cout<<"The Sum : "<<sum;
}
int main()
{
    int n;
    cout<<"Enter the Value : ";
    cin>>n;
    Sine(&n);
    return 0;
}