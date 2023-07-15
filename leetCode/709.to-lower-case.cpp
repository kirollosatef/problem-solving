/*
 * @lc app=leetcode id=709 lang=cpp
 *
 * [709] To Lower Case
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string toLowerCase(string s)
  {
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] >= 'A' && s[i] <= 'Z')
        s[i] = tolower(s[i]);
    }
    return s;
  }
};
// @lc code=end
