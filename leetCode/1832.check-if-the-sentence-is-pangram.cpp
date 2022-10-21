/*
 * @lc app=leetcode id=1832 lang=cpp
 *
 * [1832] Check if the Sentence Is Pangram
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  bool checkIfPangram(string sentence)
  {
    bool arr[26] = {0};
    int c = 0;
    int n = sentence.size();
    for (int i = 0; i < n; i++)
    {
      if (!arr[sentence[i] - 'a'])
      {
        arr[sentence[i] - 'a'] = 1;
        c++;
      }
    }
    if(c == 26)
      return true;
    return false;
  }
};
// @lc code=end
