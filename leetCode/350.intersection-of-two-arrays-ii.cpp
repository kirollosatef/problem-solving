/*
 * @lc app=leetcode id=350 lang=cpp
 *
 * [350] Intersection of Two Arrays II
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
  {
    unordered_map<int, int> hash_table;
    vector<int> common;

    // Create a hash table to store the elements and their frequencies in nums1
    for (int num : nums1)
    {
      if (hash_table.count(num) > 0)
      {
        hash_table[num]++;
      }
      else
      {
        hash_table[num] = 1;
      }
    }

    // Iterate through the elements of nums2
    for (int num : nums2)
    {
      // If the element is in the hash table
      if (hash_table.count(num) > 0)
      {
        // Add the element to the common list
        common.push_back(num);
        // Decrease the frequency of the element in the hash table
        hash_table[num]--;
        // If the frequency of the element in the hash table is 0, remove it
        if (hash_table[num] == 0)
        {
          hash_table.erase(num);
        }
      }
    }
    return common;
  }
};

// @lc code=end
