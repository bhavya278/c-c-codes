#include<iostream>
using namespace std;
int main()
{
    int cp,sp,res;
    cout<<"Enter the Cost Price of the item :";
    cin>>cp;
    cout<<"Enter the Selling Price of the item :";
    cin>>sp;
    if(sp>cp)
    cout<<"Hurray I got Profit of :"<<sp-cp;
    else
    cout<<"Oh I got Loss of :"<<cp-sp;
    return 0;
}