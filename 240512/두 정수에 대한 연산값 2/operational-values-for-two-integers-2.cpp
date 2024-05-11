#include <iostream>
using namespace std;

void f(int a, int b) {
  int max, min;
  if (a >= b) {
    max = a;
    min = b;
  } else {
    max = b;
    min = a;
  }
  cout << min + 10 << " " << max * 2;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  
  int a, b;
  cin >> a >> b;
  f(a, b);

  return 0;
}