/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  void rotate(vector<int> &nums, int k)
  {
    if (k > nums.size())
      k %= nums.size();
    std::rotate(nums.begin(), nums.begin() + nums.size() - k, nums.end());
  }
};
// @lc code=end
