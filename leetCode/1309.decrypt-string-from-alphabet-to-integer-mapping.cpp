/*
 * @lc app=leetcode id=1309 lang=cpp
 *
 * [1309] Decrypt String from Alphabet to Integer Mapping
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  string freqAlphabets(string s)
  {
    vector<int> arr;
    for (int i = s.size() - 1; i >= 0; i--)
    {
      if (s[i] == '#')
      {
        int x = s[i - 1] - '0' + 10 * (s[i - 2] - '0');
        i -= 2;
        arr.push_back(x);
      }
      else
      {
        arr.push_back(s[i] - '0');
      }
    }
    reverse(arr.begin(), arr.end());
    string ans = "";
    for (int i = 0; i < arr.size(); i++)
    {
      ans += (arr[i] - 1) + 'a';
    }
    return ans;
  }
};
// @lc code=end
