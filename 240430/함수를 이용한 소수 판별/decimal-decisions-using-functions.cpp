#include <iostream>
using namespace std;

bool isPrime(int n) {
  for (int i = 2; i < n; i++)
    if (n % i == 0)
      return false;
  return true;
}

int isPrime_sum(int a, int b) {
  int sum = 0;
  for (int i = a; i <= b; i++)
    if (isPrime(i))
      sum += i;
  return sum;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;
  cout << isPrime_sum(a, b);

  return 0;
}