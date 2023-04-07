/*
 * @lc app=leetcode id=108 lang=cpp
 *
 * [108] Convert Sorted Array to Binary Search Tree
 */

// @lc code=start

// struct TreeNode
// {
//   int val;
//   TreeNode *left;
//   TreeNode *right;
//   TreeNode() : val(0), left(nullptr), right(nullptr) {}
//   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  TreeNode *sortedArrayToBST(vector<int> &nums)
  {
    if (nums.empty())
      return nullptr;
    return createBST(nums, 0, nums.size() - 1);
  }
  TreeNode *createBST(vector<int> nums, int str, int end)
  {
    if (str > end)
      return NULL;
    int mid = (str + end) / 2;
    TreeNode *root = new TreeNode(nums[mid]);
    root->left = createBST(nums, str, mid - 1);
    root->right = createBST(nums, mid + 1, end);
    return root;
  }
};
// @lc code=end
