/*
 * @lc app=leetcode id=228 lang=cpp
 *
 * [228] Summary Ranges
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<string> summaryRanges(vector<int> &nums)
  {
    vector<string> ans;
    int n = nums.size();
    if (n == 0)
      return ans;
    int a = nums[0];
    for (int i = 0; i < n; i++)
    {
      if (nums[i + 1] != nums[i] + 1 || i == n - 1)
      {
        if (nums[i] != a)
          ans.push_back(to_string(a) + "->" + to_string(nums[i]));
        else
          ans.push_back(to_string(a));
        if (i != n - 1)
          a = nums[i + 1];
      }
    }
    return ans;
  }
};
// @lc code=end
