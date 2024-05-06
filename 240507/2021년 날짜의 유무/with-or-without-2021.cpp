#include <iostream>
using namespace std;

int whatDay(int m) {
  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    return 31;
  else if (m == 4 || m == 6 || m == 9 || m == 11)
    return 30;
  else if (m == 2)
    return 28;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int a, b;
  cin >> a >> b;

  if (a <= 12 && b <= whatDay(a)) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}