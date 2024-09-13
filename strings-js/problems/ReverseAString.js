// Reverse a string

const reverseString = (str) => {
  return str.split('').reverse().join('');
}

const reverseStringManual = (str) => {
  let reversed = '';
  for (let i = str.length - 1; i >= 0; i--) {
    reversed += str[i];
  }
  return reversed;
}

// const reverseStringRecursive = (str) => {
//   if (str === '') {
//     return '';
//   } else {
//     return reverseStringRecursive(str.substr(1)) + str.charAt(0);
//   }
// }

const reverseStringWith2Pointers = (str) => {
  let arr = str.split('');
  let left = 0;
  let right = arr.length - 1;
  while (left < right) {
    [arr[left], arr[right]] = [arr[right], arr[left]];
    left++;
    right--;
  }
  return arr.join('');
}