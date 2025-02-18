const fs = require("fs");
const input = fs.readFileSync(0).toString().trim().split("\n");
n = Number(input[0]);
const visited = new Array(n+1).fill(false);
const answer = [];

const choose = (currNum) => {
    // 기저조건
    if(currNum == 0){
         console.log(answer.join(' '));
        return;
    }

    for(let i = n ; i >=1 ; i--){
        if(visited[i]) continue;
        visited[i] = true;
        answer.push(i);

        choose(currNum - 1); // 다음 자릿수 재귀 호출
        answer.pop();
        visited[i] = false;
    }
    return;
}

choose(n);