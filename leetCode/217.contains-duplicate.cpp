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
    unordered_set<int> unique;
    for (auto n : nums)
    {
      if (unique.find(n) != unique.end())
        return true;
      unique.insert(n);
    }
    return false;
  }
};
// @lc code=end
