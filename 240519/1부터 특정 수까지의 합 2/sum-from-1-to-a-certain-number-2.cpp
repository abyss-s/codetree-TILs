#include <iostream>
using namespace std;

int Fact(int n) {
  if (n == 1)
    return 1;

  return Fact(n - 1) + n;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  cout << Fact(n);

  return 0;
}