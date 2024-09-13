// Converting Strings to Arrays: split()

// 1. Basic split() usage
let sentence = "Hello world! How are you?";
let wordsArray = sentence.split(" ");
console.log(wordsArray);
// Output: ["Hello", "world!", "How", "are", "you?"]

// 2. Split with a different delimiter
let csvData = "John,Doe,30,New York";
let dataArray = csvData.split(",");
console.log(dataArray);
// Output: ["John", "Doe", "30", "New York"]

// 3. Limit the number of splits
let limitedSplit = sentence.split(" ", 3);
console.log(limitedSplit);
// Output: ["Hello", "world!", "How"]

// 4. Split into characters
let word = "Hello";
let chars = word.split("");
console.log(chars);
// Output: ["H", "e", "l", "l", "o"]

// 5. Split with a regular expression
let text = "The quick brown fox jumps over the lazy dog";
let words = text.split(/\s+/); // Split on one or more whitespace characters
console.log(words);
// Output: ["The", "quick", "brown", "fox", "jumps", "over", "the", "lazy", "dog"]

// Converting Arrays to Strings: join()

// 1. Basic join() usage
let fruitsArray = ["apple", "banana", "orange"];
let fruitsString = fruitsArray.join(", ");
console.log(fruitsString);
// Output: "apple, banana, orange"

// 2. Join with a different delimiter
let timeArray = [12, 30, 45];
let timeString = timeArray.join(":");
console.log(timeString);
// Output: "12:30:45"

// 3. Join without a delimiter
let letters = ["H", "e", "l", "l", "o"];
let joinedWord = letters.join("");
console.log(joinedWord);
// Output: "Hello"

// 4. Join with a multi-character delimiter
let items = ["Item 1", "Item 2", "Item 3"];
let itemList = items.join(" | ");
console.log(itemList);
// Output: "Item 1 | Item 2 | Item 3"

// Combining split() and join() for string manipulation
let originalString = "The-quick-brown-fox";
let manipulatedString = originalString.split("-").join(" ");
console.log(manipulatedString);
let manipulatedString1 = originalString.replace(/-/g, " ");
console.log(manipulatedString1);
// Output: "The quick brown fox"
// Output: "The quick brown fox"
