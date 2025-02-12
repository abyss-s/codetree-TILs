const fs = require("fs");
let input = fs.readFileSync(0).toString().trim().split("\n")

let n = Number(input[0]);
let arr = new Array(n);

for (let i = 0; i < n; i++) {
    arr[i] = input[i+1];
}

let res1 = 0; // 문자열 길이의 합
let res2 = 0; // 주어진 문자열 중 첫번째 문자가 a인 횟수

for (const elem of arr){
    res1 += elem.length;
    if (elem.charAt(0)==='a') res2++;
}

console.log(res1 + " " + res2);
