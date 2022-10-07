/*
 * @lc app=leetcode id=658 lang=cpp
 *
 * [658] Find K Closest Elements
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> findClosestElements(vector<int> &arr, int k, int x)
  {
    int flag = -1, mn = INT_MAX;
    vector<int> ans;
    for (int i = 0; i < arr.size(); i++)
    {
      if (mn < min(mn, abs(arr[i] - x)))
      {
        mn = min(mn, abs(arr[i] - x));
        flag = i;
      }
    }
    int a = flag, b = flag;
    while (k--)
    {
      if (abs(arr[a] - x) <= abs(arr[b] - x) && a != -1)
      {
        ans.push_back(arr[a]);
        a--;
      }
      else if (abs(arr[a] - x) > abs(arr[b] - x) && b != arr.size())
      {
        ans.push_back(arr[b]);
        b++;
      }
    }
    return ans;
  }
};
// @lc code=end
