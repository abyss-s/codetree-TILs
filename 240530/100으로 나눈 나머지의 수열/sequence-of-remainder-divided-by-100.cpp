#include <iostream>
using namespace std;

int f(int x) {
  if (x == 0)
    return 0;
  if (x == 1) {
    return 2;
  }
  if (x == 2) {
    return 4;
  }
  return (f(x - 2) * f(x - 1)) % 100;
}

int main() {
  int n;
  cin >> n;
  cout << f(n);

  return 0;
}