/*
 * @lc app=leetcode id=912 lang=cpp
 *
 * [912] Sort an Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> sortArray(vector<int> &nums)
  {
    sort(nums.begin(), nums.end());
    return nums;
  }
};
// @lc code=end
