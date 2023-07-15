/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  void moveZeroes(vector<int> &arr)
  {
    int n = arr.size();
    int nZrs = 0;
    for (int i = 0; i < n; i++)
      nZrs += (arr[i] == 0);
    vector<int> ans;
    for (int i = 0; i < n; i++)
      if (arr[i])
        ans.push_back(arr[i]);
    while (nZrs--)
      ans.push_back(0);
    arr = ans;
  }
};
// @lc code=end
