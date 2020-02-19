#include<iostream>
using namespace std;
int SumNat(int n)
{
 if(n!=0)
 return(n + SumNat(n-1));
 else
 return n;
}
int main()
{
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    SumNat(n);
    return 0;
}