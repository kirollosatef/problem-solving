/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */
#include <bits/stdc++.h>
// #define pb push_back
// #define v(x) vector<x>
// #define sz(v) (int)(v).size()
// #define all(str) str.begin(), str.end()
#define o_a                     \
  ios_base::sync_with_stdio(0); \
  cin.tie(0);
using namespace std;
// typedef long long ll;
// @lc code=start
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int target)
  {
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
      if (m.find(nums[i]) != m.end())
      {
        return {m[nums[i]], i};
      }
      m[target - nums[i]] = i;
    }
    return {};
  }
};
// @lc code=end
