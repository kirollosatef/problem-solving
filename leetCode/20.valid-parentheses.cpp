/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isTow(char a, char b)
  {
    if (a == '[' && b == ']')
      return 1;
    else if (a == '(' && b == ')')
      return 1;
    else if (a == '{' && b == '}')
      return 1;
    return 0;
  }
  bool isValid(string s)
  {
    stack<char> arr;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == '[' || s[i] == '{' || s[i] == '(')
        arr.push(s[i]);
      else
      {
        if (arr.empty())
          return 0;
        if (!isTow(arr.top(), s[i]))
          return 0;
        arr.pop();
      }
    }
    return arr.empty();
  }
};
// @lc code=end
