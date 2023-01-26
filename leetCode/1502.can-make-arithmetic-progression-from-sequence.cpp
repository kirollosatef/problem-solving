/*
 * @lc app=leetcode id=1502 lang=cpp
 *
 * [1502] Can Make Arithmetic Progression From Sequence
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool canMakeArithmeticProgression(vector<int> &arr)
  {
    sort(arr.begin(), arr.end());
    int def = arr[0] - arr[1];
    int n = arr.size();
    for (int i = 1; i < n - 1; i++)
    {
      if (arr[i] - arr[i + 1] != def)
        return false;
    }
    return true;
  }
};
// @lc code=end
