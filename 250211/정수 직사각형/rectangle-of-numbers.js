
const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split(" ");
const [n, m] = [Number(input[0]), Number(input[1])]
let arr2d = Array(n).fill(0).map(() => Array(m).fill(0));

let cnt = 1;
for (let i = 0; i < n; i++) {
    for (let j = 0; j < m; j++) {
        arr2d[i][j] = cnt++;
    }
}

for (let row of arr2d) {
    let str = "";
    for (let elem of row) {
        str += elem + " ";
    }
    console.log(str);
}
