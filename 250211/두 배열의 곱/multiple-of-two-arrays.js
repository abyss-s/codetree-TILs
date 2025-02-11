const fs = require("fs");
const n = 3;
const input = fs.readFileSync(0).toString().trim().split("\n")
        .filter(line => line.trim() !== "");
for(line of input){
    line.replace(/\n/g, "");
}

let arr1 = Array.from({ length: n }, (_, i) => input[i].split(" ").map(v => Number(v)));
let arr2 = Array.from({ length: n }, (_, i) => input[i + n].split(" ").map(v => Number(v)));
let res = Array.from({ length: n }, () => Array(n).fill(0));

for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
        res[i][j] = arr1[i][j] * arr2[i][j];
        // console.log("확인용: " + arr1[i][j] + " * " + arr2[i][j] + " = " + res[i][j]);
    }
}

for (let row of res) {
    let line = "";
    for (let elem of row) {
        line += elem + " ";
    }
    console.log(line.trim());
}