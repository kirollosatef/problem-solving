/*
 * @lc app=leetcode id=733 lang=cpp
 *
 * [733] Flood Fill
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  void dfs(vector<vector<int>> &image, int sr, int sc, int color, int newColor)
  {
    if (sr < 0 || sr >= image.size() || sc < 0 || sc >= image[0].size() || image[sr][sc] != color)
      return;
    image[sr][sc] = newColor;
    dfs(image, sr + 1, sc, color, newColor);
    dfs(image, sr - 1, sc, color, newColor);
    dfs(image, sr, sc + 1, color, newColor);
    dfs(image, sr, sc - 1, color, newColor);
  }
  vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
  {
    if (image[sr][sc] == color)
      return image;
    dfs(image, sr, sc, image[sr][sc], color);
    return image;
  }
};
// @lc code=end
