/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool containsDuplicate(vector<int> &nums)
  {
    map<int, bool> mp;
    for (auto n : nums)
    {
      if (mp[n] == 1)
        return 1;
      mp[n] = 1;
    }
    return false;
  }
};
// @lc code=end
