/*
 * @lc app=leetcode id=392 lang=cpp
 *
 * [392] Is Subsequence
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isSubsequence(string s, string t)
  {
    int cnt = 0, k = 0;
    for (int i = 0; i < t.size(); i++)
      if (t[i] == s[k])
        k++, cnt++;
    return cnt == s.size();
  }
};
// @lc code=end
