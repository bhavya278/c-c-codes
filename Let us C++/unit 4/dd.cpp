#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int x,y,z;
  cout<<"Enter the 1st side of the Traingle : ";
  cin>>x;
  cout<<"Enter the 2nd side of the Traingle : ";
  cin>>y;
  cout<<"Enter the 3rd side of the Traingle : ";
  cin>>z;
  if(x==y==z)
  cout<<"Traingle is Equiateral !!!";
  if(x==y||y==z||z==x)
  cout<<"Traingle is Isoceles !!!";
  if(pow(x,2)+pow(y,2)==pow(z,2)||pow(x,2)+pow(z,2)==pow(y,2)||pow(y,2)+pow(z,2)==pow(x,2))
  cout<<"Traingle is Right Angled !!!";
  return 0;
}