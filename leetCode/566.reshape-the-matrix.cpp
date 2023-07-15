/*
 * @lc app=leetcode id=566 lang=cpp
 *
 * [566] Reshape the Matrix
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
  {
    int row = mat.size();
    int col = mat[0].size();
    vector<vector<int>> newMat;
    int cnt = 0;
    if (row * col != r * c)
      return mat;
    for (int i = 0; i < r; i++)
    {
      vector<int> row_vect;
      for (int j = 0; j < c; j++)
      {
        row_vect.push_back(mat[cnt / col][cnt % col]);
        cnt++;
      }
      newMat.push_back(row_vect);
    }
    return newMat;
  }
};
// @lc code=end

// vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
// {
//   vector<int> sec;
//   vector<vector<int>> ans;
//   for (int i = 0; i < mat.size(); i++)
//   {
//     for (int j = 0; j < mat[i].size(); j++)
//     {
//       sec.push_back(mat[i][j]);
//     }
//   }
//   int k = 0, ok = 0;

//   for (int i = 0; i < r; i++)
//   {
//     vector<int> tmp;
//     for (int j = 0; j < c; j++)
//     {
//       tmp.push_back(sec[k++]);
//       if (k == sec.size())
//       {
//         ok++;
//         break;
//       }
//     }
//     ans.push_back(tmp);
//     if (ok)
//       break;
//   }
//   return ans;
// }
