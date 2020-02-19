#include<iostream>
using namespace std;
class Person
{
private:
    char name[20];
    int age;
    double marks;
    double percentage;
public:
    void input();
    double Calcperc();
    void output();
};
void Person:: input()
{
    cout<<"Enter the name of the person";
    gets(name);
    cout<<"Enter the age of the person";
    cin>>age;
    cout<<"Enter the marks of the person";
    cin>>marks;
}
double Person::Calcperc()
{
    percentage=marks/5;
    return percentage;
    
}
void Person::output()
{
    cout<<"The Name of the person is :"<<name<<"\n";
    cout<<"The age of the person is :"<<age<<"\n";
    cout<<"The marks of the person is :"<<marks<<"\n";
    cout<<"The Percentage of the person is :"<<Calcperc()<<"\n";
}
int main()
{
   Person P;
   P.input();
   P.output();
   return 0;
}