/*
 * @lc app=leetcode id=136 lang=cpp
 *
 * [136] Single Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int singleNumber(vector<int> &nums)
  {
    int prifx[30000] = {0};
    int mprifx[30000] = {0};
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] < 0)
        mprifx[-nums[i]]++;
      else
        prifx[nums[i]]++;
    }
    for (int i = 0; i < 30000; i++)
    {
      if (prifx[i] == 1)
        return i;
      if (mprifx[i] == 1)
        return -i;
    }
    return 0;
  }
};
// @lc code=end
