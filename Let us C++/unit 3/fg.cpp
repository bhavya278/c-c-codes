#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3;
    cout<<"Enter the 1st angle of the Traingle ";
    cin>>a1;
     cout<<"Enter the 2nd angle of the Traingle ";
    cin>>a2; 
    cout<<"Enter the 3rd angle of the Traingle ";
    cin>>a3;
    if(a1+a2+a3==180)
    cout<<"It is a Valid Traingle !!! ";
    else
    {
        cout<<"It is an Invalid Traingle !!!";
    }
    return 0;
}