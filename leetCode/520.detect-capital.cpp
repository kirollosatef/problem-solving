/*
 * @lc app=leetcode id=520 lang=cpp
 *
 * [520] Detect Capital
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool detectCapitalUse(string word)
  {
    int n = word.size();
    int c = 0, C = 0;
    for (int i = 0; i < n; i++)
      (word[i] >= 'a' && word[i] <= 'z') ? c++ : C++;
    if (c == n || C == n)
      return 1;
    else if (C == 1 && word[0] >= 'A' && word[0] <= 'Z')
      return 1;
    else
      return 0;
  }
};
// @lc code=end
