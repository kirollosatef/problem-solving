/*
 * @lc app=leetcode id=509 lang=cpp
 *
 * [509] Fibonacci Number
 */

// @lc code=start
class Solution
{
public:
  int fib(int n)
  {
    if (n == 0)
      return 0;
    if (n == 1 || n == 2)
      return 1;
    int bottomup[n + 1];
    bottomup[0] = 0;
    bottomup[1] = 1;
    bottomup[2] = 1;
    for (int i = 3; i <= n; i++)
      bottomup[i] = bottomup[i - 1] + bottomup[i - 2];
    return bottomup[n];
  }
};
// @lc code=end
