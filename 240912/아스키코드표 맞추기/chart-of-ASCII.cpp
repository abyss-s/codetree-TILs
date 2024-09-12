#include <iostream>
using namespace std;

int main() {
  int t = 5;
  int arr[5];
  int i = 0;
  while (t--) {
    cin >> arr[i];
    i++;
  }
  for (int i = 0; i < 5; i++) {
    cout << char(arr[i]) << " ";
  }
  return 0;
}