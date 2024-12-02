#include <deque>
#include <iostream>
using namespace std;

int main() {
  deque<int> dq;
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    if (s == "push_back") {
      int a;
      cin >> a;
      dq.push_back(a);
    }
    if (s == "push_front") {
      int a;
      cin >> a;
      dq.push_front(a);
    }
    if (s == "pop_back") {
      cout << dq.back() << endl;
      dq.pop_back();
    }
    if (s == "pop_front") {
      cout << dq.front() << endl;
      dq.pop_front();
    }
    if (s == "size") {
      cout << dq.size() << endl;
    }
    if (s == "front") {
      cout << dq.front() << endl;
    }
    if (s == "back") {
      cout << dq.back() << endl;
    }
    if (s == "empty") {
      if (dq.empty())
        cout << 1 << endl;
      else
        cout << 0 << endl;
    }
  }

  return 0;
}
