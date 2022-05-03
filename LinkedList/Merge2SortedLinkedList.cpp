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
void deleteAtHead(node *&head)
{

  node *toDelete = head;
  head = head->next;

  delete toDelete;
}

void deletion(node *&head, int val)
{

  if (head == NULL)
  {
    return;
  }

  if (head->next == NULL)
  {
    deleteAtHead(head);
    return;
  }

  node *temp = head;
  while (temp->next->data != val)
  {
    temp = temp->next;
  }
  node *toDelete = temp->next;
  temp->next = temp->next->next;

  delete toDelete;
}

//Method 1 iterative
node *merge(node *&head1, node *&head2)
{
  node *p1 = head1;
  node *p2 = head2;
  node *dummyNode = new node(-1);
  node *p3 = dummyNode;

  while (p1 != NULL && p2 != NULL)
  {
    if (p1->data < p2->data)
    {
      p3->next = p1;
      p1 = p1->next;
    }
    else
    {
      p3->next = p2;
      p2 = p2->next;
    }
    p3 = p3->next;
  }

  while (p1!=NULL)
  {
    p3->next = p1;
    p1 = p1->next;
    p3 = p3->next;
  }
  while (p2!=NULL)
  {
    p3->next = p1;
    p2 = p2->next;
    p3 = p3->next;
  }
  return dummyNode->next;
}

//Method 2 recursive
node* mergeRecursive(node* &head1, node* &head2){

  if (head1 == NULL)
  {
    return head2;
  }
  if (head2 == NULL)
  {
    return head1;
  }
  

  node* result;
  if(head1->data<head2->data){
    result = head1;
    result->next=mergeRecursive(head1->next,head2);
  }
  else{
    result = head2;
    result->next=mergeRecursive(head1,head2->next);
  }
return result;
}
int main()
{

  node *head1 = NULL;
  node *head2 = NULL;
  int arr1[] = {1,4,5,7};
  int arr2[] = {2,3,6};
  for (int i = 0; i < 4; i++)
  {
    InsterAtTail(head1,arr1[i]);
  }
  for (int i = 0; i < 3; i++)
  {
    InsterAtTail(head2,arr2[i]);
  }
  
  display(head1);
  display(head2);
  //iterative call
  // node* newhead = merge(head1,head2);

  //recursive call
  node* newhead = mergeRecursive(head1,head2);
  display(newhead);
  return 0;
}