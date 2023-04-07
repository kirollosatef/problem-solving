/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int majorityElement(vector<int> &nums)
  {
    unordered_map<int, int> mp;
    int mx = 0, ans;
    for (int i : nums)
    {
      mp[i]++;
      if (mp[i] > mx)
      {
        mx = mp[i];
        ans = i;
      }
    }
    return ans;
  }
};
// @lc code=end
