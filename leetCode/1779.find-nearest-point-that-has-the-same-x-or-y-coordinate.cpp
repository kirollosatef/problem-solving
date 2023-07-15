/*
 * @lc app=leetcode id=1779 lang=cpp
 *
 * [1779] Find Nearest Point That Has the Same X or Y Coordinate
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int nearestValidPoint(int x, int y, vector<vector<int>> &points)
  {
    int minDist = INT_MAX, minIndex = -1;
    for (int i = 0; i < points.size(); i++)
    {
      if (points[i][0] == x || points[i][1] == y)
      {
        int dist = abs(points[i][0] - x) + abs(points[i][1] - y);
        if (dist < minDist)
        {
          minDist = dist;
          minIndex = i;
        }
      }
    }
    return minIndex;
  }
};
// @lc code=end
