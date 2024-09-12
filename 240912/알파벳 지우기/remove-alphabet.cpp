#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string a, b;
  cin >> a >> b;

  string a_str = "";
  for (int i = 0; i < a.length(); i++) {
    if (isdigit(a[i]))
      a_str += a[i];
    else
      continue;
  }

  string b_str = "";
  for (int i = 0; i < b.length(); i++) {
    if (isdigit(b[i]))
      b_str += b[i];
    else
      continue;
  }

  cout << stoi(a_str) + stoi(b_str);

  return 0;
}