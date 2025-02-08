const fs = require("fs");
let input = fs.readFileSync(0).toString().split(" ").map(v=>Number(v));
console.log(input.reduce((a,c)=>a*c,0));