#include <iostream>
using namespace std;

void f(int a[], int t, int l) {
  if (t < l)
    return;
  cout << a[t] << " ";
  f(a, t - 1, l);
  cout << a[t] << " ";
}
int main() {
  int a[100];
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    a[i] = i + 1;
  }
  f(a, n-1, 0);
  return 0;
}