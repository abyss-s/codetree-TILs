#include <iostream>
using namespace std;
int arr[100] = {0};

int f(int x, int maxIdx = 0) {
  if (x == 0) {
    return maxIdx;
  }

  if (arr[maxIdx] < arr[x - 1])
    maxIdx = x - 1;

  return f(x - 1, maxIdx);
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int maxIndex = f(n, 0);
  cout << arr[maxIndex];

  return 0;
}