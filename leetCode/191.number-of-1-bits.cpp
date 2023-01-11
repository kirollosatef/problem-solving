/*
 * @lc app=leetcode id=191 lang=cpp
 *
 * [191] Number of 1 Bits
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int hammingWeight(uint32_t n)
  {
    int ans = 0;
    for (uint32_t i = 0; i <= 32; i++)
    {
      if (n & 1)
        ans++;
      n = n >> 1;
    }
    return ans;
  }
};
// @lc code=end
