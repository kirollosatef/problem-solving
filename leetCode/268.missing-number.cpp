/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int missingNumber(vector<int> &nums)
  {
    unordered_map<int, bool> mp;
    for (int i : nums)
    {
      mp[i] = 1;
    }
    int ans;
    for (int i = 0; i <= nums.size(); i++)
    {
      if (mp[i] != 1)
      {
        ans = i ;
        break;
      }
    }
    return ans;
  }
};
// @lc code=end
