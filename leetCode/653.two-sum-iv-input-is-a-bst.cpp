/*
 * @lc app=leetcode id=653 lang=cpp
 *
 * [653] Two Sum IV - Input is a BST
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
// Definition for a binary tree node.
struct TreeNode
{
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
  set<int> s;
  bool dfs(TreeNode *root, int k)
  {
    if (!root)
      return false;
    if (s.find(k - root->val) != s.end())
      return true;
    s.insert(root->val);
    return dfs(root->left, k) || dfs(root->right, k);
  }
  bool findTarget(TreeNode *root, int k)
  {
    return dfs(root, k);
  }
};
// @lc code=end
/* vector<int> v;
// in traversal order
void inOrder(TreeNode *root)
{
  if (!root)
    return;
  inOrder(root->left);
  v.push_back(root->val);
  inOrder(root->right);
}
bool findTarget(TreeNode *root, int k)
{
  inOrder(root);
  int l = 0, r = v.size() - 1;
  // applay 2 sum on a simple vector
  while (l < r)
  {
    if (v[l] + v[r] == k)
      return true;
    else if (v[l] + v[r] < k)
      l++;
    else
      r--;
  }
  return false;
} */
