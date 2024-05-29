#include <iostream>
using namespace std;
int cnt = 0;

int f(int n, int cnt) {
  if (n == 0) {
    return cnt;
  }
  if (n == 1) {
    return cnt;
  } else {
    if (n % 2 == 0)
      return f(n / 2, cnt + 1);
    else
      return f(n * 3 + 1, cnt + 1);
  }
}

int main() {
  int n;
  cin >> n;
  cout << f(n, 0);
  return 0;
}