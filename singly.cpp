#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
  int data;
  struct node *ptr;
} * first;
typedef struct node yogi;
void CreateList(int n);
void InsertBegList(int data);
void InsertEndList(int data);
void InsertPosList(int data, int pos);
void DeleteBegList();
void DeleteEndList();
void DeletePosList(int pos);
void ReverseList();
void DisplayList();
int main()
{
  int n, data, pos, ch2;
  char ch1;
  cout << "Enter the number of nodes :";
  scanf("%d", &n);
  CreateList(n);
  cout << "I/i : Insert Any Data \n";
  cout << "D/d : Delete Any Data \n";
  cout << "R/r : Reverse The Data Sequence \n";
  cout << "What Change You Want in This Data ?? ";
  cin >> ch1;
  if (ch1 == 'i' || ch1 == 'I')
  {
    cout << "1 : At Begning Of List \n";
    cout << "2 : At End Of List \n";
    cout << "3 : According To My Demand \n";
    cout << "Where You Want Insert Your Data ?? ";
    cin >> ch2;
    switch (ch2)
    {
    case 1:
      cout << "Enter The Data You Want To Insert :";
      cin >> data;
      InsertBegList(data);
      break;

    case 2:
      cout << "Enter The Data You Want To Insert :";
      cin >> data;
      InsertEndList(data);
      break;

    case 3:
      cout << "Enter The Position Where You Want To Insert :";
      cin >> pos;
      cout << "Enter The Data You Want To Insert :";
      cin >> data;
      InsertPosList(data, pos);
      break;

    default:
      cout << "Sorry ,Wrong Input !!!!";
      break;
    }
  }
  else if (ch1 == 'D' || ch1 == 'd')
  {
    cout << "1 : At Begning Of List \n";
    cout << "2 : At End Of List \n";
    cout << "3 : According To My Demand \n";
    cout << "From Where You Want To Delete Your Data ?? : ";
    cin >> ch2;
    switch (ch2)
    {
    case 1:
      DeleteBegList();
      break;

    case 2:
      DeleteEndList();
      break;

    case 3:
      cout << "Enter The Position Where You Want To Delete :";
      cin >> pos;
      DeletePosList(pos);
      break;

    default:
      cout << "Sorry ,Wrong Input !!!!";
      break;
    }
  }
  else if (ch1 == 'R' || ch1 == 'r')
    ReverseList();

  else
  {
    cout << "Sorry ,Wrong Input !!!!";
  }
  cout << "\nThe Final List is :\n";
  DisplayList();
  return 0;
}
void CreateList(int n) //Creation Of Linked List
{
  yogi *NewNode, *temp;
  int data, i;
  first = (yogi *)malloc(sizeof(yogi));
  if (n == 0)
  {
    cout << "You Are Unable To Insert !!";
    exit(0);
  }
  else
  {
    cout << "Enter The Data Of Node 1 :";
    cin >> data;
    first->data = data;
    first->ptr = 0;
    temp = first;
    for (i = 2; i <= n; i++)
    {
      NewNode = (yogi *)malloc(sizeof(yogi));
      if (NewNode == 0)
        cout << "You Are Unable To Insert !!";
      else
      {
        cout << "Enter The Data At Node  :" << i;
        cin >> data;
        NewNode->data = data;
        NewNode->ptr = 0;
        temp->ptr = NewNode;
        temp = temp->ptr;
      }
    }
    cout << "List Created Sucessfully!!\n";
  }
}
void InsertBegList(int data) //Insertion At Begning
{
  yogi *NewNode;
  NewNode = (yogi *)malloc(sizeof(yogi));
  if (NewNode == 0)
    cout << "Unable To Insert New Node";
  else
  {
    NewNode->data = data;
    NewNode->ptr = first;
    first = NewNode;
  }
  cout << "The Data Is Inserted At Begining Sucessfully :";
}
void InsertEndList(int data) //Insertion At End
{
  yogi *temp, *NewNode;
  NewNode = (yogi *)malloc(sizeof(yogi));
  if (NewNode == 0)
    cout << "Unable To Insert !!!";
  else
  {
    NewNode->data = data;
    NewNode->ptr = 0;
    temp = first;
    while (temp->ptr != 0)
      temp = temp->ptr;
    temp->ptr = NewNode;
    cout << "Data Is Inserted Sucessfully At End Of List !!!";
  }
}
void InsertPosList(int value, int pos) //Insertion At Specific Position
{
  int j;
  yogi *temp, *NewNode;
  NewNode = (yogi *)malloc(sizeof(yogi));
  if (NewNode == 0)
  {
    cout << "Unable To Allocate Memory :";
  }
  else
  {
    NewNode->data = value;
    NewNode->ptr = 0;

    temp = first;
    for (j = 2; j <= pos - 1; j++)
    {
      temp = temp->ptr;
      if (temp == 0)
        break;
    }
    if (temp != 0)
    {
      NewNode->ptr = temp->ptr;
      temp->ptr = NewNode;
      cout << "Data Is Inserted Sucessfully :";
    }
    else
    {
      cout << "Data Is Not Inserted Sucessfully !!!! ";
    }
  }
}
void DeleteBegList() //Deletion At Begning
{
  yogi *ToDelete;
  if (ToDelete == 0)
  {
    cout << "No Element Is Found For Deletion !!!!! ";
  }
  else
  {
    ToDelete = first;
    first = first->ptr;
    cout << "Deleted Sucessfully !!!!!:";
    free(ToDelete);
  }
}
void DeleteEndList() //Deletion At End
{
  yogi *ToDelete, *SecondLast;
  ToDelete = first;
  SecondLast = first;
  while (ToDelete->ptr != 0)
  {
    SecondLast = ToDelete;
    ToDelete = ToDelete->ptr;
  }
  if (ToDelete == first)
  {
    first = 0;
  }
  else
  {
    SecondLast->ptr = 0;
  }
  free(ToDelete);
  cout << "Deleted Sucessfully !!!!!:\n";
}
void DeletePosList(int pos) //Deletion At Specific Position
{
  int j;
  yogi *ToDelete, *PrevNode;
  if (first == 0)
  {
    cout << "Node Cannot Be Deleted !!!!\n";
  }
  else
  {
    ToDelete = first;
    PrevNode = first;
    for (j = 2; j <= pos; j++)
    {
      PrevNode = ToDelete;
      ToDelete = ToDelete->ptr;

      if (ToDelete == 0)
        break;
    }
    if (ToDelete != 0)
    {
      if (ToDelete == first)
        first = first->ptr;
      PrevNode->ptr = ToDelete->ptr;
      ToDelete->ptr = 0;
      free(ToDelete);
      cout << "Deleted Sucessfully !!!!";
    }
    else
    {
      cout << "Invalid Position Unable To Delete :";
    }
  }
}
void ReverseList()
{
  yogi *PrevNode, *CurrNode;
  if (first != 0)
  {
    PrevNode = first;
    CurrNode = first->ptr;
    first = first->ptr;

    PrevNode->ptr = 0;
    while (first != 0)
    {
      first = first->ptr;
      CurrNode->ptr = PrevNode;

      PrevNode = CurrNode;
      CurrNode = first;
    }
    first = PrevNode;
    cout << "Sucessfully Reversed !!!!";
  }
}
void DisplayList()
{
  yogi *temp;
  if (first == 0)
    cout << "No node is there : ";
  else
  {
    temp = first;
    while (temp != 0)
    {
      cout << temp->data;
      temp = temp->ptr;
    }
  }
}
