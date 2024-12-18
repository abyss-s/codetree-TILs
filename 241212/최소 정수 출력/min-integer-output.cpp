#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  priority_queue<int> pq;

  while (n--) {
    int x;
    cin >> x;

    if (x == 0) {
      if (pq.empty()) {
        cout << 0 << "\n";
      } else {
        cout << -pq.top() << "\n";
        pq.pop();
      }
    } else
      pq.push(-x);
  }

  return 0;
}
