/*
 * @lc app=leetcode id=880 lang=cpp
 *
 * [880] Decoded String at Index
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
// class Solution
// {
// public:
//   string decodeAtIndex(string s, int k)
//   {
//     string res = "";
//     for (long long i = 0; i < s.size(); i++)
//     {
//       if (s[i] >= 'a' and s[i] <= 'z')
//         res += s[i];
//       else
//       {
//         long long r = s[i] - '0' - 1;
//         string subres = res;
//         while (r > 0)
//         {
//           if (res.size() >= k)
//             return string(1, res[k - 1]);
//           res += subres;
//           r--;
//         }
//       }
//     }
//     return string(1, res[k - 1]);
//   }
// };
class Solution
{
public:
  string decodeAtIndex(string s, int k)
  {
    long long decodedLength = 0;

    for (char c : s)
    {
      if (isdigit(c))
      {
        int digit = c - '0';
        decodedLength *= digit;
      }
      else
      {
        decodedLength++;
      }
    }

    for (int i = s.length() - 1; i >= 0; i--)
    {
      char c = s[i];
      if (isdigit(c))
      {
        int digit = c - '0';
        decodedLength /= digit;
        k %= decodedLength;
      }
      else
      {
        if (k == 0 || k == decodedLength)
        {
          return string(1, c);
        }
        decodedLength--;
      }
    }

    return "";
  }
};

// @lc code=end
