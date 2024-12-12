#include <algorithm>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int m;
    cin >> m;
    priority_queue<int> p;                             // 최대힙
    priority_queue<int, vector<int>, greater<int>> q;  // 최소힙

    for (int i = 1; i <= m; i++) {
      int x;
      cin >> x;

      if (p.empty() || x <= p.top())
        p.push(x);
      else
        q.push(x);

      if (p.size() > q.size() + 1) {
        q.push(p.top());
        p.pop();
      } else if (q.size() > p.size()) {
        p.push(q.top());
        q.pop();
      }

      if (i % 2 == 1) {
        cout << p.top() << " ";
      }
    }
    cout << "\n";
  }

  return 0;
}
