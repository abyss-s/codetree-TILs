#include <algorithm>
#include <iostream>
using namespace std;

bool isSameArr(int arrA[], int arrB[]) {
  for (int i = 0; i < 100; i++) {
    if (arrA[i] != arrB[i]) {
      return false;
    }
  }
  return true;
}

int main() {
  int arrA[100] = {0};
  int arrB[100] = {0};
  int n = 1;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arrA[i];
  }
  sort(arrA, arrA + n);
  for (int i = 0; i < n; i++) {
    cin >> arrB[i];
  }
  sort(arrB, arrB + n);

  if (isSameArr(arrA, arrB))
    cout << "Yes";
  else
    cout << "No";

  return 0;
}