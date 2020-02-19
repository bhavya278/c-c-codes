#include<iostream>
using namespace std;
int main()
{
    int i,n,j,k;
    cout<<"Enter number of rows :";
    cin>>n;
    for(k=1;k<=n;k++)
    {
    for(i=1;i<=6;i++)
    {
        for(j=1;j<=6;j++)
        {
            if(i==j)
            cout<<"*";
            else
            cout<<" ";
            
        }
        cout<<endl;
    }
            if(j==10&&i==6||i%6==0)
            cout<<"*";
            else
            cout<<" ";

    }
    return 0;
}