/*
 * @lc app=leetcode id=771 lang=cpp
 *
 * [771] Jewels and Stones
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_map<char, int> mp;
        for (int i = 0; i < stones.size(); i++)
            mp[stones[i]]++;
        int ans = 0;
        for (auto ch : jewels)
            ans += mp[ch];
        return ans;
    }
};
// @lc code=end
