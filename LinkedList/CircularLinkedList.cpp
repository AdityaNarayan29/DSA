#include <iostream>
using namespace std;

class node
{
public:
  int data;
  node *next;

  node(int val)
  {
    data = val;
    next = NULL;
  }
};

void InsterAtHead(node *&head, int val)
{
  node *n = new node(val);

  if (head == NULL)
  {
    n->next = n;
    head = n;
    return;
  }
  node *temp = head;

  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = n;
  n->next = head;
  head = n;
}
void InsterAtTail(node *&head, int val)
{

  if (head == NULL)
  {
    InsterAtHead(head, val);
    return;
  }

  node *n = new node(val);
  node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  temp->next = n;
  n->next = head;
}

void deleteAtHead(node *&head)
{
  node *temp = head;
  while (temp->next != head)
  {
    temp = temp->next;
  }
  node* toDelete = head;
  temp->next = head->next;
  head = head->next;

  delete toDelete;
}

void deletion(node *&head, int pos)
{

  if (pos == 1)
  {
    deleteAtHead(head);
    return;
  }

  node *temp = head;
  int count = 1;

  while (count != pos - 1)
  {
    temp = temp->next;
    count++;
  }

  node *toDelete = temp->next;
  temp->next = temp->next->next;

  delete toDelete;
}

void display(node *head)
{
  node *temp = head;
  do
  {
    cout << temp->data << "->";
    temp = temp->next;
  } while (temp != head);
  cout << "NULL" << endl;
}

int main()
{

  node *head = NULL;
  InsterAtTail(head, 1);
  InsterAtTail(head, 2);
  InsterAtTail(head, 3);
  InsterAtTail(head, 4);
  display(head);
  InsterAtHead(head, 5);
  display(head);
  deletion(head,5);
  display(head);
  deletion(head,1);
  display(head);
  return 0;
}