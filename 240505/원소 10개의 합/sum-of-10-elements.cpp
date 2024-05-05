#include <iostream>
using namespace std;

int main() {
  int val, sum_val;
  sum_val = 0;
  for (int i = 0; i < 10; i++) {
    cin >> val;
    sum_val += val;
  }
  cout << sum_val;

  return 0;
}