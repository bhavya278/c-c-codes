#include<iostream>
using namespace std;
void Pascal(int);
int main()
{
	int n;
	cout<<"Enter the value upto which you want to display the traingle  ";
	cin>>n;
	cout<<"Your Pascal Traingle is Ready !!!!! "<<endl;
	Pascal(n);
	return 0;
	
}
void Pascal(int n)
{

	for(int i=1;i<=n;i++)
	{
		int c=1;
		for(int j=1;j<=i;j++)
		{
		cout<<c<<" ";
		c=c*(i-j)/j;
	    }
	    cout<<"\n";
    }
}










