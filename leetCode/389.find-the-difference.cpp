/*
 * @lc app=leetcode id=389 lang=cpp
 *
 * [389] Find the Difference
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  char findTheDifference(string s, string t)
  {
    int arr1[26] = {0}, arr2[26] = {0};
    for (int i = 0; i < s.size(); i++)
      arr1[s[i] - 'a']++;
    for (int i = 0; i < t.size(); i++)
      arr2[t[i] - 'a']++;
    for (int i = 0; i < 26; i++)
      if (arr2[i] - arr1[i] == 1)
        return i + 'a';
    return ' ';
  }
};
// @lc code=end
