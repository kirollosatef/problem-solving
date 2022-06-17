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
    vector<int> prifix;
    permuteRec(nums, prifix, res);
    return res;
  }
  void permuteRec(vector<int> &nums, vector<int> &prifix, vector<vector<int>> &res)
  {
    if (prifix.size() == nums.size())
    {
      res.push_back(prifix);
      return;
    }
    vector<int> tmp = nums;
    for (int i = 0; i < nums.size(); i++)
    {
      if (tmp[i] == -20)
        continue;
      prifix.push_back(tmp[i]);
      tmp[i] = -20;
      permuteRec(tmp, prifix, res);
      tmp[i] = prifix.back();
      prifix.pop_back();
    }
  }
};
// @lc code=end
