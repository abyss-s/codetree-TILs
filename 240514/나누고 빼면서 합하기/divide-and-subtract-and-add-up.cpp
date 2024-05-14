#include <iostream>
using namespace std;

bool isOdd(int n) {
  if (n % 2 == 1)
    return true;
  else
    return false;
}

int main() {
  int n, m;
  cin >> n >> m;
  int arr[100] = {};
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int sum = arr[m-1];
  while (m > 1) {
    if (isOdd(m)) {
      m -= 1;
    } else {
      m /= 2;
    }
    sum += arr[m-1];
  }
  cout << sum;
  return 0;
}