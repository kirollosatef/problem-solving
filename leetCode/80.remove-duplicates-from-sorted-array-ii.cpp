/*
 * @lc app=leetcode id=80 lang=cpp
 *
 * [80] Remove Duplicates from Sorted Array II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int k = 0;
    map<int, int> m;
    for (auto it : nums)
    {
      m[it]++;
      if (m[it] <= 2)
        nums[k++] = it;
    }
    return k;
  }
};
// @lc code=end