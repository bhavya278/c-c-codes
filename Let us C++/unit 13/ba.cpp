#include<iostream>
using namespace std;
int main()
{
    int *a,s,i;
    cout<<"Enter the size of array (excluding 0) : ";
    cin>>s;
    cout<<"Enter the array : ";
    for(i=0;i<s;i++)
    cin>>a[i];
    for(i=0;i<s;i+=2)
    {
        a[i]=a[i]+a[i+1];
        a[i+1]=a[i]-a[i+1];
        a[i]=a[i]-a[i+1];
    }
    cout<<"The Final Array is : ";
    for(i=0;i<s;i++)
    cout<<a[i]<<endl;
}