/*
 * @lc app=leetcode id=804 lang=cpp
 *
 * [804] Unique Morse Code Words
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int uniqueMorseRepresentations(vector<string> &words)
  {
    string arr[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    map<string, bool> mp;
    int ans = 0;
    for (int i = 0; i < words.size(); i++)
    {
      string s = "";
      for (int j = 0; j < words[i].size(); j++)
      {
        s += arr[words[i][j] - 'a'];
      }
      if (mp[s] != 1)
      {
        ans++;
        mp[s] = 1;
      }
    }
    return ans;
  }
};
// @lc code=end
