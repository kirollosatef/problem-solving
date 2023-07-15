/*
 * @lc app=leetcode id=695 lang=cpp
 *
 * [695] Max Area of Island
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  void DFS(vector<vector<int>> &grid, int i, int j, int &cnt)
  {
    if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == 0)
      return;
    grid[i][j] = 0;
    cnt++;
    DFS(grid, i + 1, j, cnt);
    DFS(grid, i - 1, j, cnt);
    DFS(grid, i, j + 1, cnt);
    DFS(grid, i, j - 1, cnt);
  }
  int maxAreaOfIsland(vector<vector<int>> &grid)
  {
    int mx = 0;
    for (int i = 0; i < grid.size(); i++)
    {
      for (int j = 0; j < grid[0].size(); j++)
      {
        if (grid[i][j] == 1)
        {
          int cnt = 0;
          DFS(grid, i, j, cnt);
          mx = max(mx, cnt);
        }
      }
    }
    return mx;
  }
};
// @lc code=end
