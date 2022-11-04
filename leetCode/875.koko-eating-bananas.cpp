/*
 * @lc app=leetcode id=875 lang=cpp
 *
 * [875] Koko Eating Bananas
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int minEatingSpeed(vector<int> &piles, int h)
  {
    int l = 1, r = *max_element(piles.begin(), piles.end());
    while (l < r)
    {
      int mid = l + (r - l) / 2;
      int hours = 0;
      for (auto pile : piles)
        hours += (pile + mid - 1) / mid;
      if (hours > h)
        l = mid + 1;
      else
        r = mid;
    }
    return l;
  }
};
// @lc code=end
