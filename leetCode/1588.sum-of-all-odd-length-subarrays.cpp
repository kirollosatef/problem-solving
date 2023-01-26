/*
 * @lc app=leetcode id=1588 lang=cpp
 *
 * [1588] Sum of All Odd Length Subarrays
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  int sumOddLengthSubarrays(vector<int> &arr)
  {
    int ans = 0, i = 0;
    while (i < arr.size())
    {
      int cnt = 0;
      for (int j = i; j < arr.size(); j++)
      {
        cnt += arr[j];
        if ((j - i + 1) % 2 == 1)
        {
          ans += cnt;
        }
      }
      i++;
    }
    return ans;
  }
};
// @lc code=end

// int sum = 0;
// for (int i = 0; i < arr.size(); i++)
// {
//   for (int j = i; j < arr.size(); j += 2)
//   {
//     for(int k = i ; k <= j ; k++)
//     {
//       sum += arr[k];
//     }
//   }
// }
// return sum;
