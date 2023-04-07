/*
 * @lc app=leetcode id=2160 lang=cpp
 *
 * [2160] Minimum Sum of Four Digit Number After Splitting Digits
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
  int minimumSum(int num)
  {
    int _1 = num % 10;
    num /= 10;
    int _2 = num % 10;
    num /= 10;
    int _3 = num % 10;
    num /= 10;
    int _4 = num % 10;
    num /= 10;
    vector<int> all = {_1, _2, _3, _4};
    sort(all.begin(), all.end());
    int ans = all[0] * 10 + all[1] * 10 + all[2] + all[3];
    return ans;
  }
};
// @lc code=end
