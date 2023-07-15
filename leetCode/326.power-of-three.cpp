/*
 * @lc app=leetcode id=326 lang=cpp
 *
 * [326] Power of Three
 */

// @lc code=start
class Solution
{
public:
  bool isPowerOfThree(int n)
  {
    if (n == 0)
      return 0;
    while (1)
    {
      if (n == 1 || n == 3)
        return 1;
      if (n % 3 != 0)
        return 0;
      n /= 3;
    }
    return 0;
  }
};
// @lc code=end
