#include <iostream>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int result=0;
  for (int i = a; i <= b; i++) {
    if (1920 % i == 0 && 2880 % i == 0) {
      result = 1;
    }
  }
  cout << result;
  return 0;
}