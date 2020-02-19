#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,d;
    cout<<"Enter the Horizontal Coordinate of the Point : ";
    cin>>x;
    cout<<"Enter the Vertical Coordinate of the Point : ";
    cin>>y;
    try{
    if(x==0&&y==0)
    cout<<"Point lies at Origin !!!";
    if(x==0)
    cout<<"Point lies at Y-axis with a distance of "<<y<<" units from Origin !!!";
    if(y==0)
    cout<<"Point lies at X-axis with a distance of "<<x<<" units from Origin !!!";
    }
    catch(int * q)
    {
    cout<<q<<endl;
    }
    d=abs(sqrt(pow(x,2)+pow(y,2)));
   if(!(y==0||x==0||x==0&&y==0))
    {
      throw "The Point lies at Cartiean Plane with a distance"<<d<<" units from Origin !!!";
    }
    
    return 0;
}