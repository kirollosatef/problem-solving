/*
 * @lc app=leetcode id=844 lang=cpp
 *
 * [844] Backspace String Compare
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool backspaceCompare(string s, string t)
  {
    int ok = 0;
    while (!ok && s.length() > 0)
    {
      for (int i = 0; i < s.length(); i++)
      {
        if (s[i] == '#' && i > 0)
        {
          s.erase(i - 1, 2);
          break;
        }
        else if (s[i] == '#')
          s.erase(i, 1);
      }
      for (int i = 0; i < s.length(); i++)
      {
        if (s[i] == '#')
        {
          ok = 0;
          break;
        }
        ok = 1;
      }
    }
    ok = 0;
    while (!ok && t.length() > 0)
    {
      for (int i = 0; i < t.length(); i++)
      {
        if (t[i] == '#' && i > 0)
        {
          t.erase(i - 1, 2);
          break;
        }
        else if (t[i] == '#')
          t.erase(i, 1);
      }
      for (int i = 0; i < t.length(); i++)
      {
        if (t[i] == '#')
        {
          ok = 0;
          break;
        }
        ok = 1;
      }
    }
    if (s == t)
      return true;
    else
      return false;
  }
};
// @lc code=end

// bool backspaceCompare(string s, string t)
// {
//   int ok = 0;
//   while (!ok && s.length() > 0)
//   {
//     for (int i = 0; i < s.length(); i++)
//       if (s[i] == '#')
//         s.erase(i - 1, 2);
//     for (int i = 0; i < s.length(); i++)
//     {
//       if (s[i] == '#')
//       {
//         ok = 0;
//         break;
//       }
//       ok = 1;
//     }
//   }
//   ok = 0;
//   while (!ok && t.length() > 0)
//   {
//     for (int i = 0; i < t.length(); i++)
//       if (t[i] == '#')
//         t.erase(i - 1, 2);
//     for (int i = 0; i < t.length(); i++)
//     {
//       if (t[i] == '#')
//       {
//         ok = 0;
//         break;
//       }
//       ok = 1;
//     }
//   }
//   if (s == t)
//     return true;
//   else
//     return false;
// }

// public:
// bool backspaceCompare(string s, string t)
// {
//   int i = s.length() - 1, j = t.length() - 1;
//   while (i >= 0 || j >= 0)
//   {
//     while (i >= 0)
//     {
//       if (s[i] == '#')
//       {
//         i--;
//         continue;
//       }
//       break;
//     }
//     while (j >= 0)
//     {
//       if (t[j] == '#')
//       {
//         j--;
//         continue;
//       }
//       break;
//     }
//     if (i >= 0 && j >= 0 && s[i] != t[j])
//       return false;
//     if (i >= 0)
//       i--;
//     if (j >= 0)
//       j--;
//   }
//   return true;
// };