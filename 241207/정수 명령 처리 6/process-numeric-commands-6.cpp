#include <iostream>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> pq;
  int t;
  cin >> t;
  while (t--) {
    string s;
    int a;
    cin >> s;
    if (s == "push") {
      cin >> a;
      pq.push(a);
    } else if (s == "pop") {
      int p = pq.top();
      cout << p << endl;
      pq.pop();
    } else if (s == "size") {
      cout << pq.size() << endl;
    } else if (s == "empty") {
      cout << (pq.empty() ? 1 : 0) << endl;
    } else if (s == "top") {
      cout << pq.top() << endl;
    }
  }
  return 0;
}
