/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{ 
public:
  string longestCommonPrefix(vector<string> &strs)
  {
    if (!strs.size())
      return "";
    string pre = strs[0];
    for (int i = 1; i < strs.size(); i++)
    {
      while (strs[i].find(pre) != 0)
      {
        pre = pre.substr(0, pre.size() - 1);
        if (pre.size() == 0)
          return "";
      }
    }
    return pre;
  }
};
// @lc code=end
