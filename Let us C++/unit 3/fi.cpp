#include<iostream>
using namespace std;
int main()
{
    int l,b,ar,pr;
    cout<<"Enter the Length of the Rectangle :";
    cin>>l;
    cout<<"Enter the Bredth of the Rectangle :";
    cin>>b;
    ar=l*b;
    pr=2*(l+b);
    if(ar>pr)
    cout<<"Area is Greater than its Perimeter !!!";
    else
    cout<<"Area is Less than its Perimeter !!!";
}