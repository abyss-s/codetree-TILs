#include <iostream>
#include <queue>
using namespace std;

int main() {
  queue<int> q;
  int n;
  cin >> n;
  while (n--) {
    string c;
    cin >> c;
    int a;
    if (c == "push") {
      cin >> a;
      q.push(a);
    } else if (c == "pop") {
      cout << q.front() << "\n";
      q.pop();
    } else if (c == "size") {
      cout << q.size() << "\n";

    } else if (c == "empty") {
      if (q.size() == 0)
        cout << 1 << "\n";
      else
        cout << 0 << "\n";
    } else if (c == "front") {
      cout << q.front() << "\n";
    }
  }

  return 0;
}