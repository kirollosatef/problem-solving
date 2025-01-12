/*
 * @lc app=leetcode id=1930 lang=cpp
 *
 * [1930] Unique Length-3 Palindromic Subsequences
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
#define pii pair<int, int>
public:
    int countPalindromicSubsequence(string s)
    {
        int n = s.size();
        unordered_map<char, pii> fl;
        // Step 1 get the First and Last for each char
        for (int i = 0; i < n; i++)
        {
            if (!fl.count(s[i]))
                fl[s[i]].first = fl[s[i]].second = i;
            else
                fl[s[i]].second = i;
        }

        // Step 2 find unique element count in range
        int count = 0;
        for (auto [c, se] : fl)
        {
            if (se.first == se.second)
                continue;
            count +=
                unordered_set<char>(s.begin() + se.first + 1, s.begin() + se.second).size();
        }
        return count;
    }
};
// @lc code=end
