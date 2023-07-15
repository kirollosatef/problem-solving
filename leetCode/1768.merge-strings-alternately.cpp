/*
 * @lc app=leetcode id=1768 lang=cpp
 *
 * [1768] Merge Strings Alternately
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string mergeAlternately(string word1, string word2)
  {
    string s = "";
    int n = min(word1.size(), word2.size());
    for (int i = 0; i < n; i++)
    {
      s += word1[i];
      s += word2[i];
    }
    if (word1.size() > n)
      s += word1.substr(n);
    else if (word2.size() > n)
      s += word2.substr(n);
    return s;
  }
};
// @lc code=end
