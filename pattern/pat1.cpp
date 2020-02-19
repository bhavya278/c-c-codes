#include<iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Enter the number of rows :";
    cin>>n;
    int x=1,y=0;
    while(x<=n)
    {
        y+=x;
        x++;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            cout<<" ";
        }
        for(k=i;k<=n;k++)
        {
            cout<<"& ";
        }
        cout<<endl;
    }
}