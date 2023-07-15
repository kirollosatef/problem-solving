/*
 * @lc app=leetcode id=55 lang=cpp
 *
 * [55] Jump Game
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool canJump(vector<int> &nums)
  {
    int n = nums.size();
    int last = n - 1;
    for (int i = n - 2; i >= 0; i--)
    {
      if (i + nums[i] >= last)
        last = i;
    }
    return last == 0;
  }
};
// @lc code=end
