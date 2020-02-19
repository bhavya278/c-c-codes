#include <iostream>
#include"fun.h"
using namespace std;
int main()
{
   double rad,a,b,c,s,t,u;
   int ch;
   cout<<" 1. Area of Circle !!! "<<endl;
   cout<<" 2. Perimeter of Circle !!! "<<endl;
   cout<<" 3. Area of Square !!! "<<endl;
   cout<<" 3. Perimeter of Square !!! "<<endl;
   cout<<" 4. Area of traingle !!! "<<endl;
   cout<<" 5. Perimeter of Traingle !!! "<<endl;
   cout<<" Enter your choice : ";
   cin>>ch;
   switch(ch)
   {
         case 1 : {
                  cout<<"Enter the Radius of Circle : ";
                  cin>>rad;
                  double d = AreaC(rad);
                  cout<<"Area of circle is : "<<d;
                  break;
                  }
         case 2 : {
                  cout<<"Enter the Radius of Circle : ";
                  cin>>rad;
                  double e = PeriC(rad);
                  cout<<"Perimeter of circle is : "<<e;
                  break;
                  }
         case 3 : {
                  cout<<"Enter the Side of Square : ";
                  cin>>a;
                  double f = AreaS(a);
                  cout<<"Area of Square is : "<<f;
                  break;
                  }
         case 4 : {
                  cout<<"Enter the Side of Square : ";
                  cin>>b;
                  double g = AreaS(b);
                  cout<<"Perimeter of Square is : "<<g;
                  break;
                  }
         case 5 : {
                  cout<<"Enter the Base and Height of Traingle : ";
                  cin>>t>>u;
                  double h = AreaT(t,u);
                  cout<<"Area of Traingle : "<<h;
                  break;
                  }
         case 6 : {
                  cout<<"Enter the sides of the Traingle : ";
                  cin>>s>>t>>u;
                  double i = PeriT(s,t,u);
                  cout<<"Perimeter of the Triangle is : "<<i;
                  break;
                  }
        default : {
                  cout<<"Wrong Input !!!";
                  break;
                  }
   }
}

