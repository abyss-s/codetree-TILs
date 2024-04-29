#include <algorithm>
#include <iostream>
using namespace std;

void findMin() {
  int a, b, c;
  cin >> a >> b >> c;
  int arr[3];
  arr[0] = a;
  arr[1] = b;
  arr[2] = c;
  sort(arr, arr + 3);
  int min = arr[0];
  cout << min;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  findMin();

  return 0;
}