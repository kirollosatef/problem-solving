/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int strStr(string haystack, string needle)
  {
    if (needle.size() == 0)
      return 0;
    if (haystack == needle)
      return 0;
    for (int i = 0; i < haystack.size(); i++)
    {
      if (haystack[i] == needle[0])
      {
        string str = haystack.substr(i, needle.size());
        if (str == needle)
          return i;
      }
    }
    return -1;
  }
};
// @lc code=end
