#include <iostream>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int max = a;
  int arr[3] = {a, b, c};
  for (int i = 1; i < 3; i++) {
    if (max < arr[i])
      max = arr[i];
  }
  cout << max;
  return 0;
}