/*
 * @lc app=leetcode id=88 lang=cpp
 *
 * [88] Merge Sorted Array
 */
#include <bits/stdc++.h>
using namespace std;
// @lc code=start
class Solution
{
public:
  //? runtime: 10.15 %, memory: 30.76 %, (9.2 MB)(9 ms)
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {
    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 and j >= 0)
      if (nums1[i] < nums2[j])
        nums1[k--] = nums2[j--];
      else
        nums1[k--] = nums1[i--];
    while (j >= 0)
      nums1[k--] = nums2[j--];
  }
};
// @lc code=end
//? runtime: 15.19 %, memory: 30.76 %, (9.2 MB)
// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {
//   vector<int> temp(m + n);
//   int n1 = 0, n2 = 0;
//   for (int i = 0; i < m + n; i++)
//   {
//     if (n1 < m && n2 < n)
//     {
//       if (nums1[n1] < nums2[n2])
//       {
//         temp[i] = nums1[n1];
//         n1++;
//       }
//       else
//       {
//         temp[i] = nums2[n2];
//         n2++;
//       }
//     }
//     else if (n1 < m)
//     {
//       temp[i] = nums1[n1];
//       n1++;
//     }
//     else if (n2 < n)
//     {
//       temp[i] = nums2[n2];
//       n2++;
//     }
//   }
//   nums1 = temp;
// }
//? runtime: 10.15 %, memory: 30.76 %, (9.2 MB)(9 ms)
// void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
// {
//   int i = m - 1, j = n - 1, k = m + n - 1;
//   while (i >= 0 and j >= 0)
//     if (nums1[i] < nums2[j])
//       nums1[k--] = nums2[j--];
//     else
//       nums1[k--] = nums1[i--];
//   while (j >= 0)
//     nums1[k--] = nums2[j--];
// }