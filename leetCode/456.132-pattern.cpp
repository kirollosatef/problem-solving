/*
 * @lc app=leetcode id=456 lang=cpp
 *
 * [456] 132 Pattern
 */

// @lc code=start
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  bool find132pattern(vector<int> &nums)
  {
    for (int i = 2; i < nums.size(); i++)
    {
      if (nums[i] < nums[i - 1] && nums[i] > nums[i - 2])
        return true;
    };
    return false;
  };
};
// @lc code=end

//! time Limit
// bool find132pattern(vector<int> &nums)
// {
//   for (int i = 0; i < nums.size(); i++)
//   {
//     for (int j = i + 1; j < nums.size(); j++)
//     {
//       for (int k = j + 1; k < nums.size(); k++)
//       {
//         if (nums[i] < nums[j] && nums[j] > nums[k] && nums[i] < nums[k])
//           return true;
//       }
//     }
//   }
//   return false;
// };

//? stack solution
// bool find132pattern(vector<int> &nums)
// {
//   int n = nums.size();
//   if (n < 3)
//     return false;
//   stack<int> s;
//   int min = nums[0];
//   for (int i = 1; i < n; i++)
//   {
//     if (nums[i] < min)
//       min = nums[i];
//   }
//   for (int i = n - 1; i >= 0; i--)
//   {
//     if (nums[i] > min)
//     {
//       while (!s.empty() && s.top() < nums[i])
//       {
//         if (s.top() < nums[i])
//           return true;
//         s.pop();
//       }
//       s.push(nums[i]);
//     }
//   }
//   return false;
// };