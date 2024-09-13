// String Concatenation

// 1. Using the + operator
let firstName = "John";
let lastName = "Doe";
let fullName = firstName + " " + lastName;
console.log(fullName); // Output: "John Doe"

// 2. Using the += operator
let greeting = "Hello";
greeting += ", " + firstName + "!";
console.log(greeting); // Output: "Hello, John!"

// 3. Using the concat() method
let message = "Welcome".concat(", ", firstName, " ", lastName, "!");
console.log(message); // Output: "Welcome, John Doe!"

// Template Literals

// 1. Basic usage
let age = 30;
let introduction = `My name is ${firstName} ${lastName} and I'm ${age} years old.`;
console.log(introduction);
// Output: "My name is John Doe and I'm 30 years old."

// 2. Multiline strings
let multiline = `
  This is a multiline string.
  It can span multiple lines
  without the need for \n.
`;
console.log(multiline);

// 3. Expressions in template literals
let a = 5;
let b = 10;
console.log(`The sum of ${a} and ${b} is ${a + b}.`);
// Output: "The sum of 5 and 10 is 15."

// 4. Using functions in template literals
function capitalize(str) {
  return str.charAt(0).toUpperCase() + str.slice(1);
}

const capitalizer = (str) => str.chartAt(0).toUpperCase() + str.slice(1);

let pet = "dog";
console.log(`I have a ${capitalize(pet)}.`);
// Output: "I have a Dog."

// 5. Nesting template literals
let nested = `This is a ${`nested ${`deeply ${`nested`}`}`} template literal.`;
console.log(nested);
// Output: "This is a nested deeply nested template literal."
