#include<iostream>
using namespace std;
int main()
{
    int yr,i,j,v,x,l,c,d,m,p,q,r,s,t,u;
    cout<<"Enter the Year : ";
    cin>>yr;
    cout<<"Roman equivalent of year "<<yr<<" is : ";
    m=yr/1000;
    for(j=1;j<=m;j++)
    cout<<" m ";
    p=yr%1000;
    d=p/500;
    for(j=1;j<=d;j++)
    cout<<" d ";
    q=p%500;
    c=q/100;
    for(j=1;j<=c;j++)
    cout<<" c ";
    r=q%100;
    l=r/50;
    for(j=1;j<=l;j++)
    cout<<" l ";
    s=r%50;
    x=s/10;
    for(j=1;j<=x;j++)
    cout<<" x ";
    t=s%10;
    v=t/5;
    for(j=1;j<=v;j++)
    cout<<" v ";
    u=t%5;
    i=u/1;
    for(j=1;j<=i;j++)
    cout<<" i ";
}