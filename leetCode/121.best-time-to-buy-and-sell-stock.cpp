/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int mn = INT_MAX, mx = INT_MIN;
    for (auto p : prices)
    {
      mx = max(mx, (p - mn));
      mn = min(mn, p);
    }
    if (mx < 0)
      return 0;
    return mx;
  }
};
// @lc code=end
