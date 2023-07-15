/*
 * @lc app=leetcode id=944 lang=cpp
 *
 * [944] Delete Columns to Make Sorted
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int minDeletionSize(vector<string> &strs)
  {
    int sum = 0;
    for (int i = 0; i < strs[0].size(); i++)
    {
      for (int j = 0; j < strs.size() - 1; j++)
      {
        if (strs[j][i] > strs[j + 1][i])
        {
          sum++;
          break;
        }
      }
    }
    return sum;
  }
};
// @lc code=end
