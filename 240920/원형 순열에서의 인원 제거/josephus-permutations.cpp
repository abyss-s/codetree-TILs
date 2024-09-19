#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;

  queue<int> q;
  vector<int> result;

  for (int i = 1; i <= n; i++) {
    q.push(i);
  }

  while (!q.empty()) {
    // K-1명은 다시 큐의 뒤로 보내기
    for (int i = 1; i < k; i++) {
      int front = q.front();
      q.pop();
      q.push(front);
    }

    // K번째 사람은 제거
    result.push_back(q.front());
    q.pop();
  }

  for (int i = 0; i < result.size(); i++) {
    cout << result[i];
    if (i != result.size() - 1) {
      cout << " ";
    }
  }

  return 0;
}