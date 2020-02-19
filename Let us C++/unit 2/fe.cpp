// Program to Find Distance if longitudnal and latitudnal coordinate are given 
#include<math.h>
#include<iostream>
using namespace std;
int main()
{
    double l1,l2,g1,g2,d;
    cout<<"Enter the Longitudanal Coordinates(in degrees) :";
    cin>>l1>>l2;
    cout<<"Enter the Latitunal Coordinates(in degrees) :";
    cin>>g1>>g2;
    d=(acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1)))*(180/3.14);
    cout<<"The Distance of the coordinates from origin is :"<<d*3963;
    return 0;
}




