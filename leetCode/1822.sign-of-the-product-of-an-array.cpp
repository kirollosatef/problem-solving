/*
 * @lc app=leetcode id=1822 lang=cpp
 *
 * [1822] Sign of the Product of an Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int arraySign(vector<int> &nums)
  {
    int z = 0, n = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] == 0)
        z++;
      else if (nums[i] < 0)
        n++;
    }
    if (z > 0)
      return 0;
    if (n % 2 == 1)
      return -1;
    return 1;
  }
};
// @lc code=end
