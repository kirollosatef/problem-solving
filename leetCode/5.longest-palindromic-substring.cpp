/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isPal(string &str, int l, int r)
  {
    for (int i = l, j = r; i < j; i++, j--)
      if (str[i] != str[j])
        return false;
    return true;
  }
  string longestPalindrome(string s)
  {
    int n = s.size();
    int idx = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = i; j < n; j++)
      {
        if (isPal(s, i, j))
        {
          if (j - i + 1 > mx)
          {
            mx = j - i + 1;
            idx = i;
          }
        }
      }
    }
    return s.substr(idx, mx);
  }
};
// @lc code=end
