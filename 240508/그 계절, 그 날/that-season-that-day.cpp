#include <iostream>
using namespace std;

// 윤년이면 true, 아니면 false
bool isLeapYear(int n) {
  if (n % 4 != 0)
    return false;
  if (n % 100 == 0 && n % 400 != 0)
    return false;
  if (n % 4 == 0 && n % 100 == 0 && n % 400 == 0)
    return true;
  return true;
}

int whatDay(int y, int m) {
  if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    return 31;
  else if (m == 4 || m == 6 || m == 9 || m == 11)
    return 30;
  else if (m == 2) {
    if (isLeapYear(y))
      return 29;
    else
      return 28;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int y, m, d;
  cin >> y >> m >> d;

  if (d <= whatDay(y, m)) {
    if (m == 3 || m == 4 || m == 5)
      cout << "Spring";
    else if (m == 6 || m == 7 || m == 8)
      cout << "Summer";
    else if (m == 9 || m == 10 || m == 11)
      cout << "Fall";
    else if (m == 12 || m == 1 || m == 2)
      cout << "Winter";
    else
      cout << -1;
  } else {
    cout << -1;
  }

  return 0;
}