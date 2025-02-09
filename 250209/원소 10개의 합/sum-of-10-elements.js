const fs = require('fs');
let arr = fs.readFileSync(0).toString().trim().split(" ");
let sum=0;
arr.forEach(v =>{
    sum+=Number(v);
});
console.log(sum);