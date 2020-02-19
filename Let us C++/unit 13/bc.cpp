#include<iostream>
using namespace std;
int main()
{
    int *a,n,s,i;
    cout<<"Enter the Size of Array : ";
    cin>>n;
    a = new int[n];
    cout<<"Enter the Array : "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"enter the Element you want to search : ";
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            cout<<"Element is Present !!! "<<endl;
            for(int j=0;j<s;j++)
            cout<<s<<" ";
        }
        
    }
    return 0;
}