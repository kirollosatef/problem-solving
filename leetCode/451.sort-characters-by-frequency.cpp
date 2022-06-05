/*
 * @lc app=leetcode id=451 lang=cpp
 *
 * [451] Sort Characters By Frequency
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string frequencySort(string s)
  {
    unordered_map<char, int> m;
    for (char c : s)
      m[c]++;
    vector<pair<int, char>> v;
    for (auto p : m)
      v.push_back(make_pair(p.second, p.first));
    sort(v.begin(), v.end());
    string ans;
    for (auto p : v)
      for (int i = 0; i < p.first; i++)
        ans.push_back(p.second);
    return ans;
  }
};
// @lc code=end
