#include <iostream>
using namespace std;

int F(int n) {
  if (n == 1)
    return 0;  // 더 이상 나눌 수 없을 때 종료
  int cnt = 1;
  int remainder = n % 10;
  if (remainder % 2 == 0)
    return cnt + F(n / 2);
  else
    return cnt + F(n / 3);
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