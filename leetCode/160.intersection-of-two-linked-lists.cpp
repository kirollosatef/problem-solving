/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
 */
#include <bits/stdc++.h>
using namespace std;
struct ListNode
{
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};
// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
  {
    ListNode *ptr1 = headA;
    ListNode *ptr2 = headB;
    while (ptr1 && ptr2)
    {
      ptr1 = ptr1->next;
      ptr2 = ptr2->next;
    }
    while (ptr1)
    {
      ptr1 = ptr1->next;
      headA = headA->next;
    }
    while (ptr2)
    {
      ptr2 = ptr2->next;
      headB = headB->next;
    }
    while (headA != headB)
    {
      headA = headA->next;
      headB = headB->next;
    }
    return headA;
  }
};
// @lc code=end
