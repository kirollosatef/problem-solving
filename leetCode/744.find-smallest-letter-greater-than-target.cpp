/*
 * @lc app=leetcode id=744 lang=cpp
 *
 * [744] Find Smallest Letter Greater Than Target
 */
#include <bits/stdc++.h>
using namespace std;

// @lc code=start
class Solution {
public:
  char nextGreatestLetter(vector<char> &letters, char target) {
    int l = 0;
    int r = letters.size() - 1;
    int trgNum = NC(target);
    int mid = r / 2 + l;
    int midNum = NC(letters[mid]);
    while (l < r) {
      if (midNum >= trgNum) {
        r = mid;
      } else {
        l = mid + 1;
      }
      mid = l + (r - l) / 2;
      midNum = NC(letters[mid]);
    }
    return letters[l % letters.size()];
  }
  int NC(char a) { return a - 'a'; }
};
// @lc code=end
//  1 2 3 4 5 6