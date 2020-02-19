#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    double p,q,r,a,n,i=1;
   for(i=1;i<3;i++)
   {
       cout<<" Principle for set "<<i<<" is : ";  
       cin>>p;    
       cout<<" Interest for set "<<i<<" is : ";  
       cin>>q;
       cout<<" Rate for set "<<i<<" is : ";   
       cin>>r;
       cout<<" Time for set "<<i<<" is : ";
       cin>>n;
    } 
    for(i=1;i<3;i++)
    {
       a=p*pow((1+(r/q)),n*q);
       cout<<" Principle for set "<<i<<" = "<<p<<endl;
       cout<<" Interest for set "<<i<<" = "<<q<<endl;   
       cout<<" Rate for set "<<i<<" = "<<r<<endl;   
       cout<<" Time for set "<<i<<" = "<<n<<endl;
    } 
}