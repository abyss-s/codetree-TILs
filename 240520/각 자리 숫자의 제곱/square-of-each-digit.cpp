#include <iostream>
using namespace std;

// 각 자리 숫자의 제곱의 합을 출력
int F(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return n;
  return (n % 10) * (n % 10) + F(n / 10);
 ;
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