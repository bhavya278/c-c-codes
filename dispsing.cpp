#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
 int data;
 struct node *ptr;
}*first;
typedef struct node yogi;
void createList(int n);
void DisplayList();
int main()
{ 
  int n;
  cout<<"Enter the number of nodes ";
  cin>>n;
  createList(n);
  cout<<"Data in the list is :\n";
  DisplayList();
}
void createList(int n)
{  yogi *newnode,*temp;
   int data,i;
   first=(yogi*)malloc(sizeof(yogi));
   if(first==0)
{
   cout<<"Unable to allocate memory ";
   exit(0);
}
cout<<"Enter the data of node 1 ";
cin>>data;
first->data=data;
first->ptr=0;
temp=first;
for(i=2;i<=n;i++)
{
 newnode=(yogi*)malloc(sizeof(yogi));
 if(newnode==0)
{
   cout<<"Unable to allocate memory ";
   break;
}
  cout<<"Enter the data of node "<<i;
  cin>>data;
  newnode->data=data;
  newnode->ptr=0;
  temp->ptr=newnode;
  temp=temp->ptr;
}
}
void DisplayList()
{
  yogi*temp;
  if(first==0)
  cout<<"The List Is Empty ";
temp=first;
while(temp!=0)
{
 cout<<temp->data;
 temp=temp->ptr;
}
}


