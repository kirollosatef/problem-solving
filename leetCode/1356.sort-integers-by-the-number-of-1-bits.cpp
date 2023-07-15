/*
 * @lc app=leetcode id=1356 lang=cpp
 *
 * [1356] Sort Integers by The Number of 1 Bits
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        vector<int> ans;
        map<int, vector<int>> mp;
        for (auto n : arr) {
            int count = 0;
            int temp = n;
            while (temp) {
                count += temp & 1;
                temp >>= 1;
            }
            mp[count].push_back(n);
        }
        for (auto m : mp) {
            sort(m.second.begin(), m.second.end());
            for (auto n : m.second) {
                ans.push_back(n);
            }
        }
        return ans;
    }
};
// @lc code=end
