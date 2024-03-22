#include <iostream>
using namespace std;

int main() {
  int a;
  int arr[10] = {0};

  for (int i = 0; i < 10; i++) {
    cin >> a;
    arr[i] = a;
  }
  
  cout << arr[2] + arr[4] + arr[9];

  return 0;
}