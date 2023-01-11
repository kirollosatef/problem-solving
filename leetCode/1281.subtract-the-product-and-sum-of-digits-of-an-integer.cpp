/*
 * @lc app=leetcode id=1281 lang=cpp
 *
 * [1281] Subtract the Product and Sum of Digits of an Integer
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int subtractProductAndSum(int n)
  {
    int sum = 0, pro = 1;
    while (n > 0)
    {
      int tmp = n % 10;
      sum += tmp;
      pro *= tmp;
      n /= 10;
    }
    return pro - sum;
  }
};
// @lc code=end
