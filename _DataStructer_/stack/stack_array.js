const isOperator = (char) => {
  return char === "+" || char === "-" || char === "*" || char === "/";
};
// infix to postfix
const infixToPostfix = (infix) => {
  const stack = [];
  const postfix = [];
  for (let i = 0; i < infix.length; i++) {
    const char = infix[i];
    if (isOperator(char)) {
      while (stack.length > 0 && isOperator(stack[stack.length - 1])) {
        postfix.push(stack.pop());
      }
      stack.push(char);
    } else if (char === "(") {
      stack.push(char);
    } else if (char === ")") {
      while (stack.length > 0 && stack[stack.length - 1] !== "(") {
        postfix.push(stack.pop());
      }
      stack.pop();
    } else {
      postfix.push(char);
    }
  }
  while (stack.length > 0) {
    postfix.push(stack.pop());
  }
  return postfix;
};
let postfix = infixToPostfix("(A+B)*(C+D)");
let str = "";
for (let i = 0; i < postfix.length; i++) {
  str += postfix[i];
}
console.log(str);
