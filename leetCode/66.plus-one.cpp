/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> plusOne(vector<int> &digits)
  {
    vector<int> ans;
    int n = digits.size(), tmp = 0;
    tmp = (digits[n - 1] + 1) / 10;
    digits[n - 1] = (digits[n - 1] + 1) % 10;
    int dix = n - 2;
    if (tmp > 0)
    {
      while (dix >= 0)
      {
        int temp = tmp;
        tmp = (tmp + digits[dix]) / 10;
        digits[dix] = (temp + digits[dix]) % 10;
        dix--;
        if (tmp == 0)
          break;
      }
      if (tmp > 0)
      {
        ans.push_back(tmp);
      }
    }
    for (auto i : digits)
      ans.push_back(i);
    return ans;
  }
};
// @lc code=end
