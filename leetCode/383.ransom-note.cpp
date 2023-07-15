/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool canConstruct(string ransomNote, string magazine)
  {
    int arr[26] = {0};
    for (int i = 0; i < magazine.size(); i++)
      arr[magazine[i] - 'a']++;
    for (int i = 0; i < ransomNote.size(); i++)
      if (arr[ransomNote[i] - 'a'] - 1 < 0)
        return false;
      else
        arr[ransomNote[i] - 'a']--;
    return true;
  }
};
// @lc code=end
