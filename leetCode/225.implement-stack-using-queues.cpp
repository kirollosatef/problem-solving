/*
 * @lc app=leetcode id=225 lang=cpp
 *
 * [225] Implement Stack using Queues
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MyStack
{
  int head;

public:
  int arr[1000];
  MyStack()
  {
    head = -1;
  }

  void push(int x)
  {
    if (head >= 999)
      return;
    else
    {
      head++;
      arr[head] = x;
    }
  }

  int pop()
  {
    if (head < 0)
      return -1;
    else
    {
      int x = arr[head];
      head--;
      return x;
    }
  }

  int top()
  {
    if (head < 0)
      return -1;
    else
      return arr[head];
  }

  bool empty()
  {
    return head < 0;
  }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
