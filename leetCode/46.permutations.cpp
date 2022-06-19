/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */
// Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<vector<int>> permute(vector<int> &nums)
  {
    vector<vector<int>> res;
    vector<int> prefix;
    permuteRec(nums, prefix, res);
    return res;
  }
  void permuteRec(vector<int> &nums, vector<int> &prefix, vector<vector<int>> &res)
  {
    if (prefix.size() == nums.size())
    {
      res.push_back(prefix);
      return;
    }
    vector<int> tmp = nums;
    for (int i = 0; i < nums.size(); i++)
    {
      if (tmp[i] == -20)
        continue;
      prefix.push_back(tmp[i]);
      tmp[i] = -20;
      permuteRec(tmp, prefix, res);
      tmp[i] = prefix.back();
      prefix.pop_back();
    }
  }
};
// @lc code=end
