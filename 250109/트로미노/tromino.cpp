#include <algorithm>
#include <iostream>
using namespace std;

int n, m;
int grid[200][200];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> grid[i][j];
    }
  }

  // Write your code here!
  int maxSum = 0;

  // 니은 블럭
  for (int i = 0; i < n - 2; i++) {
    for (int j = 0; j < m - 1; j++) {
      int sum =
          grid[i][j] + grid[i + 1][j] + grid[i + 2][j] + grid[i + 2][j + 1];
      maxSum = max(sum, maxSum);
    }
  }

  // 일자 블럭
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m - 3; j++) {
      int sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2] + grid[i][j + 3];
      maxSum = max(maxSum, sum);
    }
  }

  cout << maxSum;

  return 0;
}
