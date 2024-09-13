// Problem 1: URL Slug Generator
function generateSlug(title) {
    return title
        .toLowerCase()
        .replace(/[^\w\s-]/g, '')  // Remove non-word chars (except spaces and hyphens)
        .replace(/\s+/g, '-')      // Replace spaces with hyphens
        .replace(/-+/g, '-')       // Replace multiple hyphens with single hyphen
        .trim();                   // Trim hyphens from start and end
}

console.log(generateSlug("Hello World! This is a test."));
// Output: "hello-world-this-is-a-test"

// Problem 2: Email Obfuscator
function obfuscateEmail(email) {
    let [username, domain] = email.split('@');
    let obfuscatedUsername = username.charAt(0) + '*'.repeat(username.length - 2) + username.charAt(username.length - 1);
    let [domainName, tld] = domain.split('.');
    let obfuscatedDomain = domainName.charAt(0) + '*'.repeat(domainName.length - 2) + domainName.charAt(domainName.length - 1);
    return `${obfuscatedUsername}@${obfuscatedDomain}.${tld}`;
}

console.log(obfuscateEmail("john.doe@example.com"));
// Output: "j******e@e*****e.com"

// Problem 3: Advanced CSV Parser
function parseCSV(csvString) {
    const rows = csvString.split('\n');
    const headers = rows[0].split(',');
    return rows.slice(1).map(row => {
        const values = row.split(',');
        return headers.reduce((obj, header, index) => {
            obj[header.trim()] = values[index].trim();
            return obj;
        }, {});
    });
}

const csvData = `
Name,Age,City
John Doe,30,New York
Jane Smith,25,Los Angeles
Bob Johnson,45,Chicago
`.trim();

console.log(parseCSV(csvData));
// Output: [
//   { Name: 'John Doe', Age: '30', City: 'New York' },
//   { Name: 'Jane Smith', Age: '25', City: 'Los Angeles' },
//   { Name: 'Bob Johnson', Age: '45', City: 'Chicago' }
// ]

// Problem 4: Template Engine
function renderTemplate(template, data) {
    return template.replace(/\${(\w+)}/g, (match, key) => data[key] || match);
}

const template = "Hello, ${name}! Welcome to ${city}.";
const data = { name: "Alice", city: "Wonderland" };
console.log(renderTemplate(template, data));
// Output: "Hello, Alice! Welcome to Wonderland."

// Problem 5: Word Frequency Counter
function wordFrequency(text) {
    const words = text.toLowerCase().match(/\b\w+\b/g);
    return words.reduce((freq, word) => {
        freq[word] = (freq[word] || 0) + 1;
        return freq;
    }, {});
}

const sampleText = "The quick brown fox jumps over the lazy dog. The dog barks, and the fox runs away.";
console.log(wordFrequency(sampleText));
// Output: { the: 4, quick: 1, brown: 1, fox: 2, jumps: 1, over: 1, lazy: 1, dog: 2, barks: 1, and: 1, runs: 1, away: 1 }

// Problem 6: Credit Card Number Formatter
function formatCreditCard(cardNumber) {
    return cardNumber.replace(/\s/g, '')  // Remove existing spaces
                     .replace(/(\d{4})/g, '$1 ')  // Add space every 4 digits
                     .trim();  // Remove trailing space
}

console.log(formatCreditCard("1234567890123456"));
// Output: "1234 5678 9012 3456"

// Problem 7: Palindrome Checker (ignoring non-alphanumeric characters)
function isPalindrome(str) {
    const cleanStr = str.toLowerCase().replace(/[^a-z0-9]/g, '');
    return cleanStr === cleanStr.split('').reverse().join('');
}

console.log(isPalindrome("A man, a plan, a canal: Panama"));  // Output: true
console.log(isPalindrome("race a car"));  // Output: false
