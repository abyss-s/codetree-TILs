#include <iostream>
#include <queue>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  queue<int> q;

  for (int i = 1; i <= n; i++) {
    q.push(i);
  }

  while (q.size() != 1) {
    // 앞 사람들을 뒤로 보내기
    for (int i = 0; i < k - 1; i++) {
      q.push(q.front());
      q.pop();
    }

    // k 번째 사람 제거하고 출력
    cout << q.front() << " ";
    q.pop();
  }

  // 남은 1명 출력
  cout << q.front();

  return 0;
}