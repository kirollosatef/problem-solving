/*
 * @lc app=leetcode id=334 lang=cpp
 *
 * [334] Increasing Triplet Subsequence
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool increasingTriplet(vector<int> &nums)
  {
    int n = nums.size();
    if (n < 3)
      return false;
    int l = INT_MAX;
    int m = INT_MAX;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] > m)
        return true;
      else if (nums[i] > l && nums[i] < m)
        m = nums[i];
      else if (nums[i] < l)
        l = nums[i];
    }
    return false;
  }
};
// @lc code=end
