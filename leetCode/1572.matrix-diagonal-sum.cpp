/*
 * @lc app=leetcode id=1572 lang=cpp
 *
 * [1572] Matrix Diagonal Sum
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int diagonalSum(vector<vector<int>> &mat)
  {
    int n = mat.size();
    int l = 0, r = n - 1;
    int sum = 0;
    int i = 0, ok = 0;
    while (i < n)
    {
      if (l == r)
        sum += mat[i][l];
      else
      {
        sum += mat[i][l];
        sum += mat[i][r];
      }
      i++, l++, r--;
    }
    return sum;
  }
};
// @lc code=end
