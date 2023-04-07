/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Find the Index of the First Occurrence in a String
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int strStr(string str, string s)
  {
    int idx = 0, x = 0, y = 0;
    while (idx < str.size())
    {
      x = idx;
      y = 0;
      while (str[x] == s[y])
      {
        x++;
        y++;
        if (y == s.size())
          return idx;
      }
      idx++;
    }
    return -1;
  }
};
// @lc code=end
