#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  char c;
  double a, b;
  cin >> c >> a >> b;
  cout << c << "\n" << setprecision(2) << fixed << a << "\n" << b;
  return 0;
}