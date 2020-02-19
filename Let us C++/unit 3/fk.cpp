#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x,y,x1,y1,r,d;
    cout<<"Enter the Horizontal Coordinate of Center : ";
    cin>>x;
    cout<<"Enter the Vertical Coordinate of Center : ";
    cin>>y;
    cout<<"Enter the Radius Of the circle : ";
    cin>>r;
    cout<<"Enter the Horizontal Coordinate of Point : ";
    cin>>x1;
    cout<<"Enter the Horizontal Coordinate of Point : ";
    cin>>y1;
    d=abs(sqrt(pow(x-x1,2)+pow(y-y1,2)));
    if(d>r)
    cout<<"The Point lies Outside the Circle !!!";
    else if(d==r)
    cout<<"The Point lies On the Circle !!!";
    else
    cout<<"The Point lies Inside the Circle !!!";
    return 0;
}