/*
 * @lc app=leetcode id=342 lang=cpp
 *
 * [342] Power of Four
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isPowerOfFour(int n)
  {
    if (n == 0)
      return 0;
    while (1)
    {
      if (n == 1 || n == 4)
        return 1;
      if (n % 4 != 0)
        return 0;
      n = n / 4;
    }
    return 0;
  }
};
// @lc code=end
