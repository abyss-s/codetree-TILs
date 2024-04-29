#include <iostream>
using namespace std;

bool Is369(int n) {
  while (n > 0) {  // 가장 큰 자리수까지 이동
    int nn = n % 10;  // 일의 자리 수
    if (nn == 3 || nn == 6 || nn == 9)
      return true;
    n /= 10; // 자릿 수 줄이기 -> 다음 자리수로 이동
  }
  return false;
}

bool Is3x(int n) {
  return n % 3 == 0;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a,b;
  int cnt=0;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (Is369(i) || Is3x(i))
      cnt++;
  }
  cout << cnt;
  return 0;
}