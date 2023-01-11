/*
 * @lc app=leetcode id=1678 lang=cpp
 *
 * [1678] Goal Parser Interpretation
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string interpret(string command)
  {
    string s = "";
    for (int i = 0; i < command.size(); i++)
    {
      if (command[i] == 'G')
        s += 'G';
      else if (command[i] == '(' && command[i + 1] == ')')
      {
        s += 'o';
        i++;
      }
      else
      {
        s += "al";
        i += 3;
      }
    }
    return s;
  }
};
// @lc code=end
