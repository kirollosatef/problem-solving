// Reverse A Number

const reverseNumber = (num) => {
  return parseInt(num.toString().split('').reverse().join('')) * Math.sign(num);
}

console.log(reverseNumber(12345));

const reverseNumberManual = (num) => {
  let reversed = 0;
  while (num !== 0) {
    reversed = reversed * 10 + num % 10;
    num = parseInt(num / 10);
  }
  return reversed;
}