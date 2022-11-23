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
    int l = nums[0], r = nums[0];
    for (int i = 0; i < n; i++)
    {
      if (nums[i + 1] == nums[i] + 1)
        r = nums[i + 1];
      else
      {
        if (l == r)
        {
          ans.push_back(to_string(l));
          r = l = nums[i + 1];
        }
        else
        {
          ans.push_back(to_string(l) + "->" + to_string(r));
          r = l = nums[i + 1];
        }
      }
    }
    return ans;
  }
};
// @lc code=end
