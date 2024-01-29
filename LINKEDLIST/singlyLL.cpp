#include <bits/stdc++.h>
using namespace std;

class Node
{

public:
  int data;
  Node *next;

  Node(int data, Node *next)
  {
    this->data = data;
    this->next = next;
  }

  Node(int data)
  {
    this->data = data;
    this->next = nullptr;
  }
};

Node *createLLFromArray(vector<int> &arr)
{
  Node *head = new Node(arr[0]);
  Node *mover = head;

  for (int i = 1; i < arr.size(); i++)
  {
    Node *temp = new Node(arr[i]);
    mover->next = temp;
    mover = temp;
  }
  return head;
}

void traverse(Node *head)
{
  Node *temp = head;
  // temp = temp->next;
  while (temp)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int checkVal(Node *head, int val)
{
  Node *temp = head;

  while (temp)
  {
    if (temp->data == val)
    {
      return 1;
    }
    temp = temp->next;
  }
  return 0;
}

Node *deleteHead(Node *head)
{
  if (head == NULL)
    return head;

  Node *temp = head;
  head = head->next;
  delete temp;
  return head;
}

Node *deleteTail(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return NULL;
  }

  Node *temp = head;

  while (temp->next->next != NULL)
  {
    temp = temp->next;
  }

  free(temp->next);
  temp->next = nullptr;
  return head;
}

Node *deleteAnyByIndex(Node *head, int k)
{
  if (head == NULL)
  {
    return head;
  }
  if (k == 0)
  {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  Node *temp = head;
  Node *prev = NULL;
  int counter = 0;
  while (temp != NULL)
  {
    if (counter == k)
    {
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    counter++;
    prev = temp;
    temp = temp->next;
  }
  return head;
}

Node *deleteAnyByElement(Node *head, int ele)
{
  if (head == NULL)
  {
    return head;
  }
  if (head->data == ele)
  {
    Node *temp = head;
    head = head->next;
    free(temp);
    return head;
  }
  Node *temp = head;
  Node *prev = NULL;
  // int counter = 0;
  while (temp != NULL)
  {
    if (temp->data == ele)
    {
      prev->next = prev->next->next;
      free(temp);
      break;
    }
    // counter++;
    prev = temp;
    temp = temp->next;
  }
  return head;
}

Node *insertAtHead(Node *head, int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
  {
    head = newNode;
    return head;
  }
  newNode->next = head;
  head = newNode;
  return head;
}

Node *insertAtTail(Node *head, int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
  {
    head = newNode;
    return head;
  }
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = newNode;
  return head;
}

Node *insertByIndex(Node *head, int ind, int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
  {
    head = newNode;
    return head;
  }
  if (ind == 1)
  {
    newNode->next = head;
    head = newNode;
    return head;
  }

  Node *temp = head;
  int counter = 0;
  while (temp != NULL)
  {
    counter++;
    if (counter == ind - 1)
    {
      newNode->next = temp->next;
      temp->next = newNode;
      break;
    }

    temp = temp->next;
  }
  return head;
}

Node *insertBeforeElement(Node *head, int ele, int data)
{
  Node *newNode = new Node(data);
  if (head == NULL)
  {
    return NULL;
  }
  if (head->data == ele)
  {
    newNode->next = head;
    head = newNode;
    return head;
  }

  Node *temp = head;
  while (temp != NULL)
  {

    if (temp->next->data == ele)
    {
      newNode->next = temp->next;
      temp->next = newNode;
      break;
    }

    temp = temp->next;
  }
  return head;
}

int main()
{
  vector<int> arr = {12, 3, 4, 5, 6};
  Node *head = createLLFromArray(arr);
  traverse(head);
  // cout << checkVal(head, 8) << endl;
  // head = deleteHead(head);
  // head = deleteTail(head);
  // head = deleteAnyByIndex(head, 0);
  // head = deleteAnyByElement(head, 12);
  // head = insertAtHead(head, 15);
  // head = insertAtTail(head, 15);
  // head = insertByIndex(head, 6, 15);
  head = insertBeforeElement(head, 6, 15);
  traverse(head);
  return 0;
}