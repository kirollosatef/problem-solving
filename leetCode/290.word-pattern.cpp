/*
 * @lc app=leetcode id=290 lang=cpp
 *
 * [290] Word Pattern
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool wordPattern(string pattern, string s)
  {
    vector<string> words = split(s);
    if (pattern.size() != words.size())
      return false;
    unordered_map<char, string> L_W;
    unordered_map<string, char> W_L;
    for (int i = 0; i < pattern.size(); i++)
    {
      char l = pattern[i];
      string w = words[i];
      if (L_W.count(l) == 0 && W_L.count(w) == 0)
      {
        L_W[l] = w;
        W_L[w] = l;
      }
      else if (L_W[l] != w || W_L[w] != l)
      {
        return false;
      }
    }
    return true;
  }

  vector<string> split(string s)
  {
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word)
    {
      words.push_back(word);
    }
    return words;
  }
};
// @lc code=end

// bool wordPattern(string pattern, string s)
// {
//   map<char, string> mp;
//   int n = pattern.size();
//   string arr[n];
//   int idx = 0;
//   for (int i = 0; i < s.size(); i++)
//   {
//     if (s[i] == ' ')
//       idx++;
//     arr[idx] += s[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (mp.find(pattern[i]) != mp.end())
//     {
//       if (mp[pattern[i]] != arr[i])
//         return 0;
//     }
//     else
//       mp[pattern[i]] = arr[i];
//   }
//   return 1;
// }
