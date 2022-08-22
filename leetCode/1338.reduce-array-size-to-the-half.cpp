/*
 * @lc app=leetcode id=1338 lang=cpp
 *
 * [1338] Reduce Array Size to The Half
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int minSetSize(vector<int> &arr)
  {
    priority_queue<int> q;
    map<int, int> mp;
    int n = arr.size();
    for (auto it : arr)
      mp[it]++;
    for (auto it : mp)
      q.push(it.second);
    int flag = 0, ans = 0;
    while (!q.empty())
    {
      flag += q.top();
      q.pop();
      ans++;
      if (flag >= (n / 2))
        return ans;
    }
    return 0;
  }
};
// @lc code=end
