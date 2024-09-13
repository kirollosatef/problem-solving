// Basic pattern matching
let text = "The quick brown fox jumps over the lazy dog";
console.log("Text:", text);

// 1. Test for a pattern
let pattern = /fox/;
console.log("Pattern:", pattern);
console.log("Pattern test result:", pattern.test(text));  // Output: true

// 2. Find a match
let match = text.match(/brown/);
console.log("Match result:", match);  // Output: ["brown", index: 10, input: "The quick brown fox jumps over the lazy dog", groups: undefined]

// 3. Find all matches
let allMatches = text.match(/the/gi);
console.log("All matches result:", allMatches);  // Output: ["The", "the"]

// 4. Using character classes
let words = text.match(/\b\w{5}\b/g);  // Match all 5-letter words
console.log("5-letter words:", words);  // Output: ["quick", "brown", "jumps"]

// String replacement using regex
// 5. Basic replacement
let replaced = text.replace(/dog/, "cat");
console.log("Basic replacement result:", replaced);  // Output: "The quick brown fox jumps over the lazy cat"

// 6. Global replacement
let globalReplaced = text.replace(/the/gi, "a");
console.log("Global replacement result:", globalReplaced);  // Output: "a quick brown fox jumps over a lazy dog"

// 7. Using capture groups
let names = "John Doe, Jane Smith, Bob Johnson";
console.log("Names:", names);
let swapped = names.replace(/(\w+)\s(\w+)/g, "$2, $1");
console.log("Swapped names result:", swapped);  // Output: "Doe, John, Smith, Jane, Johnson, Bob"

// 8. Using a replacement function
let numbered = text.replace(/\b\w+\b/g, (match, index) => `${index}:${match}`);
console.log("Numbered words result:", numbered);
// Output: "0:The 4:quick 10:brown 16:fox 20:jumps 26:over 31:the 35:lazy 40:dog"

// More advanced patterns
// 9. Email validation
let email = "user@example.com";
console.log("Email:", email);
let emailPattern = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
console.log("Email validation result:", emailPattern.test(email));  // Output: true

// 10. Extracting information
let productCode = "ABC-12345-Z";
console.log("Product code:", productCode);
let [, category, id, series] = productCode.match(/([A-Z]+)-(\d+)-([A-Z])/);
console.log(`Extracted information - Category: ${category}, ID: ${id}, Series: ${series}`);
// Output: "Category: ABC, ID: 12345, Series: Z"

// 11. Lookahead and lookbehind
let password = "MyPassword123!";
console.log("Password:", password);
let strongPassword = /^(?=.*[A-Z])(?=.*[a-z])(?=.*\d)(?=.*[!@#$%^&*]).{8,}$/;
console.log("Strong password test result:", strongPassword.test(password));  // Output: true

// 12. Replacing HTML tags
let html = "<p>This is <b>bold</b> and <i>italic</i> text</p>";
console.log("HTML:", html);
let plainText = html.replace(/<[^>]+>/g, "");
console.log("Plain text result:", plainText);  // Output: "This is bold and italic text"
