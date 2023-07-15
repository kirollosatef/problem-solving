/*
 * @lc app=leetcode id=557 lang=cpp
 *
 * [557] Reverse Words in a String III
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string reverseWords(string s)
  {
    string sub = "", all = "";
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == ' ')
      {
        reverse(sub.begin(), sub.end());
        all += sub;
        all += " ";
        sub = "";
      }
      else
        sub += s[i];
    }
    reverse(sub.begin(), sub.end());
    all += sub;
    return all;
  }
};
// @lc code=end
