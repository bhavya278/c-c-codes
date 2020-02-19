#include<iostream>
using namespace std;
int main()
{
    int a;
    char ch;
    cout<<"Enter the Character : ";
    cin>>ch;
    a=(int)ch;
    if(a>=65&&a<=90)
    cout<<"It is an Uppercase Letter !!!";
    else if(a>=97&&a<=122)
    cout<<"It is a Lowercase Letter !!!";
    else if(a>=48&&a<=57)
    cout<<"It is a Digit !!!";
    else
    cout<<"It is a Symbol !!!";
    return 0;
}