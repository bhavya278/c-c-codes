#include<iostream>
using namespace std;
class infoStudent
{
    char name[20];
    int age;
    float marks;
public:
void getVal()
{
cout<<"Enter the name of student!!!";
for(int i=0;i<20;i++)
cin>>name[i];
cout<<"Enter the Age of Student !!! ";
cin>>age;
cout<<"Enter the Marks Obtained by student !!!";
cin>>marks;
}
float calcPerc()
{
    int totMak;
    cout<<"Enter the Marks Obtained by student !!!";
    cin>>marks;
    cout<<"Enter the Total marks";
    cin>>totMak;
    float perc=(marks/totMak)*100;
    return perc;
}
void putVal()
{
cout<<"Enter the name of student!!!";
for(int i=0;i<20;i++)
cout<<name[i];
cout<<"The Age of Student !!! "<<age;
cout<<"The Marks Obtained by student !!!"<<marks;
cout<<"The overall percentage of student is !!!"<<calcPerc();
}
};
int main()
{
infoStudent s;
// enter the content
s.getVal();
// give the percentage 
s.calcPerc();
// display the content
s.putVal();
}