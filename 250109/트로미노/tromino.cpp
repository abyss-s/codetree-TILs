#include <algorithm>
#include <iostream>
using namespace std;

int n, m;
int grid[200][200];

// 트로미노 블록 (상대 좌표)
int tromino[4][3][2] = {
    {{0, 0}, {0, 1}, {0, 2}},  // 가로
    {{0, 0}, {1, 0}, {2, 0}},  // 세로
    {{0, 0}, {1, 0}, {1, 1}},  // ㄱ
    {{0, 1}, {1, 0}, {1, 1}}   // ㄴ
};

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }

  int maxSum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int t = 0; t < 4; t++) {
        int sum = 0;
        bool valid = true;
        for (int k = 0; k < 3; k++) {
          int ni = i + tromino[t][k][0];
          int nj = j + tromino[t][k][1];
          if (ni >= 0 && ni < n && nj >= 0 && nj < m) {
            sum += grid[ni][nj];
          } else {
            valid = false;
            break;
          }
        }
        if (valid)
          maxSum = max(maxSum, sum);
      }
    }
  }

  cout << maxSum << endl;

  return 0;
}
