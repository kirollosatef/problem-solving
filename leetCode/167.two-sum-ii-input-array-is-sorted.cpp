/*
 * @lc app=leetcode id=167 lang=cpp
 *
 * [167] Two Sum II - Input Array Is Sorted
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> twoSum(vector<int> &nums, int t)
  {
    vector<int> ans;
    int n = nums.size();
    int l = 0, r = n - 1;
    while (l < r)
    {
      int sum = nums[l] + nums[r];
      if (sum == t)
      {
        ans.push_back(++l);
        ans.push_back(++r);
        break;
      }
      else if (sum > t)
        r--;
      else
        l++;
    }
    return ans;
  }
};
// @lc code=end
