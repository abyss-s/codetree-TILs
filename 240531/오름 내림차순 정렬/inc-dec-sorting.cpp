#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

int main() {
  int n;
  int arr[100];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // 오름차순
  sort(arr, arr + n);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  // 내림차순
  sort(arr, arr + n, greater<int>());
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}