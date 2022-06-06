#include <bits/stdc++.h>
using namespace std;
template <class t>
class Stack
{
private:
  struct node
  {
    t data;
    node *next;
  };
  node *top, *cur;

public:
  Stack()
  {
    top = NULL;
    cur = NULL;
  }
  void push(t newItem)
  {
    node *newItemPtr = new node;
    if (newItemPtr == NULL)
      cout << "Stack push cannot allocate memory";
    else
    {
      newItemPtr->data = newItem;
      newItemPtr->next = top;
      top = newItemPtr;
    }
  }
  bool isEmpty()
  {
    return top == NULL;
  }
  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack empty to pop();";
    }
    else
    {
      node *temp = top;
      top = top->next;
      temp = temp->next = NULL;
      delete temp;
    }
  }
  void pop(t &stackTop)
  {
    if (isEmpty())
    {
      cout << "Stack empty to pop();";
    }
    else
    {
      stackTop = top->data;
      node *temp = top;
      top = top->next;
      temp = temp->next = NULL;
      delete temp;
    }
  }
  void getTop(t &stackTop)
  {
    if (isEmpty())
    {
      cout << "Stack empty to getTop();";
    }
    else
    {
      stackTop = top->data;
    }
  }
  void display()
  {
    cur = top;
    cout << "\nitems in stack : ";
    while (cur != NULL)
    {
      cout << cur->data << ", ";
      cur = cur->next; 
    }
  }
};
int main()
{
  Stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);
  s.display();
  int stackTop;
  s.getTop(stackTop);
  cout << "\nstackTop = " << stackTop;
  s.pop();
  s.display();
  int stackTop1;
  s.getTop(stackTop1);
  cout << "\nstackTop = " << stackTop1;
  s.pop();
  s.display();
  s.pop();
  s.display();
  return 0;
}