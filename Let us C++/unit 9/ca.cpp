#include<iostream>
using namespace std;
double SumAvg(double *i,double *j,double *k,double *l,double *m )
{
    double sum = *i+*j+*k+*l+*m;
    double avg=sum/5;
    cout<<"The Sum of the values : "<<sum<<endl;
    cout<<"The Average of the values : "<<avg;
    return 0;
}
int main()
{
    double a,b,c,d,e,res;
    cout<<"Enter the 5 Values : ";
    cin>>a>>b>>c>>d>>e;
    res=SumAvg(&a,&b,&c,&d,&e);
    return 0;
}