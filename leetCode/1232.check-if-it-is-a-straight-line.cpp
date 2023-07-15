/*
 * @lc app=leetcode id=1232 lang=cpp
 *
 * [1232] Check If It Is a Straight Line
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool checkStraightLine(vector<vector<int>> &c)
  {
    int x1 = c[0][0], y1 = c[0][1];
    int x2 = c[1][0], y2 = c[1][1];
    int x = x2 - x1, y = y2 - y1;
    for (int i = 1; i < c.size(); i++)
    {
      int x3 = c[i][0], y3 = c[i][1];
      if ((x3 - x1) * y != (y3 - y1) * x)
        return false;
    }
    return true;
  }
};
// @lc code=end
