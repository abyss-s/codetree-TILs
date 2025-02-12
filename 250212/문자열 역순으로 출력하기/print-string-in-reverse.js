const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n").filter(v=>v.trim('')!=="\n");

let n = 4;
let arr = new Array(n);
for (let i = 0; i < n; i++) {
    arr[i] = input[i];
}
arr.reverse();
for (const elem of arr) {
    console.log(elem);
}
