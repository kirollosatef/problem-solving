/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    vector<int> ans(nums.size());
    int s = 0, k = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] != val)
      {
        ans[k] = nums[i];
        s++;
        k++;
      }
    }
    nums = ans;
    return s;
  }
};
// @lc code=end
