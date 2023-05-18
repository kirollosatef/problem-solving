/*
 * @lc app=leetcode id=171 lang=cpp
 *
 * [171] Excel Sheet Column Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int titleToNumber(string s)
  {
    int ans = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
      ans += (s[i] - 'A' + 1) * ((26 * (n - i - 1)) > 0 ? (26 * (n - i - 1)) : 1);
    }
    return ans;
  }
};
// @lc code=end
