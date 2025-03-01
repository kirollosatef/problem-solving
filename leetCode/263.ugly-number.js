/*
 * @lc app=leetcode id=263 lang=javascript
 *
 * [263] Ugly Number
 */

// @lc code=start
/**
 * @param {number} n
 * @return {boolean}
 */
var isUgly = function (n) {
  if (n <= 0) return false;
  if (n === 1) return true;

  while (n % 2 === 0) n /= 2;

  while (n % 3 === 0) n /= 3;

  while (n % 5 === 0) n /= 5;

  return n === 1;
};
// @lc code=end

