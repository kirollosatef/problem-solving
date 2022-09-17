/*
 * @lc app=leetcode id=119 lang=cpp
 *
 * [119] Pascal's Triangle II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> getRow(int rowIndex)
  {
    if (rowIndex == 0)
      return {1};
    vector<int> brev(1, 1);
    vector<int> ans;
    for (int i = 0; i < rowIndex; i++)
    {
      ans.clear();
      ans.push_back(1);
      for (int j = 0; j < brev.size() - 1; j++)
      {
        int t = brev[j] + brev[j + 1];
        ans.push_back(t);
      }
      ans.push_back(1);
      brev = ans;
    }
    return ans;
  }
};
// @lc code=end
