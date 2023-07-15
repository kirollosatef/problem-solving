/*
 * @lc app=leetcode id=1323 lang=cpp
 *
 * [1323] Maximum 69 Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int maximum69Number(int num)
  {
    ostringstream str1;
    str1 << num;
    string str = str1.str();
    for (int i = 0; i < str.size(); i++)
    {
      if (str[i] == '6')
      {
        str[i] = '9';
        break;
      }
    }
    return stoi(str);
  }
};
// @lc code=end
// brahiem
// iman
// tahon
// Amr hosam
// Ahmed hytham
// yousef tarik
