#include <iostream>
#include <cmath>
using namespace std;

int f(int a, int b) {
  return pow(a, b);
}

int main() {
  int a, b;
  cin >> a >> b;
  cout << f(a, b);
  return 0;
}