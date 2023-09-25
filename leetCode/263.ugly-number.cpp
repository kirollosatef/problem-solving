/*
 * @lc app=leetcode id=263 lang=cpp
 *
 * [263] Ugly Number
 */

// @lc code=start
class Solution
{
public:
    bool isUgly(int n)
    {
        int div = 2;
        while (n > 1)
        {
            if (n % div == 0)
            {
                if (div != 2 && div != 3 && div != 5)
                    return false;
                n /= div;
            }
            else
                div++;
        }
        return true;
    }
};
// @lc code=end
