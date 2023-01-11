/*
 * @lc app=leetcode id=1491 lang=cpp
 *
 * [1491] Average Salary Excluding the Minimum and Maximum Salary
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  double average(vector<int> &salary)
  {
    int mx = INT_MIN, mn = INT_MAX, sum = 0;
    for (int i = 0; i < salary.size(); i++)
    {
      mx = max(mx, salary[i]);
      mn = min(mn, salary[i]);
      sum += salary[i];
    }
    return (sum - mx - mn) / (salary.size() - 2.0);
  }
};
// @lc code=end
