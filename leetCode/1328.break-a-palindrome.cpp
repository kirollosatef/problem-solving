/*
 * @lc app=leetcode id=1328 lang=cpp
 *
 * [1328] Break a Palindrome
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string breakPalindrome(string palindrome)
  {
    if (palindrome.size() == 1)
      return "";
    for (int i = 0; i < palindrome.size() / 2; i++)
    {
      if (palindrome[i] != 'a')
      {
        palindrome[i] = 'a';
        return palindrome;
      }
    }
    palindrome[palindrome.size() - 1] = 'b';
    return palindrome;
  }
};
// @lc code=end
