// Program to Find Wind Chill Factor by tempreatue is given 
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    double wcf,v,t;
    cout<<"The Tempreature of Surrounding :";
    cin>>t;
    cout<<"The Wind Velocity of Surrounding :";
    cin>>v;
    wcf=35.74+.6215*t+(.4275*t-35.75)*pow(v,.16);
    cout<<"The Wind Chill Factor of the Surrounding is :"<<wcf;
    return 0;
}