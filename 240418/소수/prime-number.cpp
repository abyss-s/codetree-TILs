#include <iostream>
using namespace std;

/* 소수가 맞는지 확인하는 함수 */
bool isPrime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++) {
    // 2부터 n-1까지의 자연수 중 n의 약수가 있는지 확인
    if (n % i == 0)
      return false;
  }
  return true;
}

int main() {
  int a, b;
  bool truePrime = false;  // 소수인지 아닌지 판별 용 변수
  int sum = 0;        // 범위 내 소수의 합을 저장하기 위한 변수
  int minPrime = -1;  // 찾은 소수 중 가장 작은 소수를 저장
  cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      truePrime = true;
      sum += i;
      if (minPrime == -1 || i < minPrime)
        minPrime = i;
    }
  }
  if (truePrime) {
    cout << sum << "\n";
    cout << minPrime << "\n";
  } else {
    cout << -1 << "\n";
  }
  return 0;
}