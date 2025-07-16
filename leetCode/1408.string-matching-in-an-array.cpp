/*
 * @lc app=leetcode id=1408 lang=cpp
 *
 * [1408] String Matching in an Array
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution
{
public:
    vector<string> stringMatching(vector<string> &words)
    {
        vector<string> ans;
        for (int i = 0; i < words.size(); ++i)
        {
            const string &str = words[i];
            for (int j = 0; j < words.size(); ++j)
            {
                if (i != j && words[j].find(str) != string::npos)
                {
                    ans.push_back(str);
                    break;
                }
            }
        }
        return ans;
    }
};
// @lc code=end
/**
Explanation
Initialization: We start by initializing an empty vector ans to store the results.

Outer Loop: For each string str in the input array words, we check if it is a substring of any other string.

Inner Loop: For each other string in the array (excluding the current string itself), we use the find method to check if str is a substring. The find method returns the position of the substring if found, or string::npos if not found.

Check and Add: If str is found as a substring in any other string, we add it to ans and break out of the inner loop to avoid adding duplicates.
 */