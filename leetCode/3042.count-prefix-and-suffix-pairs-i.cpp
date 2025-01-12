/*
 * @lc app=leetcode id=3042 lang=cpp
 *
 * [3042] Count Prefix and Suffix Pairs I
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
    int countPrefixSuffixPairs(vector<string> &words)
    {
        int count = 0;
        for (int i = 0; i < words.size(); i++)
        {
            for (int j = i + 1; j < words.size(); j++)
            {
                if (isPrefixAndSuffix(words[i], words[j]))
                    count++;
            }
        }
        return count;
    }
    bool isPrefixAndSuffix(string str1, string str2)
    {
        if (str1.size() > str2.size())
            return false;

        int n = str1.size();
        for (int i = 0; i < n; i++)
        {
            if (str1[i] != str2[i] || str1[i] != str2[str2.size() - n + i])
                return false;
        }
        return true;
    }
};
// @lc code=end
