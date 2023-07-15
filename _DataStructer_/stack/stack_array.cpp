#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
//stack with array
template <class T>
class Stack
{
private:
  int top;
  T item[MAX_SIZE];

public:
  Stack() : top(-1) {}
  void push(T element)
  {
    if (top == MAX_SIZE - 1)
    {
      cout << "Stack is full" << endl;
    }
    else
    {
      top++;
      item[top] = element
    }
  }
  bool isEmpty()
  {
    return top < 0;
  }
  void pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
    }
    else
    {
      top--;
    }
  }
  void pop(T &element)
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
    }
    else
    {
      element = item[top];
      top--;
    }
  }
  void getTop(T &element)
  {
    if (isEmpty())
    {
      cout << "Stack is empty" << endl;
    }
    else
    {
      element = item[top];
    }
  }
  void print()
  {
    for (int i = top; i >= 0; i--)
    {
      cout << "|" << item[i];
    }
    cout << "]";
  }
};
int main()
{
  Stack<int> stack;
  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);
  stack.push(5);
  stack.push(6);
  stack.push(7);
  stack.push(8);
  stack.push(9);
  stack.push(10);
  stack.push(11);
  stack.pop();
  stack.print();
  int x;
  stack.getTop(x);
  cout << "\nelement in top: " << x;
}