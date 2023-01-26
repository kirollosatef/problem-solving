/*
 * @lc app=leetcode id=496 lang=cpp
 *
 * [496] Next Greater Element I
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
// @lc code=start
class Solution
{
public:
  struct Node
  {
    int value = -1;
  };
  vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
  {
    vector<int> ans;
    map<int, Node> mp;
    for (int i = 0; i < nums2.size(); i++)
    {
      for (int j = i + 1; j < nums2.size(); j++)
      {
        if (nums2[j] > nums2[i])
        {
          mp[nums2[i]].value = nums2[j];
          break;
        }
      }
    }
    for (int i = 0; i < nums1.size(); i++)
    {
      ans.push_back(mp[nums1[i]].value);
    }
    return ans;
  }
};
// @lc code=end
