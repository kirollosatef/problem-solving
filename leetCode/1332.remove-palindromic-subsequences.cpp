/*
 * @lc app=leetcode id=1332 lang=cpp
 *
 * [1332] Remove Palindromic Subsequences
 */
// You are given a string s consisting only of letters 'a' and 'b'. In a single step you can remove one palindromic subsequence from s.
// Return the minimum number of steps to make the given string empty.
// A string is a subsequence of a given string if it is generated by deleting some characters of a given string without changing its order. Note that a subsequence does not necessarily need to be contiguous.
// A string is called palindrome if is one that reads the same backward as well as forward.
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int removePalindromeSub(string s)
  {
    if (s.empty())
      return 0;
    int n = s.size();
    int i = 0, j = n - 1;
    while (i < j)
    {
      if (s[i] != s[j])
        return 2;
      i++;
      j--;
    }
    return s[i] == s[j] ? 1 : 0;
  }
};
// @lc code=end