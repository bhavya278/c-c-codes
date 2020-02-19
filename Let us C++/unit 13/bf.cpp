#include<iostream>
using namespace std;
int main()
{
    int *a,n,i;
    cout<<"Enter the size of the array : ";
    cin>>n;
    a = new int[n];
    cout<<"Enter the Integer !!!";
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n-i;j++)
        if(a[j]>a[j+1])
        {
            int temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    for(i=0;i<n;i++)
    if(i==0)
    cout<<"The Samllest integer is "<<a[i]<<endl;
}