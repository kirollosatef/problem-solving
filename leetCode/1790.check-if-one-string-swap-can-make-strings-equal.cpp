/*
 * @lc app=leetcode id=1790 lang=cpp
 *
 * [1790] Check if One String Swap Can Make Strings Equal
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool areAlmostEqual(string s1, string s2)
  {
    if (s1.size() != s2.size())
      return 0;
    int arr1[26] = {0}, arr2[26] = {0}, def = 0;
    for (int i = 0; i < s1.size(); i++)
    {
      if (s1[i] != s2[i])
        def++;
      arr1[s1[i] - 'a']++;
      arr2[s2[i] - 'a']++;
    }
    if (def > 2)
      return 0;
    for (int i = 0; i < 26; i++)
      if (arr1[i] != arr2[i])
        return 0;
    return 1;
  }
};
// @lc code=end
