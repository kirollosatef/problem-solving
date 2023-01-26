/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int maximumWealth(vector<vector<int>> &accounts)
  {
    int mx = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
      int sum = 0;
      for (int j = 0; j < accounts[i].size(); j++)
      {
        sum += accounts[i][j];
      }
      mx = max(mx, sum);
    }
    return mx;
  }
};
// @lc code=end
