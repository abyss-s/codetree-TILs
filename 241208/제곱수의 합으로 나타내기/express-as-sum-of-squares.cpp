#include <algorithm>
#include <deque>
#include <iostream>
#include <vector>
using namespace std;
#define M INT_MAX

int sol(int n) {
  vector<int> dp(n + 1, M);
  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j * j <= i; j++) {
      dp[i] = min(dp[i], dp[i - j * j] + 1);
    }
  }
  return dp[n];
}

int main() {
  int n;
  cin >> n;
  cout << sol(n);

  return 0;
}