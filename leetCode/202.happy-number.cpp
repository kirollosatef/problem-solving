/*
 * @lc app=leetcode id=202 lang=cpp
 *
 * [202] Happy Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int pro(int n)
  {
    int sum = 0;
    while (n > 0)
    {
      sum += pow(n % 10, 2);
      n /= 10;
    }
    return sum;
  }
  bool isHappy(int n)
  {
    while (true)
    {
      if (pro(n) == 1)
        return 1;
      else if (pro(n) == 145 || pro(n) == 4)
        return 0;
      n = pro(n);
    }
    return 1;
  }
};
// @lc code=end
