/**

Given a String str, reverse the string without reversing its individual words. Words are separated by dots.

Note: The last character has not been '.'. 

Examples :

Input: str = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole string(not individual words), the input string becomes much.very.program.this.like.i

Input: str = pqr.mno
Output: mno.pqr
Explanation: After reversing the whole string , the input string becomes mno.pqr

Expected Time Complexity: O(|str|)
Expected Auxiliary Space: O(|str|) 

Constraints:
1 <= |str| <= 105

*/


class Solution {
  // Function to reverse words in a given string.
  reverseWords(str) {
    let ans = "";
    const arr = str.split(".");
    for (let i = arr.length - 1; i >= 0; i--) {
      if (i === 0) ans += arr[i];
      else ans += (arr[i] + ".");
    }
    return ans;
  }
}

// run the code with example
const str = "i.like.this.program.very.much";
const solution = new Solution();
const result = solution.reverseWords(str);
console.log(result); // much.very.program.this.like.i