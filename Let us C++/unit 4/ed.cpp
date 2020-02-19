#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int ang;
    cout<<"Enter the Angle (in Degree) : ";
    cin>>ang;
    if(pow(sin(ang),2)+pow(cos(ang),2)==1)
    cout<<"Property is Satisfied !!!";
    else
    cout<<"Property is not Satisfied !!!";
    return 0;
}