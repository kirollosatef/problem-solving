/*
 * @lc app=leetcode id=443 lang=cpp
 *
 * [443] String Compression
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int compress(vector<char> &ch)
  {
    int n = ch.size();
    int i = 0, j = 0;
    while (i < n)
    {
      int cnt = 0;
      char c = ch[i];
      while (i < n && ch[i] == c)
      {
        i++;
        cnt++;
      }
      ch[j++] = c;
      if (cnt > 1)
      {
        string s = to_string(cnt);
        for (char c : s)
          ch[j++] = c;
      }
    }
    return j;
  }
};
// @lc code=end
