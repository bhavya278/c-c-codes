#include<iostream>
using namespace std;
int main()
{
    int x1,x2,x3,y1,y2,y3;
    float a;
    cout<<"Enter the Horizontal coordinate of 1st point : ";
    cin>>x1;
    cout<<"Enter the Horizontal coordinate of 2nd point : ";
    cin>>x2;
    cout<<"Enter the Horizontal coordinate of 3rd point : ";
    cin>>x3;
    cout<<"Enter the Vertical coordinate of 1st point : ";
    cin>>y1;
    cout<<"Enter the Vertical coordinate of 2nd point : ";
    cin>>y2;
    cout<<"Enter the Vertical coordinate of 3rd point : ";
    cin>>y3;
    a=1/2*(x1*(y2-y3)+x2*(y2-y1)+x3*(y1-y2));
    if(a==0.0)
    cout<<"Points lie in a Line !!!";
    else
    cout<<"Points not lie in a Line !!!";
    return 0;
}