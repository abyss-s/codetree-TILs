#include <iostream>
using namespace std;

bool IsLeapYear(int n) {
  if (n % 4 != 0) 
    return false;
  if (n % 100 == 0 && n % 400 != 0)
    return false;
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  if (IsLeapYear(n))
    cout << "true";
  else
    cout << "false";

  return 0;
}