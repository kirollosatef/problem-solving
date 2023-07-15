/*
 * @lc app=leetcode id=1302 lang=cpp
 *
 * [1302] Deepest Leaves Sum
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start

// Definition for a binary tree node.

class Solution
{
  struct TreeNode
  {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

public:
  int deepestLeavesSum(TreeNode *root)
  {
    int ans = 0;
    int max_depth = 0;
    int depth = 0;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
      int size = q.size();
      depth++;
      for (int i = 0; i < size; i++)
      {
        TreeNode *cur = q.front();
        q.pop();
        if (cur->left)
          q.push(cur->left);
        if (cur->right)
          q.push(cur->right);
      }
      if (q.empty())
      {
        if (depth > max_depth)
        {
          max_depth = depth;
          ans = 0;
        }
        if (depth == max_depth)
          ans += root->val;
      }
    }
    return ans;
  }
};
// @lc code=end
