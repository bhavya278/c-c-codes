#include<iostream>
using namespace std;
int main()
{
    int *a,n,i,f=0;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    a = new int[n];
    cout<<"Enter the array : ";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<=n/2 && n!=0;i++)
    {
        if(a[i]==a[n-1-i])
        f=1;
        else
        f=0;
    }
    if(f==1)
    cout<<"The array is satisfying the condition !!!";
    else
    cout<<"The array is not satisfying the condition !!!";
}