#include<iostream>
using namespace std;
int main()
{
    int stick=21,u,c;
    cout<<"Do not enter any number greater than 4 : "<<endl;
    while(stick>1)
    {
        cout<<"Enter Your Choice : ";
        cin>>u;
        if((u>0)&&(u<5))
        {
            stick-=u;
            cout<<"Matchstick Left : "<<stick<<endl;
        }
        else
        {
           cout<<"You Enterd a Wrong Choice !!!";
           break;
        }
        c=5-u;
        stick-=c;
        cout<<"Matchstick picked by Computer "<<c<<endl;
    }

    cout<<"Computer Wins !!!";
}