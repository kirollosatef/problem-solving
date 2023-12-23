/*
 * @lc app=leetcode id=500 lang=cpp
 *
 * [500] Keyboard Row
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<string> findWords(vector<string> &words)
  {
    map<char, int> all;
    all['q'] = 1;
    all['w'] = 1;
    all['e'] = 1;
    all['r'] = 1;
    all['t'] = 1;
    all['y'] = 1;
    all['u'] = 1;
    all['i'] = 1;
    all['o'] = 1;
    all['p'] = 1;
    all['a'] = 2;
    all['s'] = 2;
    all['d'] = 2;
    all['f'] = 2;
    all['g'] = 2;
    all['h'] = 2;
    all['j'] = 2;
    all['k'] = 2;
    all['l'] = 2;
    all['z'] = 3;
    all['x'] = 3;
    all['c'] = 3;
    all['v'] = 3;
    all['b'] = 3;
    all['n'] = 3;
    all['m'] = 3;
    vector<string> res;
    for (auto &word : words)
    {
      int ok = 1;
      string nword = word;
      transform(nword.begin(), nword.end(), nword.begin(), ::tolower);
      for (int i = 0; i < nword.size(); i++)
      {
        int vldt = all[nword[0]];
        if (all[nword[i]] != vldt)
        {
          ok = 0;
          break;
        }
      }
      if (ok == 1)
        res.push_back(word);
    }
    return res;
  }
};
// @lc code=end
