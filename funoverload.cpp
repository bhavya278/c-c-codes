#include<iostream>
#include<math.h>
using namespace std;
double Simple(double,double,double);
double Compound(double,double,double);
int main()
{
    int ch2;
    char ch1;
    cout<<"Welcome To Interest Calculator :"<<endl;
    cout<<"S. Simple Interest "<<endl;
    cout<<"C. Compound Interest "<<endl;
    cout<<"Which Type Of Interst You Want ? : ";
    cin>>ch1;
    if(ch1='S'||ch1=='s')
    {
    cout<<"1. Only Principle is provided by the user "<<endl;
    cout<<"2. Only Rate Of Interest Is Provided by the user "<<endl;
    cout<<"3. Only Time isprovided by the user "<<endl;
    cout<<"4. Principle and Rate Of Interest  are provided by user "<<endl;
    cout<<"5. Rate Of Interest  and Time are provided by the user "<<endl;
    cout<<"6. Time and Principle are provided by the user "<<endl;
    cout<<"7. All Details are provided by the user "<<endl;
    cout<<"8. No Detail is provided by the user "<<endl;
    cout<<"Enter Your Choice : ";
    cin>>ch2;
    switch(ch2)
    {
        case 1: double P;
                cout<<"Enter the Principle Amount :";
                cin>>P;
                Simple(P,0.05,2);
                break;
        case 2: double R;
                cout<<"Enter the Rate Of Interest";
                cin>>R;
                Simple(100,R,2);
                break;
        case 3: double T;
                cout<<"Enter the Time :";
                cin>>T;
                Simple(100,0.05,T);
                break;
        case 4: cout<<"Enter the Principle Amount :";
                cin>>P;
                cout<<"Enter the Rate Of Interest";
                cin>>R;
                Simple(P,R,2);
                break;
        case 5: cout<<"Enter the Rate Of Interest";
                cin>>R;
                cout<<"Enter the Time :";
                cin>>T;
                Simple(100,R,T);
                break;
        case 6: cout<<"Enter the Principle Amount :";
                cin>>P;
                cout<<"Enter the Time :";
                cin>>T;
                Simple(P,0.05,T);
                break;
        case 7: cout<<"Enter the Principle Amount :";
                cin>>P;
                cout<<"Enter the Rate Of Interest";
                cin>>R;
                cout<<"Enter the Time :";
                cin>>T;Simple(P,R,T);
                break;
        case 8: Simple(100,0.05,2);
                break;
    }
    }
    else if(ch1=='C'||ch1=='c')
    {
    cout<<"1. Only Principle is provided by the user "<<endl;
    cout<<"2. Only Rate Of Interest Is Provided by the user "<<endl;
    cout<<"3. Only Time isprovided by the user "<<endl;
    cout<<"4. Principle and Rate Of Interest  are provided by user "<<endl;
    cout<<"5. Rate Of Interest  and Time are provided by the user "<<endl;
    cout<<"6. Time and Principle are provided by the user "<<endl;
    cout<<"7. All Details are provided by the user "<<endl;
    cout<<"8. No Detail is provided by the user "<<endl;
    cout<<"Enter Your Choice : ";
    cin>>ch2;
    switch(ch2)
    {
        case 1: double P;
                cout<<"Enter the Principle Amount :";
                cin>>P;
                Compound(P,0.05,2);
                break;
        case 2: double R;
                cout<<"Enter the Rate Of Interest";
                cin>>R;
                Compound(100,R,2);
                break;
        case 3: double T;
                cout<<"Enter the Time :";
                cin>>T;
                Compound(100,0.05,T);
                break;
        case 4: cout<<"Enter the Principle Amount :";
                cin>>P;
                cout<<"Enter the Rate Of Interest";
                cin>>R;
                Compound(P,R,2);
                break;
        case 5: cout<<"Enter the Rate Of Interest";
                cin>>R;
                cout<<"Enter the Time :";
                cin>>T;
                Compound(100,R,T);
                break;
        case 6: cout<<"Enter the Principle Amount :";
                cin>>P;
                cout<<"Enter the Time :";
                cin>>T;
                Compound(P,0.05,T);
                break;
        case 7: cout<<"Enter the Principle Amount :";
                cin>>P;
                cout<<"Enter the Rate Of Interest";
                cin>>R;
                cout<<"Enter the Time :";
                cin>>T;
                Compound(P,R,T);
                break;
        case 8: Compound(100,0.05,2);
                break;
    } 
    }
    else
    {
       cout<<"SORRY We Can't Process on your query !!!";
    }
    
    return 0;
}
double Compound(double P,double R,double T)
{
    double ci;
    ci=P+(pow(1+(R/100),T));
    cout<<"The Final Amount Is :"<<P+ci;
}
double Simple(double P,double R,double T)
{
    double si;
    si=(P*R*T)/100;
    cout<<"The Final Amount Is :"<<P+si;
    return 0;
}