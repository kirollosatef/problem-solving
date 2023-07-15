/*
 * @lc app=leetcode id=1523 lang=cpp
 *
 * [1523] Count Odd Numbers in an Interval Range
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int countOdds(int low, int high)
  {
    int odd = 0;
    for (int i = low; i <= high; i++)
    {
      if (i % 2 != 0)
        odd++;
    }
    return odd;
  }
};
// @lc code=end
