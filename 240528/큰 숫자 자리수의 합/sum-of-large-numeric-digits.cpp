#include <iostream>
using namespace std;

int g(long long int x) {
  if (x < 10)
    return x;
  else
    return g(x / 10) + (x % 10);
}

long long int f(int a, int b, int c) {
  return a * b * c;
}

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int mul = f(a, b, c);
  cout << g(mul);

  return 0;
}