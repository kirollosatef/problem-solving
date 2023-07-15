/*
 * @lc app=leetcode id=58 lang=cpp
 *
 * [58] Length of Last Word
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
  int lengthOfLastWord(string s)
  {
    int i = 0, c = 0, l = 0;
    reverse(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] != ' ')
      {
        l = 1;
        c++;
      }
      else if (s[i] == ' ' && l == 1)
        break;
      else if (s[i] == ' ' && l == 0)
        continue;
    }
    return c;
  }
};
// @lc code=end
