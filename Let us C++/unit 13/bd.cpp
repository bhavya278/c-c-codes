#include<iostream>
using namespace std;
int main()
{
    int *a,n,i,c1=0,c2=0,c3=0,c4=0;
    cout<<"Enter how many Integers you enter : ";
    cin>>n;
    a = new int[n];
    cout<<"Enter the Integers : "<<endl;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
           c1++;
        if(a[i]%2==0)
           c3++;
        else
            c4++;
        }
        else
        {
            c2++;
        }
    } 
    cout<<"The number of Positive integers are : "<<c1<<endl;
    cout<<"The number of Negative integers are : "<<c2<<endl;
    cout<<"The number of Even integers are : "<<c3<<endl;
    cout<<"The number of Odd integers are : "<<c4<<endl;
}