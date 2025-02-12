const fs = require('fs');
let n = fs.readFileSync(0).toString().trim();
n = Number(n);

let arr2d = Array.from({length: n}, ()=> Array(n).fill(0));

for(let i = 0 ; i < n ; i++){
    for(let j = 0 ; j < n ; j++){
        arr2d[i][j] = (i+1) + n*j;
    }
}

for(let r of arr2d){
    console.log(r.join(' '));
}