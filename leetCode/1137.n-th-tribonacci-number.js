/*
 * @lc app=leetcode id=1137 lang=javascript
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
/**
 * @param {number} n
 * @return {number}
 */

var tribonacci = function (n) {
  let a = 0;
  let b = 1;
  let c = 1;
  let temp = 0;
  for (let i = 0; i < n; i++) {
    temp = a + b + c;
    a = b;
    b = c;
    c = temp;
  }
  return a;
};
// @lc code=end

