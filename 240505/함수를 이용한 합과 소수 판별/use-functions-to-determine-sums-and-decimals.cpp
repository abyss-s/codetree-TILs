#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++) {
    if (n % i == 0)
      return false;
  }
  return true;
}

bool isSumEven(int n) {
  int sum = 0;
  while (true) {
    int temp = n % 10;
    sum += temp;
    n /= 10;
    if (temp == 0)
      break;
  }
  if (sum % 2 == 0)
    return true;
  else
    return false;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  int cnt = 0;
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (isPrime(i) && isSumEven(i))
      cnt++;
  }
  cout << cnt;
  return 0;
}