// Find Duplicate Characters In A String

const findDuplicateCharacters = (str) => {
  let result = '';
  const charMap = {};
  for (let char of str) {
    if (charMap[char]) {
      charMap[char]++;
    } else {
      charMap[char] = 1;
    }
  }
  for (let char in charMap) {
    if (charMap[char] > 1) {
      result += char;
    }
  }
  return result;
}