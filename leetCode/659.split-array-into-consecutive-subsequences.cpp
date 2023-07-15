/*
 * @lc app=leetcode id=659 lang=cpp
 *
 * [659] Split Array into Consecutive Subsequences
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool isPossible(vector<int> &nums)
  {
    int arr[1] = , ans = 1, ok = 0;
    for (int i = 1; i < nums.size(); i++)
    {
      if ((nums[i] - min) == 1)
      {
        ans++;
        min = nums[i];
        if (ans == 3)
        {
          ok++;
          ans = 0;
          min = nums[i];
          i++;
          if (ok == 2)
            return 1;
        }
      }
    }
    return 0;
  }
};
// @lc code=end
