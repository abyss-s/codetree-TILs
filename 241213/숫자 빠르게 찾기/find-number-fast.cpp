#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  while (m--) {
    int a;
    cin >> a;
    auto it = lower_bound(arr.begin(), arr.end(), a);
    if (it != arr.end() && *it == a)
      cout << (it - arr.begin() + 1) << "\n";
    else
      cout << -1 << "\n";
  }

  return 0;
}
