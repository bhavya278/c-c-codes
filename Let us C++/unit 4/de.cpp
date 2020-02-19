#include<iostream>
using namespace std;
int Max(int,int,int);
int main()
{
    int r,g,b,w,bl,mg,cy,y;
    cout<<"Enter the RGB scale value for Red : ";
    cin>>r; 
    cout<<"Enter the RGB scale value for Green : ";
    cin>>g; 
    cout<<"Enter the RGB scale value for Blue : ";
    cin>>b;
    w=Max(r/255,g/255,b/255);
    cy=((w-(r/255))/w);
    mg=((w-(g/255))/w);
    y=((w-(b/255))/w);
    bl=1-w;
    cout<<"The CMKY value for White "<<w<<endl;
    cout<<"The CMKY value for Cyan "<<cy<<endl;
    cout<<"The CMKY value for Magenta "<<mg<<endl;
    cout<<"The CMKY value for Black "<<bl<<endl;
    return 0; 
}
int Max(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
           return a;
        }
        else
        {
           return c;
        }
    }
    else if(b>c)
    {
        if(b>a)
        {
          return b;
        }
        else
        {
           return a;
        }
    }
    else
    {
       return c;
    }
}