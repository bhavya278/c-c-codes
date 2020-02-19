#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float bmi,h,w;
    cout<<"Enter the Height (in Meters) : ";
    cin>>h;
    cout<<"Enter the Weight (in Kilograms) : ";
    cin>>w;
    bmi=w/pow(h,2);
    if(bmi<15)
    cout<<"Starvation !!!";
    if(bmi>=15.1&&bmi<=17.5)
    cout<<"Anorexic !!!";
    if(bmi>=17.6&&bmi<=18.5)
    cout<<"Underweight !!!";
    if(bmi>=18.6&&bmi<=24.9)
    cout<<"Obese !!!";
    if(bmi>=40)
    cout<<"Morbidly Obese";
    return 0;
}