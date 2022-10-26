/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int climbStairs(int n)
  {
    if (n <= 2)
      return n;
    int a = 1, b = 2, ans = 0;
    for (int i = 3; i <= n; i++)
    {
      ans = a + b;
      a = b;
      b = ans;
    }
    return ans;
  }
};
// @lc code=end
