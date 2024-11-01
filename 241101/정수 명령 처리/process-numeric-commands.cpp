#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
  int N;
  cin >> N;

  stack<int> st;

  while (N--) {
    string command;
    cin >> command;

    if (command == "push") {
      int x;
      cin >> x;
      st.push(x);
    } else if (command == "pop") {
      if (st.empty()) {
        cout << -1 << endl;
      } else {
        cout << st.top() << endl;
        st.pop();
      }
    } else if (command == "size") {
      cout << st.size() << endl;
    } else if (command == "empty") {
      cout << (st.empty() ? 1 : 0) << endl;
    } else if (command == "top") {
      if (st.empty()) {
        cout << -1 << endl;
      } else {
        cout << st.top() << endl;
      }
    }
  }

  return 0;
}