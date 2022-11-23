/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isPalindrome(string s)
  {
    string s1 = "";
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] >= 'a' && s[i] <= 'z')
        s1 += s[i];
      else if (s[i] >= 'A' && s[i] <= 'Z')
        s1 += s[i] + 32;
    }
    
  }
};
// @lc code=end
