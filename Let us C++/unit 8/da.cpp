#include<iostream>
using namespace std;
int fact(int n)
{
    int fact=1,i=1;
    do
    {
        fact*=i;
        i++;
    } while (i<=n);
    return fact;
}
int main()
{
    int n,f;
    cout<<"Enter the number : ";
    cin>>n;
    cout<<"The factorial of the number : "<<fact(n);
    return 0;
}