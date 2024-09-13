/*
 * @lc app=leetcode id=1662 lang=cpp
 *
 * [1662] Check If Two String Arrays are Equivalent
 */

#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
    {
        string test1 = "", test2 = "";
        for (auto ch : word1)
            test1 += ch;
        for (auto ch : word2)
            test2 += ch;
        if (test1 == test2)
            return true;
        return false;
    }
};
// @lc code=end
