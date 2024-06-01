#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
  string arr[1000] = {""};
  long int n = 1;
  long int k = 1;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + n);

  for (int i = 0; i < n; i++) {
    if (i == k - 1) {
      cout << arr[k - 1];
      break;
    }
  }

  return 0;
}