/*
 * @lc app=leetcode id=13 lang=cpp
 *
 * [13] Roman to Integer
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int romanToInt(string s)
  {
    int count = 0;
    char rom[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int nrom[7] = {1, 5, 10, 50, 100, 500, 1000};
    for (int i = 0; i < size(s); i++)
    {
      if (i + 1 < size(s) && s[i] == 'I' && s[i + 1] == 'V')
      {
        count += 4;
        i++;
      }
      else if (i + 1 < size(s) && s[i] == 'I' && s[i + 1] == 'X')
      {
        count += 9;
        i++;
      }
      else if (i + 1 < size(s) && s[i] == 'X' && s[i + 1] == 'L')
      {
        count += 40;
        i++;
      }
      else if (i + 1 < size(s) && s[i] == 'X' && s[i + 1] == 'C')
      {
        count += 90;
        i++;
      }
      else if (i + 1 < size(s) && s[i] == 'C' && s[i + 1] == 'D')
      {
        count += 400;
        i++;
      }
      else if (i + 1 < size(s) && s[i] == 'C' && s[i + 1] == 'M')
      {
        count += 900;
        i++;
      }
      else
      {
        for (int j = 0; j < 7; j++)
        {
          if (s[i] == rom[j])
          {
            count += nrom[j];
            break;
          }
        }
      }
    }
    return count;
  }
};
// @lc code=end
