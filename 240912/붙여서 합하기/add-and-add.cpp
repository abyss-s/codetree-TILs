#include <iostream>
#include <string>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  string a, b;
  cin >> a >> b;
  cout << stoi(a + b) + stoi(b + a);
  return 0;
}