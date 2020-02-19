#include<iostream>
using namespace std;
int main()
{
    int i,j,k,n;
    cout<<"Enter the number of rows :";
    cin>>n;
    for(i=n;i>=1;i--)
    {
        
        for(j=i;j<n;j++)
            cout<<"  ";
        for(k=1;k<=(i-1);k++)
            cout<<"& ";
        cout<<endl;
    }
    return 0;

}