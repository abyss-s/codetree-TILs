#include <iostream>
using namespace std;

int f(int x) {
  if (x == 0)
    return 0;
  if (x == 1) {
    return 1;
  }
  if (x == 2) {
    return 2;
  }
  return f(x / 3) + f(x - 1);
}

int main() {
  int n;
  cin >> n;
  cout << f(n);

  return 0;
}