#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) {
  return (a * b) / gcd(a, b);
}

int lcm_of_list(int numbers[], int n) {
  if (n == 1)
    return numbers[0];
  return lcm(numbers[n - 1], lcm_of_list(numbers, n - 1));
}

int main() {
  int n;
  int arr[10];
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << lcm_of_list(arr, n);
  return 0;
}