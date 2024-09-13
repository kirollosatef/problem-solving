const toCamelCase = (str) => {
  let arr = str.split('-')
  let newArr = arr.slice(1).map(ar => {
    ar = ar.charAt(0).toUpperCase() + ar.slice(1);
    return ar;
  }, {})
  return arr[0] + newArr.join("")
}

console.log(toCamelCase("the-stealth-warrior"))