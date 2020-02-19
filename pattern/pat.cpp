#include<iostream>
using namespace std;
int main()
{
   int i,j,n;
   cout<<"Enter the number of rows you want to print :";
   cin>>n;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
       cout<<i<<" ";
       cout<<endl;
   }
}