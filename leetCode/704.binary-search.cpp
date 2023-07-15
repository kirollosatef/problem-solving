/*
 * @lc app=leetcode id=704 lang=cpp
 *
 * [704] Binary Search
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int l = 0, r = nums.size() - 1;
    while (r >= l)
    {
      int mid = (r + l) / 2;
      if (target == nums[mid])
        return mid;
      else if (target < nums[mid])
        r = mid - 1;
      else if (target > nums[mid])
        l = mid + 1;
    }
    return -1;
  };
};
// @lc code=end
