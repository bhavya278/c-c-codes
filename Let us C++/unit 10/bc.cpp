#include<iostream>
using namespace std;
int Fibo(long int num)
{
        if(num==0)
        return 0;
        else if(num==1)
        return 1;
        else
        return (Fibo(num-1)+Fibo(num-2));
}
int main()
{
    long int n,i,c=0;
    cout<<"Enter the number : ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<Fibo(c)<<endl;
    c++;
    }
    return 0;
}