#include<iostream>
using namespace std;
int main()
{
    int ch;
    cout<<" 1. To test whether a character is SmallCase letter or not ";
    cout<<" 2. To test whether the character is UpperCase letter or not ";
    cout<<" 3. To test whether the character is alphabet or not ";
    cout<<" 4. To find the largest of two number ";
    cout<<"Enter your choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1 : char c;
                 cout<<"Enter the Letter : ";
                 cin>>c;
                 mac1(c);
                 break;
        case 2 : char c1;
                 cout<<"Enter the Letter : ";
                 cin>>c1;
                 mac2(c1);
                 break;
        case 3 : char c2;
                 cout<<"Enter the character : ";
                 cin>>c2;
                 mac3(c2);
                 break;
        case 4 : int x,y;
                 cout<<" Enter the numbers : ";
                 cin>>x>>y;
                 mac4(x,y);
                 break;
        default : cout<<"WONG INPUT !!!";
                  break; 
    }
int mac1(char ch)
{
    if(int(ch)>=97&&int(ch)<=122)
    {
    cout<<"It is a SmallCase letter !!!";
    return 1;
    }
    else
    {
    cout<<"It is not a Small case letter !!! " ;   
    return 0;
    }
}
int mac2(char ch)
{
    if(int(ch)>=65&&int(ch)<=97)
    {
    cout<<"It is an UpperCase letter !!!";
    return 1;
    }
    else
    {
    cout<<"It is not an UpperCase letter !!!";
    return 0;
    }
}
void mac3(char ch)
{
    int a=mac1(ch);
    int b=mac2(ch);
    if(a==1||b==1||a==0||b==0)
    cout<<"It is an Alphabet !!!";
    else
    cout<<"It is not an Alphabet !!!";
}
int mac4(int p,int q)
{
    if(p>q)
    cout<<" The "<<p<<" is geater than "<<q<<endl;
    else
    cout<<" The "<<q<<" is greater than "<<p<<endl;   
}
return 0;
}