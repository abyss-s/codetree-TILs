#include <iostream>
using namespace std;

int isSubsequence(string a, string b) {
  for (int start = 0; start <= a.length() - b.length(); start++) {
    bool match = true;
    for (int i = 0; i < b.length(); ++i) {
      if (a[start + i] != b[i]) {
        match = false;
        break;
      }
    }
    if (match)
      return start;
  }
  return -1;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  string a, b;
  cin >> a >> b;
  cout << isSubsequence(a, b);

  return 0;
}