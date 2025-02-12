const fs = require('fs');
let input = fs.readFileSync(0).toString().trim().split(" ");

n = Number(input[0]);
m = Number(input[1]);

let arr2d = Array.from({length: n}, ()=> Array(m).fill(0));
// let arr2d = Array(n).fill(0).map(()=>Array(m).fill(0));

let cur = 0;

// 열 기준으로 분할 정복
for(let j = 0 ; j < m ; j++){
    // 홀수 행이면 아래로 갈수록 증가
   if(j % 2 == 0){
        for(let i = 0 ; i < n ; i++){
            arr2d[i][j] = cur;
            cur++;
        }
    }
    // 짝수 행이면 아래로 갈수록 감소
    else{
        for(let i = n-1 ; i >= 0 ; i--){
            arr2d[i][j] = cur;
            cur++;
        }
    }
}

for(let r of arr2d){
    console.log(r.join(' '));
}