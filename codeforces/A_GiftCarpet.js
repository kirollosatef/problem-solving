const main = (n, m, arr) => {
  let idx = 0;
  let j = 0;
  let lastI = 0;
  const ans = ["v", "i", "k", "a"];
  for (let i = 0; i < m; i++) {
    if (arr[j][i] == ans[idx]) {
      idx++;
      lastI = i;
    }
    if (i === m - 1 && idx < 3) {
      i = lastI;
      j++;
      if (j === n - 1) break;
    }
    if (idx === 3) {
      break;
    }
  }
  if (idx === 3) {
    console.log("YES");
  } else {
    console.log("NO");
  }
};

import { createInterface } from "readline";
const rl = createInterface({
  input: process.stdin,
  output: process.stdout,
});

let t;
let n, m;
const arr = [];

rl.on("line", (line) => {
  if (!t) {
    t = +line;
    return;
  }
  if (!n) {
    [n, m] = line.split(" ").map((x) => +x);
    return;
  }
  arr.push(line);
  if (arr.length === n) {
    main(n, m, arr);
    t--;
    n = m = 0;
    arr.length = 0;
  }
  if (t === 0) {
    rl.close();
  }
});
