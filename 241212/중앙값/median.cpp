#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int t;
  cin >> t;
  while (t--) {
    int m;
    cin >> m;
    vector<int> v;

    for (int i = 1; i <= m; i++) {
      int x;
      cin >> x;
      v.push_back(x);
      sort(v.begin(), v.end());

      if (i % 2 == 1) {
        cout << v[i / 2] << " ";
      }
    }

    cout << "\n";
  }

  return 0;
}
