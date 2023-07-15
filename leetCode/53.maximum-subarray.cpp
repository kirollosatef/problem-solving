/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {
    // kandane Algo..
    int max_so_far = INT_MIN, max_ending_here = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      max_ending_here = max(nums[i], max_ending_here + nums[i]);
      max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
  }
};
// @lc code=end
