// Program to Find Polar Coordinate from Cartisian Coordinates 
#include<math.h>
#include<iostream>
using  namespace std;
int main()
{
    double x,y,r,th;
    cout<<"Enter the Horizontal Cartesian Coordinates :";
    cin>>x;
    cout<<"Enter the Vertical Cartesian Cordinates :";
    cin>>y;
    r=sqrt(pow(x,2)+pow(y,2));
    th=atan(y/x);
    cout<<"The Polar Coordinates Are given by :"<<endl;
    cout<<"r = "<<r<<endl;
    cout<<"Angle = "<<th*180/3.14;
    return 0;
}