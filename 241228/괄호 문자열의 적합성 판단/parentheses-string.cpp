#include <iostream>
#include <stack>
using namespace std;

int main() {
  string s;
  cin >> s;
  stack<char> stk;

  for (char c : s) {
    if (c == '(')
      stk.push(c);
    else if (c == ')') {
      if (stk.empty()) {
        cout << "No" << endl;
        return 0;
      }
      stk.pop();
    }
  }

  cout << (stk.empty() ? "Yes" : "No") << endl;

  return 0;
}
