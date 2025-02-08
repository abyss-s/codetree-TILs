const fs = require("fs");
let a = fs.readFileSync(0).toString();
console.log((Number(a)*30.48).toFixed(1));
