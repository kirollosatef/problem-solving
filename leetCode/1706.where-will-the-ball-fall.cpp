/*
 * @lc app=leetcode id=1706 lang=cpp
 *
 * [1706] Where Will the Ball Fall
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> findBall(vector<vector<int>> &grid)
  {
    vector<int> result(grid[0].size(), 0);
    for (int i = 0; i < grid[0].size(); i++)
    {
      result[i] = solve(0, i, grid);
    }
    return result;
  }
  int solve(int row, int col, vector<vector<int>> &grid)
  {
    if (row == grid.size())
      return col;
    int nxtCol = col + grid[row][col];
    if (nxtCol < 0 || nxtCol > grid[0].size() - 1 ||
        grid[row][col] != grid[row][nxtCol])
    {
      return -1;
    }
    return solve(row + 1, nxtCol, grid);
  }
};
// @lc code=end
