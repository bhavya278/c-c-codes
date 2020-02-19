#include<iostream>
using namespace std;
void modify(int *b,int s)
{
   int j;
   for(j=0;j<s;j++)
   cout<<b[j]*3<<endl;
}
int main()
{
   int *a,n,i;
   cout<<"Enter the size of the array : ";
   cin>>n;
   a = new int[n];
   cout<<"Enter the Array : ";
   for(i=0;i<n;i++)
   cin>>a[i];
   cout<<"The Modified array is : "<<endl;
   modify(&a[0],n);
}