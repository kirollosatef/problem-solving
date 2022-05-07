/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isAnagram(string s, string t)
  {
    int arrs[26] = {0}, arrt[26] = {0};
    for (int i = 0; i < s.length(); i++)
      arrs[s[i] - 'a']++;
    for (int i = 0; i < t.length(); i++)
      arrt[t[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
      if (arrs[i] != arrt[i])
        return false;
    }
    return true;
  };
};
// @lc code=end
