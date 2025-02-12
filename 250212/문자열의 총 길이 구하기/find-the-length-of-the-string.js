const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split(" ")

let sum = 0;
for (const elem of input) {
    sum += elem.length;
}
console.log(sum);
