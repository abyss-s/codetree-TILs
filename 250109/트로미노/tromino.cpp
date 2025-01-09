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

  int maxSum = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m - 2; j++) {
      int sum = grid[i][j] + grid[i][j + 1] + grid[i][j + 2];
      maxSum = max(maxSum, sum);
    }
  }

  for (int i = 0; i < n - 2; i++) {
    for (int j = 0; j < m; j++) {
      int sum = grid[i][j] + grid[i + 1][j] + grid[i + 2][j];
      maxSum = max(maxSum, sum);
    }
  }

  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < m - 1; j++) {
      int sum1 = grid[i][j] + grid[i + 1][j] + grid[i + 1][j + 1];
      int sum2 = grid[i][j + 1] + grid[i + 1][j] + grid[i + 1][j + 1];
      maxSum = max({maxSum, sum1, sum2});
    }
  }

  cout << maxSum << endl;

  return 0;
}
