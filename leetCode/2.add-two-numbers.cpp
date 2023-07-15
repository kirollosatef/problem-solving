/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
 */

// @lc code=start
//  Definition for singly-linked list.
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
class Solution
{
public:
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
  {
    ListNode *head = new ListNode(0);
    ListNode *cur = head;
    int carry = 0;
    while (l1 != nullptr || l2 != nullptr)
    {
      int sum = carry;
      if (l1 != nullptr)
      {
        sum += l1->val;
        l1 = l1->next;
      }
      if (l2 != nullptr)
      {
        sum += l2->val;
        l2 = l2->next;
      }
      carry = sum / 10;
      cur->next = new ListNode(sum % 10);
      cur = cur->next;
    }
    if (carry > 0)
    {
      cur->next = new ListNode(carry);
    }
    return head->next;
  }
};
// @lc code=end
