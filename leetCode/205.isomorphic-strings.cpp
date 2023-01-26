/*
 * @lc app=leetcode id=205 lang=cpp
 *
 * [205] Isomorphic Strings
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isIsomorphic(string s, string t)
  {
    if (s.size() != t.size())
      return false;
    map<char, char> mp;
    for (int i = 0; i < s.size(); i++)
    {
      if (mp.find(s[i]) == mp.end())
        mp[s[i]] = t[i];
      else
      {
        if (mp[s[i]] != t[i])
          return false;
      }
    }
    map<char, char> mp1;
    for (int i = 0; i < t.size(); i++)
    {
      if (mp1.find(t[i]) == mp1.end())
        mp1[t[i]] = s[i];
      else
      {
        if (mp1[t[i]] != s[i])
          return false;
      }
    }
    return true;
  }
};
// @lc code=end
