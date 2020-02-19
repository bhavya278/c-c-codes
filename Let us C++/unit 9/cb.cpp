#include<iostream>
using namespace std;
double AvgPerc(double *p,double *q,double *r,double *z)
{
    double avg = *p+*q+*r/3;
    double perc = ((*p+*q+*r)/ (3 * (*z)))*100;
    cout<<"The Average marks of the student : "<<avg<<endl;
    cout<<"The Percentage of student : "<<perc;
}
int main()
{
    double a,b,c,tot,res;
    cout<<"Enter the Total Marks : ";
    cin>>tot;
    cout<<"Enter the Marks of Subject 1 : ";
    cin>>a;
    cout<<"Enter the Marks of Subject 2 : ";
    cin>>b;
    cout<<"Enter the Marks of Subject 3 : ";
    cin>>c;
    res=AvgPerc(&a,&b,&c,&tot);
    return 0;
}