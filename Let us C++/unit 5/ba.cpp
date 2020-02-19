#include<iostream>
using namespace std;
int main()
{
    int t[10],i,s=0,j;
    for(i=1;i<=10;i++)
    {
        cout<<"Enter the Working time for employee  "<<i<<" : "<<endl;
        cin>>t[i];
        if(t[i]>40)
        { 
          j=t[i]-40;
          s = 12*j;
          cout<<"The total extra money given is : "<<s<<endl;
        }
        else
        {
            cout<<"The total extra money given is : 0"<<endl;
        }
    }
    return 0;
}