const fs = require('fs');

// 코드트리 테스트용
const input = fs.readFileSync(0).toString().trim().split('\n');

// 로컬 테스트용: 입력 파일 경로 설정
// const filePath =
//   process.platform === 'linux' ? '/dev/stdin' : __dirname + '/input.txt';
// const input = fs.readFileSync(filePath).toString().trim().split('\n');

const n = Number(input[0]);
const arr2d = input.slice(1).map((line) => line.split(' ').map(Number));
let visited = Array(n).fill(false);
let maxSum = 0;

const choose = (row, sum) => {
  // 기저조건: 모든 행을 순회한 경우
  if (row === n) {
    maxSum = Math.max(maxSum, sum); // 최대 합 갱신
    return;
  }

  for (let col = 0; col < n; col++) {
    // 방문한 열이라면 건너뛰기
    if (visited[col]) continue;
    visited[col] = true;
    choose(row + 1, sum + arr2d[row][col]); // 다음 행으로 이동
    visited[col] = false;
  }
};

choose(0, 0);
console.log(maxSum);
