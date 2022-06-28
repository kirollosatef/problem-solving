/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int i = 0;
    for (int j = 0; j < nums.size(); j++)
    {
      if (nums[i] != nums[j])
      {
        i++;
        nums[i] = nums[j];
      }
    }
    return i + 1;
  }
};
// @lc code=end
