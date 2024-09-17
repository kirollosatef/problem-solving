/*
 * @lc app=leetcode id=1371 lang=javascript
 *
 * [1371] Find the Longest Substring Containing Vowels in Even Counts
 */

// @lc code=start
/**
 * @param {string} s
 * @return {number}
 */
var findTheLongestSubstring = function (s) {
  let hashTable = {};
  for (let i = 0; i < s.length; i++) {
    hashTable[s[i]] = i;
  }
  
};
// @lc code=end

