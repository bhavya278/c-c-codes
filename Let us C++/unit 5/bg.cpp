#include<iostream>
using namespace std;
int main()
{  char ch;
   long int num,n=0,p=0,z=0;
   do
   {
     cout<<"Enter the Number : ";
     cin>>num;
     if(num>0)
     p++;
     if(num<0)
     n++;
     if(num==0)
     z++;
     cout<<"Want To Continue ?? (Y/N)";
     cin>>ch;
   }while(ch=='Y'||ch=='y');
   cout<<"Total Positive Numbers : "<<p<<endl;
   cout<<"Total Negetive Numbers : "<<n<<endl;
   cout<<"Total Zeroes : "<<z;
   return 0;
}