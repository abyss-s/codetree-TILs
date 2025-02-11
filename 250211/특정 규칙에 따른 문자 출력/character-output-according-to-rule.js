const fs = require("fs");
let n = fs.readFileSync(0).toString().trim();
n = Number(n);


let str = "";
for(let i = 1 ; i < n; i++){
    let str = "  ".repeat(n-i) + "@ ".repeat(i).trim();
    console.log(str);
}

for (let i = n; i > 0; i--) {
    let str = " @".repeat(i).trim();
    console.log(str);
}