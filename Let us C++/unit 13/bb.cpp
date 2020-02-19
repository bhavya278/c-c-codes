#include<iostream>
using namespace std;
int main()
{
    int *a,*b,n,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    a = new int[n];
    b = new int[n];
    cout<<"Enter the array : "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    b[i]=a[n-i-1];
    cout<<"The Array in revere order : "<<endl;
    for(i=0;i<n;i++)
    cout<<b[i]<<endl;
    return 0;
}