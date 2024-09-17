/*
 * @lc app=leetcode id=884 lang=javascript
 *
 * [884] Uncommon Words from Two Sentences
 */

// @lc code=start
/**
 * @param {string} s1
 * @param {string} s2
 * @return {string[]}
 */
var uncommonFromSentences = function (s1, s2) {
  let wordsMap = {};
  const arr1 = s1.split(" ");
  const arr2 = s2.split(" ");
  arr1.map((word) => {
    wordsMap[word] = wordsMap[word] ? wordsMap[word] + 1 : 1;
  })
  arr2.map((word) => {
    wordsMap[word] = wordsMap[word] ? wordsMap[word] + 1 : 1;
  })
  const result = [];
  for (let word in wordsMap) {1137
    if (wordsMap[word] === 1) {
      result.push(word);
    }
  }
  return result;
};
// @lc code=end

