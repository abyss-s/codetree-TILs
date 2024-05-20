#include <iostream>
using namespace std;

int F(int n) {
  if (n < 3) {
    if (n == 0)
      return 0;
    if (n == 1)
      return 1;
    if (n == 2)
      return 2;
  }
  if (n % 2 == 0) {
    return n + F(n - 2);
  } else {
    return n + F(n - 2);
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  cout << F(n);

  return 0;
}