#include <iostream>
using namespace std;

int main() {
  int cnt = 0;
  int n = 0;
  for (int i = 0; i < 5; i++) {
    cin >> n;
    if (n % 3 == 0) {
      cnt++;
    }
  }
  if (cnt == 5)
    cout << 1;
  else
    cout << 0;
  return 0;
}