/*
 * @lc app=leetcode id=1011 lang=cpp
 *
 * [1011] Capacity To Ship Packages Within D Days
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int shipWithinDays(vector<int> &weights, int days)
  {
    int mn = 0, mx = 0;
    for (int i : weights)
    {
      mn = max(mn, i);
      mx += i;
    }
    int mid, ans = mx;
    while (mn <= mx)
    {
      mid = (mn + mx) / 2;
      if (check(weights, days, mid))
      {
        ans = mid;
        mx = mid - 1;
      }
      else
        mn = mid + 1;
    }
    return ans;
  };
  bool check(vector<int> w, int d, int c)
  {
    int req = 1;
    int cur = 0;
    for (int i : w)
    {
      if (cur + i > c)
      {
        cur = 0;
        req++;
      }
      cur += i;
    }
    if (req > d)
      return false;
    return true;
  };
};
// @lc code=end
