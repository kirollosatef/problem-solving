/*
 * @lc app=leetcode id=953 lang=cpp
 *
 * [953] Verifying an Alien Dictionary
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isAlienSorted(vector<string> &words, string order)
  {
    char t[26];
    for (int i = 0; i < 26; i++)
      t[order[i] - 'a'] = i + 'a';
    for (int i = 0; i < words.size(); i++)
    {
      for (int j = 0; j < words[i].size(); j++)
        words[i][j] = t[words[i][j] - 'a'];
    }
    return is_sorted(words.begin(), words.end());
  };
};
// @lc code=end
