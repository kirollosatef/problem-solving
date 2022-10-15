/*
 * @lc app=leetcode id=2095 lang=cpp
 *
 * [2095] Delete the Middle Node of a Linked List
 */
#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};
// @lc code=start
// Definition for singly-linked list.

class Solution
{
public:
  ListNode *deleteMiddle(ListNode *head)
  {
    if (head == nullptr)
      return nullptr;
    ListNode *p1 = head, *p2 = head;
    int count = 0;
    while (p1)
    {
      count++;
      p1 = p1->next;
    }
    int m = count / 2;
    for (int i = 0; i < m - 1; i++)
      p2 = p2->next;
    if (!p2->next->next)
      return head;
    p2->next = p2->next->next;
    return head;
  }
};
// @lc code=end
