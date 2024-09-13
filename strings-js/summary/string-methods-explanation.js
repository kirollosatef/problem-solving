// 1. charAt(), slice(), substring(), substr()

let str = "Hello, World!";

// charAt() - Returns the character at a specified index
console.log(str.charAt(1)); // Output: 'e'

// slice() - Extracts a part of a string and returns it
console.log(str.slice(0, 5)); // Output: 'Hello'
console.log(str.slice(7)); // Output: 'World!'

// substring() - Similar to slice(), but doesn't support negative indexes
console.log(str.substring(7, 12)); // Output: 'World'

// substr() - Extracts a specified number of characters from a string (deprecated)
console.log(str.substr(7, 5)); // Output: 'World'

// 2. indexOf(), lastIndexOf()

// indexOf() - Returns the index of the first occurrence of a specified value
console.log(str.indexOf('o')); // Output: 4

// lastIndexOf() - Returns the index of the last occurrence of a specified value
console.log(str.lastIndexOf('o')); // Output: 8

// 3. toLowerCase(), toUpperCase()

// toLowerCase() - Converts a string to lowercase letters
console.log(str.toLowerCase()); // Output: 'hello, world!'

// toUpperCase() - Converts a string to uppercase letters
console.log(str.toUpperCase()); // Output: 'HELLO, WORLD!'

// 4. trim(), replace()

let strWithSpaces = "   Hello, World!   ";

// trim() - Removes whitespace from both ends of a string
console.log(strWithSpaces.trim()); // Output: 'Hello, World!'

// replace() - Replaces a specified value with another value in a string
console.log(str.replace('Hello', 'Hi')); // Output: 'Hi, World!'

// replace() with regex - Replace all occurrences
console.log(str.replace(/l/g, 'L')); // Output: 'HeLLo, WorLd!'
