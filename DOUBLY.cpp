#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
  int data;
  struct node *prev;
  struct node *next;
}*first,*last;
typedef struct node yoyo;
void CreateList(int n);
void InsertBegList(int data);
void InsertEndList(int data);
void InsertPosList(int data,int pos);
void DeleteBegList();
void DeleteEndList();
void DeletePosList(int pos);
void ReverseList();
void DisplayList();
int main()
{
 int n,ch2,data,pos;
 char ch1;
 first=0;
 last=0;
 cout<<"Enter The Number Of Nodes In List :";
 cin>>n;
 CreateList(n);
 cout<<"\nI/i : Insert Into The Existing Data \n";
 cout<<"\nD/d : Delete From The Existing Data \n";
 cout<<"\nR/r : Reverse The Existing Data \n";
 cout<<"\nWhat Change You Want In Your Existing Data :";
 cin>>ch1;
 if(ch1=='I'||ch1=='i')
 {
   cout<<"1 : Insert At Begning :\n";
   cout<<"2 : Insert At End :\n";
   cout<<"3 : Insert At Any Position You Enter :\n";
   cout<<"Enter Your Type Of Insertion : ";
   cin>>ch2;
   switch(ch2)
   {
     case 1 : cout<<"Enter the Data You Want To Enter : ";
	      cin>>data;
	      InsertBegList(data);
	      break;
     case 2 : cout<<"Enter the Data You Want To Enter : ";
	      cin>>data;
	      InsertEndList(data);
	      break;
     case 3 : cout<<"Enter the Positon Where You Want To Insert One Less Than Actual Postion : ";
	      cin>>pos;
	      cout<<"Enter the Data You Want To Enter : ";
	      cin>>data;
	      InsertPosList(data,pos);
	      break;
    default : cout<<"Wrong Input !!!!";
	      break;
    }
    DisplayList();
}
if(ch1=='D'||ch1=='d')
{
   cout<<"1 : Delete From Begning :\n";
   cout<<"2 : Delete From End :\n";
   cout<<"3 : Delete From Any Position One Less Than Actual Postion :\n";
   cout<<"Enter Your Type Of Insertion : ";
   cin>>ch2;
   switch(ch2)
   {
     case 1 : DeleteBegList();
	      break;

     case 2 : DeleteEndList();
	      break;

     case 3 : cout<<"Enter The Position You Want To Enter :";
	      cin>>pos;
	      DeletePosList(pos);
	      break;
   default :  cout<<"Wrong Input !!!!";
	      break;
   }
   DisplayList();
}
if(ch1=='R'||ch1=='r')
	 ReverseList();
return 0;
}
void CreateList(int n)
{
  int i,value;
  yoyo *NewNode;
  if(n>=1)
  {
    first=(yoyo*)malloc(sizeof(yoyo));
    if(first!=0)
    {
      cout<<"Enter The Data At Node 1 :";
      cin>>value;
      first->data=value;
      first->prev=0;
      first->next=0;

      last=first;

      for(i=2;i<=n;i++)
      {
	NewNode=(yoyo*)malloc(sizeof(yoyo));
	if(NewNode!=0)
	{
	 cout<<"Enter The Data At Node %d :"<<i;
	 cin>>value;
	 NewNode->data=value;
	 NewNode->prev=last;
	 NewNode->next=0;

	 last->next=NewNode;
	 last=NewNode;
	 }
	 else
	 {
	   cout<<"Unable To Allocate Memory !!!!";
	   break;
	 }
       }
       cout<<"The List Is Sucessfully Created !!!!";
    }
   else
    {
      cout<<"Unable To Allocate Memory !!!!";

    }
  }
}
void InsertBegList(int value)
{
   yoyo *NewNode;
   if(first==0)
     cout<<"List Is Empty !!!";
   else
   {
    NewNode=(yoyo*)malloc(sizeof(yoyo));
    NewNode->data=value;
    NewNode->prev=0;
    NewNode->next=first;

    first->prev=NewNode;

    first=NewNode;
    cout<<"The Node Is Inserted Sucessfully :";
    }
}
void InsertEndList(int value)
{
   yoyo *NewNode;
   if(first==0)
     cout<<"List Is Empty !!!";
   else
   {
    NewNode=(yoyo*)malloc(sizeof(yoyo));
    NewNode->data=value;
    NewNode->prev=last;
    NewNode->next=0;

    last->next=NewNode;

    last=NewNode;
    cout<<"The Node Is Inserted Sucessfully !!!!";
    }
}
void InsertPosList(int value,int pos)
{
  int i;
  yoyo *NewNode,*temp;
  if(first==0)
  cout<<"List Is Empty !!!!";
  else
  {
     temp=first;
     i=1;
     while(i<pos && temp!=0)
     {
       temp=temp->next;
       i++;
     }
     if(pos==1)
      InsertBegList(value);
     else if(temp==last)
      InsertEndList(value);
     else if(temp!=0)
     {
       NewNode=(yoyo*)malloc(sizeof(yoyo));
       NewNode->data=value;
       NewNode->prev=temp;
       NewNode->next=temp->next;
      if(temp->next!=0)
      {
	temp->next->prev=NewNode;
      }
      temp->next=NewNode;
      cout<<"The Node Is Inserted Sucessfully !!!!";
    }
    else
    {
     cout<<"Unable To Allocate Memory !!!";
    }
  }
}
void DeleteBegList()
{
  yoyo *ToDelete;
  if(first==0)
  {
    cout<<"Unable To Delete !!!";
  }
  else
  {
     ToDelete=first;
     first=first->next;
     if(first!=0)
       first->prev=0;
     free(ToDelete);
     cout<<"Data Is Sucessfully Deleted !!!";
  }
}
void DeleteEndList()
{
  yoyo *ToDelete;
  if(last==0)
  {
    cout<<"Unable To Delete !!!";
  }
  else
  {
     ToDelete=last;
     last=last->prev;
     if(first!=0)
       last->next=0;
     free(ToDelete);
     cout<<"Data Is Sucessfully Deleted !!!";
  }
}
void DeletePosList(int pos)
{
  yoyo *CurrNode;
  int i;
  CurrNode=first;
  for(i=1;i<pos && CurrNode!=0 ; i++)
    CurrNode=CurrNode->next;
  if(pos==1)
    DeleteBegList();
  else if(CurrNode==last)
    DeleteEndList();
  else if(CurrNode !=0)
  {
    CurrNode->prev->next=CurrNode->next;
    CurrNode->next->prev=CurrNode->prev;

    free(CurrNode);
    cout<<"Data Is Sucessfully Deleted !!!";
  }
  else
  {
    cout<<"Invalid Position !!!";
  }
}
void DisplayList()
{
   yoyo *temp;
   if(first==0)
   cout<<"List Is Empty :";
   else
   {
     temp=first;
     cout<<"The Final List Is :\n";
     while(temp!=0)
     {
       cout<<temp->data;
       temp=temp->next;
     }
  }
}
void ReverseList()
{
   yoyo *temp;
   if(last==0)
   cout<<"List Is Empty :";
   else
   {
     temp=last;
     cout<<"\nThe Reverse List Is :\n";
     while(temp!=0)
     {
       cout<<temp->data;
       temp=temp->prev;
     }
  }
}


