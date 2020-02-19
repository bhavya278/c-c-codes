#include<iostream>
using namespace std;
int main()
{
    int f1=0,f2=0,f3=0,c,t,h;
    cout<<"Enter the Hardness of Steel : ";
    cin>>h;
    cout<<"Enter the Carbon Content of Steel : ";
    cin>>c;
    cout<<"Enter the Tensile Strength of Steel : ";
    cin>>t;
    if(h>50)
    f1=1;
    else
    f1=0;
    if(c>.7)
    f2=1;
    else
    f2=0;
    if(t>5600)
    f3=1;
    else
    f3=0;
    if(f1==1&&f2==1&&f3==1)
    cout<<"It is a Grade 10 Steel !!!";
    if(f1==1&&f2==1&&f3==0)
    cout<<"It is a grade 9 Steel !!!";
    if(f2==1&&f3==1&&f1==0)
    cout<<"It is a Grade 8 Steel !!!";
    if(f1==1&&f3==1&&f2==0)
    cout<<"It is a Grade 7 Steel !!!";
    if(f1==1||f2==1||f3==1)
    cout<<"It is a Grade 6 Steel !!!";
    else
    cout<<"It is a Grade 5 Steel !!!";
    return 0;
}