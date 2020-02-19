#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[75];
    ofstream yoyo;
    yoyo.open("test.txt");
    cout<<"Writting a text file"<<endl;
    cout<<"Enter your name :";
    gets(input);
    yoyo<<input<<endl;
    cout<<"Enter your age";
    cin>>input;
    cin.ignore();
    yoyo<<input<<endl;
    yoyo.close();
    ifstream popo;
    string stmt;
    popo.open("test.txt");
    cout<<"Reading the file :"<<endl;
    while(getline(popo,stmt))
    {
        cout<<stmt<<endl;
    }
    popo.close();
    return 0;
}