#include<iostream>
using namespace std;
class constructor
{
   int j;
   public :
   int input(int j)
   {
      cout<<"The value given to the computer to process :"<<j;
   }
   constructor()
   {
        int i=0;
        cout<<"The final value is :"<<i;
   }
};
int main()
{
    int n;
    constructor c;
    cout<<"Enter the value given to the computer to process :";
    cin>>n;
    c.input(n);
    constructor();
    return 0;
}