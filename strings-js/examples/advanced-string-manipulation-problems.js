// Problem 1: Advanced Password Validator
function validatePassword(password) {
    const rules = [
        { regex: /.{8,}/, message: "be at least 8 characters long" },
        { regex: /[A-Z]/, message: "contain at least one uppercase letter" },
        { regex: /[a-z]/, message: "contain at least one lowercase letter" },
        { regex: /[0-9]/, message: "contain at least one number" },
        { regex: /[^A-Za-z0-9]/, message: "contain at least one special character" }
    ];

    const failedRules = rules.filter(rule => !rule.regex.test(password));
    
    if (failedRules.length === 0) {
        return "Password is valid";
    } else {
        const errorMessages = failedRules.map(rule => rule.message);
        return `Password must ${errorMessages.join(", and ")}`;
    }
}

console.log(validatePassword("weak"));
console.log(validatePassword("Str0ng!Pass"));

// Problem 2: Advanced String Compressor
function compressString(str) {
    return str.replace(/(.)\1+/g, (match, char) => `${char}${match.length}`);
}

function decompressString(str) {
    return str.replace(/(\w)(\d+)/g, (match, char, count) => char.repeat(Number(count)));
}

console.log(compressString("AABBBCCCC"));  // Output: "A2B3C4"
console.log(decompressString("A2B3C4"));  // Output: "AABBBCCCC"

// Problem 3: Nested Parentheses Balancer
function balanceParentheses(str) {
    let balanced = str;
    const stack = [];
    let insertions = 0;

    for (let i = 0; i < balanced.length; i++) {
        if (balanced[i] === '(') {
            stack.push(i + insertions);
        } else if (balanced[i] === ')') {
            if (stack.length === 0) {
                balanced = balanced.slice(0, i + insertions) + '(' + balanced.slice(i + insertions);
                insertions++;
            } else {
                stack.pop();
            }
        }
    }

    while (stack.length > 0) {
        const index = stack.pop();
        balanced = balanced.slice(0, index + 1) + ')' + balanced.slice(index + 1);
    }

    return balanced;
}

console.log(balanceParentheses("((()"));  // Output: "((()))"
console.log(balanceParentheses(")("));    // Output: "()()"

// Problem 4: Advanced Markdown Parser
function parseMarkdown(markdown) {
    let html = markdown
        // Headers
        .replace(/^(#{1,6})\s(.+)$/gm, (match, hashes, content) => `<h${hashes.length}>${content}</h${hashes.length}>`)
        // Bold
        .replace(/\*\*(.+?)\*\*/g, '<strong>$1</strong>')
        // Italic
        .replace(/\*(.+?)\*/g, '<em>$1</em>')
        // Links
        .replace(/\[(.+?)\]\((.+?)\)/g, '<a href="$2">$1</a>')
        // Lists
        .replace(/^\s*[-*+]\s(.+)$/gm, '<li>$1</li>')
        .replace(/(<li>.*<\/li>\n?)+/g, '<ul>$&</ul>');

    return html.trim();
}

const markdown = `
# Welcome to Markdown

**Bold** and *italic* text are supported.

- List item 1
- List item 2

[Visit OpenAI](https://www.openai.com)
`;

console.log(parseMarkdown(markdown));

// Problem 5: Advanced Regex-based Code Highlighter
function highlightCode(code) {
    const highlightRules = [
        { pattern: /\b(function|return|if|else|for|while)\b/g, replacement: '<keyword>$1</keyword>' },
        { pattern: /"(?:\\.|[^"\\])*"/g, replacement: '<string>$&</string>' },
        { pattern: /'(?:\\.|[^'\\])*'/g, replacement: '<string>$&</string>' },
        { pattern: /\/\/.*$/gm, replacement: '<comment>$&</comment>' },
        { pattern: /\b([0-9]+)\b/g, replacement: '<number>$1</number>' },
    ];

    return highlightRules.reduce((highlightedCode, rule) => 
        highlightedCode.replace(rule.pattern, rule.replacement), code);
}

const sampleCode = `
function greet(name) {
    // This is a comment
    return "Hello, " + name + "!";
}

let result = greet('World');
console.log(result);  // Outputs: Hello, World!
`;

console.log(highlightCode(sampleCode));

// Problem 6: Advanced String Interpolation
function interpolate(template, context) {
    return template.replace(/\${(.*?)}/g, (match, expr) => {
        try {
            return new Function(...Object.keys(context), `return ${expr}`)(...Object.values(context));
        } catch (error) {
            return match;
        }
    });
}

const context = {
    name: "Alice",
    age: 30,
    calculateYear: function(years) { return new Date().getFullYear() + years; }
};

const template = "Hello, ${name}! You will be ${age + 5} years old in ${calculateYear(5)}.";
console.log(interpolate(template, context));
// Output: "Hello, Alice! You will be 35 years old in 2028."
