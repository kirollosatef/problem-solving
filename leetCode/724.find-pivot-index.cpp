/*
 * @lc app=leetcode id=724 lang=cpp
 *
 * [724] Find Pivot Index
 */
#include <bits/stdc++.h>
using namespace std;
using namespace std;
// @lc code=start
class Solution
{
public:
  int pivotIndex(vector<int> &nums)
  {
    int sum = 0;
    for (auto i : nums)
      sum += i;
    int suml = 0, sumr = sum;
    for (int i = 0; i < nums.size(); i++)
    {
      sumr -= nums[i];
      if (suml == sumr)
        return i;
      suml += nums[i];
    }
    return -1;
  }
};
// @lc code=end
