#include<iostream>
using namespace std;
int input();
int main()
{
	int i;
	int e= input();
	for(i=0;i<e;i++)
	cout<<"Yogesh Gaur\n";
	return 0;
}
int input()
{
	int x;
	cout<<"Enter the number of times you want to print your name";
	cin>>x;
	return x;
}
