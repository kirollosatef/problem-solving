/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class MyQueue {
public:
    stack<int> s1;
    stack<int> s2;
    MyQueue() {
      
    }
    
    void push(int x) {
      while (!s1.empty())
      {
        s2.push(s1.top());
        s1.pop();
      }
      s1.push(x);
      while (!s2.empty())
      {
        s1.push(s2.top());
        s2.pop();
      }
    }
    
    int pop() {
      int x = s1.top();
      s1.pop();
      return x;
    }
    
    int peek() {
      return s1.top();
    }
    
    bool empty() {
      return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
