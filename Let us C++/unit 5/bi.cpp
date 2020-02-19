#include<iostream>
using namespace std;
int main()
{
    int max,min,*a,n,i,rg;
    cout<<"Enter the number of Elements you want to insert : ";
    cin>>n;
    a=new int[n];
    cout<<"Enter the Numbers (one in each line) : ";
    for(i=0;i<n;i++)
    cin>>a[i];
    min=a[1];
    max=a[1];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
          min=a[i];
        if(a[i]>max)
        max=a[i];
    }
    rg=max-min;
    cout<<"The Range of Number is : "<<rg;
    return 0;
}