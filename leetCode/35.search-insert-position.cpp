/*
 * @lc app=leetcode id=35 lang=cpp
 *
 * [35] Search Insert Position
 */
/*
  - Given a sorted array of distinct integers and a target
  value, return the index if the target is found. If not,
  return the index where it would be if it were inserted in
  order.
  - You must write an algorithm with O(log n) runtime
  complexity.
*/
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int searchInsert(vector<int> &nums, int target)
  {
    int low = 0, high = nums.size() - 1;
    int mid = (low + high) / 2;
    while (low <= high)
    {
      mid = (low + high) / 2;
      int gess = nums[mid];
      if (gess == target)
        return mid;
      if (gess > target)
        high = mid - 1;
      else
        low = mid + 1;
    }
    return low;
  }
};
// @lc code=end
