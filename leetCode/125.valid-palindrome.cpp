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
    string str = "";
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] >= 'a' && s[i] <= 'z')
        str += s[i];
      if (s[i] >= 'A' && s[i] <= 'Z')
        str += tolower(s[i]);
      if (s[i] >= '0' && s[i] <= '9')
        str += s[i];
    }
    int n = str.size();
    int l = (n / 2) - 1, r = n / 2;
    for (int i = 0; i <= l; i++)
    {
      if (str[i] != str[n - i - 1])
        return false;
    }
    return true;
  }
};
// @lc code=end
