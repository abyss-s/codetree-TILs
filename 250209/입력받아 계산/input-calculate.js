const fs = require("fs");

let a = fs.readFileSync(0).toString();
let res = parseInt(a)+2;
console.log(res);
