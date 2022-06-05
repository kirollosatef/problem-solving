/*
 * @lc app=leetcode id=867 lang=cpp
 *
 * [867] Transpose Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<vector<int>> transpose(vector<vector<int>> &matrix)
  {
    int x = matrix.size();
    int y = matrix[0].size();
    vector<vector<int>> res(y, vector<int>(x));
    for (int i = 0; i < y; i++)
    {
      for (int j = 0; j < x; j++)
      {
        res[i][j] = matrix[j][i];
      }
    }
    return res;
  }
};
// @lc code=end
