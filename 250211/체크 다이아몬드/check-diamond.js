const fs = require("fs");
let n = fs.readFileSync(0).toString().trim();
n = Number(n);

for(let i = 1; i <= n; i++){
    let line = " ".repeat(n-i)+ "* ".repeat(i).trim();
    console.log(line);
}

for(let i = n-1; i > 0; i--){
    let line = " ".repeat(n-i)+ "* ".repeat(i).trim();
    console.log(line);
}

