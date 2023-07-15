#include <bits/stdc++.h>
using namespace std;
class linkedList
{
  struct node
  {
    int item;
    node *next;
  };
  node *first;
  node *last;
  int size;

public:
  linkedList()
  {
    first = last = NULL;
    size = 0;
  }
  bool isEmpty()
  {
    return size == 0;
  }
  void insertFirst(int element)
  {
    node *newNode = new node;
    newNode->item = element;
    if (size == 0)
    {
      first = last = newNode;
      newNode->next = NULL;
    }
    else
    {
      newNode->next = first;
      first = newNode;
    }
    size++;
  }
  void insertLast(int element)
  {
    node *newNode = new node;
    newNode->item = element;
    if (size == 0)
    {
      first = last = newNode;
      newNode->next = NULL;
    }
    else
    {
      last->next = newNode;
      newNode->next = NULL;
      last = newNode;
    }
    size++;
  }
  void insertAtPos(int pos, int element)
  {
    if (pos < 0 || pos > size)
    {
      cout << "Out Of Range!!";
    }
    else if (pos == 0)
    {
      insertFirst(element);
    }
    else if (pos == size)
    {
      insertLast(element);
    }
    else
    {
      node *newNode = new node, *cur = first;
      newNode->item = element;
      for (int i = 1; i < pos; i++)
        cur = cur->next;
      newNode->next = cur->next;
      cur->next = newNode;
      size++;
    }
  }
  void print()
  {
    node *cur = first;
    while (cur != NULL)
    {
      cout << cur->item << " ";
      cur = cur->next;
    }
  }
};
int main()
{
  linkedList l;
  l.insertFirst(1);
  l.insertFirst(2);
  l.insertFirst(3);
  l.insertLast(4);
  l.insertLast(5);
  l.insertAtPos(2, 6);
  l.print();
  return 0;
}