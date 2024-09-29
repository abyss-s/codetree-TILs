#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int arr[20][20];

  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int max_cnt = 0;  // 격자의 최대 크기

  for (int i = 0; i < n - 2; i++) {
    for (int j = 0; j < n - 2; j++) {
      // 3x3 크기 격자 내 동전 수 합 계산
      int cnt = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j] +
                arr[i + 1][j + 1] + arr[i + 1][j + 2] + arr[i + 2][j] +
                arr[i + 2][j + 1] + arr[i + 2][j + 2];
      max_cnt = max(cnt, max_cnt);
    }
  }

  cout << max_cnt;

  return 0;
}