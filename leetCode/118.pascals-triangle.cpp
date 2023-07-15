/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<vector<int>> generate(int numRows)
  {
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++)
    {
      vector<int> tmp;
      for (int j = 0; j <= i; j++)
      {
        if (j == 0 || j == i)
          tmp.push_back(1);
        else
        {
          int t = ans[i - 1][j - 1] + ans[i - 1][j];
          tmp.push_back(t);
        }
      }
      ans.push_back(tmp);
    }
    return ans;
  }
};
// @lc code=end
