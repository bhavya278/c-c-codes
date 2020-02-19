#include<iostream>
using namespace std;
int main()
{
    int num,fact=1,i=1;
    cout<<"Enter the number : ";
    cin>>num;
    do
    {
      fact*=i;
      i++;
    }while(i<=num);
    cout<<fact;
}