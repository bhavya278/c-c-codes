#include<iostream>
#include<math.h>
using namespace std;
double CalcArea(int *x1,int *y1,int *x2,int *y2,int *x3,int *y3,int *x,int *y)
{
    double ar = abs((*x1 * (*y2 - *y3)+ *x2 * (*y3 - *y1)+ *x3 * (*y1 - *y2)))/2;
    cout<<"The Area of the Traingle: "<<ar<<endl;
    double ar1 = abs((*x1 * (*y2 - *y)+ *x2 * (*y - *y1)+ *x * (*y1 - *y2)))/2;
    double ar2 = abs((*x1 * (*y - *y3)+ *x * (*y3 - *y1)+ *x3 * (*y1 - *y)))/2;
    double ar3 = abs((*x * (*y2 - *y3)+ *x2 * (*y3 - *y)+ *x3 * (*y - *y2)))/2;
    if(ar1+ar2+ar3==ar)
    cout<<" 1 ";
    else
    cout<<" 0 ";
}
int main()
{
    int a,b,c,d,e,f,g,h;
    cout<<"Enter the first Vertex coordinates : ";
    cin>>a>>b;
    cout<<"Enter the second Vertex coordinates : ";
    cin>>c>>d;
    cout<<"Enter the third Vertex coordinates : ";
    cin>>e>>f;
    cout<<"Enter the Coordinates : ";
    cin>>g>>h;
    CalcArea(&a,&b,&c,&d,&e,&f,&g,&h);
    return 0;
}