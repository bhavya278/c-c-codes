#include<iostream>
using namespace std;
int main()
{
    int bin[32],num,i=0;
    cout<<"Enter the number : ";
    cin>>num;
    while(num>0)
    {
        bin[i]=num%2;
        num/=2;
        i++;
    }
    cout<<"The Binary equivalent is : ";
    for(int j=i-1;j>=0;j--)
    cout<<bin[j]<<" ";
    return 0;
}