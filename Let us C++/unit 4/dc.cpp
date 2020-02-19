#include<iostream>
using namespace std;
int great(int,int,int);
int main()
{
    int p,q,r,d;
    cout<<"3rd side should be the Greatest one !!!"<<endl;
    cout<<"Enter the 1st side of the Trainge : ";
    cin>>p;
    cout<<"Enter the 2nd side of the Traingle : ";
    cin>>q;
    cout<<"Enter the 3rd side of the Traingle : ";
    cin>>r;
    d=great(p,q,r);
    if(d==p)
    {
        if(q+r>p)
        cout<<"It is a Traingle !!!!";
        else 
        cout<<"It is not a Traingle !!!";
    }
    else if(d==q)
    { 
        if(p+r>q)
        cout<<"It is a Traingle !!!!";
        else 
        cout<<"It is not a Traingle !!!";
    }
    else
    {
        if(q+p>r)
        cout<<"It is a Traingle !!!!";
        else 
        cout<<"It is not a Traingle !!!";
    }
    return 0;
}
int great(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
           return a;
        }
        else
        {
           return c;
        }
    }
    else if(b>c)
    {
        if(b>a)
        {
          return b;
        }
        else
        {
           return a;
        }
    }
    else
    {
       return c;
    }
}