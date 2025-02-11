const fs = require('fs');
const input = fs.readFileSync(0).toString().trim().split('\n');

let nm = input[0].split(' ');
const n = Number(nm[0]);
const m = Number(nm[1]);

let arr1 = Array.from({ length: n }, (_, i) =>
  input[i + 1].split(' ').map(Number)
);

let arr2 = Array.from({ length: n }, (_, i) =>
  input[i + n + 1].split(' ').map(Number)
);

let res = Array.from({ length: n }, () => Array(m).fill(0));

for (let i = 0; i < n; i++) {
  for (let j = 0; j < m; j++) {
    res[i][j] = arr1[i][j] == arr2[i][j] ? 0 : 1;
  }
}

for (let r of res) {
  console.log(r.join(' '));
}
