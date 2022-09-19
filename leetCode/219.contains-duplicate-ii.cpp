/*
 * @lc app=leetcode id=219 lang=cpp
 *
 * [219] Contains Duplicate II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k)
  {
    int n = nums.size();
    unordered_map<int, int> uni;
    for (int i = 0; i < n; i++)
    {
      if (uni.find(nums[i]) != uni.end())
        if (abs(i - uni[nums[i]]) <= k)
          return 1;
        else
          uni[nums[i]] = i;
      else
        uni[nums[i]] = i;
    }
    return 0;
  }
};
// @lc code=end
