#include <iostream>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  char a, b;
  cin >> a >> b;

  int differ;
  if (int(a) > int(b)) {
    differ = int(a) - int(b);
  } else {
    differ = int(b) - int(a);
  }

  cout << int(a) + int(b) << " " << differ;
  return 0;
}