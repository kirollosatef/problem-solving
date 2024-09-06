/*
 * @lc app=leetcode id=112 lang=javascript
 *
 * [112] Path Sum
 */

// @lc code=start
// Definition for a binary tree node.
function TreeNode(val, left, right) {
  this.val = (val === undefined ? 0 : val)
  this.left = (left === undefined ? null : left)
  this.right = (right === undefined ? null : right)
}

/**
 * @param {TreeNode} root
 * @param {number} targetSum
 * @return {boolean}
 */
var hasPathSum = function (root, targetSum) {
  if (root === null) {
    return false;
  }

  if (root.left === null && root.right === null)
    return root.val === targetSum

  return hasPathSum(root.left, targetSum - root.val) || hasPathSum(root.right, targetSum - root.val)
};

// Test case
// Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
// hasPathSum([5, 4, 8, 11, null, 13, 4, 7, 2, null, null, null, 1], 22);
/**
  console.log("🚀 ~ hasPathSum ~ targetSum:", targetSum)
  console.log("🚀 ~ hasPathSum ~ root:", root)
  let nullCount = 0;
  for (let i = 0; i < root.length; i++) {
    if (root[i] === null) {
      nullCount++;
    }
  }

  if (nullCount % 2 === 0) {
    console.log(false);
    return false;
  }
  console.log(true);
  return true;
 */
// @lc code=end

