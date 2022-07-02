/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int tribonacci(int n)
  {
    vector<int> T;
    T.push_back(0);
    T.push_back(1);
    T.push_back(1);
    for (int i = 3; i <= n; i++)
    {
      T.push_back(T[i - 1] + T[i - 2] + T[i - 3]);
    }
    return T[n];
  }
};
// @lc code=end
/**
  long long memo[38] = {0};
  int memoize(int n)
  {
    int result = 0;
    if (memo[n] != 0)
      return memo[n];
    if (n == 0)
      result = 0;
    else if (n == 1)
      result = 1;
    else if (n == 2)
      result = 1;
    else
      result = memoize(n - 1) + memoize(n - 2);
    memo[n] = result;
    return result;
  }
  int tribonacci(int n)
  {
    memoize(n);
    int count = 0;
    count = memo[n - 1] + memo[n - 2] + memo[n - 3];
    return count;
  }
**/
