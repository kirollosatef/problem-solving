/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
 */

// @lc code=start
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
  bool isPalindrome(ListNode *head)
  {
    if (head == NULL)
      return 1;
    bool check(ListNode* head)
  }
};
// @lc code=end
