/*
 * @lc app=leetcode id=1345 lang=cpp
 *
 * [1345] Jump Game IV
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int minJumps(vector<int> &arr)
  {
    int n = arr.size();
    if (n == 1)
      return 0;
    unordered_map<int, vector<int>> mp;
    for (int i = 0; i < n; i++)
    {
      mp[arr[i]].push_back(i);
    }
    vector<bool> vis(n, false);
    queue<int> q;
    q.push(0);
    vis[0] = true;
    int level = 0;
    while (!q.empty())
    {
      int sz = q.size();
      while (sz--)
      {
        int curr = q.front();
        q.pop();
        if (curr == n - 1)
          return level;
        if (curr - 1 >= 0 && !vis[curr - 1])
        {
          q.push(curr - 1);
          vis[curr - 1] = true;
        }
        if (curr + 1 < n && !vis[curr + 1])
        {
          q.push(curr + 1);
          vis[curr + 1] = true;
        }
        for (auto x : mp[arr[curr]])
        {
          if (!vis[x])
          {
            q.push(x);
            vis[x] = true;
          }
        }
        mp[arr[curr]].clear();
      }
      level++;
    }
    return -1;
  }
};
// @lc code=end
