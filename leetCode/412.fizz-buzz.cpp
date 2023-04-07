/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<string> fizzBuzz(int n)
  {
    vector<string> ans;
    for (int i = 1; i <= n; i++)
    {
      if (i % 3 == 0 and i % 5 == 0)
        ans.push_back("FizzBuzz");
      else if (i % 3 == 0)
        ans.push_back("Fizz");
      else if (i % 5 == 0)
        ans.push_back("Buzz");
      else
        ans.push_back(to_string(i));
    }
    return ans;
  }
};
// @lc code=end
