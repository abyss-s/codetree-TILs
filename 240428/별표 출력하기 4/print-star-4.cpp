#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= n - i; j++) {
      cout << "*"
           << " ";
    }
    cout << endl;
  }

  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*"
           << " ";
    }
    cout << endl;
  }

  return 0;
}