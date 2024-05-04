#include <iostream>
using namespace std;

bool isOnjeonsu(int n) {
  if (n % 2 == 0)
    return false;
  if (n % 3 == 0 && n % 9 != 0)
    return false;
  int a = n % 10;  // 일의 자리
  if (a % 5 == 0)
    return false;
  return true;
}

int main() {
  int a, b;
  cin >> a >> b;
  int cnt = 0;
  for (int i = a; i <= b; i++) {
    if (isOnjeonsu(i))
      cnt++;
  }
  cout << cnt;
  return 0;
}