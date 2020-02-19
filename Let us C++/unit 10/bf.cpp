#include<iostream>
using namespace std;
void fun(int n,char a,char b,char c)
{
    if(n==1)
    {
        cout<<" Move disk 1 from rod : "<<a<<" to rod : "<<b<<endl;
        return;
    }
    else
    fun(n-1,a,c,b);
    cout<<" Move Disk "<<n<<" from rod : "<<a<<" to rod : "<<b<<endl;
    fun(n-1,c,b,a);
}
int main()
{
    int n;
    cout<<"Enter the number of disks : ";
    cin>>n;
    fun(n,'A','C','B');
    return 0;
}