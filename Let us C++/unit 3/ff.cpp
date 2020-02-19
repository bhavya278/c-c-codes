#include<iostream>
using namespace std;
int main()
{
    int r,s,a;
    cout<<"Enter the age of Ram : ";
    cin>>r;
    cout<<"Enter the age of Shyam : ";
    cin>>s;
    cout<<"Enter the age of Ajay : ";
    cin>>a;
    if(a<r)
    {
        if(a<s)
        {
            cout<<"Ajay is the Youngest Boy !!! ";
        }
        else
        {
              cout<<"Shyam is the Youngest Boy !!! ";
        }
    }
    else if(r<a)
        {
            if(s>r)
            {
            cout<<"Ram is the Youngest Boy !!! ";
            }
            else
            {
                cout<<"Shyam is the Youngest Boy !!! ";
            }
            
        }
        else
        {
            cout<<"Shyam is the Youngest Boy !!!";
        }
        
    return 0;
}