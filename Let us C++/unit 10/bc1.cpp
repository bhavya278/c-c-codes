#include<iostream>
using namespace std;
int fibo(int x)
{
    if(x==0||x==1)
    return(x);
    else
    return(fibo(x-1)+fibo(x-2));
}
int main()
{
    int num,i=1;
    cout<<"enter upto which term you want fibonacci series : ";
    cin>>num;
    while(i<num)
    {
        cout<<" "<<fibo(i);
        i++;
    }
    return 0;
}