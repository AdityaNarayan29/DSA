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
  n->next = head;
  head = n;
}
void InsterAtTail(node *&head, int val)
{
  node *n = new node(val);

  if (head == NULL)
  {
    head = n;
    return;
  }

  node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = n;
}

void display(node *head)
{
  node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << "NULL" << endl;
}
bool search(node *head, int key)
{
  node *temp = head;
  while (temp != NULL)
  {
    if (temp->data == key)
    {
      return true;
    }
    temp = temp->next;
  }
  return false;
}
void deleteAtHead (node* &head){
  
  node* toDelete = head;
  head = head->next;
  
  delete toDelete;
}

void deletion (node* &head, int val){

  if (head==NULL)
  {
    return;
  }
  
  if (head->next==NULL)
  {
    deleteAtHead(head);
    return;
  }

  node* temp = head;
  while (temp->next->data!=val)
  {
    temp = temp->next;
  }
  node* toDelete = temp->next;
  temp->next = temp->next->next;
  
  delete toDelete;
}

int length(node *head){
  int l = 0;
  node* temp = head;
  while (temp!=NULL)
  {
    l++;
    temp = temp -> next;
  }
  return l;
}

node* kappend(node* &head, int k){
  node* newHead;
  node* newTail;
  node* tail = head;

  int l = length(head);
  k = k%l;
  int count = 1;
  while (tail->next != NULL)
  {
    if(count == l-k){
      newTail = tail;
    }
    if(count == l-k+1){
      newHead = tail;
    }
    tail = tail -> next;
    count++;
  }
  newTail->next = NULL;
  tail->next=head;

  return newHead;
}

int main()
{

  node *head = NULL;
  // InsterAtTail(head, 1);
  // InsterAtTail(head, 2);
  // InsterAtTail(head, 3);
  // display(head);
  // InsterAtHead(head, 4);
  // display(head);
  // cout << search(head, 5) << endl;
  // cout << search(head, 3) << endl;
  // deletion(head,3);
  // display(head);
  // deleteAtHead(head);
  // display(head);

  int arr[] = {1,2,3,4,5,6};
  for (int i = 0; i < 6; i++)
  {
    InsterAtTail(head,arr[i]);
  }
  display(head);
  node* newhead = kappend(head,3);// k = 3  
  display(newhead);
  
  return 0;
}