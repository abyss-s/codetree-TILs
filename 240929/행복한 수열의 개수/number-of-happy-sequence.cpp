#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);

  int n, m;
  cin >> n >> m;
  int arr[100][100];

  // 격자 입력 받기
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int happy = 0;

  // 행 검사
  for (int i = 0; i < n; i++) {
    int cnt = 1;
    for (int j = 1; j < n; j++) { // j는 1부터
      if (arr[i][j] == arr[i][j - 1]) {
        cnt++;
      } else {
        cnt = 1;
      }
      if (cnt >= m) {
        happy++;
        break;  // 중복 검사 방지용 건너뛰기
      }
    }
  }

  // 열 검사
  for (int j = 0; j < n; j++) {
    int cnt = 1;
    for (int i = 1; i < n; i++) {
      if (arr[i][j] == arr[i - 1][j]) {
        cnt++;
      } else {
        cnt = 1;
      }
      if (cnt >= m) {
        happy++;
        break;
      }
    }
  }

  if (n == 1)
    cout << 1;
  else
      cout << happy;
  return 0;
}